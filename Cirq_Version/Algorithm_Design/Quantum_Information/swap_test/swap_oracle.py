import cirq
import numpy as np
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    phi_state: np.ndarray  # Shape (2**n,)
    psi_state: np.ndarray  # Shape (2**n,)

    def _num_qubits_(self):
        return 2 * int(np.log2(len(self.phi_state)))

    def _decompose_(self, qubits):
        n = int(np.log2(len(self.phi_state)))
        phi_qubits = qubits[:n]
        psi_qubits = qubits[n : 2 * n]

        # Normalize states (just in case)
        phi_norm = self.phi_state / np.linalg.norm(self.phi_state)
        psi_norm = self.psi_state / np.linalg.norm(self.psi_state)

        # Create preparation gates
        phi_gate = cirq.StatePreparationChannel(phi_norm)
        psi_gate = cirq.StatePreparationChannel(psi_norm)

        yield phi_gate.on(*phi_qubits)
        yield psi_gate.on(*psi_qubits)

    def _circuit_diagram_info_(self, args):
        n = int(np.log2(len(self.phi_state)))
        return [f"Φ{i}" for i in range(n)] + [f"Ψ{i}" for i in range(n)]
