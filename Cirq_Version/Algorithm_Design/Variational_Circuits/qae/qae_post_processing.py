import cirq
import numpy as np
from scipy.optimize import minimize


def run_and_analyze(circuit: cirq.Circuit):
    sim = cirq.Simulator()
    params = sorted(list(cirq.parameter_symbols(circuit)), key=str)

    no_meas = circuit.unfreeze(copy=True)
    no_meas = no_meas.copy()
    no_meas = cirq.Circuit(
        op for op in no_meas.all_operations() if not isinstance(getattr(op, "gate", None), cirq.MeasurementGate))
    anc = sorted(list(circuit.all_qubits()))[7]

    def prob_one(x: np.ndarray) -> float:
        resolver = {s: float(v) for s, v in zip(params, x)}
        ev = sim.simulate_expectation_values(
            no_meas,
            observables=[cirq.Z(anc)],
            param_resolver=cirq.ParamResolver(resolver),
        )[0].real
        p1 = (1.0 - ev) / 2.0
        return float(p1)

    if len(params) == 0:
        val = prob_one(np.array([]))

        class _Res: pass

        r = _Res()
        r.x = np.array([])
        r.fun = val
        return r

    x0 = np.zeros(len(params), dtype=float)
    res = minimize(prob_one, x0=x0, method="COBYLA", options={"maxiter": 150})
    return res
