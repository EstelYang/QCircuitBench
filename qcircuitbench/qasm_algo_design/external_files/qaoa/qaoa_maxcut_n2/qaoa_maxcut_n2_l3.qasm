OPENQASM 3;
include "stdgates.inc";
gate rzz_0(gamma_0) _gate_q_0, _gate_q_1  {
cx _gate_q_0, _gate_q_1;
  rz(2*gamma_0) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_1(gamma_1) _gate_q_0, _gate_q_1  {
cx _gate_q_0, _gate_q_1;
  rz(2*gamma_1) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_2(gamma_2) _gate_q_0, _gate_q_1  {
cx _gate_q_0, _gate_q_1;
  rz(2*gamma_2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
input float[64] beta_0;
input float[64] beta_1;
input float[64] beta_2;
input float[64] gamma_0;
input float[64] gamma_1;
input float[64] gamma_2;
bit[2] meas;
qubit[2] q;
h q[0];
h q[1];
rzz_0(2*gamma_0) q[0], q[1];
rx(2*beta_0) q[0];
rx(2*beta_0) q[1];
rzz_1(2*gamma_1) q[0], q[1];
rx(2*beta_1) q[0];
rx(2*beta_1) q[1];
rzz_2(2*gamma_2) q[0], q[1];
rx(2*beta_2) q[0];
rx(2*beta_2) q[1];
barrier q[0], q[1];
meas[0] = measure q[0];
meas[1] = measure q[1];