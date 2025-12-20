gate rzx_5107006304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.608327565983132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rzx_5106992624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.166904358603422) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106993152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.342135946283576) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.207024531904779) _gate_q_1;
  ry(-2.207024531904779) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.342135946283576) _gate_q_0;
}
gate cu3_5107006256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.369243035188339) _gate_q_0;
  u1(0.7512100807478006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.710197078089299, 0, -4.369243035188339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.710197078089299, 3.618032954440539, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5106996080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.15756929344819512) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.15756929344819512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.15756929344819512) _gate_q_1;
}
gate rzz_5106993440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7019550021497414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106996032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3978434459920837) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5447070848362434) _gate_q_1;
  ry(-1.5447070848362434) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3978434459920837) _gate_q_0;
}
gate xx_plus_yy_5107003472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.453064917700137) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.816750253458367) _gate_q_1;
  ry(-2.816750253458367) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.453064917700137) _gate_q_0;
}
gate cu3_5106999968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4801053947323877) _gate_q_0;
  u1(-2.7227653907013374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5265533858817776, 0, -3.4801053947323877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5265533858817776, 6.202870785433725, 0) _gate_q_1;
}
gate rxx_5107003568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6910061156625895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107001408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.169080902928449) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8234735202692067) _gate_q_0;
  ry(-2.8234735202692067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.169080902928449) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5106994016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.580461976385633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107004960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.594683877541205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106991232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6902157947493421) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106999008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.670789399052045, 2.078348840168414, -2.078348840168414) _gate_q_0;
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
gate rxx_5106997232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.34253242276266144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107007024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.121680378516412, 4.687522542306931, -4.687522542306931) _gate_q_0;
}
gate rzz_5106996848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.150060298583659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107002416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5460982682209687) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.27955542786811394) _gate_q_1;
  ry(-0.27955542786811394) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5460982682209687) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5107001600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.1595434962147975) _gate_q_0;
  u1(-0.6010074592500709) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1635175855413626, 0, -5.1595434962147975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1635175855413626, 5.760550955464868, 0) _gate_q_1;
}
gate r_5107006544(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.46466742583257, 0.9671825414856632, -0.9671825414856632) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rzx_5107006304(2.608327565983132) _gate_q_3, _gate_q_17;
  ecr _gate_q_0, _gate_q_8;
  cp(1.8566643551456326) _gate_q_13, _gate_q_14;
  rzx_5106992624(3.166904358603422) _gate_q_1, _gate_q_12;
  sx _gate_q_16;
  iswap _gate_q_9, _gate_q_2;
  xx_plus_yy_5106993152(4.414049063809558, 5.342135946283576) _gate_q_7, _gate_q_6;
  cu3_5107006256(5.420394156178598, 3.618032954440539, 5.12045311593614) _gate_q_5, _gate_q_10;
  u2(4.64449052885951, 2.898557344568118) _gate_q_4;
  crx(6.103617659616654) _gate_q_11, _gate_q_15;
  z _gate_q_4;
  cu(5.436327682568149, 4.966768202500636, 3.237269471106498, 5.6313876909070455) _gate_q_14, _gate_q_10;
  sxdg _gate_q_17;
  ch _gate_q_3, _gate_q_12;
  dcx _gate_q_16, _gate_q_8;
  x _gate_q_2;
  rz(1.2484179586430455) _gate_q_0;
  rx(3.479281746223103) _gate_q_7;
  t _gate_q_13;
  y _gate_q_9;
  rx(0.198919797305824) _gate_q_1;
  ch _gate_q_5, _gate_q_15;
  ch _gate_q_6, _gate_q_11;
  rz(5.7746926287140194) _gate_q_8;
  U(2.8984931747922182, 3.7253567173209894, 5.0747308016911985) _gate_q_17;
  ry(5.393635451652303) _gate_q_6;
  u2(0.27518062464456816, 4.522436598367353) _gate_q_11;
  ch _gate_q_1, _gate_q_9;
  cu1_5106996080(0.31513858689639024) _gate_q_12, _gate_q_2;
  cx _gate_q_4, _gate_q_10;
  y _gate_q_13;
  h _gate_q_3;
  sdg _gate_q_5;
  t _gate_q_14;
  swap _gate_q_15, _gate_q_16;
  crx(0.8584249517327532) _gate_q_7, _gate_q_0;
  sxdg _gate_q_15;
  rzz_5106993440(1.7019550021497414) _gate_q_2, _gate_q_4;
  id _gate_q_17;
  xx_plus_yy_5106996032(3.089414169672487, 3.3978434459920837) _gate_q_7, _gate_q_14;
  ecr _gate_q_11, _gate_q_0;
  xx_plus_yy_5107003472(5.633500506916734, 2.453064917700137) _gate_q_9, _gate_q_16;
  t _gate_q_12;
  cz _gate_q_5, _gate_q_8;
  cu3_5106999968(1.0531067717635552, 6.202870785433725, 0.7573400040310502) _gate_q_1, _gate_q_6;
  x _gate_q_13;
  rxx_5107003568(4.6910061156625895) _gate_q_10, _gate_q_3;
  ecr _gate_q_15, _gate_q_8;
  xx_minus_yy_5107001408(5.6469470405384135, 6.169080902928449) _gate_q_10, _gate_q_13;
  z _gate_q_7;
  p(0.36847899024221314) _gate_q_6;
  rz(3.4639903647013015) _gate_q_9;
  z _gate_q_11;
  csdg _gate_q_2, _gate_q_16;
  swap _gate_q_3, _gate_q_12;
  t _gate_q_0;
  cry(0.9409390868674574) _gate_q_17, _gate_q_1;
  sdg _gate_q_14;
  sdg _gate_q_5;
  id _gate_q_4;
  rzz_5106994016(5.580461976385633) _gate_q_4, _gate_q_11;
  swap _gate_q_8, _gate_q_16;
  t _gate_q_10;
  sxdg _gate_q_3;
  ryy_5107004960(4.594683877541205) _gate_q_9, _gate_q_5;
  tdg _gate_q_1;
  y _gate_q_12;
  cp(3.038785454943981) _gate_q_6, _gate_q_2;
  ecr _gate_q_17, _gate_q_0;
  ry(4.531764967560966) _gate_q_15;
  t _gate_q_13;
  cy _gate_q_14, _gate_q_7;
  ch _gate_q_7, _gate_q_12;
  rxx_5106991232(1.6902157947493421) _gate_q_3, _gate_q_1;
  z _gate_q_8;
  s _gate_q_4;
  sxdg _gate_q_11;
  u1(4.0049578687327845) _gate_q_2;
  swap _gate_q_16, _gate_q_14;
  r_5106999008(5.670789399052045, 3.6491451669633106) _gate_q_17;
  csdg _gate_q_0, _gate_q_6;
  csx _gate_q_15, _gate_q_5;
  rxx_5106997232(0.34253242276266144) _gate_q_10, _gate_q_13;
  r_5107007024(2.121680378516412, 6.258318869101828) _gate_q_9;
  rzz_5106996848(5.150060298583659) _gate_q_8, _gate_q_7;
  cy _gate_q_14, _gate_q_2;
  u3(5.388630168514287, 5.088233431500988, 4.421349752188383) _gate_q_4;
  rz(0.2200387679671976) _gate_q_0;
  iswap _gate_q_17, _gate_q_16;
  sdg _gate_q_9;
  cx _gate_q_11, _gate_q_1;
  cu(4.000770348228911, 0.3707382356053646, 4.805445336077808, 5.695639157826393) _gate_q_10, _gate_q_15;
  cu(2.3898512524315203, 5.831932092696732, 5.696536899404366, 6.015677389958137) _gate_q_12, _gate_q_13;
  cz _gate_q_6, _gate_q_3;
  rx(0.1297439643144286) _gate_q_5;
  U(4.921630383458286, 2.425354538570859, 3.5401294342987426) _gate_q_14;
  crz(4.553292657462566) _gate_q_7, _gate_q_1;
  sx _gate_q_3;
  xx_plus_yy_5107002416(0.5591108557362279, 3.5460982682209687) _gate_q_4, _gate_q_17;
  sxdg _gate_q_15;
  cs _gate_q_8, _gate_q_9;
  y _gate_q_0;
  cx _gate_q_2, _gate_q_13;
  cp(0.7719218160483565) _gate_q_6, _gate_q_11;
  s _gate_q_5;
  cz _gate_q_16, _gate_q_12;
  rx(5.936217378784481) _gate_q_10;
  cs _gate_q_14, _gate_q_8;
  cu3_5107001600(2.3270351710827253, 5.760550955464868, 4.5585360369647265) _gate_q_7, _gate_q_9;
  u1(5.492520933825593) _gate_q_16;
  t _gate_q_6;
  rx(4.799006651750978) _gate_q_10;
  csdg _gate_q_4, _gate_q_17;
  cp(1.9673413108259945) _gate_q_3, _gate_q_5;
  r_5107006544(4.46466742583257, 2.5379788682805597) _gate_q_11;
  iswap _gate_q_13, _gate_q_0;
  cs _gate_q_15, _gate_q_1;
  cy _gate_q_2, _gate_q_12;
}
gate rxx_5116470880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.919650615450535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116475344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.965469052996139) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116473760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.473753533141584) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6352475286453487) _gate_q_1;
  ry(-1.6352475286453487) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.473753533141584) _gate_q_0;
}
gate r_5116471504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4787849631527858, 1.8437118517444526, -1.8437118517444526) _gate_q_0;
}
gate ryy_5116474528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.94305513048496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116466416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.991978797378863, 3.5141458902896163, -3.5141458902896163) _gate_q_0;
}
gate rzx_5116472032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.148076559836821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116470208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6157933658040444) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6157933658040444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6157933658040444) _gate_q_1;
}
gate xx_minus_yy_5116474816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1413976620722495) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1491833501387159) _gate_q_0;
  ry(-1.1491833501387159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1413976620722495) _gate_q_1;
}
gate cu1_5116473664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6165908919522909) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6165908919522909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6165908919522909) _gate_q_1;
}
gate rzz_5116471216(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.643911975313327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116471120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0056193703762966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116476976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.353726860409805) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.353726860409805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.353726860409805) _gate_q_1;
}
gate rxx_5116467184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.232090191868304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116471408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.998766763086302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116465456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.737823188492817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116468576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8460634799993363) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.359358020992045) _gate_q_0;
  ry(-1.359358020992045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8460634799993363) _gate_q_1;
}
gate rzz_5116469056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.691011207872882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116476064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5201331950813968) _gate_q_0;
  u1(-1.0655182390361262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.016156018244765744, 0, -3.5201331950813968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.016156018244765744, 4.585651434117523, 0) _gate_q_1;
}
gate rzx_5116474672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3551433625493001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5116469824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.133802877869636) _gate_q_0;
  u1(-1.1497711722674346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6042189845205577, 0, -3.133802877869636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6042189845205577, 4.28357405013707, 0) _gate_q_1;
}
gate cu1_5116469920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.33530732390886075) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.33530732390886075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.33530732390886075) _gate_q_1;
}
gate xx_plus_yy_5116462384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8228686906556364) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7864393133832568) _gate_q_1;
  ry(-1.7864393133832568) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8228686906556364) _gate_q_0;
}
gate xx_minus_yy_5116466560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6263752057486853) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.13864719187449834) _gate_q_0;
  ry(-0.13864719187449834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6263752057486853) _gate_q_1;
}
gate ryy_5116462288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6642414148057645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5116466080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.563045260625437) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.783283804079723) _gate_q_1;
  ry(-2.783283804079723) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.563045260625437) _gate_q_0;
}
gate rzz_5116462240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.127180114509823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cp(1.8650128298064417) _gate_q_13, _gate_q_10;
  cry(5.752419031200111) _gate_q_7, _gate_q_16;
  cz _gate_q_1, _gate_q_6;
  swap _gate_q_14, _gate_q_11;
  s _gate_q_5;
  z _gate_q_2;
  rxx_5116470880(5.919650615450535) _gate_q_17, _gate_q_3;
  rzz_5116475344(2.965469052996139) _gate_q_4, _gate_q_0;
  xx_plus_yy_5116473760(3.2704950572906974, 1.473753533141584) _gate_q_9, _gate_q_15;
  u1(1.9547018926485875) _gate_q_8;
  x _gate_q_12;
  x _gate_q_15;
  r_5116471504(1.4787849631527858, 3.414508178539349) _gate_q_12;
  u1(1.2955361799448988) _gate_q_17;
  ryy_5116474528(4.94305513048496) _gate_q_3, _gate_q_14;
  r_5116466416(4.991978797378863, 5.084942217084513) _gate_q_7;
  cry(4.602905766254309) _gate_q_2, _gate_q_0;
  U(0.631610935653143, 1.3614906013131007, 3.3349619193216142) _gate_q_1;
  tdg _gate_q_5;
  U(3.3438994875604586, 1.3404311868186936, 1.3077137403907864) _gate_q_16;
  cs _gate_q_13, _gate_q_11;
  ch _gate_q_4, _gate_q_8;
  swap _gate_q_9, _gate_q_6;
  sxdg _gate_q_10;
  z _gate_q_8;
  cry(5.52605664374459) _gate_q_15, _gate_q_16;
  u1(3.387161014277116) _gate_q_1;
  sxdg _gate_q_0;
  rzx_5116472032(1.148076559836821) _gate_q_17, _gate_q_3;
  cx _gate_q_12, _gate_q_2;
  cz _gate_q_4, _gate_q_5;
  cu1_5116470208(3.231586731608089) _gate_q_11, _gate_q_13;
  xx_minus_yy_5116474816(2.2983667002774317, 2.1413976620722495) _gate_q_10, _gate_q_9;
  cs _gate_q_6, _gate_q_14;
  y _gate_q_7;
  u2(0.7920963071601927, 0.5250094203591599) _gate_q_9;
  cu1_5116473664(3.2331817839045818) _gate_q_4, _gate_q_15;
  U(3.9278909184095374, 5.412260348818928, 4.080027018237198) _gate_q_17;
  cu(1.9451210937206886, 0.04034659087188524, 4.2521564905840945, 2.600072510545797) _gate_q_11, _gate_q_3;
  s _gate_q_6;
  cp(0.32234778237942335) _gate_q_14, _gate_q_12;
  tdg _gate_q_7;
  u1(1.5221271224858464) _gate_q_2;
  rzz_5116471216(5.643911975313327) _gate_q_16, _gate_q_8;
  ecr _gate_q_5, _gate_q_1;
  rzz_5116471120(3.0056193703762966) _gate_q_13, _gate_q_0;
  y _gate_q_10;
  t _gate_q_17;
  cp(6.133782087190412) _gate_q_9, _gate_q_13;
  csx _gate_q_14, _gate_q_16;
  U(3.2598623376855325, 2.5697533379052278, 1.1001007522843103) _gate_q_15;
  cz _gate_q_5, _gate_q_11;
  crx(4.162404348283688) _gate_q_0, _gate_q_7;
  cu1_5116476976(4.70745372081961) _gate_q_6, _gate_q_8;
  rxx_5116467184(5.232090191868304) _gate_q_3, _gate_q_4;
  t _gate_q_10;
  rxx_5116471408(5.998766763086302) _gate_q_12, _gate_q_1;
  y _gate_q_2;
  y _gate_q_5;
  rzz_5116465456(5.737823188492817) _gate_q_16, _gate_q_3;
  U(0.740907641322392, 1.701373669073223, 3.301918961470974) _gate_q_8;
  iswap _gate_q_6, _gate_q_12;
  tdg _gate_q_4;
  xx_minus_yy_5116468576(2.71871604198409, 1.8460634799993363) _gate_q_10, _gate_q_2;
  u1(5.097330349648648) _gate_q_9;
  rzz_5116469056(4.691011207872882) _gate_q_13, _gate_q_15;
  csx _gate_q_0, _gate_q_14;
  cu3_5116476064(0.03231203648953149, 4.585651434117523, 2.4546149560452704) _gate_q_1, _gate_q_17;
  cs _gate_q_7, _gate_q_11;
  rzx_5116474672(1.3551433625493001) _gate_q_13, _gate_q_16;
  cu3_5116469824(3.2084379690411153, 4.28357405013707, 1.984031705602201) _gate_q_7, _gate_q_4;
  u3(3.9890356540897702, 5.894507374041315, 5.618014488971864) _gate_q_11;
  y _gate_q_8;
  swap _gate_q_3, _gate_q_14;
  cu1_5116469920(0.6706146478177215) _gate_q_17, _gate_q_12;
  xx_plus_yy_5116462384(3.5728786267665136, 2.8228686906556364) _gate_q_6, _gate_q_5;
  csdg _gate_q_10, _gate_q_2;
  ry(5.449740154684804) _gate_q_1;
  csx _gate_q_0, _gate_q_9;
  x _gate_q_15;
  cz _gate_q_7, _gate_q_12;
  U(1.4873168323479908, 6.149931617553575, 2.68560109184779) _gate_q_1;
  xx_minus_yy_5116466560(0.2772943837489967, 1.6263752057486853) _gate_q_5, _gate_q_15;
  u3(1.1729396862345773, 1.0590304477970955, 5.446217255408047) _gate_q_16;
  ecr _gate_q_14, _gate_q_4;
  cry(4.641868882410499) _gate_q_0, _gate_q_6;
  z _gate_q_17;
  cx _gate_q_13, _gate_q_10;
  h _gate_q_2;
  h _gate_q_9;
  rx(3.1844760608919462) _gate_q_11;
  csx _gate_q_8, _gate_q_3;
  cp(5.813904098007474) _gate_q_9, _gate_q_6;
  ryy_5116462288(2.6642414148057645) _gate_q_12, _gate_q_3;
  cu(5.062731017002284, 3.832789051749739, 2.68814061749242, 5.437522237811914) _gate_q_10, _gate_q_13;
  xx_plus_yy_5116466080(5.566567608159446, 3.563045260625437) _gate_q_15, _gate_q_2;
  rzz_5116462240(3.127180114509823) _gate_q_8, _gate_q_17;
  dcx _gate_q_14, _gate_q_7;
  crx(2.4826162002170884) _gate_q_5, _gate_q_4;
  iswap _gate_q_1, _gate_q_11;
  cy _gate_q_0, _gate_q_16;
  crx(0.1454560222439973) _gate_q_14, _gate_q_12;
  t _gate_q_4;
  tdg _gate_q_0;
  rz(1.470766095162349) _gate_q_11;
  U(2.9363257460123227, 1.0723636009608792, 1.4979975682027602) _gate_q_1;
  crx(0.5853490547877864) _gate_q_6, _gate_q_7;
  ry(1.9449852366902185) _gate_q_2;
  csdg _gate_q_17, _gate_q_8;
  s _gate_q_10;
  cu(1.825973439808619, 1.5597067422238475, 5.199799109558872, 5.875289625380883) _gate_q_15, _gate_q_9;
  sdg _gate_q_16;
  rx(4.263474155936054) _gate_q_13;
  iswap _gate_q_3, _gate_q_5;
}