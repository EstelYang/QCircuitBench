qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
input float[64] gamma0;
input float[64] beta0;
input float[64] gamma1;
input float[64] beta1;
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
rz(gamma0) q[1];
cx q[0], q[1];
cx q[0], q[3];
rz(gamma0) q[3];
cx q[0], q[3];
cx q[0], q[2];
rz(gamma0) q[2];
cx q[0], q[2];
cx q[1], q[4];
rz(gamma0) q[4];
cx q[1], q[4];
cx q[1], q[6];
rz(gamma0) q[6];
cx q[1], q[6];
cx q[2], q[4];
rz(gamma0) q[4];
cx q[2], q[4];
cx q[2], q[6];
rz(gamma0) q[6];
cx q[2], q[6];
cx q[4], q[7];
rz(gamma0) q[7];
cx q[4], q[7];
cx q[3], q[7];
rz(gamma0) q[7];
cx q[3], q[7];
cx q[3], q[5];
rz(gamma0) q[5];
cx q[3], q[5];
cx q[7], q[5];
rz(gamma0) q[5];
cx q[7], q[5];
cx q[5], q[6];
rz(gamma0) q[6];
cx q[5], q[6];
rx(beta0) q[0];
rx(beta0) q[1];
rx(beta0) q[2];
rx(beta0) q[3];
rx(beta0) q[4];
rx(beta0) q[5];
rx(beta0) q[6];
rx(beta0) q[7];
cx q[0], q[1];
rz(gamma1) q[1];
cx q[0], q[1];
cx q[0], q[3];
rz(gamma1) q[3];
cx q[0], q[3];
cx q[0], q[2];
rz(gamma1) q[2];
cx q[0], q[2];
cx q[1], q[4];
rz(gamma1) q[4];
cx q[1], q[4];
cx q[1], q[6];
rz(gamma1) q[6];
cx q[1], q[6];
cx q[2], q[4];
rz(gamma1) q[4];
cx q[2], q[4];
cx q[2], q[6];
rz(gamma1) q[6];
cx q[2], q[6];
cx q[4], q[7];
rz(gamma1) q[7];
cx q[4], q[7];
cx q[3], q[7];
rz(gamma1) q[7];
cx q[3], q[7];
cx q[3], q[5];
rz(gamma1) q[5];
cx q[3], q[5];
cx q[7], q[5];
rz(gamma1) q[5];
cx q[7], q[5];
cx q[5], q[6];
rz(gamma1) q[6];
cx q[5], q[6];
rx(beta1) q[0];
rx(beta1) q[1];
rx(beta1) q[2];
rx(beta1) q[3];
rx(beta1) q[4];
rx(beta1) q[5];
rx(beta1) q[6];
rx(beta1) q[7];
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
    tcirc = transpile(circuit, aer_sim)
    params_by_name = {p.name: p for p in tcirc.parameters}

    def objective(x):
        bind = {
            params_by_name["gamma0"]: [float(x[0])],
            params_by_name["beta0"]: [float(x[1])],
            params_by_name["gamma1"]: [float(x[2])],
            params_by_name["beta1"]: [float(x[3])],
        }
        parameter_binds = [bind]
        job = aer_sim.run(tcirc, shots=2048, parameter_binds=parameter_binds)
        result = job.result()
        counts = result.get_counts(0)
        return -compute_expectation(counts, graph)

    initial_params = [0.1] * circuit.num_parameters

    starts = [
        initial_params,
        [0.7, 0.2, 0.7, 0.2],
        [1.3, 0.9, 0.4, 1.1],
    ]
    best_x = initial_params
    best_val = objective(best_x)
    for x0 in starts:
        res = minimize(objective, x0=x0, method="COBYLA", options={"maxiter": 120})
        val = float(res.fun)
        if val < best_val:
            best_val = val
            best_x = [float(v) for v in res.x]

    parameter_binds = [{
        params_by_name["gamma0"]: [float(best_x[0])],
        params_by_name["beta0"]: [float(best_x[1])],
        params_by_name["gamma1"]: [float(best_x[2])],
        params_by_name["beta1"]: [float(best_x[3])],
    }]
    job = aer_sim.run(tcirc, shots=8192, parameter_binds=parameter_binds)
    result = job.result()
    counts = result.get_counts(0)

    sorted_items = sorted(counts.items(), key=lambda kv: kv[1], reverse=True)
    top_two = [sorted_items[0][0], sorted_items[1][0]] if len(sorted_items) > 1 else [sorted_items[0][0]]
    return top_two
"""
