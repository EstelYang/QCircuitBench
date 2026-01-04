qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
input float[64] theta0;
input float[64] theta1;
qubit[8] q;
bit[8] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
cx q[0], q[1];
rz(theta0) q[1];
cx q[0], q[1];
cx q[0], q[3];
rz(theta0) q[3];
cx q[0], q[3];
cx q[0], q[2];
rz(theta0) q[2];
cx q[0], q[2];
cx q[1], q[4];
rz(theta0) q[4];
cx q[1], q[4];
cx q[1], q[6];
rz(theta0) q[6];
cx q[1], q[6];
cx q[2], q[4];
rz(theta0) q[4];
cx q[2], q[4];
cx q[2], q[6];
rz(theta0) q[6];
cx q[2], q[6];
cx q[4], q[7];
rz(theta0) q[7];
cx q[4], q[7];
cx q[3], q[7];
rz(theta0) q[7];
cx q[3], q[7];
cx q[3], q[5];
rz(theta0) q[5];
cx q[3], q[5];
cx q[7], q[5];
rz(theta0) q[5];
cx q[7], q[5];
cx q[5], q[6];
rz(theta0) q[6];
cx q[5], q[6];
rx(theta1) q[0];
rx(theta1) q[1];
rx(theta1) q[2];
rx(theta1) q[3];
rx(theta1) q[4];
rx(theta1) q[5];
rx(theta1) q[6];
rx(theta1) q[7];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
measure q[5] -> c[5];
measure q[6] -> c[6];
measure q[7] -> c[7];
"""

code_string = """from scipy.optimize import minimize
from qiskit import transpile

def run_and_analyze(circuit, aer_sim, graph):
    transpiled = transpile(circuit, aer_sim)
    parameters = list(transpiled.parameters)
    num_parameters = min(circuit.num_parameters, len(parameters))

    initial_value = 0.1
    initial_params = [initial_value] * circuit.num_parameters

    def objective(params):
        parameter_binds = [{parameters[i]: [float(params[i])] for i in range(num_parameters)}]
        job = aer_sim.run(transpiled, shots=2048, parameter_binds=parameter_binds)
        counts = job.result().get_counts(0)
        return -compute_expectation(counts, graph)

    opt_result = minimize(objective, x0=initial_params, method="COBYLA", options={"maxiter": 60})
    best_params = opt_result.x

    best_binds = [{parameters[i]: [float(best_params[i])] for i in range(num_parameters)}]
    best_counts = aer_sim.run(transpiled, shots=8192, parameter_binds=best_binds).result().get_counts(0)

    sorted_items = sorted(best_counts.items(), key=lambda kv: kv[1], reverse=True)
    if len(sorted_items) == 0:
        top_two = []
    elif len(sorted_items) == 1:
        top_two = [sorted_items[0][0], sorted_items[0][0]]
    else:
        top_two = [sorted_items[0][0], sorted_items[1][0]]
    return top_two
"""
