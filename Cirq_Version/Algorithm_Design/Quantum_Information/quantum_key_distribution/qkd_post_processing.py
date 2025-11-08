import numpy as np
import cirq


def find_key(a_bases, b_bases, bits):
    key = []
    idx = []
    for i in range(len(a_bases)):
        if a_bases[i] == b_bases[i]:
            key.append(bits[i])
            idx.append(i)
    return key, idx


def sample_bits(bits, selection):
    # Operates in-place on `bits` (matches original semantics)
    sample = []
    for i in selection:
        i = np.mod(i, len(bits))
        sample.append(bits.pop(i))
    return sample


def run_and_analyze(circuit, text):
    """Run once, extract Bob's measured bits, and perform the key check."""
    simulator = cirq.Simulator()
    result = simulator.run(circuit, repetitions=1)

    alice_bits = text[0, :].tolist()
    alice_bases = text[1, :].tolist()
    bob_bases = text[2, :].tolist()
    n = len(alice_bits)

    # Reconstruct Bob's bit list from measurement keys c0..c{n-1}
    bob_bits = [int(result.measurements[f"c{i}"][0][0]) for i in range(n)]

    # Sift keys by matching bases
    alice_key, _ = find_key(alice_bases, bob_bases, alice_bits)
    bob_key, _ = find_key(alice_bases, bob_bases, bob_bits)

    # Randomly sample half of sifted key for error check (destructive pop like original)
    sample_size = len(alice_key) // 2
    bit_selection = np.random.randint(n, size=sample_size)
    bob_sample = sample_bits(bob_key, bit_selection)
    alice_sample = sample_bits(alice_key, bit_selection)

    if alice_sample == bob_sample:
        return "Success", alice_key  # no error detected
    else:
        return "Fail", alice_key  # error detected (suggesting interception)
