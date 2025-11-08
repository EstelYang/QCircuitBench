import numpy as np
import cirq
from scipy.optimize import minimize


def run_and_analyze(circuits, hamiltonian, expected_energy, optiter=200):
    if isinstance(hamiltonian, cirq.PauliSum):
        coefs = np.array([float(t.coefficient.real) for t in hamiltonian], dtype=float)
        observables = [t.with_coefficient(1.0) for t in hamiltonian]
    elif isinstance(hamiltonian, (list, tuple)) and all(
            isinstance(x, (list, tuple)) and len(x) == 2 for x in hamiltonian
    ):
        coefs = np.array([float(c) for c, _ in hamiltonian], dtype=float)
        observables = [ps for _, ps in hamiltonian]

        if not all(isinstance(ps, cirq.PauliString) for ps in observables):
            raise TypeError("Hamiltonian list must be [(coef, cirq.PauliString), ...].")
    else:
        raise TypeError("hamiltonian must be cirq.PauliSum or a list of (coef, cirq.PauliString).")

    sim = cirq.Simulator()
    params = sorted(list(cirq.parameter_symbols(circuits)), key=str)

    def energy(x: np.ndarray) -> float:
        resolver = {s: float(v) for s, v in zip(params, x)}
        if len(observables) == 0:
            return 0.0
        try:
            evs = sim.simulate_expectation_values(
                circuits,
                observables=observables,
                param_resolver=cirq.ParamResolver(resolver),
            )
        except TypeError:
            resolved = cirq.resolve_parameters(circuits, resolver, recursive=True)
            evs = sim.simulate_expectation_values(
                resolved,
                observables=observables,
            )
        vals = np.array([ev.real for ev in evs], dtype=float)
        return float(np.dot(coefs, vals))

    if len(params) == 0:
        E = energy(np.array([]))
        err = abs(E - expected_energy)
        return float(err)

    x0 = np.zeros(len(params), dtype=float)
    res = minimize(energy, x0=x0, method="COBYLA", options={"maxiter": int(optiter)})
    E_star = float(res.fun)
    err = abs(E_star - expected_energy)

    return float(err)
