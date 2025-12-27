import re
from qiskit_aer import AerSimulator
from qiskit.qasm3 import loads, dumps
from qiskit import QuantumCircuit, transpile
from qiskit.circuit.library import PhaseGate
import time
import random
import math
import numpy as np
from qiskit_algorithms.utils import algorithm_globals

algorithm_globals.random_seed = 300
np.random.seed(300)


def ground_truth_run_and_analyze(circuit, aer_sim):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # The key is the solution to the problem
    y = list(count.keys())[0]
    n = len(y)
    y = int(y, 2)
    prediction = y / (2 ** n)
    return prediction


def print_and_save(message, text):
    print(message)
    text.append(message)


def plug_in_oracle(qasm_code, oracle_def):
    """Plug-in the oracle definition into the QASM code."""
    oracle_pos = qasm_code.find('include "oracle.inc";')
    if oracle_pos == -1:
        print("[QASM Syntax Error]: Can't find 'include \"oracle.inc\";'")
        return qasm_code
    full_qasm = (
            qasm_code[:oracle_pos]
            + oracle_def
            + qasm_code[oracle_pos + len('include "oracle.inc";'):]
    )
    return full_qasm


def My_U_gate(theta):
    u_gate = PhaseGate(theta)
    cu_gate = u_gate.control(1)
    cu_gate.name = "CU"

    return cu_gate


def My_psi_gate():
    psi_circuit = QuantumCircuit(1)
    psi_circuit.x(0)

    psi_gate = psi_circuit.to_gate()
    psi_gate.name = "Psi"

    return psi_gate


