OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Diffuser _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  h _gate_q_3;
  mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3;
  h _gate_q_3;
  x _gate_q_0;
  x _gate_q_1;
  x _gate_q_2;
  x _gate_q_3;
  h _gate_q_0;
  h _gate_q_1;
  h _gate_q_2;
  h _gate_q_3;
}
qubit[4] q;
Diffuser q[0], q[1], q[2], q[3];
