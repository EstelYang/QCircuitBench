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
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim):
    qc = circuit.copy()
    qc.save_statevector()
    tqc = transpile(qc, aer_sim)
    result = aer_sim.run(tqc).result()
    data = result.data(0)
    state = data["statevector"] if "statevector" in data else result.get_statevector(tqc)

    n = tqc.num_qubits
    dim = 1 << n
    amp_zeros = state[0]
    amp_ones = state[dim - 1]

    tol = 1e-6
    if abs((abs(amp_zeros) ** 2) - 0.5) > 1e-3:
        return []
    if abs((abs(amp_ones) ** 2) - 0.5) > 1e-3:
        return []
    for i in range(1, dim - 1):
        if abs(state[i]) > tol:
            return []

    return list(range(n))
"""
