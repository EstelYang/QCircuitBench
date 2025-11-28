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
gate rzz_5074777872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.03670612188168629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5074776624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.255730865005851) _gate_q_1;
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
gate cu1_5074773216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4779657483391992) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4779657483391992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4779657483391992) _gate_q_1;
}
gate rzx_5074774656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.809479410352909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074777728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4847384791700275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074778352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.147597177305542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074777056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.592765863924767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074778592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.170921152136422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074776816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.411737665239155) _gate_q_0;
  u1(0.7348179338674607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9177247825823898, 0, -5.411737665239155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9177247825823898, 4.676919731371695, 0) _gate_q_1;
}
gate rzx_5074775760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7289010594772596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
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
gate r_5074773504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.070520353904457, -0.756054496457892, 0.756054496457892) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074775568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.642023279178386) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2604150687786357) _gate_q_0;
  ry(-2.2604150687786357) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.642023279178386) _gate_q_1;
}
gate rxx_5074778880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.125189017372046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074775664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.742901590899079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074778256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7653811639911707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074778544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7716611006177083) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.725248068149241) _gate_q_1;
  ry(-2.725248068149241) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7716611006177083) _gate_q_0;
}
gate cu3_5074778400(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0876401494153214) _gate_q_0;
  u1(0.8340923602236676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7297378710871216, 0, -3.0876401494153214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7297378710871216, 2.253547789191654, 0) _gate_q_1;
}
gate ryy_5074772784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.4832026992854335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074772832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.674312651225426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074772160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2596811438657785) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8314480405040436) _gate_q_0;
  ry(-2.8314480405040436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2596811438657785) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  y _gate_q_7;
  h _gate_q_13;
  y _gate_q_4;
  crx(6.216444360914518) _gate_q_3, _gate_q_8;
  ch _gate_q_0, _gate_q_12;
  csx _gate_q_10, _gate_q_9;
  rx(2.046061730519939) _gate_q_11;
  id _gate_q_5;
  cz _gate_q_2, _gate_q_1;
  sdg _gate_q_6;
  rzz_5074777872(0.03670612188168629) _gate_q_0, _gate_q_5;
  dcx _gate_q_7, _gate_q_4;
  rzx_5074776624(5.255730865005851) _gate_q_13, _gate_q_1;
  ecr _gate_q_10, _gate_q_9;
  tdg _gate_q_8;
  sx _gate_q_6;
  z _gate_q_12;
  cx _gate_q_2, _gate_q_3;
  y _gate_q_11;
  ry(5.024555796732184) _gate_q_9;
  x _gate_q_7;
  swap _gate_q_10, _gate_q_11;
  cu1_5074773216(2.9559314966783985) _gate_q_6, _gate_q_1;
  cu(6.091571737389718, 0.6536643064100826, 4.748705914741266, 1.479869147901837) _gate_q_3, _gate_q_12;
  h _gate_q_13;
  u2(5.3555484682865915, 4.465027798619108) _gate_q_5;
  rzx_5074774656(3.809479410352909) _gate_q_2, _gate_q_0;
  rzx_5074777728(0.4847384791700275) _gate_q_8, _gate_q_4;
  csx _gate_q_7, _gate_q_10;
  t _gate_q_12;
  s _gate_q_9;
  ryy_5074778352(5.147597177305542) _gate_q_4, _gate_q_11;
  rzx_5074777056(5.592765863924767) _gate_q_8, _gate_q_1;
  rzz_5074778592(6.170921152136422) _gate_q_6, _gate_q_3;
  cu3_5074776816(3.8354495651647795, 4.676919731371695, 6.146555599106616) _gate_q_0, _gate_q_5;
  rzx_5074775760(2.7289010594772596) _gate_q_13, _gate_q_2;
  id _gate_q_1;
  cs _gate_q_0, _gate_q_4;
  tdg _gate_q_11;
  ecr _gate_q_9, _gate_q_2;
  U(3.685096114271668, 5.070747332908127, 2.7882658890904937) _gate_q_6;
  id _gate_q_7;
  csdg _gate_q_8, _gate_q_3;
  h _gate_q_10;
  r_5074773504(3.070520353904457, 0.8147418303370045) _gate_q_13;
  s _gate_q_5;
  U(4.42059094228236, 0.4928356236812943, 0.9557995349713375) _gate_q_12;
  xx_minus_yy_5074775568(4.5208301375572715, 1.642023279178386) _gate_q_6, _gate_q_7;
  cx _gate_q_4, _gate_q_12;
  dcx _gate_q_2, _gate_q_9;
  sdg _gate_q_1;
  h _gate_q_5;
  rxx_5074778880(3.125189017372046) _gate_q_11, _gate_q_8;
  rxx_5074775664(1.742901590899079) _gate_q_13, _gate_q_3;
  crz(5.925117116443283) _gate_q_0, _gate_q_10;
  dcx _gate_q_12, _gate_q_10;
  cs _gate_q_4, _gate_q_11;
  crz(1.5977452918097788) _gate_q_0, _gate_q_6;
  cs _gate_q_7, _gate_q_8;
  cp(4.941413971621805) _gate_q_5, _gate_q_3;
  t _gate_q_2;
  ch _gate_q_9, _gate_q_13;
  z _gate_q_1;
  rzx_5074778256(0.7653811639911707) _gate_q_9, _gate_q_11;
  crx(4.611241572225257) _gate_q_3, _gate_q_8;
  z _gate_q_12;
  xx_plus_yy_5074778544(5.450496136298482, 1.7716611006177083) _gate_q_1, _gate_q_4;
  p(4.858721471192694) _gate_q_13;
  dcx _gate_q_0, _gate_q_7;
  cx _gate_q_6, _gate_q_10;
  cu3_5074778400(5.459475742174243, 2.253547789191654, 3.9217325096389892) _gate_q_5, _gate_q_2;
  cx _gate_q_3, _gate_q_4;
  ryy_5074772784(5.4832026992854335) _gate_q_1, _gate_q_9;
  cz _gate_q_10, _gate_q_12;
  cu(1.3342550131177275, 0.77598202241876, 0.6242307231070902, 2.7339096107520042) _gate_q_11, _gate_q_8;
  id _gate_q_2;
  u2(5.715925148516993, 3.8286170385718457) _gate_q_7;
  s _gate_q_13;
  rz(1.853619844387773) _gate_q_0;
  x _gate_q_6;
  u3(6.024436980721023, 0.4600944446396995, 4.306069200929458) _gate_q_5;
  csdg _gate_q_3, _gate_q_4;
  rxx_5074772832(5.674312651225426) _gate_q_6, _gate_q_11;
  tdg _gate_q_9;
  x _gate_q_7;
  cx _gate_q_1, _gate_q_5;
  ecr _gate_q_12, _gate_q_10;
  rz(5.270382093383652) _gate_q_2;
  xx_minus_yy_5074772160(5.662896081008087, 2.2596811438657785) _gate_q_8, _gate_q_13;
  id _gate_q_0;
}
gate rzz_5074764480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2522170173980944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074764912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.304085698627521) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.744205858806009) _gate_q_1;
  ry(-1.744205858806009) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.304085698627521) _gate_q_0;
}
gate cu1_5074764816(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1731249194306472) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1731249194306472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1731249194306472) _gate_q_1;
}
gate xx_plus_yy_5074764240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.590026123719214) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3627308279367212) _gate_q_1;
  ry(-1.3627308279367212) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.590026123719214) _gate_q_0;
}
gate ryy_5074766160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.165672514729473) _gate_q_1;
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
gate cu1_5074970016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.122139264023995) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.122139264023995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.122139264023995) _gate_q_1;
}
gate rxx_5074962816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.90984667589661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074969440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.92032338985248, 2.925037547984135, -2.925037547984135) _gate_q_0;
}
gate cu1_5074969584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.156585228834654) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.156585228834654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.156585228834654) _gate_q_1;
}
gate rzz_5074970064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2970433371756447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074964496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.910080702744612) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5517063795701822) _gate_q_0;
  ry(-1.5517063795701822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.910080702744612) _gate_q_1;
}
gate xx_plus_yy_5074962912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.35483523768577596) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4489621501635255) _gate_q_1;
  ry(-2.4489621501635255) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.35483523768577596) _gate_q_0;
}
gate cu3_5074967232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.410561241961831) _gate_q_0;
  u1(0.5522541259318414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.576576270969642, 0, -5.410561241961831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.576576270969642, 4.85830711602999, 0) _gate_q_1;
}
gate xx_minus_yy_5074969152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7153365964017073) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.95908117662673) _gate_q_0;
  ry(-2.95908117662673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7153365964017073) _gate_q_1;
}
gate xx_plus_yy_5074967664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.784142187180047) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5832656638058813) _gate_q_1;
  ry(-2.5832656638058813) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.784142187180047) _gate_q_0;
}
gate rxx_5074968960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.639004686376016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074964400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5376379201908075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074967808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7430648658377199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074968480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.10464692757089668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074967520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4443072584807952) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4443072584807952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4443072584807952) _gate_q_1;
}
gate rxx_5074966896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.036244080547595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074968576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9980927219132956) _gate_q_0;
  u1(1.6499812666651024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9943183788753414, 0, -1.9980927219132956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9943183788753414, 0.348111455248193, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  rzz_5074764480(2.2522170173980944) _gate_q_4, _gate_q_0;
  csx _gate_q_3, _gate_q_2;
  dcx _gate_q_5, _gate_q_12;
  id _gate_q_8;
  tdg _gate_q_1;
  id _gate_q_13;
  u2(2.6504269072367843, 0.5885032620113155) _gate_q_9;
  swap _gate_q_10, _gate_q_7;
  xx_plus_yy_5074764912(3.488411717612018, 0.304085698627521) _gate_q_11, _gate_q_6;
  cu(1.740464138187072, 5.509712864680639, 5.383852521274438, 3.221285217850583) _gate_q_7, _gate_q_9;
  z _gate_q_13;
  cry(4.103575179197148) _gate_q_11, _gate_q_2;
  h _gate_q_5;
  id _gate_q_0;
  cu1_5074764816(2.3462498388612945) _gate_q_4, _gate_q_6;
  x _gate_q_12;
  sx _gate_q_10;
  xx_plus_yy_5074764240(2.7254616558734424, 4.590026123719214) _gate_q_8, _gate_q_1;
  u2(3.7194878230421753, 5.93181866854708) _gate_q_3;
  ryy_5074766160(6.165672514729473) _gate_q_6, _gate_q_13;
  crz(4.0065488440487576) _gate_q_2, _gate_q_8;
  iswap _gate_q_11, _gate_q_3;
  csx _gate_q_9, _gate_q_4;
  crx(2.721782089951511) _gate_q_12, _gate_q_1;
  u2(5.941039413606072, 0.165970149067238) _gate_q_10;
  swap _gate_q_0, _gate_q_5;
  y _gate_q_7;
  x _gate_q_4;
  tdg _gate_q_8;
  cry(5.327114748175231) _gate_q_9, _gate_q_13;
  id _gate_q_5;
  cu1_5074970016(6.24427852804799) _gate_q_12, _gate_q_11;
  rxx_5074962816(4.90984667589661) _gate_q_7, _gate_q_10;
  U(1.3263070991881127, 2.7750591191648546, 3.4030799035122237) _gate_q_2;
  swap _gate_q_3, _gate_q_0;
  crx(2.7273049889940615) _gate_q_6, _gate_q_1;
  r_5074969440(4.92032338985248, 4.495833874779032) _gate_q_13;
  cu1_5074969584(4.313170457669308) _gate_q_2, _gate_q_10;
  rzz_5074970064(3.2970433371756447) _gate_q_6, _gate_q_11;
  y _gate_q_12;
  u3(6.27758166954664, 4.405518752950791, 4.2252668336174795) _gate_q_9;
  xx_minus_yy_5074964496(3.1034127591403644, 3.910080702744612) _gate_q_5, _gate_q_7;
  xx_plus_yy_5074962912(4.897924300327051, 0.35483523768577596) _gate_q_4, _gate_q_1;
  u3(4.788952110686328, 3.41064024277354, 3.1381890862240978) _gate_q_0;
  cu3_5074967232(5.153152541939284, 4.85830711602999, 5.962815367893673) _gate_q_3, _gate_q_8;
  crx(2.136040258591367) _gate_q_10, _gate_q_9;
  ry(0.34246887106147406) _gate_q_7;
  cs _gate_q_4, _gate_q_1;
  xx_minus_yy_5074969152(5.91816235325346, 2.7153365964017073) _gate_q_2, _gate_q_6;
  id _gate_q_5;
  xx_plus_yy_5074967664(5.166531327611763, 2.784142187180047) _gate_q_11, _gate_q_8;
  sdg _gate_q_12;
  swap _gate_q_13, _gate_q_3;
  t _gate_q_0;
  swap _gate_q_3, _gate_q_6;
  sdg _gate_q_13;
  csdg _gate_q_4, _gate_q_7;
  tdg _gate_q_12;
  id _gate_q_5;
  ry(4.594884456113341) _gate_q_9;
  csdg _gate_q_1, _gate_q_2;
  rxx_5074968960(5.639004686376016) _gate_q_0, _gate_q_11;
  y _gate_q_10;
  sdg _gate_q_8;
  cu(0.07937185126938219, 3.6082611079232225, 5.243778835839425, 0.7039519796183054) _gate_q_13, _gate_q_2;
  swap _gate_q_11, _gate_q_7;
  swap _gate_q_10, _gate_q_5;
  ry(4.16654594714297) _gate_q_4;
  ryy_5074964400(1.5376379201908075) _gate_q_0, _gate_q_6;
  dcx _gate_q_12, _gate_q_3;
  cy _gate_q_1, _gate_q_9;
  h _gate_q_8;
  csdg _gate_q_11, _gate_q_13;
  u1(5.527107646603234) _gate_q_6;
  cp(0.07403100065407359) _gate_q_9, _gate_q_7;
  ecr _gate_q_2, _gate_q_3;
  rx(4.673615884587196) _gate_q_5;
  iswap _gate_q_1, _gate_q_4;
  iswap _gate_q_10, _gate_q_8;
  z _gate_q_0;
  rz(4.021234844869874) _gate_q_12;
  rxx_5074967808(0.7430648658377199) _gate_q_9, _gate_q_0;
  rzz_5074968480(0.10464692757089668) _gate_q_3, _gate_q_10;
  cu1_5074967520(2.8886145169615904) _gate_q_5, _gate_q_6;
  rxx_5074966896(5.036244080547595) _gate_q_7, _gate_q_8;
  s _gate_q_12;
  U(4.040249575379026, 5.7044269600676945, 5.6276947380900895) _gate_q_2;
  cu3_5074968576(3.9886367577506827, 0.348111455248193, 3.648073988578398) _gate_q_1, _gate_q_13;
  u3(6.005746544171365, 5.818137798463977, 4.745237136413151) _gate_q_11;
  y _gate_q_4;
}