qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate oracle a0, a1, a2, a3, o0, o1, o2, o3 {
  cx a0, o0;
  x o1;
  cx a2, o2;
  cx a3, o3;
  x o3;
}
qubit[8] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
