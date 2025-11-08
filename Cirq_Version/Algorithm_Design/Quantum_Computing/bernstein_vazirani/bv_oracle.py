import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str

    def _num_qubits_(self):
        return len(self.secret_string) + 1

    def _decompose_(self, qubits):
        controls = qubits[:-1]
        target = qubits[-1]
        for i, bit in enumerate(self.secret_string):
            if bit == "1":
                yield cirq.CX(controls[i], target)

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(self.num_qubits() - 1)] + ["oracle_target"]
