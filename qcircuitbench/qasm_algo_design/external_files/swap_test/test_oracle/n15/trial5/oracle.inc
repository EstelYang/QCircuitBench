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
gate rzx_5106109040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4061157467286076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106106640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8062445923437878) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8062445923437878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8062445923437878) _gate_q_1;
}
gate r_5106118400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6836965411583997, 4.359427879603769, -4.359427879603769) _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106113408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.0599659953643155) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.40370856218387563) _gate_q_1;
  ry(-0.40370856218387563) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.0599659953643155) _gate_q_0;
}
gate cu3_5106115904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.494077412489874) _gate_q_0;
  u1(0.15208341823674676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8203114077994853, 0, -4.494077412489874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8203114077994853, 4.341993994253127, 0) _gate_q_1;
}
gate xx_minus_yy_5106110000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.476191869822744) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5594253348545015) _gate_q_0;
  ry(-2.5594253348545015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.476191869822744) _gate_q_1;
}
gate ryy_5106117056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5188316543025188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106106784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8297503743193348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106121184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7891731442138776) _gate_q_0;
  u1(-0.22429532622177561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7419946370188133, 0, -1.7891731442138776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7419946370188133, 2.013468470435653, 0) _gate_q_1;
}
gate ryy_5106121664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.232874676642076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106110336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8530296683846625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106112592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9856520067043215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106118880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1291596436314735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106393760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.195898361310957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107000928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.999372429600709) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.999372429600709) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.999372429600709) _gate_q_1;
}
gate rzx_5106400816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.857348063722444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5103429552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.545018249048383, 4.034219742991081, -4.034219742991081) _gate_q_0;
}
gate rxx_5103429216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9892489214296994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105759680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7635715646748014) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7635715646748014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7635715646748014) _gate_q_1;
}
gate rzx_5105748640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7482150327258348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105752336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.242587823777039) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.714065994178093) _gate_q_1;
  ry(-1.714065994178093) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.242587823777039) _gate_q_0;
}
gate rzx_5105283920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.5958966614540415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105271824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2320127468425461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105284832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1278041872178) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.294453142741576) _gate_q_1;
  ry(-2.294453142741576) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1278041872178) _gate_q_0;
}
gate rxx_5105287136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1269156308124) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5107424560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.497013097921251, 3.433370777587103, -3.433370777587103) _gate_q_0;
}
gate cu3_5107420816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5961546206441435) _gate_q_0;
  u1(0.8281766212139052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.675801675882393, 0, -2.5961546206441435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.675801675882393, 1.7679779994302383, 0) _gate_q_1;
}
gate cu1_5107420624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5071447364941957) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5071447364941957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5071447364941957) _gate_q_1;
}
gate r_5107427488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.21551278467667043, 4.479024253007459, -4.479024253007459) _gate_q_0;
}
gate ryy_5107427824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9558327228137173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  u1(5.39154646228057) _gate_q_2;
  ch _gate_q_4, _gate_q_6;
  ry(5.209376425775232) _gate_q_1;
  sdg _gate_q_0;
  ecr _gate_q_7, _gate_q_14;
  u3(5.961672995504783, 0.6391690636669957, 4.196182547981372) _gate_q_9;
  csx _gate_q_8, _gate_q_12;
  rzx_5106109040(1.4061157467286076) _gate_q_10, _gate_q_13;
  cp(1.454888022951655) _gate_q_3, _gate_q_5;
  s _gate_q_11;
  cu1_5106106640(1.6124891846875755) _gate_q_2, _gate_q_6;
  tdg _gate_q_4;
  r_5106118400(1.6836965411583997, 5.930224206398665) _gate_q_11;
  dcx _gate_q_5, _gate_q_8;
  p(5.2928497945896344) _gate_q_1;
  iswap _gate_q_14, _gate_q_9;
  xx_plus_yy_5106113408(0.8074171243677513, 5.0599659953643155) _gate_q_13, _gate_q_12;
  csx _gate_q_10, _gate_q_7;
  cry(5.389788136829213) _gate_q_3, _gate_q_0;
  cu3_5106115904(1.6406228155989706, 4.341993994253127, 4.646160830726621) _gate_q_13, _gate_q_5;
  xx_minus_yy_5106110000(5.118850669709003, 3.476191869822744) _gate_q_11, _gate_q_12;
  ch _gate_q_1, _gate_q_0;
  ryy_5106117056(0.5188316543025188) _gate_q_8, _gate_q_2;
  rzx_5106106784(1.8297503743193348) _gate_q_7, _gate_q_6;
  h _gate_q_14;
  U(1.2249053167189448, 1.8206760918262166, 2.2090102381754573) _gate_q_10;
  dcx _gate_q_4, _gate_q_3;
  tdg _gate_q_9;
  cu3_5106121184(1.4839892740376266, 2.013468470435653, 1.564877817992102) _gate_q_6, _gate_q_8;
  u3(3.9866004500408625, 1.8491433656218554, 0.2926684558733931) _gate_q_1;
  ryy_5106121664(5.232874676642076) _gate_q_5, _gate_q_9;
  sdg _gate_q_4;
  rzx_5106110336(2.8530296683846625) _gate_q_12, _gate_q_13;
  crz(4.1403249856768305) _gate_q_0, _gate_q_7;
  ryy_5106112592(5.9856520067043215) _gate_q_10, _gate_q_14;
  sdg _gate_q_11;
  crz(3.2378499751613004) _gate_q_3, _gate_q_2;
  rxx_5106118880(3.1291596436314735) _gate_q_0, _gate_q_9;
  ryy_5106393760(1.195898361310957) _gate_q_6, _gate_q_2;
  cy _gate_q_3, _gate_q_10;
  cu1_5107000928(1.998744859201418) _gate_q_14, _gate_q_12;
  cp(6.1695229638475775) _gate_q_1, _gate_q_5;
  rzx_5106400816(2.857348063722444) _gate_q_7, _gate_q_8;
  u3(2.9658933985962403, 0.4719607225608617, 3.3699727796202983) _gate_q_11;
  r_5103429552(3.545018249048383, 5.605016069785978) _gate_q_4;
  y _gate_q_13;
  ch _gate_q_12, _gate_q_0;
  h _gate_q_13;
  rxx_5103429216(0.9892489214296994) _gate_q_8, _gate_q_14;
  sdg _gate_q_11;
  cu1_5105759680(5.527143129349603) _gate_q_4, _gate_q_7;
  rzx_5105748640(0.7482150327258348) _gate_q_1, _gate_q_3;
  tdg _gate_q_6;
  xx_plus_yy_5105752336(3.428131988356186, 6.242587823777039) _gate_q_5, _gate_q_10;
  cry(1.1594184674210262) _gate_q_2, _gate_q_9;
  rzx_5105283920(5.5958966614540415) _gate_q_1, _gate_q_12;
  cp(5.047625400972837) _gate_q_4, _gate_q_2;
  h _gate_q_6;
  ry(2.051038376185708) _gate_q_14;
  rzz_5105271824(1.2320127468425461) _gate_q_0, _gate_q_11;
  U(1.7721008437761927, 4.951675748745455, 3.116193042454084) _gate_q_5;
  xx_plus_yy_5105284832(4.588906285483152, 2.1278041872178) _gate_q_10, _gate_q_7;
  rxx_5105287136(2.1269156308124) _gate_q_3, _gate_q_8;
  csdg _gate_q_9, _gate_q_13;
  cs _gate_q_14, _gate_q_3;
  cry(5.585975811320639) _gate_q_11, _gate_q_13;
  r_5107424560(3.497013097921251, 5.004167104382) _gate_q_9;
  cz _gate_q_4, _gate_q_5;
  cy _gate_q_6, _gate_q_7;
  cz _gate_q_2, _gate_q_12;
  cp(3.840473502020101) _gate_q_1, _gate_q_10;
  rx(1.793610747990501) _gate_q_0;
  h _gate_q_8;
  cu3_5107420816(3.351603351764786, 1.7679779994302383, 3.4243312418580487) _gate_q_7, _gate_q_11;
  cs _gate_q_1, _gate_q_14;
  s _gate_q_13;
  u1(3.3493211841514747) _gate_q_4;
  cu(4.953019115676841, 4.230177792185787, 2.043890962602613, 1.2243905180324097) _gate_q_9, _gate_q_2;
  u3(4.69381360294158, 0.30055394696552756, 0.22975808471630646) _gate_q_12;
  csdg _gate_q_0, _gate_q_8;
  U(4.274070044974473, 2.71374806088738, 6.0710003817200615) _gate_q_10;
  csdg _gate_q_5, _gate_q_3;
  ry(0.9038697421572508) _gate_q_6;
  u1(5.565384574469646) _gate_q_12;
  cx _gate_q_5, _gate_q_11;
  z _gate_q_1;
  cu1_5107420624(1.0142894729883913) _gate_q_2, _gate_q_3;
  r_5107427488(0.21551278467667043, 6.049820579802356) _gate_q_13;
  u1(5.5090920736775315) _gate_q_7;
  sxdg _gate_q_6;
  z _gate_q_8;
  ryy_5107427824(1.9558327228137173) _gate_q_0, _gate_q_4;
  crx(2.001716248543001) _gate_q_14, _gate_q_10;
  t _gate_q_9;
}
gate rxx_5116898784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.476980639006268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116898112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.37415937123151) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116897056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4857048683867093) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6356194251633243) _gate_q_1;
  ry(-1.6356194251633243) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4857048683867093) _gate_q_0;
}
gate xx_minus_yy_5116896960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7878102364109094) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1692980495166063) _gate_q_0;
  ry(-2.1692980495166063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7878102364109094) _gate_q_1;
}
gate rxx_5116897968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9240774585344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116896624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.061180899414631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5116897104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7055766185808489) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5116897920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0368597007040101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5116896912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6840091178799073) _gate_q_0;
  u1(-1.248318946198994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8488135971655992, 0, -1.6840091178799073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8488135971655992, 2.9323280640789013, 0) _gate_q_1;
}
gate cu1_5116897008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8347504419313594) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8347504419313594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8347504419313594) _gate_q_1;
}
gate rzz_5116891344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2480023824629505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116892400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.483957217592868) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.800476677418655) _gate_q_1;
  ry(-1.800476677418655) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.483957217592868) _gate_q_0;
}
gate r_5116898064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.2934015302774915, 3.5190279227477674, -3.5190279227477674) _gate_q_0;
}
gate cu3_5116891392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.133738403370578) _gate_q_0;
  u1(0.7124447563388057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3729974084470509, 0, -3.133738403370578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3729974084470509, 2.421293647031772, 0) _gate_q_1;
}
gate xx_plus_yy_5116898736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0261761959044335) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6897422695887039) _gate_q_1;
  ry(-1.6897422695887039) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0261761959044335) _gate_q_0;
}
gate rzx_5116898496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3361186118473007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116891056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3926639730497055) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3926639730497055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3926639730497055) _gate_q_1;
}
gate rxx_5116890384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.510561937438692) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116891584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7699393953209666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5116890816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4599321879795888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116890720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.438295203643761) _gate_q_0;
  u1(1.153658977361809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4851960042909362, 0, -2.438295203643761) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4851960042909362, 1.2846362262819522, 0) _gate_q_1;
}
gate rzz_5116894368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5132150871369159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  u3(1.2364916990011612, 4.8950709724621575, 3.767580010475453) _gate_q_5;
  h _gate_q_7;
  id _gate_q_2;
  crx(0.536605385308757) _gate_q_12, _gate_q_8;
  cs _gate_q_14, _gate_q_3;
  tdg _gate_q_10;
  rxx_5116898784(5.476980639006268) _gate_q_11, _gate_q_9;
  rzz_5116898112(5.37415937123151) _gate_q_4, _gate_q_6;
  s _gate_q_0;
  xx_plus_yy_5116897056(3.2712388503266485, 1.4857048683867093) _gate_q_1, _gate_q_13;
  y _gate_q_10;
  u2(5.70500710920619, 5.816557229189183) _gate_q_7;
  dcx _gate_q_1, _gate_q_9;
  ry(2.597627569421265) _gate_q_8;
  tdg _gate_q_4;
  crx(4.085686044170374) _gate_q_3, _gate_q_0;
  dcx _gate_q_5, _gate_q_11;
  cu(1.3768081105939742, 5.270064126039391, 1.8444477522034954, 2.5100852107774525) _gate_q_13, _gate_q_2;
  U(2.429214509085728, 0.7328114201757819, 3.5556241617281654) _gate_q_14;
  xx_minus_yy_5116896960(4.338596099033213, 1.7878102364109094) _gate_q_12, _gate_q_6;
  ch _gate_q_2, _gate_q_12;
  rxx_5116897968(2.9240774585344) _gate_q_7, _gate_q_13;
  iswap _gate_q_0, _gate_q_4;
  csx _gate_q_8, _gate_q_5;
  sx _gate_q_1;
  dcx _gate_q_9, _gate_q_10;
  y _gate_q_11;
  rx(0.8247499168701911) _gate_q_3;
  cry(2.818124418670764) _gate_q_14, _gate_q_6;
  u1(0.7205178329012764) _gate_q_13;
  rz(4.899838563472986) _gate_q_0;
  U(0.8161585066535729, 1.4359260404853917, 3.5503664780647775) _gate_q_3;
  rxx_5116896624(4.061180899414631) _gate_q_2, _gate_q_4;
  u2(1.2859064514684468, 5.243909455614122) _gate_q_11;
  ryy_5116897104(0.7055766185808489) _gate_q_10, _gate_q_14;
  ryy_5116897920(1.0368597007040101) _gate_q_5, _gate_q_1;
  cs _gate_q_8, _gate_q_6;
  cy _gate_q_12, _gate_q_7;
  tdg _gate_q_9;
  t _gate_q_13;
  cu3_5116896912(3.6976271943311985, 2.9323280640789013, 0.435690171680913) _gate_q_9, _gate_q_7;
  cu1_5116897008(3.6695008838627188) _gate_q_6, _gate_q_12;
  dcx _gate_q_4, _gate_q_5;
  crz(3.167752524785553) _gate_q_3, _gate_q_11;
  U(5.66782905733721, 4.326360875865934, 0.9018451768997907) _gate_q_2;
  rz(6.20793369008984) _gate_q_8;
  h _gate_q_14;
  ry(3.4177390741048796) _gate_q_1;
  cz _gate_q_10, _gate_q_0;
  rx(4.155523594488703) _gate_q_10;
  id _gate_q_13;
  sdg _gate_q_8;
  U(1.7004183087172853, 1.911112233307829, 3.415164582145971) _gate_q_1;
  cs _gate_q_11, _gate_q_6;
  cs _gate_q_14, _gate_q_5;
  crx(0.3558430433205146) _gate_q_4, _gate_q_12;
  rzz_5116891344(1.2480023824629505) _gate_q_0, _gate_q_3;
  u3(3.7770044900881445, 5.058057102110586, 5.055880236093301) _gate_q_2;
  cx _gate_q_9, _gate_q_7;
  crz(1.8463058592959056) _gate_q_10, _gate_q_5;
  xx_plus_yy_5116892400(3.60095335483731, 5.483957217592868) _gate_q_7, _gate_q_8;
  z _gate_q_9;
  U(1.5457284186552656, 5.168827929336986, 2.109332052266019) _gate_q_13;
  cu(2.565475542180737, 3.5828586602737897, 4.554515552076778, 5.978623649742429) _gate_q_14, _gate_q_12;
  cp(4.528648077174775) _gate_q_11, _gate_q_2;
  z _gate_q_1;
  r_5116898064(5.2934015302774915, 5.089824249542664) _gate_q_4;
  cu3_5116891392(2.7459948168941017, 2.421293647031772, 3.8461831597093834) _gate_q_6, _gate_q_3;
  t _gate_q_0;
  cy _gate_q_10, _gate_q_9;
  sdg _gate_q_3;
  dcx _gate_q_7, _gate_q_5;
  crz(1.5643990481644678) _gate_q_6, _gate_q_12;
  cry(2.3425563044196664) _gate_q_1, _gate_q_4;
  xx_plus_yy_5116898736(3.3794845391774078, 3.0261761959044335) _gate_q_8, _gate_q_2;
  id _gate_q_14;
  cu(1.1631855380027154, 4.377904631796031, 6.06714387653604, 2.732849652217051) _gate_q_11, _gate_q_0;
  z _gate_q_13;
  rzx_5116898496(1.3361186118473007) _gate_q_13, _gate_q_2;
  ecr _gate_q_3, _gate_q_6;
  ry(2.082069142523252) _gate_q_7;
  U(2.5899351166089564, 4.638096466810404, 3.6104818865420465) _gate_q_0;
  rx(2.369382191811671) _gate_q_9;
  dcx _gate_q_11, _gate_q_8;
  t _gate_q_4;
  rz(2.033610506795121) _gate_q_5;
  cz _gate_q_10, _gate_q_1;
  cu1_5116891056(4.785327946099411) _gate_q_12, _gate_q_14;
  rxx_5116890384(3.510561937438692) _gate_q_5, _gate_q_4;
  tdg _gate_q_0;
  rzx_5116891584(2.7699393953209666) _gate_q_14, _gate_q_10;
  rxx_5116890816(1.4599321879795888) _gate_q_7, _gate_q_2;
  cu3_5116890720(2.9703920085818725, 1.2846362262819522, 3.59195418100557) _gate_q_12, _gate_q_6;
  cp(6.062502842086977) _gate_q_3, _gate_q_13;
  U(3.593134096826423, 3.0969600950866543, 3.1823702968564715) _gate_q_11;
  rzz_5116894368(1.5132150871369159) _gate_q_8, _gate_q_1;
  U(5.647677240866435, 5.0408823636585565, 0.323151975263897) _gate_q_9;
}