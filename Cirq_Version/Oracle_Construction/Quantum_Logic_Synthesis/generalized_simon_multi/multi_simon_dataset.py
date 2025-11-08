import os
import random


def save_oracle_py(n: int, secret_string1: str, secret_string2: str, key_string: str):

    s1r = secret_string1[::-1]
    s2r = secret_string2[::-1]
    kr = key_string[::-1]

    os.makedirs("algorithm_circuit", exist_ok=True)
    path = (
        f"./algorithm_circuit/"
        f"multi_simon_oracle_n{n}_s(1){secret_string1}_s(2){secret_string2}_k{key_string}.py"
    )

    with open(path, "w", encoding="utf-8") as f:
        f.write("import cirq\n\n")
        f.write("def oracle_circuit():\n")
        f.write(f"    n = {n}\n")
        f.write(f"    qubits = cirq.LineQubit.range(2*n + 1)\n")
        f.write(f"    anc = qubits[2*n]\n")
        f.write(f"    circuit = cirq.Circuit()\n\n")

        # oracle 1
        for q in range(n):
            f.write(
                f"    circuit.append(cirq.CNOT(qubits[{q}], qubits[{n + q}]).controlled_by(anc))\n"
            )

        if any(b == "1" for b in s1r):
            i1 = s1r.find("1")
            for j, b in enumerate(s1r):
                if b == "1":
                    f.write(
                        f"    circuit.append(cirq.CNOT(qubits[{i1}], qubits[{n + j}]).controlled_by(anc))\n"
                    )
        else:
            f.write("    # s1 is all zeros: only controlled copy was applied\n")

        f.write("    circuit.append(cirq.X(anc))\n\n")

        # oracle  2
        for q in range(n):
            f.write(
                f"    circuit.append(cirq.CNOT(qubits[{q}], qubits[{n + q}]).controlled_by(anc))\n"
            )
        if any(b == "1" for b in s2r):
            i2 = s2r.find("1")
            for j, b in enumerate(s2r):
                if b == "1":
                    f.write(
                        f"    circuit.append(cirq.CNOT(qubits[{i2}], qubits[{n + j}]).controlled_by(anc))\n"
                    )
        else:
            f.write("    # s2 is all zeros: only controlled copy was applied\n")

        # random permutation
        for j, b in enumerate(kr):
            if b == "1":
                f.write(f"    circuit.append(cirq.X(qubits[{n + j}]))\n")

        f.write("\n    return circuit\n")

    return path


def generate_secret_strings(n: int, test_num=5):
    num_strings = min(2 ** (n - 2), test_num)
    selected = set()
    while len(selected) < num_strings:
        selected.add("".join(random.choice("01") for _ in range(n)))
    return list(selected)


def generate_oracle_py_files(start_n=2, end_n=10):
    """Generate Multi-Simon oracle circuit files for random secrets."""
    for n in range(start_n, end_n + 1):
        print(f"Generating Multi-Simon oracles for n={n}")
        s1s = generate_secret_strings(n)
        s2s = generate_secret_strings(n)
        keys = generate_secret_strings(n)
        for s1, s2, key in zip(s1s, s2s, keys):
            save_oracle_py(n, s1, s2, key)


if __name__ == "__main__":
    generate_oracle_py_files()
