qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
input float[64] theta0;
qubit[8] q;
bit[1] c;
OraclePrep q[0], q[1], q[2], q[3], q[4];
rz(theta0) q[0];
x q[3];
x q[4];
OracleSwap q[3], q[4], q[5], q[6], q[7];
measure q[7] -> c[0];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator


def run_and_analyze(circuit):
    params = sorted(list(circuit.parameters), key=lambda p: p.name)
    transpiled = transpile(circuit, aer_sim, optimization_level=1)

    def objective(x):
        bind_map = {params[i]: float(x[i]) for i in range(len(params))}
        bound = transpiled.assign_parameters(bind_map, inplace=False)
        result = aer_sim.run(bound, shots=1024).result()
        counts = result.get_counts()
        p1 = counts.get("1", 0) / 1024.0
        return p1

    if len(params) == 0:
        return None

    from scipy.optimize import minimize

    x0 = [0.0] * len(params)
    opt_result = minimize(objective, x0, method="COBYLA", options={"maxiter": 80})
    return opt_result
"""
