import cirq
import numpy as np


def run_and_analyze(circuit):
    """Run the swap test circuit and estimate the overlap between two states."""
    repetition_num = 1000
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=repetition_num)

    measurements = result.measurements["result"]
    num_zero = np.sum(measurements == 0)

    prob_zero = num_zero / repetition_num
    overlap = 2 * prob_zero - 1
    overlap = max(overlap, 0)

    return float(overlap)
