qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle qb0, qb1, qb2, qb3, qb4, qb5, qb6, qb7, qb8, qb9 {
  cx qb1, qb9;
  cx qb2, qb9;
  cx qb3, qb9;
  cx qb5, qb9;
  cx qb6, qb9;
  cx qb7, qb9;
}

qubit[10] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9];
"""
