gate rzz_5070858160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5769644555177393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070855424(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.723473732432954) _gate_q_0;
  u1(2.554254447333689) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6512999105902937, 0, -3.723473732432954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6512999105902937, 1.1692192850992649, 0) _gate_q_1;
}
gate ryy_5070860368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.34632312450141) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5070802336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.45138065185956, 2.8122373035197787, -2.8122373035197787) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  rzz_5070858160(1.5769644555177393) _gate_q_4, _gate_q_2;
  sx _gate_q_0;
  y _gate_q_3;
  dcx _gate_q_5, _gate_q_1;
  cu3_5070855424(1.3025998211805874, 1.1692192850992649, 6.277728179766643) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  z _gate_q_0;
  u3(3.664811052709887, 5.929135609994662, 2.0655746859169297) _gate_q_2;
  ryy_5070860368(5.34632312450141) _gate_q_4, _gate_q_3;
  ry(3.0176092582536556) _gate_q_0;
  x _gate_q_2;
  u1(1.423655221335236) _gate_q_5;
  rx(0.8061958976423801) _gate_q_1;
  iswap _gate_q_0, _gate_q_3;
  crx(1.9290800840685327) _gate_q_4, _gate_q_1;
  x _gate_q_5;
  sxdg _gate_q_2;
  p(1.228626226595998) _gate_q_4;
  swap _gate_q_3, _gate_q_5;
  sxdg _gate_q_1;
  cp(0.40860216224237733) _gate_q_0, _gate_q_2;
  tdg _gate_q_0;
  tdg _gate_q_3;
  crx(5.509543370250297) _gate_q_1, _gate_q_2;
  U(2.1661781675577894, 5.473956371709592, 3.3711949285865295) _gate_q_5;
  r_5070802336(4.45138065185956, 4.383033630314675) _gate_q_4;
}
gate r_5070805216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8741764050666252, -1.06972559924534, 1.06972559924534) _gate_q_0;
}
gate rzz_5070807712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.910411145357911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070804400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.961185028034361) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.103140401565778) _gate_q_1;
  ry(-3.103140401565778) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.961185028034361) _gate_q_0;
}
gate xx_minus_yy_5070810688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.32074025037122) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.636711820833237) _gate_q_0;
  ry(-2.636711820833237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.32074025037122) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  r_5070805216(0.8741764050666252, 0.5010707275495566) _gate_q_5;
  rzz_5070807712(5.910411145357911) _gate_q_3, _gate_q_1;
  p(0.8964918979724229) _gate_q_0;
  ry(4.6657746449133) _gate_q_4;
  rx(2.7793374333030427) _gate_q_2;
  sdg _gate_q_2;
  crz(0.681483334752657) _gate_q_1, _gate_q_0;
  xx_plus_yy_5070804400(6.206280803131556, 4.961185028034361) _gate_q_4, _gate_q_5;
  u3(6.24019180772611, 4.835069730537814, 4.741768823105661) _gate_q_3;
  u1(0.4235790682973394) _gate_q_4;
  sdg _gate_q_5;
  sxdg _gate_q_0;
  dcx _gate_q_2, _gate_q_1;
  x _gate_q_3;
  dcx _gate_q_2, _gate_q_0;
  cy _gate_q_1, _gate_q_4;
  ry(3.2316788062853883) _gate_q_5;
  h _gate_q_3;
  sxdg _gate_q_3;
  u3(5.337015920181506, 4.577842395969942, 4.833137677554805) _gate_q_5;
  crz(4.139281496990221) _gate_q_0, _gate_q_4;
  tdg _gate_q_2;
  p(6.160003538874627) _gate_q_1;
  dcx _gate_q_0, _gate_q_2;
  xx_minus_yy_5070810688(5.273423641666474, 4.32074025037122) _gate_q_5, _gate_q_1;
  U(2.592093738456953, 0.6318251061262056, 4.046809780034693) _gate_q_3;
  z _gate_q_4;
}