def inverse_qft(n):
    circuit = QuantumCircuit(n)
    for qubit in range(n // 2):
        circuit.swap(qubit, n - qubit - 1)
    for target_qubit in range(n):
        for control_qubit in range(target_qubit):
            circuit.cp(
                -np.pi / 2 ** (target_qubit - control_qubit),
                control_qubit,
                target_qubit,
            )
        circuit.h(target_qubit)
    iqft_gate = circuit.to_gate()
    iqft_gate.name = "IQFT"
    return iqft_gate


def quantum_phase_estimation_circuit(n, cu_gate, psi_gate):
    qpe_circuit = QuantumCircuit(n + 1, n)
    qpe_circuit.append(psi_gate, [n])
    qpe_circuit.h(range(n))
    repetitions = 1
    for counting_qubit in range(n):
        for _ in range(repetitions):
            qpe_circuit.append(cu_gate, [counting_qubit, n])
        repetitions *= 2
    qpe_circuit.append(inverse_qft(n), range(n))
    qpe_circuit.measure(range(n), range(n))
    return qpe_circuit


def extract_oracle_definition(n, theta):
    """Create the oracle definition by dumping a circuit and extracting gate Oracle."""
    cu_gate = My_U_gate(theta * 2 * math.pi)
    psi_gate = My_psi_gate()
    qpe_circuit = quantum_phase_estimation_circuit(n, cu_gate, psi_gate)
    qasm_string = dumps(qpe_circuit)

    include_pos = qasm_string.find('include "stdgates.inc";')
    if include_pos == -1:
        raise ValueError("Include statement not found in the file")
    iqft_pos = qasm_string.find("gate IQFT")
    if iqft_pos == -1:
        raise ValueError("Gate IQFT not found in the file")
    register_pos = qasm_string.find("bit")
    if register_pos == -1:
        raise ValueError("Register declaration not found in the generated QASM.")

    oracle_def = qasm_string[
                 include_pos + len('include "stdgates.inc";'): iqft_pos
                 ].strip()

    oracle_def = re.sub(
        r"gate CU_\d+\(.*?\) _gate_q_0, _gate_q_1 {",
        "gate CU_0 _gate_q_0, _gate_q_1 {",
        oracle_def,
    )

    return oracle_def


def generate_random_theta(n, test_num=20):
    """Generates secret strings of length n as test cases."""
    t_range = min(test_num, 2 ** (n - 2))
    selected_theta = np.random.rand(t_range)
    return list(selected_theta)


def generate_test_cases(n, test_num=20):
    """Generate secret strings and their corresponding oracle definitions."""
    test_cases = []
    for theta in generate_random_theta(n, test_num):
        oracle_def = extract_oracle_definition(n, theta)
        test_cases.append((theta, oracle_def))
    return test_cases


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None


def expr_backtrack(expr: str, code_string: str, eval_globals: dict, local_vars: dict, default=float('nan')):
    try:
        value = eval(expr, eval_globals, local_vars)
        return int(value) if isinstance(value, int) else default
    except Exception as e:
        print(f"[Eval Error] expr='{expr}' → {e}")

    varname = expr.strip().split(".")[0]
    code_lines = code_string.splitlines()
    target_line_index = -1

    for i, line in enumerate(code_lines):
        if f"shots" in line and expr in line:
            target_line_index = i
            break

    if target_line_index == -1:
        print(f"[Backtrack] Can't locate line for 'shots={expr}'")
        return default

    pattern = re.compile(rf"^\s*{re.escape(varname)}\s*=\s*(.+)")
    for i in range(target_line_index - 1, -1, -1):
        match = pattern.match(code_lines[i])
        if match:
            rhs_expr = match.group(1).strip()
            try:
                val = eval(rhs_expr, eval_globals, local_vars)
                eval_globals[varname] = val
                print(f"[Resolved] {varname} = {rhs_expr} → {val}")
                value = eval(expr, eval_globals, local_vars)
                return int(value) if isinstance(value, int) else default
            except Exception as e2:
                print(f"[Backtrack Eval Fail] {varname} = {rhs_expr} → {e2}")
                continue

    print(f"[Backtrack Failed] No working definition found for '{varname}' before use.")
    return default


def efficiency_check(qasm_string, dire_gt, code_string, run_and_analyze_func, gd_run_and_analyze_func, n, oracle_def):
    aer_sim = AerSimulator()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)

    with open(f"{dire_gt}/phase_estimation_n{n}.qasm", "r") as file:
        gd_qasm_string = file.read()
    gd_full_qasm = plug_in_oracle(gd_qasm_string, oracle_def)

    circuit = loads(full_qasm)

    ### Gate Count ###
    # for model
    cleaned_lines = [
        line for line in full_qasm.splitlines()
        if not line.strip().startswith("Oracle")
    ]
    full_qasm = "\n".join(cleaned_lines)

    # for gd
    gd_cleaned_lines = [
        line for line in gd_full_qasm.splitlines()
        if not line.strip().startswith("Oracle")
    ]
    gd_full_qasm = "\n".join(gd_cleaned_lines)

    qc_m = loads(full_qasm)
    qc_gd = loads(gd_full_qasm)
    try:
        model_generated_count = sum(qc_m.count_ops().values())
        gd_count = sum(qc_gd.count_ops().values())
    except Exception as e:
        print(f"[Gate Count Error] Details: {e}")

    if model_generated_count == 0:
        print("Model Gate Count is nan.")
        gate_count_ratio = float('nan')
    else:
        gate_count_ratio = model_generated_count / gd_count

    ### Func Check ###
    # for model
    local_vars = {}
    eval_globals = globals().copy()
    eval_globals.update({
        "circuit": circuit,
    })
    exec(code_string, eval_globals, local_vars)
    match = re.search(r"shots\s*=\s*((?:[^\s,)\n#]+(?:\s*[-+*/]\s*[^\s,)\n#]+)*))", code_string)
    if match:
        expr = match.group(1)
        try:
            value = eval(expr, globals(), local_vars)
            shot_m = int(value) if isinstance(value, int) else 1024
        except:
            shot_m = expr_backtrack(expr, code_string, eval_globals.copy(), local_vars.copy())
    else:
        print("Can't find argument 'shots=', use qiskit's default 'shots=1024'.")
        shot_m = 1024

    # for gd
    shot_gd = 1

    if shot_m == 0:
        print("Model Shot or Query shot is nan.")
        shot_ratio = float('nan')
    else:
        shot_ratio = shot_m / shot_gd

    ### Python Time ###
    try:
        # warm_up
        gd_run_and_analyze_func(circuit.copy(), aer_sim)
        # for model
        start = time.time()
        run_and_analyze_func(circuit.copy(), aer_sim)
        end = time.time()
        time_m = end - start
        # for gd
        start = time.time()
        gd_run_and_analyze_func(circuit.copy(), aer_sim)
        end = time.time()
        time_gd = end - start

        time_ratio = time_m / time_gd
    except Exception as e:
        print(f"[Time Ratio Error] Details: {e}")
        time_ratio = float('nan')

    return gate_count_ratio, shot_ratio, time_ratio


