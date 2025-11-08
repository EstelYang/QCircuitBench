import cirq


def run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and derive the final answer from measurement results."""
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    output_bits = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    if "1" in output_bits:
        prediction = "balanced"
    else:
        prediction = "constant"
    return prediction
