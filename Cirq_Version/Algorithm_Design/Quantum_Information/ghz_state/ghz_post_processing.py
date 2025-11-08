def run_and_analyze(circuit):
    """Return the qubit indices of the GHZ state."""
    return list(range(len(circuit.all_qubits())))
