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
    circ = circuit.copy()
    circ.save_statevector()
    tcirc = transpile(circ, aer_sim)
    result = aer_sim.run(tcirc).result()
    sv = result.get_statevector(tcirc)

    n = circ.num_qubits
    dim = 1 << n

    tol = 1e-6
    idx0 = 0
    idx1 = dim - 1

    for i in range(dim):
        if i not in (idx0, idx1):
            if abs(sv[i]) > tol:
                return []

    if abs(sv[idx0]) <= tol or abs(sv[idx1]) <= tol:
        return []

    if abs(abs(sv[idx0]) - abs(sv[idx1])) > 1e-5:
        return []

    return list(range(n))
"""
