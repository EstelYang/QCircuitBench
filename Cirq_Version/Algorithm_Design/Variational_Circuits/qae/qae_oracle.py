import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class StateOracle(cirq.Gate):
    bitstring: str

    def _num_qubits_(self) -> int:
        return len(self.bitstring)

    def _decompose_(self, qubits):
        for idx, bit in enumerate(self.bitstring):
            if bit == "1":
                yield cirq.X(qubits[idx])

    def _circuit_diagram_info_(self, args):
        return [f"{b}" for b in self.bitstring]


@dataclass(frozen=True)
class SwapTestOracle(cirq.Gate):

    def _num_qubits_(self) -> int:
        return 8

    def _decompose_(self, qubits):
        ctrl = qubits[7]
        for i in range(2):
            yield cirq.CSWAP(ctrl, qubits[2 + i], qubits[4 + i])

        yield cirq.H(ctrl)

    def _circuit_diagram_info_(self, args):
        return [f"q{i}" for i in range(self.num_qubits())]
