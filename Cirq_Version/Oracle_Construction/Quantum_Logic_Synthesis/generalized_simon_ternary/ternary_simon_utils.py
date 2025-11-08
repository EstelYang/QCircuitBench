import json
import argparse
from pathlib import Path
from collections import Counter
import os


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_string(desc: str, x1: str, k: str) -> str:
    desc = desc.replace(r"\{secret_string\}$", str(x1) + str('$'))
    desc = desc.replace("\{key_string\}$", str(k) + str('$'))
    return desc


def replace_qubit_number(desc: str, x: int) -> str:
    desc = desc.replace(r"\{trit_ number\}$", str(x) + str('$'))
    return desc


def make_completion(cirq_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    blocks = [
        "```cirq\n" + cirq_src + "\n```"
    ]
    return "\n".join(blocks)


def build_dataset(
        desc_path: Path,
        algo_dir: Path,
        out_jsonl: Path,
):
    bv_desc = read_text(desc_path)

    out_jsonl.parent.mkdir(parents=True, exist_ok=True)

    num_written = 0
    with out_jsonl.open("w", encoding="utf-8") as fout:
        n_counter = Counter()
        for root, dirs, files in os.walk(algo_dir):
            for filename in files:
                if not filename.endswith(".py"):
                    continue
                parts = filename.replace(".py", "").split("_")
                n = parts[3][1:]
                s1 = parts[4][1:]
                k = parts[5][1:]
                if n_counter[n] >= 2:
                    continue
                n_counter[n] += 1
                prompt = replace_qubit_number(bv_desc, int(n))
                prompt = replace_string(prompt, s1, k)

                algo_file = algo_dir / f"{filename}"
                if not algo_file.exists():
                    print(f"[WARN] Missing: {algo_file}")
                    continue
                algo_src = read_text(algo_file)

                completion = make_completion(algo_src)

                item = {
                    "prompt": prompt,
                    "completion": completion,
                }
                fout.write(json.dumps(item, ensure_ascii=False) + "\n")
                num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build Ternary-Simon JSONL dataset from description + Cirq algos."
    )
    parser.add_argument("--desc", type=str, default="ternary_simon_description",
                        help="Path to bv_description")
    parser.add_argument("--algo_dir", type=str, default="algorithm_circuit",
                        help="Directory containing ternary_simon_oracle_nX_sSTR_kSTR.py files")
    parser.add_argument("--out", type=str, default="ternary_simon_oracle_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
