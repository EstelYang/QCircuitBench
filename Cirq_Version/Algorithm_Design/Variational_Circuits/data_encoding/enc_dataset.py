import os


def save_basis_encoding_py():
    path = "./algorithm_circuit"
    os.makedirs(path, exist_ok=True)
    file_path = f"{path}/basis_encoding_3q_superposition.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n")
        f.write("import numpy as np\n")
        f.write("import math\n\n")

        f.write("def algorithm():\n")
        f.write("    q = cirq.LineQubit.range(3)\n")
        f.write("    desired_state = np.zeros(8, dtype=complex)\n")
        f.write("    desired_state[5] = 1 / math.sqrt(2)\n")
        f.write("    desired_state[7] = 1 / math.sqrt(2)\n")
        f.write("    prep = cirq.StatePreparationChannel(desired_state)\n")
        f.write("    c = cirq.Circuit(prep.on(*q))\n")
        f.write("    return c\n\n")


def save_amplitude_encoding_py():
    path = "./algorithm_circuit"
    os.makedirs(path, exist_ok=True)
    file_path = f"{path}/amplitude_encoding_2q.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n")
        f.write("import numpy as np\n\n")

        f.write("def algorithm():\n")
        f.write("    q = cirq.LineQubit.range(2)\n")
        f.write("    vec = np.array([1.5, 0, -2, 3], dtype=float)\n")
        f.write("    vec = vec / np.linalg.norm(vec)\n")
        f.write("    prep = cirq.StatePreparationChannel(vec)\n")
        f.write("    c = cirq.Circuit(prep.on(*q))\n")
        f.write("    return c\n\n")


def save_angle_encoding_py():
    path = "./algorithm_circuit"
    os.makedirs(path, exist_ok=True)
    file_path = f"{path}/angle_encoding_3q.py"

    with open(file_path, "w") as f:
        f.write("import cirq\n")
        f.write("import math\n\n")

        f.write("def algorithm():\n")
        f.write("    q = cirq.LineQubit.range(3)\n")
        f.write("    c = cirq.Circuit()\n")
        f.write("    c.append(cirq.ry(0).on(q[0]))\n")
        f.write("    c.append(cirq.ry(math.pi/2).on(q[1]))\n")
        f.write("    c.append(cirq.ry(math.pi).on(q[2]))\n")
        f.write("    return c\n\n")


def generate_encoding_dataset():
    print("Saving Cirq encoding circuits...")
    save_basis_encoding_py()
    save_amplitude_encoding_py()
    save_angle_encoding_py()
    print("Done")


if __name__ == "__main__":
    generate_encoding_dataset()
