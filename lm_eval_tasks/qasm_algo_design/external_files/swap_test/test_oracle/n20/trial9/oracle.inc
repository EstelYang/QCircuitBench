gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106329040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.50952065619092) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6210368404312063) _gate_q_1;
  ry(-1.6210368404312063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.50952065619092) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5106323472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.55181091557822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106331056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7695101526299926) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.88616229989551) _gate_q_1;
  ry(-1.88616229989551) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7695101526299926) _gate_q_0;
}
gate rxx_5106331008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.754055332009701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106333264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.596597060675832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106329376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.068389068700438) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106329520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.038739674513616) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.038739674513616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.038739674513616) _gate_q_1;
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
gate rxx_5106323376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.855923958764361) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106320112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.407543574252471) _gate_q_1;
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
gate r_5106329808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.161281524600321, 3.3232930265591794, -3.3232930265591794) _gate_q_0;
}
gate cu1_5106319440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1214840789493512) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1214840789493512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1214840789493512) _gate_q_1;
}
gate cu3_5106329904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6600949018714104) _gate_q_0;
  u1(-1.7275639636713676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8130253353025583, 0, -3.6600949018714104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8130253353025583, 5.387658865542778, 0) _gate_q_1;
}
gate rzz_5106323232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5561220390456982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106335424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.48458190039522353) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106324576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.859130546441628, 1.3518152126331948, -1.3518152126331948) _gate_q_0;
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
gate cu3_5106324192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3912077145468977) _gate_q_0;
  u1(1.2277845794552096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8507655986508422, 0, -3.3912077145468977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8507655986508422, 2.1634231350916884, 0) _gate_q_1;
}
gate rzx_5106330960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.856110884905749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106323856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2640165840568889) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2640165840568889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2640165840568889) _gate_q_1;
}
gate rzz_5106329088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8458134927585161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106331344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.679860485931805) _gate_q_0;
  u1(-0.2739870355089089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.381879685471639, 0, -1.679860485931805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.381879685471639, 1.9538475214407138, 0) _gate_q_1;
}
gate rzz_5106335040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.13152957597936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5106325296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.903426694246247) _gate_q_0;
  u1(-0.7086034242800627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3548411157192762, 0, -4.903426694246247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3548411157192762, 5.6120301185263095, 0) _gate_q_1;
}
gate ryy_5106327216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9306377393634264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106328272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.052903894633753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106334320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.080890571453225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106327120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4362658648882896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  xx_plus_yy_5106329040(3.2420736808624127, 2.50952065619092) _gate_q_8, _gate_q_18;
  crz(0.18935676516053798) _gate_q_5, _gate_q_0;
  sdg _gate_q_13;
  iswap _gate_q_19, _gate_q_1;
  z _gate_q_3;
  ch _gate_q_16, _gate_q_14;
  rz(2.8125458443810176) _gate_q_2;
  rzz_5106323472(1.55181091557822) _gate_q_12, _gate_q_15;
  y _gate_q_9;
  sdg _gate_q_6;
  cu(4.855493179140355, 2.6192387747225396, 2.9944284256944953, 5.338299236666922) _gate_q_7, _gate_q_17;
  sxdg _gate_q_11;
  crx(4.488337571014645) _gate_q_10, _gate_q_4;
  p(5.943124506989947) _gate_q_14;
  xx_plus_yy_5106331056(3.77232459979102, 0.7695101526299926) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_16;
  z _gate_q_8;
  sxdg _gate_q_4;
  rxx_5106331008(5.754055332009701) _gate_q_9, _gate_q_18;
  rx(4.026146668891862) _gate_q_17;
  cx _gate_q_15, _gate_q_12;
  u2(4.94152277906241, 5.146263677213293) _gate_q_1;
  ry(4.957934295496075) _gate_q_19;
  rzz_5106333264(4.596597060675832) _gate_q_10, _gate_q_2;
  cz _gate_q_7, _gate_q_13;
  rzx_5106329376(5.068389068700438) _gate_q_11, _gate_q_5;
  cu1_5106329520(2.077479349027232) _gate_q_16, _gate_q_8;
  y _gate_q_3;
  cs _gate_q_18, _gate_q_12;
  cu(4.455612891401973, 0.07150195514480456, 4.967658182767164, 2.4567930278630694) _gate_q_11, _gate_q_7;
  crz(1.0251825782301334) _gate_q_4, _gate_q_10;
  crz(1.5638280274652294) _gate_q_0, _gate_q_14;
  cx _gate_q_19, _gate_q_17;
  s _gate_q_6;
  cry(4.8697390189621865) _gate_q_9, _gate_q_2;
  csx _gate_q_15, _gate_q_1;
  cs _gate_q_13, _gate_q_5;
  cu(3.7071959499922196, 5.807681993486413, 2.4528199282036094, 6.226462582007628) _gate_q_11, _gate_q_13;
  rx(0.29598250116444813) _gate_q_19;
  rxx_5106323376(3.855923958764361) _gate_q_10, _gate_q_7;
  cu(2.697135168505203, 5.007374473041104, 5.465922939754729, 4.880141946946824) _gate_q_17, _gate_q_4;
  p(0.06634122190128297) _gate_q_16;
  t _gate_q_14;
  y _gate_q_3;
  rxx_5106320112(4.407543574252471) _gate_q_9, _gate_q_0;
  cx _gate_q_1, _gate_q_18;
  sdg _gate_q_8;
  ry(2.4612475604076227) _gate_q_6;
  cu(1.70351322638051, 2.3066333014166402, 0.20286772789563035, 3.0466753201456642) _gate_q_12, _gate_q_15;
  csdg _gate_q_2, _gate_q_5;
  rz(2.705873459937817) _gate_q_18;
  r_5106329808(6.161281524600321, 4.894089353354076) _gate_q_1;
  cu1_5106319440(2.2429681578987024) _gate_q_9, _gate_q_14;
  tdg _gate_q_10;
  sx _gate_q_6;
  cu3_5106329904(5.6260506706051165, 5.387658865542778, 1.9325309382000428) _gate_q_3, _gate_q_0;
  iswap _gate_q_13, _gate_q_2;
  cy _gate_q_7, _gate_q_5;
  rzz_5106323232(1.5561220390456982) _gate_q_16, _gate_q_17;
  ryy_5106335424(0.48458190039522353) _gate_q_8, _gate_q_12;
  r_5106324576(5.859130546441628, 2.9226115394280914) _gate_q_15;
  ch _gate_q_4, _gate_q_11;
  sx _gate_q_19;
  t _gate_q_10;
  u1(3.129007063043125) _gate_q_19;
  cx _gate_q_8, _gate_q_5;
  u1(1.334242235200501) _gate_q_14;
  id _gate_q_18;
  ecr _gate_q_11, _gate_q_7;
  ch _gate_q_17, _gate_q_9;
  cu3_5106324192(3.7015311973016845, 2.1634231350916884, 4.6189922940021075) _gate_q_15, _gate_q_4;
  crx(3.287703701884043) _gate_q_13, _gate_q_6;
  h _gate_q_0;
  rzx_5106330960(5.856110884905749) _gate_q_16, _gate_q_3;
  crz(1.3286880357433575) _gate_q_1, _gate_q_2;
  U(2.6307274294045215, 4.194461690361644, 6.079905428777901) _gate_q_12;
  z _gate_q_6;
  h _gate_q_18;
  cy _gate_q_10, _gate_q_11;
  y _gate_q_14;
  cz _gate_q_9, _gate_q_5;
  cy _gate_q_1, _gate_q_4;
  U(2.4834401419919767, 5.01884505880864, 6.11186541832455) _gate_q_15;
  cu1_5106323856(2.5280331681137778) _gate_q_8, _gate_q_2;
  t _gate_q_0;
  cs _gate_q_7, _gate_q_3;
  h _gate_q_17;
  rzz_5106329088(1.8458134927585161) _gate_q_13, _gate_q_16;
  ch _gate_q_12, _gate_q_19;
  crx(2.8564998439074634) _gate_q_2, _gate_q_16;
  z _gate_q_18;
  h _gate_q_15;
  u2(2.310031699213264, 0.08995483472222436) _gate_q_0;
  iswap _gate_q_8, _gate_q_12;
  x _gate_q_5;
  z _gate_q_19;
  cu3_5106331344(4.763759370943278, 1.9538475214407138, 1.405873450422896) _gate_q_13, _gate_q_9;
  s _gate_q_1;
  h _gate_q_11;
  csdg _gate_q_4, _gate_q_6;
  u3(1.5654185864855783, 3.5627641297590698, 3.538303470521738) _gate_q_10;
  cry(1.8180492309063099) _gate_q_17, _gate_q_14;
  cx _gate_q_7, _gate_q_3;
  cs _gate_q_19, _gate_q_14;
  rzz_5106335040(6.13152957597936) _gate_q_4, _gate_q_0;
  ch _gate_q_11, _gate_q_18;
  dcx _gate_q_9, _gate_q_13;
  csdg _gate_q_7, _gate_q_15;
  sdg _gate_q_16;
  cs _gate_q_10, _gate_q_8;
  cu3_5106325296(0.7096822314385524, 5.6120301185263095, 4.194823269966184) _gate_q_12, _gate_q_3;
  y _gate_q_17;
  h _gate_q_6;
  ryy_5106327216(1.9306377393634264) _gate_q_1, _gate_q_2;
  s _gate_q_5;
  csx _gate_q_14, _gate_q_18;
  crx(0.41951144234871496) _gate_q_9, _gate_q_16;
  csdg _gate_q_17, _gate_q_19;
  ryy_5106328272(4.052903894633753) _gate_q_13, _gate_q_12;
  iswap _gate_q_5, _gate_q_2;
  s _gate_q_4;
  U(5.042188848003905, 4.593630869397898, 3.4354105930320564) _gate_q_10;
  u1(5.908015762447711) _gate_q_11;
  x _gate_q_8;
  rxx_5106334320(3.080890571453225) _gate_q_6, _gate_q_7;
  swap _gate_q_1, _gate_q_0;
  ryy_5106327120(1.4362658648882896) _gate_q_3, _gate_q_15;
}
gate r_5106993056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8689227994500569, 0.2071865233760457, -0.2071865233760457) _gate_q_0;
}
gate r_5106994736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.075603016596275, 1.3911811760370765, -1.3911811760370765) _gate_q_0;
}
gate rzz_5106991520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5047483095570631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106993200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.304645745087123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106999392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8536123085764034) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6024011624686089) _gate_q_0;
  ry(-0.6024011624686089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8536123085764034) _gate_q_1;
}
gate r_5107002128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7084801546253536, -1.2674288735730117, 1.2674288735730117) _gate_q_0;
}
gate rxx_5107003232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.074545959339412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107000544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0204141778010096) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2231027020646597) _gate_q_0;
  ry(-2.2231027020646597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0204141778010096) _gate_q_1;
}
gate cu3_5106993248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.264577528044594) _gate_q_0;
  u1(0.7079226617703531) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5786764509520737, 0, -3.264577528044594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5786764509520737, 2.5566548662742408, 0) _gate_q_1;
}
gate xx_plus_yy_5106995984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4151364014613836) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9823818836543418) _gate_q_1;
  ry(-0.9823818836543418) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4151364014613836) _gate_q_0;
}
gate rzx_5106996464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0496445679524693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106998672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.213369937167414) _gate_q_0;
  u1(-2.0226394241855346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7675970193794448, 0, -3.213369937167414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7675970193794448, 5.236009361352949, 0) _gate_q_1;
}
gate xx_minus_yy_5107005344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.370394174424095) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7770372388306783) _gate_q_0;
  ry(-1.7770372388306783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.370394174424095) _gate_q_1;
}
gate rzx_5107007312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.943278106561516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107004528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.490504373514584) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.801862784786242) _gate_q_0;
  ry(-1.801862784786242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.490504373514584) _gate_q_1;
}
gate rxx_5106995936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.002138148044667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106996752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0601724389765788, -0.4581123426681548, 0.4581123426681548) _gate_q_0;
}
gate xx_plus_yy_5106991376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.804784750115478) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0770066409109789) _gate_q_1;
  ry(-1.0770066409109789) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.804784750115478) _gate_q_0;
}
gate ryy_5107004432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2550939036898386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107000496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.971937236622124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106995888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.032308279487977) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.032308279487977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.032308279487977) _gate_q_1;
}
gate ryy_5106994064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.169015162736296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107006352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.118878843656479) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107000160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.318078952595684) _gate_q_0;
  u1(-2.06004626690994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3757714347962635, 0, -3.318078952595684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3757714347962635, 5.378125219505624, 0) _gate_q_1;
}
gate rzx_5106995024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2565491483080287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107001696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2470246469093658) _gate_q_0;
  u1(0.8300321912177653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0463702461276436, 0, -3.2470246469093658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0463702461276436, 2.4169924556916005, 0) _gate_q_1;
}
gate cu1_5106998528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.396396540978319) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.396396540978319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.396396540978319) _gate_q_1;
}
gate rzz_5107007360(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.5560161850496135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106996800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5600488472170944) _gate_q_0;
  u1(2.4564665807368935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.020201781096514087, 0, -3.5600488472170944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.020201781096514087, 1.1035822664802009, 0) _gate_q_1;
}
gate cu3_5107003280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.301667595019047) _gate_q_0;
  u1(-1.3768005557338716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8001278840227647, 0, -4.301667595019047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8001278840227647, 5.678468150752918, 0) _gate_q_1;
}
gate cu3_5106998768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.128307005176716) _gate_q_0;
  u1(2.943237467448878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7023156863243045, 0, -3.128307005176716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7023156863243045, 0.18506953772783757, 0) _gate_q_1;
}
gate rxx_5107005248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.062065651687907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cp(5.427170091656667) _gate_q_2, _gate_q_19;
  rz(4.735504143407917) _gate_q_5;
  csx _gate_q_12, _gate_q_6;
  r_5106993056(0.8689227994500569, 1.7779828501709423) _gate_q_8;
  dcx _gate_q_17, _gate_q_10;
  sxdg _gate_q_9;
  ecr _gate_q_11, _gate_q_18;
  r_5106994736(4.075603016596275, 2.961977502831973) _gate_q_13;
  rzz_5106991520(0.5047483095570631) _gate_q_0, _gate_q_14;
  rxx_5106993200(5.304645745087123) _gate_q_15, _gate_q_4;
  xx_minus_yy_5106999392(1.2048023249372177, 1.8536123085764034) _gate_q_1, _gate_q_3;
  dcx _gate_q_7, _gate_q_16;
  h _gate_q_7;
  r_5107002128(3.7084801546253536, 0.30336745322188485) _gate_q_17;
  dcx _gate_q_0, _gate_q_13;
  cs _gate_q_5, _gate_q_6;
  cz _gate_q_4, _gate_q_8;
  cx _gate_q_2, _gate_q_16;
  p(4.795352941788029) _gate_q_18;
  rxx_5107003232(6.074545959339412) _gate_q_19, _gate_q_1;
  ch _gate_q_3, _gate_q_14;
  y _gate_q_11;
  xx_minus_yy_5107000544(4.446205404129319, 2.0204141778010096) _gate_q_9, _gate_q_12;
  cz _gate_q_10, _gate_q_15;
  y _gate_q_1;
  sdg _gate_q_10;
  rz(2.217700975715741) _gate_q_15;
  id _gate_q_2;
  cu3_5106993248(3.1573529019041473, 2.5566548662742408, 3.972500189814947) _gate_q_16, _gate_q_19;
  xx_plus_yy_5106995984(1.9647637673086835, 3.4151364014613836) _gate_q_9, _gate_q_3;
  crx(6.064117160014999) _gate_q_5, _gate_q_17;
  sxdg _gate_q_12;
  rzx_5106996464(3.0496445679524693) _gate_q_11, _gate_q_4;
  cu3_5106998672(3.5351940387588896, 5.236009361352949, 1.1907305129818797) _gate_q_13, _gate_q_14;
  sx _gate_q_6;
  dcx _gate_q_0, _gate_q_7;
  xx_minus_yy_5107005344(3.5540744776613566, 5.370394174424095) _gate_q_18, _gate_q_8;
  csdg _gate_q_11, _gate_q_14;
  rzx_5107007312(4.943278106561516) _gate_q_3, _gate_q_12;
  xx_minus_yy_5107004528(3.603725569572484, 5.490504373514584) _gate_q_9, _gate_q_17;
  y _gate_q_16;
  rxx_5106995936(2.002138148044667) _gate_q_18, _gate_q_1;
  U(2.7385482202140183, 0.2612063267222006, 0.9014652725548278) _gate_q_6;
  csdg _gate_q_15, _gate_q_13;
  p(1.344289948950063) _gate_q_0;
  dcx _gate_q_19, _gate_q_7;
  cs _gate_q_5, _gate_q_10;
  r_5106996752(1.0601724389765788, 1.1126839841267417) _gate_q_8;
  cu(2.0600231448306863, 3.3772568639060676, 0.8984289838601783, 4.460733324495376) _gate_q_4, _gate_q_2;
  xx_plus_yy_5106991376(2.1540132818219577, 4.804784750115478) _gate_q_4, _gate_q_8;
  ryy_5107004432(0.2550939036898386) _gate_q_1, _gate_q_5;
  cry(2.2442391432149456) _gate_q_7, _gate_q_12;
  rzx_5107000496(1.971937236622124) _gate_q_19, _gate_q_15;
  cu1_5106995888(6.064616558975954) _gate_q_3, _gate_q_10;
  rx(3.51717771842827) _gate_q_2;
  cs _gate_q_6, _gate_q_0;
  h _gate_q_18;
  ryy_5106994064(5.169015162736296) _gate_q_14, _gate_q_9;
  t _gate_q_13;
  t _gate_q_11;
  cx _gate_q_16, _gate_q_17;
  sxdg _gate_q_3;
  ry(4.0841859983974365) _gate_q_1;
  rzz_5107006352(5.118878843656479) _gate_q_9, _gate_q_10;
  swap _gate_q_17, _gate_q_7;
  h _gate_q_4;
  cu3_5107000160(2.751542869592527, 5.378125219505624, 1.2580326856857442) _gate_q_16, _gate_q_6;
  y _gate_q_8;
  sdg _gate_q_15;
  y _gate_q_0;
  s _gate_q_5;
  swap _gate_q_13, _gate_q_11;
  cry(3.593577910366157) _gate_q_14, _gate_q_2;
  rx(3.124686229500472) _gate_q_18;
  cs _gate_q_19, _gate_q_12;
  u3(4.349716258473167, 0.050736028625860206, 1.2401333566481725) _gate_q_3;
  rzx_5106995024(1.2565491483080287) _gate_q_0, _gate_q_17;
  cy _gate_q_7, _gate_q_2;
  crz(0.8819820148337654) _gate_q_10, _gate_q_14;
  cu3_5107001696(6.092740492255287, 2.4169924556916005, 4.077056838127131) _gate_q_16, _gate_q_11;
  rx(1.3312489754634476) _gate_q_19;
  id _gate_q_9;
  cp(3.0975088918598233) _gate_q_6, _gate_q_8;
  cu1_5106998528(4.792793081956638) _gate_q_18, _gate_q_4;
  x _gate_q_13;
  ry(0.9777026985737691) _gate_q_1;
  crz(3.539562666778168) _gate_q_12, _gate_q_5;
  s _gate_q_15;
  crz(5.409503755215906) _gate_q_10, _gate_q_17;
  u2(0.16113933695654606, 0.038882897016214175) _gate_q_13;
  x _gate_q_11;
  rzz_5107007360(5.5560161850496135) _gate_q_5, _gate_q_0;
  swap _gate_q_19, _gate_q_16;
  cu3_5106996800(0.040403562193028174, 1.1035822664802009, 6.016515427953988) _gate_q_18, _gate_q_9;
  swap _gate_q_6, _gate_q_3;
  ch _gate_q_7, _gate_q_14;
  cx _gate_q_12, _gate_q_15;
  rx(3.514198885334404) _gate_q_2;
  u2(5.705734984615509, 3.007856088461769) _gate_q_8;
  x _gate_q_4;
  t _gate_q_1;
  cu3_5107003280(1.6002557680455294, 5.678468150752918, 2.924867039285175) _gate_q_2, _gate_q_8;
  crz(4.968657465609081) _gate_q_16, _gate_q_19;
  csx _gate_q_12, _gate_q_15;
  ecr _gate_q_17, _gate_q_11;
  u3(1.9577768724677689, 5.80007470437156, 5.309749744606613) _gate_q_1;
  dcx _gate_q_7, _gate_q_4;
  rx(3.0516756495981516) _gate_q_3;
  sx _gate_q_6;
  u2(1.7077700887905394, 1.146815258860684) _gate_q_18;
  cry(4.91859250811557) _gate_q_10, _gate_q_13;
  iswap _gate_q_5, _gate_q_0;
  h _gate_q_14;
  sdg _gate_q_9;
  cu3_5106998768(3.404631372648609, 0.18506953772783757, 6.071544472625594) _gate_q_8, _gate_q_10;
  rxx_5107005248(3.062065651687907) _gate_q_7, _gate_q_16;
  p(1.6448366926920541) _gate_q_5;
  swap _gate_q_9, _gate_q_18;
  rz(2.6792927812453664) _gate_q_0;
  ecr _gate_q_6, _gate_q_1;
  p(3.751024079601873) _gate_q_4;
  U(5.744965815794664, 6.058400810670506, 4.055821180692501) _gate_q_11;
  cz _gate_q_2, _gate_q_3;
  cs _gate_q_19, _gate_q_13;
  U(2.9929250009375803, 5.57449070208038, 3.1418673980787593) _gate_q_14;
  s _gate_q_12;
  crz(0.2323350893157083) _gate_q_15, _gate_q_17;
}