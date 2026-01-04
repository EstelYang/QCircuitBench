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
    # Transpile once for the provided simulator
    tcirc = transpile(circuit, aer_sim)

    best_params = None
    best_exp = None

    def objective(x):
        parameter_binds = [{tcirc.parameters[i]: [float(x[i])] for i in range(tcirc.num_parameters)}]
        job = aer_sim.run(tcirc, shots=1024, parameter_binds=parameter_binds)
        result = job.result()
        counts = result.get_counts()
        exp_val = compute_expectation(counts, graph)
        nonlocal best_params, best_exp
        exp_val_f = float(exp_val)
        if (best_exp is None) or (exp_val_f > best_exp):
            best_exp = exp_val_f
            best_params = [float(v) for v in x]
        return -exp_val_f

    initial_params = [0.1] * circuit.num_parameters
    x0 = initial_params if tcirc.num_parameters == circuit.num_parameters else ([0.1] * tcirc.num_parameters)

    res = minimize(objective, x0=x0, method="COBYLA", options={"maxiter": 100})
    final_params = best_params if best_params is not None else [float(v) for v in res.x]

    parameter_binds = [{tcirc.parameters[i]: [float(final_params[i])] for i in range(tcirc.num_parameters)}]
    job = aer_sim.run(tcirc, shots=4096, parameter_binds=parameter_binds)
    result = job.result()
    best_counts = result.get_counts()

    # top two most frequent bitstrings
    sorted_items = sorted(best_counts.items(), key=lambda kv: kv[1], reverse=True)
    n = circuit.num_qubits
    if len(sorted_items) == 0:
        top_two = ["0" * n, "1" * n]
    elif len(sorted_items) == 1:
        top_two = [sorted_items[0][0], sorted_items[0][0]]
    else:
        top_two = [sorted_items[0][0], sorted_items[1][0]]
    return top_two
"""
