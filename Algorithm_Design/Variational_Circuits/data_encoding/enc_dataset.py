import os
from qiskit.qasm3 import dump
from qiskit import QuantumCircuit
from enc_generation import (
    basis_encoding_3q_superposition,
    amplitude_encoding_2q,
    angle_encoding_3q,
)


def save_qasm(circuit: QuantumCircuit, directory: str, filename: str):
    os.makedirs(directory, exist_ok=True)
    with open(os.path.join(directory, filename), "w", encoding="utf-8") as f:
        dump(circuit, f)


def generate_circuit_qasm():
    save_qasm(basis_encoding_3q_superposition(), "full_circuit/", "basis_3q.qasm")
    save_qasm(amplitude_encoding_2q(), "full_circuit/", "amplitude_2q.qasm")
    save_qasm(angle_encoding_3q(), "full_circuit/", "angle_3q.qasm")


def check_dataset():
    from enc_post_processing import (
        basis_encoding_fidelity,
        amplitude_encoding_fidelity,
        angle_encoding_probabilities,
    )

    print("== Basis encoding ==")
    print("Fidelity to (|101>+|111>)/√2:", f"{basis_encoding_fidelity():.8f}")
    print("== Amplitude encoding ==")
    print("Fidelity to α/||α||:", f"{amplitude_encoding_fidelity():.8f}")
    print("== Angle encoding ==")
    probs = angle_encoding_probabilities()
    for k in sorted(probs):
        print(f"  {k}: {probs[k]:.6f}")


def main():
    import argparse

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f", "--func", choices=["qasm", "check"], help="Generate QASM, or check."
    )
    args = parser.parse_args()
    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "check":
        check_dataset()


if __name__ == "__main__":
    main()
