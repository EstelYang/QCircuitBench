gate rzx_5070593376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.254155832818254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070590640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.86711560943729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  swap _gate_q_1, _gate_q_2;
  y _gate_q_3;
  ry(5.419906330465064) _gate_q_0;
  cry(2.938497895645251) _gate_q_3, _gate_q_0;
  rz(5.358950305277789) _gate_q_1;
  sdg _gate_q_2;
  t _gate_q_1;
  z _gate_q_0;
  cz _gate_q_3, _gate_q_2;
  rzx_5070593376(4.254155832818254) _gate_q_3, _gate_q_0;
  rxx_5070590640(2.86711560943729) _gate_q_2, _gate_q_1;
}
gate r_5070592080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6949671181412072, -0.3248610958119331, 0.3248610958119331) _gate_q_0;
}
gate rzx_5061823472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6263994355630575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5064324160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4028400359475626) _gate_q_0;
  u1(-1.1790889364111292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.293749771434601, 0, -1.4028400359475626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.293749771434601, 2.581928972358692, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  r_5070592080(1.6949671181412072, 1.2459352309829634) _gate_q_3;
  cx _gate_q_2, _gate_q_0;
  u2(3.909940996531047, 0.006174333774020792) _gate_q_1;
  rzx_5061823472(1.6263994355630575) _gate_q_1, _gate_q_3;
  iswap _gate_q_2, _gate_q_0;
  cu3_5064324160(2.587499542869202, 2.581928972358692, 0.22375109953643313) _gate_q_2, _gate_q_3;
  iswap _gate_q_1, _gate_q_0;
  cx _gate_q_0, _gate_q_3;
  tdg _gate_q_1;
  t _gate_q_2;
}