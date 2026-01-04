qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";

input float[64] theta0;
input float[64] theta1;
qubit[8] q;
bit[1] c;

OraclePrep q[0], q[1], q[2], q[3], q[4];

rx(theta0) q[3];
rx(theta1) q[4];

OracleSwap q[3], q[4], q[5], q[6], q[7];
measure q[7] -> c[0];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator


def run_and_analyze(circuit):
    import numpy as np
    from scipy.optimize import minimize

    # Verifier provides aer_sim; do not construct our own backend.
    backend = aer_sim

    parameters = sorted(list(circuit.parameters), key=lambda p: p.name)
    if len(parameters) == 0:
        return minimize(lambda _x: 0.0, x0=np.array([]), method="COBYLA")

    transpiled = transpile(circuit, backend, optimization_level=1)

    def loss(x):
        bound = transpiled.assign_parameters(
            {parameters[i]: float(x[i]) for i in range(len(parameters))},
            inplace=False,
        )
        job = backend.run(bound, shots=2048, seed_simulator=12345)
        result = job.result()
        counts = result.get_counts(0)
        p1 = counts.get("1", 0) / 2048.0
        return float(p1)

    x0 = np.array([np.pi, np.pi][: len(parameters)], dtype=float)

    opt_result = minimize(loss, x0=x0, method="COBYLA", options={"maxiter": 80})
    return opt_result
"""
