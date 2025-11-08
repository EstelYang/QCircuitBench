# qkd_dataset.py  — per-trial emitter (no if/for in generated modules)
import os
import numpy as np


def save_algorithm_instance_py(
    n: int,
    trial: int,
    alice_bits: np.ndarray,
    alice_bases: np.ndarray,
    bob_bases: np.ndarray,
    intercept: bool,
    eve_bases: np.ndarray,
):
    """
    Emit ./algorithm_circuit/qkd_n{n}_trial{trial}_{intercept}.py
    The generated module contains:
        def algorithm() -> cirq.Circuit
    and has no 'if'/'for' logic — every gate is written explicitly.
    """
    os.makedirs("algorithm_circuit", exist_ok=True)
    path = f"./algorithm_circuit/qkd_n{n}_trial{trial}_{intercept}.py"

    gamma = 1 if intercept else 0  # baked as a constant; no branching in the file

    with open(path, "w") as f:
        f.write("import cirq\n\n")
        f.write("def algorithm():\n")
        f.write(f"    n = {n}\n")
        f.write("    qubits = cirq.LineQubit.range(n)\n")
        f.write("    circuit = cirq.Circuit()\n")

        # Alice preparation: X**bit then H**basis
        f.write("    # Alice prepares states (X**bit then H**basis)\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.X(qubits[{i}])**{int(alice_bits[i])})\n")
            f.write(f"    circuit.append(cirq.H(qubits[{i}])**{int(alice_bases[i])})\n")

        # Eve intercept: fixed random basis per qubit, phase damping with gamma (0/1)
        f.write(
            "\n    # Eve intercept (random basis baked), using PhaseDampingChannel(gamma)\n"
        )
        for i in range(n):
            b = int(eve_bases[i])
            f.write(f"    circuit.append(cirq.H(qubits[{i}])**{b})\n")
            f.write(
                f"    circuit.append(cirq.PhaseDampingChannel(gamma={gamma}).on(qubits[{i}]))\n"
            )
            f.write(f"    circuit.append(cirq.H(qubits[{i}])**{b})\n")

        # Bob measurement: H**basis then Z-basis measure
        f.write("\n    # Bob measures in his basis (H**basis then measure)\n")
        for i in range(n):
            f.write(f"    circuit.append(cirq.H(qubits[{i}])**{int(bob_bases[i])})\n")
            f.write(f"    circuit.append(cirq.measure(qubits[{i}], key='c{i}'))\n")

        f.write("    return circuit\n")


def save_text(alice_bits, alice_bases, bob_bases, directory, filename):
    os.makedirs(directory, exist_ok=True)
    combined = np.vstack((alice_bits, alice_bases, bob_bases))
    np.savetxt(f"{directory}/{filename}", combined, fmt="%d")


def generate_trials(start_n=20, end_n=50, trials_per_n=10, outdir_prefix="intercept"):
    for n in range(start_n, end_n + 1):
        print(f"Preparing per-trial QKD circuits for n={n}")
        directory = f"{outdir_prefix}/qkd_n{n}"
        os.makedirs(directory, exist_ok=True)

        for trial in range(1, trials_per_n + 1):
            # Per-trial randomness
            alice_bits = np.random.randint(2, size=n)
            alice_bases = np.random.randint(2, size=n)
            bob_bases = np.random.randint(2, size=n)
            eve_bases = np.random.randint(2, size=n)

            # Emit BOTH intercept settings as distinct modules (parity with original)
            for intercept in (False, True):
                # Sidecar text (same as before)
                txt_name = f"qkd_n{n}_trial{trial}_{intercept}.txt"
                save_text(alice_bits, alice_bases, bob_bases, directory, txt_name)

                # Python circuit file with all choices baked in; no if/for in file
                save_algorithm_instance_py(
                    n=n,
                    trial=trial,
                    alice_bits=alice_bits,
                    alice_bases=alice_bases,
                    bob_bases=bob_bases,
                    intercept=intercept,
                    eve_bases=eve_bases,
                )


if __name__ == "__main__":
    generate_trials()
