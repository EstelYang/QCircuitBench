qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
x q[0];
ry(0.3613671239067078) q[1];
cx q[0], q[1];
ry(-0.3613671239067078) q[1];
cx q[0], q[1];
cx q[1], q[0];
ry(0.3875966866551806) q[2];
cx q[0], q[2];
ry(-0.3875966866551806) q[2];
cx q[0], q[2];
cx q[2], q[0];
ry(0.4205343352839651) q[3];
cx q[0], q[3];
ry(-0.4205343352839651) q[3];
cx q[0], q[3];
cx q[3], q[0];
ry(0.4636476090008061) q[4];
cx q[0], q[4];
ry(-0.4636476090008061) q[4];
cx q[0], q[4];
cx q[4], q[0];
ry(0.5235987755982989) q[5];
cx q[0], q[5];
ry(-0.5235987755982989) q[5];
cx q[0], q[5];
cx q[5], q[0];
ry(0.6154797086703875) q[6];
cx q[0], q[6];
ry(-0.6154797086703875) q[6];
cx q[0], q[6];
cx q[6], q[0];
ry(0.7853981633974483) q[7];
cx q[0], q[7];
ry(-0.7853981633974483) q[7];
cx q[0], q[7];
cx q[7], q[0];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator
import numpy as np


def run_and_analyze(circuit, aer_sim):
    circ = circuit.copy()
    try:
        circ.save_statevector()
    except Exception:
        pass

    tcirc = transpile(circ, aer_sim)
    result = aer_sim.run(tcirc).result()

    statevector = None
    try:
        statevector = result.get_statevector(tcirc)
    except Exception:
        try:
            statevector = result.get_statevector(0)
        except Exception:
            data = result.data(0)
            statevector = data.get("statevector")
            if statevector is None:
                raise

    sv = np.asarray(statevector, dtype=complex)
    probs = np.abs(sv) ** 2

    excited_qubits = []
    for qubit_index in range(tcirc.num_qubits):
        mask = 1 << qubit_index
        prob_1 = 0.0
        for basis_index, p in enumerate(probs):
            if basis_index & mask:
                prob_1 += float(p)
        if prob_1 > 1e-6:
            excited_qubits.append(qubit_index)

    return excited_qubits
"""
