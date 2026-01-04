qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

// Controls on a,b interpreted as a ternary digit encoded as:
// 0 -> |00>, 1 -> |01>, 2 -> |10> (|11> unused).
// For n=2, s=02 => least nonzero index j=1, so the (n-1)-trit output depends only on x0.
// With key b=20, the output trit is f(x)=x0+2 (mod 3), XOR-encoded into the output qubits.

gate ctl00_x a, b, t {
  x a;
  x b;
  ccx a, b, t;
  x a;
  x b;
}

gate ctl10_x a, b, t {
  x b;
  ccx a, b, t;
  x b;
}

qubit[6] q;

// Output qubits q[4],q[5] encode f(x)=x0+2 (mod 3) in the same ternary-to-2-qubit encoding.
// MSB is 1 iff x0=0; LSB is 1 iff x0=2.
ctl00_x q[0], q[1], q[4];
ctl10_x q[0], q[1], q[5];
"""
