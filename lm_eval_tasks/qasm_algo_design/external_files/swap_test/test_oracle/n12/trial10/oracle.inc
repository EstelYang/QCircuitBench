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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107321360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0077393766802505) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5909262874881982) _gate_q_1;
  ry(-1.5909262874881982) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0077393766802505) _gate_q_0;
}
gate cu1_5107320112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.04505241566389449) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.04505241566389449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.04505241566389449) _gate_q_1;
}
gate rzz_5107332112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2061950471676384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5108205040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4870116753954776) _gate_q_1;
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
gate r_5108206048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.846571445330855, 1.5316897301907697, -1.5316897301907697) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5108214784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0578320613338321, 0.42825139909168053, -0.42825139909168053) _gate_q_0;
}
gate cu1_5108209936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2686199331485092) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2686199331485092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2686199331485092) _gate_q_1;
}
gate rzz_5108209984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.902220081095497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108204320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0461705864597497) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0461705864597497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0461705864597497) _gate_q_1;
}
gate rzz_5108203744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.451882166895345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5108210464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.544547217935781, 1.5596503485372941, -1.5596503485372941) _gate_q_0;
}
gate ryy_5108209024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7749666770305916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate r_5108211424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.284400308882773, 3.521767198141787, -3.521767198141787) _gate_q_0;
}
gate cu1_5108211760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.034125059207202) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.034125059207202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.034125059207202) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cz _gate_q_8, _gate_q_11;
  ecr _gate_q_2, _gate_q_6;
  u1(4.33004239661564) _gate_q_4;
  u1(3.5802792553522487) _gate_q_10;
  crz(2.532271634227912) _gate_q_7, _gate_q_1;
  cu(3.439059520379662, 5.49591936922201, 5.191161006703825, 0.8422885802704683) _gate_q_0, _gate_q_3;
  cu(5.208887499172881, 3.456818638144881, 2.2150607864957568, 1.4679724045687728) _gate_q_5, _gate_q_9;
  crx(0.8362923283758992) _gate_q_10, _gate_q_2;
  sxdg _gate_q_0;
  swap _gate_q_1, _gate_q_3;
  sdg _gate_q_7;
  p(2.506619252294181) _gate_q_5;
  u3(6.035525561440926, 1.8811785746643168, 1.7334896219469955) _gate_q_11;
  xx_plus_yy_5107321360(3.1818525749763964, 2.0077393766802505) _gate_q_8, _gate_q_9;
  cu1_5107320112(0.09010483132778899) _gate_q_6, _gate_q_4;
  rzz_5107332112(2.2061950471676384) _gate_q_0, _gate_q_8;
  cs _gate_q_5, _gate_q_4;
  u3(1.9518413843600828, 5.303582280144465, 5.1916686744747915) _gate_q_6;
  cx _gate_q_1, _gate_q_7;
  s _gate_q_10;
  tdg _gate_q_3;
  sdg _gate_q_11;
  x _gate_q_2;
  rx(2.4322735985924466) _gate_q_9;
  u3(2.3922625150979493, 3.7352759612716064, 5.9445009729932625) _gate_q_8;
  sxdg _gate_q_11;
  cry(2.4814064404947076) _gate_q_0, _gate_q_7;
  p(2.417463050761506) _gate_q_1;
  U(2.3892050631824935, 2.9068668860589195, 4.701780757009389) _gate_q_3;
  ch _gate_q_5, _gate_q_6;
  cry(0.7345903638296184) _gate_q_4, _gate_q_10;
  tdg _gate_q_9;
  sdg _gate_q_2;
  cp(0.05575806516431016) _gate_q_6, _gate_q_10;
  sx _gate_q_11;
  ch _gate_q_9, _gate_q_1;
  sx _gate_q_2;
  cp(0.1663425298578116) _gate_q_7, _gate_q_4;
  x _gate_q_5;
  id _gate_q_8;
  ry(2.3363847034185015) _gate_q_0;
  rx(2.1164332638309316) _gate_q_3;
  cu(0.16303002725953006, 0.18559979055299, 0.3479519879238506, 4.025374404750752) _gate_q_0, _gate_q_1;
  rxx_5108205040(3.4870116753954776) _gate_q_2, _gate_q_7;
  s _gate_q_3;
  t _gate_q_5;
  id _gate_q_11;
  p(3.757390894030832) _gate_q_4;
  cs _gate_q_10, _gate_q_9;
  csdg _gate_q_8, _gate_q_6;
  ch _gate_q_9, _gate_q_4;
  u3(0.5362335850783315, 3.761929897372542, 3.7725147290133947) _gate_q_6;
  r_5108206048(3.846571445330855, 3.1024860569856663) _gate_q_0;
  dcx _gate_q_1, _gate_q_10;
  cz _gate_q_2, _gate_q_3;
  sdg _gate_q_7;
  y _gate_q_11;
  r_5108214784(1.0578320613338321, 1.999047725886577) _gate_q_5;
  rx(0.44118451100578854) _gate_q_8;
  cu1_5108209936(0.5372398662970184) _gate_q_1, _gate_q_2;
  ry(6.181226263767054) _gate_q_3;
  rzz_5108209984(5.902220081095497) _gate_q_4, _gate_q_11;
  cu1_5108204320(2.0923411729194994) _gate_q_0, _gate_q_9;
  cs _gate_q_7, _gate_q_5;
  rz(3.6532373378268046) _gate_q_8;
  rzz_5108203744(3.451882166895345) _gate_q_10, _gate_q_6;
  iswap _gate_q_0, _gate_q_6;
  s _gate_q_3;
  ry(1.7901459892823386) _gate_q_9;
  ry(3.150178224483512) _gate_q_10;
  sdg _gate_q_4;
  cy _gate_q_1, _gate_q_2;
  r_5108210464(5.544547217935781, 3.1304466753321907) _gate_q_5;
  swap _gate_q_8, _gate_q_11;
  u2(4.55217411524993, 0.416679511079538) _gate_q_7;
  ryy_5108209024(3.7749666770305916) _gate_q_4, _gate_q_1;
  U(0.8455278745684087, 5.5941799310688936, 3.8212905144108382) _gate_q_10;
  sdg _gate_q_6;
  csx _gate_q_8, _gate_q_3;
  r_5108211424(1.284400308882773, 5.092563524936684) _gate_q_5;
  sxdg _gate_q_0;
  cu1_5108211760(4.068250118414404) _gate_q_9, _gate_q_7;
  csx _gate_q_11, _gate_q_2;
}
gate rzz_5108204272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.516935614336774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5108216704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8927864561431396) _gate_q_0;
  u1(1.0743575876830882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.136957249663819, 0, -1.8927864561431396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.136957249663819, 0.8184288684600514, 0) _gate_q_1;
}
gate rzz_5107327888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8325065259480113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108217856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.408648556067137) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.408648556067137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.408648556067137) _gate_q_1;
}
gate rxx_5108218336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.281913126673698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5108219536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9187490712429038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5108210416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9799733123372327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5108215312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.879067702230113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5108218240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.1512271645381595) _gate_q_0;
  u1(1.5150747165546896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8973133710292944, 0, -4.1512271645381595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8973133710292944, 2.63615244798347, 0) _gate_q_1;
}
gate r_5104443872(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2471654754593906, -1.1664608910227119, 1.1664608910227119) _gate_q_0;
}
gate r_5104445888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4977728839036915, 0.8992404552486133, -0.8992404552486133) _gate_q_0;
}
gate rzx_5104446128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8491496439902395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5104450592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.610613744365376) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5926047879167268) _gate_q_0;
  ry(-0.5926047879167268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.610613744365376) _gate_q_1;
}
gate xx_minus_yy_5104451120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.270373769316561) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5688539807691853) _gate_q_0;
  ry(-2.5688539807691853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.270373769316561) _gate_q_1;
}
gate rzx_5104450976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.6798188278937465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104446368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7955408321185256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5104441712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.908701351321619) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.908701351321619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.908701351321619) _gate_q_1;
}
gate cu1_5104451552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0908977559896424) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0908977559896424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0908977559896424) _gate_q_1;
}
gate cu3_5104450928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.189153343902405) _gate_q_0;
  u1(-3.00459702450681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9161636923912697, 0, -3.189153343902405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9161636923912697, 6.193750368409215, 0) _gate_q_1;
}
gate r_5104443056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.217221047886464, 1.1796034463060985, -1.1796034463060985) _gate_q_0;
}
gate rzx_5104450880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.243384316518118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104436384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7278844532176498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5104448000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4227402012815467) _gate_q_0;
  u1(0.058064971078673366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3847247127210973, 0, -2.4227402012815467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3847247127210973, 2.3646752302028733, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  rzz_5108204272(4.516935614336774) _gate_q_11, _gate_q_9;
  tdg _gate_q_4;
  csx _gate_q_3, _gate_q_2;
  cu3_5108216704(4.273914499327638, 0.8184288684600514, 2.9671440438262278) _gate_q_5, _gate_q_8;
  dcx _gate_q_6, _gate_q_10;
  cu(0.8323968857831289, 4.080734450853149, 1.0021867772579194, 1.4893614327766063) _gate_q_7, _gate_q_1;
  s _gate_q_0;
  U(5.760515631909863, 2.2077977179073787, 3.982353435686998) _gate_q_1;
  rzz_5107327888(3.8325065259480113) _gate_q_2, _gate_q_8;
  u2(2.9272857545457573, 3.4327104760386353) _gate_q_7;
  sdg _gate_q_10;
  ch _gate_q_4, _gate_q_3;
  sxdg _gate_q_9;
  z _gate_q_0;
  cu1_5108217856(4.817297112134274) _gate_q_6, _gate_q_5;
  p(5.5686602294237435) _gate_q_11;
  u1(0.5173648217326395) _gate_q_9;
  swap _gate_q_5, _gate_q_1;
  s _gate_q_2;
  cx _gate_q_0, _gate_q_3;
  y _gate_q_11;
  swap _gate_q_8, _gate_q_6;
  rxx_5108218336(5.281913126673698) _gate_q_4, _gate_q_10;
  sxdg _gate_q_7;
  ryy_5108219536(1.9187490712429038) _gate_q_1, _gate_q_3;
  ryy_5108210416(1.9799733123372327) _gate_q_5, _gate_q_7;
  rzz_5108215312(3.879067702230113) _gate_q_9, _gate_q_11;
  cu3_5108218240(5.794626742058589, 2.63615244798347, 5.666301881092849) _gate_q_6, _gate_q_10;
  t _gate_q_2;
  ry(3.117029527199609) _gate_q_8;
  cry(4.9545773354895335) _gate_q_0, _gate_q_4;
  u2(1.7083584662586795, 3.2949564931534083) _gate_q_1;
  u2(0.28615081633404754, 5.22051451269591) _gate_q_5;
  r_5104443872(1.2471654754593906, 0.40433543577218456) _gate_q_6;
  r_5104445888(3.4977728839036915, 2.47003678204351) _gate_q_10;
  crz(4.915370397690239) _gate_q_0, _gate_q_3;
  rzx_5104446128(2.8491496439902395) _gate_q_2, _gate_q_11;
  rz(0.971536309796094) _gate_q_7;
  cx _gate_q_9, _gate_q_4;
  p(5.463004580838711) _gate_q_8;
  sdg _gate_q_9;
  xx_minus_yy_5104450592(1.1852095758334535, 5.610613744365376) _gate_q_7, _gate_q_10;
  sxdg _gate_q_5;
  x _gate_q_4;
  xx_minus_yy_5104451120(5.1377079615383705, 5.270373769316561) _gate_q_6, _gate_q_1;
  y _gate_q_11;
  t _gate_q_3;
  rzx_5104450976(5.6798188278937465) _gate_q_0, _gate_q_8;
  x _gate_q_2;
  iswap _gate_q_4, _gate_q_3;
  csdg _gate_q_8, _gate_q_11;
  rxx_5104446368(2.7955408321185256) _gate_q_1, _gate_q_2;
  s _gate_q_9;
  cu1_5104441712(3.817402702643238) _gate_q_7, _gate_q_10;
  cu1_5104451552(4.181795511979285) _gate_q_6, _gate_q_5;
  sxdg _gate_q_0;
  y _gate_q_3;
  dcx _gate_q_0, _gate_q_5;
  u2(6.085563602310554, 0.8511332323093593) _gate_q_1;
  ecr _gate_q_10, _gate_q_6;
  u1(1.0515638033349421) _gate_q_4;
  cu3_5104450928(3.8323273847825394, 6.193750368409215, 0.18455631939559466) _gate_q_9, _gate_q_8;
  u3(5.730300536413547, 2.248518835851454, 0.0040863721855902545) _gate_q_2;
  sx _gate_q_11;
  r_5104443056(5.217221047886464, 2.750399773100995) _gate_q_7;
  id _gate_q_9;
  rzx_5104450880(4.243384316518118) _gate_q_8, _gate_q_10;
  rzx_5104436384(1.7278844532176498) _gate_q_3, _gate_q_4;
  iswap _gate_q_5, _gate_q_11;
  ecr _gate_q_1, _gate_q_7;
  id _gate_q_0;
  h _gate_q_6;
  u1(4.45069796349434) _gate_q_2;
  crz(0.24746337055151602) _gate_q_8, _gate_q_5;
  s _gate_q_9;
  cry(2.919615642520133) _gate_q_7, _gate_q_4;
  cu3_5104448000(2.7694494254421946, 2.3646752302028733, 2.48080517236022) _gate_q_6, _gate_q_11;
  iswap _gate_q_0, _gate_q_1;
  sdg _gate_q_2;
  ry(5.760119291326389) _gate_q_3;
  y _gate_q_10;
}