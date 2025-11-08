import json
import argparse
from pathlib import Path


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def make_completion(cirq_src: str) -> str:
    cirq_src = cirq_src.replace("\r\n", "\n").replace("\r", "\n")
    blocks = [
        "```cirq\n" + cirq_src + "\n```"
    ]
    return "\n".join(blocks)


def build_dataset(
        out_jsonl: Path,
):
    out_jsonl.parent.mkdir(parents=True, exist_ok=True)
    num_written = 0

    with out_jsonl.open("w", encoding="utf-8") as fout:
        for p, i in zip(['enc_description_amp', 'enc_description_ang', 'enc_description_basis'], ['amplitude_encoding_2q', 'angle_encoding_3q', 'basis_encoding_3q_superposition']):
            algo_file = Path(f"algorithm_circuit/{i}.py")
            prompt = read_text(Path(p))
            cirq_src = read_text(algo_file)

            completion = make_completion(cirq_src)
            item = {
                "prompt": prompt,
                "completion": completion,
            }
            fout.write(json.dumps(item, ensure_ascii=False) + "\n")
            num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build Data-Encoding JSONL dataset from Cirq description + Cirq algos."
    )
    parser.add_argument("--out", type=str, default="enc_prompts.jsonl",
                        help="Output JSONL path")
    args = parser.parse_args()

    build_dataset(
        out_jsonl=Path(args.out),
    )


if __name__ == "__main__":
    main()
