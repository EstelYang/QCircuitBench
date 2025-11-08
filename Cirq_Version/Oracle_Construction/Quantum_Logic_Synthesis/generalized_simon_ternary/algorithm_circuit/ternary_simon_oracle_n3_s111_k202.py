import cirq
import math

def oracle_circuit():
    n = 3
    cycles = [
        ['000', '111', '222'],
        ['001', '112', '220'],
        ['002', '110', '221'],
        ['010', '121', '202'],
        ['011', '122', '200'],
        ['012', '120', '201'],
        ['020', '101', '212'],
        ['021', '102', '210'],
        ['022', '100', '211'],
    ]
    m = max(1, math.ceil(math.log2(len(cycles))))
    q = cirq.LineQubit.range(2*n + m)
    x = q[:2*n]
    y = q[2*n:2*n+m]
    circuit = cirq.Circuit()

    def enc_digit(d):
        return '00' if d=='0' else '01' if d=='1' else '10'

    for cidx, cyc in enumerate(cycles):
        bin_idx = format(cidx, f'0{m}b')
        for k, bit in enumerate(bin_idx):
            if bit != '1':
                continue
            for v in cyc:
                patt = ''.join(enc_digit(d) for d in v)
                controls = [x[i] for i in range(2*n)]
                cvals = tuple(1 if ch=='1' else 0 for ch in patt)
                op = cirq.X(y[k]).controlled_by(*controls, control_values=cvals)
                circuit.append(op)

    return circuit
