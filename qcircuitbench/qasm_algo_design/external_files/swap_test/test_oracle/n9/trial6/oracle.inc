gate r_5105144928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.125189366760085, 3.952750873535005, -3.952750873535005) _gate_q_0;
}
gate cu1_5105144784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.490913567101246) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.490913567101246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.490913567101246) _gate_q_1;
}
gate rxx_5105144400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.423631461293046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105152176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.754224142852049, 1.1045388709977821, -1.1045388709977821) _gate_q_0;
}
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
gate rzx_5105142240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5256080157208859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105140272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5791528953161422) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5791528953161422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5791528953161422) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105151024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.027413129337219, 0.7118156303751637, -0.7118156303751637) _gate_q_0;
}
gate rzx_5105141520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.167770791121454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105144544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7579301377222298) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.539263147155666) _gate_q_1;
  ry(-0.539263147155666) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7579301377222298) _gate_q_0;
}
gate rzz_5105155680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.39532904902534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105147040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.127415200190906) _gate_q_1;
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
gate cu3_5105151936(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0315065004059873) _gate_q_0;
  u1(-0.8180125997630525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5231800328596623, 0, -1.0315065004059873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5231800328596623, 1.8495191001690399, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  swap _gate_q_0, _gate_q_3;
  s _gate_q_1;
  id _gate_q_6;
  r_5105144928(4.125189366760085, 5.523547200329902) _gate_q_4;
  tdg _gate_q_8;
  cu(6.2175607245897755, 3.3984405979690844, 2.1728560379281867, 3.37353410540795) _gate_q_5, _gate_q_2;
  s _gate_q_7;
  cx _gate_q_2, _gate_q_7;
  cu1_5105144784(4.981827134202492) _gate_q_6, _gate_q_5;
  t _gate_q_8;
  h _gate_q_4;
  rxx_5105144400(2.423631461293046) _gate_q_1, _gate_q_0;
  sdg _gate_q_3;
  ch _gate_q_5, _gate_q_3;
  sdg _gate_q_0;
  s _gate_q_2;
  dcx _gate_q_8, _gate_q_1;
  p(4.721807513182426) _gate_q_4;
  ry(0.604354232963611) _gate_q_7;
  p(3.6290154443355807) _gate_q_6;
  cry(3.618395447836638) _gate_q_7, _gate_q_5;
  r_5105152176(3.754224142852049, 2.6753351977926787) _gate_q_1;
  p(1.557000102643223) _gate_q_0;
  u3(2.6951617129663816, 6.0127838157421305, 5.032881476289375) _gate_q_2;
  rx(2.6921177989690874) _gate_q_8;
  rz(3.3825558066979804) _gate_q_3;
  ecr _gate_q_4, _gate_q_6;
  x _gate_q_4;
  cx _gate_q_5, _gate_q_0;
  rzx_5105142240(0.5256080157208859) _gate_q_2, _gate_q_7;
  t _gate_q_1;
  cu1_5105140272(3.1583057906322844) _gate_q_8, _gate_q_3;
  id _gate_q_6;
  csx _gate_q_8, _gate_q_1;
  sxdg _gate_q_4;
  crx(0.45071793815570127) _gate_q_7, _gate_q_6;
  r_5105151024(6.027413129337219, 2.2826119571700603) _gate_q_2;
  id _gate_q_0;
  h _gate_q_3;
  t _gate_q_5;
  p(2.7124995543441637) _gate_q_0;
  rzx_5105141520(6.167770791121454) _gate_q_4, _gate_q_1;
  xx_plus_yy_5105144544(1.078526294311332, 0.7579301377222298) _gate_q_7, _gate_q_5;
  cry(0.21101748399852127) _gate_q_8, _gate_q_3;
  sx _gate_q_6;
  p(1.7491817479164136) _gate_q_2;
  rzz_5105155680(4.39532904902534) _gate_q_8, _gate_q_4;
  sdg _gate_q_7;
  ryy_5105147040(4.127415200190906) _gate_q_3, _gate_q_5;
  iswap _gate_q_6, _gate_q_0;
  swap _gate_q_1, _gate_q_2;
  swap _gate_q_2, _gate_q_6;
  cu3_5105151936(3.0463600657193246, 1.8495191001690399, 0.21349390064293478) _gate_q_1, _gate_q_8;
  U(0.016392535974421987, 5.165510432278717, 2.318336892529206) _gate_q_5;
  tdg _gate_q_7;
  cx _gate_q_0, _gate_q_4;
  u3(5.924993637013609, 4.643819614851619, 0.42993039730659516) _gate_q_3;
}
gate rzx_5105279984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.524794170082418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105279600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4754439457326733) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4754439457326733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4754439457326733) _gate_q_1;
}
gate cu3_5105272016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8315925190702844) _gate_q_0;
  u1(0.6885767265090796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4819487870202501, 0, -1.8315925190702844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4819487870202501, 1.1430157925612048, 0) _gate_q_1;
}
gate cu3_5105281280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7298325800123564) _gate_q_0;
  u1(2.3836667873219675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.25129889544839873, 0, -3.7298325800123564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.25129889544839873, 1.3461657926903892, 0) _gate_q_1;
}
gate cu3_5105278832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.586466911316237) _gate_q_0;
  u1(1.0251314385812824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5801428231519807, 0, -4.586466911316237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5801428231519807, 3.561335472734955, 0) _gate_q_1;
}
gate xx_minus_yy_5105285120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.574018279541839) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5812796481709628) _gate_q_0;
  ry(-0.5812796481709628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.574018279541839) _gate_q_1;
}
gate r_5105282288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3324666940117513, 0.31171895454610543, -0.31171895454610543) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  t _gate_q_3;
  rz(4.622371158988787) _gate_q_5;
  rzx_5105279984(3.524794170082418) _gate_q_0, _gate_q_7;
  sdg _gate_q_6;
  h _gate_q_2;
  sxdg _gate_q_8;
  rx(0.522794042334341) _gate_q_4;
  z _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  cp(0.27321204550008704) _gate_q_6, _gate_q_2;
  sdg _gate_q_3;
  crz(1.8018814511737116) _gate_q_5, _gate_q_8;
  u1(0.5438925615960828) _gate_q_4;
  y _gate_q_7;
  cry(3.963120845367512) _gate_q_4, _gate_q_3;
  sxdg _gate_q_2;
  u1(4.800224234380545) _gate_q_1;
  s _gate_q_0;
  cu1_5105279600(0.9508878914653466) _gate_q_8, _gate_q_6;
  u1(4.644610519212865) _gate_q_7;
  x _gate_q_5;
  u3(1.4974702584991333, 5.651538106239449, 6.104379892750391) _gate_q_6;
  crx(0.7766437394746505) _gate_q_7, _gate_q_1;
  cu3_5105272016(0.9638975740405002, 1.1430157925612048, 2.520169245579364) _gate_q_8, _gate_q_0;
  p(0.639108920332973) _gate_q_3;
  U(0.631933863217129, 1.710765591848825, 1.1699454724828195) _gate_q_2;
  t _gate_q_4;
  id _gate_q_5;
  cu(5.261817005052413, 5.384856588756036, 0.42973238871533853, 4.21409688301443) _gate_q_7, _gate_q_5;
  tdg _gate_q_4;
  x _gate_q_2;
  s _gate_q_1;
  rz(4.888998024253446) _gate_q_6;
  t _gate_q_0;
  ry(5.536030340079433) _gate_q_8;
  id _gate_q_3;
  id _gate_q_0;
  cu3_5105281280(0.5025977908967975, 1.3461657926903892, 6.113499367334324) _gate_q_7, _gate_q_2;
  crz(2.2607943947762354) _gate_q_6, _gate_q_3;
  dcx _gate_q_5, _gate_q_8;
  s _gate_q_1;
  p(5.2681678070366535) _gate_q_4;
  cu3_5105278832(3.1602856463039615, 3.561335472734955, 5.61159834989752) _gate_q_1, _gate_q_8;
  crz(0.3970258025201232) _gate_q_6, _gate_q_7;
  y _gate_q_2;
  s _gate_q_5;
  z _gate_q_3;
  xx_minus_yy_5105285120(1.1625592963419256, 3.574018279541839) _gate_q_4, _gate_q_0;
  cp(3.6337003214182704) _gate_q_1, _gate_q_7;
  crx(3.5294606838154876) _gate_q_3, _gate_q_5;
  h _gate_q_0;
  swap _gate_q_2, _gate_q_8;
  y _gate_q_6;
  s _gate_q_4;
  swap _gate_q_4, _gate_q_8;
  u3(4.186045926182571, 2.171368033922217, 1.0133261956007913) _gate_q_3;
  r_5105282288(2.3324666940117513, 1.882515281341002) _gate_q_2;
  z _gate_q_1;
  u3(5.8799598346861845, 4.355416567347326, 2.223647549439726) _gate_q_7;
  csx _gate_q_0, _gate_q_5;
  s _gate_q_6;
}