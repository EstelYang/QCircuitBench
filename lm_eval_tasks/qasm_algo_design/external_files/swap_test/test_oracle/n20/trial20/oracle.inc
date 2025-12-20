gate cu3_5073915200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8063379270757896) _gate_q_0;
  u1(0.013417046825962231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6302312275925592, 0, -2.8063379270757896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6302312275925592, 2.7929208802498273, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate rxx_5070438176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9339049141076483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070422720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.320783123744689) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070425936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.693526755590705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070435440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9496487831895752) _gate_q_0;
  u1(-0.8889701224887293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5465632354386976, 0, -1.9496487831895752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5465632354386976, 2.8386189056783047, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070427760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.113517771297365) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.980366914885727) _gate_q_1;
  ry(-0.980366914885727) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.113517771297365) _gate_q_0;
}
gate rzx_5070433328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.599839525593332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rzx_5070424880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6377274289558811) _gate_q_1;
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
gate r_5070427712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.127689729239437, 2.211868100868105, -2.211868100868105) _gate_q_0;
}
gate rxx_5070422144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.149773183064825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070425504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.556118788945776) _gate_q_0;
  u1(0.6260684982579074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1116517414501645, 0, -5.556118788945776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1116517414501645, 4.930050290687869, 0) _gate_q_1;
}
gate r_5070426416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.161722005051597, 0.674389074625922, -0.674389074625922) _gate_q_0;
}
gate cu1_5070427808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3246984343885946) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3246984343885946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3246984343885946) _gate_q_1;
}
gate ryy_5070431264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4303538889916638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070433808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.106199318915224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5070423344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.735547150037814) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0441799163089662) _gate_q_0;
  ry(-1.0441799163089662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.735547150037814) _gate_q_1;
}
gate ryy_5070435008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6092858348080754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070437408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.360001218951865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070428480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.42309891553826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070437792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5380513555239756) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5112644138337132) _gate_q_0;
  ry(-2.5112644138337132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5380513555239756) _gate_q_1;
}
gate ryy_5070429392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.430451512023828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070424064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.868257221296565) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.868257221296565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.868257221296565) _gate_q_1;
}
gate r_5070423824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.853308500959711, -0.33448763333134646, 0.33448763333134646) _gate_q_0;
}
gate cu1_5070430016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.029365662287276623) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.029365662287276623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.029365662287276623) _gate_q_1;
}
gate r_5070432320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2746043597216334, 2.1090637239855594, -2.1090637239855594) _gate_q_0;
}
gate rzz_5070431168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.208576258982133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070430448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.622271280615181) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.953795803530782) _gate_q_0;
  ry(-2.953795803530782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.622271280615181) _gate_q_1;
}
gate ryy_5070425120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6393333219806623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070434816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8441215043347956) _gate_q_0;
  u1(1.8665266600983434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1348879638604807, 0, -3.8441215043347956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1348879638604807, 1.9775948442364524, 0) _gate_q_1;
}
gate cu3_5070434720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.064405381018464) _gate_q_0;
  u1(0.8370301870445167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.044308525924881, 0, -5.064405381018464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.044308525924881, 4.227375193973947, 0) _gate_q_1;
}
gate rzz_5070425072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6925775487106556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070422480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7395764797020465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070437456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.137861966343952) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6683196389436591) _gate_q_0;
  ry(-0.6683196389436591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.137861966343952) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cz _gate_q_5, _gate_q_13;
  sdg _gate_q_3;
  ry(5.884955816252742) _gate_q_17;
  cu3_5073915200(5.2604624551851185, 2.7929208802498273, 2.819754973901752) _gate_q_18, _gate_q_19;
  csdg _gate_q_7, _gate_q_6;
  sdg _gate_q_12;
  s _gate_q_4;
  crz(2.0588460752870166) _gate_q_10, _gate_q_14;
  csx _gate_q_0, _gate_q_8;
  cp(0.6277892631248794) _gate_q_15, _gate_q_2;
  s _gate_q_11;
  sdg _gate_q_16;
  rxx_5070438176(3.9339049141076483) _gate_q_9, _gate_q_1;
  y _gate_q_17;
  h _gate_q_10;
  cp(5.371989242224382) _gate_q_12, _gate_q_18;
  y _gate_q_9;
  cp(4.160410027551749) _gate_q_14, _gate_q_16;
  cz _gate_q_1, _gate_q_2;
  ryy_5070422720(5.320783123744689) _gate_q_7, _gate_q_15;
  p(1.3875430981371657) _gate_q_4;
  ryy_5070425936(3.693526755590705) _gate_q_0, _gate_q_19;
  u3(6.26825145156768, 2.332025499898264, 1.5199521765734092) _gate_q_8;
  cu3_5070435440(1.0931264708773951, 2.8386189056783047, 1.060678660700846) _gate_q_11, _gate_q_5;
  sxdg _gate_q_6;
  cz _gate_q_3, _gate_q_13;
  xx_plus_yy_5070427760(1.960733829771454, 3.113517771297365) _gate_q_11, _gate_q_16;
  t _gate_q_0;
  rzx_5070433328(0.599839525593332) _gate_q_5, _gate_q_19;
  t _gate_q_10;
  s _gate_q_17;
  ch _gate_q_14, _gate_q_3;
  x _gate_q_13;
  ecr _gate_q_4, _gate_q_9;
  csx _gate_q_6, _gate_q_1;
  z _gate_q_12;
  ecr _gate_q_15, _gate_q_7;
  rzx_5070424880(0.6377274289558811) _gate_q_18, _gate_q_2;
  rx(1.7123463461839834) _gate_q_8;
  swap _gate_q_7, _gate_q_5;
  ch _gate_q_13, _gate_q_17;
  iswap _gate_q_16, _gate_q_18;
  ry(5.971070146654251) _gate_q_1;
  r_5070427712(2.127689729239437, 3.7826644276630015) _gate_q_8;
  iswap _gate_q_2, _gate_q_4;
  u1(2.086998092461957) _gate_q_9;
  rxx_5070422144(5.149773183064825) _gate_q_3, _gate_q_15;
  csx _gate_q_11, _gate_q_10;
  sdg _gate_q_0;
  cu3_5070425504(6.223303482900329, 4.930050290687869, 6.182187287203684) _gate_q_19, _gate_q_14;
  sx _gate_q_12;
  t _gate_q_6;
  r_5070426416(5.161722005051597, 2.2451854014208186) _gate_q_13;
  swap _gate_q_14, _gate_q_3;
  cu1_5070427808(4.649396868777189) _gate_q_7, _gate_q_8;
  id _gate_q_11;
  cz _gate_q_17, _gate_q_18;
  tdg _gate_q_5;
  ryy_5070431264(1.4303538889916638) _gate_q_10, _gate_q_4;
  u3(5.45645455636133, 3.2359688545290375, 4.463300494340285) _gate_q_2;
  u1(1.5924766957636454) _gate_q_9;
  rxx_5070433808(3.106199318915224) _gate_q_6, _gate_q_19;
  rz(1.9997471467711656) _gate_q_16;
  sdg _gate_q_12;
  p(0.9894618999714796) _gate_q_1;
  csx _gate_q_15, _gate_q_0;
  U(3.0896543208178073, 6.020317312605274, 0.2838849615582668) _gate_q_8;
  crz(0.5673034419217706) _gate_q_19, _gate_q_7;
  h _gate_q_5;
  cs _gate_q_0, _gate_q_10;
  tdg _gate_q_6;
  cp(2.5589882245968063) _gate_q_14, _gate_q_1;
  xx_minus_yy_5070423344(2.0883598326179325, 5.735547150037814) _gate_q_3, _gate_q_13;
  ry(5.272328974985468) _gate_q_4;
  sx _gate_q_11;
  U(5.508906886827925, 2.9510068111878405, 1.6162423676741327) _gate_q_12;
  cy _gate_q_2, _gate_q_18;
  swap _gate_q_16, _gate_q_17;
  ryy_5070435008(2.6092858348080754) _gate_q_9, _gate_q_15;
  ryy_5070437408(0.360001218951865) _gate_q_8, _gate_q_5;
  sdg _gate_q_11;
  cs _gate_q_3, _gate_q_9;
  cp(4.758524309279643) _gate_q_10, _gate_q_16;
  ryy_5070428480(3.42309891553826) _gate_q_4, _gate_q_12;
  xx_minus_yy_5070437792(5.0225288276674265, 0.5380513555239756) _gate_q_13, _gate_q_0;
  sx _gate_q_15;
  id _gate_q_7;
  rz(3.8135688100660166) _gate_q_2;
  cx _gate_q_6, _gate_q_19;
  cx _gate_q_14, _gate_q_17;
  ryy_5070429392(1.430451512023828) _gate_q_18, _gate_q_1;
  sdg _gate_q_10;
  cu1_5070424064(3.73651444259313) _gate_q_9, _gate_q_7;
  cry(5.5510992873425495) _gate_q_5, _gate_q_17;
  crz(3.6226965079496973) _gate_q_14, _gate_q_0;
  r_5070423824(5.853308500959711, 1.23630869346355) _gate_q_2;
  csdg _gate_q_1, _gate_q_19;
  cu1_5070430016(0.05873132457455325) _gate_q_4, _gate_q_12;
  csx _gate_q_11, _gate_q_13;
  r_5070432320(2.2746043597216334, 3.679860050780456) _gate_q_16;
  rz(0.37755477074909144) _gate_q_8;
  ch _gate_q_6, _gate_q_18;
  tdg _gate_q_3;
  u2(5.1953921273184065, 0.8598215281407412) _gate_q_15;
  s _gate_q_14;
  rzz_5070431168(5.208576258982133) _gate_q_16, _gate_q_19;
  iswap _gate_q_17, _gate_q_5;
  u1(1.9180063200175572) _gate_q_4;
  u1(6.107605314554581) _gate_q_3;
  xx_minus_yy_5070430448(5.907591607061564, 1.622271280615181) _gate_q_7, _gate_q_2;
  cy _gate_q_6, _gate_q_0;
  u1(1.1564903597385594) _gate_q_8;
  cp(2.0408629973520394) _gate_q_13, _gate_q_11;
  id _gate_q_10;
  iswap _gate_q_9, _gate_q_18;
  ryy_5070425120(1.6393333219806623) _gate_q_1, _gate_q_15;
  id _gate_q_12;
  rz(2.1967996007185935) _gate_q_10;
  csdg _gate_q_5, _gate_q_16;
  ch _gate_q_12, _gate_q_19;
  cu3_5070434816(4.2697759277209615, 1.9775948442364524, 5.710648164433139) _gate_q_14, _gate_q_9;
  u3(5.231828623009714, 1.9727489235167401, 4.024207144751249) _gate_q_18;
  cu3_5070434720(4.088617051849762, 4.227375193973947, 5.90143556806298) _gate_q_8, _gate_q_1;
  id _gate_q_4;
  rzz_5070425072(2.6925775487106556) _gate_q_2, _gate_q_0;
  x _gate_q_15;
  rzz_5070422480(3.7395764797020465) _gate_q_3, _gate_q_11;
  cy _gate_q_6, _gate_q_7;
  xx_minus_yy_5070437456(1.3366392778873182, 6.137861966343952) _gate_q_13, _gate_q_17;
}
gate xx_plus_yy_5070423488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.656972521255642) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0858905040648548) _gate_q_1;
  ry(-3.0858905040648548) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.656972521255642) _gate_q_0;
}
gate rzx_5070424496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.823017161711256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070437648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.815734303157894) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9504549481696483) _gate_q_0;
  ry(-2.9504549481696483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.815734303157894) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070431120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.329242656253172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070431984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.686725546626594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070437024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.620284105104013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074823232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.928735014905538, 1.1728186183605862, -1.1728186183605862) _gate_q_0;
}
gate rzx_5074815936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2429080843827895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074816224(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7747807965934794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074818816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7633964232501134) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9187678671652668) _gate_q_1;
  ry(-1.9187678671652668) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7633964232501134) _gate_q_0;
}
gate rxx_5074818384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.857926642970289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074815888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.08468056272590305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7230292999422643) _gate_q_1;
  ry(-1.7230292999422643) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.08468056272590305) _gate_q_0;
}
gate xx_plus_yy_5074821552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.966286745796391) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5807837836632218) _gate_q_1;
  ry(-0.5807837836632218) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.966286745796391) _gate_q_0;
}
gate ryy_5074827168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3303767392876376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074822896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.697172467371782) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11487096559865598) _gate_q_1;
  ry(-0.11487096559865598) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.697172467371782) _gate_q_0;
}
gate cu3_5074829184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.258533714715543) _gate_q_0;
  u1(-0.3646846733114584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6120027029602837, 0, -4.258533714715543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6120027029602837, 4.623218388027001, 0) _gate_q_1;
}
gate rxx_5074822560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.788022904228467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074818336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.01039863627201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074822080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.09871111819229765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074825680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.331354776981589, 3.9574963224666657, -3.9574963224666657) _gate_q_0;
}
gate cu3_5074824096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.04893983667864) _gate_q_0;
  u1(-0.746271119481901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5272158603259539, 0, -5.04893983667864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5272158603259539, 5.795210956160541, 0) _gate_q_1;
}
gate rzz_5074827888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.054381759888253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074814784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.263703095806233) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074815504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.256414792508771) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5266412985608002) _gate_q_1;
  ry(-1.5266412985608002) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.256414792508771) _gate_q_0;
}
gate cu3_5074828512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3448230263328855) _gate_q_0;
  u1(0.7153315652408545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8420126461281394, 0, -2.3448230263328855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8420126461281394, 1.629491461092031, 0) _gate_q_1;
}
gate rzx_5074816656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0254219821222232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  z _gate_q_11;
  sdg _gate_q_0;
  tdg _gate_q_16;
  sdg _gate_q_18;
  id _gate_q_8;
  x _gate_q_3;
  xx_plus_yy_5070423488(6.1717810081297095, 4.656972521255642) _gate_q_10, _gate_q_17;
  sdg _gate_q_7;
  ecr _gate_q_4, _gate_q_12;
  rzx_5070424496(5.823017161711256) _gate_q_9, _gate_q_13;
  sx _gate_q_6;
  tdg _gate_q_2;
  tdg _gate_q_1;
  xx_minus_yy_5070437648(5.9009098963392965, 5.815734303157894) _gate_q_19, _gate_q_14;
  dcx _gate_q_15, _gate_q_5;
  y _gate_q_7;
  sdg _gate_q_10;
  iswap _gate_q_0, _gate_q_3;
  csx _gate_q_11, _gate_q_5;
  ryy_5070431120(4.329242656253172) _gate_q_13, _gate_q_4;
  cp(3.2653941653428613) _gate_q_19, _gate_q_1;
  rxx_5070431984(3.686725546626594) _gate_q_9, _gate_q_14;
  p(4.131852940948954) _gate_q_16;
  rzz_5070437024(5.620284105104013) _gate_q_12, _gate_q_8;
  sdg _gate_q_17;
  u2(3.4579887161372023, 2.0448427170541197) _gate_q_15;
  h _gate_q_6;
  crx(5.518264937257385) _gate_q_18, _gate_q_2;
  r_5074823232(3.928735014905538, 2.7436149451554828) _gate_q_1;
  U(5.2891925934806645, 4.5489889122412315, 5.806917328777811) _gate_q_10;
  cy _gate_q_2, _gate_q_4;
  p(5.412113393854601) _gate_q_0;
  rzx_5074815936(4.2429080843827895) _gate_q_3, _gate_q_13;
  rzz_5074816224(1.7747807965934794) _gate_q_14, _gate_q_17;
  xx_plus_yy_5074818816(3.8375357343305336, 2.7633964232501134) _gate_q_8, _gate_q_7;
  u2(3.751945715600559, 1.9559505920040994) _gate_q_6;
  cy _gate_q_11, _gate_q_12;
  s _gate_q_18;
  iswap _gate_q_5, _gate_q_9;
  dcx _gate_q_19, _gate_q_16;
  x _gate_q_15;
  csdg _gate_q_3, _gate_q_1;
  cu(5.814149598213364, 4.644677113206191, 0.18338335619815654, 5.554246597269679) _gate_q_7, _gate_q_17;
  rxx_5074818384(4.857926642970289) _gate_q_8, _gate_q_5;
  z _gate_q_16;
  U(1.2657675628927696, 6.194127640967846, 5.233518326028342) _gate_q_14;
  swap _gate_q_12, _gate_q_10;
  ecr _gate_q_19, _gate_q_6;
  y _gate_q_2;
  z _gate_q_9;
  cx _gate_q_11, _gate_q_4;
  u1(5.664940751429367) _gate_q_18;
  cx _gate_q_0, _gate_q_13;
  y _gate_q_15;
  cu(0.16941053549764837, 2.6406609746105123, 5.138817191713478, 3.4841985969247804) _gate_q_2, _gate_q_10;
  s _gate_q_13;
  xx_plus_yy_5074815888(3.4460585998845286, 0.08468056272590305) _gate_q_4, _gate_q_7;
  x _gate_q_1;
  xx_plus_yy_5074821552(1.1615675673264436, 1.966286745796391) _gate_q_11, _gate_q_8;
  u3(3.4639378440461495, 2.175613078757469, 0.46624580291735435) _gate_q_18;
  sdg _gate_q_3;
  rx(4.949043748006602) _gate_q_6;
  cy _gate_q_0, _gate_q_19;
  cz _gate_q_5, _gate_q_16;
  x _gate_q_9;
  cs _gate_q_14, _gate_q_17;
  u3(2.0857017734925574, 5.20756103895729, 3.523559967011176) _gate_q_12;
  sx _gate_q_15;
  cx _gate_q_9, _gate_q_11;
  u1(3.7249816083796894) _gate_q_8;
  u3(6.232398113121447, 2.4008674333173365, 3.8727305834245147) _gate_q_4;
  csx _gate_q_0, _gate_q_14;
  cry(2.177266912542272) _gate_q_16, _gate_q_15;
  sxdg _gate_q_5;
  cu(4.300191935083708, 4.317523028809681, 5.412618076141122, 3.854023249047538) _gate_q_17, _gate_q_18;
  ry(3.823314481338586) _gate_q_1;
  ryy_5074827168(2.3303767392876376) _gate_q_7, _gate_q_19;
  x _gate_q_3;
  iswap _gate_q_13, _gate_q_6;
  p(4.3357123870057) _gate_q_2;
  sdg _gate_q_10;
  sxdg _gate_q_12;
  tdg _gate_q_12;
  h _gate_q_19;
  cz _gate_q_17, _gate_q_0;
  y _gate_q_7;
  cs _gate_q_16, _gate_q_18;
  sdg _gate_q_10;
  x _gate_q_6;
  sx _gate_q_5;
  cs _gate_q_9, _gate_q_3;
  u2(4.886267643207186, 0.49934970204836987) _gate_q_4;
  ecr _gate_q_1, _gate_q_13;
  xx_plus_yy_5074822896(0.22974193119731195, 4.697172467371782) _gate_q_11, _gate_q_2;
  rx(0.37661013447843683) _gate_q_8;
  cu3_5074829184(5.224005405920567, 4.623218388027001, 3.8938490414040845) _gate_q_14, _gate_q_15;
  cry(1.8799902694423487) _gate_q_7, _gate_q_5;
  cx _gate_q_18, _gate_q_0;
  rxx_5074822560(2.788022904228467) _gate_q_17, _gate_q_16;
  rxx_5074818336(2.01039863627201) _gate_q_10, _gate_q_19;
  u1(3.016144742524525) _gate_q_12;
  rxx_5074822080(0.09871111819229765) _gate_q_6, _gate_q_13;
  sx _gate_q_11;
  id _gate_q_15;
  sxdg _gate_q_4;
  sdg _gate_q_2;
  cz _gate_q_8, _gate_q_14;
  cx _gate_q_3, _gate_q_1;
  r_5074825680(3.331354776981589, 5.528292649261562) _gate_q_9;
  cu3_5074824096(1.0544317206519078, 5.795210956160541, 4.302668717196739) _gate_q_8, _gate_q_18;
  x _gate_q_0;
  y _gate_q_12;
  sdg _gate_q_4;
  u2(3.6150250287632733, 1.006401741638137) _gate_q_14;
  rzz_5074827888(2.054381759888253) _gate_q_7, _gate_q_6;
  sx _gate_q_3;
  y _gate_q_13;
  id _gate_q_10;
  u1(2.1657881921538236) _gate_q_1;
  swap _gate_q_16, _gate_q_9;
  cs _gate_q_11, _gate_q_19;
  cs _gate_q_5, _gate_q_17;
  iswap _gate_q_2, _gate_q_15;
  t _gate_q_11;
  rzz_5074814784(3.263703095806233) _gate_q_10, _gate_q_8;
  x _gate_q_0;
  iswap _gate_q_6, _gate_q_2;
  cz _gate_q_7, _gate_q_5;
  xx_plus_yy_5074815504(3.0532825971216004, 6.256414792508771) _gate_q_3, _gate_q_12;
  cu3_5074828512(5.684025292256279, 1.629491461092031, 3.06015459157374) _gate_q_17, _gate_q_16;
  rzx_5074816656(2.0254219821222232) _gate_q_13, _gate_q_15;
  id _gate_q_4;
  swap _gate_q_9, _gate_q_1;
  t _gate_q_14;
  u2(4.349276054783895, 1.3735927105930117) _gate_q_19;
  t _gate_q_18;
}