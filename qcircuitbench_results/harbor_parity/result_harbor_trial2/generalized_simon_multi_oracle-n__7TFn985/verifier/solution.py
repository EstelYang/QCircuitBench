qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15 {
  x a9;
  x a10;
  x a12;
  x a13;
  x a14;
  x a15;

  cx a0, a8;
  cx a1, a9;
  cx a2, a10;
  cx a3, a11;
  cx a4, a12;
  cx a5, a13;
  cx a6, a14;
  cx a7, a15;

  cx a3, a11;
  cx a3, a13;
  cx a3, a14;
  cx a3, a15;
}

qubit[16] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
"""
