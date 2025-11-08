import os
import math

PAIRS = [
    (15, 4),
    (21, 2),
    (21, 5),
    (21, 8),
    (21, 10),
    (91, 2),
    (91, 4),
]

TEMPLATE_HEADER = """import cirq
import math

def iqft(qubits):
    \"\"\"Little-endian inverse QFT (no measurement).\"\"\"
    n = len(qubits)
    for i in range(n-1, -1, -1):
        for j in range(n-1, i, -1):
            yield (cirq.CZ(qubits[j], qubits[i]) ** (-1/(2**(j-i))))
        yield cirq.H(qubits[i])

def algorithm(Oracle):
"""


def save_shor_algorithm_py(N: int, a: int):
    os.makedirs("algorithm_circuit", exist_ok=True)
    file_path = f"./algorithm_circuit/shor_{N}_{a}.py"
    n_expr = f"math.ceil(math.log({N}, 2))"

    with open(file_path, "w", encoding="utf-8") as f:
        f.write(TEMPLATE_HEADER)

        f.write(f"    n = {n_expr}\n")
        f.write(f"    qubits = cirq.LineQubit.range(4*n + 2)\n")
        f.write("    circuit = cirq.Circuit()\n\n")

        f.write("    up   = qubits[0:2*n]\n")
        f.write("    down = qubits[2*n:3*n]\n")
        f.write("    aux  = qubits[3*n:4*n+2]\n\n")

        f.write("    circuit.append(cirq.H.on_each(*up))\n")

        f.write("    circuit.append(cirq.X(down[0]))\n\n")

        f.write("    circuit.append(Oracle.on(*([*up, *down, *aux])))\n\n")

        f.write("    circuit.append(iqft(list(up)))\n\n")

        f.write("    for i in range(2*n):\n")
        f.write("        circuit.append(cirq.measure(up[i], key=f'c{i}'))\n\n")

        f.write("    return circuit\n")

    print(f"Saved: {file_path}")


def generate_bv_dataset(PAIRS):
    """Generate Shor circuits for each (N, a) pairs and save them as Python files."""
    for N, a in PAIRS:
        print(f"Generating for N = {N}, a= {a}.")
        save_shor_algorithm_py(N, a)


if __name__ == "__main__":
    generate_bv_dataset(PAIRS)
