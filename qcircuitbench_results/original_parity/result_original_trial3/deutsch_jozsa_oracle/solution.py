qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle q0, q1, q2, q3, q4, q5, q6, q7 {
  x q2;
  x q4;
  cx q0, q7;
  cx q1, q7;
  cx q2, q7;
  cx q3, q7;
  cx q4, q7;
  cx q5, q7;
  cx q6, q7;
  x q2;
  x q4;
}

qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
