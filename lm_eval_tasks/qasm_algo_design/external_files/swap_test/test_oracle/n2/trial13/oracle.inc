gate Psi _gate_q_0, _gate_q_1 {
  cz _gate_q_1, _gate_q_0;
  crx(2.096747358569029) _gate_q_0, _gate_q_1;
}
gate rzz_5069422864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0933117823665084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1 {
  rx(0.36061222273011373) _gate_q_0;
  rx(3.455199107188893) _gate_q_1;
  rzz_5069422864(3.0933117823665084) _gate_q_0, _gate_q_1;
}