import json
import argparse
from pathlib import Path


def read_text(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="utf-8", errors="replace")


def replace_qubit_number(desc: str, x: int) -> str:
    desc = desc.replace(r"\\{qubit number\\}", str(x) + str('$'))
    desc = desc.replace("${qubit number}", str(x) + str('$'))
    return desc


def replace_graph_type(desc: str, types: str) -> str:
    desc = desc.replace(r"\\{Cycle / 3-Regular\\}$", str(types))
    return desc


def replace_graph(desc: str, graph_text: str) -> str:
    desc = desc.replace(r"\\{graph file\\}$", str(graph_text) + str('$'))
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
        post_path: Path,
        out_jsonl: Path,
        start: int = 2,
        end: int = 30,
):
    desc_tmpl = read_text(desc_path)
    post_src = read_text(post_path)

    out_jsonl.parent.mkdir(parents=True, exist_ok=True)
    num_written = 0

    with out_jsonl.open("w", encoding="utf-8") as fout:
        for x in range(start, end + 1):
            base_prompt = replace_qubit_number(desc_tmpl, x)
            prompt_cycle = replace_graph_type(base_prompt, 'Cycle')

            for l in range(1, 6):
                graph_path = Path(f"graph/n{x}/cycle_graph_{x}.graphml")
                graph_text = read_text(graph_path)
                prompt = replace_graph(prompt_cycle, graph_text)

                algo_file = Path(f"algorithm_circuit/qaoa_maxcut_algorithm.py")
                cirq_src = read_text(algo_file)

                completion = make_completion(cirq_src, post_src)
                item = {
                    "prompt": prompt,
                    "completion": completion,
                }
                fout.write(json.dumps(item, ensure_ascii=False) + "\n")
                num_written += 1

            if x in [4, 6, 8, 10, 12]:
                base_prompt = replace_qubit_number(desc_tmpl, x)
                prompt_reg = replace_graph_type(base_prompt, '3-Regular')

                for l in range(1, 6):
                    graph_path = Path(f"graph/n{x}/3_regular_graph_{x}.graphml")
                    graph_text = read_text(graph_path)
                    prompt = replace_graph(prompt_reg, graph_text)

                    algo_file = Path(f"algorithm_circuit/qaoa_maxcut_algorithm.py")
                    cirq_src = read_text(algo_file)

                    completion = make_completion(cirq_src, post_src)
                    item = {
                        "prompt": prompt,
                        "completion": completion,
                    }
                    fout.write(json.dumps(item, ensure_ascii=False) + "\n")
                    num_written += 1

    print(f"[DONE] Wrote {num_written} items to {out_jsonl}")


def main():
    parser = argparse.ArgumentParser(
        description="Build QAOA-MaxCut JSONL dataset from Cirq description + Cirq algos + post-processing."
    )
    parser.add_argument("--desc", type=str, default="qaoa_maxcut_description",
                        help="Path to Cirq description template")
    parser.add_argument("--post", type=str, default="qaoa_post_processing.py",
                        help="Path to Cirq post-processing (run_and_analyze)")
    parser.add_argument("--out", type=str, default="enc_prompts.jsonl",
                        help="Output JSONL path")
    parser.add_argument("--start", type=int, default=2, help="Start n (inclusive)")
    parser.add_argument("--end", type=int, default=12, help="End n (inclusive)")
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
