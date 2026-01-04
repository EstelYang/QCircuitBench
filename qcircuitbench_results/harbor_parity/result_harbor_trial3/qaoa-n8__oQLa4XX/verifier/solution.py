qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
input float[2] theta;
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
rz(theta[0]) q[1];
cx q[0], q[1];
cx q[0], q[3];
rz(theta[0]) q[3];
cx q[0], q[3];
cx q[0], q[2];
rz(theta[0]) q[2];
cx q[0], q[2];
cx q[1], q[4];
rz(theta[0]) q[4];
cx q[1], q[4];
cx q[1], q[6];
rz(theta[0]) q[6];
cx q[1], q[6];
cx q[2], q[4];
rz(theta[0]) q[4];
cx q[2], q[4];
cx q[2], q[6];
rz(theta[0]) q[6];
cx q[2], q[6];
cx q[4], q[7];
rz(theta[0]) q[7];
cx q[4], q[7];
cx q[3], q[7];
rz(theta[0]) q[7];
cx q[3], q[7];
cx q[3], q[5];
rz(theta[0]) q[5];
cx q[3], q[5];
cx q[7], q[5];
rz(theta[0]) q[5];
cx q[7], q[5];
cx q[5], q[6];
rz(theta[0]) q[6];
cx q[5], q[6];
rx(theta[1]) q[0];
rx(theta[1]) q[1];
rx(theta[1]) q[2];
rx(theta[1]) q[3];
rx(theta[1]) q[4];
rx(theta[1]) q[5];
rx(theta[1]) q[6];
rx(theta[1]) q[7];
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
    shots = 2048

    initial_value = 0.1
    initial_params = [initial_value] * circuit.num_parameters

    params_list = list(circuit.parameters)

    def objective(x):
        bind = {}
        for i, p in enumerate(params_list):
            bind[p] = [float(x[i])]
        result = aer_sim.run(transpiled, shots=shots, parameter_binds=[bind]).result()
        counts = result.get_counts()
        return -compute_expectation(counts, graph)

    opt = minimize(objective, x0=initial_params, method="COBYLA", options={"maxiter": 80})

    best_x = opt.x
    final_bind = {}
    for i, p in enumerate(params_list):
        final_bind[p] = [float(best_x[i])]

    final_result = aer_sim.run(transpiled, shots=shots, parameter_binds=[final_bind]).result()
    final_counts = final_result.get_counts()

    sorted_items = sorted(final_counts.items(), key=lambda kv: kv[1], reverse=True)
    top_two = []
    if len(sorted_items) >= 1:
        top_two.append(sorted_items[0][0])
    if len(sorted_items) >= 2:
        top_two.append(sorted_items[1][0])
    return top_two
"""
