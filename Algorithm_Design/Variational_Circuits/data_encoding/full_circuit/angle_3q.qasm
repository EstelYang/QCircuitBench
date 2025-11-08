OPENQASM 3;
include "stdgates.inc";
qubit[3] q;
ry(0) q[0];
ry(pi/2) q[1];
ry(pi) q[2];
