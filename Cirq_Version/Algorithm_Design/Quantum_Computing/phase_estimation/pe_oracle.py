import cirq
from dataclasses import dataclass
import numpy as np


@dataclass(frozen=True)
class PsiGate(cirq.Gate):
    """Prepare the eigenstate |1⟩ on the target qubit."""

    def _num_qubits_(self):
        return 1

    def _decompose_(self, qubits):
        yield cirq.X(qubits[0])

    def _circuit_diagram_info_(self, args):
        return ["Psi"]


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    """Controlled-U gate."""

    theta: float

    def _num_qubits_(self):
        return 2  # control, target

    def _decompose_(self, qubits):
        control, target = qubits
        yield cirq.CZPowGate(exponent=self.theta / np.pi).on(control, target)

    def _circuit_diagram_info_(self, args):
        return [f"CU({self.theta})_ctrl", f"CU({self.theta})_tgt"]

    def __pow__(self, power):
        return Oracle(theta=self.theta * power)
