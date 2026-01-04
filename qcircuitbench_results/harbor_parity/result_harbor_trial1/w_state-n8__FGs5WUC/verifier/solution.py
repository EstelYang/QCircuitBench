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
    measured = circuit.copy()
    measured.measure_all()

    compiled = transpile(measured, aer_sim)
    result = aer_sim.run(compiled, shots=2048).result()
    counts = result.get_counts()

    best_bitstring = None
    best_count = -1
    for bitstring, count in counts.items():
        # Prefer outcomes consistent with a W state measurement: exactly one '1'.
        if bitstring.replace(\" \", \"\").count(\"1\") != 1:
            continue
        if count > best_count:
            best_count = count
            best_bitstring = bitstring

    if best_bitstring is None:
        best_bitstring = max(counts, key=counts.get)

    bits = best_bitstring.replace(\" \", \"\")
    # Qiskit returns bitstrings with the least-significant bit as qubit 0 (rightmost).
    return [i for i, b in enumerate(reversed(bits)) if b == \"1\"]
"""
