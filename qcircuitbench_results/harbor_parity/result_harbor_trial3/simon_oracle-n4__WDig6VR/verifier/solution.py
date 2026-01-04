qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle a0, a1, a2, a3, b0, b1, b2, b3 {
  cx a0, b0;
  x b1;
  cx a2, b2;
  cx a3, b3;
  x b3;
}
qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
