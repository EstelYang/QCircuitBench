gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106014816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.516983742515714) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9290832644559937) _gate_q_0;
  ry(-1.9290832644559937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.516983742515714) _gate_q_1;
}
gate ryy_5106016016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5660555417417166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106015344(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.861712380733267) _gate_q_1;
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
gate r_5106021680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.581523339740912, 0.44304320579132916, -0.44304320579132916) _gate_q_0;
}
gate rzx_5106018272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6952014969534046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106008336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6642506190042384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5106019040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5791693071682684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106010256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.431446398858366) _gate_q_0;
  u1(0.4559473437573691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.172229456544295, 0, -3.431446398858366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.172229456544295, 2.975499055100997, 0) _gate_q_1;
}
gate xx_minus_yy_5106020672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.220231365795333) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0327004530314903) _gate_q_0;
  ry(-1.0327004530314903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.220231365795333) _gate_q_1;
}
gate xx_minus_yy_5106009200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9471385598663915) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6607816384899683) _gate_q_0;
  ry(-0.6607816384899683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9471385598663915) _gate_q_1;
}
gate ryy_5106015680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.3012282575664615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106012608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8434337306433384) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5106016208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.153776998219517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106020624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.776001701427457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106011168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.805486498860173) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4862536948216345) _gate_q_0;
  ry(-1.4862536948216345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.805486498860173) _gate_q_1;
}
gate rzx_5106010448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.933078602826178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106008912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35914759176708944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106014576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6245161064269134) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6245161064269134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6245161064269134) _gate_q_1;
}
gate rxx_5106020192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1703913442759015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rzz_5106013952(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6426422469852877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106018752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.172690738465288) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106019520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.364226012436256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106015872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.51198310576099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107728208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.374064471648275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107726816(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9421468282579186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5107720192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2916994244526965, -0.6070899824978598, 0.6070899824978598) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  u3(1.962093090621597, 1.7657386738587744, 3.6810319107943403) _gate_q_17;
  xx_minus_yy_5106014816(3.8581665289119873, 0.516983742515714) _gate_q_14, _gate_q_1;
  ryy_5106016016(1.5660555417417166) _gate_q_12, _gate_q_10;
  h _gate_q_5;
  rx(5.450787461366876) _gate_q_9;
  ch _gate_q_13, _gate_q_6;
  ryy_5106015344(5.861712380733267) _gate_q_11, _gate_q_3;
  cry(5.21270110605896) _gate_q_8, _gate_q_2;
  iswap _gate_q_15, _gate_q_16;
  r_5106021680(5.581523339740912, 2.0138395325862257) _gate_q_7;
  cz _gate_q_0, _gate_q_18;
  rx(2.0663952405729034) _gate_q_4;
  rzx_5106018272(3.6952014969534046) _gate_q_8, _gate_q_15;
  rx(0.8029893775814847) _gate_q_0;
  u2(0.655060976852136, 4.940314960379686) _gate_q_3;
  iswap _gate_q_13, _gate_q_4;
  sx _gate_q_18;
  sxdg _gate_q_7;
  rz(0.9291656277659959) _gate_q_9;
  s _gate_q_5;
  ryy_5106008336(0.6642506190042384) _gate_q_16, _gate_q_2;
  u3(4.946633410695073, 2.3951276481407104, 5.970512293915688) _gate_q_6;
  dcx _gate_q_12, _gate_q_17;
  sxdg _gate_q_1;
  sdg _gate_q_11;
  cry(2.532659866442253) _gate_q_10, _gate_q_14;
  crx(1.9809976397491673) _gate_q_11, _gate_q_4;
  u1(2.3016036336387065) _gate_q_5;
  cy _gate_q_0, _gate_q_6;
  u3(5.2923425067754915, 6.1133825191562465, 2.564314676901826) _gate_q_12;
  ch _gate_q_14, _gate_q_13;
  cz _gate_q_10, _gate_q_2;
  rzx_5106019040(3.5791693071682684) _gate_q_9, _gate_q_3;
  u2(2.916402294212847, 5.610151634128926) _gate_q_17;
  rx(0.15824037405359676) _gate_q_7;
  sxdg _gate_q_16;
  h _gate_q_8;
  ry(1.1667707106337522) _gate_q_1;
  t _gate_q_15;
  u2(5.630004280186506, 0.9252348796457176) _gate_q_18;
  cu3_5106010256(0.34445891308859, 2.975499055100997, 3.8873937426157354) _gate_q_4, _gate_q_18;
  rx(1.1021653497981723) _gate_q_10;
  u1(0.22874136000333575) _gate_q_8;
  rx(2.672739804242585) _gate_q_15;
  xx_minus_yy_5106020672(2.0654009060629805, 5.220231365795333) _gate_q_12, _gate_q_1;
  xx_minus_yy_5106009200(1.3215632769799366, 0.9471385598663915) _gate_q_2, _gate_q_16;
  cp(1.5770716334885662) _gate_q_11, _gate_q_7;
  ch _gate_q_0, _gate_q_17;
  t _gate_q_9;
  ryy_5106015680(4.3012282575664615) _gate_q_13, _gate_q_6;
  ryy_5106012608(2.8434337306433384) _gate_q_5, _gate_q_14;
  id _gate_q_3;
  crz(0.9723795703514405) _gate_q_17, _gate_q_1;
  rx(2.9565108981667803) _gate_q_6;
  csx _gate_q_10, _gate_q_8;
  cz _gate_q_16, _gate_q_12;
  z _gate_q_9;
  dcx _gate_q_5, _gate_q_7;
  cs _gate_q_3, _gate_q_13;
  rzx_5106016208(6.153776998219517) _gate_q_15, _gate_q_14;
  x _gate_q_0;
  tdg _gate_q_2;
  cs _gate_q_11, _gate_q_4;
  z _gate_q_18;
  z _gate_q_18;
  rzx_5106020624(0.776001701427457) _gate_q_9, _gate_q_16;
  u3(5.707342597150807, 3.3254479018801506, 0.3983658912693441) _gate_q_13;
  sxdg _gate_q_10;
  p(3.7614142890982896) _gate_q_5;
  crx(4.101808498742137) _gate_q_8, _gate_q_14;
  cu(0.6518840773215306, 3.0668363652088435, 3.310814332825767, 5.003782471245991) _gate_q_12, _gate_q_1;
  sdg _gate_q_7;
  tdg _gate_q_2;
  t _gate_q_6;
  iswap _gate_q_4, _gate_q_15;
  sx _gate_q_3;
  xx_minus_yy_5106011168(2.972507389643269, 1.805486498860173) _gate_q_0, _gate_q_17;
  u3(0.641841036587219, 1.3526904788709, 1.8599938039785373) _gate_q_11;
  rzx_5106010448(2.933078602826178) _gate_q_14, _gate_q_0;
  U(3.7120691309939797, 5.2136546568222775, 3.5966489321881747) _gate_q_18;
  u3(6.218586118189267, 1.5311171351312538, 0.1290075594418895) _gate_q_10;
  ch _gate_q_4, _gate_q_12;
  sx _gate_q_9;
  crz(5.887015326659383) _gate_q_5, _gate_q_7;
  rxx_5106008912(0.35914759176708944) _gate_q_17, _gate_q_13;
  cx _gate_q_6, _gate_q_11;
  cu1_5106014576(5.249032212853827) _gate_q_2, _gate_q_1;
  rx(0.9795781287133578) _gate_q_15;
  u2(0.6089686407121514, 4.579934288124518) _gate_q_3;
  ry(2.490941405227827) _gate_q_8;
  rx(1.8186252241349918) _gate_q_16;
  cy _gate_q_15, _gate_q_6;
  cu(2.04742055337059, 4.367660297936762, 5.318285461902935, 2.9018226219311014) _gate_q_10, _gate_q_2;
  dcx _gate_q_5, _gate_q_4;
  rxx_5106020192(3.1703913442759015) _gate_q_13, _gate_q_9;
  id _gate_q_17;
  s _gate_q_18;
  ecr _gate_q_3, _gate_q_7;
  cx _gate_q_11, _gate_q_0;
  cy _gate_q_1, _gate_q_16;
  U(4.6965607919182695, 4.148046407807336, 1.3517099417631058) _gate_q_8;
  cp(2.670166475588617) _gate_q_14, _gate_q_12;
  rzz_5106013952(2.6426422469852877) _gate_q_10, _gate_q_13;
  x _gate_q_9;
  rzx_5106018752(5.172690738465288) _gate_q_5, _gate_q_12;
  rxx_5106019520(0.364226012436256) _gate_q_6, _gate_q_16;
  rxx_5106015872(5.51198310576099) _gate_q_15, _gate_q_8;
  rx(1.8941854298252547) _gate_q_0;
  h _gate_q_18;
  rx(0.05626214144961243) _gate_q_3;
  rxx_5107728208(5.374064471648275) _gate_q_17, _gate_q_4;
  x _gate_q_1;
  u3(5.444599783054362, 2.668819202434479, 3.2348946761329747) _gate_q_11;
  rx(2.945723479034708) _gate_q_14;
  rzz_5107726816(1.9421468282579186) _gate_q_7, _gate_q_2;
  csdg _gate_q_4, _gate_q_12;
  z _gate_q_13;
  cs _gate_q_5, _gate_q_8;
  cx _gate_q_14, _gate_q_0;
  r_5107720192(0.2916994244526965, 0.9637063442970367) _gate_q_3;
  iswap _gate_q_9, _gate_q_6;
  cx _gate_q_16, _gate_q_1;
  ry(1.1817090109187938) _gate_q_11;
  iswap _gate_q_10, _gate_q_17;
  csx _gate_q_7, _gate_q_2;
  cx _gate_q_15, _gate_q_18;
}
gate cu1_5107718224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.27057220947750393) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.27057220947750393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.27057220947750393) _gate_q_1;
}
gate r_5107718752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.108780674414505, 4.047001393666378, -4.047001393666378) _gate_q_0;
}
gate rzz_5107722256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.494087328332619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107713952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.689268533889117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107714672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.092704487510392) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.092704487510392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.092704487510392) _gate_q_1;
}
gate xx_plus_yy_5107720432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.763007961066175) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3255813496143594) _gate_q_1;
  ry(-0.3255813496143594) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.763007961066175) _gate_q_0;
}
gate cu3_5107713664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8530220341505395) _gate_q_0;
  u1(-0.1780453365736654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.127467877885856, 0, -4.8530220341505395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.127467877885856, 5.031067370724205, 0) _gate_q_1;
}
gate r_5107727440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2806654458223999, -0.2647370280883894, 0.2647370280883894) _gate_q_0;
}
gate rzx_5107713808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.230340049600725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107719712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4338643606900891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107713568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9867730381019224) _gate_q_0;
  u1(1.8018783588728096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.404001765144284, 0, -3.9867730381019224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.404001765144284, 2.184894679229113, 0) _gate_q_1;
}
gate xx_minus_yy_5107721296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.656547790359212) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8662256831805413) _gate_q_0;
  ry(-1.8662256831805413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.656547790359212) _gate_q_1;
}
gate r_5107726960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7052701780893426, 2.9865261687941764, -2.9865261687941764) _gate_q_0;
}
gate rzz_5107718560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.1401739591358755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107719376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3116007515847268) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3116007515847268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3116007515847268) _gate_q_1;
}
gate xx_plus_yy_5107716832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.130016100049981) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.824044970326067) _gate_q_1;
  ry(-1.824044970326067) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.130016100049981) _gate_q_0;
}
gate ryy_5107724368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.024281407326387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107721776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.071142700761554) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.329546512888937) _gate_q_0;
  ry(-2.329546512888937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.071142700761554) _gate_q_1;
}
gate rzx_5107719616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6111290967836918) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107717792(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9894019658282653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107725616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.022982446109201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107716448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.200182695950511) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5849782067240092) _gate_q_1;
  ry(-1.5849782067240092) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.200182695950511) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  crz(3.6459983164998437) _gate_q_16, _gate_q_13;
  ch _gate_q_9, _gate_q_12;
  sdg _gate_q_14;
  cu1_5107718224(0.5411444189550079) _gate_q_3, _gate_q_17;
  dcx _gate_q_4, _gate_q_15;
  z _gate_q_11;
  sdg _gate_q_7;
  u3(3.7552239032805454, 4.297985692097963, 0.21559213910215655) _gate_q_0;
  crz(0.7751415953595754) _gate_q_6, _gate_q_5;
  z _gate_q_10;
  r_5107718752(3.108780674414505, 5.617797720461274) _gate_q_18;
  swap _gate_q_2, _gate_q_8;
  ry(3.3521247838506647) _gate_q_1;
  h _gate_q_4;
  sdg _gate_q_7;
  z _gate_q_17;
  cu(2.3552703242168342, 4.010807950951387, 5.655995549539284, 3.271733481591196) _gate_q_13, _gate_q_14;
  crz(6.081010699232111) _gate_q_16, _gate_q_11;
  id _gate_q_1;
  rzz_5107722256(5.494087328332619) _gate_q_3, _gate_q_12;
  ry(0.33025646403097175) _gate_q_15;
  ryy_5107713952(4.689268533889117) _gate_q_6, _gate_q_2;
  swap _gate_q_10, _gate_q_5;
  tdg _gate_q_0;
  ch _gate_q_8, _gate_q_9;
  y _gate_q_18;
  sdg _gate_q_1;
  x _gate_q_2;
  ch _gate_q_11, _gate_q_3;
  id _gate_q_13;
  csx _gate_q_8, _gate_q_12;
  iswap _gate_q_4, _gate_q_5;
  x _gate_q_14;
  cu1_5107714672(6.185408975020784) _gate_q_9, _gate_q_15;
  cx _gate_q_10, _gate_q_7;
  dcx _gate_q_16, _gate_q_6;
  p(0.3896593413726295) _gate_q_0;
  u3(0.6506979594069646, 3.576146433206486, 3.937433997298909) _gate_q_18;
  t _gate_q_17;
  xx_plus_yy_5107720432(0.6511626992287188, 1.763007961066175) _gate_q_7, _gate_q_14;
  csdg _gate_q_1, _gate_q_15;
  crx(2.9043644069436225) _gate_q_18, _gate_q_2;
  cu(2.7146731753464546, 2.6825591043882655, 3.0832519407182915, 1.9960275295235372) _gate_q_10, _gate_q_3;
  y _gate_q_9;
  cu3_5107713664(4.254935755771712, 5.031067370724205, 4.6749766975768745) _gate_q_0, _gate_q_4;
  u1(0.8838733056744114) _gate_q_8;
  cx _gate_q_11, _gate_q_5;
  id _gate_q_6;
  r_5107727440(0.2806654458223999, 1.3060592987065072) _gate_q_17;
  cry(5.959067146603919) _gate_q_12, _gate_q_16;
  ry(3.6115776470614853) _gate_q_13;
  ch _gate_q_12, _gate_q_8;
  U(0.28762849315949457, 5.441313673049891, 4.451433023698091) _gate_q_14;
  h _gate_q_18;
  csx _gate_q_1, _gate_q_6;
  cx _gate_q_0, _gate_q_13;
  rzx_5107713808(4.230340049600725) _gate_q_17, _gate_q_5;
  u3(0.3915572149889777, 2.434507864679886, 6.156607317924714) _gate_q_15;
  cz _gate_q_9, _gate_q_3;
  sdg _gate_q_11;
  cz _gate_q_4, _gate_q_10;
  z _gate_q_16;
  y _gate_q_2;
  s _gate_q_7;
  rzx_5107719712(0.4338643606900891) _gate_q_3, _gate_q_9;
  tdg _gate_q_2;
  sdg _gate_q_6;
  x _gate_q_18;
  cu3_5107713568(4.808003530288568, 2.184894679229113, 5.788651396974732) _gate_q_5, _gate_q_10;
  y _gate_q_14;
  sdg _gate_q_17;
  u3(4.7840524918033385, 0.2238634763755548, 4.842493541070264) _gate_q_12;
  ry(5.828038070733388) _gate_q_8;
  ry(3.619606979260953) _gate_q_4;
  rz(2.6273862514673585) _gate_q_1;
  csx _gate_q_7, _gate_q_16;
  ch _gate_q_0, _gate_q_13;
  xx_minus_yy_5107721296(3.7324513663610825, 4.656547790359212) _gate_q_15, _gate_q_11;
  cry(4.866701112041945) _gate_q_9, _gate_q_14;
  r_5107726960(0.7052701780893426, 4.557322495589073) _gate_q_1;
  u2(4.0295780716183, 2.2281615051852244) _gate_q_2;
  tdg _gate_q_15;
  u2(5.840769986550287, 3.210454791252923) _gate_q_5;
  U(3.8971578977861934, 0.5240584521206051, 2.0760814530229794) _gate_q_18;
  h _gate_q_11;
  u2(3.813213050279079, 5.689634697514158) _gate_q_4;
  ch _gate_q_7, _gate_q_10;
  cp(3.3807478721678472) _gate_q_6, _gate_q_8;
  csx _gate_q_3, _gate_q_0;
  cy _gate_q_17, _gate_q_13;
  rzz_5107718560(4.1401739591358755) _gate_q_16, _gate_q_12;
  iswap _gate_q_4, _gate_q_15;
  iswap _gate_q_12, _gate_q_6;
  cp(5.797456135993638) _gate_q_5, _gate_q_13;
  cry(2.143976919850352) _gate_q_18, _gate_q_10;
  cu1_5107719376(2.6232015031694536) _gate_q_11, _gate_q_3;
  swap _gate_q_2, _gate_q_1;
  y _gate_q_17;
  id _gate_q_14;
  h _gate_q_16;
  tdg _gate_q_9;
  rz(1.7513483551116575) _gate_q_0;
  iswap _gate_q_8, _gate_q_7;
  u2(1.2749387633159381, 5.571458375625542) _gate_q_17;
  dcx _gate_q_9, _gate_q_15;
  ry(4.68812324468831) _gate_q_7;
  xx_plus_yy_5107716832(3.648089940652134, 6.130016100049981) _gate_q_8, _gate_q_3;
  sdg _gate_q_16;
  rz(2.3111011273293283) _gate_q_4;
  ryy_5107724368(6.024281407326387) _gate_q_6, _gate_q_14;
  xx_minus_yy_5107721776(4.659093025777874, 5.071142700761554) _gate_q_2, _gate_q_1;
  U(5.180226041447267, 5.212577263955791, 1.1817229528262818) _gate_q_11;
  rzx_5107719616(3.6111290967836918) _gate_q_12, _gate_q_10;
  sx _gate_q_0;
  rx(2.9641267901384336) _gate_q_13;
  z _gate_q_5;
  rx(0.07685341769940168) _gate_q_18;
  y _gate_q_3;
  rzz_5107717792(0.9894019658282653) _gate_q_2, _gate_q_7;
  cx _gate_q_13, _gate_q_17;
  U(4.571198299509779, 6.268000566533914, 5.507739582007676) _gate_q_15;
  ch _gate_q_11, _gate_q_5;
  ryy_5107725616(5.022982446109201) _gate_q_1, _gate_q_10;
  iswap _gate_q_9, _gate_q_18;
  cz _gate_q_14, _gate_q_16;
  sxdg _gate_q_12;
  xx_plus_yy_5107716448(3.1699564134480185, 4.200182695950511) _gate_q_4, _gate_q_8;
  cs _gate_q_0, _gate_q_6;
}