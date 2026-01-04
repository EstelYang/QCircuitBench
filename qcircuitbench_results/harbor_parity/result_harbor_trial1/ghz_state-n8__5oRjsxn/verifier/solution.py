qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[0];
cx q[0], q[1];
cx q[0], q[2];
cx q[0], q[3];
cx q[0], q[4];
cx q[0], q[5];
cx q[0], q[6];
cx q[0], q[7];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    n_qubits = circuit.num_qubits
    if circuit.num_clbits == 0:
        circuit_to_run = circuit.copy()
        circuit_to_run.measure_all()
    else:
        circuit_to_run = circuit

    compiled = transpile(circuit_to_run, aer_sim)
    result = aer_sim.run(compiled, shots=2048).result()
    counts = result.get_counts()
    total_shots = sum(counts.values()) or 1

    def bit_at(classical_bitstring, qubit_index):
        # Qiskit count keys are ordered c[n-1]..c[0] when measuring q[i] -> c[i].
        return classical_bitstring[-1 - qubit_index]

    prepared_qubits = []
    for i in range(n_qubits):
        same_as_q0 = sum(
            count
            for bitstring, count in counts.items()
            if bit_at(bitstring, i) == bit_at(bitstring, 0)
        )
        if same_as_q0 / total_shots > 0.9:
            prepared_qubits.append(i)

    return prepared_qubits
"""
