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

qubit[8] q;

x q[1];
x q[3];
x q[5];
x q[7];

h q[0];
h q[1];
cx q[0], q[1];
rz(theta_0) q[1];
cx q[0], q[1];
h q[0];
h q[1];
s q[0];
h q[0];
s q[1];
h q[1];
cx q[0], q[1];
rz(theta_0) q[1];
cx q[0], q[1];
h q[0];
sdg q[0];
h q[1];
sdg q[1];
cx q[0], q[1];
rz(theta_0) q[1];
cx q[0], q[1];

h q[2];
h q[3];
cx q[2], q[3];
rz(theta_1) q[3];
cx q[2], q[3];
h q[2];
h q[3];
s q[2];
h q[2];
s q[3];
h q[3];
cx q[2], q[3];
rz(theta_1) q[3];
cx q[2], q[3];
h q[2];
sdg q[2];
h q[3];
sdg q[3];
cx q[2], q[3];
rz(theta_1) q[3];
cx q[2], q[3];

h q[4];
h q[5];
cx q[4], q[5];
rz(theta_2) q[5];
cx q[4], q[5];
h q[4];
h q[5];
s q[4];
h q[4];
s q[5];
h q[5];
cx q[4], q[5];
rz(theta_2) q[5];
cx q[4], q[5];
h q[4];
sdg q[4];
h q[5];
sdg q[5];
cx q[4], q[5];
rz(theta_2) q[5];
cx q[4], q[5];

h q[6];
h q[7];
cx q[6], q[7];
rz(theta_3) q[7];
cx q[6], q[7];
h q[6];
h q[7];
s q[6];
h q[6];
s q[7];
h q[7];
cx q[6], q[7];
rz(theta_3) q[7];
cx q[6], q[7];
h q[6];
sdg q[6];
h q[7];
sdg q[7];
cx q[6], q[7];
rz(theta_3) q[7];
cx q[6], q[7];

h q[1];
h q[2];
cx q[1], q[2];
rz(theta_4) q[2];
cx q[1], q[2];
h q[1];
h q[2];
s q[1];
h q[1];
s q[2];
h q[2];
cx q[1], q[2];
rz(theta_4) q[2];
cx q[1], q[2];
h q[1];
sdg q[1];
h q[2];
sdg q[2];
cx q[1], q[2];
rz(theta_4) q[2];
cx q[1], q[2];

h q[3];
h q[4];
cx q[3], q[4];
rz(theta_5) q[4];
cx q[3], q[4];
h q[3];
h q[4];
s q[3];
h q[3];
s q[4];
h q[4];
cx q[3], q[4];
rz(theta_5) q[4];
cx q[3], q[4];
h q[3];
sdg q[3];
h q[4];
sdg q[4];
cx q[3], q[4];
rz(theta_5) q[4];
cx q[3], q[4];

h q[5];
h q[6];
cx q[5], q[6];
rz(theta_6) q[6];
cx q[5], q[6];
h q[5];
h q[6];
s q[5];
h q[5];
s q[6];
h q[6];
cx q[5], q[6];
rz(theta_6) q[6];
cx q[5], q[6];
h q[5];
sdg q[5];
h q[6];
sdg q[6];
cx q[5], q[6];
rz(theta_6) q[6];
cx q[5], q[6];

h q[0];
h q[1];
cx q[0], q[1];
rz(theta_7) q[1];
cx q[0], q[1];
h q[0];
h q[1];
s q[0];
h q[0];
s q[1];
h q[1];
cx q[0], q[1];
rz(theta_7) q[1];
cx q[0], q[1];
h q[0];
sdg q[0];
h q[1];
sdg q[1];
cx q[0], q[1];
rz(theta_7) q[1];
cx q[0], q[1];

h q[2];
h q[3];
cx q[2], q[3];
rz(theta_8) q[3];
cx q[2], q[3];
h q[2];
h q[3];
s q[2];
h q[2];
s q[3];
h q[3];
cx q[2], q[3];
rz(theta_8) q[3];
cx q[2], q[3];
h q[2];
sdg q[2];
h q[3];
sdg q[3];
cx q[2], q[3];
rz(theta_8) q[3];
cx q[2], q[3];

h q[4];
h q[5];
cx q[4], q[5];
rz(theta_9) q[5];
cx q[4], q[5];
h q[4];
h q[5];
s q[4];
h q[4];
s q[5];
h q[5];
cx q[4], q[5];
rz(theta_9) q[5];
cx q[4], q[5];
h q[4];
sdg q[4];
h q[5];
sdg q[5];
cx q[4], q[5];
rz(theta_9) q[5];
cx q[4], q[5];

h q[6];
h q[7];
cx q[6], q[7];
rz(theta_10) q[7];
cx q[6], q[7];
h q[6];
h q[7];
s q[6];
h q[6];
s q[7];
h q[7];
cx q[6], q[7];
rz(theta_10) q[7];
cx q[6], q[7];
h q[6];
sdg q[6];
h q[7];
sdg q[7];
cx q[6], q[7];
rz(theta_10) q[7];
cx q[6], q[7];

h q[1];
h q[2];
cx q[1], q[2];
rz(theta_11) q[2];
cx q[1], q[2];
h q[1];
h q[2];
s q[1];
h q[1];
s q[2];
h q[2];
cx q[1], q[2];
rz(theta_11) q[2];
cx q[1], q[2];
h q[1];
sdg q[1];
h q[2];
sdg q[2];
cx q[1], q[2];
rz(theta_11) q[2];
cx q[1], q[2];

h q[3];
h q[4];
cx q[3], q[4];
rz(theta_12) q[4];
cx q[3], q[4];
h q[3];
h q[4];
s q[3];
h q[3];
s q[4];
h q[4];
cx q[3], q[4];
rz(theta_12) q[4];
cx q[3], q[4];
h q[3];
sdg q[3];
h q[4];
sdg q[4];
cx q[3], q[4];
rz(theta_12) q[4];
cx q[3], q[4];

h q[5];
h q[6];
cx q[5], q[6];
rz(theta_13) q[6];
cx q[5], q[6];
h q[5];
h q[6];
s q[5];
h q[5];
s q[6];
h q[6];
cx q[5], q[6];
rz(theta_13) q[6];
cx q[5], q[6];
h q[5];
sdg q[5];
h q[6];
sdg q[6];
cx q[5], q[6];
rz(theta_13) q[6];
cx q[5], q[6];
"""

code_string = """from qiskit_algorithms.minimum_eigensolvers import VQE
from qiskit_algorithms.optimizers import COBYLA
from qiskit.primitives import Estimator

def run_and_analyze(circuit, hamiltonian, expected_energy, optiter=200, tolerance=1e-3):
    estimator = Estimator()
    num_params = int(getattr(circuit, "num_parameters", 0))
    maxiter = int(max(optiter, 30 * num_params, 200))
    optimizer = COBYLA(maxiter=maxiter)
    if num_params > 0:
        initial_point = [0.1 * ((i % 3) - 1) for i in range(num_params)]
        vqe = VQE(estimator=estimator, ansatz=circuit, optimizer=optimizer, initial_point=initial_point)
    else:
        vqe = VQE(estimator=estimator, ansatz=circuit, optimizer=optimizer)
    result = vqe.compute_minimum_eigenvalue(hamiltonian)
    energy = float(result.eigenvalue.real)
    return abs(energy - float(expected_energy))
"""
