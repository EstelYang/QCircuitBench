from teleportation_utils import *
from teleportation_post_processing import run_and_analyze as ground_truth_run_and_analyze


def execute_test_cases(qasm_string, run_and_analyze_func, shots=10):
    aer_sim = AerSimulator(method="statevector")
    total_success = 0
    total_fail = 0
    t_range = 10
    tol = 15e-3
    for t in range(1, 1 + t_range):
        print(f"    Running Test Case {t}")
        with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
            oracle_def = file.read()
        full_qasm = plug_in_oracle(qasm_string, oracle_def)
        circuit = loads(full_qasm)
        with open(f"test_oracle/trial{t}/state_info.txt", "r") as f:
            content = f.read()
        vector_name = "psi"
        match = re.search(
            rf"{vector_name}: Statevector\(\[([^\]]+)\],\s*dims=\(([^\)]+)\)\)",
            content,
        )
        if match:
            vector_str = match.group(1)
            dims_str = match.group(2)
            vector = eval(f"[{vector_str}]")
            dims = eval(f"({dims_str})")
            target_state = Statevector(vector, dims=dims)
        else:
            raise ValueError("Statevector information not found in the file.")

        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            qubit_indices = run_and_analyze_func(circuit.copy(), aer_sim)
            flag = verify_result_matrix(circuit, target_state, qubit_indices, tol)
            if flag:
                cnt_success += 1
            else:
                cnt_fail += 1
        print(f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}")
        total_success += cnt_success
        total_fail += cnt_fail
    print(f"Total Success: {total_success}; Total Fail: {total_fail}")
    result_score = total_success / (total_fail + total_success)
    return result_score


def check_model(qasm_string, code_string, t=1):
    """Check the Teleportation model."""
    # Verify the syntax of the QASM code with the first test case oracle
    qasm_syntax = -1
    code_syntax = -1
    result_score = -1

    # QASM syntax verification
    with open(f"test_oracle/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        print("QASM syntax error detected, using ground truth.")
        qasm_syntax = 0
        with open(f"teleportation.qasm", "r") as file:  # model generated is wrong, use ground truth
            qasm_string = file.read()
    else:
        qasm_syntax = 1

    # Post-Processing code verification
    try:
        local_vars = {}
        exec(code_string, globals(), local_vars)
        run_and_analyze_func = local_vars['run_and_analyze']
        code_syntax = 1
        print("Post-processing code loaded successfully.")
    except Exception as e:
        print(f"Post-processing syntax error: {e}\nusing ground truth.")
        run_and_analyze_func = ground_truth_run_and_analyze
        code_syntax = 0

    if qasm_syntax == 1 or code_syntax == 1:  # Only check the case : model has at least one correct
        try:
            result_score = execute_test_cases(qasm_string, run_and_analyze_func, n)
        except Exception as e:
            print(f"Post-processing running-time error: {e}")
            code_syntax = 0

    return qasm_syntax, code_syntax, result_score


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[3] q;
Psi q[0];
Bell_Pair q[1], q[2];
Alice q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
if (c[1]) {
  x q[2];
}
if (c[0]) {
  z q[2];
}
"""
    code_string = '''
def run_and_analyze(circuit, aer_sim):
    """Return the qubit indices of the teleported state."""
    return [2]
'''
    print(check_model(qasm_string, code_string))


if __name__ == "__main__":
    main()
