qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate diffusion7 a0, a1, a2, a3, a4, a5, a6 {
  h a0;
  h a1;
  h a2;
  h a3;
  h a4;
  h a5;
  h a6;

  x a0;
  x a1;
  x a2;
  x a3;
  x a4;
  x a5;
  x a6;

  h a6;
  mcx a0, a1, a2, a3, a4, a5, a6;
  h a6;

  x a0;
  x a1;
  x a2;
  x a3;
  x a4;
  x a5;
  x a6;

  h a0;
  h a1;
  h a2;
  h a3;
  h a4;
  h a5;
  h a6;
}

qubit[7] q;
diffusion7 q[0], q[1], q[2], q[3], q[4], q[5], q[6];
"""