def execute_test_cases(qasm_string, run_and_analyze_func, n, shots=10, test_cases=None):
    aer_sim = AerSimulator()
    if test_cases is None:
        test_cases = generate_test_cases(n)
    t_range = min(10, 2 ** (n - 2), len(test_cases))
    total_success = total_fail = 0
    tol = 1 / (2 ** n)

    for t in range(1, 1 + t_range):
        print(f"    Running Test Case {t}")
        theta, oracle_def = test_cases[t - 1]
        full_qasm = plug_in_oracle(qasm_string, oracle_def)
        circuit = loads(full_qasm)

        cnt_success = 0
        cnt_fail = 0
        for shot in range(shots):
            prediction = run_and_analyze_func(circuit.copy(), aer_sim)
            if not isinstance(prediction, float) and not isinstance(
                    prediction, int
            ):
                raise TypeError("Predicted overlap should be a number.")
            err = abs(prediction - theta)
            if err <= tol:
                judgment = "Success"
                cnt_success += 1
            else:
                judgment = "Fail"
                cnt_fail += 1
            print(
                f"        {judgment}. Prediction: {prediction}, True Phase{theta}, Error: {err}"
            )
        total_success += cnt_success
        total_fail += cnt_fail
    print(f"Total Success: {total_success}; Total Fail: {total_fail}")
    result_score = total_success / (total_fail + total_success)
    return result_score


def check_model(qasm_string, code_string, n, t=1):
    """Check the Phase-Estimation model."""
    # Verify the syntax of the QASM code with the first test case oracle
    qasm_syntax = -1
    code_syntax = -1
    clipped_score = 0.
    gate_count_ratio = float('nan')
    shot_ratio = float('nan')
    time_ratio = float('nan')
    dire_gt = '.'

    # QASM syntax verification
    test_cases = generate_test_cases(n)
    if not test_cases:
        raise ValueError("No test cases generated.")
    _, oracle_def = test_cases[0]
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)

    if circuit is None:
        print("QASM syntax error detected, using ground truth.")
        qasm_syntax = 0
        with open(f"{dire_gt}/phase_estimation_n{n}.qasm", "r") as file:
            qasm_string = file.read()
    else:
        qasm_syntax = 1

    # Post-Processing code verification
    try:
        local_vars = {}
        code = '\n'.join([line for line in code_string.splitlines() if
                          not line.strip().startswith('from qiskit') and 'import qiskit' not in line])
        code_string = code.replace("def run_and_analyze(circuit, aer_sim):\n",
                                   "def run_and_analyze(circuit, aer_sim):\n    circuit = transpile(circuit, aer_sim)\n",
                                   1)
        exec(code_string, globals(), local_vars)
        run_and_analyze_func = local_vars['run_and_analyze']
        code_syntax = 1
        print("Post-processing code loaded successfully.")
    except Exception as e:
        print(f"Post-processing syntax error: {e}\nusing ground truth.")
        run_and_analyze_func = ground_truth_run_and_analyze
        code_syntax = 0

    if qasm_syntax == 1 and code_syntax == 1:
        gate_count_ratio, shot_ratio, time_ratio = efficiency_check(qasm_string, dire_gt, code_string,
                                                                    run_and_analyze_func,
                                                                    ground_truth_run_and_analyze, n, oracle_def)
        try:
            result_score = execute_test_cases(qasm_string, run_and_analyze_func, n, test_cases=test_cases)
            clipped_score = 1.0 if result_score > 7 else (result_score / 0.7)
        except Exception as e:
            print(f"Post-processing running-time error: {e}")
            code_syntax = 0

    return qasm_syntax, code_syntax, clipped_score, gate_count_ratio, shot_ratio, time_ratio


