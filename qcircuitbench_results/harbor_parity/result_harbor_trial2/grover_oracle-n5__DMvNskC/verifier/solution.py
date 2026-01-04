qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate oracle a, b, c, d, e {
  x a;
  x b;
  x c;
  c4z a, b, c, d, e;
  x a;
  x b;
  x c;
}

qubit[5] q;
oracle q[0], q[1], q[2], q[3], q[4];
"""
