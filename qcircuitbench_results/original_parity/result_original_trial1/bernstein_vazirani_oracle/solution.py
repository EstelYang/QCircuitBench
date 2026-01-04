qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 {
  cx a1, a9;
  cx a2, a9;
  cx a3, a9;
  cx a5, a9;
  cx a6, a9;
  cx a7, a9;
}
qubit[10] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];
"""
