import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str

    def _num_qubits_(self):
        return len(self.secret_string)

    def _decompose_(self, qubits):
        for i, bit in enumerate(self.secret_string):
            if bit == "1":
                yield cirq.X(qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"Psi{i}" for i in range(self.num_qubits())]
