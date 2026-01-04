qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate prep_state qa, qb, qc, qd {
  h qa;
  h qc;
  h qd;
  t qa;
  t qc;
  s qd;
  s qd;
  s qd;
  h qc;
  cx qa, qc;
  h qc;
}

qubit[4] q;
bit[4] c;

prep_state q[0], q[1], q[2], q[3];
"""
