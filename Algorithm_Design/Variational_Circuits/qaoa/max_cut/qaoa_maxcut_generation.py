from qiskit.circuit import Parameter
from qiskit import QuantumCircuit


def qaoa_maxcut(graph, n_layers):
    nqubits = len(graph.nodes())
    beta = [Parameter(f"beta_{i}") for i in range(n_layers)]
    gamma = [Parameter(f"gamma_{i}") for i in range(n_layers)]

    qc = QuantumCircuit(nqubits)

    # initial_state
    qc.h(range(nqubits))

    for layer_index in range(n_layers):
        # problem unitary
        for pair in graph.edges():
            node1, node2 = int(pair[0]), int(pair[1])
            qc.rzz(2 * gamma[layer_index], node1, node2)
        # mixer unitary
        for qubit in range(nqubits):
            qc.rx(2 * beta[layer_index], qubit)

    qc.measure_all()
    return qc
