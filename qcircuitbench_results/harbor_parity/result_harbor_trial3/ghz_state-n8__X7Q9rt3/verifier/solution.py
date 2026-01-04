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
    meas_circuit = circuit.copy()
    has_measure = any(getattr(item.operation, "name", "") == "measure" for item in meas_circuit.data)
    if (meas_circuit.num_clbits == 0) and (not has_measure):
        meas_circuit.measure_all()

    compiled = transpile(meas_circuit, aer_sim)
    result = aer_sim.run(compiled, shots=2048).result()
    counts = result.get_counts()

    num_qubits = circuit.num_qubits
    all0 = "0" * num_qubits
    all1 = "1" * num_qubits

    total_shots = sum(counts.values()) if counts else 0
    if total_shots > 0:
        counts_compact = {k.replace(" ", ""): v for k, v in counts.items()}
        p_all0 = counts_compact.get(all0, 0) / total_shots
        p_all1 = counts_compact.get(all1, 0) / total_shots
        if p_all0 + p_all1 > 0.95:
            return list(range(num_qubits))

    qubit_indices = []
    if total_shots == 0:
        return qubit_indices

    p1_by_qubit = [0.0] * num_qubits
    for bitstring, freq in counts.items():
        bitstring = bitstring.replace(" ", "")
        if len(bitstring) < num_qubits:
            continue
        bitstring = bitstring[-num_qubits:]
        for q_index in range(num_qubits):
            if bitstring[-1 - q_index] == "1":
                p1_by_qubit[q_index] += freq

    for q_index in range(num_qubits):
        p1 = p1_by_qubit[q_index] / total_shots
        if 0.05 < p1 < 0.95:
            qubit_indices.append(q_index)

    return qubit_indices
"""
