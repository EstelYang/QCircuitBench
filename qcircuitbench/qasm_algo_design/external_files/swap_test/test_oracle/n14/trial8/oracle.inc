gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105791392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.12238840674031, 4.3931327714108095, -4.3931327714108095) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5105781984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.422220809987817) _gate_q_0;
  u1(0.1908511426077868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2145085577360233, 0, -4.422220809987817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2145085577360233, 4.23136966738003, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5105785728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2076727717032811) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47541810582758476) _gate_q_1;
  ry(-0.47541810582758476) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2076727717032811) _gate_q_0;
}
gate rzx_5105794032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.300947120820041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105790288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6181352288563455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105778816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.403412691337452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105783664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5293330237550413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105788224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0067455370694014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105792592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.3199679014252625) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9334425671024239) _gate_q_1;
  ry(-0.9334425671024239) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.3199679014252625) _gate_q_0;
}
gate r_5105787552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.315824605542964, 4.38246520891485, -4.38246520891485) _gate_q_0;
}
gate xx_plus_yy_5105794128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5836082140464862) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8457466707325314) _gate_q_1;
  ry(-2.8457466707325314) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5836082140464862) _gate_q_0;
}
gate rzz_5105788992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1874572852392165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  u2(3.2356529660206212, 2.6572918110070103) _gate_q_2;
  rx(2.8861883020378873) _gate_q_11;
  ecr _gate_q_3, _gate_q_13;
  y _gate_q_5;
  y _gate_q_9;
  u1(0.6004803886979615) _gate_q_6;
  x _gate_q_4;
  dcx _gate_q_1, _gate_q_7;
  u2(0.565883962602897, 0.7315154002083774) _gate_q_0;
  cry(0.757869147101229) _gate_q_10, _gate_q_8;
  U(5.335699136937711, 3.0046261546775916, 6.038484601285598) _gate_q_12;
  y _gate_q_2;
  ch _gate_q_13, _gate_q_5;
  dcx _gate_q_12, _gate_q_6;
  x _gate_q_3;
  cp(1.86716040136609) _gate_q_4, _gate_q_9;
  t _gate_q_1;
  cry(5.310354610524698) _gate_q_11, _gate_q_7;
  csx _gate_q_10, _gate_q_8;
  rz(0.7807311165922669) _gate_q_0;
  s _gate_q_3;
  cz _gate_q_2, _gate_q_1;
  iswap _gate_q_10, _gate_q_6;
  cu(6.070238468821229, 6.113095060545327, 2.2662332155427483, 1.4990320851984196) _gate_q_9, _gate_q_0;
  h _gate_q_7;
  cx _gate_q_8, _gate_q_11;
  sxdg _gate_q_5;
  cry(3.7742061445021235) _gate_q_13, _gate_q_4;
  rx(1.4195914021731804) _gate_q_12;
  iswap _gate_q_1, _gate_q_5;
  u3(3.321287533305084, 2.099035494654364, 1.6700036488286478) _gate_q_6;
  rx(1.4479394905229641) _gate_q_10;
  swap _gate_q_2, _gate_q_9;
  r_5105791392(6.12238840674031, 5.963929098205706) _gate_q_11;
  cs _gate_q_3, _gate_q_4;
  iswap _gate_q_8, _gate_q_13;
  cs _gate_q_12, _gate_q_0;
  x _gate_q_7;
  csx _gate_q_12, _gate_q_2;
  cp(3.9755990437932773) _gate_q_3, _gate_q_8;
  cu3_5105781984(2.4290171154720466, 4.23136966738003, 4.613071952595604) _gate_q_9, _gate_q_6;
  z _gate_q_13;
  csdg _gate_q_0, _gate_q_7;
  u2(0.09978763491063682, 2.8418326811671886) _gate_q_10;
  sxdg _gate_q_4;
  xx_plus_yy_5105785728(0.9508362116551695, 1.2076727717032811) _gate_q_1, _gate_q_5;
  p(0.3378974670241558) _gate_q_11;
  cp(2.748227565211951) _gate_q_8, _gate_q_5;
  id _gate_q_13;
  rzx_5105794032(5.300947120820041) _gate_q_9, _gate_q_7;
  h _gate_q_4;
  dcx _gate_q_0, _gate_q_3;
  rx(6.001318560713599) _gate_q_1;
  u2(1.1322412204585053, 5.820846724642909) _gate_q_11;
  rx(1.5786018019036074) _gate_q_6;
  rxx_5105790288(2.6181352288563455) _gate_q_10, _gate_q_12;
  z _gate_q_2;
  rxx_5105778816(3.403412691337452) _gate_q_0, _gate_q_5;
  cz _gate_q_7, _gate_q_6;
  p(0.4998948264092705) _gate_q_9;
  ryy_5105783664(2.5293330237550413) _gate_q_11, _gate_q_12;
  cy _gate_q_10, _gate_q_1;
  dcx _gate_q_2, _gate_q_3;
  rz(0.8908148221328498) _gate_q_8;
  dcx _gate_q_4, _gate_q_13;
  cy _gate_q_3, _gate_q_11;
  cz _gate_q_9, _gate_q_12;
  rzx_5105788224(3.0067455370694014) _gate_q_5, _gate_q_4;
  U(0.426787603429907, 2.864105159857366, 5.265733183964307) _gate_q_8;
  h _gate_q_10;
  cz _gate_q_1, _gate_q_6;
  xx_plus_yy_5105792592(1.8668851342048478, 4.3199679014252625) _gate_q_7, _gate_q_2;
  dcx _gate_q_0, _gate_q_13;
  sdg _gate_q_9;
  cz _gate_q_12, _gate_q_0;
  p(0.5608528079998892) _gate_q_3;
  r_5105787552(4.315824605542964, 5.953261535709746) _gate_q_7;
  rz(5.016315529017596) _gate_q_8;
  xx_plus_yy_5105794128(5.691493341465063, 1.5836082140464862) _gate_q_6, _gate_q_2;
  y _gate_q_5;
  p(6.060920064290166) _gate_q_10;
  ry(3.305996574820733) _gate_q_4;
  sx _gate_q_1;
  sdg _gate_q_11;
  s _gate_q_13;
  rzz_5105788992(3.1874572852392165) _gate_q_12, _gate_q_4;
  x _gate_q_0;
  crz(3.11132112402107) _gate_q_11, _gate_q_7;
  ch _gate_q_13, _gate_q_1;
  cy _gate_q_8, _gate_q_5;
  crx(0.9757621766629286) _gate_q_9, _gate_q_2;
  swap _gate_q_3, _gate_q_6;
  h _gate_q_10;
}
gate rzx_5105790048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9641374072461435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105782800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.970698929492333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105782032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.601786597336271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105782704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8724020290808359, 1.8724720810267508, -1.8724720810267508) _gate_q_0;
}
gate cu1_5105781120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6436197475667275) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6436197475667275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6436197475667275) _gate_q_1;
}
gate cu1_5105790576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8452852041429018) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8452852041429018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8452852041429018) _gate_q_1;
}
gate xx_plus_yy_5105789136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.125463626540073) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8191450889633116) _gate_q_1;
  ry(-2.8191450889633116) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.125463626540073) _gate_q_0;
}
gate rzz_5105789904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.131847251346545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105786784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6869699960239288) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105785392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.377812318454001) _gate_q_0;
  u1(2.1335155462892703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7336828384284115, 0, -2.377812318454001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7336828384284115, 0.24429677216473025, 0) _gate_q_1;
}
gate xx_minus_yy_5105787072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8135748694469913) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4744170977800795) _gate_q_0;
  ry(-2.4744170977800795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8135748694469913) _gate_q_1;
}
gate xx_plus_yy_5105784864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.452899703608756) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4134669484355986) _gate_q_1;
  ry(-2.4134669484355986) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.452899703608756) _gate_q_0;
}
gate xx_minus_yy_5105794416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.097200949788385) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1497013890770102) _gate_q_0;
  ry(-1.1497013890770102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.097200949788385) _gate_q_1;
}
gate rzz_5105784672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.694592995766256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105788752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.671296757857173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105780736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5695645871385054) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5695645871385054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5695645871385054) _gate_q_1;
}
gate cu3_5105783952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3846644214334636) _gate_q_0;
  u1(-0.274104531371552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.664737436452521, 0, -2.3846644214334636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.664737436452521, 2.6587689528050156, 0) _gate_q_1;
}
gate cu3_5105794224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.998312472714862) _gate_q_0;
  u1(-1.2544049637356551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.17553339839230842, 0, -1.998312472714862) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.17553339839230842, 3.252717436450517, 0) _gate_q_1;
}
gate rzz_5105780448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.960923902386144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105783040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.237007456449296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  ecr _gate_q_2, _gate_q_11;
  cz _gate_q_3, _gate_q_5;
  id _gate_q_12;
  s _gate_q_8;
  rzx_5105790048(4.9641374072461435) _gate_q_10, _gate_q_0;
  rzx_5105782800(0.970698929492333) _gate_q_13, _gate_q_9;
  iswap _gate_q_1, _gate_q_6;
  u1(5.073682311312047) _gate_q_7;
  y _gate_q_4;
  z _gate_q_4;
  iswap _gate_q_3, _gate_q_13;
  u1(3.795357478511211) _gate_q_0;
  u1(3.0858511226170666) _gate_q_8;
  u1(4.472078955944767) _gate_q_1;
  z _gate_q_10;
  ch _gate_q_7, _gate_q_11;
  rxx_5105782032(5.601786597336271) _gate_q_12, _gate_q_5;
  csdg _gate_q_2, _gate_q_9;
  r_5105782704(1.8724020290808359, 3.4432684078216473) _gate_q_6;
  csx _gate_q_1, _gate_q_4;
  ecr _gate_q_9, _gate_q_6;
  z _gate_q_13;
  u3(2.308871192970631, 5.67902894439567, 6.242876832523507) _gate_q_0;
  cu1_5105781120(1.287239495133455) _gate_q_10, _gate_q_3;
  rx(0.5843197818525769) _gate_q_8;
  cx _gate_q_2, _gate_q_11;
  rx(3.8481964454622575) _gate_q_5;
  cx _gate_q_7, _gate_q_12;
  swap _gate_q_9, _gate_q_10;
  cu1_5105790576(5.6905704082858035) _gate_q_11, _gate_q_12;
  iswap _gate_q_5, _gate_q_4;
  xx_plus_yy_5105789136(5.638290177926623, 5.125463626540073) _gate_q_1, _gate_q_3;
  cy _gate_q_7, _gate_q_8;
  u2(4.806045327760104, 0.2203947151287712) _gate_q_0;
  x _gate_q_13;
  rz(2.142671152052261) _gate_q_2;
  y _gate_q_6;
  rzz_5105789904(6.131847251346545) _gate_q_8, _gate_q_13;
  U(4.866906332090815, 0.33290767300392865, 3.826751253609442) _gate_q_11;
  sxdg _gate_q_10;
  cx _gate_q_1, _gate_q_2;
  u1(6.081169898752612) _gate_q_6;
  sdg _gate_q_12;
  ryy_5105786784(1.6869699960239288) _gate_q_5, _gate_q_4;
  crz(3.5425389738802884) _gate_q_0, _gate_q_3;
  crz(0.6170731820298263) _gate_q_9, _gate_q_7;
  cu3_5105785392(5.467365676856823, 0.24429677216473025, 4.511327864743271) _gate_q_2, _gate_q_8;
  sxdg _gate_q_12;
  h _gate_q_4;
  xx_minus_yy_5105787072(4.948834195560159, 2.8135748694469913) _gate_q_9, _gate_q_0;
  csdg _gate_q_10, _gate_q_6;
  cu(6.178993297174712, 4.5244496090212865, 5.979245531533003, 2.8062630936789565) _gate_q_3, _gate_q_11;
  xx_plus_yy_5105784864(4.826933896871197, 4.452899703608756) _gate_q_13, _gate_q_1;
  y _gate_q_5;
  y _gate_q_7;
  xx_minus_yy_5105794416(2.2994027781540205, 4.097200949788385) _gate_q_10, _gate_q_6;
  cy _gate_q_2, _gate_q_7;
  rzz_5105784672(5.694592995766256) _gate_q_4, _gate_q_8;
  sx _gate_q_0;
  x _gate_q_9;
  rz(6.0841168723738575) _gate_q_13;
  rz(3.2494433532393097) _gate_q_3;
  dcx _gate_q_1, _gate_q_11;
  cx _gate_q_12, _gate_q_5;
  crz(4.261818881489507) _gate_q_4, _gate_q_13;
  h _gate_q_6;
  rzz_5105788752(3.671296757857173) _gate_q_11, _gate_q_12;
  tdg _gate_q_8;
  cp(0.38502492947776557) _gate_q_3, _gate_q_2;
  x _gate_q_9;
  p(3.669814483089924) _gate_q_7;
  sxdg _gate_q_10;
  cu1_5105780736(1.1391291742770109) _gate_q_1, _gate_q_5;
  z _gate_q_0;
  dcx _gate_q_11, _gate_q_6;
  rx(5.4377074837338295) _gate_q_12;
  s _gate_q_13;
  u1(3.911931348515537) _gate_q_3;
  t _gate_q_7;
  p(5.7011709463719855) _gate_q_4;
  cu(5.791549233281002, 1.4885757806173845, 3.060019033305704, 3.030840858996414) _gate_q_0, _gate_q_5;
  cu3_5105783952(3.329474872905042, 2.6587689528050156, 2.1105598900619116) _gate_q_10, _gate_q_1;
  cu3_5105794224(0.35106679678461683, 3.252717436450517, 0.743907508979207) _gate_q_2, _gate_q_8;
  rz(1.0604972589682327) _gate_q_9;
  cy _gate_q_2, _gate_q_7;
  rzz_5105780448(2.960923902386144) _gate_q_5, _gate_q_0;
  x _gate_q_12;
  iswap _gate_q_6, _gate_q_11;
  cs _gate_q_9, _gate_q_3;
  rzx_5105783040(5.237007456449296) _gate_q_10, _gate_q_4;
  z _gate_q_13;
  sdg _gate_q_8;
  p(2.033472471297942) _gate_q_1;
}