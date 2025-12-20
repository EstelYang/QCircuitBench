gate ryy_5074192288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.594672798428622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074197136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.551214588700257, 3.104340824835395, -3.104340824835395) _gate_q_0;
}
gate ryy_5074199776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7440545901591388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074194496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4135676711026357) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.363593719188439) _gate_q_1;
  ry(-2.363593719188439) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4135676711026357) _gate_q_0;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5074204624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3449937433386565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074202320(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2286659142998149) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074205584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.112865119449353) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0776802018694631) _gate_q_1;
  ry(-1.0776802018694631) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.112865119449353) _gate_q_0;
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
gate rzz_5074202800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.497519376442382) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074199920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2401298878396276) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1639709688761095) _gate_q_1;
  ry(-1.1639709688761095) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2401298878396276) _gate_q_0;
}
gate r_5074200592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9853253251068046, 1.5337955914138983, -1.5337955914138983) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5074202656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.27806403879004327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074201696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9652293759231678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074194880(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2818028551268996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074206256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.023152978697935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074199584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.195756824776439, 3.6666794105448846, -3.6666794105448846) _gate_q_0;
}
gate r_5074191088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5199666624192518, 2.0093070281740903, -2.0093070281740903) _gate_q_0;
}
gate cu1_5074191472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.367827270152559) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.367827270152559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.367827270152559) _gate_q_1;
}
gate rxx_5074203328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.818605408251805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate r_5074204000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.822223921579453, -0.6477223558749773, 0.6477223558749773) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  h _gate_q_11;
  rx(5.9865213548240925) _gate_q_6;
  u3(5.160013446591707, 5.686125787715094, 5.790268930405031) _gate_q_12;
  ryy_5074192288(5.594672798428622) _gate_q_4, _gate_q_5;
  u1(2.897983365600061) _gate_q_7;
  sdg _gate_q_13;
  rz(1.6736400430005456) _gate_q_3;
  h _gate_q_8;
  r_5074197136(4.551214588700257, 4.675137151630292) _gate_q_1;
  ry(2.1868805195635552) _gate_q_10;
  cy _gate_q_0, _gate_q_9;
  h _gate_q_2;
  cy _gate_q_4, _gate_q_3;
  ryy_5074199776(0.7440545901591388) _gate_q_5, _gate_q_12;
  cry(4.064239659855687) _gate_q_9, _gate_q_13;
  t _gate_q_0;
  x _gate_q_7;
  cx _gate_q_11, _gate_q_10;
  xx_plus_yy_5074194496(4.727187438376878, 2.4135676711026357) _gate_q_8, _gate_q_1;
  ecr _gate_q_6, _gate_q_2;
  csdg _gate_q_0, _gate_q_12;
  rzz_5074204624(3.3449937433386565) _gate_q_11, _gate_q_3;
  rzz_5074202320(1.2286659142998149) _gate_q_13, _gate_q_10;
  ecr _gate_q_1, _gate_q_4;
  cy _gate_q_8, _gate_q_6;
  xx_plus_yy_5074205584(2.1553604037389262, 4.112865119449353) _gate_q_7, _gate_q_5;
  sx _gate_q_9;
  p(1.389667254022443) _gate_q_2;
  id _gate_q_8;
  p(0.7129579786070218) _gate_q_6;
  t _gate_q_5;
  cs _gate_q_12, _gate_q_10;
  U(4.943211813651394, 4.082628026518231, 0.7885883257218694) _gate_q_9;
  u2(1.4128090150826342, 2.8503609758754944) _gate_q_1;
  tdg _gate_q_13;
  u2(4.407711723225796, 1.4240895528639872) _gate_q_4;
  dcx _gate_q_7, _gate_q_2;
  csdg _gate_q_0, _gate_q_3;
  x _gate_q_11;
  tdg _gate_q_0;
  swap _gate_q_13, _gate_q_11;
  sx _gate_q_3;
  rzz_5074202800(0.497519376442382) _gate_q_9, _gate_q_5;
  rz(5.970373291082837) _gate_q_10;
  cu(5.253160909956459, 1.0071600148150122, 5.192341451581787, 5.270001951268165) _gate_q_8, _gate_q_2;
  xx_plus_yy_5074199920(2.327941937752219, 3.2401298878396276) _gate_q_6, _gate_q_1;
  swap _gate_q_4, _gate_q_7;
  y _gate_q_12;
  dcx _gate_q_12, _gate_q_10;
  u3(1.6342045716232332, 4.82396688418063, 5.157594732800144) _gate_q_6;
  r_5074200592(2.9853253251068046, 3.104591918208795) _gate_q_2;
  swap _gate_q_8, _gate_q_13;
  iswap _gate_q_11, _gate_q_9;
  ch _gate_q_7, _gate_q_3;
  rzz_5074202656(0.27806403879004327) _gate_q_1, _gate_q_0;
  cz _gate_q_5, _gate_q_4;
  cs _gate_q_12, _gate_q_0;
  rzx_5074201696(0.9652293759231678) _gate_q_13, _gate_q_5;
  cry(5.469638831280327) _gate_q_3, _gate_q_10;
  crx(2.107948645729122) _gate_q_7, _gate_q_6;
  u2(4.88844679079491, 1.0969630893505016) _gate_q_1;
  iswap _gate_q_11, _gate_q_8;
  csdg _gate_q_2, _gate_q_4;
  y _gate_q_9;
  u2(3.0137128166793645, 5.453151560168397) _gate_q_6;
  u2(4.73464833345111, 4.094077673323794) _gate_q_3;
  cry(5.866537195226492) _gate_q_13, _gate_q_4;
  rzz_5074194880(1.2818028551268996) _gate_q_0, _gate_q_1;
  sx _gate_q_7;
  id _gate_q_9;
  tdg _gate_q_11;
  u2(2.1869999027097933, 1.3027277299816524) _gate_q_10;
  rxx_5074206256(4.023152978697935) _gate_q_5, _gate_q_2;
  r_5074199584(3.195756824776439, 5.237475737339781) _gate_q_8;
  r_5074191088(1.5199666624192518, 3.580103354968987) _gate_q_12;
  cu1_5074191472(4.735654540305118) _gate_q_0, _gate_q_6;
  cz _gate_q_2, _gate_q_13;
  swap _gate_q_8, _gate_q_7;
  rxx_5074203328(3.818605408251805) _gate_q_11, _gate_q_12;
  ecr _gate_q_9, _gate_q_10;
  dcx _gate_q_1, _gate_q_3;
  sxdg _gate_q_5;
  rz(0.08742061641854795) _gate_q_4;
  csx _gate_q_9, _gate_q_0;
  ch _gate_q_4, _gate_q_2;
  u2(2.482081651665081, 5.576091979350883) _gate_q_12;
  r_5074204000(2.822223921579453, 0.9230739709199193) _gate_q_10;
  rz(5.381714646380635) _gate_q_8;
  dcx _gate_q_5, _gate_q_6;
  tdg _gate_q_1;
  tdg _gate_q_3;
  ry(0.7333852499827681) _gate_q_11;
  cry(5.9585599546364465) _gate_q_7, _gate_q_13;
}
gate cu3_5074203280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7889758129940727) _gate_q_0;
  u1(-2.708387849421313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0943027764979973, 0, -2.7889758129940727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0943027764979973, 5.497363662415386, 0) _gate_q_1;
}
gate rzz_5074193392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.716970266476648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074198864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.929943885415195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074196320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.021704296183155) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3801317628867484) _gate_q_1;
  ry(-2.3801317628867484) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.021704296183155) _gate_q_0;
}
gate ryy_5074203136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.590073897577895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074200832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6385983739985979) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074191184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.380098167670854) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.380098167670854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.380098167670854) _gate_q_1;
}
gate cu1_5074198480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.48494849851090277) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.48494849851090277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.48494849851090277) _gate_q_1;
}
gate cu1_5074191808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6656718870868445) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6656718870868445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6656718870868445) _gate_q_1;
}
gate rxx_5074200880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.058277719255052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074204192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.592199369741699) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074193344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22296317583322858) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074200496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.483296596233272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074206160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8741539414252366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074192768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.440290539928576) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5959958688442368) _gate_q_1;
  ry(-1.5959958688442368) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.440290539928576) _gate_q_0;
}
gate cu1_5074204240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.1893932774896914) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.1893932774896914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.1893932774896914) _gate_q_1;
}
gate xx_minus_yy_5074970976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.24621233677915) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5404449851085769) _gate_q_0;
  ry(-0.5404449851085769) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.24621233677915) _gate_q_1;
}
gate rzz_5074969632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.708012772891632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074971408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6933444531293617) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.011839497266123) _gate_q_1;
  ry(-2.011839497266123) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6933444531293617) _gate_q_0;
}
gate xx_minus_yy_5074976496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.32665828218547) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.270668620523087) _gate_q_0;
  ry(-0.270668620523087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.32665828218547) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cu3_5074203280(6.188605552995995, 5.497363662415386, 0.08058796357276006) _gate_q_8, _gate_q_0;
  ch _gate_q_2, _gate_q_5;
  tdg _gate_q_10;
  dcx _gate_q_13, _gate_q_7;
  rzz_5074193392(3.716970266476648) _gate_q_3, _gate_q_1;
  csx _gate_q_9, _gate_q_12;
  rx(4.5271996086690685) _gate_q_11;
  rzx_5074198864(4.929943885415195) _gate_q_6, _gate_q_4;
  xx_plus_yy_5074196320(4.760263525773497, 3.021704296183155) _gate_q_7, _gate_q_2;
  U(2.8162024065502886, 1.8079966298422863, 4.856644124800307) _gate_q_10;
  y _gate_q_1;
  crx(2.362890084599563) _gate_q_9, _gate_q_6;
  id _gate_q_0;
  ryy_5074203136(1.590073897577895) _gate_q_13, _gate_q_12;
  ryy_5074200832(1.6385983739985979) _gate_q_8, _gate_q_11;
  cx _gate_q_4, _gate_q_5;
  t _gate_q_3;
  z _gate_q_5;
  cu1_5074191184(4.760196335341708) _gate_q_10, _gate_q_11;
  cry(3.7375469193445996) _gate_q_8, _gate_q_4;
  csdg _gate_q_2, _gate_q_1;
  ry(2.6018998475547095) _gate_q_3;
  cu1_5074198480(0.9698969970218055) _gate_q_6, _gate_q_12;
  sxdg _gate_q_7;
  cp(4.889713325105886) _gate_q_9, _gate_q_13;
  U(0.24386428401273386, 5.066091298220818, 1.8822135868425565) _gate_q_0;
  cx _gate_q_13, _gate_q_3;
  ch _gate_q_9, _gate_q_8;
  cs _gate_q_11, _gate_q_5;
  cu1_5074191808(1.331343774173689) _gate_q_1, _gate_q_0;
  x _gate_q_4;
  rxx_5074200880(6.058277719255052) _gate_q_12, _gate_q_6;
  h _gate_q_7;
  rzz_5074204192(5.592199369741699) _gate_q_2, _gate_q_10;
  sdg _gate_q_1;
  cx _gate_q_12, _gate_q_5;
  ryy_5074193344(0.22296317583322858) _gate_q_7, _gate_q_2;
  ry(5.753335838941454) _gate_q_11;
  u2(2.2282896598766864, 1.2724707700840265) _gate_q_10;
  ecr _gate_q_9, _gate_q_13;
  u1(5.8137499195968925) _gate_q_4;
  cu(1.7798087247361238, 1.0929374147726838, 5.508506772913149, 1.2428505012954545) _gate_q_8, _gate_q_6;
  rz(2.7538663122672884) _gate_q_3;
  id _gate_q_0;
  ryy_5074200496(2.483296596233272) _gate_q_12, _gate_q_11;
  tdg _gate_q_13;
  iswap _gate_q_8, _gate_q_0;
  csdg _gate_q_6, _gate_q_7;
  rzx_5074206160(3.8741539414252366) _gate_q_5, _gate_q_2;
  cs _gate_q_9, _gate_q_1;
  u1(1.877338850817917) _gate_q_10;
  crx(0.9095989679807165) _gate_q_4, _gate_q_3;
  ch _gate_q_8, _gate_q_6;
  sdg _gate_q_9;
  t _gate_q_4;
  xx_plus_yy_5074192768(3.1919917376884737, 5.440290539928576) _gate_q_2, _gate_q_11;
  ry(5.7160776969630325) _gate_q_13;
  cu(5.215573267234475, 0.5841330714196885, 2.5367819714389164, 4.363228294970711) _gate_q_1, _gate_q_3;
  id _gate_q_10;
  iswap _gate_q_5, _gate_q_0;
  h _gate_q_7;
  u1(0.8208014661003306) _gate_q_12;
  cry(5.258956827127468) _gate_q_0, _gate_q_3;
  x _gate_q_2;
  csdg _gate_q_9, _gate_q_5;
  y _gate_q_4;
  cu1_5074204240(0.3787865549793828) _gate_q_1, _gate_q_12;
  cz _gate_q_8, _gate_q_7;
  cry(1.3680333532138604) _gate_q_6, _gate_q_13;
  s _gate_q_10;
  rx(5.407086392489787) _gate_q_11;
  sxdg _gate_q_4;
  U(1.7395495668725884, 3.068890671639439, 3.6414176793703548) _gate_q_1;
  xx_minus_yy_5074970976(1.0808899702171537, 4.24621233677915) _gate_q_8, _gate_q_5;
  s _gate_q_10;
  rzz_5074969632(2.708012772891632) _gate_q_12, _gate_q_13;
  iswap _gate_q_6, _gate_q_3;
  cy _gate_q_11, _gate_q_7;
  s _gate_q_2;
  u1(2.1722703604231346) _gate_q_9;
  sxdg _gate_q_0;
  ry(3.583839689177491) _gate_q_8;
  ry(3.4406797164769114) _gate_q_2;
  xx_plus_yy_5074971408(4.023678994532246, 0.6933444531293617) _gate_q_0, _gate_q_6;
  U(2.010214845254691, 3.6943739795835224, 4.030623756845505) _gate_q_5;
  crx(2.5984096439271545) _gate_q_3, _gate_q_13;
  cx _gate_q_1, _gate_q_12;
  x _gate_q_11;
  xx_minus_yy_5074976496(0.541337241046174, 4.32665828218547) _gate_q_9, _gate_q_10;
  s _gate_q_4;
  rx(2.617840943545149) _gate_q_7;
}