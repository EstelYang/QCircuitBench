import cirq
import numpy as np
from typing import Dict, List
import networkx as nx
from scipy.optimize import minimize


def compute_cut_value(graph: nx.Graph, bitstring: str) -> int:
    cut_value = 0
    for u, v in graph.edges():
        u, v = int(u), int(v)
        if bitstring[u] != bitstring[v]:
            cut_value += 1
    return cut_value


def _counts_from_cirq_run(circuit: cirq.Circuit, repetitions: int = 512) -> Dict[str, int]:
    sim = cirq.Simulator()
    result = sim.run(circuit, repetitions=repetitions)
    if "m" in result.measurements:
        arr = result.measurements["m"]
        bitstrings = ["".join(str(int(b)) for b in row) for row in arr]
    else:
        keys = sorted(result.measurements.keys())
        shots = next(iter(result.measurements.values())).shape[0]
        bitstrings = []
        for s in range(shots):
            bits = []
            for k in keys:
                bits.extend(result.measurements[k][s].tolist())
            bitstrings.append("".join(str(int(b)) for b in bits))

    counts: Dict[str, int] = {}
    for bs in bitstrings:
        counts[bs] = counts.get(bs, 0) + 1
    return counts


def _expected_cut_from_counts(counts: Dict[str, int], graph: nx.Graph) -> float:
    total = sum(counts.values())
    if total == 0:
        return 0.0
    s = 0.0
    for bs, c in counts.items():
        s += compute_cut_value(graph, bs) * c
    return s / total


def run_and_analyze(circuit: cirq.Circuit, graph: nx.Graph) -> List[str]:
    params = sorted(list(cirq.parameter_symbols(circuit)), key=str)

    if len(params) == 0:
        counts = _counts_from_cirq_run(circuit, repetitions=2048)
        top_two = [bs for bs, _ in sorted(counts.items(), key=lambda kv: kv[1], reverse=True)[:2]]
        return top_two

    def objective(x: np.ndarray) -> float:
        resolver = {s: float(v) for s, v in zip(params, x)}
        bound = cirq.resolve_parameters(circuit, resolver, recursive=True)
        counts = _counts_from_cirq_run(bound, repetitions=512)
        return -_expected_cut_from_counts(counts, graph)

    x0 = np.zeros(len(params), dtype=float)
    res = minimize(objective, x0=x0, method="COBYLA", options={"maxiter": 100})
    resolver = {s: float(v) for s, v in zip(params, res.x)}
    bound = cirq.resolve_parameters(circuit, resolver, recursive=True)
    final_counts = _counts_from_cirq_run(bound, repetitions=4096)
    top_two = [bs for bs, _ in sorted(final_counts.items(), key=lambda kv: kv[1], reverse=True)[:2]]
    return top_two