def check_description(prompt):
    s = 'Given a black box unitary transformation $U$ and a quantum state'
    n = int(prompt.split("$n = ")[1].split("$")[0])
    return s in prompt, {"n": n}


if __name__ == "__main__":
    n = 8
    qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
gate CU_1 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_0 _gate_q_0, _gate_q_1;
}
gate CU_2 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_1 _gate_q_0, _gate_q_1;
}
gate CU_3 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_2 _gate_q_0, _gate_q_1;
}
gate CU_4 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_3 _gate_q_0, _gate_q_1;
}
gate CU_5 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_4 _gate_q_0, _gate_q_1;
}
gate CU_6 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_5 _gate_q_0, _gate_q_1;
}
gate CU_7 _gate_q_0, _gate_q_1 {
  pow(2) @ CU_6 _gate_q_0, _gate_q_1;
}
gate IQFT _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  swap _gate_q_0, _gate_q_7;
  swap _gate_q_1, _gate_q_6;
  swap _gate_q_2, _gate_q_5;
  swap _gate_q_3, _gate_q_4;
  h _gate_q_0;
  cp(-pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
  cp(-pi/4) _gate_q_0, _gate_q_2;
  cp(-pi/2) _gate_q_1, _gate_q_2;
  h _gate_q_2;
  cp(-pi/8) _gate_q_0, _gate_q_3;
  cp(-pi/4) _gate_q_1, _gate_q_3;
  cp(-pi/2) _gate_q_2, _gate_q_3;
  h _gate_q_3;
  cp(-pi/16) _gate_q_0, _gate_q_4;
  cp(-pi/8) _gate_q_1, _gate_q_4;
  cp(-pi/4) _gate_q_2, _gate_q_4;
  cp(-pi/2) _gate_q_3, _gate_q_4;
  h _gate_q_4;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cp(-pi/16) _gate_q_1, _gate_q_5;
  cp(-pi/8) _gate_q_2, _gate_q_5;
  cp(-pi/4) _gate_q_3, _gate_q_5;
  cp(-pi/2) _gate_q_4, _gate_q_5;
  h _gate_q_5;
  cp(-pi/64) _gate_q_0, _gate_q_6;
  cp(-pi/32) _gate_q_1, _gate_q_6;
  cp(-pi/16) _gate_q_2, _gate_q_6;
  cp(-pi/8) _gate_q_3, _gate_q_6;
  cp(-pi/4) _gate_q_4, _gate_q_6;
  cp(-pi/2) _gate_q_5, _gate_q_6;
  h _gate_q_6;
  cp(-pi/128) _gate_q_0, _gate_q_7;
  cp(-pi/64) _gate_q_1, _gate_q_7;
  cp(-pi/32) _gate_q_2, _gate_q_7;
  cp(-pi/16) _gate_q_3, _gate_q_7;
  cp(-pi/8) _gate_q_4, _gate_q_7;
  cp(-pi/4) _gate_q_5, _gate_q_7;
  cp(-pi/2) _gate_q_6, _gate_q_7;
  h _gate_q_7;
}
bit[8] c;
qubit[9] q;
Psi q[8];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
h q[6];
h q[7];
CU_0 q[0], q[8];
CU_1 q[1], q[8];
CU_2 q[2], q[8];
CU_3 q[3], q[8];
CU_4 q[4], q[8];
CU_5 q[5], q[8];
CU_6 q[6], q[8];
CU_7 q[7], q[8];
IQFT q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
c[3] = measure q[3];
c[4] = measure q[4];
c[5] = measure q[5];
c[6] = measure q[6];
c[7] = measure q[7];
"""
    code_string = """from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    \"\"\"Run the circuit on a quantum simulator and derive the final answer from measurement results.\"\"\"
    # Use a quantum simulator to run the circuit
    circ = transpile(circuit, aer_sim)
    result = aer_sim.run(circ, shots=1).result()
    count = result.get_counts()

    # The key is the solution to the problem
    y = list(count.keys())[0]
    n = len(y)
    y = int(y, 2)
    prediction = y / (2**n)
    return prediction
"""
    result = check_model(qasm_string, code_string, n)
    print(result)
