import cirq
from dataclasses import dataclass


@dataclass(frozen=True)
class Oracle(cirq.Gate):
    n: int
    s1: str
    s2: str
    key_string: str
    reverse_bits: bool = True

    def _num_qubits_(self):
        return 2 * self.n + 1

    def _decompose_(self, qubits):
        n = self.n
        x = qubits[:n]
        y = qubits[n:2 * n]
        anc = qubits[2 * n]

        s1 = self.s1[::-1] if self.reverse_bits else self.s1
        s2 = self.s2[::-1] if self.reverse_bits else self.s2
        key = self.key_string[::-1] if self.reverse_bits else self.key_string

        for i in range(n):
            yield cirq.CNOT(x[i], y[i]).controlled_by(anc)

        if any(b == '1' for b in s1):
            i = s1.find('1')
            for j in range(n):
                if s1[j] == '1':
                    yield cirq.CNOT(x[i], y[j]).controlled_by(anc)

        yield cirq.X(anc)

        for i in range(n):
            yield cirq.CNOT(x[i], y[i]).controlled_by(anc)

        if any(b == '1' for b in s2):
            i = s2.find('1')
            for j in range(n):
                if s2[j] == '1':
                    yield cirq.CNOT(x[i], y[j]).controlled_by(anc)

        for j in range(n):
            if key[j] == '1':
                yield cirq.X(y[j])

    def _circuit_diagram_info_(self, args):
        labels = [f"x{i}" for i in range(self.n)] + [f"y{i}" for i in range(self.n)] + ["anc"]
        return labels
