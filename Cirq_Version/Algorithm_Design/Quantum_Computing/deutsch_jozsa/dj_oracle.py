import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    is_constant: bool
    key_string: str

    def _num_qubits_(self):
        return len(self.key_string) + 1

    def _decompose_(self, qubits):
        n = len(qubits) - 1
        control_qubits = qubits[:n]
        target_qubit = qubits[n]

        if self.is_constant:
            if self.key_string[-1] == "1":
                yield cirq.X(target_qubit)
            else:
                yield cirq.I(target_qubit)
        else:
            for i, bit in enumerate(self.key_string[:n]):
                if bit == "1":
                    yield cirq.X(control_qubits[i])

            for i in range(n):
                yield cirq.CNOT(control_qubits[i], target_qubit)

            for i, bit in enumerate(self.key_string[:n]):
                if bit == "1":
                    yield cirq.X(control_qubits[i])

    def _circuit_diagram_info_(self, args):
        return [f"s{i}" for i in range(self.num_qubits() - 1)] + ["oracle_target"]

    def __eq__(self, other):
        return (
            isinstance(other, Oracle)
            and self.is_constant == other.is_constant
            and self.key_string == other.key_string
        )

    def __hash__(self):
        return hash((Oracle, self.is_constant, self.key_string))


# oracle_gate = Oracle(is_constant=False, key_string="101")
# qubits = cirq.LineQubit.range(4)
# oracle_op = oracle_gate.on(*qubits)

# print("Oracle gate:", oracle_gate)
# print("Has _decompose_:", hasattr(oracle_gate, "_decompose_"))
# print("Is Gate:", isinstance(oracle_gate, cirq.Gate))
# print("Is Operation:", isinstance(oracle_gate.on(*qubits), cirq.Operation))

# print("=== Cirq decomposition ===")
# for op in cirq.flatten_op_tree(oracle_gate._decompose_(qubits)):
#     print(" ", op)
