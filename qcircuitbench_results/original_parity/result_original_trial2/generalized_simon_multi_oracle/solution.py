qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15 {
  // Implements the described construction for n=8 with:
  // s1 = 00010111 (j1=3), s2 = 10101111 (j2=0), b = 01101111.
  // With no extra qubits available, we select between s1 and s2 based on x0
  // (x0=0 -> s1 branch, x0=1 -> s2 branch), yielding a 50/50 split for
  // uniformly random x.

  // c = x initially: copy x to output (y ^= x)
  cx q0, q8;
  cx q1, q9;
  cx q2, q10;
  cx q3, q11;
  cx q4, q12;
  cx q5, q13;
  cx q6, q14;
  cx q7, q15;

  // s2 branch (selected when x0=1): since j2=0, this applies when x0=1.
  // output ^= s2 (bits 0,2,4,5,6,7) controlled by x0
  cx q0, q8;
  cx q0, q10;
  cx q0, q12;
  cx q0, q13;
  cx q0, q14;
  cx q0, q15;

  // s1 branch (selected when x0=0): apply when (x0=0 AND x3=1), with j1=3.
  // output ^= s1 (bits 3,5,6,7) controlled by (~x0 & x3)
  x q0;
  ccx q0, q3, q11;
  ccx q0, q3, q13;
  ccx q0, q3, q14;
  ccx q0, q3, q15;
  x q0;

  // output ^= b = 01101111 (bits 1,2,4,5,6,7)
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
