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


def replace_hamiltonian(desc: str, hamiltonian: str) -> str:
    desc = desc.replace(r"$H = $ \{hamiltonian structure\}", str(hamiltonian) + str('$'))
    return desc


def extract_hamiltonian(path):
    lines = []
    recording = False

    with open(path, "r") as f:
        for line in f:
            if line.startswith("Hamiltonian"):
                recording = True
                continue
            if line.startswith("Ground state energy"):
                break
            if recording:
                lines.append(line.rstrip())

    hamiltonian_text = "\n".join(lines)
    return hamiltonian_text


def make_completion(cirq_src: str, post_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    post_src = post_src.replace("\r\n", "\n").replace("\r", "\n")
    blocks = [
        "```qasm\n" + cirq_src + "\n```",
        "```python\n" + post_src + "\n```",
    ]
    return "\n".join(blocks)


def build_dataset(
        desc_path: Path,
        post_path: Path,
        out_jsonl: Path,
        start: int = 2,
        end: int = 30,
):
    bv_desc = read_text(desc_path)
    bv_post = read_text(post_path)

    out_jsonl.parent.mkdir(parents=True, exist_ok=True)

    num_written = 0
    with out_jsonl.open("w", encoding="utf-8") as fout:
        for x in range(start, end + 1):
            prompt = replace_qubit_number(bv_desc, x)
            for types in ['Heisenberg', 'SpinChain']:
                fpath = f"hamiltonians/n{x}/{types}.txt"
                hamiltonian = extract_hamiltonian(fpath)
                prompt = replace_hamiltonian(prompt, hamiltonian)
                for l in range(1, 3):
                    with open(f"efficient_su2_fullCNOT/efficient_su2_n{x}_l{l}_fullCNOT.qasm", 'r') as f:
                        algo_src = f.read()
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
        description="Build VQE JSONL dataset from description + QASM algos + post-processing."
    )
    parser.add_argument("--desc", type=str, default="su_description",
                        help="Path to su_description")
    parser.add_argument("--post", type=str, default="su_post_processing.py",
                        help="Path to su_post_processing.py")
    parser.add_argument("--out", type=str, default="su_prompts.jsonl",
                        help="Output JSONL path")
    parser.add_argument("--start", type=int, default=2, help="Start x (inclusive)")
    parser.add_argument("--end", type=int, default=12, help="End x (inclusive)")
    args = parser.parse_args()

    build_dataset(
        desc_path=Path(args.desc),
        post_path=Path(args.post),
        out_jsonl=Path(args.out),
        start=args.start,
        end=args.end,
    )


if __name__ == "__main__":
    main()
