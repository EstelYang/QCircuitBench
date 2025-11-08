from qiskit.qasm3 import loads
import re
import networkx as nx


def print_and_save(message, text):
    print(message)
    text.append(message)


def verify_qasm_syntax(output):
    """Verify the syntax of the output and return the corresponding QuantumCircuit (if it is valid)."""
    assert isinstance(output, str)
    try:
        # Parse the OpenQASM 3.0 code
        circuit = loads(output)
        print(
            "    The OpenQASM 3.0 code is valid and has been successfully loaded as a QuantumCircuit."
        )
        return circuit
    except Exception as e:
        print(f"    Error: The OpenQASM 3.0 code is not valid. Details: {e}")
        return None


def compute_cut_value(graph, bitstring):
    cut_value = 0
    for u, v in graph.edges():
        u, v = int(u), int(v)
        if bitstring[u] != bitstring[v]:
            cut_value += 1
    return cut_value


def fetch_target_cut_value(n, mode):
    if mode == 'cycle':

        file_path = f"graph/n{n}/cycle_graph_{n}.graphml"
        nodes = []
        edges = []

        with open(file_path, 'r') as f:
            for line in f:
                line = line.strip()
                if line.startswith("- Node ID:"):
                    node_id = re.search(r"\d+", line).group()
                    nodes.append(int(node_id))
                elif line.startswith("- Edge between"):
                    edge_nodes = re.findall(r"\d+", line)
                    edges.append((int(edge_nodes[0]), int(edge_nodes[1])))

        graph = nx.Graph()
        graph.add_nodes_from(nodes)
        graph.add_edges_from(edges)

        standard_file = f"graph/n{n}/cycle_max_cut_solution.txt"

    if mode == '3-regular':

        file_path = f"graph/n{n}/3_regular_graph_{n}.graphml"
        nodes = []
        edges = []

        with open(file_path, 'r') as f:
            for line in f:
                line = line.strip()
                if line.startswith("- Node ID:"):
                    node_id = re.search(r"\d+", line).group()
                    nodes.append(int(node_id))
                elif line.startswith("- Edge between"):
                    edge_nodes = re.findall(r"\d+", line)
                    edges.append((int(edge_nodes[0]), int(edge_nodes[1])))

        graph = nx.Graph()
        graph.add_nodes_from(nodes)
        graph.add_edges_from(edges)

        standard_file = f"graph/n{n}/3_regular_max_cut_solution.txt"

    with open(standard_file, "r") as f:
        standard_solution = f.read().strip().split(": ")[1]
    target_cut_value = compute_cut_value(graph, standard_solution)
    return target_cut_value
