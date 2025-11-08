from typing import Dict
import math
import numpy as np
from qiskit.quantum_info import Statevector
from enc_generation import (
    basis_encoding_3q_superposition,
    amplitude_encoding_2q,
    angle_encoding_3q,
)


def _target_basis_state() -> np.ndarray:
    vec = np.zeros(8, dtype=complex)
    vec[int("101", 2)] = 1 / math.sqrt(2)
    vec[int("111", 2)] = 1 / math.sqrt(2)
    return vec


def _target_amplitude_state() -> np.ndarray:
    norm = math.sqrt(15.25)
    return np.array([1.5 / norm, 0.0, -2.0 / norm, 3.0 / norm], dtype=complex)


def _fidelity(psi: np.ndarray, phi: np.ndarray) -> float:
    return float(abs(np.vdot(psi, phi)) ** 2)


def basis_encoding_fidelity() -> float:
    qc = basis_encoding_3q_superposition()
    sv = Statevector.from_instruction(qc)
    return _fidelity(sv.data, _target_basis_state())


def amplitude_encoding_fidelity() -> float:
    qc = amplitude_encoding_2q()
    sv = Statevector.from_instruction(qc)
    return _fidelity(sv.data, _target_amplitude_state())


def angle_encoding_probabilities() -> Dict[str, float]:
    qc = angle_encoding_3q()
    sv = Statevector.from_instruction(qc)
    probs = np.abs(sv.data) ** 2
    return {format(i, "03b"): float(p) for i, p in enumerate(probs)}


def run_and_analyze(which: str = "basis"):
    if which == "basis":
        return basis_encoding_fidelity()
    if which == "amplitude":
        return amplitude_encoding_fidelity()
    if which == "angle":
        return angle_encoding_probabilities()
    raise ValueError("which ∈ {'basis','amplitude','angle'}")
