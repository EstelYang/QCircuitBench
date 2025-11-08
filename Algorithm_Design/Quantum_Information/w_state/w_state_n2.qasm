OPENQASM 3.0;
include "stdgates.inc";
bit[2] c;
qubit[2] q;
x q[1];
ry(-pi/4) q[0];
cz q[1], q[0];
ry(pi/4) q[0];
cx q[0], q[1];
