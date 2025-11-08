gate Psi _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  sx _gate_q_1;
  u2(0.2844856341366783, 1.014871598895414) _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1 {
  cx _gate_q_1, _gate_q_0;
  u3(1.9193392998388108, 0.2974510230714167, 0.12937695445577416) _gate_q_0;
  rx(3.050967114688745) _gate_q_1;
}