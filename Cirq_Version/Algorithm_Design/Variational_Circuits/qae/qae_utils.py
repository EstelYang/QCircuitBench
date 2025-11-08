import json
import argparse
from pathlib import Path


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def make_completion(qasm_src: str, post_src: str) -> str:
    qasm_src = qasm_src.replace("\r\n", "\n").replace("\r", "\n")
    post_src = post_src.replace("\r\n", "\n").replace("\r", "\n")
    return "```cirq\n" + qasm_src + "\n```\n```python\n" + post_src + "\n```"


def build_dataset(
        desc_path: Path,
        algo_dir: Path,
        post_path: Path,
        out_jsonl: Path,
):
    prompt = read_text(desc_path)
    algo_str = read_text(algo_dir / "auto_encoder_algorithm.py")
    post_src = read_text(post_path)

    out_jsonl.parent.mkdir(parents=True, exist_ok=True)
    num_written = 0

    with out_jsonl.open("w", encoding="utf-8") as fout:
            completion = make_completion(algo_str, post_src)

            item = {"prompt": prompt, "completion": completion}
            fout.write(json.dumps(item, ensure_ascii=False) + "\n")
            num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build QAE JSONL dataset from description + Cirq algos + post-processing."
    )
    parser.add_argument("--desc", type=str, default="qae_description",
                        help="Path to JSON description (with key 'description')")
    parser.add_argument("--algo_dir", type=str, default="algorithm_circuit",
                        help="Directory containing *.py auto-encoder circuits")
    parser.add_argument("--post", type=str, default="qae_post_processing.py",
                        help="Path to Python run_and_analyze(circuit)")
    parser.add_argument("--out", type=str, default="qae_prompts.jsonl",
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
