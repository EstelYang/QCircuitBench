from __future__ import annotations

import json
import sys
import traceback
from pathlib import Path
from typing import Any, Dict, Optional, Callable, Literal

Group = Literal["algorithm_design", "oracle_construction", "random_circuit_synthesis"]

import os
from contextlib import contextmanager


@contextmanager
def pushd(dirpath: Path):
    old = Path.cwd()
    os.chdir(dirpath)
    try:
        yield
    finally:
        os.chdir(old)


def normalize_metrics(ret: Any) -> Dict[str, Any]:
    if isinstance(ret, dict):
        return ret
    if isinstance(ret, bool):
        return {"pass": ret}
    if ret is None:
        return {"pass": True}
    return {"qasm_syntax": ret[0],
            "code_syntax": ret[1],
            "result_score": ret[2],
            "gate_count_ratio": ret[3],
            "shot_ratio": ret[4],
            "time_ratio": ret[5]}


def dump_metrics(task_dir: Path, metrics: Dict[str, Any], filename: str = "metrics.json") -> Path:
    task_dir.mkdir(parents=True, exist_ok=True)
    out = task_dir / filename
    out.write_text(json.dumps(metrics, indent=2, ensure_ascii=False), encoding="utf-8")
    return out


def run_verification(
        *,
        task_name: str,
        group: Group,
        qasm_string: str,
        code_string: Optional[str],
        compute_metrics: Callable[..., Any],
        tasks_root: str | Path = "tasks",
        dump_filename: str = "metrics.json",
        workdir: Optional[Path] = None,
        preload_files: Optional[dict[str, str]] = None,
) -> Dict[str, Any]:
    tasks_root = Path(tasks_root)
    task_dir = tasks_root / task_name

    try:
        exec_dir = workdir or task_dir
        exec_dir.mkdir(parents=True, exist_ok=True)

        if preload_files:
            for fname, content in preload_files.items():
                (exec_dir / fname).write_text(content, encoding="utf-8")

        with pushd(exec_dir):
            if group == "algorithm_design":
                ret = compute_metrics(qasm_string, code_string)
            else:
                try:
                    ret = compute_metrics(qasm_string)
                except TypeError:
                    ret = compute_metrics(qasm_string, None)

        metrics = normalize_metrics(ret)
        metrics.setdefault("task", task_name)
        metrics.setdefault("group", group)
        metrics.setdefault("pass", True)

    except Exception as e:
        metrics = {
            "task": task_name,
            "group": group,
            "pass": False,
            "error": str(e),
            "traceback": traceback.format_exc(),
        }

    out = dump_metrics(task_dir, metrics, filename=dump_filename)
    metrics["_dump_path"] = str(out)
    return metrics


def cli_entry(
        *,
        task_name: str,
        group: Group,
        qasm_string: str,
        code_string: Optional[str] = None,
        compute_metrics: Callable[..., Any] = None,
        tasks_root: str | Path = "tasks",
        dump_filename: str = "metrics.json",
        workdir: Optional[Path] = None,
        preload_files: Optional[dict[str, str]] = None,
) -> None:
    if compute_metrics is None:
        raise ValueError("cli_entry requires compute_metrics")

    metrics = run_verification(
        task_name=task_name,
        group=group,
        qasm_string=qasm_string,
        code_string=code_string,
        compute_metrics=compute_metrics,
        tasks_root=tasks_root,
        dump_filename=dump_filename,
        workdir=workdir,
        preload_files=preload_files,
    )
    print(f"[{group}/{task_name}] dumped -> {metrics.get('_dump_path')}")
    sys.exit(0 if metrics.get("pass", True) else 1)
