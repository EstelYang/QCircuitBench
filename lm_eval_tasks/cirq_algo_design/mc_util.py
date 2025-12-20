import time
import re
from typing import Tuple, Dict, List
import cirq
import sympy as sp
import numpy as np
import networkx as nx
from scipy.optimize import minimize


def _get_algorithm_from_string(algo_str: str):
    env = {"cirq": cirq, "sp": sp, "np": np, "nx": nx}
    exec(compile(algo_str, "<algo_str>", "exec"), env, env)
    fn = env.get("algorithm", None)
    if not callable(fn):
        raise ValueError("algo_str must define function: algorithm(graph)")
    return fn


def _count_non_measure_ops(c: cirq.Circuit) -> int:
    return sum(
        1 for op in c.all_operations()
        if isinstance(getattr(op, "gate", None), cirq.Gate)
        and not isinstance(getattr(op, "gate", None), cirq.MeasurementGate)
    )


def _bitstring_from_measurements(meas: np.ndarray) -> str:
    return "".join(str(int(b)) for b in meas)


def compute_cut_value(graph: nx.Graph, bitstring: str) -> int:
    cut_value = 0
    for u, v in graph.edges():
        u, v = int(u), int(v)
        if bitstring[u] != bitstring[v]:
            cut_value += 1
    return cut_value


def _load_graph_from_text(file_path: str) -> nx.Graph:
    nodes: List[int] = []
    edges: List[Tuple[int, int]] = []
    with open(file_path, "r", encoding="utf-8") as f:
        for ln in f:
            line = ln.strip()
            if line.startswith("- Node ID:"):
                node_id = re.search(r"\d+", line).group()
                nodes.append(int(node_id))
            elif line.startswith("- Edge between"):
                a, b = re.findall(r"\d+", line)
                edges.append((int(a), int(b)))
    G = nx.Graph()
    G.add_nodes_from(nodes)
    G.add_edges_from(edges)
    return G


def fetch_graph_and_target(n: int, mode: str) -> Tuple[nx.Graph, int]:
    graph_dire = "./graph"

    if mode == "cycle":
        file_path = f"{graph_dire}/n{n}/cycle_graph_{n}.graphml"
        standard_file = f"{graph_dire}/n{n}/cycle_max_cut_solution.txt"
    else:  # "3-regular"
        file_path = f"{graph_dire}/n{n}/3_regular_graph_{n}.graphml"
        standard_file = f"{graph_dire}/n{n}/3_regular_max_cut_solution.txt"

    graph = _load_graph_from_text(file_path)

    with open(standard_file, "r", encoding="utf-8") as f:
        standard_solution = f.read().strip().split(": ")[1]

    target_cut_value = compute_cut_value(graph, standard_solution)
    return graph, target_cut_value


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


def ground_truth_run_and_analyze(circuit: cirq.Circuit, graph: nx.Graph) -> List[str]:
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


def efficiency_check(algo_str: str,
                     dire_gt: str,
                     run_and_analyze_func,
                     gd_run_and_analyze_func,
                     n: int,
                     t: int,
                     mode: str):
    graph, _ = fetch_graph_and_target(n, mode)

    # model
    algorithm = _get_algorithm_from_string(algo_str)
    model_circuit = algorithm(graph)

    # ground-truth circuit
    gt_circuit = None
    try:
        gt_path = f"{dire_gt}/qaoa_maxcut_algorithm.py"
        env = {"cirq": cirq, "sp": sp, "np": np, "nx": nx}
        with open(gt_path, "r", encoding="utf-8") as f:
            code = f.read()
        exec(compile(code, gt_path, "exec"), env, env)
        if callable(env.get("algorithm", None)):
            gt_circuit = env["algorithm"](graph)
    except Exception:
        gt_circuit = None

    # gate count
    try:
        m_cnt = _count_non_measure_ops(model_circuit)
        g_cnt = _count_non_measure_ops(gt_circuit) if gt_circuit else 0
        gate_count_ratio = 'nan' if m_cnt == 0 else (g_cnt / m_cnt)
    except Exception:
        gate_count_ratio = 'nan'

    shot_ratio = 'nan'

    try:
        t0 = time.time()
        run_and_analyze_func(model_circuit.copy(), graph)
        t1 = time.time()
        if gt_circuit is None:
            time_ratio = float('nan')
        else:
            t2 = time.time()
            gd_run_and_analyze_func(gt_circuit.copy(), graph)
            t3 = time.time()
            time_m = t1 - t0
            time_gd = t3 - t2
            time_ratio = (time_gd / time_m) if time_m > 0 else float('nan')
    except Exception:
        time_ratio = float('nan')

    return gate_count_ratio, shot_ratio, time_ratio


def execute_test_cases(algo_str: str,
                       run_and_analyze_func,
                       n: int,
                       mode: str) -> float:
    algorithm = _get_algorithm_from_string(algo_str)
    graph, target_cut = fetch_graph_and_target(n, mode)
    circuit = algorithm(graph)

    top_two = run_and_analyze_func(circuit.copy(), graph)
    top_cut_values = [compute_cut_value(graph, s) for s in top_two]
    is_correct = any(v == target_cut for v in top_cut_values)

    print(f"Top two states: {top_two}")
    print(f"Cut values for top two states: {top_cut_values}")
    print(f"Target Max Cut Value: {target_cut}")
    print("Correct" if is_correct else "Incorrect")

    return 1.0 if is_correct else 0.0


def check_model(algo_str: str, code_string: str, n: int, mode: str, t: int = 1):
    result_score = 0.0
    try:
        algorithm = _get_algorithm_from_string(algo_str)
        qasm_syntax = 1
    except Exception as e:
        print("[Algo Parse Error]:", e)
        return 0, 0, 0.0, float('nan'), float('nan'), float('nan')

    try:
        local_vars = {}
        env = {"cirq": cirq, "sp": sp, "np": np, "nx": nx, "minimize": minimize,
               "compute_cut_value": compute_cut_value}
        exec(code_string, env, local_vars)
        run_and_analyze_func = local_vars["run_and_analyze"]
        code_syntax = 1
        print("Post-processing code loaded successfully.")
    except Exception as e:
        print(f"Post-processing syntax error: {e}\nUsing ground truth.")
        run_and_analyze_func = ground_truth_run_and_analyze
        code_syntax = 0

    gate_count_ratio = shot_ratio = time_ratio = float('nan')
    if qasm_syntax == 1 and code_syntax == 1:
        dire_gt = "./algorithm_circuit"
        gate_count_ratio, shot_ratio, time_ratio = efficiency_check(
            algo_str, dire_gt, run_and_analyze_func, ground_truth_run_and_analyze, n, t, mode
        )

        try:
            result_score = execute_test_cases(algo_str, run_and_analyze_func, n, mode)
        except Exception as e:
            print(f"Post-processing running-time error: {e}")
            result_score = 0.0
            code_syntax = 0

    return qasm_syntax, code_syntax, result_score, gate_count_ratio, shot_ratio, time_ratio


def check_description(prompt):
    s = "Given a graph $G = (V, E)$ with $|V| = n$ nodes"
    if s in prompt:
        n = int(prompt.split("$n = ")[1].split("$")[0])
        mode = 'cycle' if 'Cycle' in prompt else '3-regular'
        return s in prompt, {"n": n, "mode": mode}
    else:
        return False, {}
