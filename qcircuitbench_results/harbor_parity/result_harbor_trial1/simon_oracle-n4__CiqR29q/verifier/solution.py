qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle a0, a1, a2, a3, a4, a5, a6, a7 {
  cx a0, a4;
  x a5;
  cx a2, a6;
  cx a3, a7;
  x a7;
}
qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
