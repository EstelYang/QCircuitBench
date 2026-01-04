qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[0];
cx q[0], q[1];
cx q[1], q[2];
cx q[2], q[3];
cx q[3], q[4];
cx q[4], q[5];
cx q[5], q[6];
cx q[6], q[7];
"""

code_string = """from qiskit import transpile
from qiskit_aer import AerSimulator

def run_and_analyze(circuit, aer_sim):
    circ = circuit.copy()
    try:
        circ.save_statevector()
    except Exception:
        pass

    tcirc = transpile(circ, aer_sim)
    result = aer_sim.run(tcirc, shots=1).result()

    try:
        statevector = result.get_statevector(tcirc)
    except Exception:
        data = result.data(0)
        statevector = data.get("statevector")
        if statevector is None:
            statevector = data.get("sv")
    if statevector is None:
        from qiskit.quantum_info import Statevector

        statevector = Statevector.from_instruction(circuit).data

    max_idx = 0
    max_prob = -1.0
    for i, amp in enumerate(statevector):
        prob = (amp.real * amp.real) + (amp.imag * amp.imag)
        if (prob > max_prob + 1e-15) or (abs(prob - max_prob) <= 1e-15 and i > max_idx):
            max_prob = prob
            max_idx = i

    bits = format(max_idx, '0{}b'.format(circuit.num_qubits))
    prepared = [i for i, b in enumerate(bits[::-1]) if b == '1']
    return prepared
"""
