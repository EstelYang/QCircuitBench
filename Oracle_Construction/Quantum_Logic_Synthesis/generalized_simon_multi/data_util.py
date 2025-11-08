import json
import argparse
from pathlib import Path
import os


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_qubit_number(desc: str, x: int) -> str:
    desc = desc.replace(r"$\{qubit number\}", str(x) + str('$'))
    desc = desc.replace("${qubit number}", str(x) + str('$'))
    return desc


def replace_type(desc: str) -> str:
    desc = desc.replace("\{QASM / Qiskit\}", str('OpenQASM3.0'))
    return desc


def replace_str(desc: str, x1, x2, k) -> str:
    desc = desc.replace("$\{secret string 1\}", str(x1) + str('$'))
    desc = desc.replace("$\{secret string 2\}", str(x2) + str('$'))
    desc = desc.replace("$\{key string\}", str(k))
    return desc


def make_completion(cirq_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    blocks = [
        "```qasm\n" + cirq_src + "\n```"
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
        for root, dirs, files in os.walk(algo_dir):
            for filename in files:
                if not filename.endswith(".qasm"):
                    continue
                file_path = os.path.join(root, filename)
                parts = filename.replace(".qasm", "").split("_")
                n = parts[2][1:]
                s1 = parts[3][5:]
                s2 = parts[4][5:]
                k = parts[5][1:]
                prompt = replace_qubit_number(bv_desc, int(n))
                prompt = replace_type(prompt)
                prompt = replace_str(prompt, s1, s2, k)

                qasm_src = read_text(Path(file_path))
                completion = make_completion(qasm_src)

                item = {
                    "prompt": prompt,
                    "completion": completion,
                }
                fout.write(json.dumps(item, ensure_ascii=False) + "\n")
                num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build Multi-Simon JSONL dataset from description + QASM algos."
    )
    parser.add_argument("--desc", type=str, default="multi_simon_description",
                        help="Path to multi_simon_description")
    parser.add_argument("--algo_dir", type=str, default="./",
                        help="Directory containing multi_simon_nX dir")
    parser.add_argument("--out", type=str, default="multi_simon_oracle_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
