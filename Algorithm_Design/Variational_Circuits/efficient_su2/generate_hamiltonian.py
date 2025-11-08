import os
from qiskit.opflow import PauliSumOp
from qiskit.algorithms import NumPyMinimumEigensolver


def generate_spin_chain_hamiltonian(n):
    hamiltonian = PauliSumOp.from_list([("I" * n, 0.0)])
    for i in range(n - 1):
        x_term = ["I"] * n
        x_term[i], x_term[i + 1] = "X", "X"
        hamiltonian += PauliSumOp.from_list([("".join(x_term), 1.0)])

        y_term = ["I"] * n
        y_term[i], y_term[i + 1] = "Y", "Y"
        hamiltonian += PauliSumOp.from_list([("".join(y_term), 1.0)])

        z_term = ["I"] * n
        z_term[i], z_term[i + 1] = "Z", "Z"
        hamiltonian += PauliSumOp.from_list([("".join(z_term), 1.0)])
    return hamiltonian


def generate_long_range_spin_chain_hamiltonian(n, alpha=2):
    hamiltonian = PauliSumOp.from_list([("I" * n, 0.0)])
    for i in range(n):
        for j in range(i + 1, n):
            distance = abs(i - j)
            coupling_strength = 1.0 / (distance ** alpha)

            x_term = ["I"] * n
            x_term[i], x_term[j] = "X", "X"
            hamiltonian += PauliSumOp.from_list([("".join(x_term), coupling_strength)])

            y_term = ["I"] * n
            y_term[i], y_term[j] = "Y", "Y"
            hamiltonian += PauliSumOp.from_list([("".join(y_term), coupling_strength)])

            z_term = ["I"] * n
            z_term[i], z_term[j] = "Z", "Z"
            hamiltonian += PauliSumOp.from_list([("".join(z_term), coupling_strength)])
    return hamiltonian


def generate_transverse_field_ising_model(n, J=1.0, h=1.0):
    hamiltonian = PauliSumOp.from_list([("I" * n, 0.0)])
    for i in range(n - 1):
        z_term = ["I"] * n
        z_term[i], z_term[i + 1] = "Z", "Z"
        hamiltonian += PauliSumOp.from_list([("".join(z_term), -J)])

    for i in range(n):
        x_term = ["I"] * n
        x_term[i] = "X"
        hamiltonian += PauliSumOp.from_list([("".join(x_term), -h)])
    return hamiltonian


def generate_heisenberg_model(n, J=1.0):
    hamiltonian = PauliSumOp.from_list([("I" * n, 0.0)])
    for i in range(n - 1):
        x_term = ["I"] * n
        x_term[i], x_term[i + 1] = "X", "X"
        hamiltonian += PauliSumOp.from_list([("".join(x_term), J)])

        y_term = ["I"] * n
        y_term[i], y_term[i + 1] = "Y", "Y"
        hamiltonian += PauliSumOp.from_list([("".join(y_term), J)])

        z_term = ["I"] * n
        z_term[i], z_term[i + 1] = "Z", "Z"
        hamiltonian += PauliSumOp.from_list([("".join(z_term), J)])
    return hamiltonian


def save_hamiltonian_and_energy(n, hamiltonian, energy, hamiltonian_type, base_dir="hamiltonians"):
    directory = os.path.join(base_dir, f"n{n}")
    os.makedirs(directory, exist_ok=True)
    file_path = os.path.join(directory, f"{hamiltonian_type}.txt")
    with open(file_path, "w") as file:
        file.write(f"Hamiltonian ({hamiltonian_type}) for n={n} qubits:\n")
        file.write(str(hamiltonian) + "\n")
        file.write(f"\nGround state energy: {energy:.6f}\n")


for n in range(2, 13):
    hamiltonians = {
        "SpinChain": generate_spin_chain_hamiltonian(n),
        "LongRangeSpinChain": generate_long_range_spin_chain_hamiltonian(n),
        "TransverseFieldIsing": generate_transverse_field_ising_model(n),
        "Heisenberg": generate_heisenberg_model(n)
    }

    solver = NumPyMinimumEigensolver()
    for hamiltonian_type, hamiltonian in hamiltonians.items():
        result = solver.compute_minimum_eigenvalue(hamiltonian)
        ground_state_energy = result.eigenvalue.real
        save_hamiltonian_and_energy(n, hamiltonian, ground_state_energy, hamiltonian_type)
        print(f"Saved {hamiltonian_type} Hamiltonian and ground state energy for n={n} qubits.")
