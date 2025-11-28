gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105274560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7119390430151155) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.762713393817901) _gate_q_0;
  ry(-1.762713393817901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7119390430151155) _gate_q_1;
}
gate rxx_5105271056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.935881965540361) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105271488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5775051840208145) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6528025031287594) _gate_q_1;
  ry(-2.6528025031287594) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5775051840208145) _gate_q_0;
}
gate rxx_5105271824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.870912148050561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105285456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.07783382058935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105279936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4238373744584445) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6600166977973503) _gate_q_1;
  ry(-2.6600166977973503) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4238373744584445) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5106114896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0424557934520537) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.675340667538269) _gate_q_1;
  ry(-1.675340667538269) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0424557934520537) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5106113888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.563415276544079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106106544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2667866782259378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106107648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.855689513908311) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106113696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.19561864989761596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5106118112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8862057624204982, -0.7788514235572496, 0.7788514235572496) _gate_q_0;
}
gate rzx_5106108368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4398489959390137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106115424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.165050481516429) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106121280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6180792387250116) _gate_q_0;
  u1(0.15167649746145795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.02247184120323, 0, -2.6180792387250116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.02247184120323, 2.4664027412635536, 0) _gate_q_1;
}
gate cu3_5106117536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6412102051398321) _gate_q_0;
  u1(-0.1464607159400735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2665079070878433, 0, -0.6412102051398321) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2665079070878433, 0.7876709210799056, 0) _gate_q_1;
}
gate ryy_5106110912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.658969204579973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106106880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2552656566153273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106114080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.846749357176316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106112880(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5458604808404734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106114560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5464379133627746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5106110288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.464619577137647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106108416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2987590951786433) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2987590951786433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2987590951786433) _gate_q_1;
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
gate xx_plus_yy_5106107936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.16962226042757) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2904196527164788) _gate_q_1;
  ry(-1.2904196527164788) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.16962226042757) _gate_q_0;
}
gate xx_minus_yy_5106108848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.30564922936325395) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5612520124700893) _gate_q_0;
  ry(-1.5612520124700893) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.30564922936325395) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  crz(4.806760944769197) _gate_q_8, _gate_q_0;
  xx_minus_yy_5105274560(3.525426787635802, 0.7119390430151155) _gate_q_2, _gate_q_14;
  z _gate_q_15;
  rxx_5105271056(3.935881965540361) _gate_q_10, _gate_q_5;
  z _gate_q_9;
  xx_plus_yy_5105271488(5.305605006257519, 1.5775051840208145) _gate_q_6, _gate_q_4;
  z _gate_q_1;
  rxx_5105271824(4.870912148050561) _gate_q_13, _gate_q_11;
  u3(4.2707841435464395, 5.845633769581108, 3.129340844149265) _gate_q_7;
  ch _gate_q_16, _gate_q_17;
  rzz_5105285456(5.07783382058935) _gate_q_3, _gate_q_12;
  tdg _gate_q_0;
  id _gate_q_10;
  cu(0.3713548639521158, 0.5849630206112651, 3.6934052212306856, 2.1087072737232755) _gate_q_6, _gate_q_5;
  u3(2.754256739922938, 4.775366299299927, 1.0062126090028727) _gate_q_15;
  ch _gate_q_7, _gate_q_3;
  rz(0.7422995709909478) _gate_q_13;
  xx_plus_yy_5105279936(5.320033395594701, 2.4238373744584445) _gate_q_11, _gate_q_14;
  iswap _gate_q_17, _gate_q_1;
  crz(4.089901377617472) _gate_q_9, _gate_q_4;
  swap _gate_q_16, _gate_q_12;
  s _gate_q_2;
  h _gate_q_8;
  ry(3.2224438818195056) _gate_q_7;
  p(1.420041139731878) _gate_q_10;
  ch _gate_q_13, _gate_q_16;
  z _gate_q_5;
  swap _gate_q_11, _gate_q_3;
  cx _gate_q_4, _gate_q_6;
  tdg _gate_q_8;
  U(5.449386788637299, 4.537617428722679, 4.056224217031821) _gate_q_17;
  z _gate_q_14;
  x _gate_q_9;
  cp(3.541025215673762) _gate_q_0, _gate_q_12;
  dcx _gate_q_1, _gate_q_15;
  y _gate_q_2;
  u1(2.282955802409558) _gate_q_16;
  xx_plus_yy_5106114896(3.350681335076538, 2.0424557934520537) _gate_q_6, _gate_q_2;
  rx(5.278034819013749) _gate_q_13;
  cs _gate_q_14, _gate_q_3;
  swap _gate_q_15, _gate_q_7;
  id _gate_q_8;
  rz(3.0188145398495907) _gate_q_0;
  rz(4.2712977457980426) _gate_q_5;
  cz _gate_q_17, _gate_q_12;
  t _gate_q_1;
  crz(4.189747686319209) _gate_q_11, _gate_q_9;
  dcx _gate_q_4, _gate_q_10;
  u1(3.245729242186348) _gate_q_9;
  ryy_5106113888(4.563415276544079) _gate_q_0, _gate_q_5;
  cu(0.16181819636063036, 1.5485442480125209, 0.8249652549142048, 4.0584155283688155) _gate_q_7, _gate_q_14;
  cz _gate_q_13, _gate_q_16;
  rxx_5106106544(1.2667866782259378) _gate_q_12, _gate_q_10;
  U(2.5273507386418146, 5.45412945799709, 5.118610935251483) _gate_q_1;
  rxx_5106107648(3.855689513908311) _gate_q_6, _gate_q_11;
  cs _gate_q_3, _gate_q_8;
  y _gate_q_15;
  rx(3.8271405891780255) _gate_q_4;
  cx _gate_q_2, _gate_q_17;
  crz(1.358391774273654) _gate_q_1, _gate_q_9;
  ry(2.0884157455890957) _gate_q_3;
  ryy_5106113696(0.19561864989761596) _gate_q_7, _gate_q_6;
  crx(5.747096300977511) _gate_q_5, _gate_q_13;
  x _gate_q_10;
  crx(3.8651429655328484) _gate_q_4, _gate_q_0;
  iswap _gate_q_15, _gate_q_11;
  u3(1.6338911289359765, 5.925347464008979, 3.2637743272095046) _gate_q_16;
  cry(4.755541829542326) _gate_q_17, _gate_q_14;
  csdg _gate_q_2, _gate_q_12;
  tdg _gate_q_8;
  h _gate_q_6;
  dcx _gate_q_13, _gate_q_1;
  rz(1.727279613747305) _gate_q_9;
  t _gate_q_3;
  r_5106118112(1.8862057624204982, 0.791944903237647) _gate_q_0;
  u3(1.048338503378213, 5.438771613765021, 2.4061882120725118) _gate_q_8;
  rzx_5106108368(1.4398489959390137) _gate_q_17, _gate_q_16;
  cu(0.6869504175009192, 4.795413283746906, 4.298928831677037, 6.0169851360202475) _gate_q_12, _gate_q_15;
  rzz_5106115424(3.165050481516429) _gate_q_2, _gate_q_14;
  s _gate_q_10;
  t _gate_q_5;
  swap _gate_q_7, _gate_q_11;
  z _gate_q_4;
  cu(5.879636080874239, 0.11054467061382285, 3.4936333287073777, 0.5845295270424484) _gate_q_7, _gate_q_0;
  cu3_5106121280(2.04494368240646, 2.4664027412635536, 2.7697557361864695) _gate_q_4, _gate_q_8;
  cry(1.2469401817627228) _gate_q_11, _gate_q_17;
  cz _gate_q_13, _gate_q_5;
  U(4.189535404672949, 1.0544337207210117, 5.458126344700684) _gate_q_10;
  cu3_5106117536(4.533015814175687, 0.7876709210799056, 0.49474948919975853) _gate_q_12, _gate_q_9;
  ryy_5106110912(4.658969204579973) _gate_q_3, _gate_q_1;
  rxx_5106106880(1.2552656566153273) _gate_q_14, _gate_q_15;
  ryy_5106114080(5.846749357176316) _gate_q_2, _gate_q_6;
  u2(2.4447359549221153, 5.1153402171973985) _gate_q_16;
  y _gate_q_17;
  rzz_5106112880(2.5458604808404734) _gate_q_13, _gate_q_0;
  z _gate_q_10;
  ch _gate_q_2, _gate_q_16;
  h _gate_q_4;
  dcx _gate_q_5, _gate_q_1;
  iswap _gate_q_3, _gate_q_8;
  rx(1.2574445057071932) _gate_q_6;
  sx _gate_q_9;
  h _gate_q_15;
  ryy_5106114560(0.5464379133627746) _gate_q_14, _gate_q_7;
  iswap _gate_q_11, _gate_q_12;
  ry(1.8887176942204498) _gate_q_0;
  rzx_5106110288(4.464619577137647) _gate_q_1, _gate_q_13;
  sdg _gate_q_4;
  u2(4.866357948827555, 1.265322975271105) _gate_q_5;
  s _gate_q_9;
  y _gate_q_2;
  iswap _gate_q_15, _gate_q_7;
  u2(1.4284406958710383, 1.2801962109999814) _gate_q_11;
  cu1_5106108416(0.5975181903572866) _gate_q_16, _gate_q_10;
  ecr _gate_q_12, _gate_q_3;
  xx_plus_yy_5106107936(2.5808393054329577, 6.16962226042757) _gate_q_6, _gate_q_8;
  xx_minus_yy_5106108848(3.1225040249401785, 0.30564922936325395) _gate_q_17, _gate_q_14;
}
gate r_5106107264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.46269274481492967, -0.9483702794996834, 0.9483702794996834) _gate_q_0;
}
gate ryy_5106115136(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.512254711876529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106113504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9790252608410543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106108656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.476091072062294) _gate_q_0;
  u1(1.8457640921589062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6331181492325022, 0, -2.476091072062294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6331181492325022, 0.6303269799033878, 0) _gate_q_1;
}
gate cu3_5106107888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2795791499932925) _gate_q_0;
  u1(-0.8079665543405192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5322624260412524, 0, -2.2795791499932925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5322624260412524, 3.0875457043338117, 0) _gate_q_1;
}
gate xx_plus_yy_5106113600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.06685006464076057) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.825466459396558) _gate_q_1;
  ry(-0.825466459396558) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.06685006464076057) _gate_q_0;
}
gate ryy_5106116624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2657176746557697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106111680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.07825117938780839) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1234627097204255) _gate_q_0;
  ry(-3.1234627097204255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.07825117938780839) _gate_q_1;
}
gate r_5106109232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4611878067765763, 1.3959460954347849, -1.3959460954347849) _gate_q_0;
}
gate cu3_5106117344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3222630030884526) _gate_q_0;
  u1(1.0210251335963647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2006286425600896, 0, -3.3222630030884526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2006286425600896, 2.301237869492088, 0) _gate_q_1;
}
gate xx_minus_yy_5106116336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6027629144354503) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.330849657529126) _gate_q_0;
  ry(-1.330849657529126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6027629144354503) _gate_q_1;
}
gate rxx_5106107456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.035649779956951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106122528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.397009351398735) _gate_q_0;
  u1(-1.3086687258224265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8129202727841562, 0, -4.397009351398735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8129202727841562, 5.705678077221162, 0) _gate_q_1;
}
gate xx_minus_yy_5106110720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.099825809656224) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.726679536016044) _gate_q_0;
  ry(-2.726679536016044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.099825809656224) _gate_q_1;
}
gate cu3_5106118976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.594346759885669) _gate_q_0;
  u1(1.7624308601178027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5849816658935802, 0, -2.594346759885669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5849816658935802, 0.8319158997678664, 0) _gate_q_1;
}
gate xx_minus_yy_5106116672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.346759589128385) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.039192831791205) _gate_q_0;
  ry(-1.039192831791205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.346759589128385) _gate_q_1;
}
gate rzz_5106109424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6737010384216466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106109568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0288197724465378, -0.9897983738939047, 0.9897983738939047) _gate_q_0;
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
gate rxx_5106122288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2978271846819258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106110672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.999213922747193) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.099753099800142) _gate_q_0;
  ry(-2.099753099800142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.999213922747193) _gate_q_1;
}
gate cu1_5106111488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.08317055274872) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.08317055274872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.08317055274872) _gate_q_1;
}
gate rzx_5106112496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.693491581707499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106117968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.256688010263513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106118256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.402337502426697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106112640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3485149642169329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106110096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2172880535261053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106120272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1872071398191515) _gate_q_0;
  u1(0.9855424794005386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.10871550106948286, 0, -1.1872071398191515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.10871550106948286, 0.2016646604186129, 0) _gate_q_1;
}
gate xx_plus_yy_5106117200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.503557676589944) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3123408821163447) _gate_q_1;
  ry(-2.3123408821163447) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.503557676589944) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  z _gate_q_12;
  cz _gate_q_1, _gate_q_17;
  y _gate_q_0;
  h _gate_q_15;
  r_5106107264(0.46269274481492967, 0.6224260472952131) _gate_q_13;
  cs _gate_q_3, _gate_q_6;
  x _gate_q_5;
  ryy_5106115136(3.512254711876529) _gate_q_14, _gate_q_2;
  id _gate_q_16;
  ryy_5106113504(1.9790252608410543) _gate_q_11, _gate_q_7;
  rz(4.595462140697417) _gate_q_8;
  rz(5.860832268203019) _gate_q_10;
  cp(6.004242900321145) _gate_q_4, _gate_q_9;
  cy _gate_q_9, _gate_q_6;
  sx _gate_q_11;
  csdg _gate_q_1, _gate_q_17;
  cu3_5106108656(1.2662362984650044, 0.6303269799033878, 4.3218551642212) _gate_q_3, _gate_q_7;
  z _gate_q_12;
  h _gate_q_8;
  cu(1.3347057981463468, 4.668653394491716, 1.8981108795838095, 2.697854902780836) _gate_q_2, _gate_q_15;
  u3(5.261106818192522, 4.453485881482512, 4.357252781403036) _gate_q_16;
  rz(4.959582762823772) _gate_q_0;
  crx(2.588670019522287) _gate_q_5, _gate_q_4;
  cz _gate_q_10, _gate_q_13;
  id _gate_q_14;
  cu3_5106107888(1.0645248520825048, 3.0875457043338117, 1.4716125956527732) _gate_q_15, _gate_q_12;
  ry(5.896103897174624) _gate_q_13;
  z _gate_q_3;
  ecr _gate_q_2, _gate_q_5;
  xx_plus_yy_5106113600(1.650932918793116, 0.06685006464076057) _gate_q_14, _gate_q_11;
  ryy_5106116624(0.2657176746557697) _gate_q_9, _gate_q_10;
  ecr _gate_q_1, _gate_q_16;
  U(4.107861759433932, 1.6614749929019959, 4.918837022899913) _gate_q_6;
  xx_minus_yy_5106111680(6.246925419440851, 0.07825117938780839) _gate_q_0, _gate_q_7;
  r_5106109232(0.4611878067765763, 2.9667424222296814) _gate_q_17;
  crx(1.039791939327775) _gate_q_4, _gate_q_8;
  swap _gate_q_1, _gate_q_4;
  sxdg _gate_q_5;
  cu3_5106117344(2.401257285120179, 2.301237869492088, 4.3432881366848175) _gate_q_16, _gate_q_10;
  tdg _gate_q_3;
  csdg _gate_q_13, _gate_q_6;
  cs _gate_q_14, _gate_q_2;
  xx_minus_yy_5106116336(2.661699315058252, 3.6027629144354503) _gate_q_7, _gate_q_17;
  crz(5.161679905189029) _gate_q_0, _gate_q_12;
  id _gate_q_15;
  rxx_5106107456(5.035649779956951) _gate_q_11, _gate_q_9;
  x _gate_q_8;
  u1(0.6573030119901005) _gate_q_4;
  iswap _gate_q_0, _gate_q_13;
  cu3_5106122528(1.6258405455683125, 5.705678077221162, 3.0883406255763086) _gate_q_10, _gate_q_14;
  cp(1.4766777873284536) _gate_q_3, _gate_q_15;
  t _gate_q_9;
  sxdg _gate_q_6;
  u1(3.2420804167035406) _gate_q_16;
  xx_minus_yy_5106110720(5.453359072032088, 5.099825809656224) _gate_q_11, _gate_q_1;
  cu3_5106118976(5.1699633317871605, 0.8319158997678664, 4.356777620003472) _gate_q_17, _gate_q_7;
  sdg _gate_q_2;
  tdg _gate_q_8;
  cry(6.209297749087611) _gate_q_5, _gate_q_12;
  xx_minus_yy_5106116672(2.07838566358241, 3.346759589128385) _gate_q_12, _gate_q_17;
  cu(2.386871483040389, 3.57957693946498, 1.057451585382187, 4.991746184483091) _gate_q_9, _gate_q_13;
  rzz_5106109424(1.6737010384216466) _gate_q_7, _gate_q_14;
  r_5106109568(1.0288197724465378, 0.5809979529009919) _gate_q_4;
  s _gate_q_1;
  dcx _gate_q_16, _gate_q_2;
  ch _gate_q_5, _gate_q_3;
  rx(0.7349105880332076) _gate_q_0;
  ecr _gate_q_10, _gate_q_15;
  u3(4.571179313272808, 5.050826591250962, 3.0537120658402217) _gate_q_11;
  h _gate_q_8;
  sxdg _gate_q_6;
  csx _gate_q_14, _gate_q_13;
  rxx_5106122288(1.2978271846819258) _gate_q_12, _gate_q_3;
  crz(4.371999410016241) _gate_q_4, _gate_q_9;
  cs _gate_q_16, _gate_q_5;
  ch _gate_q_2, _gate_q_7;
  z _gate_q_0;
  h _gate_q_17;
  xx_minus_yy_5106110672(4.199506199600284, 5.999213922747193) _gate_q_1, _gate_q_10;
  cry(5.514931975563183) _gate_q_6, _gate_q_8;
  dcx _gate_q_11, _gate_q_15;
  cu1_5106111488(4.16634110549744) _gate_q_5, _gate_q_6;
  swap _gate_q_11, _gate_q_0;
  ecr _gate_q_12, _gate_q_1;
  cp(5.344197685719378) _gate_q_4, _gate_q_7;
  sxdg _gate_q_17;
  u2(1.927909879959024, 5.698336237017957) _gate_q_10;
  cp(3.402407570813559) _gate_q_14, _gate_q_2;
  h _gate_q_3;
  U(4.256442931672001, 0.12208154843138137, 3.6057387371355722) _gate_q_13;
  U(3.0047481516574885, 2.5753810167192004, 4.159258855432466) _gate_q_16;
  rzx_5106112496(0.693491581707499) _gate_q_8, _gate_q_15;
  rz(3.5924247152604405) _gate_q_9;
  p(1.1687699033673646) _gate_q_13;
  csdg _gate_q_12, _gate_q_2;
  u3(6.143322221245335, 3.332616997856719, 5.921429547303866) _gate_q_16;
  rz(6.218611614910754) _gate_q_9;
  ryy_5106117968(3.256688010263513) _gate_q_5, _gate_q_11;
  cz _gate_q_17, _gate_q_7;
  U(6.09743550895787, 6.21107687017159, 0.3145451510102287) _gate_q_8;
  rxx_5106118256(1.402337502426697) _gate_q_14, _gate_q_15;
  cy _gate_q_1, _gate_q_6;
  csdg _gate_q_10, _gate_q_0;
  ch _gate_q_3, _gate_q_4;
  id _gate_q_5;
  csx _gate_q_14, _gate_q_9;
  csdg _gate_q_13, _gate_q_6;
  s _gate_q_4;
  z _gate_q_0;
  rzx_5106112640(0.3485149642169329) _gate_q_1, _gate_q_8;
  rzz_5106110096(1.2172880535261053) _gate_q_12, _gate_q_17;
  cu3_5106120272(0.2174310021389657, 0.2016646604186129, 2.1727496192196902) _gate_q_3, _gate_q_16;
  t _gate_q_15;
  t _gate_q_11;
  xx_plus_yy_5106117200(4.624681764232689, 1.503557676589944) _gate_q_7, _gate_q_10;
  y _gate_q_2;
}