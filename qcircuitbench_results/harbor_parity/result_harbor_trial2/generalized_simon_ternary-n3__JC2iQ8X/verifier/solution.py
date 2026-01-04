qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
qubit[10] q;
bit[10] c;
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
Oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];
measure q[0] -> c[0];
measure q[1] -> c[1];
measure q[2] -> c[2];
measure q[3] -> c[3];
measure q[4] -> c[4];
measure q[5] -> c[5];
measure q[6] -> c[6];
measure q[7] -> c[7];
measure q[8] -> c[8];
measure q[9] -> c[9];
"""

code_string = """from qiskit import transpile


def run_and_analyze(circuit, aer_sim):
    def int_to_trits_little_endian(value, n_trits):
        trits = [0] * n_trits
        for i in range(n_trits):
            trits[i] = value % 3
            value //= 3
        return trits

    def trits_to_int_little_endian(trits):
        value = 0
        place = 1
        for t in trits:
            value += int(t) * place
            place *= 3
        return value

    def int_to_trits_big_endian(value, n_trits):
        little = int_to_trits_little_endian(value, n_trits)
        return list(reversed(little))

    def trits_to_int_big_endian(trits):
        value = 0
        for t in trits:
            value = value * 3 + int(t)
        return value

    def add_trits_mod3(a, b):
        return [(ai + bi) % 3 for ai, bi in zip(a, b)]

    def scale_trits_mod3(a, scalar):
        return [(scalar * ai) % 3 for ai in a]

    def normalize_direction(trits, most_to_least_indices):
        if all(t == 0 for t in trits):
            return trits
        for idx in most_to_least_indices:
            if trits[idx] != 0:
                if trits[idx] == 2:
                    return scale_trits_mod3(trits, 2)
                return trits
        return trits

    # Work with the unitary action directly by extracting the (x -> f(x)) mapping
    # from the statevector of a single uniform-superposition oracle call.
    no_meas = circuit.remove_final_measurements(inplace=False)
    no_meas.save_statevector()
    compiled = transpile(no_meas, aer_sim)
    result = aer_sim.run(compiled, shots=1).result()
    statevector = result.get_statevector(compiled)
    amplitudes = list(statevector)

    n_total = no_meas.num_qubits
    n_input = 5
    n_output = 5
    tol = 1e-9

    # Map for valid ternary inputs: for n=3, domain size is 3^3 = 27.
    f_map = {}
    for basis_index, amp in enumerate(amplitudes):
        if abs(amp) <= tol:
            continue
        # Qiskit bit order: qubit 0 is least significant.
        bits = [(basis_index >> i) & 1 for i in range(n_total)]
        x_val = 0
        for i in range(n_input):
            x_val |= int(bits[i]) << i
        if x_val >= 27:
            continue
        y_val = 0
        for j in range(n_output):
            y_val |= int(bits[n_input + j]) << j
        f_map[x_val] = y_val

    # Group preimages by output value and pick any collision triple.
    by_output = {}
    for x_val, y_val in f_map.items():
        by_output.setdefault(y_val, []).append(x_val)
    triples = [xs for xs in by_output.values() if len(xs) == 3]
    if not triples:
        prediction = "000"
        return prediction

    # Extract the direction of s (s or 2s) from one triple using both endianness
    # conventions and validate across the whole table to decide the correct one.
    def infer_direction(triple, int_to_trits, most_to_least_indices):
        a = int_to_trits(triple[0], 3)
        b = int_to_trits(triple[1], 3)
        delta = [(bi - ai) % 3 for ai, bi in zip(a, b)]
        return normalize_direction(delta, most_to_least_indices)

    def validate_direction(direction, int_to_trits, trits_to_int):
        if all(t == 0 for t in direction):
            return -1
        score = 0
        for x_val in range(27):
            if x_val not in f_map:
                continue
            x_trits = int_to_trits(x_val, 3)
            x1 = trits_to_int(add_trits_mod3(x_trits, direction))
            x2 = trits_to_int(add_trits_mod3(x_trits, scale_trits_mod3(direction, 2)))
            if x1 in f_map and f_map[x1] == f_map[x_val]:
                score += 1
            if x2 in f_map and f_map[x2] == f_map[x_val]:
                score += 1
        return score

    triple = triples[0]
    s_little = infer_direction(triple, int_to_trits_little_endian, most_to_least_indices=[2, 1, 0])
    s_big = infer_direction(triple, int_to_trits_big_endian, most_to_least_indices=[0, 1, 2])
    score_little = validate_direction(s_little, int_to_trits_little_endian, trits_to_int_little_endian)
    score_big = validate_direction(s_big, int_to_trits_big_endian, trits_to_int_big_endian)

    if score_big > score_little:
        s_trits = normalize_direction(s_big, most_to_least_indices=[0, 1, 2])
        prediction = "".join(str(t) for t in s_trits)
    else:
        s_trits = normalize_direction(s_little, most_to_least_indices=[2, 1, 0])
        # Little-endian trits correspond to least-significant-first; output most-significant-first.
        prediction = "".join(str(t) for t in reversed(s_trits))

    return prediction
"""

