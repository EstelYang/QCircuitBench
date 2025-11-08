OPENQASM 3;
include "stdgates.inc";
gate r_2490237764464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.353103903460222, 0, 0) _gate_q_0;
}
qubit[2] q;
reset q[0];
ry(0.9827937232473292) q[0];
reset q[1];
r_2490237764464(2.353103903460222, pi/2) q[1];
u1(pi/2) q[1];
cx q[1], q[0];
ry(-0.9827937232473292) q[0];
rz(pi/2) q[0];
cx q[1], q[0];
rz(-pi/2) q[0];
