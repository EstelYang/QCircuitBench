import os


def algorithm(message: str):
    assert message in {"00", "01", "10", "11"}
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/superdense_mes{message}.py"

    with open(path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm():\n")
        f.write("    q0, q1 = cirq.LineQubit.range(2)\n")
        f.write("    circuit = cirq.Circuit()\n")
        # Bell pair (Alice and Bob share EPR before message)
        f.write("    circuit.append(cirq.H(q0))\n")
        f.write("    circuit.append(cirq.CX(q0, q1))\n\n")
        # Alice encodes 2 classical bits on her qubit (q0)
        if message[0] == "1":
            f.write("    circuit.append(cirq.X(q0))\n")
        if message[1] == "1":
            f.write("    circuit.append(cirq.Z(q0))\n")
        f.write("\n")
        # Bob decodes
        f.write("    circuit.append(cirq.CX(q0, q1))\n")
        f.write("    circuit.append(cirq.H(q0))\n\n")
        # Measure both
        f.write("    circuit.append(cirq.measure(q0, key='c0'))\n")
        f.write("    circuit.append(cirq.measure(q1, key='c1'))\n")
        f.write("\n")
        f.write("    return circuit\n")


def generate_superdense_dataset():
    for msg in ["00", "01", "10", "11"]:
        print(f"Generating Superdense circuit file for message={msg}")
        algorithm(msg)


if __name__ == "__main__":
    generate_superdense_dataset()
