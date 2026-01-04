qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, q16 {
  // Random branch selector r in superposition (p=0.5): r=0 -> s1, r=1 -> s2.
  h q16;

  // Start from c := x by XORing x into the output register: y ^= x
  cx q0, q8;
  cx q1, q9;
  cx q2, q10;
  cx q3, q11;
  cx q4, q12;
  cx q5, q13;
  cx q6, q14;
  cx q7, q15;

  // If r=0 select s1 = 00010111 with j=3, flip bits {3,5,6,7} when x3=1.
  x q16;
  ccx q16, q3, q11;
  ccx q16, q3, q13;
  ccx q16, q3, q14;
  ccx q16, q3, q15;
  x q16;

  // If r=1 select s2 = 10101111 with j=0, flip bits {0,2,4,5,6,7} when x0=1.
  ccx q16, q0, q8;
  ccx q16, q0, q10;
  ccx q16, q0, q12;
  ccx q16, q0, q13;
  ccx q16, q0, q14;
  ccx q16, q0, q15;

  // XOR key b = 01101111 into output (qubits 8..15): bits {1,2,4,5,6,7}.
  x q9;
  x q10;
  x q12;
  x q13;
  x q14;
  x q15;
}

qubit[17] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15], q[16];
"""
