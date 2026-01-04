qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle a0, a1, a2, a3, t0, t1 {
  x a0;
  x a1;
  ccx a0, a1, t0;
  x a1;
  x a0;

  x a1;
  ccx a0, a1, t1;
  x a1;
}

qubit[6] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5];
"""
