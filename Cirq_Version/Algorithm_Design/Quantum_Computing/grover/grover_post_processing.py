import cirq


def run_and_analyze(circuit):
    """Run the circuit on a quantum simulator and return the measured bitstring.
    Assumes the circuit measures each qubit with keys 'c0'...'c{n-1}'.
    """
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)
    n = len(result.measurements)
    prediction = "".join(str(result.measurements[f"c{i}"][0][0]) for i in range(n))
    return prediction
