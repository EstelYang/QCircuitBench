gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106567744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9299214894986119) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1096796034176144) _gate_q_0;
  ry(-2.1096796034176144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9299214894986119) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5106567696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1515258039331147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5106575664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.555844692148243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106578640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.809573878958558) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.10160843228750603) _gate_q_1;
  ry(-0.10160843228750603) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.809573878958558) _gate_q_0;
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
gate rxx_5106573504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.958441821668367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106565824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3979589034827171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106574272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.38480820032977) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3414453334690233) _gate_q_0;
  ry(-1.3414453334690233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.38480820032977) _gate_q_1;
}
gate rzx_5106571872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.373733551915922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106579552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6275527153669915) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.21575470221467635) _gate_q_1;
  ry(-0.21575470221467635) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6275527153669915) _gate_q_0;
}
gate ryy_5106565344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.065826878413326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106572304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.026437406935663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5104275088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.475534361875104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5104277008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.855522915124465) _gate_q_0;
  u1(-1.086394583318489) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.392077987248473, 0, -2.855522915124465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.392077987248473, 3.941917498442954, 0) _gate_q_1;
}
gate ryy_5104275616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2020797419144091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104279072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8112849409051444) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8112849409051444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8112849409051444) _gate_q_1;
}
gate rzx_5104280608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.296458903988336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5104276288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2959275452293095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5104287088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.695601151476656) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1460202707292775) _gate_q_1;
  ry(-1.1460202707292775) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.695601151476656) _gate_q_0;
}
gate xx_minus_yy_5104285552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.284285164243637) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.90843564532412) _gate_q_0;
  ry(-1.90843564532412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.284285164243637) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  xx_minus_yy_5106567744(4.219359206835229, 0.9299214894986119) _gate_q_8, _gate_q_9;
  id _gate_q_7;
  cp(0.20802696879581029) _gate_q_12, _gate_q_0;
  iswap _gate_q_10, _gate_q_4;
  iswap _gate_q_3, _gate_q_2;
  cz _gate_q_13, _gate_q_6;
  rzx_5106567696(2.1515258039331147) _gate_q_14, _gate_q_5;
  csdg _gate_q_11, _gate_q_1;
  dcx _gate_q_0, _gate_q_1;
  u1(2.8566384334691057) _gate_q_4;
  u2(0.700332552001084, 5.501361919420677) _gate_q_10;
  s _gate_q_11;
  tdg _gate_q_8;
  id _gate_q_3;
  id _gate_q_9;
  u3(1.3577777679281542, 0.616682153137815, 5.642418948553357) _gate_q_7;
  cry(1.0085041095370444) _gate_q_5, _gate_q_12;
  sxdg _gate_q_2;
  x _gate_q_13;
  rzx_5106575664(2.555844692148243) _gate_q_6, _gate_q_14;
  xx_plus_yy_5106578640(0.20321686457501206, 2.809573878958558) _gate_q_0, _gate_q_10;
  s _gate_q_13;
  ecr _gate_q_1, _gate_q_3;
  u2(2.177637132358313, 0.9661707822787269) _gate_q_8;
  rxx_5106573504(4.958441821668367) _gate_q_2, _gate_q_9;
  csdg _gate_q_7, _gate_q_6;
  rx(2.2299987006336996) _gate_q_5;
  ry(0.6434340859966603) _gate_q_12;
  rzx_5106565824(1.3979589034827171) _gate_q_4, _gate_q_11;
  rx(2.269347263141663) _gate_q_14;
  ch _gate_q_5, _gate_q_3;
  ecr _gate_q_7, _gate_q_10;
  u1(1.5405511796887057) _gate_q_0;
  y _gate_q_13;
  u2(4.05759145181767, 5.466233976986065) _gate_q_4;
  csdg _gate_q_11, _gate_q_12;
  y _gate_q_2;
  u1(4.857519336345217) _gate_q_1;
  iswap _gate_q_9, _gate_q_14;
  x _gate_q_6;
  u1(3.539535787763568) _gate_q_8;
  ry(6.251890100732687) _gate_q_5;
  xx_minus_yy_5106574272(2.6828906669380466, 4.38480820032977) _gate_q_8, _gate_q_4;
  rzx_5106571872(1.373733551915922) _gate_q_9, _gate_q_6;
  swap _gate_q_14, _gate_q_11;
  y _gate_q_0;
  dcx _gate_q_1, _gate_q_2;
  xx_plus_yy_5106579552(0.4315094044293527, 1.6275527153669915) _gate_q_12, _gate_q_10;
  rx(1.1783232384055944) _gate_q_7;
  rx(3.2228338688080598) _gate_q_3;
  p(5.130420878078622) _gate_q_13;
  cry(2.359155825490357) _gate_q_11, _gate_q_8;
  z _gate_q_12;
  ryy_5106565344(4.065826878413326) _gate_q_5, _gate_q_6;
  cu(4.264446000160227, 0.7531503896144214, 5.8061002915598765, 5.078873243999353) _gate_q_14, _gate_q_3;
  cp(4.318540509915576) _gate_q_2, _gate_q_0;
  sxdg _gate_q_9;
  ch _gate_q_10, _gate_q_7;
  crz(4.4959845949268065) _gate_q_1, _gate_q_4;
  sdg _gate_q_13;
  t _gate_q_13;
  sdg _gate_q_3;
  cx _gate_q_12, _gate_q_1;
  rzz_5106572304(6.026437406935663) _gate_q_9, _gate_q_11;
  U(5.962057259130672, 2.0060881222339897, 1.0978289180882788) _gate_q_2;
  rxx_5104275088(2.475534361875104) _gate_q_14, _gate_q_0;
  tdg _gate_q_4;
  u3(1.784046884221676, 0.8369600258514318, 0.48980850586578184) _gate_q_5;
  cu(4.972741765145227, 4.616663261601353, 5.1217674930061055, 5.102287663701895) _gate_q_6, _gate_q_10;
  crx(3.66287378608458) _gate_q_7, _gate_q_8;
  ch _gate_q_5, _gate_q_0;
  u1(1.4353279438460427) _gate_q_9;
  u3(3.596368942756604, 0.21167887779594258, 2.426960863162109) _gate_q_3;
  crz(4.439958993040327) _gate_q_4, _gate_q_8;
  cu3_5104277008(2.784155974496946, 3.941917498442954, 1.7691283318059765) _gate_q_14, _gate_q_12;
  swap _gate_q_6, _gate_q_1;
  dcx _gate_q_10, _gate_q_11;
  csdg _gate_q_2, _gate_q_7;
  rx(2.9247715125616915) _gate_q_13;
  cp(4.944399073982075) _gate_q_14, _gate_q_10;
  ryy_5104275616(1.2020797419144091) _gate_q_5, _gate_q_4;
  U(4.042635340287794, 6.094363943681655, 3.410393160614669) _gate_q_11;
  ry(2.796055209347444) _gate_q_13;
  u3(5.7238612104281925, 3.0225011166408864, 4.337664123795013) _gate_q_2;
  cu1_5104279072(1.6225698818102887) _gate_q_12, _gate_q_1;
  rzx_5104280608(5.296458903988336) _gate_q_3, _gate_q_9;
  ry(4.810855216115701) _gate_q_7;
  cry(3.7735867972999553) _gate_q_6, _gate_q_8;
  s _gate_q_0;
  s _gate_q_6;
  ecr _gate_q_4, _gate_q_1;
  h _gate_q_9;
  U(4.294861309171101, 0.34749530387736793, 0.9069056431964532) _gate_q_3;
  u3(5.197459207606671, 4.312609948886029, 5.340749155572604) _gate_q_5;
  rzz_5104276288(3.2959275452293095) _gate_q_14, _gate_q_7;
  xx_plus_yy_5104287088(2.292040541458555, 2.695601151476656) _gate_q_0, _gate_q_13;
  y _gate_q_11;
  ch _gate_q_8, _gate_q_2;
  xx_minus_yy_5104285552(3.81687129064824, 5.284285164243637) _gate_q_10, _gate_q_12;
}
gate xx_minus_yy_5104280848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.34721132490282713) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0950695794461507) _gate_q_0;
  ry(-1.0950695794461507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.34721132490282713) _gate_q_1;
}
gate ryy_5104277824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9450840613674933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104278832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.365331391355193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5104282288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.065259741191779, 3.248514838661854, -3.248514838661854) _gate_q_0;
}
gate rzz_5104284160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.5348558797962095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5104285888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.08453163476022893) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.132316951758028) _gate_q_0;
  ry(-3.132316951758028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.08453163476022893) _gate_q_1;
}
gate rzx_5104275712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1185164058280548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104275664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.04896788929954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5104283104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.315724462771844) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8258313589228231) _gate_q_1;
  ry(-0.8258313589228231) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.315724462771844) _gate_q_0;
}
gate ryy_5104282720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.837564112889772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104273456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.836619951360225) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.836619951360225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.836619951360225) _gate_q_1;
}
gate cu1_5104272496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9504842213256418) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9504842213256418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9504842213256418) _gate_q_1;
}
gate rzz_5104277200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5522301038686077) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5104284736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.46000064055983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5104273264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.872157270225404) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.872157270225404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.872157270225404) _gate_q_1;
}
gate cu1_5104281136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9875377998848622) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9875377998848622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9875377998848622) _gate_q_1;
}
gate r_5104287376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.15080893949520888, 1.9302210948956477, -1.9302210948956477) _gate_q_0;
}
gate r_5104285024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.842468381065893, 3.0710268375269543, -3.0710268375269543) _gate_q_0;
}
gate r_5104283440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.790616376357345, 3.5923225588583767, -3.5923225588583767) _gate_q_0;
}
gate xx_minus_yy_5104274608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.107424320240906) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9357139956290195) _gate_q_0;
  ry(-2.9357139956290195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.107424320240906) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  t _gate_q_2;
  id _gate_q_11;
  z _gate_q_10;
  x _gate_q_14;
  rz(1.3256057697006407) _gate_q_4;
  xx_minus_yy_5104280848(2.1901391588923014, 0.34721132490282713) _gate_q_13, _gate_q_7;
  sx _gate_q_8;
  x _gate_q_0;
  crz(4.214473647811787) _gate_q_1, _gate_q_3;
  z _gate_q_12;
  u2(0.7710348804860411, 6.158381051265781) _gate_q_6;
  cz _gate_q_9, _gate_q_5;
  sx _gate_q_10;
  ryy_5104277824(2.9450840613674933) _gate_q_3, _gate_q_13;
  cu(1.5312969614143268, 0.39590062323569963, 4.378661212610415, 4.383954031074788) _gate_q_14, _gate_q_5;
  sx _gate_q_7;
  y _gate_q_0;
  sx _gate_q_8;
  sdg _gate_q_9;
  z _gate_q_4;
  z _gate_q_6;
  ch _gate_q_12, _gate_q_11;
  s _gate_q_1;
  s _gate_q_2;
  csdg _gate_q_8, _gate_q_7;
  ecr _gate_q_9, _gate_q_13;
  sdg _gate_q_3;
  u1(1.9157016054330085) _gate_q_5;
  rxx_5104278832(3.365331391355193) _gate_q_0, _gate_q_12;
  rx(2.2645089542699735) _gate_q_14;
  cx _gate_q_10, _gate_q_4;
  cx _gate_q_2, _gate_q_6;
  h _gate_q_11;
  u2(1.8321806123880608, 0.229126625592889) _gate_q_1;
  r_5104282288(6.065259741191779, 4.81931116545675) _gate_q_6;
  ry(0.7355797955985033) _gate_q_5;
  sdg _gate_q_1;
  rzz_5104284160(4.5348558797962095) _gate_q_4, _gate_q_9;
  y _gate_q_14;
  swap _gate_q_3, _gate_q_7;
  rx(0.3282998499886665) _gate_q_11;
  xx_minus_yy_5104285888(6.264633903516056, 0.08453163476022893) _gate_q_12, _gate_q_0;
  rzx_5104275712(1.1185164058280548) _gate_q_2, _gate_q_8;
  rxx_5104275664(2.04896788929954) _gate_q_10, _gate_q_13;
  sxdg _gate_q_1;
  iswap _gate_q_12, _gate_q_11;
  cz _gate_q_9, _gate_q_0;
  ecr _gate_q_5, _gate_q_6;
  u2(4.2517150561144, 5.468475085045333) _gate_q_13;
  cu(6.206905097058684, 4.714567804769538, 1.791577797866181, 2.8071942153191074) _gate_q_8, _gate_q_14;
  u3(2.164256481364536, 5.737302572127678, 5.718721407100144) _gate_q_10;
  cy _gate_q_4, _gate_q_2;
  xx_plus_yy_5104283104(1.6516627178456462, 2.315724462771844) _gate_q_7, _gate_q_3;
  ch _gate_q_14, _gate_q_6;
  u2(5.428731537988545, 0.6229230317814947) _gate_q_3;
  u3(2.1462095548287805, 3.4670892824860027, 2.24889414702568) _gate_q_13;
  ryy_5104282720(4.837564112889772) _gate_q_5, _gate_q_4;
  s _gate_q_12;
  crx(4.5904585021262925) _gate_q_10, _gate_q_11;
  p(2.234780900119533) _gate_q_1;
  x _gate_q_8;
  u1(1.9501324820859496) _gate_q_7;
  cu1_5104273456(5.67323990272045) _gate_q_0, _gate_q_9;
  y _gate_q_2;
  cp(6.279461329743689) _gate_q_10, _gate_q_2;
  cz _gate_q_9, _gate_q_11;
  t _gate_q_5;
  cu1_5104272496(1.9009684426512836) _gate_q_3, _gate_q_13;
  csdg _gate_q_7, _gate_q_12;
  rx(1.2715052291192181) _gate_q_14;
  s _gate_q_1;
  cry(6.17142334928503) _gate_q_0, _gate_q_4;
  x _gate_q_6;
  sdg _gate_q_8;
  rzz_5104277200(3.5522301038686077) _gate_q_9, _gate_q_1;
  swap _gate_q_8, _gate_q_12;
  rxx_5104284736(5.46000064055983) _gate_q_3, _gate_q_11;
  u2(4.883851401623075, 2.683264353407118) _gate_q_0;
  cu1_5104273264(5.744314540450808) _gate_q_13, _gate_q_14;
  cry(4.259462485574495) _gate_q_4, _gate_q_5;
  x _gate_q_2;
  cu1_5104281136(1.9750755997697245) _gate_q_6, _gate_q_7;
  sx _gate_q_10;
  id _gate_q_0;
  p(2.1846292498795252) _gate_q_5;
  ecr _gate_q_8, _gate_q_7;
  ry(1.3820722664313925) _gate_q_12;
  tdg _gate_q_14;
  U(4.598304544252648, 0.32955575865633335, 5.294058332847615) _gate_q_6;
  r_5104287376(0.15080893949520888, 3.5010174216905443) _gate_q_4;
  r_5104285024(4.842468381065893, 4.641823164321851) _gate_q_10;
  U(1.0758578709770783, 0.6514810604689681, 0.9603421612658128) _gate_q_9;
  id _gate_q_11;
  s _gate_q_3;
  ch _gate_q_13, _gate_q_1;
  y _gate_q_2;
  crx(3.121675674734106) _gate_q_13, _gate_q_1;
  u1(4.0494774805606015) _gate_q_8;
  rx(3.159076328383249) _gate_q_7;
  r_5104283440(5.790616376357345, 5.163118885653273) _gate_q_11;
  xx_minus_yy_5104274608(5.871427991258039, 2.107424320240906) _gate_q_3, _gate_q_5;
  sdg _gate_q_6;
  u3(2.3011468981472256, 2.362457585599927, 6.25869020581485) _gate_q_14;
  cz _gate_q_9, _gate_q_2;
  u2(3.276584634033592, 1.5900227752572098) _gate_q_4;
  tdg _gate_q_10;
  h _gate_q_12;
  u3(2.1807031205281353, 4.5160767446674095, 5.805837189207473) _gate_q_0;
}