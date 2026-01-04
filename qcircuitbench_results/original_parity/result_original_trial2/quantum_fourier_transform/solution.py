qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[8] q;
Psi q[0];
Psi q[1];
Psi q[2];
Psi q[3];
Psi q[4];
Psi q[5];
Psi q[6];
Psi q[7];
h q[7];
cp(pi/2) q[6], q[7];
h q[6];
cp(pi/4) q[5], q[7];
cp(pi/2) q[5], q[6];
h q[5];
cp(pi/8) q[4], q[7];
cp(pi/4) q[4], q[6];
cp(pi/2) q[4], q[5];
h q[4];
cp(pi/16) q[3], q[7];
cp(pi/8) q[3], q[6];
cp(pi/4) q[3], q[5];
cp(pi/2) q[3], q[4];
h q[3];
cp(pi/32) q[2], q[7];
cp(pi/16) q[2], q[6];
cp(pi/8) q[2], q[5];
cp(pi/4) q[2], q[4];
cp(pi/2) q[2], q[3];
h q[2];
cp(pi/64) q[1], q[7];
cp(pi/32) q[1], q[6];
cp(pi/16) q[1], q[5];
cp(pi/8) q[1], q[4];
cp(pi/4) q[1], q[3];
cp(pi/2) q[1], q[2];
h q[1];
cp(pi/128) q[0], q[7];
cp(pi/64) q[0], q[6];
cp(pi/32) q[0], q[5];
cp(pi/16) q[0], q[4];
cp(pi/8) q[0], q[3];
cp(pi/4) q[0], q[2];
cp(pi/2) q[0], q[1];
h q[0];
swap q[0], q[7];
swap q[1], q[6];
swap q[2], q[5];
swap q[3], q[4];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator
import numpy as np

def run_and_analyze(circuit, aer_sim):
    circ = circuit.copy()
    if hasattr(circ, "save_statevector"):
        circ.save_statevector()

    tcirc = transpile(circ, aer_sim)
    result = aer_sim.run(tcirc).result()
    sv = result.get_statevector(tcirc)

    n = circuit.num_qubits
    N = 1 << n
    data = np.asarray(sv.data, dtype=complex)
    amp = np.fft.fft(data) / np.sqrt(N)
    x = int(np.argmax(np.abs(amp)))

    return [i for i in range(n) if (x >> i) & 1]
"""
