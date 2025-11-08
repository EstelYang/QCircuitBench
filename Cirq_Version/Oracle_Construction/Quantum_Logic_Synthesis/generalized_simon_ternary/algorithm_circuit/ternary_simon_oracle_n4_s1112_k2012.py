import cirq
import math

def oracle_circuit():
    n = 4
    cycles = [
        ['0000', '1112', '2221'],
        ['0001', '1110', '2222'],
        ['0002', '1111', '2220'],
        ['0010', '1122', '2201'],
        ['0011', '1120', '2202'],
        ['0012', '1121', '2200'],
        ['0020', '1102', '2211'],
        ['0021', '1100', '2212'],
        ['0022', '1101', '2210'],
        ['0100', '1212', '2021'],
        ['0101', '1210', '2022'],
        ['0102', '1211', '2020'],
        ['0110', '1222', '2001'],
        ['0111', '1220', '2002'],
        ['0112', '1221', '2000'],
        ['0120', '1202', '2011'],
        ['0121', '1200', '2012'],
        ['0122', '1201', '2010'],
        ['0200', '1012', '2121'],
        ['0201', '1010', '2122'],
        ['0202', '1011', '2120'],
        ['0210', '1022', '2101'],
        ['0211', '1020', '2102'],
        ['0212', '1021', '2100'],
        ['0220', '1002', '2111'],
        ['0221', '1000', '2112'],
        ['0222', '1001', '2110'],
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
