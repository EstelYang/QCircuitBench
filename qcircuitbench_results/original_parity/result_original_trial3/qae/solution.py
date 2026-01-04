qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
input float[1] theta;
qubit[8] q;
bit[1] c;
OraclePrep q[0], q[1], q[2], q[3], q[4];
rz(theta[0]) q[0];
x q[3];
x q[4];
OracleSwap q[3], q[4], q[5], q[6], q[7];
measure q[7] -> c[0];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator
from qiskit_algorithms.optimizers import COBYLA

def run_and_analyze(circuit):
    aer_sim = AerSimulator()
    tcirc = transpile(circuit, aer_sim, optimization_level=3)
    shots = 256

    def objective(x):
        bound = tcirc.assign_parameters(x, inplace=False)
        result = aer_sim.run(bound, shots=shots).result()
        counts = result.get_counts()
        return float(counts.get("1", 0)) / float(shots)

    x0 = [0.0] * tcirc.num_parameters
    opt = COBYLA(maxiter=250, rhobeg=0.5, tol=1e-4)
    opt_result = opt.minimize(fun=objective, x0=x0)

    return opt_result
"""
