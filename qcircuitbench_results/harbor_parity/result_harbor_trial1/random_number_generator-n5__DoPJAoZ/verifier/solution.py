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
    # Transpile for the provided AerSimulator backend and sample a single shot.
    compiled = transpile(circuit, aer_sim, optimization_level=0)
    job = aer_sim.run(compiled, shots=1, memory=True)
    result = job.result()
    memory = result.get_memory(0)
    random_number = memory[0]
    return random_number
"""
