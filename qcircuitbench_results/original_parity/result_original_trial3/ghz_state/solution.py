qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
qubit[8] q;
h q[0];
cx q[0], q[1];
cx q[0], q[2];
cx q[0], q[3];
cx q[0], q[4];
cx q[0], q[5];
cx q[0], q[6];
cx q[0], q[7];
"""

code_string = """from qiskit import transpile

def run_and_analyze(circuit, aer_sim):
    n = circuit.num_qubits
    circ = circuit.copy()
    try:
        circ.save_statevector()
    except Exception:
        from qiskit_aer.library import SaveStatevector
        circ.append(SaveStatevector(n, label="statevector"), list(range(n)))

    compiled = transpile(circ, aer_sim, optimization_level=0)
    result = aer_sim.run(compiled).result()
    sv = result.get_statevector(compiled)

    idx0 = 0
    idx1 = (1 << n) - 1
    amp0 = sv[idx0]
    amp1 = sv[idx1]
    tol = 1e-9

    support_ok = True
    for i, amp in enumerate(sv):
        if i in (idx0, idx1):
            continue
        if abs(amp) > tol:
            support_ok = False
            break

    norm_ok = abs((abs(amp0) ** 2 + abs(amp1) ** 2) - 1.0) < 1e-7
    balance_ok = abs(abs(amp0) - abs(amp1)) < 1e-7

    if support_ok and norm_ok and balance_ok:
        return list(range(n))

    return []
"""
