gate rzz_5074368416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8415288431646591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
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
gate r_5074369856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8810853468031192, 0.5121922059153157, -0.5121922059153157) _gate_q_0;
}
gate ryy_5074369376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.123486299691454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074368368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.639938876290462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074354352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.101782171570237) _gate_q_0;
  u1(-0.6722834520955512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4214651628644726, 0, -2.101782171570237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4214651628644726, 2.774065623665788, 0) _gate_q_1;
}
gate cu1_5074370432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2686405122792177) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2686405122792177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2686405122792177) _gate_q_1;
}
gate r_5074370384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.676451764233848, 4.564090064495133, -4.564090064495133) _gate_q_0;
}
gate rxx_5074365296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.171593033892352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074370000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.119358263387595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.119358263387595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.119358263387595) _gate_q_1;
}
gate rxx_5074370144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.92814311575487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074370288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.184236862191482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074357712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.4058001129084206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5074369088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.813111102387458, -0.9222108955455327, 0.9222108955455327) _gate_q_0;
}
gate cu3_5074370192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.055807848099764) _gate_q_0;
  u1(0.1765100547145222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1747051709129429, 0, -6.055807848099764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1747051709129429, 5.879297793385242, 0) _gate_q_1;
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
gate cu1_5068174448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3069485200437592) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3069485200437592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3069485200437592) _gate_q_1;
}
gate rzx_5074138800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.906068388227913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074130208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.388775031950433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  p(2.3607155995252356) _gate_q_8;
  rzz_5074368416(0.8415288431646591) _gate_q_13, _gate_q_12;
  cs _gate_q_3, _gate_q_5;
  sx _gate_q_9;
  dcx _gate_q_1, _gate_q_2;
  sx _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cy _gate_q_7, _gate_q_10;
  ry(5.790621509109801) _gate_q_11;
  y _gate_q_13;
  iswap _gate_q_6, _gate_q_0;
  cz _gate_q_1, _gate_q_12;
  r_5074369856(2.8810853468031192, 2.0829885327102122) _gate_q_10;
  rx(4.192992552495392) _gate_q_3;
  ryy_5074369376(6.123486299691454) _gate_q_4, _gate_q_11;
  sdg _gate_q_8;
  p(2.8947642458573437) _gate_q_9;
  u2(3.703772022663895, 4.281711282327095) _gate_q_2;
  z _gate_q_7;
  tdg _gate_q_5;
  rxx_5074368368(4.639938876290462) _gate_q_12, _gate_q_3;
  u2(2.6606780044194345, 4.1671111468775885) _gate_q_6;
  y _gate_q_7;
  cx _gate_q_10, _gate_q_0;
  swap _gate_q_9, _gate_q_1;
  tdg _gate_q_4;
  crx(2.7170379882590154) _gate_q_13, _gate_q_2;
  sx _gate_q_5;
  s _gate_q_8;
  h _gate_q_11;
  cu3_5074354352(2.842930325728945, 2.774065623665788, 1.4294987194746858) _gate_q_6, _gate_q_1;
  ch _gate_q_12, _gate_q_2;
  s _gate_q_4;
  cu1_5074370432(4.537281024558435) _gate_q_13, _gate_q_0;
  h _gate_q_7;
  r_5074370384(4.676451764233848, 6.1348863912900296) _gate_q_9;
  rxx_5074365296(1.171593033892352) _gate_q_5, _gate_q_11;
  sx _gate_q_3;
  swap _gate_q_8, _gate_q_10;
  y _gate_q_2;
  rz(1.256120331794778) _gate_q_10;
  iswap _gate_q_8, _gate_q_5;
  cu1_5074370000(6.23871652677519) _gate_q_6, _gate_q_12;
  rxx_5074370144(4.92814311575487) _gate_q_1, _gate_q_11;
  csdg _gate_q_3, _gate_q_0;
  tdg _gate_q_9;
  u2(0.06762354437400386, 1.9322063800324956) _gate_q_7;
  t _gate_q_4;
  y _gate_q_13;
  rzx_5074370288(6.184236862191482) _gate_q_11, _gate_q_12;
  U(4.725171720598099, 5.919779598159298, 0.04564358928470375) _gate_q_6;
  rzz_5074357712(4.4058001129084206) _gate_q_0, _gate_q_7;
  x _gate_q_1;
  csx _gate_q_10, _gate_q_4;
  rz(4.10906139451088) _gate_q_3;
  sxdg _gate_q_9;
  ry(5.555530862060355) _gate_q_5;
  y _gate_q_2;
  t _gate_q_13;
  sx _gate_q_8;
  y _gate_q_9;
  cp(1.9146638354530106) _gate_q_10, _gate_q_0;
  cu(0.6908546126851911, 3.0148194676424938, 0.648148579765415, 0.08523086537224125) _gate_q_7, _gate_q_3;
  csdg _gate_q_1, _gate_q_11;
  x _gate_q_6;
  id _gate_q_4;
  tdg _gate_q_12;
  u1(1.0157408444652718) _gate_q_8;
  u2(2.4704025199819575, 4.64345308496568) _gate_q_2;
  r_5074369088(4.813111102387458, 0.6485854312493639) _gate_q_13;
  u2(0.2365303124549396, 4.48860101684942) _gate_q_5;
  s _gate_q_9;
  sdg _gate_q_10;
  sx _gate_q_0;
  crz(3.236955328877225) _gate_q_8, _gate_q_12;
  u3(1.3852041387638485, 1.4861418978881746, 4.722239186420122) _gate_q_3;
  iswap _gate_q_11, _gate_q_13;
  iswap _gate_q_5, _gate_q_4;
  cu3_5074370192(0.3494103418258858, 5.879297793385242, 6.2323179028142865) _gate_q_1, _gate_q_6;
  crx(4.817868489418698) _gate_q_2, _gate_q_7;
  cx _gate_q_8, _gate_q_9;
  h _gate_q_5;
  cp(3.163199613617794) _gate_q_13, _gate_q_3;
  ecr _gate_q_11, _gate_q_6;
  cu1_5068174448(2.6138970400875183) _gate_q_7, _gate_q_4;
  rx(3.986781064246839) _gate_q_12;
  cry(4.362674400974461) _gate_q_0, _gate_q_10;
  u2(0.5467863290806201, 5.1163088367119185) _gate_q_1;
  U(3.647865269036572, 0.8756133638560967, 2.741906415112838) _gate_q_2;
  rzx_5074138800(3.906068388227913) _gate_q_7, _gate_q_11;
  cy _gate_q_3, _gate_q_8;
  crx(4.567433427728461) _gate_q_5, _gate_q_9;
  rx(0.4707416618826235) _gate_q_2;
  sx _gate_q_0;
  crz(1.7709738080437305) _gate_q_12, _gate_q_6;
  ryy_5074130208(4.388775031950433) _gate_q_10, _gate_q_13;
  cry(3.0481119644605896) _gate_q_4, _gate_q_1;
}
gate rxx_5074273008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.721988377913919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074274016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9795951635955031) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074274256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.51111939636705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074275456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.1769187592558765) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1914319754606124) _gate_q_0;
  ry(-1.1914319754606124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.1769187592558765) _gate_q_1;
}
gate xx_minus_yy_5074287504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.812703647157998) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8336387472016421) _gate_q_0;
  ry(-0.8336387472016421) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.812703647157998) _gate_q_1;
}
gate cu1_5074276704(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.18835572308599208) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.18835572308599208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.18835572308599208) _gate_q_1;
}
gate xx_plus_yy_5074275840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3969562604515224) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.41989531477895786) _gate_q_1;
  ry(-0.41989531477895786) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3969562604515224) _gate_q_0;
}
gate ryy_5074272864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1572402829614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074274112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.377471344710108, 3.8476868201977013, -3.8476868201977013) _gate_q_0;
}
gate rzx_5074277184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.890708540263955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074288368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1866364031421226) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1866364031421226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1866364031421226) _gate_q_1;
}
gate xx_plus_yy_5074285104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1579037241498567) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5468057788774754) _gate_q_1;
  ry(-2.5468057788774754) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1579037241498567) _gate_q_0;
}
gate rzz_5074288176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.0277039126068095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074278384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.427712401639165) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1382929033252895) _gate_q_0;
  ry(-1.1382929033252895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.427712401639165) _gate_q_1;
}
gate xx_minus_yy_5074280160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.125168100009338) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3026705811275638) _gate_q_0;
  ry(-1.3026705811275638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.125168100009338) _gate_q_1;
}
gate cu1_5074278288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2747397590641214) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2747397590641214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2747397590641214) _gate_q_1;
}
gate r_5074279104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7259837267780028, 0.7557846384378446, -0.7557846384378446) _gate_q_0;
}
gate xx_minus_yy_5074279680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4915532387953865) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9330908380620624) _gate_q_0;
  ry(-2.9330908380620624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4915532387953865) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  t _gate_q_13;
  id _gate_q_9;
  rxx_5074273008(1.721988377913919) _gate_q_1, _gate_q_2;
  sdg _gate_q_10;
  z _gate_q_5;
  cs _gate_q_7, _gate_q_3;
  dcx _gate_q_12, _gate_q_11;
  rx(2.1047135530881174) _gate_q_8;
  cz _gate_q_4, _gate_q_6;
  U(2.0503289708002455, 3.6933801974158342, 3.541978300492853) _gate_q_0;
  z _gate_q_1;
  id _gate_q_12;
  rzx_5074274016(1.9795951635955031) _gate_q_13, _gate_q_11;
  y _gate_q_5;
  swap _gate_q_6, _gate_q_7;
  cx _gate_q_9, _gate_q_4;
  u2(3.338650247151114, 4.764528466936199) _gate_q_8;
  rzx_5074274256(1.51111939636705) _gate_q_10, _gate_q_3;
  crx(1.6447927304863053) _gate_q_2, _gate_q_0;
  xx_minus_yy_5074275456(2.382863950921225, 6.1769187592558765) _gate_q_10, _gate_q_7;
  cu(1.7682063453394474, 4.248047014782694, 5.92297604420205, 4.054479933709977) _gate_q_4, _gate_q_13;
  sdg _gate_q_1;
  rz(4.386281135062981) _gate_q_11;
  sxdg _gate_q_0;
  xx_minus_yy_5074287504(1.6672774944032842, 2.812703647157998) _gate_q_5, _gate_q_6;
  U(0.44702676627743954, 3.168192273208704, 3.3674627111978754) _gate_q_3;
  iswap _gate_q_12, _gate_q_9;
  cu1_5074276704(0.37671144617198415) _gate_q_2, _gate_q_8;
  u1(3.758395144513742) _gate_q_0;
  csx _gate_q_9, _gate_q_10;
  ecr _gate_q_4, _gate_q_12;
  h _gate_q_3;
  xx_plus_yy_5074275840(0.8397906295579157, 0.3969562604515224) _gate_q_7, _gate_q_2;
  ryy_5074272864(6.1572402829614) _gate_q_11, _gate_q_8;
  ch _gate_q_5, _gate_q_6;
  ch _gate_q_1, _gate_q_13;
  x _gate_q_4;
  r_5074274112(5.377471344710108, 5.418483146992598) _gate_q_5;
  cy _gate_q_8, _gate_q_1;
  u1(2.4427128073641016) _gate_q_12;
  z _gate_q_3;
  ch _gate_q_13, _gate_q_6;
  sxdg _gate_q_11;
  iswap _gate_q_9, _gate_q_7;
  cry(4.467870679757088) _gate_q_2, _gate_q_0;
  U(5.948840440660999, 0.3167127585498586, 2.8507560388811037) _gate_q_10;
  cz _gate_q_5, _gate_q_10;
  cx _gate_q_6, _gate_q_12;
  cp(1.3568168731333723) _gate_q_13, _gate_q_1;
  ecr _gate_q_2, _gate_q_9;
  ecr _gate_q_7, _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
  cu(4.266866090620037, 0.6357900803822366, 4.0211584895940655, 5.784770276790157) _gate_q_11, _gate_q_8;
  rzx_5074277184(4.890708540263955) _gate_q_13, _gate_q_8;
  x _gate_q_11;
  cu1_5074288368(2.373272806284245) _gate_q_4, _gate_q_9;
  ch _gate_q_5, _gate_q_2;
  crx(2.230581589998397) _gate_q_7, _gate_q_0;
  ecr _gate_q_1, _gate_q_10;
  csdg _gate_q_3, _gate_q_12;
  u1(0.7560625291656736) _gate_q_6;
  cp(3.813104679675395) _gate_q_4, _gate_q_1;
  p(5.132395424399942) _gate_q_12;
  csdg _gate_q_13, _gate_q_3;
  h _gate_q_9;
  xx_plus_yy_5074285104(5.093611557754951, 3.1579037241498567) _gate_q_7, _gate_q_2;
  u1(4.900844777585025) _gate_q_5;
  x _gate_q_8;
  cs _gate_q_10, _gate_q_6;
  rzz_5074288176(5.0277039126068095) _gate_q_0, _gate_q_11;
  ecr _gate_q_1, _gate_q_9;
  cx _gate_q_8, _gate_q_0;
  y _gate_q_2;
  xx_minus_yy_5074278384(2.276585806650579, 3.427712401639165) _gate_q_13, _gate_q_11;
  crz(0.37906565259957853) _gate_q_5, _gate_q_3;
  u3(3.1814347773369835, 4.588408497859844, 4.070956619387491) _gate_q_7;
  p(5.424733868358654) _gate_q_6;
  h _gate_q_10;
  crx(5.6429346205782505) _gate_q_4, _gate_q_12;
  x _gate_q_13;
  h _gate_q_3;
  cry(3.1451482572212814) _gate_q_11, _gate_q_6;
  u3(3.4519812517602744, 2.2985458454281704, 4.166910386042731) _gate_q_1;
  xx_minus_yy_5074280160(2.6053411622551277, 2.125168100009338) _gate_q_4, _gate_q_7;
  cu1_5074278288(2.549479518128243) _gate_q_0, _gate_q_5;
  t _gate_q_10;
  r_5074279104(0.7259837267780028, 2.326580965232741) _gate_q_2;
  x _gate_q_12;
  xx_minus_yy_5074279680(5.866181676124125, 1.4915532387953865) _gate_q_8, _gate_q_9;
}