from superdense_utils import *
from superdense_post_processing import run_and_analyze as ground_truth_run_and_analyze


def execute_test_cases(qasm_string, run_and_analyze_func, message, shots=100):
    circuit = loads(qasm_string)
    aer_sim = AerSimulator()
    cnt_success = 0
    cnt_fail = 0
    for shot in range(shots):
        prediction = run_and_analyze_func(circuit.copy(), aer_sim)
        if not isinstance(prediction, str):
            raise TypeError("Predicted message should be a string")
        if prediction == message:
            cnt_success += 1
        else:
            cnt_fail += 1
    print(f"    Success: {cnt_success}/{shots}, Fail: {cnt_fail}/{shots}")
    result_score = cnt_success / (cnt_fail + cnt_success)
    return result_score


def check_model(qasm_string, code_string, message):
    """Check the Superdense-Coding model."""
    # Verify the syntax of the QASM code with the first test case oracle
    qasm_syntax = -1
    code_syntax = -1
    result_score = -1

    # QASM syntax verification
    full_qasm = qasm_string
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        print("QASM syntax error detected, using ground truth.")
        qasm_syntax = 0
        with open(f"superdense_coding_mes{message}.qasm", "r") as file:  # model generated is wrong, use ground truth
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
            result_score = execute_test_cases(qasm_string, run_and_analyze_func, message)
        except Exception as e:
            print(f"Post-processing running-time error: {e}")
            code_syntax = 0

    return qasm_syntax, code_syntax, result_score


def main():
    qasm_string = """
OPENQASM 3.0;
include "stdgates.inc";
gate Bell_Pair _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
}
gate Alice _gate_q_0 {
  z _gate_q_0;
}
gate Bob _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  h _gate_q_0;
}
bit[2] c;
qubit[2] q;
Bell_Pair q[0], q[1];
Alice q[0];
Bob q[0], q[1];
c[0] = measure q[0];
c[1] = measure q[1];
"""
    code_string = """
from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    message = list(count.keys())[0]
    return message
"""
    message = "01"
    print(check_model(qasm_string, code_string, message))


if __name__ == "__main__":
    main()
