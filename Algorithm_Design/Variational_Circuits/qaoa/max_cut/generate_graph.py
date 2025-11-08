import networkx as nx
import os
from itertools import combinations


def max_cut_enumeration(graph):
    n = graph.number_of_nodes()
    max_cut_value = 0
    best_partition = None

    for r in range(1, n):
        for partition in combinations(range(n), r):
            partition_set = set(partition)
            cut_value = sum(1 for u, v in graph.edges if (u in partition_set) != (v in partition_set))
            if cut_value > max_cut_value:
                max_cut_value = cut_value
                best_partition = partition_set

    solution = ['0'] * n
    for node in best_partition:
        solution[node] = '1'
    max_cut_solution = ''.join(solution)

    return max_cut_solution


def generate_and_save_cycle_graphs():
    base_dir = "graph"

    for n in range(2, 13):

        folder_path = os.path.join(base_dir, f"n{n}")
        os.makedirs(folder_path, exist_ok=True)

        graph = nx.cycle_graph(n)

        max_cut_solution = max_cut_enumeration(graph)

        graph_path = os.path.join(folder_path, f"cycle_graph_{n}.graphml")
        nx.write_graphml(graph, graph_path)

        solution_path = os.path.join(folder_path, "cycle_max_cut_solution.txt")
        with open(solution_path, "w") as f:
            f.write(f"Max Cut Solution (Binary): {max_cut_solution}\n")


def generate_and_save_3_regular_graphs():
    base_dir = "graph"

    for n in [4, 6, 8, 10, 12]:  # d * n must be even

        folder_path = os.path.join(base_dir, f"n{n}")
        os.makedirs(folder_path, exist_ok=True)

        graph = nx.random_regular_graph(d=3, n=n)

        max_cut_solution = max_cut_enumeration(graph)

        graph_path = os.path.join(folder_path, f"3_regular_graph_{n}.graphml")
        nx.write_graphml(graph, graph_path)

        solution_path = os.path.join(folder_path, "3_regular_max_cut_solution.txt")
        with open(solution_path, "w") as f:
            f.write(f"Max Cut Solution (Binary): {max_cut_solution}\n")


generate_and_save_cycle_graphs()
generate_and_save_3_regular_graphs()