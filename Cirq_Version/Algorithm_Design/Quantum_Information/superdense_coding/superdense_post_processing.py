import cirq


def run_and_analyze(circuit):
    """Run once and return the recovered 2-bit message."""
    sim = cirq.Simulator()
    res = sim.run(circuit, repetitions=1)

    n = len(res.measurements)

    bits = []
    for i in reversed(range(n)):
        bits.append(str(res.measurements[f"c{i}"][0][0]))
    return "".join(bits)
