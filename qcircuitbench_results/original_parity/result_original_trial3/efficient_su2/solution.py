qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

input float[64] theta_0;
input float[64] theta_1;
input float[64] theta_2;
input float[64] theta_3;
input float[64] theta_4;
input float[64] theta_5;
input float[64] theta_6;
input float[64] theta_7;
input float[64] theta_8;
input float[64] theta_9;
input float[64] theta_10;
input float[64] theta_11;
input float[64] theta_12;
input float[64] theta_13;
input float[64] theta_14;
input float[64] theta_15;
input float[64] theta_16;
input float[64] theta_17;
input float[64] theta_18;
input float[64] theta_19;
input float[64] theta_20;
input float[64] theta_21;
input float[64] theta_22;
input float[64] theta_23;

qubit[8] q;

ry(theta_0) q[0];
ry(theta_1) q[1];
ry(theta_2) q[2];
ry(theta_3) q[3];
ry(theta_4) q[4];
ry(theta_5) q[5];
ry(theta_6) q[6];
ry(theta_7) q[7];

cx q[0], q[1];
cx q[2], q[3];
cx q[4], q[5];
cx q[6], q[7];

ry(theta_8) q[0];
ry(theta_9) q[1];
ry(theta_10) q[2];
ry(theta_11) q[3];
ry(theta_12) q[4];
ry(theta_13) q[5];
ry(theta_14) q[6];
ry(theta_15) q[7];

cx q[1], q[2];
cx q[3], q[4];
cx q[5], q[6];

ry(theta_16) q[0];
ry(theta_17) q[1];
ry(theta_18) q[2];
ry(theta_19) q[3];
ry(theta_20) q[4];
ry(theta_21) q[5];
ry(theta_22) q[6];
ry(theta_23) q[7];
"""

code_string = """from qiskit_algorithms.minimum_eigensolvers import VQE
from qiskit_algorithms.optimizers import COBYLA
from qiskit.primitives import Estimator

def run_and_analyze(circuit, hamiltonian, expected_energy, optiter=200, tolerance=1e-3):
    estimator = Estimator()
    optimizer = COBYLA(maxiter=optiter)
    initial_point = [0.0] * circuit.num_parameters
    vqe = VQE(estimator=estimator, ansatz=circuit, optimizer=optimizer)
    try:
        vqe.initial_point = initial_point
    except Exception:
        pass
    result = vqe.compute_minimum_eigenvalue(hamiltonian)
    energy = float(result.eigenvalue.real)
    return abs(energy - float(expected_energy))
"""
