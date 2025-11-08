from qiskit_algorithms.optimizers import COBYLA
from qiskit_machine_learning.neural_networks import SamplerQNN
from qiskit_algorithms.utils import algorithm_globals
from qiskit.circuit.library import RealAmplitudes
import numpy as np


def ansatz(num_qubits):
    return RealAmplitudes(num_qubits, reps=5)


def run_and_analyze(circuit):
    qc = circuit

    def identity_interpret(x):
        return x

    qnn = SamplerQNN(
        circuit=qc,
        input_params=[],
        weight_params=qc.parameters,
        interpret=identity_interpret,
        output_shape=2,
    )

    def cost_func_domain(params_values):
        probabilities = qnn.forward([], params_values)
        # we pick a probability of getting 1 as the output of the network
        cost = np.sum(probabilities[:, 1])
        return cost

    opt = COBYLA(maxiter=150)
    initial_point = algorithm_globals.random.random(qc.num_parameters)
    opt_result = opt.minimize(cost_func_domain, initial_point)

    return opt_result
