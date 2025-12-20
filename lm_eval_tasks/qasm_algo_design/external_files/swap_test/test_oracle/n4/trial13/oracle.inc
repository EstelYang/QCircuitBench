gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5070429872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2035446336716942) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cz _gate_q_1, _gate_q_3;
  swap _gate_q_2, _gate_q_0;
  sdg _gate_q_0;
  dcx _gate_q_1, _gate_q_2;
  z _gate_q_3;
  iswap _gate_q_2, _gate_q_3;
  cu(3.5063773783895824, 0.40129598250932724, 2.9048326686736736, 6.149984537721204) _gate_q_0, _gate_q_1;
  rzx_5070429872(1.2035446336716942) _gate_q_3, _gate_q_1;
  s _gate_q_0;
  sxdg _gate_q_2;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  z _gate_q_1;
  sdg _gate_q_2;
  sdg _gate_q_0;
  ry(2.4213641958765773) _gate_q_3;
  cz _gate_q_2, _gate_q_0;
  id _gate_q_3;
  y _gate_q_1;
  y _gate_q_3;
  cs _gate_q_1, _gate_q_0;
  sxdg _gate_q_2;
  crx(4.447515371410088) _gate_q_3, _gate_q_1;
  dcx _gate_q_2, _gate_q_0;
}