gate cu1_5106011648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0048618597299208) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0048618597299208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0048618597299208) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106016304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.330151587717909) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.784531457447302) _gate_q_0;
  ry(-0.784531457447302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.330151587717909) _gate_q_1;
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
gate rxx_5106018944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.384733076690576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5106010832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9485308567504372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rxx_5106019232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0691252877467847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106013328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0049607883818517) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5641070453971134) _gate_q_0;
  ry(-0.5641070453971134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0049607883818517) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5106020192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35056307502137396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106012320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2867796233523095, 4.221133612858104, -4.221133612858104) _gate_q_0;
}
gate rzx_5106014288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.729269350344539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106022880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.642442860510492) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106013856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7246937565227247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106016976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.077681839684395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106016640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.046196809584867) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.26562501683073686) _gate_q_1;
  ry(-0.26562501683073686) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.046196809584867) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5106014000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6873575821072215) _gate_q_0;
  u1(0.4517876603529418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1030084127938253, 0, -2.6873575821072215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1030084127938253, 2.23556992175428, 0) _gate_q_1;
}
gate cu3_5106020576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.659187184654597) _gate_q_0;
  u1(-0.011482373833453074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9408361512635175, 0, -5.659187184654597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9408361512635175, 5.67066955848805, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  rz(6.231062816256586) _gate_q_0;
  cu1_5106011648(2.0097237194598416) _gate_q_14, _gate_q_16;
  crx(4.774072690336035) _gate_q_5, _gate_q_7;
  id _gate_q_8;
  s _gate_q_10;
  z _gate_q_13;
  cx _gate_q_4, _gate_q_3;
  t _gate_q_1;
  crx(5.9133110069926715) _gate_q_15, _gate_q_2;
  rx(4.038993320543203) _gate_q_9;
  u3(2.0623042754792777, 5.6568861757523194, 6.25895729073734) _gate_q_12;
  xx_minus_yy_5106016304(1.569062914894604, 5.330151587717909) _gate_q_11, _gate_q_6;
  ecr _gate_q_8, _gate_q_5;
  tdg _gate_q_11;
  ry(2.310614786649926) _gate_q_1;
  rxx_5106018944(2.384733076690576) _gate_q_2, _gate_q_14;
  y _gate_q_7;
  z _gate_q_4;
  id _gate_q_10;
  dcx _gate_q_16, _gate_q_9;
  cu(1.5359169126485537, 3.533744011660845, 2.829569558989064, 3.7852327283799556) _gate_q_15, _gate_q_13;
  rzx_5106010832(0.9485308567504372) _gate_q_3, _gate_q_0;
  csx _gate_q_12, _gate_q_6;
  crz(5.554457267892665) _gate_q_8, _gate_q_4;
  cy _gate_q_5, _gate_q_3;
  crx(2.815302988441274) _gate_q_14, _gate_q_0;
  rxx_5106019232(2.0691252877467847) _gate_q_13, _gate_q_15;
  xx_minus_yy_5106013328(1.1282140907942269, 1.0049607883818517) _gate_q_1, _gate_q_10;
  cu(2.7455941637575854, 3.4143508884101124, 6.029140345484383, 0.8016511471927139) _gate_q_9, _gate_q_16;
  cy _gate_q_7, _gate_q_11;
  ry(3.2442071229562104) _gate_q_2;
  ry(4.189736670132835) _gate_q_6;
  y _gate_q_12;
  tdg _gate_q_16;
  csdg _gate_q_7, _gate_q_11;
  cx _gate_q_14, _gate_q_3;
  u1(3.982868220520953) _gate_q_1;
  crx(5.409328917438333) _gate_q_6, _gate_q_9;
  u2(1.2540267415964126, 1.759237009598459) _gate_q_15;
  cry(5.688761809652129) _gate_q_4, _gate_q_5;
  u1(2.9555139798717924) _gate_q_13;
  rzx_5106020192(0.35056307502137396) _gate_q_0, _gate_q_2;
  rx(5.603713600118196) _gate_q_8;
  csx _gate_q_10, _gate_q_12;
  u3(4.3277136505249, 3.1761231443635523, 1.7550908494858337) _gate_q_4;
  csdg _gate_q_6, _gate_q_13;
  swap _gate_q_8, _gate_q_16;
  s _gate_q_15;
  z _gate_q_12;
  cry(4.959861013659595) _gate_q_5, _gate_q_7;
  cz _gate_q_14, _gate_q_2;
  dcx _gate_q_9, _gate_q_1;
  r_5106012320(0.2867796233523095, 5.791929939653) _gate_q_10;
  dcx _gate_q_3, _gate_q_11;
  h _gate_q_0;
  cy _gate_q_3, _gate_q_6;
  z _gate_q_15;
  sx _gate_q_13;
  t _gate_q_11;
  ch _gate_q_7, _gate_q_12;
  p(0.12467683080796234) _gate_q_14;
  cp(1.216852642569842) _gate_q_16, _gate_q_4;
  x _gate_q_0;
  rzx_5106014288(3.729269350344539) _gate_q_10, _gate_q_9;
  crx(0.746091498622512) _gate_q_8, _gate_q_2;
  cu(4.968213216811905, 0.10363225577914638, 0.7544145020292766, 0.7196662505759408) _gate_q_5, _gate_q_1;
  x _gate_q_15;
  ch _gate_q_4, _gate_q_12;
  rzx_5106022880(2.642442860510492) _gate_q_16, _gate_q_5;
  y _gate_q_7;
  u2(0.1637546347877369, 4.441251481252959) _gate_q_8;
  rzx_5106013856(3.7246937565227247) _gate_q_10, _gate_q_11;
  sx _gate_q_0;
  tdg _gate_q_14;
  cx _gate_q_6, _gate_q_3;
  csdg _gate_q_9, _gate_q_1;
  rzx_5106016976(4.077681839684395) _gate_q_2, _gate_q_13;
  sx _gate_q_13;
  rx(0.6199372877087879) _gate_q_7;
  y _gate_q_3;
  tdg _gate_q_14;
  xx_plus_yy_5106016640(0.5312500336614737, 5.046196809584867) _gate_q_6, _gate_q_2;
  x _gate_q_15;
  id _gate_q_11;
  u1(0.391306837709999) _gate_q_0;
  ch _gate_q_9, _gate_q_4;
  crz(4.8441342422227756) _gate_q_16, _gate_q_10;
  cx _gate_q_12, _gate_q_5;
  cu(2.02952640863596, 3.256674648857723, 4.666071068711605, 1.0993499890555616) _gate_q_8, _gate_q_1;
  crz(5.993197264240217) _gate_q_9, _gate_q_10;
  cx _gate_q_7, _gate_q_11;
  cy _gate_q_16, _gate_q_14;
  id _gate_q_2;
  csx _gate_q_15, _gate_q_3;
  U(1.3562937060879672, 6.041398927211568, 5.620827913472603) _gate_q_1;
  ecr _gate_q_13, _gate_q_6;
  cz _gate_q_0, _gate_q_4;
  cz _gate_q_8, _gate_q_12;
  t _gate_q_5;
  ecr _gate_q_10, _gate_q_1;
  sdg _gate_q_5;
  cs _gate_q_15, _gate_q_14;
  cu3_5106014000(2.2060168255876507, 2.23556992175428, 3.1391452424601636) _gate_q_11, _gate_q_0;
  cz _gate_q_9, _gate_q_16;
  crz(1.8447086972098325) _gate_q_3, _gate_q_6;
  cu3_5106020576(3.881672302527035, 5.67066955848805, 5.647704810821144) _gate_q_12, _gate_q_2;
  U(5.64164099365823, 1.5645557772473735, 3.0730993846212544) _gate_q_7;
  cx _gate_q_8, _gate_q_4;
  p(1.0641437855851326) _gate_q_13;
}
gate rxx_5105864288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.787276200198742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105862416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3955452096614653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105875472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.102818117647344) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.096584618778386) _gate_q_1;
  ry(-2.096584618778386) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.102818117647344) _gate_q_0;
}
gate rzx_5105875328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.81695125806429) _gate_q_1;
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
gate r_5105873168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8823248101471776, 4.64633995351044, -4.64633995351044) _gate_q_0;
}
gate r_5105869520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9929066226671257, -0.4651848379205903, 0.4651848379205903) _gate_q_0;
}
gate rzz_5105874560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.469201555906463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105872736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.694154685253281) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105861552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7918391537590217) _gate_q_0;
  u1(0.22983413045511897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0898328029877444, 0, -0.7918391537590217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0898328029877444, 0.5620050233039028, 0) _gate_q_1;
}
gate ryy_5105870720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.136459736605829) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106113408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1323335939126158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106122528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.024844442408032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106117344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.6620739423581674) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0910025081789225) _gate_q_0;
  ry(-1.0910025081789225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.6620739423581674) _gate_q_1;
}
gate xx_plus_yy_5106109904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6283237120988425) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6491725278487794) _gate_q_1;
  ry(-2.6491725278487794) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6283237120988425) _gate_q_0;
}
gate cu1_5106118400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9520909671941444) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9520909671941444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9520909671941444) _gate_q_1;
}
gate cu3_5106106784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.697085184025322) _gate_q_0;
  u1(0.685200643349468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.078708272955384, 0, -2.697085184025322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.078708272955384, 2.011884540675854, 0) _gate_q_1;
}
gate rzz_5106121472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.096227118528499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106117728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.531765053080408, 0.8400601947276272, -0.8400601947276272) _gate_q_0;
}
gate r_5106110000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.694140128361774, 1.6371172552003315, -1.6371172552003315) _gate_q_0;
}
gate cu3_5106121664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.2469597081242485) _gate_q_0;
  u1(-0.08825864790429705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8114825152186145, 0, -4.2469597081242485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8114825152186145, 4.3352183560285455, 0) _gate_q_1;
}
gate rzx_5106109184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6332081508916331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106110624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.045499844103251) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.045499844103251) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.045499844103251) _gate_q_1;
}
gate xx_plus_yy_5106117248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.24079429433473426) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9145711940696989) _gate_q_1;
  ry(-0.9145711940696989) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.24079429433473426) _gate_q_0;
}
gate rzz_5106119120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.745003388268366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106108704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9845818366793115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106120080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.08358175014924041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106118832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.10728192995214966, 1.2185939888992774, -1.2185939888992774) _gate_q_0;
}
gate xx_minus_yy_5106113456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.072121540979462) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4815981094544) _gate_q_0;
  ry(-1.4815981094544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.072121540979462) _gate_q_1;
}
gate ryy_5117024816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.507342490145676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  csx _gate_q_7, _gate_q_9;
  y _gate_q_3;
  rxx_5105864288(3.787276200198742) _gate_q_12, _gate_q_8;
  csx _gate_q_15, _gate_q_0;
  dcx _gate_q_4, _gate_q_5;
  cry(1.794029283991888) _gate_q_6, _gate_q_11;
  u3(0.5710002698012867, 5.737429527369576, 0.9405666809884609) _gate_q_13;
  rz(1.5762246807418125) _gate_q_10;
  rxx_5105862416(1.3955452096614653) _gate_q_16, _gate_q_2;
  xx_plus_yy_5105875472(4.193169237556772, 2.102818117647344) _gate_q_1, _gate_q_14;
  rzx_5105875328(1.81695125806429) _gate_q_10, _gate_q_1;
  rx(3.253069987861233) _gate_q_14;
  iswap _gate_q_9, _gate_q_11;
  r_5105873168(0.8823248101471776, 6.217136280305336) _gate_q_4;
  swap _gate_q_7, _gate_q_15;
  r_5105869520(0.9929066226671257, 1.1056114888743063) _gate_q_12;
  rzz_5105874560(5.469201555906463) _gate_q_5, _gate_q_0;
  U(1.062096079423013, 3.9760197305309526, 5.485617009364218) _gate_q_2;
  ecr _gate_q_3, _gate_q_6;
  crz(0.48803777724878306) _gate_q_13, _gate_q_8;
  U(0.7383544991308858, 0.7483540833605549, 0.2710929951393322) _gate_q_16;
  rzz_5105872736(4.694154685253281) _gate_q_4, _gate_q_10;
  crz(5.17136440470997) _gate_q_8, _gate_q_14;
  cu3_5105861552(2.179665605975489, 0.5620050233039028, 1.0216732842141407) _gate_q_15, _gate_q_5;
  ryy_5105870720(6.136459736605829) _gate_q_3, _gate_q_6;
  cp(3.460765612743569) _gate_q_7, _gate_q_9;
  z _gate_q_2;
  csx _gate_q_12, _gate_q_16;
  ch _gate_q_13, _gate_q_0;
  swap _gate_q_11, _gate_q_1;
  cry(1.0786707730527314) _gate_q_12, _gate_q_6;
  U(4.493968554760768, 0.3107002471070285, 5.423646480302006) _gate_q_1;
  swap _gate_q_4, _gate_q_15;
  u3(3.4432231869570233, 0.8844460977273004, 4.598896797425192) _gate_q_0;
  cu(1.3267791961942856, 4.799684245585201, 2.275965324749843, 4.961621139976178) _gate_q_8, _gate_q_13;
  rxx_5106113408(1.1323335939126158) _gate_q_3, _gate_q_14;
  U(2.10992717604268, 1.1422520499966968, 2.4553496218612754) _gate_q_10;
  rzz_5106122528(6.024844442408032) _gate_q_16, _gate_q_2;
  ch _gate_q_7, _gate_q_5;
  t _gate_q_11;
  s _gate_q_9;
  ry(5.394791493255054) _gate_q_1;
  z _gate_q_3;
  cp(6.115246595842445) _gate_q_9, _gate_q_14;
  id _gate_q_11;
  csx _gate_q_8, _gate_q_4;
  xx_minus_yy_5106117344(2.182005016357845, 2.6620739423581674) _gate_q_7, _gate_q_12;
  xx_plus_yy_5106109904(5.298345055697559, 1.6283237120988425) _gate_q_0, _gate_q_5;
  z _gate_q_16;
  t _gate_q_2;
  cz _gate_q_10, _gate_q_15;
  swap _gate_q_6, _gate_q_13;
  cu1_5106118400(5.904181934388289) _gate_q_0, _gate_q_16;
  U(3.7622593162883824, 1.7578525959836857, 5.182273311525999) _gate_q_3;
  cu3_5106106784(6.157416545910768, 2.011884540675854, 3.38228582737479) _gate_q_11, _gate_q_8;
  rzz_5106121472(6.096227118528499) _gate_q_7, _gate_q_6;
  cx _gate_q_1, _gate_q_12;
  rz(5.8829960260758485) _gate_q_4;
  iswap _gate_q_10, _gate_q_9;
  r_5106117728(5.531765053080408, 2.4108565215225237) _gate_q_5;
  r_5106110000(4.694140128361774, 3.207913581995228) _gate_q_13;
  crz(5.344549995788617) _gate_q_2, _gate_q_14;
  u3(2.5565533828856, 0.09566592523495095, 1.461471375125122) _gate_q_15;
  U(5.647669341214127, 1.6438131172792272, 3.9664490702131743) _gate_q_14;
  cx _gate_q_15, _gate_q_9;
  cu3_5106121664(3.622965030437229, 4.3352183560285455, 4.1587010602199515) _gate_q_1, _gate_q_10;
  swap _gate_q_2, _gate_q_0;
  s _gate_q_3;
  cy _gate_q_13, _gate_q_8;
  x _gate_q_4;
  rzx_5106109184(0.6332081508916331) _gate_q_5, _gate_q_11;
  ry(6.26691349699842) _gate_q_16;
  dcx _gate_q_7, _gate_q_12;
  U(0.442332316033657, 0.0949962849951246, 2.3156657915997747) _gate_q_6;
  cu1_5106110624(6.090999688206502) _gate_q_0, _gate_q_9;
  xx_plus_yy_5106117248(1.8291423881393978, 0.24079429433473426) _gate_q_1, _gate_q_6;
  y _gate_q_14;
  rz(0.23602263096096007) _gate_q_16;
  z _gate_q_2;
  tdg _gate_q_12;
  cx _gate_q_15, _gate_q_7;
  cu(0.8166546336622105, 4.013159249844661, 1.9782243022306987, 3.5605530485295116) _gate_q_5, _gate_q_3;
  rz(4.512132331870005) _gate_q_11;
  sxdg _gate_q_4;
  sxdg _gate_q_13;
  cx _gate_q_10, _gate_q_8;
  rzz_5106119120(5.745003388268366) _gate_q_16, _gate_q_10;
  ry(5.204345169069944) _gate_q_1;
  rzx_5106108704(3.9845818366793115) _gate_q_12, _gate_q_8;
  rxx_5106120080(0.08358175014924041) _gate_q_2, _gate_q_15;
  x _gate_q_9;
  ry(5.022214248582637) _gate_q_13;
  cp(1.5048576139732515) _gate_q_7, _gate_q_3;
  ry(0.041493302517792596) _gate_q_0;
  csx _gate_q_6, _gate_q_4;
  sx _gate_q_14;
  crz(4.51517342873191) _gate_q_5, _gate_q_11;
  r_5106118832(0.10728192995214966, 2.789390315694174) _gate_q_14;
  cs _gate_q_1, _gate_q_9;
  x _gate_q_10;
  rx(5.453003926225945) _gate_q_2;
  xx_minus_yy_5106113456(2.9631962189088, 5.072121540979462) _gate_q_11, _gate_q_5;
  dcx _gate_q_16, _gate_q_12;
  p(3.670151407228136) _gate_q_4;
  tdg _gate_q_0;
  crx(0.39669812755072276) _gate_q_7, _gate_q_6;
  rz(2.574355902502325) _gate_q_15;
  ryy_5117024816(2.507342490145676) _gate_q_3, _gate_q_8;
  id _gate_q_13;
}