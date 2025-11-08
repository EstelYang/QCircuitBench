import math
import cirq
from typing import List, Tuple, Iterable, Optional


def encode_trit_to_bits(t: int) -> Tuple[int, int]:
    if t == 0: return (0, 0)
    if t == 1: return (0, 1)
    if t == 2: return (1, 0)
    raise ValueError("trit must be 0/1/2")


def bits_for_ternary_string(s: str) -> List[int]:
    out = []
    for ch in s:
        b0, b1 = encode_trit_to_bits(int(ch))
        out.extend([b0, b1])
    return out


def add_ternary_str(a: str, b: str) -> str:
    return ''.join(str((int(x) + int(y)) % 3) for x, y in zip(a, b))


def all_ternary_strings(n: int) -> List[str]:
    if n == 0:
        return [""]
    smaller = all_ternary_strings(n - 1)
    return [x + d for x in smaller for d in "012"]


def compute_cycles(n: int, secret: str) -> List[List[str]]:
    universe = all_ternary_strings(n)
    seen = set()
    cycles: List[List[str]] = []
    for start in universe:
        if start in seen:
            continue
        cur = start
        cyc = []
        while cur not in seen:
            seen.add(cur)
            cyc.append(cur)
            cur = add_ternary_str(cur, secret)
        cycles.append(cyc)
    return cycles


class Oracle(cirq.Gate):
    def __init__(self, n: int, secret_string: str, key_string: Optional[str] = None):
        if len(secret_string) != n or any(ch not in "012" for ch in secret_string):
            raise ValueError("secret_string must be length n over '0','1','2'")
        self.n = n
        self.secret_string = secret_string
        self.cycles = compute_cycles(n, secret_string)
        self.anc_bits = max(1, math.ceil(math.log2(len(self.cycles)))) if len(self.cycles) > 1 else 1
        if key_string is not None:
            if any(ch not in "01" for ch in key_string):
                raise ValueError("key_string must be binary str")
            km = key_string[:self.anc_bits]
            km = km + "0" * (self.anc_bits - len(km))
            self.key_string = km
        else:
            self.key_string = "0" * self.anc_bits

    def _num_qubits_(self) -> int:
        return 2 * self.n + self.anc_bits

    def _decompose_(self, qubits: Iterable[cirq.Qid]) -> Iterable[cirq.Operation]:
        qubits = list(qubits)
        x_reg = qubits[: 2 * self.n]
        anc = qubits[2 * self.n: 2 * self.n + self.anc_bits]

        for cycle_idx, cycle in enumerate(self.cycles):
            bin_k = format(cycle_idx, f'0{self.anc_bits}b')
            if all(b == '0' for b in bin_k):
                continue
            for t in cycle:
                ctrl_pattern = bits_for_ternary_string(t)
                control_values = tuple(ctrl_pattern)
                for j, bj in enumerate(bin_k):
                    if bj == '1':
                        yield cirq.X(anc[j]).controlled_by(*x_reg, control_values=control_values)
        for j, bit in enumerate(self.key_string):
            if bit == '1':
                yield cirq.X(anc[j])

    def _circuit_diagram_info_(self, args):
        return [f"x[{i}]" for i in range(2 * self.n)] + [f"anc[{i}]" for i in range(self.anc_bits)]

