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
cp(1.5707963267948966) q[6], q[7];
h q[6];
cp(0.7853981633974483) q[5], q[7];
cp(1.5707963267948966) q[5], q[6];
h q[5];
cp(0.39269908169872414) q[4], q[7];
cp(0.7853981633974483) q[4], q[6];
cp(1.5707963267948966) q[4], q[5];
h q[4];
cp(0.19634954084936207) q[3], q[7];
cp(0.39269908169872414) q[3], q[6];
cp(0.7853981633974483) q[3], q[5];
cp(1.5707963267948966) q[3], q[4];
h q[3];
cp(0.09817477042468103) q[2], q[7];
cp(0.19634954084936207) q[2], q[6];
cp(0.39269908169872414) q[2], q[5];
cp(0.7853981633974483) q[2], q[4];
cp(1.5707963267948966) q[2], q[3];
h q[2];
cp(0.04908738521234052) q[1], q[7];
cp(0.09817477042468103) q[1], q[6];
cp(0.19634954084936207) q[1], q[5];
cp(0.39269908169872414) q[1], q[4];
cp(0.7853981633974483) q[1], q[3];
cp(1.5707963267948966) q[1], q[2];
h q[1];
cp(0.02454369260617026) q[0], q[7];
cp(0.04908738521234052) q[0], q[6];
cp(0.09817477042468103) q[0], q[5];
cp(0.19634954084936207) q[0], q[4];
cp(0.39269908169872414) q[0], q[3];
cp(0.7853981633974483) q[0], q[2];
cp(1.5707963267948966) q[0], q[1];
h q[0];
swap q[0], q[7];
swap q[1], q[6];
swap q[2], q[5];
swap q[3], q[4];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    # The QFT transforms the *basis* of the entire register; the output state
    # |~x> lives on the same 8-qubit register `q`.
    return list(range(circuit.num_qubits))
"""
