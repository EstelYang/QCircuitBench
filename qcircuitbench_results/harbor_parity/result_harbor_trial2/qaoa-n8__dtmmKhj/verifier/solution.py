qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
input float[64] gamma;
input float[64] beta;
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
rz(gamma) q[1];
cx q[0], q[1];
cx q[0], q[3];
rz(gamma) q[3];
cx q[0], q[3];
cx q[0], q[2];
rz(gamma) q[2];
cx q[0], q[2];
cx q[1], q[4];
rz(gamma) q[4];
cx q[1], q[4];
cx q[1], q[6];
rz(gamma) q[6];
cx q[1], q[6];
cx q[2], q[4];
rz(gamma) q[4];
cx q[2], q[4];
cx q[2], q[6];
rz(gamma) q[6];
cx q[2], q[6];
cx q[4], q[7];
rz(gamma) q[7];
cx q[4], q[7];
cx q[3], q[7];
rz(gamma) q[7];
cx q[3], q[7];
cx q[3], q[5];
rz(gamma) q[5];
cx q[3], q[5];
cx q[7], q[5];
rz(gamma) q[5];
cx q[7], q[5];
cx q[5], q[6];
rz(gamma) q[6];
cx q[5], q[6];
rx(beta) q[0];
rx(beta) q[1];
rx(beta) q[2];
rx(beta) q[3];
rx(beta) q[4];
rx(beta) q[5];
rx(beta) q[6];
rx(beta) q[7];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
measure q[5] -> c[5];
measure q[6] -> c[6];
measure q[7] -> c[7];
"""

code_string = """from qiskit import transpile
from scipy.optimize import minimize

def run_and_analyze(circuit, aer_sim, graph):
    transpiled = transpile(circuit, aer_sim)
    parameters = list(transpiled.parameters)

    def objective(params):
        bind = {}
        for i in range(len(parameters)):
            bind[parameters[i]] = [float(params[i])]
        job = aer_sim.run(transpiled, parameter_binds=[bind], shots=2048)
        result = job.result()
        counts = result.get_counts(0)
        return -compute_expectation(counts, graph)

    initial_params = [0.1] * circuit.num_parameters
    opt = minimize(objective, x0=initial_params, method="COBYLA", options={"maxiter": 80})

    best_params = opt.x
    best_bind = {}
    for i in range(len(parameters)):
        best_bind[parameters[i]] = [float(best_params[i])]

    job = aer_sim.run(transpiled, parameter_binds=[best_bind], shots=8192)
    result = job.result()
    counts = result.get_counts(0)

    sorted_items = sorted(counts.items(), key=lambda kv: (-kv[1], kv[0]))
    top_two = []
    if len(sorted_items) >= 1:
        top_two.append(sorted_items[0][0])
    if len(sorted_items) >= 2:
        top_two.append(sorted_items[1][0])
    if len(top_two) == 1:
        top_two.append(top_two[0])
    if len(top_two) == 0:
        top_two = ["0" * 8, "0" * 8]
    return top_two
"""
