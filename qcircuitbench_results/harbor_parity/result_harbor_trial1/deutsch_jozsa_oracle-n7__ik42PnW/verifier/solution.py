qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle a0, a1, a2, a3, a4, a5, a6, a7 {
  x a2;
  x a4;
  cx a0, a7;
  cx a1, a7;
  cx a2, a7;
  cx a3, a7;
  cx a4, a7;
  cx a5, a7;
  cx a6, a7;
  x a2;
  x a4;
}

qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
