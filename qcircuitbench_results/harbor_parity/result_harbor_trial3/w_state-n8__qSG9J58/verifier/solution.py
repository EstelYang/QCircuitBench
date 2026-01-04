qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
x q[0];
cry(2.418858405776378) q[0], q[1];
cx q[1], q[0];
cry(2.366399280279432) q[1], q[2];
cx q[2], q[1];
cry(2.300523983021863) q[2], q[3];
cx q[3], q[2];
cry(2.214297435588181) q[3], q[4];
cx q[4], q[3];
cry(2.094395102393196) q[4], q[5];
cx q[5], q[4];
cry(1.910633236249018) q[5], q[6];
cx q[6], q[5];
cry(1.570796326794897) q[6], q[7];
cx q[7], q[6];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator


def run_and_analyze(circuit, aer_sim):
    circ = circuit.copy()
    circ.measure_all()

    compiled = transpile(circ, aer_sim)
    result = aer_sim.run(compiled, shots=4096).result()
    counts = result.get_counts(compiled)

    excited_qubits = []
    total_shots = sum(counts.values()) if counts else 0
    if total_shots == 0:
        return excited_qubits

    num_qubits = circ.num_qubits
    for qubit_index in range(num_qubits):
        ones = 0
        for bitstring, shot_count in counts.items():
            if bitstring[-1 - qubit_index] == "1":
                ones += shot_count
        if (ones / total_shots) > 0.05:
            excited_qubits.append(qubit_index)

    return excited_qubits
"""
