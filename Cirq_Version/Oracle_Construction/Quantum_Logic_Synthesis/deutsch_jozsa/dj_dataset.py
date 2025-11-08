import os
import random


def _write_header(f, n: int):
    f.write("import cirq\n\n")
    f.write("def oracle_circuit():\n")
    f.write(f"    n = {n}\n")
    f.write("    qubits = cirq.LineQubit.range(n + 1)\n")
    f.write("    target = qubits[-1]\n")
    f.write("    circuit = cirq.Circuit()\n")


def _write_footer(f):
    f.write("    return circuit\n")


def _save_constant_oracle_py(n: int, const_bit: str):
    """
    ./algorithm_circuit/dj_oracle_n{n}_constant_{const_bit}.py
    Constant-0: append I(target) once to be explicit
    Constant-1: append X(target) once
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/dj_oracle_n{n}_constant_{const_bit}.py"
    with open(path, "w") as f:
        _write_header(f, n)
        # No conditionals: emit either I or X via 0/1-iteration loops.
        for _ in range(1 - int(const_bit)):
            f.write("    circuit.append(cirq.I(target))\n")
        for _ in range(int(const_bit)):
            f.write("    circuit.append(cirq.X(target))\n")
        _write_footer(f)


def _save_balanced_oracle_py(n: int, key_string: str):
    """
    ./algorithm_circuit/dj_oracle_n{n}_balanced_{key_string}.py
    Balanced DJ oracle: f_b(x) = parity(x AND key)
    Implementation: append CNOT(qubits[i] -> target) for each i with key[i]=='1'
    (no pre/post X; no conditionals in the file — we use 0/1 loops per bit).
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/dj_oracle_n{n}_balanced_{key_string}.py"
    with open(path, "w") as f:
        _write_header(f, n)

        # Emit only the necessary CNOTs, one per '1' bit in key_string.
        for i, b in enumerate(key_string):
            for _ in range(int(b)):
                f.write(f"    circuit.append(cirq.CNOT(qubits[{i}], target))\n")

        _write_footer(f)


def _generate_balanced_keys(n: int):
    """Return 2^(n-2) random n-bit strings (no 'if' branching)."""
    k = 2 ** (n - 2)
    seen = set()
    while len(seen) < k:
        s = "".join(random.choice("01") for _ in range(n))
        seen.add(s)
    return list(seen)


def generate_oracle_py_files(start_n=2, end_n=10):
    for n in range(start_n, end_n + 1):
        print(f"Generating DJ oracles for n={n}")
        # Constant 0 and 1
        _save_constant_oracle_py(n, "0")
        _save_constant_oracle_py(n, "1")
        # Balanced family
        for key in _generate_balanced_keys(n):
            _save_balanced_oracle_py(n, key)


if __name__ == "__main__":
    generate_oracle_py_files()
