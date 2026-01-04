qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle a0, a1, a2, a3, a4, a5, a6, out {
  x a2;
  x a4;
  cx a0, out;
  cx a1, out;
  cx a2, out;
  cx a3, out;
  cx a4, out;
  cx a5, out;
  cx a6, out;
  x a2;
  x a4;
}
qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
