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
import numpy as np
import math

def run_and_analyze(circuit, aer_sim):
    circ = circuit.copy()

    # Measure in the Fourier basis by applying the inverse QFT, then read out |x>.
    n = circ.num_qubits
    if n != 8:
        raise ValueError("This solution expects n = 8 qubits.")

    # Undo the final bit-reversal swaps from the forward QFT.
    circ.swap(0, 7)
    circ.swap(1, 6)
    circ.swap(2, 5)
    circ.swap(3, 4)

    # Apply the inverse of the QFT layer-by-layer (matches the forward QFT structure).
    for control in range(0, 7):
        circ.h(control)
        for target in range(control + 1, 8):
            circ.cp(-math.pi / (2 ** (target - control)), control, target)
    circ.h(7)

    circ.save_statevector()
    tqc = transpile(circ, aer_sim)
    result = aer_sim.run(tqc).result()
    sv = np.asarray(result.get_statevector(tqc), dtype=complex)

    probs = np.abs(sv) ** 2
    idx = int(np.argmax(probs))

    bits = format(idx, '0{}b'.format(n))
    # bits is big-endian; map to qubit indices with little-endian convention
    return [i for i in range(n) if bits[n - 1 - i] == '1']
"""
