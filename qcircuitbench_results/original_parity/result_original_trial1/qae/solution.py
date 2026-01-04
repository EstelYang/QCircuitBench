qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
input float[1] theta;
qubit[8] q;
bit[1] c;
OraclePrep q[0], q[1], q[2], q[3], q[4];
x q[3];
x q[4];
rz(theta[0]) q[2];
OracleSwap q[3], q[4], q[5], q[6], q[7];
measure q[7] -> c[0];
"""

code_string = r"""from qiskit import transpile
from qiskit_aer import AerSimulator
try:
    from qiskit_algorithms.optimizers import COBYLA
except Exception:  # pragma: no cover
    from qiskit.algorithms.optimizers import COBYLA

def run_and_analyze(circuit):
    aer_sim = AerSimulator()
    qc = transpile(circuit, aer_sim, optimization_level=3)

    params = list(qc.parameters)
    params_sorted = sorted(params, key=lambda p: p.name)
    shots = 4096

    def objective(x):
        bind = {params_sorted[i]: float(x[i]) for i in range(len(params_sorted))}
        qcb = qc.assign_parameters(bind, inplace=False)
        result = aer_sim.run(qcb, shots=shots).result()
        counts = result.get_counts(qcb)
        p1 = counts.get("1", 0) / float(shots)
        return p1

    x0 = [0.0] * len(params_sorted)
    opt = COBYLA(maxiter=200, tol=1e-3)
    opt_result = opt.minimize(fun=objective, x0=x0)
    return opt_result
"""
