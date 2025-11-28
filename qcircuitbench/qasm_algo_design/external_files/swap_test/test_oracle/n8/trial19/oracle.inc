gate rzx_5072243408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6913108808685937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072240960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9121733884532095) _gate_q_0;
  u1(-1.8145951063171133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6544784130294008, 0, -1.9121733884532095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6544784130294008, 3.726768494770323, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5072241152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1709490046305153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072253392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.792875871328975, 1.401771005513464, -1.401771005513464) _gate_q_0;
}
gate cu1_5072244176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.493069662361962) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.493069662361962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.493069662361962) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5072240768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9314423391368198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072252144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.471287402860922, 3.655487804067427, -3.655487804067427) _gate_q_0;
}
gate rzx_5043124656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5043124704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_5043124656(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_5043124704(-pi/4) _gate_q_0, _gate_q_1;
}
gate cu3_5072248352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3822647957486587) _gate_q_0;
  u1(-0.4799259393958194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7904584879053971, 0, -2.3822647957486587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7904584879053971, 2.862190735144478, 0) _gate_q_1;
}
gate rzz_5072253968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.098614018894298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072243216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.571837414748708, 0.5661373730175798, -0.5661373730175798) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rzx_5072243408(3.6913108808685937) _gate_q_5, _gate_q_1;
  cu3_5072240960(3.3089568260588016, 3.726768494770323, 0.0975782821360963) _gate_q_0, _gate_q_7;
  ch _gate_q_6, _gate_q_3;
  iswap _gate_q_2, _gate_q_4;
  rxx_5072241152(3.1709490046305153) _gate_q_6, _gate_q_4;
  ch _gate_q_5, _gate_q_1;
  crx(4.099580710050698) _gate_q_7, _gate_q_3;
  y _gate_q_2;
  r_5072253392(1.792875871328975, 2.9725673323083606) _gate_q_0;
  cu1_5072244176(4.986139324723924) _gate_q_1, _gate_q_5;
  cry(4.0734263719226425) _gate_q_7, _gate_q_0;
  dcx _gate_q_6, _gate_q_4;
  ry(4.045203440805316) _gate_q_3;
  sxdg _gate_q_2;
  id _gate_q_4;
  sxdg _gate_q_3;
  p(0.6860772513810918) _gate_q_7;
  y _gate_q_1;
  cy _gate_q_5, _gate_q_0;
  cx _gate_q_2, _gate_q_6;
  rxx_5072240768(1.9314423391368198) _gate_q_6, _gate_q_2;
  cu(4.645988808302849, 0.5884146911653164, 4.31597885035362, 1.7218165355382509) _gate_q_1, _gate_q_5;
  cz _gate_q_0, _gate_q_7;
  ry(1.4924639388993826) _gate_q_4;
  p(4.160024608702168) _gate_q_3;
  sdg _gate_q_4;
  cu(0.8011618572752666, 2.117604802855002, 5.283182902651492, 1.309593131972823) _gate_q_7, _gate_q_2;
  r_5072252144(2.471287402860922, 5.226284130862323) _gate_q_0;
  id _gate_q_3;
  h _gate_q_6;
  cp(2.0727024582595326) _gate_q_5, _gate_q_1;
  U(6.21545405222913, 5.478541670158206, 6.177647749267757) _gate_q_2;
  s _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
  cu3_5072248352(1.5809169758107942, 2.862190735144478, 1.9023388563528394) _gate_q_1, _gate_q_5;
  u1(0.44014159384582907) _gate_q_7;
  s _gate_q_6;
  rzz_5072253968(5.098614018894298) _gate_q_0, _gate_q_2;
  sx _gate_q_4;
  cp(1.0488152232859294) _gate_q_3, _gate_q_6;
  U(0.4763224078134311, 0.22399214794055514, 2.4249469147743445) _gate_q_5;
  r_5072243216(4.571837414748708, 2.1369336998124764) _gate_q_7;
  u1(2.3938433541528314) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5072254496(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.002085810038574) _gate_q_0;
  u1(0.05710452007677658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.208884883911093, 0, -6.002085810038574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.208884883911093, 5.944981289961797, 0) _gate_q_1;
}
gate xx_minus_yy_5072246096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.592772491127285) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.007594297925606) _gate_q_0;
  ry(-1.007594297925606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.592772491127285) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5072242208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.132957222489557, 0.8815561825510692, -0.8815561825510692) _gate_q_0;
}
gate r_5072246000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4938658371059725, 3.136350208589235, -3.136350208589235) _gate_q_0;
}
gate cu3_5072465040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.854482088215164) _gate_q_0;
  u1(1.3501500100153985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.48685843676690554, 0, -2.854482088215164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.48685843676690554, 1.5043320781997653, 0) _gate_q_1;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072466864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.223661029681296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  tdg _gate_q_5;
  cs _gate_q_4, _gate_q_7;
  ch _gate_q_1, _gate_q_2;
  cu3_5072254496(4.417769767822186, 5.944981289961797, 6.05919033011535) _gate_q_3, _gate_q_0;
  x _gate_q_6;
  cs _gate_q_0, _gate_q_3;
  xx_minus_yy_5072246096(2.015188595851212, 3.592772491127285) _gate_q_1, _gate_q_5;
  csdg _gate_q_4, _gate_q_7;
  csdg _gate_q_2, _gate_q_6;
  s _gate_q_0;
  U(5.6299420233071755, 4.198253146011681, 5.065612731656016) _gate_q_3;
  cu(0.8267569511892685, 3.5481983172820106, 2.84701378666126, 3.4155526104026164) _gate_q_5, _gate_q_4;
  x _gate_q_6;
  rx(4.206528421031815) _gate_q_7;
  cry(6.271076461080623) _gate_q_2, _gate_q_1;
  z _gate_q_4;
  id _gate_q_0;
  csdg _gate_q_3, _gate_q_1;
  ry(1.857841571002591) _gate_q_7;
  t _gate_q_5;
  r_5072242208(6.132957222489557, 2.4523525093459657) _gate_q_2;
  u3(0.9675066092542964, 1.912078514569612, 3.5370386391277617) _gate_q_6;
  sxdg _gate_q_3;
  crz(5.549694815738286) _gate_q_6, _gate_q_7;
  swap _gate_q_5, _gate_q_4;
  r_5072246000(3.4938658371059725, 4.7071465353841315) _gate_q_1;
  x _gate_q_2;
  u3(5.088781159569698, 4.1455634514474164, 1.7457531212909865) _gate_q_0;
  crz(2.1644211325982474) _gate_q_7, _gate_q_2;
  rx(0.8388723438800357) _gate_q_3;
  ry(2.0819839943641383) _gate_q_4;
  cs _gate_q_5, _gate_q_1;
  cu3_5072465040(0.9737168735338111, 1.5043320781997653, 4.2046320982305625) _gate_q_0, _gate_q_6;
  sdg _gate_q_0;
  swap _gate_q_7, _gate_q_1;
  tdg _gate_q_2;
  ry(2.506998713193048) _gate_q_6;
  cy _gate_q_5, _gate_q_4;
  rx(1.5885100444328137) _gate_q_3;
  rx(2.5404860562555682) _gate_q_7;
  u3(6.112601544927818, 4.924204028148449, 5.589034678827627) _gate_q_4;
  csx _gate_q_5, _gate_q_3;
  t _gate_q_1;
  rxx_5072466864(4.223661029681296) _gate_q_2, _gate_q_0;
  rx(1.4423591205413095) _gate_q_6;
}