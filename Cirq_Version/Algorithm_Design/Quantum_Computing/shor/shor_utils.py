import json
import argparse
from pathlib import Path
import math


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def calculate_qubit_number_in_description(N: int) -> int:
    n = math.ceil(math.log(N, 2))
    qubits_number = (n + 2) + 2 * n + n
    return qubits_number


def replace_qubit_number(desc: str, N: int, a: int) -> str:
    qubits_num = calculate_qubit_number_in_description(N)
    desc = desc.replace(r"$\{qubit number\}", str(qubits_num) + str('$'))
    desc = desc.replace("${qubit number}", str(qubits_num) + str('$'))
    desc = desc.replace("$\{The number needed to factor\}", str(N) + str('$'))
    desc = desc.replace("$\{coprime base\}", str(a) + str('$'))
    return desc


def make_completion(cirq_src: str, post_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    post_src = post_src.replace("\r\n", "\n").replace("\r", "\n")
    blocks = [
        "```cirq\n" + cirq_src + "\n```",
        "```python\n" + post_src + "\n```",
    ]
    return "\n".join(blocks)


def build_dataset(
        desc_path: Path,
        algo_dir: Path,
        post_path: Path,
        out_jsonl: Path,
):
    bv_desc = read_text(desc_path)
    bv_post = read_text(post_path)

    out_jsonl.parent.mkdir(parents=True, exist_ok=True)

    num_written = 0
    with out_jsonl.open("w", encoding="utf-8") as fout:
        for N, a in zip([15, 21, 21, 21, 21, 91, 91], [4, 2, 5, 8, 10, 2, 4]):
            prompt = replace_qubit_number(bv_desc, N, a)

            algo_file = algo_dir / f"shor_{N}_{a}.py"
            if not algo_file.exists():
                print(f"[WARN] Missing: {algo_file} — skipping N={N}, a={a}")
                continue
            algo_src = read_text(algo_file)

            completion = make_completion(algo_src, bv_post)

            item = {
                "prompt": prompt,
                "completion": completion,
            }
            fout.write(json.dumps(item, ensure_ascii=False) + "\n")
            num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build Shor JSONL dataset from description + Cirq algos + post-processing."
    )
    parser.add_argument("--desc", type=str, default="shor_description",
                        help="Path to shor_description")
    parser.add_argument("--algo_dir", type=str, default="algorithm_circuit",
                        help="Directory containing shor_NX_aX.py files")
    parser.add_argument("--post", type=str, default="shor_post_processing.py",
                        help="Path to shor_post_processing.py")
    parser.add_argument("--out", type=str, default="shor_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        post_path=Path(args.post),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
