gate cu3_5106112160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.869330494240533) _gate_q_0;
  u1(1.2793222015172447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.588975631990595, 0, -1.869330494240533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.588975631990595, 0.5900082927232885, 0) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5106113216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8764895011148266) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8764895011148266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8764895011148266) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  sdg _gate_q_1;
  cu3_5106112160(5.17795126398119, 0.5900082927232885, 3.148652695757778) _gate_q_4, _gate_q_5;
  ecr _gate_q_0, _gate_q_2;
  cs _gate_q_6, _gate_q_3;
  cu1_5106113216(1.7529790022296532) _gate_q_5, _gate_q_2;
  rx(3.455191521292836) _gate_q_3;
  z _gate_q_6;
  cp(3.57827463429625) _gate_q_0, _gate_q_1;
  t _gate_q_4;
  cry(4.833773078867275) _gate_q_6, _gate_q_4;
  cy _gate_q_3, _gate_q_1;
  u2(0.2178370661518971, 2.84407483335343) _gate_q_2;
  iswap _gate_q_0, _gate_q_5;
  cz _gate_q_1, _gate_q_3;
  sx _gate_q_6;
  rx(3.9279212466507123) _gate_q_4;
  cx _gate_q_2, _gate_q_5;
  u1(4.771064113474508) _gate_q_0;
  cp(2.77594928222916) _gate_q_3, _gate_q_5;
  sdg _gate_q_6;
  U(3.799850996076864, 2.7012370626826874, 0.11870473825444572) _gate_q_4;
  ry(3.286458070281602) _gate_q_0;
  u3(5.561857895970867, 2.159469094697854, 0.1708475100373623) _gate_q_1;
  ry(1.1729752284838026) _gate_q_2;
  cu(1.4706369728530069, 6.0126495881680055, 2.2168566363784095, 0.1504901401233496) _gate_q_0, _gate_q_1;
  ry(2.4078924266293935) _gate_q_3;
  u2(3.9260496462521255, 0.6093906347753214) _gate_q_6;
  iswap _gate_q_5, _gate_q_2;
  p(0.7539224554505748) _gate_q_4;
  sxdg _gate_q_3;
  cu(3.4341055724478227, 4.263128452026048, 5.5453689838373466, 4.525854489638517) _gate_q_4, _gate_q_6;
  csdg _gate_q_0, _gate_q_5;
  crz(4.976902428128187) _gate_q_1, _gate_q_2;
}
gate xx_plus_yy_5105147184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.646274042034576) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8737942574851445) _gate_q_1;
  ry(-1.8737942574851445) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.646274042034576) _gate_q_0;
}
gate xx_plus_yy_5105148288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3637231711642685) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5430390337481285) _gate_q_1;
  ry(-0.5430390337481285) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3637231711642685) _gate_q_0;
}
gate r_5105148432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6179636291796253, -1.0212365320430812, 1.0212365320430812) _gate_q_0;
}
gate rzz_5105151696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.072705060021359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105147760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5672952656634203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105155488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.800965577218542) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7357007998423244) _gate_q_0;
  ry(-2.7357007998423244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.800965577218542) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cry(3.9489325399303508) _gate_q_5, _gate_q_6;
  u2(5.205435283134597, 4.2894240735355185) _gate_q_0;
  xx_plus_yy_5105147184(3.747588514970289, 1.646274042034576) _gate_q_1, _gate_q_3;
  cz _gate_q_2, _gate_q_4;
  swap _gate_q_4, _gate_q_6;
  u3(3.796402555378402, 6.201019567983794, 3.0766596848418533) _gate_q_0;
  z _gate_q_3;
  xx_plus_yy_5105148288(1.086078067496257, 0.3637231711642685) _gate_q_1, _gate_q_5;
  sxdg _gate_q_2;
  cz _gate_q_4, _gate_q_3;
  cx _gate_q_6, _gate_q_2;
  cs _gate_q_1, _gate_q_5;
  h _gate_q_0;
  r_5105148432(1.6179636291796253, 0.5495597947518154) _gate_q_2;
  tdg _gate_q_4;
  rzz_5105151696(3.072705060021359) _gate_q_0, _gate_q_6;
  x _gate_q_1;
  sdg _gate_q_5;
  u2(4.619306027828185, 1.1991986812801474) _gate_q_3;
  cs _gate_q_4, _gate_q_1;
  sdg _gate_q_0;
  s _gate_q_6;
  rzz_5105147760(3.5672952656634203) _gate_q_2, _gate_q_3;
  t _gate_q_5;
  rz(1.8325950763172072) _gate_q_4;
  xx_minus_yy_5105155488(5.471401599684649, 2.800965577218542) _gate_q_2, _gate_q_3;
  u2(0.45306617060434734, 1.5627604082628592) _gate_q_5;
  ecr _gate_q_6, _gate_q_1;
  h _gate_q_0;
  cry(1.949605245850634) _gate_q_1, _gate_q_5;
  ecr _gate_q_4, _gate_q_6;
  p(4.277615818444381) _gate_q_0;
  U(4.668405438202126, 5.913350500176027, 0.6876680172538934) _gate_q_3;
  id _gate_q_2;
}