from datetime import time
import cirq
import sympy as sp
import numpy as np
from dataclasses import dataclass
from scipy.optimize import minimize
import time


@dataclass(frozen=True)
class StateOracle(cirq.Gate):
    bitstring: str

    def _num_qubits_(self) -> int:
        return len(self.bitstring)

    def _decompose_(self, qubits):
        for i, b in enumerate(self.bitstring):
            if b == "1":
                yield cirq.X(qubits[i])

    def _circuit_diagram_info_(self, args):
        return list(self.bitstring)


@dataclass(frozen=True)
class SwapTestOracle(cirq.Gate):
    def _num_qubits_(self) -> int: return 8

    def _decompose_(self, qubits):
        anc = qubits[7]
        yield cirq.H(anc)
        # swap pairs: (2,4), (3,5)
        yield cirq.CSWAP(anc, qubits[2], qubits[4])
        yield cirq.CSWAP(anc, qubits[3], qubits[5])
        yield cirq.H(anc)

    def _circuit_diagram_info_(self, args): return [f"q{i}" for i in range(8)]


def ansatz(num_qubits: int, reps: int = 5) -> cirq.Circuit:
    q = cirq.LineQubit.range(num_qubits)
    c = cirq.Circuit()
    thetas = [sp.Symbol(f"theta_{i}") for i in range(num_qubits * (reps + 1))]
    it = iter(thetas)
    # layer 0
    for i in range(num_qubits):
        c.append(cirq.ry(next(it)).on(q[i]))
    # reps
    for _ in range(reps):
        for i in range(num_qubits - 1):
            c.append(cirq.CNOT(q[i], q[i + 1]))
        for i in range(num_qubits):
            c.append(cirq.ry(next(it)).on(q[i]))
    return c


def ground_truth_run_and_analyze(circuit: cirq.Circuit):
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


def _get_algorithm_from_string(algo_str: str):
    env = {"cirq": cirq, "sp": sp, "np": np}
    exec(compile(algo_str, "<algo_str>", "exec"), env, env)
    if "algorithm" not in env or not callable(env["algorithm"]):
        raise ValueError("algo_str must define function: algorithm(state_oracle, swap_test_oracle)")
    return env["algorithm"]


def _statevector(c: cirq.Circuit) -> np.ndarray:
    sim = cirq.Simulator()
    res = sim.simulate(c)
    return np.asarray(res.final_state_vector, dtype=complex)


def _fidelity(psi: np.ndarray, phi: np.ndarray) -> float:
    # |<psi|phi>|
    return float(abs(np.vdot(psi, phi)))


def check_model(algo_str: str, code_string: str, t: int = 1):
    try:
        algorithm = _get_algorithm_from_string(algo_str)
        algo_syntax = 1
    except Exception as e:
        print("[Algo Parse Error]:", e)
        return 0, 0, 0.0, float('nan'), float('nan'), float('nan')

    state = '00111'
    state_or = StateOracle(state)
    swap_or = SwapTestOracle()

    circuit = algorithm(state_or, swap_or)

    if code_string and code_string.strip():
        try:
            local_vars = {}
            exec(code_string, {"cirq": cirq, "sp": sp, "np": np, "minimize": minimize}, local_vars)
            if "run_and_analyze" in local_vars and callable(local_vars["run_and_analyze"]):
                run_fn = local_vars["run_and_analyze"]
                code_syntax = 1
                print("Post-processing code loaded successfully.")
            else:
                code_syntax = 0
        except Exception as e:
            print(f"[Post-processing syntax error]: {e}  -> using ground truth optimizer.")
            code_syntax = 0
    else:
        return algo_syntax, 0, 0.0, float('nan'), float('nan'), float('nan')

    try:
        gd_fn = ground_truth_run_and_analyze
        start1 = time.time()
        gd_opt_res = gd_fn(circuit.copy())
        end1 = time.time()
        gd_time = end1 - start1

        start2 = time.time()
        opt_res = run_fn(circuit.copy())
        end2 = time.time()
        thetas = np.array(opt_res.x, dtype=float)
        model_time = end2 - start2
    except Exception as e:
        print("[Optimization Error]:", e)
        return algo_syntax, 0, 0.0, float('nan'), float('nan'), float('nan')

    q5 = cirq.LineQubit.range(5)
    c_state = cirq.Circuit(state_or.on(*q5))
    psi = _statevector(c_state)

    A = ansatz(5, reps=5)
    params = sorted(list(cirq.parameter_symbols(A)), key=str)
    resolver = {s: float(v) for s, v in zip(params, thetas)} if len(params) else {}
    A_bound = cirq.resolve_parameters(A, resolver, recursive=True)

    test = cirq.Circuit()
    test.append(state_or.on(*q5))
    test += A_bound
    test.append(cirq.reset(q5[4]))
    test.append(cirq.reset(q5[3]))
    test += cirq.inverse(A_bound, default=None)

    phi = _statevector(test)
    fidelity = _fidelity(psi, phi)
    print("Fidelity of our Output State with our Input State:", fidelity)

    gate_count_ratio = float('nan')
    shot_ratio = float('nan')
    time_ratio = model_time / gd_time

    return algo_syntax, code_syntax, fidelity, gate_count_ratio, shot_ratio, time_ratio


def check_description(prompt):
    s = "Consider the 5-qubit state $state$"
    if s in prompt:
        return s in prompt, {}
    else:
        return False, {}
