qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle q0, q1, q2, q3, q4, q5, q6, q7, q8, q9 {
  cx q1, q9;
  cx q2, q9;
  cx q3, q9;
  cx q5, q9;
  cx q6, q9;
  cx q7, q9;
}
qubit[10] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];
"""
