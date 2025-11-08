import os
import random


def save_oracle_py(n: int, secret_string: str):
    """Write a per-(n, s) BV oracle circuit file with explicit gate lines (no loops/ifs in the output)."""
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/bv_oracle_n{n}_s{secret_string}.py"

    with open(path, "w") as f:
        # Header
        f.write("import cirq\n\n")
        f.write("def oracle_circuit():\n")
        f.write(f"    n = {n}\n")
        f.write("    qubits = cirq.LineQubit.range(n + 1)\n")
        f.write("    target = qubits[-1]\n")
        f.write("    circuit = cirq.Circuit()\n")

        # Emit one line per required CNOT; no control flow in the generated file
        for i, bit in enumerate(secret_string):
            if bit == "1":
                f.write(f"    circuit.append(cirq.CNOT(qubits[{i}], target))\n")

        if all(b == "0" for b in secret_string):
            # Keep the file explicit even for the identity oracle
            f.write("    # Identity oracle (no CNOTs)\n")

        # Footer
        f.write("    return circuit\n")


def generate_secret_strings(n: int):
    """Generates 2^(n-2) secret strings of length n."""
    num_strings = 2 ** (n - 2)
    selected = set()
    while len(selected) < num_strings:
        selected.add("".join(random.choice("01") for _ in range(n)))
    return list(selected)


def generate_oracle_py_files(start_n=2, end_n=10):
    """Generate BV oracle circuit files for random secrets."""
    for n in range(start_n, end_n + 1):
        print(f"Generating BV oracles for n={n}")
        for s in generate_secret_strings(n):
            save_oracle_py(n, s)


if __name__ == "__main__":
    generate_oracle_py_files()
