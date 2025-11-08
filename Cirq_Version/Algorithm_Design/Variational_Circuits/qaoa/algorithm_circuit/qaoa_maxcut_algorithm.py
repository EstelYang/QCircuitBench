import cirq
import sympy as sp
from typing import Dict


def algorithm(graph):
    nodes = list(graph.nodes())
    nqubits = len(nodes)
    node_index: Dict = {node: i for i, node in enumerate(nodes)}

    q = cirq.LineQubit.range(nqubits)
    c = cirq.Circuit()

    beta = [sp.Symbol(f'beta_{i}') for i in range(3)]
    gamma = [sp.Symbol(f'gamma_{i}') for i in range(3)]

    c.append(cirq.H.on_each(*q))

    for l in range(3):
        for (u, v) in graph.edges():
            a = node_index[u]
            b = node_index[v]
            c.append(cirq.CNOT(q[a], q[b]))
            c.append(cirq.rz(2 * gamma[l]).on(q[b]))
            c.append(cirq.CNOT(q[a], q[b]))
        for i in range(nqubits):
            c.append(cirq.rx(2 * beta[l]).on(q[i]))

    c.append(cirq.measure(*q, key='m'))

    return c

