import cirq
from sympy import Matrix
import numpy as np
import re


def mod2(x):
    return x.as_numer_denom()[0] % 2


def recover_secret_string(n, results):
    equations = []
    for result, count in results.items():
        if result != '0' * n:  # We don't use all 0 string
            y = [int(bit) for bit in result]
            equations.append(y)
    if len(equations) == 0:
        return '0' * n
    else:
        result_s = post_processing(equations)
        return result_s


def post_processing(string_list):
    """
    A^T | I
    after the row echelon reduction, we can get the basis of the nullspace of A in I
    since we just need the string in binary form, so we can just use the basis
    if row == n-1 --> only one
    if row < n-1 --> get the first one (maybe correct or wrong)
    """
    M = Matrix(string_list).T

    # Augmented  : M | I
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))

    # RREF row echelon form , indices of the pivot columns
    # If x % 2 = 0, it will not be chosen as pivot (modulo 2)
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)

    # Modulo 2
    M_I_final = M_I_rref[0].applyfunc(mod2)

    # Non-Trivial solution
    if all(value == 0 for value in M_I_final[-1, :M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1]:])

    # Trivial solution
    else:
        result_s = '0' * M.shape[0]

    return result_s


def run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    n = len(circuit.all_qubits())
    result = simulator.run(circuit, repetitions=n)
    meas = result.measurements
    keys = list(meas.keys())

    cnum = []
    for k in keys:
        m = re.fullmatch(r'c(\d+)', k)
        if m:
            cnum.append(int(m.group(1)))
    if not cnum:
        # 兼容另一种命名：数据寄存器使用 x0..x{n-1}，anc 用 anc
        x_keys = sorted([k for k in keys if re.fullmatch(r'x\d+', k)],
                        key=lambda s: int(s[1:]))
        anc_key = 'anc' if 'anc' in keys else None
        if not x_keys or anc_key is None:
            raise ValueError(
                "Unable to infer data register and ancilla from measurement keys. Please check key naming.")
        data_keys = x_keys
        n = len(data_keys)
    else:
        max_idx = max(cnum)
        n = max_idx
        data_keys = [f'c{i}' for i in range(n)]
        anc_key = f'c{n}'
        if anc_key not in keys:
            anc_key = 'anc' if 'anc' in keys else None
            if anc_key is None:
                raise ValueError("Ancilla measurement key not found (neither 'c{n}' nor 'anc').")

    dic0 = {}
    dic1 = {}
    reps = next(iter(meas.values())).shape[0]

    for shot in range(reps):
        anc_bit = int(meas[anc_key][shot, 0])
        bits = ''.join(str(int(meas[k][shot, 0])) for k in data_keys[::-1])
        if anc_bit == 1:
            dic1[bits] = 1
        else:
            dic0[bits] = 1

    prediction1 = recover_secret_string(n, dic0)
    prediction2 = recover_secret_string(n, dic1)
    return prediction1, prediction2
