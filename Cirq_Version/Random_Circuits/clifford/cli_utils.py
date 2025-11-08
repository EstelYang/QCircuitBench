import json
import argparse
from pathlib import Path
from collections import defaultdict
import random
import re

_QN_PATTERNS = [
    r"\{\s*qubit\s*number\s*\}",
    r"\{\s*qubit[_\s]?number\s*\}",
    r"<\s*qubit[_\s]?number\s*>",
    r"\$\s*\{\s*qubit[_\s]?number\s*\}",
]
_TS_PATTERNS = [
    r"\{\s*target[_\s]?state\s*\}",
    r"<\s*target[_\s]?state\s*>",
    r"\$\s*\{\s*target[_\s]?state\s*\}",
]


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_qubit_number(desc: str, x: int) -> str:
    for pat in _QN_PATTERNS:
        desc = re.sub(pat, str(x), desc)
    return desc


def replace_target_state(desc: str, state: str) -> str:
    state = state.strip()
    for pat in _TS_PATTERNS:
        desc = re.sub(pat, state, desc)
    return desc


def make_completion(cirq_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    return "```cirq\n" + cirq_src + "\n```"


def iter_algo_files(algo_root: Path):
    for n_dir in sorted(algo_root.glob("clifford_n*")):
        m_n = re.fullmatch(r"clifford_n(\d+)", n_dir.name)
        if not (n_dir.is_dir() and m_n):
            continue
        x = int(m_n.group(1))

        for l_dir in sorted(n_dir.glob("l*")):
            m_l = re.fullmatch(r"l(\d+)", l_dir.name)
            if not (l_dir.is_dir() and m_l):
                continue
            l = int(m_l.group(1))

            pattern = re.compile(rf"clifford_n{x}_l{l}_(\d+)\.py$")
            for qasm_path in sorted(l_dir.glob(f"clifford_n{x}_l{l}_*.py")):
                m = pattern.fullmatch(qasm_path.name)
                if not m:
                    continue
                idx = int(m.group(1))

                txt_path = qasm_path.with_suffix(".txt")
                yield x, l, idx, qasm_path, txt_path


def build_dataset(
        desc_path: Path,
        algo_dir: Path,
        out_jsonl: Path,
):
    prompt_tpl = read_text(desc_path)
    out_jsonl.parent.mkdir(parents=True, exist_ok=True)
    grouped: dict[int, dict[tuple[int, int], tuple[Path, Path]]] = defaultdict(dict)

    num_missing_txt = 0

    with out_jsonl.open("w", encoding="utf-8") as fout:
        for x, l, idx, qasm_path, txt_path in iter_algo_files(algo_dir):
            if not (1 <= l <= 40 and 0 <= idx <= 8):
                continue
            if not qasm_path.exists():
                continue
            if not txt_path.exists():
                num_missing_txt += 1
                continue
            grouped[x].setdefault((l, idx), (qasm_path, txt_path))

        num_written = 0
        with out_jsonl.open("w", encoding="utf-8") as fout:
            for x, pair_map in grouped.items():
                candidates = list(pair_map.items())
                if len(candidates) < 2:
                    continue

                selected = random.sample(candidates, k=2)

                for _, (qasm_path, txt_path) in selected:
                    algo_src = read_text(qasm_path)
                    target_state = read_text(txt_path).strip()

                    prompt = replace_qubit_number(prompt_tpl, x)
                    prompt = replace_target_state(prompt, target_state)
                    completion = make_completion(algo_src)

                    fout.write(json.dumps({
                        "prompt": prompt,
                        "completion": completion,
                    }, ensure_ascii=False) + "\n")
                    num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")
    if num_missing_txt:
        print(f"[NOTE] {num_missing_txt} items skipped due to missing .txt")


def main():
    parser = argparse.ArgumentParser(
        description="Build Clifford JSONL dataset from description + Cirq algos (clifford_nX/lY)"
    )
    parser.add_argument("--desc", type=str, default="cli_description")
    parser.add_argument("--algo_dir", type=str, default="algorithm_circuit")
    parser.add_argument("--out", type=str, default="cli_oracle_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
