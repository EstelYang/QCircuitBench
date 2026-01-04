qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
x q[0];
cx q[0], q[1];
ry(-0.3613671239067078) q[0];
cx q[1], q[0];
ry(0.3613671239067078) q[0];
cx q[1], q[0];
cx q[0], q[1];
cx q[0], q[2];
ry(-0.3875966866551806) q[0];
cx q[2], q[0];
ry(0.3875966866551806) q[0];
cx q[2], q[0];
cx q[0], q[2];
cx q[0], q[3];
ry(-0.42053433528396517) q[0];
cx q[3], q[0];
ry(0.42053433528396517) q[0];
cx q[3], q[0];
cx q[0], q[3];
cx q[0], q[4];
ry(-0.4636476090008061) q[0];
cx q[4], q[0];
ry(0.4636476090008061) q[0];
cx q[4], q[0];
cx q[0], q[4];
cx q[0], q[5];
ry(-0.5235987755982989) q[0];
cx q[5], q[0];
ry(0.5235987755982989) q[0];
cx q[5], q[0];
cx q[0], q[5];
cx q[0], q[6];
ry(-0.6154797086703875) q[0];
cx q[6], q[0];
ry(0.6154797086703875) q[0];
cx q[6], q[0];
cx q[0], q[6];
cx q[0], q[7];
ry(-0.7853981633974482) q[0];
cx q[7], q[0];
ry(0.7853981633974482) q[0];
cx q[7], q[0];
cx q[0], q[7];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    qc = circuit.copy()
    qc.measure_all()
    tqc = transpile(qc, aer_sim, optimization_level=3)
    result = aer_sim.run(tqc, shots=1).result()
    counts = result.get_counts(tqc)
    bitstring = next(iter(counts)).replace(" ", "")
    bitstring = bitstring[::-1]
    return [i for i, b in enumerate(bitstring) if b == "1"]
"""
