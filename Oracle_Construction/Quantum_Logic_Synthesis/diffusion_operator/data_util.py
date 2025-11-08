import json
import argparse
from pathlib import Path


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_qubit_number(desc: str, x: int) -> str:
    desc = desc.replace(r"$\{qubit number\}", str(x) + str('$'))
    desc = desc.replace("${qubit number}", str(x) + str('$'))
    return desc


def replace_code(desc: str) -> str:
    desc = desc.replace(r"\{QASM / Qiskit\}", str('OpenQASM3.0'))
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

    base = Path(algo_dir)
    with out_jsonl.open("w", encoding="utf-8") as fout:
        for x in range(2, 15):
            qasm_path = base / f"diffusion_operator_n{x}" / f"diffusion_n{x}.qasm"
            with open(qasm_path, "r", encoding="utf-8") as f:
                qasm_text = f.read()

                prompt = replace_qubit_number(bv_desc, int(x))
                prompt = replace_code(prompt)

                completion = make_completion(qasm_text)

                item = {
                    "prompt": prompt,
                    "completion": completion,
                }
                fout.write(json.dumps(item, ensure_ascii=False) + "\n")
                num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build Diffusion-operator JSONL dataset from description + QASM algos."
    )
    parser.add_argument("--desc", type=str, default="diffusion_description.txt",
                        help="Path to diffusion_description")
    parser.add_argument("--algo_dir", type=str, default="./",
                        help="Directory containing diffusion_operator_nX dir")
    parser.add_argument("--out", type=str, default="di_oracle_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        algo_dir=Path(args.algo_dir),
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()