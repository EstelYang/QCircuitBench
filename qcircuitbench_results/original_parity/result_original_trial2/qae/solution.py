qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
input float[64] p0;
qubit[8] q;
bit[1] c;

OraclePrep q[0], q[1], q[2], q[3], q[4];

rz(p0) q[0];
x q[3];
x q[4];

OracleSwap q[3], q[4], q[5], q[6], q[7];
measure q[7] -> c[0];
"""

code_string = """from qiskit import transpile
import numpy as np
from scipy.optimize import minimize

def run_and_analyze(circuit):
    params = sorted(list(circuit.parameters), key=lambda p: p.name)
    transpiled = transpile(circuit, aer_sim, optimization_level=1)

    def p_ancilla_1(counts):
        total = sum(counts.values()) if counts else 0
        if total == 0:
            return 1.0
        return counts.get("1", 0) / total

    def objective(x):
        bind = {params[i]: float(x[i]) for i in range(len(params))}
        bound = transpiled.assign_parameters(bind, inplace=False)
        result = aer_sim.run(bound, shots=1024).result()
        return float(p_ancilla_1(result.get_counts()))

    x0 = np.zeros(len(params), dtype=float)
    opt = minimize(
        objective,
        x0,
        method="COBYLA",
        options={"maxiter": 80, "rhobeg": 0.5, "disp": False},
    )
    opt_result = {
        "x": np.array(opt.x, dtype=float),
        "fun": float(opt.fun),
        "success": bool(opt.success),
        "message": str(opt.message),
    }
    return opt_result
"""
