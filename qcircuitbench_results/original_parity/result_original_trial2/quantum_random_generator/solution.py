qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[5] q;
bit[5] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    tc = transpile(circuit, aer_sim)
    job = aer_sim.run(tc, shots=1, memory=True)
    result = job.result()
    mem = result.get_memory(tc)
    bitstring = mem[0].replace(" ", "")
    random_number = bitstring[::-1]
    return random_number
"""
