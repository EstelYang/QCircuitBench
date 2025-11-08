import os
import math
import random
from typing import List


def _generate_ternary_numbers(n: int) -> List[str]:
    if n == 0:
        return [""]
    smaller = _generate_ternary_numbers(n - 1)
    return [x + y for x in smaller for y in "012"]


def _add_ternary(t1: str, t2: str) -> str:
    return ''.join(str((int(t1[i]) + int(t2[i])) % 3) for i in range(len(t1)))


def _find_cycle(start: str, secret: str) -> List[str]:
    cur = start
    cyc, seen = [], set()
    while cur not in seen:
        seen.add(cur)
        cyc.append(cur)
        cur = _add_ternary(cur, secret)
    return cyc


def _find_ternary_cycles(n: int, secret: str) -> List[List[str]]:
    all_nums = _generate_ternary_numbers(n)
    cycles, seen = [], set()
    for num in all_nums:
        if num not in seen:
            c = _find_cycle(num, secret)
            cycles.append(c)
            seen.update(c)
    return cycles


def _encode_ternary_digit_to_bits(d: str) -> str:
    # 0 -> 00, 1 -> 01, 2 -> 10
    if d == '0':
        return '00'
    if d == '1':
        return '01'
    if d == '2':
        return '10'
    raise ValueError(f"bad ternary digit {d}")


def save_oracle_py(n: int, secret_string: str, key_string: str):
    cycles = _find_ternary_cycles(n, secret_string)
    m = max(1, math.ceil(math.log2(len(cycles))))
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = (
        f"./algorithm_circuit/"
        f"ternary_simon_oracle_n{n}_s{secret_string}_k{key_string}.py"
    )

    def py_str(s: str) -> str:
        return repr(s)

    with open(path, "w", encoding="utf-8") as f:
        f.write("import cirq\n")
        f.write("import math\n\n")
        f.write("def oracle_circuit():\n")
        f.write(f"    n = {n}\n")
        f.write("    cycles = [\n")
        for cyc in cycles:
            items = ", ".join(py_str(v) for v in cyc)
            f.write(f"        [{items}],\n")
        f.write("    ]\n")
        f.write("    m = max(1, math.ceil(math.log2(len(cycles))))\n")
        f.write("    q = cirq.LineQubit.range(2*n + m)\n")
        f.write("    x = q[:2*n]\n")
        f.write("    y = q[2*n:2*n+m]\n")
        f.write("    circuit = cirq.Circuit()\n\n")
        f.write("    def enc_digit(d):\n")
        f.write("        return '00' if d=='0' else '01' if d=='1' else '10'\n\n")
        f.write("    for cidx, cyc in enumerate(cycles):\n")
        f.write("        bin_idx = format(cidx, f'0{m}b')\n")
        f.write("        for k, bit in enumerate(bin_idx):\n")
        f.write("            if bit != '1':\n")
        f.write("                continue\n")
        f.write("            for v in cyc:\n")
        f.write("                patt = ''.join(enc_digit(d) for d in v)\n")
        f.write("                controls = [x[i] for i in range(2*n)]\n")
        f.write("                cvals = tuple(1 if ch=='1' else 0 for ch in patt)\n")
        f.write("                op = cirq.X(y[k]).controlled_by(*controls, control_values=cvals)\n")
        f.write("                circuit.append(op)\n\n")
        f.write("    return circuit\n")

    return path


def generate_secret_strings(n: int, test_num=5):
    num = min(3 ** (n - 2), test_num)
    out = set()
    while len(out) < num:
        out.add(''.join(random.choice('012') for _ in range(n)))
    return list(out)


def generate_oracle_py_files(start_n=2, end_n=6):
    for n in range(start_n, end_n + 1):
        print(f"[dataset] Generating ternary oracles for n={n}")
        secrets = generate_secret_strings(n)
        keys = generate_secret_strings(n)
        for s, k in zip(secrets, keys):
            save_oracle_py(n, s, k)


if __name__ == "__main__":
    generate_oracle_py_files()
