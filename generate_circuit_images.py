import os
import sys
from pathlib import Path

import matplotlib.pyplot as plt
from qiskit import QuantumCircuit, qasm3


def load_circuit_auto(qasm_path: str) -> QuantumCircuit:
    with open(qasm_path, "r", encoding="utf-8") as f:
        text = f.read()
    return qasm3.loads(text)


def save_circuit_png(qc: QuantumCircuit, out_path: str) -> None:
    # qc_to_draw = qc.decompose()
    fig = qc.draw(
        output="mpl",
        fold=80,
        idle_wires=True
    )
    fig.savefig(out_path, dpi=120, bbox_inches="tight")
    plt.close(fig)


def should_skip_dir(dir_name: str) -> bool:
    skip_names = {
        "$RECYCLE.BIN",
        ".git",
        "__pycache__",
        ".ipynb_checkpoints",
        "node_modules",
        ".venv",
        "venv",
    }
    return dir_name in skip_names


def generate_images(dataset_root: str) -> None:
    dataset_root = os.path.abspath(dataset_root)

    total_qasm = 0
    generated = 0
    skipped_existing = 0
    failed = 0

    for dirpath, dirnames, filenames in os.walk(dataset_root):
        dirnames[:] = [d for d in dirnames if not should_skip_dir(d)]

        for filename in filenames:
            if not filename.lower().endswith(".qasm"):
                continue

            total_qasm += 1
            qasm_path = os.path.join(dirpath, filename)
            out_path = os.path.splitext(qasm_path)[0] + ".png"

            if os.path.exists(out_path):
                os.remove(out_path)
                print(f"Removed existing (wrong): {out_path}")
                # skipped_existing += 1
                # print(f"Skip existing: {out_path}")
                # continue

            try:
                qc = load_circuit_auto(qasm_path)
                save_circuit_png(qc, out_path)
                generated += 1
                print(f"Generated: {out_path}")
            except Exception as e:
                failed += 1
                print(f"Failed: {qasm_path} | {e}")

    print("\n===== Summary =====")
    print(f"Dataset root     : {dataset_root}")
    print(f"Total QASM files : {total_qasm}")
    print(f"Generated        : {generated}")
    print(f"Skipped existing : {skipped_existing}")
    print(f"Failed           : {failed}")


def main():
    if len(sys.argv) != 2:
        print("Usage: python generate_circuit_images.py <dataset_root>")
        sys.exit(1)

    dataset_root = sys.argv[1]
    if not os.path.exists(dataset_root):
        print(f"Path not found: {dataset_root}")
        sys.exit(1)

    generate_images(dataset_root)


if __name__ == "__main__":
    main()
