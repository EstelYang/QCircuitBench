import os
import cirq


def inverse_qft(qubits):
    """
    Construct the inverse Quantum Fourier Transform circuit on given qubits.
    This does NOT include SWAPs.
    """
    n = len(qubits)
    circuit = cirq.Circuit()

    for target in range(n):
        for control in range(target):
            phase_exponent = -1 / 2 ** (target - control)
            cz_gate = cirq.CZPowGate(exponent=phase_exponent)
            circuit.append(cz_gate.on(qubits[control], qubits[target]))
        circuit.append(cirq.H(qubits[target]))

    return circuit


def save_algorithm_py(n):
    """Saves a Cirq-based QPE circuit with hardcoded inverse QFT."""
    if not os.path.exists("algorithm_circuit"):
        os.makedirs("algorithm_circuit")
    file_path = f"./algorithm_circuit/phase_estimation_n{n}.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n")
        f.write("import numpy as np\n\n")

        # Write inverse_qft helper
        f.write("def inverse_qft(qubits):\n")
        f.write("    circuit = cirq.Circuit()\n")
        for qubit in range(n // 2):
            f.write(
                f"    circuit.append(cirq.SWAP(qubits[{qubit}], qubits[{n - qubit - 1}]))\n"
            )
        f.write("\n")
        for target in range(n):
            for control in range(target):
                f.write(f"    phase_exponent = -1 / 2 ** ({target} - {control})\n")
                f.write(
                    "    cz_gate = cirq.CZPowGate(exponent=phase_exponent)\n"
                )
                f.write(
                    f"    circuit.append(cz_gate.on(qubits[{control}], qubits[{target}]))\n"
                )
            f.write(f"    circuit.append(cirq.H(qubits[{target}]))\n")
        f.write("    return circuit\n\n")

        # Define algorithm
        f.write("def algorithm(cu_gate, psi_gate):\n")
        f.write(f"    qubits = cirq.LineQubit.range({n + 1})\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        f.write("    circuit.append(psi_gate.on(qubits[-1]))\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}]))\n")
        for i in range(n):
            f.write(
                f"    circuit.append((cu_gate ** (2 ** {i})).on(qubits[{i}], qubits[{n}]))\n"
            )

        f.write(f"    circuit.append(inverse_qft(qubits[:{n}]))\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")

        f.write("    return circuit\n")


def generate_pe_dataset(start_n=2, end_n=14):
    """Generate QPE circuits for each qubit number and save them as Python files."""
    for n in range(start_n, end_n + 1):
        print(f"Generating for n = {n}")
        save_algorithm_py(n)


if __name__ == "__main__":
    generate_pe_dataset()
