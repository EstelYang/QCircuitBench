qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate oracle q0, q1, q2, q3, q4 {
  x q4;
  x q3;
  x q2;
  c4z q0, q1, q2, q3, q4;
  x q2;
  x q3;
  x q4;
}

qubit[5] q;
oracle q[0], q[1], q[2], q[3], q[4];
"""
