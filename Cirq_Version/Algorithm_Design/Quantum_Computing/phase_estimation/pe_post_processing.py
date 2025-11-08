import cirq
import numpy as np


def run_and_analyze(circuit):
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)

    n = len(result.measurements)
    output_bits = "".join(
        str(result.measurements[f"c{i}"][0][0]) for i in reversed(range(n))
    )
    y = int(output_bits, 2)
    prediction = y / (2**n) * 2 * np.pi

    return prediction
