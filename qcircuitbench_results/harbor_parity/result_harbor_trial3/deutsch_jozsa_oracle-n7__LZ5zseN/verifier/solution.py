qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle_7bit a, b, c, d, e, f, g, h {
  x c;
  x e;
  cx a, h;
  cx b, h;
  cx c, h;
  cx d, h;
  cx e, h;
  cx f, h;
  cx g, h;
  x c;
  x e;
}

qubit[8] q;
oracle_7bit q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7];
"""
