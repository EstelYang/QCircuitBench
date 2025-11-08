import cirq

def oracle_circuit():
    """Sudoku Grover oracle (toy clause set).
    Qubits:
      vars   = q[0..3]
      output = q[4]
      clauses= q[5..8]
    Clauses checked via XOR into clause ancillas, then MCX onto output, then uncompute.
    """
    # Allocate 4 var qubits, 1 output, 4 clause ancillas
    qubits = cirq.LineQubit.range(9)
    var = qubits[0:4]
    out = qubits[4]
    clause = qubits[5:9]
    circuit = cirq.Circuit()

    # Clause list (pairs) to XOR into clause ancillas
    clauses = [(0,1), (0,2), (1,3), (2,3)]

    # Compute XORs: clause[i] = var[a] XOR var[b]
    for i, (a, b) in enumerate(clauses):
        circuit.append(cirq.CNOT(var[a], clause[i]))
        circuit.append(cirq.CNOT(var[b], clause[i]))

    # Flip output if ALL clause bits are 1 (multi-controlled X)
    circuit.append(cirq.X.controlled(num_controls=4).on(*clause, out))

    # Uncompute clause ancillas (restore to |0>)
    for i, (a, b) in enumerate(clauses):
        circuit.append(cirq.CNOT(var[b], clause[i]))
        circuit.append(cirq.CNOT(var[a], clause[i]))

    return circuit

if __name__ == '__main__':
    # Quick smoke test (no measurements required)
    sim = cirq.Simulator()
    _ = sim.simulate(oracle_circuit())
    print('Oracle circuit built and simulated successfully.')
