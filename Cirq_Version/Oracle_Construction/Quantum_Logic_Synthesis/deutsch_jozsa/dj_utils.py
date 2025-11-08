import json
import argparse
from pathlib import Path
import os
from collections import Counter


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_qubit_number(desc: str, x: int) -> str:
    desc = desc.replace(r"$\{qubit number\}", str(x) + str('$'))
    desc = desc.replace("${qubit number}", str(x) + str('$'))
    return desc


def replace_string(desc: str, x: str) -> str:
    desc = desc.replace(r"$\{key string\}", str(x) + str('$'))
    desc = desc.replace(r"\{return_num\}", str(x) + str('$'))
    return desc


def replace_types(desc: str, x: str) -> str:
    if x == 'constant':
        desc = desc.replace(
            r"\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}",
            str(x) + str('with $f(x)$ returns $\{return_num\}'))
        return desc
    else:
        desc = desc.replace(
            "\{constant with $f(x)$ returns $0$ / constant with $f(x)$ returns $1$ / balanced with key\_str $b = $\{key string\}\}",
            str(x) + str('with key\_str $b = $\{key string\}'))
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
                parts = filename.replace(".py", "").split("_")
                n = parts[2][1:]
                types = parts[3][1:]
                secret = parts[4][:]
                if n_counter[n] >= 2:
                    continue
                n_counter[n] += 1
                prompt = replace_qubit_number(bv_desc, int(n))
                prompt = replace_types(prompt, types)
                prompt = replace_string(prompt, secret)

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
        description="Build DJ JSONL dataset from description + Cirq algos"
    )
    parser.add_argument("--desc", type=str, default="dj_description",
                        help="Path to dj_description")
    parser.add_argument("--algo_dir", type=str, default="algorithm_circuit",
                        help="Directory containing dj_oracle_nX_TYPE_STR.py files")
    parser.add_argument("--out", type=str, default="dj_oracle_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
