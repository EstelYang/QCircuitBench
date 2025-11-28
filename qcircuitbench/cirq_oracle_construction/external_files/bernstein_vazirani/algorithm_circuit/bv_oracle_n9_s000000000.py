import cirq

def oracle_circuit():
    n = 9
    qubits = cirq.LineQubit.range(n + 1)
    target = qubits[-1]
    circuit = cirq.Circuit()
    # Identity oracle (no CNOTs)
    return circuit
