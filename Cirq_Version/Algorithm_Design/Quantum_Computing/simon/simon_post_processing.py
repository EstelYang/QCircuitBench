import cirq
import numpy as np
from sympy import Matrix


def mod2(x):
    return x.as_numer_denom()[0] % 2


def solve_equation(string_list):
    """
    Given a list of binary strings (as lists of bits), solve for the secret string s
    such that s · y = 0 (mod 2) for each y in the list.
    """
    M = Matrix(string_list).T
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)
    M_I_final = M_I_rref[0].applyfunc(mod2)

    if all(value == 0 for value in M_I_final[-1, : M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1]:])
    else:
        result_s = "0" * M.shape[0]

    return result_s


def run_and_analyze(circuit):
    """Run the Simon circuit and extract the predicted secret string."""
    simulator = cirq.Simulator()
    n = len(circuit.all_qubits()) // 2
    result = simulator.run(circuit, repetitions=n)

    equations = []
    for i in range(n):
        bits = [int(result.measurements[f"c{j}"][i][0]) for j in range(n)]
        # print(f"Measurement {i}: {bits}")
        if any(bits):  # skip all-zero vectors
            equations.append(bits)

    if not equations:
        return "0" * n
    return solve_equation(equations)
