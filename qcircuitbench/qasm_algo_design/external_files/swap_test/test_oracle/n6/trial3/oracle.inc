gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105440464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8118256340954195) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5374760695316348) _gate_q_0;
  ry(-0.5374760695316348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8118256340954195) _gate_q_1;
}
gate rzz_5105445552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.67709244957028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105439552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.08167533244560923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105444064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6509503915393733) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6509503915393733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6509503915393733) _gate_q_1;
}
gate ryy_5105440512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9468170647945278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  x _gate_q_2;
  tdg _gate_q_1;
  x _gate_q_5;
  U(1.3794949776414664, 1.5784941299522162, 1.763016586422277) _gate_q_0;
  cs _gate_q_4, _gate_q_3;
  cz _gate_q_4, _gate_q_1;
  crz(4.369144013826571) _gate_q_3, _gate_q_0;
  xx_minus_yy_5105440464(1.0749521390632697, 3.8118256340954195) _gate_q_5, _gate_q_2;
  sdg _gate_q_5;
  rzz_5105445552(1.67709244957028) _gate_q_1, _gate_q_3;
  u2(5.389525270124546, 5.125307800279075) _gate_q_0;
  cx _gate_q_4, _gate_q_2;
  ryy_5105439552(0.08167533244560923) _gate_q_2, _gate_q_3;
  id _gate_q_0;
  rx(6.151524581626232) _gate_q_5;
  U(4.761005166919679, 0.207574644473166, 3.5547380269918367) _gate_q_1;
  sdg _gate_q_4;
  cu1_5105444064(5.301900783078747) _gate_q_3, _gate_q_1;
  ryy_5105440512(3.9468170647945278) _gate_q_5, _gate_q_2;
  tdg _gate_q_4;
  ry(4.408082406181557) _gate_q_0;
  iswap _gate_q_3, _gate_q_5;
  rx(4.622746405467331) _gate_q_2;
  h _gate_q_0;
  cx _gate_q_4, _gate_q_1;
}
gate xx_minus_yy_5105278832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.96073192707896) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2509943245077786) _gate_q_0;
  ry(-1.2509943245077786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.96073192707896) _gate_q_1;
}
gate rzx_5105276192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.648113137330502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105274320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2438596696183175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105280272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1986748093353925) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.23924394727993434) _gate_q_1;
  ry(-0.23924394727993434) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1986748093353925) _gate_q_0;
}
gate rzx_5105278784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9792024899403213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cz _gate_q_1, _gate_q_3;
  ch _gate_q_0, _gate_q_5;
  xx_minus_yy_5105278832(2.501988649015557, 5.96073192707896) _gate_q_4, _gate_q_2;
  rzx_5105276192(4.648113137330502) _gate_q_3, _gate_q_4;
  ry(0.19647888340610725) _gate_q_0;
  tdg _gate_q_1;
  crx(0.8331221963983286) _gate_q_5, _gate_q_2;
  s _gate_q_4;
  tdg _gate_q_1;
  cx _gate_q_2, _gate_q_5;
  swap _gate_q_3, _gate_q_0;
  p(6.121611781641758) _gate_q_1;
  u3(2.754371404338634, 5.133137471266407, 2.1447088158689938) _gate_q_4;
  cx _gate_q_3, _gate_q_2;
  ryy_5105274320(1.2438596696183175) _gate_q_5, _gate_q_0;
  p(1.1180447119071883) _gate_q_3;
  rx(0.7253234168092757) _gate_q_5;
  y _gate_q_2;
  xx_plus_yy_5105280272(0.4784878945598687, 2.1986748093353925) _gate_q_4, _gate_q_1;
  h _gate_q_0;
  crx(4.855197579668328) _gate_q_0, _gate_q_1;
  ry(5.584989825833675) _gate_q_5;
  rzx_5105278784(1.9792024899403213) _gate_q_3, _gate_q_4;
  x _gate_q_2;
}