gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105152944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.475371924209337) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9085670767901743) _gate_q_0;
  ry(-2.9085670767901743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.475371924209337) _gate_q_1;
}
gate rzz_5105154720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2289723876609144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105144256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.879938957470539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105153376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0240457463787727, 3.6877296641057784, -3.6877296641057784) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  u2(0.3710853718430522, 1.7715608749583092) _gate_q_1;
  s _gate_q_2;
  xx_minus_yy_5105152944(5.817134153580349, 3.475371924209337) _gate_q_0, _gate_q_3;
  sx _gate_q_4;
  y _gate_q_4;
  rzz_5105154720(1.2289723876609144) _gate_q_0, _gate_q_1;
  t _gate_q_3;
  sx _gate_q_2;
  sx _gate_q_2;
  rzz_5105144256(4.879938957470539) _gate_q_3, _gate_q_4;
  rz(6.134399481953612) _gate_q_0;
  z _gate_q_1;
  iswap _gate_q_3, _gate_q_0;
  id _gate_q_4;
  z _gate_q_2;
  u3(2.097377492026784, 0.3343683951418391, 0.9964639679304192) _gate_q_1;
  cz _gate_q_3, _gate_q_1;
  r_5105153376(3.0240457463787727, 5.258525990900675) _gate_q_0;
  sdg _gate_q_2;
  z _gate_q_4;
}
gate xx_minus_yy_5105156064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.567788244568209) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3308290080478826) _gate_q_0;
  ry(-1.3308290080478826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.567788244568209) _gate_q_1;
}
gate cu1_5105139888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.729370285316207) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.729370285316207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.729370285316207) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  h _gate_q_4;
  sdg _gate_q_2;
  t _gate_q_3;
  ch _gate_q_1, _gate_q_0;
  u3(3.8333628067279406, 0.038418505065846174, 3.5008299104559364) _gate_q_4;
  crx(4.200091243497103) _gate_q_0, _gate_q_3;
  xx_minus_yy_5105156064(2.6616580160957652, 2.567788244568209) _gate_q_1, _gate_q_2;
  cz _gate_q_3, _gate_q_1;
  iswap _gate_q_2, _gate_q_0;
  rx(0.39583023686383306) _gate_q_4;
  ch _gate_q_4, _gate_q_1;
  cu1_5105139888(5.458740570632414) _gate_q_3, _gate_q_0;
  sdg _gate_q_2;
  cu(3.4795497552015537, 3.2737587875106566, 4.972014148874409, 2.011896173194095) _gate_q_3, _gate_q_1;
  rz(1.0224374998185939) _gate_q_4;
  cy _gate_q_2, _gate_q_0;
}