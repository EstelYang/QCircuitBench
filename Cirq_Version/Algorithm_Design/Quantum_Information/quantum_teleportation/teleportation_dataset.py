import os


def save_algorithm_py():
    """Write ./algorithm_circuit/teleportation.py exporting:
       def algorithm(psi_gate) -> cirq.Circuit
    The circuit measures Alice (q0,q1) and classically controls Bob's corrections on q2.
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = "./algorithm_circuit/teleportation.py"

    with open(path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm(psi_gate):\n")
        f.write(
            "    # qubits: q0 (Alice's payload), q1 (Alice's entangled), q2 (Bob)\n"
        )
        f.write("    q0, q1, q2 = cirq.LineQubit.range(3)\n")
        f.write("    circuit = cirq.Circuit()\n\n")
        f.write("    # Prepare |psi> on q0\n")
        f.write("    circuit.append(psi_gate.on(q0))\n\n")
        f.write("    # Create Bell pair between q1 and q2\n")
        f.write("    circuit.append(cirq.H(q1))\n")
        f.write("    circuit.append(cirq.CX(q1, q2))\n\n")
        f.write("    # Alice operations\n")
        f.write("    circuit.append(cirq.CX(q0, q1))\n")
        f.write("    circuit.append(cirq.H(q0))\n\n")
        f.write("    # Measure Alice's bits\n")
        f.write("    circuit.append(cirq.measure(q0, key='c0'))\n")
        f.write("    circuit.append(cirq.measure(q1, key='c1'))\n\n")
        f.write("    # Bob corrections conditioned on Alice's classical results\n")
        f.write("    circuit.append(cirq.X(q2).with_classical_controls('c1'))\n")
        f.write("    circuit.append(cirq.Z(q2).with_classical_controls('c0'))\n\n")
        f.write(
            "    # (Optional) user may measure q2 outside this algorithm if needed\n"
        )
        f.write("    return circuit\n")


if __name__ == "__main__":
    save_algorithm_py()
    print("Wrote algorithm_circuit/teleportation.py")
