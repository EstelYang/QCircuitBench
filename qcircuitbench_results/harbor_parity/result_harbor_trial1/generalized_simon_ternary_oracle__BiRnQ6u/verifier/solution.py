qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle i0, i1, i2, i3, o0, o1 {
  x i0;
  x i1;
  ccx i0, i1, o0;
  x i1;
  x i0;

  x i1;
  ccx i0, i1, o1;
  x i1;
}

qubit[6] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5];
"""
