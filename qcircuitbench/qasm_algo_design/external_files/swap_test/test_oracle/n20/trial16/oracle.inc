gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072975824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.304225857543159) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8857235413653584) _gate_q_0;
  ry(-2.8857235413653584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.304225857543159) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5072962768(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22896504103727505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072970304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8067911001458405) _gate_q_0;
  u1(-0.3850809232741095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.62135454917712, 0, -4.8067911001458405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.62135454917712, 5.19187202341995, 0) _gate_q_1;
}
gate r_5072975728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.472616281786189, 2.7770589056695574, -2.7770589056695574) _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5072966656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3873429088629021) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3873429088629021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3873429088629021) _gate_q_1;
}
gate cu1_5072969968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.287855544275447) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.287855544275447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.287855544275447) _gate_q_1;
}
gate rxx_5072971408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4288909943579435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072977648(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8482967067501743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072968480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5992854045974547) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4858408150292879) _gate_q_1;
  ry(-1.4858408150292879) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5992854045974547) _gate_q_0;
}
gate rzx_5072969488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4012941051406473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072964880(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9688404513317386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072976304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.54603460822395) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6961367536771982) _gate_q_0;
  ry(-0.6961367536771982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.54603460822395) _gate_q_1;
}
gate r_5072963440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.107707610977366, 2.8660919547750785, -2.8660919547750785) _gate_q_0;
}
gate rxx_5072969008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.221370767847081) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072970640(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2916033363125389) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072975488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.589755255174206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072961712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0020473643737031) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072976784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.427091373574393) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2806130812519573) _gate_q_0;
  ry(-0.2806130812519573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.427091373574393) _gate_q_1;
}
gate ryy_5072976592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.869367241783574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072967472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.908430886805707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072976496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4649307956993902, -0.640188451561707, 0.640188451561707) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5074431840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3961212363353788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074767600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.770963474157212) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3236811935840374) _gate_q_1;
  ry(-2.3236811935840374) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.770963474157212) _gate_q_0;
}
gate rzx_5085111568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9562691697078005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5085110608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.625519074796586) _gate_q_0;
  u1(0.21216501097246532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11143843834337654, 0, -5.625519074796586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11143843834337654, 5.413354063824121, 0) _gate_q_1;
}
gate cu3_5085104608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9071167097676947) _gate_q_0;
  u1(1.0523038972035208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2195212809951768, 0, -3.9071167097676947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2195212809951768, 2.8548128125641736, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  xx_minus_yy_5072975824(5.771447082730717, 5.304225857543159) _gate_q_11, _gate_q_8;
  swap _gate_q_10, _gate_q_6;
  csx _gate_q_7, _gate_q_16;
  rx(0.3656613590687456) _gate_q_18;
  iswap _gate_q_4, _gate_q_5;
  cx _gate_q_19, _gate_q_9;
  csdg _gate_q_1, _gate_q_13;
  sxdg _gate_q_0;
  ryy_5072962768(0.22896504103727505) _gate_q_2, _gate_q_15;
  z _gate_q_12;
  h _gate_q_17;
  cu(0.7341007126586447, 4.520920639191551, 0.1909674486483913, 1.3061632303073873) _gate_q_14, _gate_q_3;
  iswap _gate_q_13, _gate_q_19;
  cu3_5072970304(5.24270909835424, 5.19187202341995, 4.421710176871731) _gate_q_18, _gate_q_11;
  x _gate_q_16;
  r_5072975728(4.472616281786189, 4.347855232464454) _gate_q_8;
  ecr _gate_q_0, _gate_q_5;
  cs _gate_q_14, _gate_q_2;
  sx _gate_q_12;
  cz _gate_q_1, _gate_q_15;
  id _gate_q_9;
  csdg _gate_q_6, _gate_q_17;
  cu1_5072966656(2.7746858177258042) _gate_q_7, _gate_q_3;
  ry(5.583886995140416) _gate_q_10;
  s _gate_q_4;
  cu1_5072969968(2.575711088550894) _gate_q_3, _gate_q_4;
  z _gate_q_11;
  cs _gate_q_7, _gate_q_13;
  z _gate_q_2;
  rxx_5072971408(3.4288909943579435) _gate_q_15, _gate_q_6;
  cp(1.0024231100328604) _gate_q_0, _gate_q_19;
  cu(1.7763733646095519, 4.974221282165333, 2.0808922269821477, 5.774000328282296) _gate_q_16, _gate_q_1;
  cs _gate_q_18, _gate_q_14;
  u1(0.7614859963847151) _gate_q_8;
  ryy_5072977648(2.8482967067501743) _gate_q_12, _gate_q_9;
  xx_plus_yy_5072968480(2.9716816300585758, 2.5992854045974547) _gate_q_10, _gate_q_5;
  y _gate_q_17;
  sx _gate_q_6;
  U(2.7439695285712817, 0.12192450376872963, 2.3050622438904127) _gate_q_8;
  cp(0.9597823468457941) _gate_q_10, _gate_q_14;
  tdg _gate_q_12;
  crx(1.4421715108354334) _gate_q_13, _gate_q_1;
  ecr _gate_q_3, _gate_q_11;
  rzx_5072969488(3.4012941051406473) _gate_q_19, _gate_q_9;
  u3(0.5541872281745742, 2.9418977922191636, 4.301633886305102) _gate_q_5;
  ryy_5072964880(1.9688404513317386) _gate_q_15, _gate_q_4;
  u3(3.2332921520895117, 0.24764050209438537, 5.181135890668904) _gate_q_17;
  crx(4.024772508607813) _gate_q_7, _gate_q_16;
  xx_minus_yy_5072976304(1.3922735073543964, 5.54603460822395) _gate_q_0, _gate_q_2;
  x _gate_q_18;
  crz(3.8454012036056398) _gate_q_6, _gate_q_13;
  r_5072963440(3.107707610977366, 4.436888281569975) _gate_q_4;
  sxdg _gate_q_2;
  rxx_5072969008(4.221370767847081) _gate_q_1, _gate_q_18;
  ecr _gate_q_16, _gate_q_5;
  ry(2.684390443596142) _gate_q_19;
  rzz_5072970640(0.2916033363125389) _gate_q_9, _gate_q_14;
  ry(4.190965213550886) _gate_q_10;
  sx _gate_q_3;
  cz _gate_q_7, _gate_q_8;
  u1(5.934859103351053) _gate_q_17;
  rxx_5072975488(2.589755255174206) _gate_q_15, _gate_q_12;
  iswap _gate_q_0, _gate_q_11;
  y _gate_q_0;
  rzx_5072961712(1.0020473643737031) _gate_q_5, _gate_q_10;
  p(4.79560990363366) _gate_q_18;
  xx_minus_yy_5072976784(0.5612261625039145, 5.427091373574393) _gate_q_1, _gate_q_19;
  z _gate_q_17;
  sdg _gate_q_7;
  cx _gate_q_12, _gate_q_14;
  ryy_5072976592(0.869367241783574) _gate_q_15, _gate_q_6;
  cy _gate_q_16, _gate_q_11;
  x _gate_q_13;
  u3(1.9289234283304482, 5.344546169132945, 5.839786684037027) _gate_q_2;
  cz _gate_q_8, _gate_q_9;
  p(5.300563288762574) _gate_q_3;
  z _gate_q_4;
  ch _gate_q_3, _gate_q_10;
  y _gate_q_9;
  u2(0.9673387825102676, 3.429859922100445) _gate_q_15;
  swap _gate_q_13, _gate_q_1;
  cx _gate_q_11, _gate_q_12;
  t _gate_q_2;
  rzz_5072967472(5.908430886805707) _gate_q_5, _gate_q_19;
  iswap _gate_q_4, _gate_q_7;
  r_5072976496(1.4649307956993902, 0.9306078752331896) _gate_q_16;
  rz(5.302020373541013) _gate_q_18;
  ry(1.9787498262559526) _gate_q_0;
  swap _gate_q_17, _gate_q_14;
  u3(0.6646021815998576, 0.34516092006246757, 1.5197715868740718) _gate_q_6;
  sx _gate_q_8;
  cs _gate_q_12, _gate_q_7;
  U(3.1159114830360477, 6.051234027749939, 5.360931980644892) _gate_q_13;
  x _gate_q_4;
  ch _gate_q_5, _gate_q_17;
  swap _gate_q_0, _gate_q_6;
  dcx _gate_q_15, _gate_q_9;
  t _gate_q_10;
  rzz_5074431840(3.3961212363353788) _gate_q_14, _gate_q_18;
  csx _gate_q_2, _gate_q_19;
  ch _gate_q_8, _gate_q_16;
  p(4.692137843984832) _gate_q_1;
  crz(3.3528470410918527) _gate_q_11, _gate_q_3;
  cs _gate_q_12, _gate_q_7;
  iswap _gate_q_16, _gate_q_9;
  csdg _gate_q_8, _gate_q_17;
  rx(1.509338600406216) _gate_q_3;
  csdg _gate_q_2, _gate_q_5;
  id _gate_q_4;
  rx(2.908622875870666) _gate_q_11;
  U(0.3966744507646507, 6.192843897882065, 5.678441322305986) _gate_q_14;
  cry(3.6783636578996446) _gate_q_19, _gate_q_15;
  ecr _gate_q_10, _gate_q_0;
  p(4.278170955631496) _gate_q_18;
  id _gate_q_13;
  u1(3.920499175905219) _gate_q_6;
  u3(0.9066368424750572, 2.3996046438561796, 5.87619844476981) _gate_q_1;
  csx _gate_q_4, _gate_q_14;
  xx_plus_yy_5074767600(4.647362387168075, 4.770963474157212) _gate_q_13, _gate_q_10;
  u1(4.199289249487084) _gate_q_11;
  cz _gate_q_3, _gate_q_6;
  ry(4.74718646874315) _gate_q_1;
  rzx_5085111568(2.9562691697078005) _gate_q_0, _gate_q_16;
  id _gate_q_12;
  cu3_5085110608(0.22287687668675307, 5.413354063824121, 5.837684085769052) _gate_q_9, _gate_q_17;
  cu3_5085104608(4.4390425619903535, 2.8548128125641736, 4.959420606971215) _gate_q_18, _gate_q_19;
  sdg _gate_q_2;
  sx _gate_q_7;
  ch _gate_q_8, _gate_q_5;
  x _gate_q_15;
}
gate r_5074283952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5246955348689306, -0.38275307207442477, 0.38275307207442477) _gate_q_0;
}
gate cu3_5074282320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.442387201714598) _gate_q_0;
  u1(-0.5658553025800774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.569013038644214, 0, -4.442387201714598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.569013038644214, 5.008242504294675, 0) _gate_q_1;
}
gate rzz_5074277184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5924848654034363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074287312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1523216343892924) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.05055576663708531) _gate_q_1;
  ry(-0.05055576663708531) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1523216343892924) _gate_q_0;
}
gate rzx_5070586944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.951368195851837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070594528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.432538868420987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070590016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.719250542474029) _gate_q_0;
  u1(1.224124629252665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6518219591992132, 0, -3.719250542474029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6518219591992132, 2.4951259132213637, 0) _gate_q_1;
}
gate rzz_5070590448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.47173258562892445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070595536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8473024067872226) _gate_q_0;
  u1(2.0489468663950214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.15712301871296108, 0, -3.8473024067872226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.15712301871296108, 1.7983555403922011, 0) _gate_q_1;
}
gate ryy_5070590496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.972519621249443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070596352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2774900110753498) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9846122387738676) _gate_q_1;
  ry(-1.9846122387738676) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2774900110753498) _gate_q_0;
}
gate rxx_5070593040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2137496278092366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070590832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.969012261214106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070597408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5925429481517412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070591312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1614921782529506) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3359883934574643) _gate_q_0;
  ry(-2.3359883934574643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1614921782529506) _gate_q_1;
}
gate cu1_5070602208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4304680490113789) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4304680490113789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4304680490113789) _gate_q_1;
}
gate xx_minus_yy_5070589584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9024676585643654) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7245580013955745) _gate_q_0;
  ry(-0.7245580013955745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9024676585643654) _gate_q_1;
}
gate cu1_5070592944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3458068229672073) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3458068229672073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3458068229672073) _gate_q_1;
}
gate cu1_5070594864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1086091136476572) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1086091136476572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1086091136476572) _gate_q_1;
}
gate rzx_5070600384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.160360847903837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070586176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.395872762408246, 2.4806551510455233, -2.4806551510455233) _gate_q_0;
}
gate rzz_5070591888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.394416410256352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070600720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.894494631251419) _gate_q_0;
  u1(0.4309018502403563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.899300391701267, 0, -4.894494631251419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.899300391701267, 4.463592781011063, 0) _gate_q_1;
}
gate rzx_5070589776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1201401697518822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070597600(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.34849051505537737) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.34849051505537737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.34849051505537737) _gate_q_1;
}
gate r_5070594096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3385183780024206, -1.2032278473145515, 1.2032278473145515) _gate_q_0;
}
gate ryy_5070594432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.965953563312846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070599808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7029567408590818, 1.2041573852277199, -1.2041573852277199) _gate_q_0;
}
gate r_5070596496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9553115380792195, -0.9232183628257994, 0.9232183628257994) _gate_q_0;
}
gate rzx_5070595296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.675806807550842) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070594240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.593861138999435) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.662614272362384) _gate_q_0;
  ry(-2.662614272362384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.593861138999435) _gate_q_1;
}
gate xx_minus_yy_5070588960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.006639686647595) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9104892997715807) _gate_q_0;
  ry(-0.9104892997715807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.006639686647595) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  ecr _gate_q_10, _gate_q_19;
  x _gate_q_5;
  x _gate_q_13;
  swap _gate_q_6, _gate_q_8;
  r_5074283952(1.5246955348689306, 1.1880432547204718) _gate_q_17;
  U(0.17182958369796114, 3.890632074800063, 4.041198160939395) _gate_q_2;
  rx(2.120944758814026) _gate_q_14;
  U(0.6655891828079721, 2.1135853111867067, 2.7274086028720217) _gate_q_1;
  dcx _gate_q_7, _gate_q_0;
  u1(5.091754974217592) _gate_q_12;
  u3(5.376820915958346, 2.1326372514347516, 3.706364434707649) _gate_q_18;
  sx _gate_q_16;
  U(1.7499976719465797, 1.710500082331049, 2.605887593360538) _gate_q_11;
  u3(3.2666864058917997, 5.082218138124258, 0.11363822757305694) _gate_q_4;
  cy _gate_q_9, _gate_q_3;
  rz(0.8294253412139231) _gate_q_15;
  iswap _gate_q_5, _gate_q_0;
  s _gate_q_13;
  h _gate_q_17;
  ch _gate_q_14, _gate_q_12;
  U(6.221952345146833, 0.6440107907437858, 0.489630575203399) _gate_q_16;
  cu3_5074282320(5.138026077288428, 5.008242504294675, 3.8765318991345206) _gate_q_11, _gate_q_7;
  rzz_5074277184(3.5924848654034363) _gate_q_10, _gate_q_6;
  rz(3.176261283515758) _gate_q_18;
  cry(4.653669077186107) _gate_q_3, _gate_q_15;
  crx(0.870732782299945) _gate_q_8, _gate_q_4;
  u3(4.761920164932619, 0.7472196564032075, 2.6995600864371445) _gate_q_1;
  xx_plus_yy_5074287312(0.10111153327417062, 2.1523216343892924) _gate_q_19, _gate_q_2;
  rx(4.077754982509242) _gate_q_9;
  dcx _gate_q_7, _gate_q_9;
  cry(3.169379429694912) _gate_q_14, _gate_q_5;
  ry(1.6568918643717059) _gate_q_16;
  U(2.8477187935861017, 4.350541583374295, 0.4464244542030837) _gate_q_8;
  p(4.766782652583773) _gate_q_11;
  rzx_5070586944(5.951368195851837) _gate_q_12, _gate_q_6;
  y _gate_q_17;
  ryy_5070594528(3.432538868420987) _gate_q_13, _gate_q_15;
  cu3_5070590016(3.3036439183984263, 2.4951259132213637, 4.943375171726694) _gate_q_4, _gate_q_3;
  iswap _gate_q_18, _gate_q_0;
  u1(6.090315739670974) _gate_q_10;
  rzz_5070590448(0.47173258562892445) _gate_q_2, _gate_q_19;
  z _gate_q_1;
  cp(1.1294560226877643) _gate_q_0, _gate_q_3;
  h _gate_q_10;
  cu3_5070595536(0.31424603742592216, 1.7983555403922011, 5.896249273182244) _gate_q_2, _gate_q_17;
  ch _gate_q_15, _gate_q_7;
  id _gate_q_9;
  ryy_5070590496(3.972519621249443) _gate_q_18, _gate_q_12;
  id _gate_q_11;
  t _gate_q_6;
  csx _gate_q_19, _gate_q_5;
  xx_plus_yy_5070596352(3.969224477547735, 3.2774900110753498) _gate_q_1, _gate_q_4;
  y _gate_q_16;
  u2(3.310836389767372, 6.2620878643950535) _gate_q_14;
  U(0.4468166483077071, 1.4383241527968529, 2.6701701377209814) _gate_q_8;
  id _gate_q_13;
  u1(3.746058063111778) _gate_q_13;
  rz(1.1048506039651096) _gate_q_7;
  ch _gate_q_14, _gate_q_2;
  cu(2.7473300449393196, 4.807304794588232, 5.585514521347639, 1.6491398456235942) _gate_q_8, _gate_q_0;
  cy _gate_q_18, _gate_q_5;
  ry(4.200112698316504) _gate_q_12;
  rxx_5070593040(2.2137496278092366) _gate_q_3, _gate_q_11;
  rx(1.8673907440267268) _gate_q_17;
  id _gate_q_1;
  cu(5.6724103543846365, 0.9713564727675197, 4.985440781041861, 4.1549905676632815) _gate_q_16, _gate_q_10;
  rzx_5070590832(4.969012261214106) _gate_q_19, _gate_q_9;
  h _gate_q_6;
  crx(3.0837588138520937) _gate_q_4, _gate_q_15;
  u3(3.661256628911551, 2.614164267791266, 3.850496565644852) _gate_q_4;
  u3(3.8196265878681177, 2.1018096576404712, 0.23313005008947857) _gate_q_0;
  ry(2.0270198486148296) _gate_q_5;
  crx(2.257982263236667) _gate_q_11, _gate_q_7;
  dcx _gate_q_13, _gate_q_6;
  sx _gate_q_12;
  id _gate_q_1;
  ry(0.3078645565208919) _gate_q_18;
  ryy_5070597408(1.5925429481517412) _gate_q_19, _gate_q_17;
  xx_minus_yy_5070591312(4.671976786914929, 3.1614921782529506) _gate_q_3, _gate_q_14;
  cu1_5070602208(0.8609360980227578) _gate_q_2, _gate_q_9;
  ch _gate_q_10, _gate_q_16;
  ch _gate_q_15, _gate_q_8;
  xx_minus_yy_5070589584(1.449116002791149, 2.9024676585643654) _gate_q_18, _gate_q_3;
  cx _gate_q_16, _gate_q_15;
  rz(0.9702285975163263) _gate_q_1;
  cu1_5070592944(4.691613645934415) _gate_q_5, _gate_q_17;
  cu1_5070594864(2.2172182272953145) _gate_q_12, _gate_q_14;
  p(4.059643708844662) _gate_q_19;
  rzx_5070600384(2.160360847903837) _gate_q_0, _gate_q_7;
  r_5070586176(5.395872762408246, 4.05145147784042) _gate_q_2;
  crz(2.245071770196022) _gate_q_13, _gate_q_6;
  cs _gate_q_4, _gate_q_8;
  rzz_5070591888(5.394416410256352) _gate_q_11, _gate_q_10;
  rz(5.410042867398835) _gate_q_9;
  cu3_5070600720(5.798600783402534, 4.463592781011063, 5.325396481491776) _gate_q_8, _gate_q_4;
  dcx _gate_q_1, _gate_q_3;
  t _gate_q_18;
  sdg _gate_q_19;
  u1(6.020169257981401) _gate_q_12;
  z _gate_q_9;
  cz _gate_q_0, _gate_q_6;
  h _gate_q_11;
  rzx_5070589776(1.1201401697518822) _gate_q_5, _gate_q_13;
  csdg _gate_q_16, _gate_q_15;
  cu1_5070597600(0.6969810301107547) _gate_q_2, _gate_q_14;
  tdg _gate_q_10;
  x _gate_q_17;
  r_5070594096(2.3385183780024206, 0.36756847948034505) _gate_q_7;
  ryy_5070594432(3.965953563312846) _gate_q_8, _gate_q_4;
  dcx _gate_q_0, _gate_q_13;
  cp(4.062278779162726) _gate_q_9, _gate_q_7;
  rz(2.4152674808064623) _gate_q_5;
  csx _gate_q_16, _gate_q_3;
  r_5070599808(0.7029567408590818, 2.7749537120226164) _gate_q_18;
  cu(2.811338981023126, 2.7136469416389164, 0.2573699096242503, 0.12239500930972488) _gate_q_2, _gate_q_15;
  rz(4.957195024098013) _gate_q_1;
  sxdg _gate_q_10;
  r_5070596496(0.9553115380792195, 0.6475779639690972) _gate_q_17;
  s _gate_q_11;
  s _gate_q_19;
  rzx_5070595296(3.675806807550842) _gate_q_12, _gate_q_6;
  p(0.975845930826835) _gate_q_14;
  cy _gate_q_13, _gate_q_0;
  xx_minus_yy_5070594240(5.325228544724768, 5.593861138999435) _gate_q_2, _gate_q_14;
  u2(4.756889506225018, 1.6765446435333184) _gate_q_19;
  id _gate_q_10;
  crz(6.182646187379605) _gate_q_7, _gate_q_9;
  iswap _gate_q_15, _gate_q_5;
  U(3.8328253138076382, 0.8513118390691545, 5.094795193010619) _gate_q_11;
  sx _gate_q_6;
  xx_minus_yy_5070588960(1.8209785995431613, 3.006639686647595) _gate_q_4, _gate_q_16;
  u3(5.797286174563116, 5.643782667722095, 3.0857514824021695) _gate_q_18;
  csx _gate_q_8, _gate_q_3;
  csdg _gate_q_17, _gate_q_1;
  s _gate_q_12;
}