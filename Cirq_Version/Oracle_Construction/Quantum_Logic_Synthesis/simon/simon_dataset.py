import os
import random


def _unrolled_oracle_py(n: int, secret: str, key: str) -> str:
    """
    Return the Python source of a Cirq oracle file with *no loops/ifs* inside.
    The circuit implements:
        (1) y ^= x   via CNOT(i -> i+n) for all i
        (2) If s != 0^n, let j = index of first '1' in s; then for every bit t with s[t]=='1',
            y_t ^= x_j   via CNOT(j -> t+n)
        (3) y ^= key   via X(n+t) for key[t]=='1'
    """
    lines = []
    lines.append("import cirq")
    lines.append("")
    lines.append("def oracle_circuit():")
    lines.append(f"    n = {n}")
    lines.append("    qubits = cirq.LineQubit.range(2*n)")
    lines.append("    circuit = cirq.Circuit()")
    # (1) y ^= x   — unroll for all i
    for i in range(n):
        lines.append(f"    circuit.append(cirq.CNOT(qubits[{i}], qubits[{i+n}]))")
    # (2) extra adds from Simon secret: choose first-1 index j, then for each t with s[t]==1 add CNOT(j -> t+n)
    if any(b == "1" for b in secret):
        j = next(i for i, b in enumerate(secret) if b == "1")
        for t, bit in enumerate(secret):
            if bit == "1":
                lines.append(
                    f"    circuit.append(cirq.CNOT(qubits[{j}], qubits[{t+n}]))"
                )
    # (3) y ^= key — X on outputs where key bit is 1
    for t, bit in enumerate(key):
        if bit == "1":
            lines.append(f"    circuit.append(cirq.X(qubits[{t+n}]))")
    lines.append("    return circuit")
    lines.append("")
    return "\n".join(lines)


def _rand_bits(n: int) -> str:
    return "".join(random.choice("01") for _ in range(n))


def _secret_list(n: int):
    # 2^(n-2) secrets
    need = 2 ** (n - 2)
    out, seen = [], set()
    while len(out) < need:
        s = _rand_bits(n)
        if s not in seen:
            seen.add(s)
            out.append(s)
    return out


def _key_list(n: int):
    # min(2^(n-2), 20) keys
    need = min(2 ** (n - 2), 20)
    out, seen = [], set()
    while len(out) < need:
        k = _rand_bits(n)
        if k not in seen:
            seen.add(k)
            out.append(k)
    return out


def generate_simon_oracle_py(start_n=2, end_n=10):
    """
    Create files:
        ./algorithm_circuit/simon_n{n}_s{secret}_k{key}.py
    Each file exports oracle_circuit() with **explicit gates only** (no loops/ifs in the file).
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    for n in range(start_n, end_n + 1):
        secrets = _secret_list(n)
        keys = _key_list(n)
        print(
            f"Generating Simon oracles for n={n} (|secrets|={len(secrets)}, |keys|={len(keys)})"
        )
        for s in secrets:
            for k in keys:
                path = f"./algorithm_circuit/simon_n{n}_s{s}_k{k}.py"
                with open(path, "w") as f:
                    f.write(_unrolled_oracle_py(n, s, k))


if __name__ == "__main__":
    generate_simon_oracle_py()
