gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5107004192(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.140171475024703) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.140171475024703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.140171475024703) _gate_q_1;
}
gate rxx_5107004288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9217233859391087) _gate_q_1;
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
gate cu3_5107003568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1900154886003125) _gate_q_0;
  u1(0.6223975073642908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8251193446421483, 0, -2.1900154886003125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8251193446421483, 1.5676179812360218, 0) _gate_q_1;
}
gate xx_plus_yy_5107003328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6249238042517095) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3076916703426926) _gate_q_1;
  ry(-2.3076916703426926) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6249238042517095) _gate_q_0;
}
gate rzx_5107000496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.552214142040976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107003280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.815474659529941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107001792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.875810443942518) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7976487533066448) _gate_q_0;
  ry(-1.7976487533066448) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.875810443942518) _gate_q_1;
}
gate cu1_5106996464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5100780407108282) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5100780407108282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5100780407108282) _gate_q_1;
}
gate xx_plus_yy_5107006928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6431956710196767) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.383452599494246) _gate_q_1;
  ry(-1.383452599494246) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6431956710196767) _gate_q_0;
}
gate ryy_5106999632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6321547108894803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107002416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3662916168686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rzz_5107002128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8636790525388562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate cu1_5106995408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.091000036985773) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.091000036985773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.091000036985773) _gate_q_1;
}
gate rzx_5107005824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0152618241756157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106998768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8492397617262638, -1.23715035498488, 1.23715035498488) _gate_q_0;
}
gate cu3_5106996848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.385762395394275) _gate_q_0;
  u1(0.5519920511465473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8013471682309957, 0, -5.385762395394275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8013471682309957, 4.8337703442477284, 0) _gate_q_1;
}
gate ryy_5107000400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.735429711193923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107005200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.119803872548287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106999008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4170558362274632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u1(3.4774109026330975) _gate_q_2;
  sxdg _gate_q_7;
  cs _gate_q_4, _gate_q_1;
  cry(1.8713533946512957) _gate_q_0, _gate_q_3;
  cu(4.644506833570472, 2.6813955949331816, 3.0895629378263103, 1.0402407789023511) _gate_q_9, _gate_q_6;
  id _gate_q_8;
  tdg _gate_q_5;
  tdg _gate_q_7;
  cu1_5107004192(4.280342950049406) _gate_q_8, _gate_q_6;
  cy _gate_q_5, _gate_q_4;
  u1(4.775684157391634) _gate_q_9;
  rxx_5107004288(2.9217233859391087) _gate_q_1, _gate_q_0;
  id _gate_q_2;
  p(3.60303564812639) _gate_q_3;
  csdg _gate_q_0, _gate_q_2;
  cp(3.3810931207546244) _gate_q_3, _gate_q_7;
  swap _gate_q_1, _gate_q_6;
  cry(5.772155081222735) _gate_q_9, _gate_q_5;
  rz(5.232911228322152) _gate_q_8;
  U(4.221326155079254, 4.532840018915626, 0.8721715066533883) _gate_q_4;
  cu3_5107003568(3.6502386892842966, 1.5676179812360218, 2.8124129959646034) _gate_q_8, _gate_q_9;
  xx_plus_yy_5107003328(4.615383340685385, 0.6249238042517095) _gate_q_2, _gate_q_5;
  u3(2.3897848151114807, 2.941705954359712, 1.458203746713204) _gate_q_1;
  tdg _gate_q_6;
  rzx_5107000496(5.552214142040976) _gate_q_0, _gate_q_7;
  ry(3.9110584295424062) _gate_q_3;
  u2(5.921912145024525, 1.6279099217304733) _gate_q_4;
  rzx_5107003280(5.815474659529941) _gate_q_4, _gate_q_7;
  xx_minus_yy_5107001792(3.5952975066132895, 2.875810443942518) _gate_q_9, _gate_q_1;
  z _gate_q_2;
  sdg _gate_q_6;
  cu1_5106996464(1.0201560814216564) _gate_q_0, _gate_q_8;
  crz(0.9902820851536096) _gate_q_3, _gate_q_5;
  xx_plus_yy_5107006928(2.766905198988492, 0.6431956710196767) _gate_q_4, _gate_q_5;
  rx(2.381203065302653) _gate_q_3;
  sxdg _gate_q_7;
  cp(6.078274464710075) _gate_q_9, _gate_q_6;
  ryy_5106999632(1.6321547108894803) _gate_q_8, _gate_q_0;
  ryy_5107002416(1.3662916168686) _gate_q_1, _gate_q_2;
  cry(2.0758529318938863) _gate_q_1, _gate_q_0;
  t _gate_q_7;
  ecr _gate_q_3, _gate_q_8;
  sx _gate_q_4;
  rzz_5107002128(3.8636790525388562) _gate_q_9, _gate_q_5;
  u2(5.153326821637831, 2.3615437645913357) _gate_q_2;
  sdg _gate_q_6;
  csx _gate_q_0, _gate_q_7;
  rx(4.5868828779701625) _gate_q_3;
  cu1_5106995408(6.182000073971546) _gate_q_8, _gate_q_9;
  rzx_5107005824(1.0152618241756157) _gate_q_4, _gate_q_1;
  ry(0.6937530977853097) _gate_q_2;
  id _gate_q_6;
  r_5106998768(0.8492397617262638, 0.3336459718100166) _gate_q_5;
  z _gate_q_7;
  y _gate_q_5;
  cu(2.884939356778306, 0.6341484647855092, 4.73808253660417, 3.291566105922017) _gate_q_3, _gate_q_9;
  cry(4.3615316473258146) _gate_q_2, _gate_q_6;
  cu3_5106996848(1.6026943364619914, 4.8337703442477284, 5.937754446540823) _gate_q_8, _gate_q_0;
  ryy_5107000400(2.735429711193923) _gate_q_4, _gate_q_1;
  rzz_5107005200(3.119803872548287) _gate_q_2, _gate_q_6;
  u1(3.17037400700874) _gate_q_9;
  rz(1.3007822715615989) _gate_q_0;
  rxx_5106999008(1.4170558362274632) _gate_q_8, _gate_q_7;
  rx(6.175245403495631) _gate_q_5;
  u2(6.163687052497248, 5.096751507133266) _gate_q_1;
  ecr _gate_q_3, _gate_q_4;
}
gate ryy_5106581088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.505729071337808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106568368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.864717682844754) _gate_q_0;
  u1(-1.0750528686435852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3658728531103386, 0, -3.864717682844754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3658728531103386, 4.939770551488339, 0) _gate_q_1;
}
gate xx_plus_yy_5106579792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.88609134260645) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5488845485972267) _gate_q_1;
  ry(-0.5488845485972267) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.88609134260645) _gate_q_0;
}
gate xx_plus_yy_5106570336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.263511747205783) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7381358663731109) _gate_q_1;
  ry(-0.7381358663731109) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.263511747205783) _gate_q_0;
}
gate r_5106580944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5802591866017135, 0.7775737627358486, -0.7775737627358486) _gate_q_0;
}
gate xx_plus_yy_5106580656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5178965984233734) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.968793166449556) _gate_q_1;
  ry(-1.968793166449556) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5178965984233734) _gate_q_0;
}
gate ryy_5106579696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.606249639218372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106570432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.050475009449377) _gate_q_0;
  u1(1.1833959044028348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.157245982868575, 0, -4.050475009449377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.157245982868575, 2.8670791050465425, 0) _gate_q_1;
}
gate r_5106566352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0569402453729737, 2.1821121024857626, -2.1821121024857626) _gate_q_0;
}
gate ryy_5106578688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.686298788574165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106572736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.735181572815492) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0585709529527323) _gate_q_0;
  ry(-2.0585709529527323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.735181572815492) _gate_q_1;
}
gate r_5106578976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1503658276221698, 0.5278881097463239, -0.5278881097463239) _gate_q_0;
}
gate cu1_5106577920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.24468166413846595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.24468166413846595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.24468166413846595) _gate_q_1;
}
gate cu3_5106577824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.619843535386268) _gate_q_0;
  u1(0.15755753475742873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.101548412360212, 0, -4.619843535386268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.101548412360212, 4.46228600062884, 0) _gate_q_1;
}
gate xx_plus_yy_5106576768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.153557435439519) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09899056393735309) _gate_q_1;
  ry(-0.09899056393735309) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.153557435439519) _gate_q_0;
}
gate rzz_5106576576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7673341267704767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  tdg _gate_q_5;
  cy _gate_q_1, _gate_q_2;
  cy _gate_q_7, _gate_q_6;
  h _gate_q_3;
  rx(2.5688896103656402) _gate_q_8;
  cu(4.1316339214809155, 3.2157479310410486, 3.436455243193654, 5.557025146798053) _gate_q_9, _gate_q_0;
  s _gate_q_4;
  crz(1.2054259290749012) _gate_q_3, _gate_q_7;
  ryy_5106581088(5.505729071337808) _gate_q_4, _gate_q_5;
  cx _gate_q_2, _gate_q_8;
  cu3_5106568368(0.7317457062206773, 4.939770551488339, 2.7896648142011684) _gate_q_9, _gate_q_0;
  xx_plus_yy_5106579792(1.0977690971944534, 4.88609134260645) _gate_q_1, _gate_q_6;
  cu(1.3518060668311758, 1.2273078468779683, 3.0318158345483175, 2.7313954831522222) _gate_q_2, _gate_q_4;
  u1(4.873440335289425) _gate_q_1;
  sxdg _gate_q_8;
  h _gate_q_5;
  U(3.50693755554462, 4.771013015958229, 3.970323230349724) _gate_q_6;
  rx(5.654943641001865) _gate_q_3;
  u2(3.2702119412778745, 4.855285994361354) _gate_q_0;
  s _gate_q_7;
  u3(4.168075812972865, 3.844909352851544, 4.726883555402545) _gate_q_9;
  ch _gate_q_2, _gate_q_5;
  tdg _gate_q_6;
  xx_plus_yy_5106570336(1.4762717327462218, 2.263511747205783) _gate_q_7, _gate_q_1;
  z _gate_q_3;
  r_5106580944(3.5802591866017135, 2.348370089530745) _gate_q_4;
  rz(4.892328658467038) _gate_q_8;
  xx_plus_yy_5106580656(3.937586332899112, 3.5178965984233734) _gate_q_0, _gate_q_9;
  ryy_5106579696(4.606249639218372) _gate_q_6, _gate_q_1;
  sdg _gate_q_7;
  cu(5.204812055438934, 0.7848207273391967, 3.74261753963297, 1.785148779881391) _gate_q_5, _gate_q_8;
  z _gate_q_9;
  s _gate_q_0;
  p(6.1561101744949305) _gate_q_3;
  p(2.1851782290721626) _gate_q_4;
  ry(4.678341553118815) _gate_q_2;
  cu3_5106570432(2.31449196573715, 2.8670791050465425, 5.233870913852212) _gate_q_8, _gate_q_4;
  r_5106566352(1.0569402453729737, 3.752908429280659) _gate_q_3;
  cz _gate_q_7, _gate_q_6;
  rx(2.723045729083201) _gate_q_1;
  cry(3.5479708052608774) _gate_q_9, _gate_q_5;
  s _gate_q_0;
  t _gate_q_2;
  s _gate_q_6;
  sx _gate_q_5;
  x _gate_q_7;
  ryy_5106578688(5.686298788574165) _gate_q_9, _gate_q_1;
  csx _gate_q_8, _gate_q_3;
  xx_minus_yy_5106572736(4.117141905905465, 0.735181572815492) _gate_q_4, _gate_q_2;
  u3(6.161494963941465, 1.9993739587417287, 6.017415105775721) _gate_q_0;
  id _gate_q_1;
  crx(1.6270248980023672) _gate_q_5, _gate_q_4;
  r_5106578976(2.1503658276221698, 2.0986844365412205) _gate_q_2;
  u2(3.544704900346004, 1.8796543234843137) _gate_q_9;
  sdg _gate_q_7;
  cu1_5106577920(0.4893633282769319) _gate_q_0, _gate_q_8;
  cu(4.634972056284308, 3.7111810350177006, 3.745552954458721, 4.4546013857771785) _gate_q_3, _gate_q_6;
  cu3_5106577824(4.203096824720424, 4.46228600062884, 4.777401070143697) _gate_q_8, _gate_q_1;
  s _gate_q_2;
  rz(2.077390009586671) _gate_q_9;
  xx_plus_yy_5106576768(0.19798112787470618, 5.153557435439519) _gate_q_0, _gate_q_4;
  rzz_5106576576(2.7673341267704767) _gate_q_5, _gate_q_7;
  u2(5.407101048914789, 0.5349674159041802) _gate_q_3;
  u1(2.665498508929867) _gate_q_6;
  dcx _gate_q_0, _gate_q_5;
  cu(1.1180092073948245, 2.8220845984108767, 5.289827812524229, 4.567738270186096) _gate_q_4, _gate_q_2;
  u2(1.3862814502090979, 4.6466788471379035) _gate_q_3;
  cy _gate_q_6, _gate_q_7;
  u1(2.1880088484453273) _gate_q_9;
  csx _gate_q_1, _gate_q_8;
}