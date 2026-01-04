qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate diffusion a, b, c, d, e, f, g {
  h a;
  h b;
  h c;
  h d;
  h e;
  h f;
  h g;

  x a;
  x b;
  x c;
  x d;
  x e;
  x f;
  x g;

  h g;
  mcx a, b, c, d, e, f, g;
  h g;

  x a;
  x b;
  x c;
  x d;
  x e;
  x f;
  x g;

  h a;
  h b;
  h c;
  h d;
  h e;
  h f;
  h g;
}

qubit[7] q;
diffusion q[0], q[1], q[2], q[3], q[4], q[5], q[6];
"""
