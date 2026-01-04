from __future__ import annotations

import argparse
import importlib
import json
import sys
from pathlib import Path
from typing import Optional, Dict, Any

from verification.verification_wrapper import run_verification, Group

import math


def aggregate_result_score_from_tasks(tasks_root: Path) -> Dict[str, Any]:
    by_task: Dict[str, float] = {}

    for metrics_file in tasks_root.rglob("metrics.json"):
        try:
            data = json.loads(metrics_file.read_text(encoding="utf-8"))
        except Exception:
            continue

        task = data.get("task")
        score = data.get("result_score")

        if not isinstance(task, str):
            continue
        if not isinstance(score, (int, float)):
            continue
        if math.isnan(score):
            continue

        s = float(score)
        by_task[task] = max(by_task.get(task, float("-inf")), s)

    scores = list(by_task.values())
    total = len(scores)

    return {
        "count": total,
        "mean": sum(scores) / total if total else float("nan"),
        "num_ones": sum(1 for s in scores if s == 1.0),
        "num_zeros": sum(1 for s in scores if s == 0.0),
        "zero_tasks": sorted([(t, s) for t, s in by_task.items() if s == 0.0]),
        "not_one_tasks": sorted([(t, s) for t, s in by_task.items() if s != 1.0],
                                key=lambda x: (x[1], x[0])),
    }


def import_solution_from_dir(task_dir: Path):
    sys.path.insert(0, str(task_dir))
    sys.modules.pop("solution", None)
    try:
        sol = importlib.import_module("solution")
    finally:
        sys.path.pop(0)
    return sol


def import_verifier_from_dir(verify_dir: Path, unique_mod_name: str):
    matches = sorted(verify_dir.glob("*_verification.py"))
    if len(matches) != 1:
        raise RuntimeError(f"Expected exactly 1 '*_verification.py' in {verify_dir}, got {len(matches)}: {matches}")
    vfile = matches[0]

    import importlib.util
    sys.path.insert(0, str(verify_dir))
    try:
        spec = importlib.util.spec_from_file_location(unique_mod_name, vfile)
        mod = importlib.util.module_from_spec(spec)
        assert spec.loader is not None
        spec.loader.exec_module(mod)
        return mod
    finally:
        sys.path.pop(0)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--runlist", default="runlist.jsonl")
    parser.add_argument("--tasks-root", default=".")
    parser.add_argument("--fail-fast", action="store_true")
    args = parser.parse_args()

    root = Path(__file__).resolve().parent
    tasks_root = (root / args.tasks_root).resolve()
    runlist_path = (root / args.runlist).resolve()

    if not runlist_path.exists():
        print(f"[ERROR] runlist not found: {runlist_path}")
        return 2

    passed = failed = skipped = 0

    with open(runlist_path, "r", encoding="utf-8") as f:
        lines = [ln.strip() for ln in f if ln.strip() and not ln.strip().startswith("#")]

    for idx, ln in enumerate(lines, 1):
        item = json.loads(ln)

        task_name: str = item["task_name"]
        group: Group = item["group"]
        task_dir = (tasks_root / item["task_dir"]).resolve()
        verify_dir = (tasks_root / item["verify_dir"]).resolve()

        sol_file = task_dir / "solution.py"
        v_file = verify_dir / sorted(verify_dir.glob(f"*_verification.py"))[0]

        if not sol_file.exists() or not v_file.exists():
            print(f"[SKIP {idx}/{len(lines)}] {group}/{task_name}: missing solution.py or _verification.py")
            skipped += 1
            continue

        print(f"\n=== [{idx}/{len(lines)}] {group}/{task_name} ===")
        try:
            sol = import_solution_from_dir(task_dir)
            qasm_string = getattr(sol, "qasm_string", None)
            code_string: Optional[str] = getattr(sol, "code_string", None)

            if qasm_string is None:
                raise RuntimeError("solution.py must define qasm_string")
            if group == "algorithm_design" and code_string is None:
                code_string = None

            vmod = import_verifier_from_dir(verify_dir, unique_mod_name=f"_ver_{task_name}_{idx}")
            compute_metrics = getattr(vmod, "check_model", None)
            if compute_metrics is None:
                raise RuntimeError("verification.py must define compute_metrics(...)")

            metrics = run_verification(
                task_name=task_name,
                group=group,
                qasm_string=qasm_string,
                code_string=code_string,
                compute_metrics=compute_metrics,
                tasks_root=task_dir.parent,
                workdir=verify_dir,
            )

            if metrics.get("pass", True):
                print("PASS")
                passed += 1
            else:
                print("FAIL")
                failed += 1
                if args.fail_fast:
                    break

        except Exception as e:
            print(f"[ERROR] {group}/{task_name}: {e}")
            failed += 1
            if args.fail_fast:
                break

    print("\n==== Summary ====")
    print(f"passed: {passed}, failed: {failed}, skipped: {skipped}")

    stats = aggregate_result_score_from_tasks(tasks_root)
    print("\n==== Result Score Statistics ====")
    print(f"Total valid result_score : {stats['count']}")
    print(f"Mean result_score        : {stats['mean']}")
    print(f"# result_score == 1      : {stats['num_ones']}")
    print(f"# result_score == 0      : {stats['num_zeros']}")

    print("\n==== Tasks with result_score == 0 ====")
    if stats["zero_tasks"]:
        for t, s in stats["zero_tasks"]:
            print(f"- {t}: {s}")
    else:
        print("(none)")

    print("\n==== Tasks with result_score != 1 (task: score) ====")
    if stats["not_one_tasks"]:
        for t, s in stats["not_one_tasks"]:
            print(f"- {t}: {s}")
    else:
        print("(none)")

    return 0 if failed == 0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
