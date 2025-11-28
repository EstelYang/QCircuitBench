OPENQASM 3;
include "stdgates.inc";
gate rzz_0(gamma_0) _gate_q_0, _gate_q_1  {
cx _gate_q_0, _gate_q_1;
  rz(2*gamma_0) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
input float[64] beta_0;
input float[64] gamma_0;
bit[2] meas;
qubit[2] q;
h q[0];
h q[1];
rzz_0(2*gamma_0) q[0], q[1];
rx(2*beta_0) q[0];
rx(2*beta_0) q[1];
barrier q[0], q[1];
meas[0] = measure q[0];
meas[1] = measure q[1];