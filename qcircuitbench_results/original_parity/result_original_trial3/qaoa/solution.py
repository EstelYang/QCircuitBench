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
    params = sorted(list(transpiled.parameters), key=lambda p: p.name)

    def make_bind(values):
        return {p: [float(v)] for p, v in zip(params, values)}

    def eval_expectation(values, shots):
        job = aer_sim.run(
            transpiled,
            shots=shots,
            parameter_binds=[make_bind(values)],
            seed_simulator=123,
        )
        counts = job.result().get_counts(0)
        return float(compute_expectation(counts, graph)), counts

    def objective(values, shots):
        exp_val, _ = eval_expectation(values, shots)
        return -exp_val

    initial_params = [0.5] * circuit.num_parameters

    opt1 = minimize(
        lambda x: objective(x, 1024),
        x0=initial_params,
        method=\"COBYLA\",
        options={\"maxiter\": 60, \"rhobeg\": 0.7},
    )
    opt2 = minimize(
        lambda x: objective(x, 4096),
        x0=opt1.x,
        method=\"COBYLA\",
        options={\"maxiter\": 60, \"rhobeg\": 0.3},
    )

    _, counts = eval_expectation(opt2.x, 8192)

    top_items = sorted(counts.items(), key=lambda kv: kv[1], reverse=True)[:2]
    top_two = [bitstr for bitstr, _ in top_items]
    if len(top_two) == 1:
        top_two = top_two * 2
    return top_two
"""
