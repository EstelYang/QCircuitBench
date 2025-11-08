from qiskit import QuantumCircuit, QuantumRegister

# Note that we only consider input with 3 active nodes, hence there would be at most 3 edges.
# This helps to simplify the construction of the oracle.


def adder():
    circuit = QuantumCircuit(4)
    circuit.mcx([0, 1, 2], 3)
    circuit.ccx(0, 1, 2)

    adder_gate = circuit.to_gate()
    adder_gate.name = "Adder"
    return adder_gate


def reverse_adder():
    circuit = QuantumCircuit(4)
    circuit.ccx(0, 1, 2)
    circuit.mcx([0, 1, 2], 3)

    reverse_adder_gate = circuit.to_gate()
    reverse_adder_gate.name = "Reverse_Adder"
    return reverse_adder_gate


def triangle_oracle(node_num, edge_list):
    # Notice that qiskit.qasm3.dump won't save the names of different registers.
    node_qubits = QuantumRegister(node_num, name="node")
    edge_ancilla = QuantumRegister(2, name="edge_ancilla")
    output_qubit = QuantumRegister(1, name="out")

    qubit_num = node_qubits.size + edge_ancilla.size + output_qubit.size
    circuit = QuantumCircuit(node_qubits, output_qubit, edge_ancilla)

    # Compute triangle
    for i in range(len(edge_list)):
        edge = edge_list[i]
        circuit.append(
            adder(),
            [
                node_qubits[edge[0]],
                node_qubits[edge[1]],
                edge_ancilla[0],
                edge_ancilla[1],
            ],
        )
    circuit.ccx(edge_ancilla[0], edge_ancilla[1], output_qubit)
    for i in range(len(edge_list) - 1, -1, -1):
        edge = edge_list[i]
        circuit.append(
            reverse_adder(),
            [
                node_qubits[edge[0]],
                node_qubits[edge[1]],
                edge_ancilla[0],
                edge_ancilla[1],
            ],
        )

    oracle_gate = circuit.to_gate()
    oracle_gate.name = "Oracle"
    return oracle_gate, qubit_num
