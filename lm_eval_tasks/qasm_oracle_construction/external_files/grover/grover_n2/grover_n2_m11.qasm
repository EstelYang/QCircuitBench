OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate Oracle _gate_q_0, _gate_q_1 {
  cz _gate_q_0, _gate_q_1;
}
qubit[2] q;
Oracle q[0], q[1];
