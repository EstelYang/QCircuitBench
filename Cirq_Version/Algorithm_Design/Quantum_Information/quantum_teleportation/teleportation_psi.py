import numpy as np
import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class PsiInit(cirq.Gate):
    """Prepare a 1-qubit pure state |psi> = alpha|0> + beta|1> on its target qubit.

    We implement a single-qubit unitary U whose first column is |psi>.
    A convenient choice (up to global phase) is:
        U = [[alpha,  beta.conjugate()],
             [beta,  -alpha.conjugate()]]
    which maps |0> -> |psi> and |1> -> |psi_perp>.
    """

    alpha: complex
    beta: complex

    def _num_qubits_(self) -> int:
        return 1

    def _unitary_(self):
        # normalize for safety
        norm = np.sqrt(abs(self.alpha) ** 2 + abs(self.beta) ** 2)
        a = self.alpha / norm
        b = self.beta / norm
        return np.array([[a, np.conjugate(b)], [b, -np.conjugate(a)]], dtype=complex)

    def _circuit_diagram_info_(self, args):
        return ("Psi",)
