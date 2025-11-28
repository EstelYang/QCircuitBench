gate r_5105869664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1915049087896765, 3.441725038153897, -3.441725038153897) _gate_q_0;
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
gate ryy_5105874896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.233184810155573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105867792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.08048926136124) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8127148218580342) _gate_q_0;
  ry(-0.8127148218580342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.08048926136124) _gate_q_1;
}
gate cu3_5106109760(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.22272224492086581) _gate_q_0;
  u1(-0.17772173454442589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3483609077018126, 0, -0.22272224492086581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3483609077018126, 0.4004439794652917, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate r_5105874608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.104218404141688, 1.2416640552507259, -1.2416640552507259) _gate_q_0;
}
gate cu3_5105870864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4755917360270951) _gate_q_0;
  u1(1.2628934952475366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.155475833929984, 0, -1.4755917360270951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.155475833929984, 0.2126982407795584, 0) _gate_q_1;
}
gate cu1_5105861984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.38758247073350816) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.38758247073350816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.38758247073350816) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u2(2.407289315253519, 1.4938081254282685) _gate_q_5;
  U(6.247204770361459, 6.150358397911156, 1.4855164879575542) _gate_q_1;
  h _gate_q_0;
  cz _gate_q_6, _gate_q_2;
  crz(4.479754909248063) _gate_q_4, _gate_q_7;
  r_5105869664(3.1915049087896765, 5.012521364948793) _gate_q_3;
  h _gate_q_3;
  ecr _gate_q_6, _gate_q_7;
  id _gate_q_0;
  z _gate_q_4;
  ryy_5105874896(6.233184810155573) _gate_q_1, _gate_q_2;
  sx _gate_q_5;
  sx _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  xx_minus_yy_5105867792(1.6254296437160685, 5.08048926136124) _gate_q_1, _gate_q_3;
  cu3_5106109760(2.696721815403625, 0.4004439794652917, 0.04500051037643995) _gate_q_6, _gate_q_0;
  ry(1.1404504444083772) _gate_q_7;
  rx(1.0353649653095196) _gate_q_2;
  iswap _gate_q_0, _gate_q_7;
  ch _gate_q_5, _gate_q_3;
  cy _gate_q_1, _gate_q_6;
  rx(5.510610074020391) _gate_q_4;
  cp(1.5399235546828853) _gate_q_5, _gate_q_1;
  s _gate_q_3;
  cz _gate_q_6, _gate_q_2;
  p(6.267604077641128) _gate_q_7;
  rz(0.5006279118658082) _gate_q_4;
  h _gate_q_0;
  cs _gate_q_3, _gate_q_0;
  t _gate_q_6;
  ch _gate_q_7, _gate_q_2;
  crx(4.3604031683941855) _gate_q_4, _gate_q_5;
  x _gate_q_1;
  csx _gate_q_7, _gate_q_3;
  sdg _gate_q_5;
  u2(3.7669208937612266, 0.04869583478738605) _gate_q_1;
  cs _gate_q_4, _gate_q_6;
  r_5105874608(2.104218404141688, 2.8124603820456224) _gate_q_2;
  u2(0.6953360210459634, 0.5723504460528348) _gate_q_0;
  cu3_5105870864(4.310951667859968, 0.2126982407795584, 2.7384852312746317) _gate_q_5, _gate_q_7;
  x _gate_q_1;
  z _gate_q_4;
  cu1_5105861984(0.7751649414670163) _gate_q_6, _gate_q_0;
  ry(2.52388541113127) _gate_q_2;
  U(5.006250914073941, 1.2569364603715165, 4.861352854784331) _gate_q_3;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5105870672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0267530204558457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105868032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.256933721396459) _gate_q_0;
  u1(-1.735667304574443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8618463118762942, 0, -4.256933721396459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8618463118762942, 5.992601025970902, 0) _gate_q_1;
}
gate cu3_5105873120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.912297320598789) _gate_q_0;
  u1(-1.2240352899775253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5255117957329634, 0, -3.912297320598789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5255117957329634, 5.136332610576314, 0) _gate_q_1;
}
gate rxx_5105869136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.237385233434697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105873168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5163041597037046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105876480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.821459228357637, 2.9433932854023475, -2.9433932854023475) _gate_q_0;
}
gate rxx_5105863712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.666792247412754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105876192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6414555737005667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105871440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.819721157301514, 1.3246435428739534, -1.3246435428739534) _gate_q_0;
}
gate cu3_5105862704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9212021671126) _gate_q_0;
  u1(-0.6278260408112708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7928844190974313, 0, -1.9212021671126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7928844190974313, 2.549028207923871, 0) _gate_q_1;
}
gate r_5105864768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.491950277448262, 3.6341044497689152, -3.6341044497689152) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csdg _gate_q_0, _gate_q_3;
  id _gate_q_1;
  rzz_5105870672(3.0267530204558457) _gate_q_7, _gate_q_6;
  sx _gate_q_4;
  cu3_5105868032(1.7236926237525885, 5.992601025970902, 2.5212664168220162) _gate_q_5, _gate_q_2;
  x _gate_q_3;
  z _gate_q_2;
  rx(1.4007541003996946) _gate_q_7;
  cx _gate_q_0, _gate_q_4;
  csdg _gate_q_5, _gate_q_6;
  sx _gate_q_1;
  u3(1.4034537371063984, 3.87307684675286, 3.1605924061774933) _gate_q_4;
  z _gate_q_6;
  sx _gate_q_3;
  cu3_5105873120(5.051023591465927, 5.136332610576314, 2.6882620306212637) _gate_q_7, _gate_q_0;
  rxx_5105869136(5.237385233434697) _gate_q_2, _gate_q_5;
  sxdg _gate_q_1;
  rxx_5105873168(0.5163041597037046) _gate_q_6, _gate_q_7;
  h _gate_q_5;
  cu(4.541618440558701, 2.5318635552183575, 2.5461465190677344, 4.486796758175828) _gate_q_2, _gate_q_3;
  iswap _gate_q_0, _gate_q_1;
  r_5105876480(2.821459228357637, 4.514189612197244) _gate_q_4;
  t _gate_q_6;
  id _gate_q_7;
  x _gate_q_3;
  cy _gate_q_1, _gate_q_0;
  cu(0.7935179576750154, 0.36001615216201954, 4.775395531111836, 1.4186727368893028) _gate_q_5, _gate_q_4;
  u3(0.08718850697787178, 3.0143972832086323, 2.9964710848442095) _gate_q_2;
  rxx_5105863712(5.666792247412754) _gate_q_6, _gate_q_0;
  rzz_5105876192(2.6414555737005667) _gate_q_3, _gate_q_2;
  ch _gate_q_1, _gate_q_4;
  cp(4.265591559079544) _gate_q_5, _gate_q_7;
  s _gate_q_6;
  iswap _gate_q_4, _gate_q_7;
  sxdg _gate_q_0;
  crz(0.1309708916779177) _gate_q_2, _gate_q_5;
  r_5105871440(2.819721157301514, 2.89543986966885) _gate_q_1;
  p(3.137461525652953) _gate_q_3;
  U(4.431756060314809, 5.220090960252202, 2.412616561149088) _gate_q_6;
  cu3_5105862704(5.585768838194863, 2.549028207923871, 1.2933761263013293) _gate_q_7, _gate_q_1;
  u1(4.744439490624749) _gate_q_4;
  cz _gate_q_2, _gate_q_5;
  r_5105864768(1.491950277448262, 5.204900776563812) _gate_q_3;
  U(5.979053997991126, 4.538858680992479, 3.7203645256439524) _gate_q_0;
}