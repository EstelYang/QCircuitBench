import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Phase oracle for Grover's algorithm.

    Given a bitstring `marked_state` of length n, this gate applies a phase flip (-1)
    to |marked_state⟩. Implementation mirrors the Qiskit version:

    - Apply X to qubits where marked_state bit == '0' (open controls)
    - Apply (n-1)-controlled Z with target = last qubit
    - Undo the X on those zero positions

    """

    marked_state: str  # e.g., '1010'

    def _num_qubits_(self) -> int:
        return len(self.marked_state)

    def _decompose_(self, qubits):
        n = len(qubits)
        zeros = [i for i, b in enumerate(self.marked_state) if b == "0"]

        # Open controls: flip zeros to turn the pattern into all-ones on controls
        for i in zeros:
            yield cirq.X(qubits[i])

        # Multi-controlled Z with controls = qubits[:-1], target = qubits[-1]
        # (phase flip when all controls are 1)
        yield cirq.Z.controlled(num_controls=n - 1).on(*qubits)

        # Undo open controls
        for i in zeros:
            yield cirq.X(qubits[i])

    def _circuit_diagram_info_(self, args):
        # Nice labels: m0..m{n-1}
        return tuple([f"m{i}" for i in range(len(self.marked_state))])
