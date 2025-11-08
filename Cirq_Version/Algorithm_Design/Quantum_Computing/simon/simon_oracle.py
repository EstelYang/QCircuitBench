import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    secret_string: str
    key_string: str

    def _num_qubits_(self):
        return 2 * len(self.secret_string)

    def _decompose_(self, qubits):
        n = len(self.secret_string)
        control_qubits = qubits[:n]
        target_qubits = qubits[n:]

        # Apply copy operation
        for i in range(n):
            yield cirq.CX(control_qubits[i], target_qubits[i])

        # Apply s-dependent XOR
        if self.secret_string != "0" * n:
            i = self.secret_string.find("1")
            for j in range(n):
                if self.secret_string[j] == "1":
                    yield cirq.CX(control_qubits[i], target_qubits[j])

        # Apply X gates for key_string
        for i in range(n):
            if self.key_string[i] == "1":
                yield cirq.X(target_qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(len(self.secret_string))] + [
            f"oracle_target{i}" for i in range(len(self.key_string))
        ]
