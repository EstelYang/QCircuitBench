OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2 {
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  ccz _gate_q_0, _gate_q_1, _gate_q_2;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
}
qubit[3] q;
Oracle q[0], q[1], q[2];
