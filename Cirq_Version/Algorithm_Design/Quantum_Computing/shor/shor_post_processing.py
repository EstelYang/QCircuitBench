import math, array, fractions
import random
import cirq


def get_factors(x_value, t_upper, N, a):
    if x_value <= 0:
        return None
    T = pow(2, t_upper)
    x_over_T = x_value / T
    i = 0
    b = array.array('i')
    t = array.array('f')
    b.append(math.floor(x_over_T))
    t.append(x_over_T - b[i])
    while i >= 0:
        if i > 0:
            b.append(math.floor(1 / (t[i - 1])))
            t.append((1 / (t[i - 1])) - b[i])
        aux = 0
        j = i
        while j > 0:
            aux = 1 / (b[j] + aux)
            j = j - 1
        aux = aux + b[0]
        frac = fractions.Fraction(aux).limit_denominator()
        den = frac.denominator
        i = i + 1

        if (den % 2) == 1:
            if i >= 15:
                return None
            continue
        exponential = 0
        if den < 1000:
            exponential = pow(a, (den / 2))
        if math.isinf(exponential) == 1 or exponential > 1000000000:
            aux_out = random.choice([0, 1])
            if aux_out != '1':
                return None
            else:
                continue

        putting_plus = int(exponential + 1)
        putting_minus = int(exponential - 1)
        one_factor = math.gcd(putting_plus, N)
        other_factor = math.gcd(putting_minus, N)

        if one_factor == 1 or one_factor == N or other_factor == 1 or other_factor == N:
            if t[i - 1] == 0:
                return None
            else:
                return None
        else:
            return one_factor, other_factor


def run_and_analyze(circuit, N: int, a: int):
    sim = cirq.Simulator()

    result = sim.run(circuit, repetitions=1)
    n = math.ceil(math.log2(N))
    twon = 2 * n

    if 'm_up' in result.measurements:
        row = result.measurements['m_up'][0]
        bitstr = ''.join(str(int(b)) for b in row[::-1])
    else:
        bits = []
        for i in reversed(range(twon)):
            arr = result.measurements[f'c{i}']
            val = int(arr[0]) if arr.ndim == 1 else int(arr[0][0])
            bits.append(str(val))
        bitstr = ''.join(bits)

    x = int(bitstr, 2)

    factors = get_factors(x, 2 * n, N, a)

    return factors
