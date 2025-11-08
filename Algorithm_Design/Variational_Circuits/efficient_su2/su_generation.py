from qiskit import QuantumCircuit
from qiskit.circuit import Parameter


def rotation(qc, qubit, theta, phi, lambd):
    qc.u(theta, phi, lambd, qubit)


def ladderCNOT(qc, qubits):
    for i in range(len(qubits) - 1):
        qc.cx(qubits[i], qubits[i + 1])


def fullCNOT(qc, qubits):
    for i in range(len(qubits)):
        for j in range(i + 1, len(qubits)):
            qc.cx(qubits[i], qubits[j])


def reverse_linearCNOT(qc, qubits):
    for i in range(len(qubits) - 1, 0, -1):
        qc.cx(qubits[i], qubits[i - 1])


def circularCNOT(qc, qubits):
    qc.cx(qubits[-1], qubits[0])
    for i in range(len(qubits) - 1):
        qc.cx(qubits[i], qubits[i + 1])

def efficient_su2(n, num_layers, mode):
    qc = QuantumCircuit(n)
    parameters = []
    idxcnt = 0

    for l in range(num_layers + 1):
        qubits = list(range(n))

        for qubit in qubits:
            theta = Parameter(f'theta_{idxcnt}')
            phi = Parameter(f'phi_{idxcnt}')
            lambd = Parameter(f'lambda_{idxcnt}')
            idxcnt += 1
            rotation(qc, qubit, theta, phi, lambd)
            parameters.extend([theta, phi, lambd])

        if l == num_layers:
            continue
        else:
            if mode == "ladderCNOT":
                ladderCNOT(qc, qubits)
            if mode == "fullCNOT":
                fullCNOT(qc, qubits)
            if mode == "reverse_linearCNOT":
                reverse_linearCNOT(qc, qubits)
            if mode == "circularCNOT":
                circularCNOT(qc, qubits)

    return qc