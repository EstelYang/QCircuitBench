qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate oracle5 qa, qb, qc, qd, qe {
  x qa;
  x qb;
  x qc;
  c4z qa, qb, qc, qd, qe;
  x qa;
  x qb;
  x qc;
}

qubit[5] q;
oracle5 q[0], q[1], q[2], q[3], q[4];
"""
