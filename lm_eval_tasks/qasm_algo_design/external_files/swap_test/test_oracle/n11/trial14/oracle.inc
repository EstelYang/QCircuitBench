gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072015280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.142772303866125) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7691041890150143) _gate_q_0;
  ry(-1.7691041890150143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.142772303866125) _gate_q_1;
}
gate rxx_5072022048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.114119187253581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072012112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.3186274663717725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072026032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.338327169286297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072014320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2948447528085034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate r_5072021520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.774768794765518, -0.2139630023191379, 0.2139630023191379) _gate_q_0;
}
gate xx_minus_yy_5072015520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7497095501708172) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8363702200431188) _gate_q_0;
  ry(-0.8363702200431188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7497095501708172) _gate_q_1;
}
gate ryy_5072014608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1450675457292783) _gate_q_1;
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
gate r_5072027184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1170194726029403, -0.6549060904152411, 0.6549060904152411) _gate_q_0;
}
gate r_5072027616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.848026049915191, 2.960773808537069, -2.960773808537069) _gate_q_0;
}
gate xx_plus_yy_5072018304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.04750298308939432) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5029130087362336) _gate_q_1;
  ry(-0.5029130087362336) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.04750298308939432) _gate_q_0;
}
gate r_5072020752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8763727549146002, 0.5107304283420184, -0.5107304283420184) _gate_q_0;
}
gate r_5072026272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.408636434961981, -0.9781134380631249, 0.9781134380631249) _gate_q_0;
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
gate cu3_5072026368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7573608522681496) _gate_q_0;
  u1(-1.855923076317521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.611918220439221, 0, -3.7573608522681496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.611918220439221, 5.613283928585671, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cu(0.010428206846562088, 5.468409201526041, 3.6833272106934465, 0.5135436286062939) _gate_q_5, _gate_q_0;
  id _gate_q_2;
  cs _gate_q_3, _gate_q_8;
  u2(4.0949249634654326, 4.3326778763934515) _gate_q_9;
  cu(0.8941492442888026, 3.0818677363048543, 0.1202160967789693, 4.440475759929704) _gate_q_6, _gate_q_7;
  cs _gate_q_4, _gate_q_1;
  sdg _gate_q_10;
  csdg _gate_q_6, _gate_q_3;
  s _gate_q_5;
  cy _gate_q_8, _gate_q_1;
  dcx _gate_q_4, _gate_q_0;
  xx_minus_yy_5072015280(3.5382083780300286, 5.142772303866125) _gate_q_2, _gate_q_10;
  rxx_5072022048(2.114119187253581) _gate_q_7, _gate_q_9;
  x _gate_q_9;
  rzx_5072012112(4.3186274663717725) _gate_q_0, _gate_q_1;
  sdg _gate_q_8;
  crx(0.6818852425342832) _gate_q_5, _gate_q_3;
  dcx _gate_q_10, _gate_q_7;
  swap _gate_q_4, _gate_q_6;
  z _gate_q_2;
  cy _gate_q_9, _gate_q_3;
  csdg _gate_q_10, _gate_q_7;
  rzz_5072026032(5.338327169286297) _gate_q_2, _gate_q_0;
  rx(0.9807049597978982) _gate_q_1;
  ch _gate_q_5, _gate_q_8;
  ryy_5072014320(2.2948447528085034) _gate_q_6, _gate_q_4;
  cs _gate_q_8, _gate_q_6;
  sdg _gate_q_5;
  csdg _gate_q_2, _gate_q_9;
  y _gate_q_4;
  cs _gate_q_3, _gate_q_7;
  csx _gate_q_1, _gate_q_10;
  r_5072021520(1.774768794765518, 1.3568333244757587) _gate_q_0;
  U(1.8845138087311097, 4.349880298241953, 3.3541987337115344) _gate_q_6;
  dcx _gate_q_4, _gate_q_0;
  z _gate_q_5;
  z _gate_q_7;
  cs _gate_q_9, _gate_q_3;
  y _gate_q_2;
  crx(2.689206320845474) _gate_q_10, _gate_q_1;
  z _gate_q_8;
  ch _gate_q_5, _gate_q_6;
  rx(2.2669966138742264) _gate_q_8;
  cs _gate_q_9, _gate_q_2;
  id _gate_q_4;
  xx_minus_yy_5072015520(1.6727404400862376, 0.7497095501708172) _gate_q_7, _gate_q_0;
  u1(5.959320885149998) _gate_q_1;
  ryy_5072014608(2.1450675457292783) _gate_q_10, _gate_q_3;
  t _gate_q_7;
  U(3.2498381692225555, 4.866754785612469, 0.590818159821918) _gate_q_9;
  sxdg _gate_q_10;
  crz(0.7138680068566575) _gate_q_5, _gate_q_2;
  u1(2.213489915151606) _gate_q_1;
  iswap _gate_q_8, _gate_q_4;
  r_5072027184(2.1170194726029403, 0.9158902363796555) _gate_q_3;
  s _gate_q_6;
  r_5072027616(5.848026049915191, 4.5315701353319655) _gate_q_0;
  u1(0.5559060961832295) _gate_q_6;
  xx_plus_yy_5072018304(1.0058260174724671, 0.04750298308939432) _gate_q_9, _gate_q_3;
  cx _gate_q_1, _gate_q_8;
  cx _gate_q_7, _gate_q_10;
  dcx _gate_q_2, _gate_q_0;
  r_5072020752(0.8763727549146002, 2.081526755136915) _gate_q_5;
  r_5072026272(5.408636434961981, 0.5926828887317717) _gate_q_4;
  u3(0.4761336396819651, 1.814342071529574, 0.6818118929910938) _gate_q_8;
  u3(6.129017831975051, 0.5181382438766118, 0.16357046683970972) _gate_q_10;
  ecr _gate_q_6, _gate_q_1;
  u1(2.359071233902792) _gate_q_2;
  cs _gate_q_3, _gate_q_0;
  iswap _gate_q_7, _gate_q_5;
  cu3_5072026368(5.223836440878442, 5.613283928585671, 1.9014377759506287) _gate_q_4, _gate_q_9;
}
gate ryy_5070910096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.793935470342326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070899248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.090856001926462) _gate_q_0;
  u1(-1.0523284323167228) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4545933504618365, 0, -4.090856001926462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4545933504618365, 5.143184434243185, 0) _gate_q_1;
}
gate rzx_5070911488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.363425728725889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070902608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.692330599378439) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09397929504499623) _gate_q_1;
  ry(-0.09397929504499623) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.692330599378439) _gate_q_0;
}
gate xx_minus_yy_5070907792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.926790761512649) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6969532516911774) _gate_q_0;
  ry(-2.6969532516911774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.926790761512649) _gate_q_1;
}
gate xx_minus_yy_5070905920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.707727054105412) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4468580627514203) _gate_q_0;
  ry(-2.4468580627514203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.707727054105412) _gate_q_1;
}
gate rxx_5070899056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2886329417142437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070897376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7618100488895816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070898096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.178142366625931) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5378022015723157) _gate_q_0;
  ry(-0.5378022015723157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.178142366625931) _gate_q_1;
}
gate rzz_5070906160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9629838330889529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070906928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.6314876797946125) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1055027803183046) _gate_q_0;
  ry(-3.1055027803183046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.6314876797946125) _gate_q_1;
}
gate xx_plus_yy_5070912016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.512482036007579) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8202893598744287) _gate_q_1;
  ry(-0.8202893598744287) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.512482036007579) _gate_q_0;
}
gate cu3_5070912928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.894250101246054) _gate_q_0;
  u1(-0.43217918861129534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11975244858152112, 0, -1.894250101246054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11975244858152112, 2.3264292898573493, 0) _gate_q_1;
}
gate r_5070911008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.890996821633483, 0.8485167032529155, -0.8485167032529155) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  t _gate_q_7;
  x _gate_q_6;
  rx(4.97382179855487) _gate_q_3;
  z _gate_q_1;
  U(0.5715186047496874, 5.0229920457148864, 0.2833857615462225) _gate_q_2;
  cp(0.6964088453259657) _gate_q_0, _gate_q_4;
  U(5.431647640569446, 2.406050756832774, 2.024196256403893) _gate_q_9;
  cs _gate_q_5, _gate_q_10;
  id _gate_q_8;
  ryy_5070910096(4.793935470342326) _gate_q_3, _gate_q_9;
  csdg _gate_q_4, _gate_q_5;
  csx _gate_q_6, _gate_q_7;
  tdg _gate_q_2;
  cu3_5070899248(4.909186700923673, 5.143184434243185, 3.0385275696097396) _gate_q_8, _gate_q_10;
  cy _gate_q_0, _gate_q_1;
  cp(2.7032384240377447) _gate_q_3, _gate_q_9;
  ch _gate_q_0, _gate_q_7;
  tdg _gate_q_2;
  sdg _gate_q_5;
  rzx_5070911488(3.363425728725889) _gate_q_1, _gate_q_10;
  xx_plus_yy_5070902608(0.18795859008999247, 3.692330599378439) _gate_q_4, _gate_q_6;
  rz(4.018246028266891) _gate_q_8;
  s _gate_q_6;
  z _gate_q_8;
  rz(2.524675124089311) _gate_q_2;
  xx_minus_yy_5070907792(5.393906503382355, 5.926790761512649) _gate_q_3, _gate_q_10;
  xx_minus_yy_5070905920(4.8937161255028405, 4.707727054105412) _gate_q_0, _gate_q_7;
  rxx_5070899056(2.2886329417142437) _gate_q_9, _gate_q_4;
  crz(5.924685624804691) _gate_q_1, _gate_q_5;
  t _gate_q_0;
  sxdg _gate_q_3;
  rxx_5070897376(1.7618100488895816) _gate_q_5, _gate_q_1;
  xx_minus_yy_5070898096(1.0756044031446315, 4.178142366625931) _gate_q_9, _gate_q_6;
  rzz_5070906160(1.9629838330889529) _gate_q_10, _gate_q_4;
  ecr _gate_q_8, _gate_q_7;
  x _gate_q_2;
  u1(3.16126648127598) _gate_q_7;
  ecr _gate_q_4, _gate_q_8;
  rz(2.9897031118587316) _gate_q_3;
  p(6.223335306484124) _gate_q_5;
  u3(1.8567867797649107, 0.720214554909404, 4.8368023277877255) _gate_q_6;
  p(5.572528552330069) _gate_q_1;
  ry(1.4397055969959724) _gate_q_9;
  z _gate_q_10;
  xx_minus_yy_5070906928(6.211005560636609, 4.6314876797946125) _gate_q_2, _gate_q_0;
  h _gate_q_6;
  cz _gate_q_1, _gate_q_8;
  s _gate_q_3;
  u2(2.3065869320538983, 5.684616505280205) _gate_q_2;
  u2(0.5322787285725371, 0.558109607332362) _gate_q_7;
  sx _gate_q_10;
  xx_plus_yy_5070912016(1.6405787197488575, 4.512482036007579) _gate_q_9, _gate_q_0;
  h _gate_q_5;
  h _gate_q_4;
  swap _gate_q_10, _gate_q_7;
  ch _gate_q_9, _gate_q_0;
  cx _gate_q_6, _gate_q_5;
  tdg _gate_q_2;
  cu3_5070912928(0.23950489716304224, 2.3264292898573493, 1.4620709126347586) _gate_q_1, _gate_q_8;
  swap _gate_q_4, _gate_q_3;
  sx _gate_q_4;
  cx _gate_q_1, _gate_q_9;
  r_5070911008(1.890996821633483, 2.419313030047812) _gate_q_7;
  h _gate_q_3;
  z _gate_q_6;
  crz(1.4381680144691371) _gate_q_0, _gate_q_2;
  cu(4.981704753670335, 3.262408217678431, 1.8432286733129202, 0.3661472130711125) _gate_q_10, _gate_q_5;
  p(6.073704052046404) _gate_q_8;
  cs _gate_q_0, _gate_q_10;
  cry(2.9047340599031304) _gate_q_9, _gate_q_5;
  cz _gate_q_2, _gate_q_3;
  crx(4.421867281829306) _gate_q_4, _gate_q_6;
  U(5.400844991988259, 3.850896907873194, 1.6850704707207365) _gate_q_8;
  sx _gate_q_1;
  ry(0.6981877379126437) _gate_q_7;
}