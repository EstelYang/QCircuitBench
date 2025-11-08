OPENQASM 3;
include "stdgates.inc";
gate multiplex1_reverse_dg _gate_q_0 {
  ry(pi/2) _gate_q_0;
}
gate r_2490237610272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(pi, 0, 0) _gate_q_0;
}
gate multiplex1_reverse_reverse_dg _gate_q_0 {
  ry(0) _gate_q_0;
}
gate multiplex1_reverse_reverse_reverse_dg _gate_q_0 {
  ry(0) _gate_q_0;
}
gate multiplex1_reverse_reverse_dg_2490237611376 _gate_q_0 {
  ry(-pi/2) _gate_q_0;
}
qubit[3] q;
reset q[0];
multiplex1_reverse_dg q[0];
reset q[1];
ry(pi/4) q[1];
reset q[2];
r_2490237610272(pi, pi/2) q[2];
cx q[2], q[1];
ry(-pi/4) q[1];
cx q[2], q[1];
cx q[1], q[0];
multiplex1_reverse_reverse_dg q[0];
cx q[2], q[0];
multiplex1_reverse_reverse_reverse_dg q[0];
cx q[1], q[0];
multiplex1_reverse_reverse_dg_2490237611376 q[0];
cx q[2], q[0];
