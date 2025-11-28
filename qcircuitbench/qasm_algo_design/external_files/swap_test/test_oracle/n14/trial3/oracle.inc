gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5108072320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.26474023740482) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.02358732404423) _gate_q_0;
  ry(-3.02358732404423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.26474023740482) _gate_q_1;
}
gate xx_minus_yy_5108071792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3630507225262343) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2767508092485531) _gate_q_0;
  ry(-0.2767508092485531) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3630507225262343) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5108059168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0655443004102294) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0655443004102294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0655443004102294) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5108064976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.59096885158251) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8695359270653342) _gate_q_1;
  ry(-2.8695359270653342) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.59096885158251) _gate_q_0;
}
gate xx_plus_yy_5108056144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.584539097154367) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0269280841589046) _gate_q_1;
  ry(-2.0269280841589046) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.584539097154367) _gate_q_0;
}
gate rzx_5108059408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6947229501740977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5108056288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4047471979818855) _gate_q_0;
  u1(-0.8904103644218588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0930343444840886, 0, -3.4047471979818855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0930343444840886, 4.295157562403745, 0) _gate_q_1;
}
gate rzx_5108059264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9529907753073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5108063056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.0591833981146355) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0461819401291717) _gate_q_1;
  ry(-2.0461819401291717) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.0591833981146355) _gate_q_0;
}
gate r_5108063488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.22486037191761116, 1.8001571907465928, -1.8001571907465928) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5108063248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.23866889950841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5108063728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6249634941222038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5108058688(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.661380981266298) _gate_q_0;
  u1(-0.19851732428710367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1431586532006097, 0, -4.661380981266298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1431586532006097, 4.8598983055534015, 0) _gate_q_1;
}
gate xx_plus_yy_5108059072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.1024162205116) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.852471923758101) _gate_q_1;
  ry(-0.852471923758101) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.1024162205116) _gate_q_0;
}
gate cu3_5108063536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.649704824410971) _gate_q_0;
  u1(-0.7593159076861267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.18061027060929016, 0, -3.649704824410971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.18061027060929016, 4.4090207320970976, 0) _gate_q_1;
}
gate r_5108057152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.78743770814818, 4.190327665122098, -4.190327665122098) _gate_q_0;
}
gate rzz_5108067568(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4214662062519114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_minus_yy_5108059600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3472768985662746) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5254439229849232) _gate_q_0;
  ry(-0.5254439229849232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3472768985662746) _gate_q_1;
}
gate xx_plus_yy_5108058496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.308183370156823) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.980075807625125) _gate_q_1;
  ry(-2.980075807625125) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.308183370156823) _gate_q_0;
}
gate cu1_5108059552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1016126836362128) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1016126836362128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1016126836362128) _gate_q_1;
}
gate cu1_5108059312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.1364053147547422) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.1364053147547422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.1364053147547422) _gate_q_1;
}
gate xx_minus_yy_5108057968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8284538939177135) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5894203783469919) _gate_q_0;
  ry(-0.5894203783469919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8284538939177135) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  u2(2.707874310977794, 5.945953730390087) _gate_q_9;
  rz(1.6982962532101076) _gate_q_4;
  cu(1.04156701982458, 0.42050934206395935, 1.8787175510048202, 5.762383529927857) _gate_q_7, _gate_q_5;
  sxdg _gate_q_13;
  xx_minus_yy_5108072320(6.04717464808846, 5.26474023740482) _gate_q_1, _gate_q_0;
  u3(5.755148340338303, 2.9321972010942488, 2.934507165696803) _gate_q_2;
  xx_minus_yy_5108071792(0.5535016184971062, 1.3630507225262343) _gate_q_10, _gate_q_11;
  h _gate_q_8;
  csx _gate_q_12, _gate_q_6;
  u2(4.977129850811093, 1.616106777382689) _gate_q_3;
  tdg _gate_q_11;
  dcx _gate_q_6, _gate_q_1;
  sxdg _gate_q_0;
  t _gate_q_2;
  z _gate_q_4;
  sdg _gate_q_9;
  cu1_5108059168(2.131088600820459) _gate_q_5, _gate_q_8;
  cs _gate_q_7, _gate_q_12;
  cy _gate_q_10, _gate_q_3;
  U(5.1450490564346865, 2.7726885347269805, 2.5933690374074216) _gate_q_13;
  id _gate_q_9;
  s _gate_q_5;
  x _gate_q_6;
  xx_plus_yy_5108064976(5.7390718541306684, 0.59096885158251) _gate_q_12, _gate_q_2;
  xx_plus_yy_5108056144(4.053856168317809, 5.584539097154367) _gate_q_1, _gate_q_8;
  rzx_5108059408(3.6947229501740977) _gate_q_3, _gate_q_11;
  cu3_5108056288(2.1860686889681773, 4.295157562403745, 2.514336833560027) _gate_q_0, _gate_q_7;
  dcx _gate_q_13, _gate_q_10;
  rx(0.6544100446925863) _gate_q_4;
  rzx_5108059264(4.9529907753073) _gate_q_13, _gate_q_11;
  cz _gate_q_2, _gate_q_3;
  xx_plus_yy_5108063056(4.092363880258343, 4.0591833981146355) _gate_q_5, _gate_q_10;
  r_5108063488(0.22486037191761116, 3.3709535175414893) _gate_q_0;
  iswap _gate_q_7, _gate_q_9;
  ryy_5108063248(6.23866889950841) _gate_q_1, _gate_q_12;
  ry(0.5231075753290179) _gate_q_4;
  z _gate_q_8;
  tdg _gate_q_6;
  tdg _gate_q_2;
  cy _gate_q_9, _gate_q_3;
  cs _gate_q_12, _gate_q_0;
  ryy_5108063728(1.6249634941222038) _gate_q_1, _gate_q_11;
  cry(3.0401220585985764) _gate_q_7, _gate_q_5;
  cry(3.3740936726015143) _gate_q_10, _gate_q_13;
  cu(1.568344646323213, 1.495072337742024, 3.4578206949435644, 3.7643107725821756) _gate_q_6, _gate_q_4;
  y _gate_q_8;
  cy _gate_q_5, _gate_q_6;
  cp(1.5613763805086067) _gate_q_12, _gate_q_3;
  sx _gate_q_2;
  z _gate_q_7;
  t _gate_q_10;
  cu3_5108058688(4.286317306401219, 4.8598983055534015, 4.462863656979194) _gate_q_1, _gate_q_8;
  s _gate_q_9;
  cu(3.435951449559596, 2.79740576312254, 4.241877353408324, 3.8361026247264123) _gate_q_0, _gate_q_13;
  xx_plus_yy_5108059072(1.704943847516202, 5.1024162205116) _gate_q_4, _gate_q_11;
  cu3_5108063536(0.3612205412185803, 4.4090207320970976, 2.890388916724844) _gate_q_7, _gate_q_9;
  r_5108057152(4.78743770814818, 5.761123991916994) _gate_q_12;
  U(3.005386398980579, 1.2258045386826468, 0.05072677687601224) _gate_q_4;
  cp(3.1470294845963207) _gate_q_3, _gate_q_0;
  p(1.4057190492235303) _gate_q_1;
  rzz_5108067568(1.4214662062519114) _gate_q_11, _gate_q_2;
  ecr _gate_q_5, _gate_q_13;
  iswap _gate_q_10, _gate_q_6;
  t _gate_q_8;
  U(4.621370971894047, 6.032643541072848, 2.3247330622887294) _gate_q_11;
  xx_minus_yy_5108059600(1.0508878459698463, 2.3472768985662746) _gate_q_7, _gate_q_12;
  xx_plus_yy_5108058496(5.96015161525025, 3.308183370156823) _gate_q_13, _gate_q_5;
  cu1_5108059552(2.2032253672724256) _gate_q_6, _gate_q_9;
  csx _gate_q_8, _gate_q_10;
  cp(0.8800537195608894) _gate_q_2, _gate_q_3;
  cu1_5108059312(0.2728106295094844) _gate_q_0, _gate_q_1;
  y _gate_q_4;
  cs _gate_q_9, _gate_q_13;
  U(2.68203883081264, 4.228409940755335, 2.004241135776316) _gate_q_4;
  crz(1.7060295886954902) _gate_q_5, _gate_q_12;
  cz _gate_q_2, _gate_q_1;
  u3(1.1138743561452338, 0.38244164153753857, 2.0549452982294665) _gate_q_7;
  id _gate_q_10;
  ch _gate_q_3, _gate_q_11;
  h _gate_q_0;
  y _gate_q_6;
  s _gate_q_8;
  cz _gate_q_6, _gate_q_4;
  ch _gate_q_3, _gate_q_8;
  cz _gate_q_10, _gate_q_7;
  cry(4.053870915787598) _gate_q_0, _gate_q_12;
  xx_minus_yy_5108057968(1.1788407566939838, 0.8284538939177135) _gate_q_9, _gate_q_2;
  cu(5.280112091331967, 2.8515982146311663, 2.7441177289817036, 0.11865763718579724) _gate_q_1, _gate_q_13;
  U(2.9759854749397903, 0.8756537140770763, 2.645748345039475) _gate_q_5;
  z _gate_q_11;
}
gate cu1_5108070064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2051575582195917) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2051575582195917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2051575582195917) _gate_q_1;
}
gate xx_minus_yy_5108070832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4813739635381595) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9886017101632958) _gate_q_0;
  ry(-1.9886017101632958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4813739635381595) _gate_q_1;
}
gate cu1_5108070256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8991510696512681) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8991510696512681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8991510696512681) _gate_q_1;
}
gate cu3_5108070640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1105230177864374) _gate_q_0;
  u1(1.4183275072217867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6317872207756279, 0, -2.1105230177864374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6317872207756279, 0.6921955105646508, 0) _gate_q_1;
}
gate rxx_5108068864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5305428487294006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108070208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9887230182374207, 1.575392480620557, -1.575392480620557) _gate_q_0;
}
gate cu3_5108071600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5096563177462468) _gate_q_0;
  u1(-1.3973504298294772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6739535718650398, 0, -3.5096563177462468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6739535718650398, 4.907006747575724, 0) _gate_q_1;
}
gate ryy_5108068720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.600159380617796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5108070928(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.993949114872878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108068912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9926929765056163) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9926929765056163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9926929765056163) _gate_q_1;
}
gate r_5108061184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.88604243636969, 4.098795773328769, -4.098795773328769) _gate_q_0;
}
gate xx_minus_yy_5108069152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.13091843170646233) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0722898245098313) _gate_q_0;
  ry(-1.0722898245098313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.13091843170646233) _gate_q_1;
}
gate xx_plus_yy_5108066800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.184889141764467) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9902940091620157) _gate_q_1;
  ry(-0.9902940091620157) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.184889141764467) _gate_q_0;
}
gate rzz_5108069488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5276837536289216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5108065984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.087532642486947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5108067856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1726771248066346) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2862535552120054) _gate_q_0;
  ry(-1.2862535552120054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1726771248066346) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5108065792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.808767938295981) _gate_q_0;
  u1(-0.49132827448926486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.110246218328976, 0, -4.808767938295981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.110246218328976, 5.300096212785246, 0) _gate_q_1;
}
gate rzx_5108065504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.549444475561408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5108066512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.728619581149595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108067232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.23998972722156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5108066560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9134807999254242) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9134807999254242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9134807999254242) _gate_q_1;
}
gate rxx_5108070160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.908580981499627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  crz(2.9059974929609096) _gate_q_10, _gate_q_7;
  cu1_5108070064(4.410315116439183) _gate_q_13, _gate_q_8;
  U(0.8874817173137594, 1.9132026074300679, 3.9948122313160965) _gate_q_3;
  id _gate_q_12;
  z _gate_q_4;
  u2(3.0501834875021148, 1.0179037411403262) _gate_q_0;
  xx_minus_yy_5108070832(3.9772034203265916, 2.4813739635381595) _gate_q_5, _gate_q_6;
  u2(3.4946146924220334, 5.965600545420712) _gate_q_2;
  cry(4.15665159173527) _gate_q_11, _gate_q_9;
  p(0.1747985852289024) _gate_q_1;
  s _gate_q_9;
  cu1_5108070256(1.7983021393025362) _gate_q_0, _gate_q_1;
  y _gate_q_7;
  rx(2.0886453905521143) _gate_q_6;
  U(2.1680417691740144, 5.770802602374283, 3.3425257367529415) _gate_q_11;
  h _gate_q_8;
  cs _gate_q_5, _gate_q_13;
  cx _gate_q_10, _gate_q_2;
  y _gate_q_4;
  dcx _gate_q_3, _gate_q_12;
  cu3_5108070640(1.2635744415512558, 0.6921955105646508, 3.5288505250082243) _gate_q_13, _gate_q_3;
  rxx_5108068864(3.5305428487294006) _gate_q_2, _gate_q_4;
  u2(4.394113208607586, 4.214646225917368) _gate_q_6;
  u1(3.262428517137562) _gate_q_12;
  p(0.17315869493789834) _gate_q_0;
  r_5108070208(2.9887230182374207, 3.1461888074154536) _gate_q_9;
  crz(3.661472713531013) _gate_q_10, _gate_q_7;
  cu3_5108071600(3.3479071437300796, 4.907006747575724, 2.1123058879167695) _gate_q_8, _gate_q_5;
  cs _gate_q_11, _gate_q_1;
  crx(4.9700605853815025) _gate_q_4, _gate_q_9;
  p(5.053952732268873) _gate_q_1;
  sdg _gate_q_2;
  ryy_5108068720(4.600159380617796) _gate_q_7, _gate_q_12;
  iswap _gate_q_6, _gate_q_11;
  cx _gate_q_5, _gate_q_10;
  rzz_5108070928(5.993949114872878) _gate_q_3, _gate_q_8;
  dcx _gate_q_13, _gate_q_0;
  sxdg _gate_q_3;
  rx(1.4458304097575723) _gate_q_7;
  t _gate_q_1;
  sdg _gate_q_0;
  swap _gate_q_6, _gate_q_13;
  y _gate_q_2;
  tdg _gate_q_11;
  x _gate_q_5;
  s _gate_q_8;
  u2(3.295896182592902, 4.75749397234105) _gate_q_4;
  cu1_5108068912(3.9853859530112326) _gate_q_10, _gate_q_9;
  rx(3.9216858711632105) _gate_q_12;
  sdg _gate_q_5;
  r_5108061184(1.88604243636969, 5.6695921001236655) _gate_q_0;
  csx _gate_q_8, _gate_q_12;
  iswap _gate_q_11, _gate_q_4;
  xx_minus_yy_5108069152(2.1445796490196627, 0.13091843170646233) _gate_q_13, _gate_q_10;
  xx_plus_yy_5108066800(1.9805880183240314, 3.184889141764467) _gate_q_2, _gate_q_7;
  ecr _gate_q_3, _gate_q_1;
  x _gate_q_9;
  z _gate_q_6;
  swap _gate_q_8, _gate_q_6;
  tdg _gate_q_9;
  p(2.359410327741148) _gate_q_5;
  ch _gate_q_10, _gate_q_11;
  u3(0.7764874335877711, 3.052522437565667, 4.049892741507649) _gate_q_1;
  u2(0.25082650321948885, 3.41388837322931) _gate_q_4;
  rzz_5108069488(2.5276837536289216) _gate_q_13, _gate_q_0;
  rzz_5108065984(6.087532642486947) _gate_q_3, _gate_q_2;
  p(5.898443493493813) _gate_q_12;
  u2(2.873496281511336, 5.637627870627815) _gate_q_7;
  swap _gate_q_0, _gate_q_1;
  xx_minus_yy_5108067856(2.5725071104240107, 1.1726771248066346) _gate_q_5, _gate_q_4;
  csdg _gate_q_2, _gate_q_10;
  cz _gate_q_12, _gate_q_8;
  h _gate_q_7;
  cs _gate_q_6, _gate_q_13;
  u2(3.443377700217923, 5.671072249838878) _gate_q_9;
  cu3_5108065792(6.220492436657952, 5.300096212785246, 4.3174396638067165) _gate_q_11, _gate_q_3;
  cy _gate_q_10, _gate_q_8;
  rzx_5108065504(5.549444475561408) _gate_q_13, _gate_q_4;
  rxx_5108066512(2.728619581149595) _gate_q_2, _gate_q_9;
  csdg _gate_q_5, _gate_q_7;
  s _gate_q_1;
  iswap _gate_q_11, _gate_q_6;
  rzx_5108067232(3.23998972722156) _gate_q_3, _gate_q_12;
  y _gate_q_0;
  U(0.7244940243836689, 1.4463055788271826, 3.5779855207205897) _gate_q_5;
  rx(1.1269239327203715) _gate_q_11;
  sx _gate_q_2;
  cu1_5108066560(1.8269615998508484) _gate_q_9, _gate_q_12;
  rxx_5108070160(2.908580981499627) _gate_q_13, _gate_q_3;
  csx _gate_q_6, _gate_q_0;
  swap _gate_q_10, _gate_q_1;
  dcx _gate_q_7, _gate_q_8;
  id _gate_q_4;
}