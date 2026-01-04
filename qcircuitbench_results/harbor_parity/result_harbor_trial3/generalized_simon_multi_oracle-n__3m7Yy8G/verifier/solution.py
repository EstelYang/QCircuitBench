qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15 {
  cx q0, q8;
  cx q1, q9;
  cx q2, q10;
  cx q3, q11;
  cx q4, q12;
  cx q5, q13;
  cx q6, q14;
  cx q7, q15;

  cx q3, q11;
  cx q3, q13;
  cx q3, q14;
  cx q3, q15;

  x q9;
  x q10;
  x q12;
  x q13;
  x q14;
  x q15;
}

qubit[16] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
"""
