qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
x q[0];
cry(2.4188584057763776) q[0], q[1];
cx q[1], q[0];
cry(2.366399280279432) q[1], q[2];
cx q[2], q[1];
cry(2.3005239830218627) q[2], q[3];
cx q[3], q[2];
cry(2.214297435588181) q[3], q[4];
cx q[4], q[3];
cry(2.0943951023931957) q[4], q[5];
cx q[5], q[4];
cry(1.9106332362490184) q[5], q[6];
cx q[6], q[5];
cry(1.5707963267948968) q[6], q[7];
cx q[7], q[6];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim):
    meas_circuit = circuit.copy()
    if meas_circuit.num_clbits == 0:
        meas_circuit.measure_all()

    compiled = transpile(meas_circuit, aer_sim)
    result = aer_sim.run(compiled, shots=1, memory=True).result()
    bitstring = result.get_memory(compiled)[0].replace(" ", "")

    ones = [i for i, ch in enumerate(reversed(bitstring)) if ch == "1"]
    return ones
"""
