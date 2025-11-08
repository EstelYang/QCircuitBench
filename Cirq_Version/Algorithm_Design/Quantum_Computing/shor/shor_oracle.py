import math
from dataclasses import dataclass
from typing import Iterable, List

import cirq
import numpy as np


def _egcd(a: int, b: int):
    if a == 0:
        return (b, 0, 1)
    g, y, x = _egcd(b % a, a)
    return (g, x - (b // a) * y, y)


def _modinv(a: int, m: int) -> int:
    g, x, _ = _egcd(a % m, m)
    if g != 1:
        raise ValueError("modular inverse does not exist")
    return x % m


def _qft(qubits: List[cirq.Qid], with_swaps: bool = False):
    n = len(qubits)
    for i in range(n - 1, -1, -1):
        yield cirq.H(qubits[i])
        for j in range(i):
            angle = np.pi / (2 ** (i - j))
            yield cirq.ZPowGate(exponent=angle / np.pi).on(qubits[j]).controlled_by(qubits[i])
    if with_swaps:
        for i in range(n // 2):
            yield cirq.SWAP(qubits[i], qubits[n - 1 - i])


def _iqft(qubits: List[cirq.Qid], with_swaps: bool = False):
    n = len(qubits)
    if with_swaps:
        for i in range(n // 2):
            yield cirq.SWAP(qubits[i], qubits[n - 1 - i])
    for i in range(n):
        yield cirq.H(qubits[i])
        for j in range(i):
            angle = -np.pi / (2 ** (i - j))
            yield cirq.ZPowGate(exponent=angle / np.pi).on(qubits[j]).controlled_by(qubits[i])


def _get_angles(a: int, n_bits: int) -> List[float]:
    bits = bin(a)[2:].zfill(n_bits)
    angles = np.zeros(n_bits)
    for i in range(n_bits):
        for j in range(i, n_bits):
            if bits[j] == '1':
                angles[n_bits - i - 1] += 2 ** -(j - i)
        angles[n_bits - i - 1] *= np.pi
    return angles.tolist()


def _phiADD(q: List[cirq.Qid], a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i])


def _cphiADD(q: List[cirq.Qid], ctl: cirq.Qid, a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i]).controlled_by(ctl)


def _ccphiADD(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, a: int, n_bits: int, inv: bool = False):
    sgn = -1.0 if inv else 1.0
    angles = _get_angles(a, n_bits)
    for i, ang in enumerate(angles):
        yield cirq.ZPowGate(exponent=(sgn * ang) / np.pi).on(q[i]).controlled_by(ctl1, ctl2)


def _ccphiADDmodN(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, aux_flag: cirq.Qid,
                  a: int, N: int, n_bits_for_q: int):
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)
    yield from _phiADD(q, N, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield from _qft(q, with_swaps=False)
    yield from _cphiADD(q, aux_flag, N, n_bits_for_q, inv=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.X(q[n_bits_for_q - 1])
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield cirq.X(q[n_bits_for_q - 1])
    yield from _qft(q, with_swaps=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)


def _ccphiADDmodN_inv(q: List[cirq.Qid], ctl1: cirq.Qid, ctl2: cirq.Qid, aux_flag: cirq.Qid,
                      a: int, N: int, n_bits_for_q: int):
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.X(q[n_bits_for_q - 1])
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield cirq.X(q[n_bits_for_q - 1])
    yield from _qft(q, with_swaps=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=False)
    yield from _cphiADD(q, aux_flag, N, n_bits_for_q, inv=True)
    yield from _iqft(q, with_swaps=False)
    yield cirq.CNOT(q[n_bits_for_q - 1], aux_flag)
    yield from _qft(q, with_swaps=False)
    yield from _phiADD(q, N, n_bits_for_q, inv=False)
    yield from _ccphiADD(q, ctl1, ctl2, a, n_bits_for_q, inv=True)


def _cMULTmodN(ctl: cirq.Qid, down: List[cirq.Qid], aux: List[cirq.Qid],
               a: int, N: int, n: int):
    aux_reg = aux[:n + 1]
    aux_flag = aux[n + 1]

    # QFT on aux_reg
    yield from _qft(aux_reg, with_swaps=False)

    for i in range(n):
        coeff = (pow(2, i, N) * a) % N
        if coeff == 0:
            continue
        yield from _ccphiADDmodN(aux_reg, down[i], ctl, aux_flag, coeff, N, n_bits_for_q=len(aux_reg))

    # iQFT
    yield from _iqft(aux_reg, with_swaps=False)

    for i in range(n):
        yield cirq.CSWAP(ctl, down[i], aux_reg[i])

    inv_a = _modinv(a, N)

    yield from _qft(aux_reg, with_swaps=False)

    for i in reversed(range(n)):
        coeff = (pow(2, i, N) * inv_a) % N
        if coeff == 0:
            continue
        yield from _ccphiADDmodN_inv(aux_reg, down[i], ctl, aux_flag, coeff, N, n_bits_for_q=len(aux_reg))

    yield from _iqft(aux_reg, with_swaps=False)


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Shor QPE Oracle in Cirq."""
    N: int
    a: int

    def _num_qubits_(self) -> int:
        n = math.ceil(math.log(self.N, 2))
        return 4 * n + 2

    def _decompose_(self, qubits: Iterable[cirq.Qid]):
        qubits = list(qubits)
        n = math.ceil(math.log(self.N, 2))

        up = qubits[0:2 * n]
        down = qubits[2 * n:3 * n]
        aux = qubits[3 * n:4 * n + 2]

        for i in range(2 * n):
            power = pow(self.a, (1 << i), self.N)
            for op in _cMULTmodN(ctl=up[i], down=down, aux=aux, a=power, N=self.N, n=n):
                yield op

    def _circuit_diagram_info_(self, args):
        n = math.ceil(math.log(self.N, 2))
        labels = [f"up[{i}]" for i in range(2 * n)] + [f"down[{i}]" for i in range(n)] + [f"aux[{i}]" for i in
                                                                                          range(n + 2)]
        labels[-1] = "aux_flag"
        return labels
