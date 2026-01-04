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
    tcirc = transpile(circuit, aer_sim)
    result = aer_sim.run(tcirc, shots=1, memory=True).result()
    mem = result.get_memory(tcirc)[0].replace(" ", "")
    n = circuit.num_clbits
    if len(mem) < n:
        mem = mem.zfill(n)
    random_number = mem[-n:]
    return random_number
"""
