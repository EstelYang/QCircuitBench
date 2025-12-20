gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106117056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.260584266751381) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.009760879175862075) _gate_q_1;
  ry(-0.009760879175862075) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.260584266751381) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate rzx_5106120416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8913753263947073) _gate_q_1;
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
gate rzz_5106111248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0464408320310332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106111536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.534654797678424, 3.8834633944242043, -3.8834633944242043) _gate_q_0;
}
gate ryy_5106111728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.11949809248742228) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csdg _gate_q_3, _gate_q_6;
  xx_plus_yy_5106117056(0.01952175835172415, 4.260584266751381) _gate_q_0, _gate_q_5;
  rx(0.9743709481136553) _gate_q_2;
  dcx _gate_q_7, _gate_q_1;
  h _gate_q_4;
  csdg _gate_q_5, _gate_q_3;
  u2(2.746648633412216, 2.855362047688266) _gate_q_6;
  csx _gate_q_7, _gate_q_4;
  cz _gate_q_1, _gate_q_0;
  id _gate_q_2;
  crz(4.923800183557766) _gate_q_5, _gate_q_0;
  rzx_5106120416(3.8913753263947073) _gate_q_6, _gate_q_7;
  csdg _gate_q_2, _gate_q_3;
  id _gate_q_4;
  u2(5.756655812262217, 2.249546295089721) _gate_q_1;
  u1(3.740164589830362) _gate_q_1;
  s _gate_q_6;
  iswap _gate_q_2, _gate_q_4;
  rx(1.7001674107811986) _gate_q_5;
  rx(2.302413402630649) _gate_q_0;
  h _gate_q_7;
  u3(0.13405732315397476, 3.5636203993928364, 3.121222017781461) _gate_q_3;
  ry(5.264141928825018) _gate_q_3;
  p(1.5074966845318845) _gate_q_2;
  h _gate_q_6;
  crx(4.4620125262525425) _gate_q_5, _gate_q_7;
  sx _gate_q_1;
  id _gate_q_0;
  tdg _gate_q_4;
  s _gate_q_3;
  crz(4.1523410389868545) _gate_q_2, _gate_q_1;
  rzz_5106111248(1.0464408320310332) _gate_q_7, _gate_q_0;
  dcx _gate_q_4, _gate_q_5;
  y _gate_q_6;
  cp(3.6738052845394833) _gate_q_2, _gate_q_3;
  u1(0.61046700372043) _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  r_5106111536(4.534654797678424, 5.454259721219101) _gate_q_0;
  u2(5.593358286733219, 1.6337474574920583) _gate_q_7;
  p(3.24554208889592) _gate_q_6;
  crz(0.09418815424486315) _gate_q_5, _gate_q_0;
  z _gate_q_7;
  ryy_5106111728(0.11949809248742228) _gate_q_3, _gate_q_1;
  U(3.285229052075355, 5.7959158576791125, 3.085522893195042) _gate_q_2;
  h _gate_q_6;
  u2(2.089381718585009, 4.809558437228314) _gate_q_4;
}
gate xx_plus_yy_5106122576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5962869082484668) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8616910879331332) _gate_q_1;
  ry(-1.8616910879331332) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5962869082484668) _gate_q_0;
}
gate rxx_5106118928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.587986059858912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106117920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.5897896610335955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106111440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2151726555782525) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8786098878378246) _gate_q_1;
  ry(-1.8786098878378246) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2151726555782525) _gate_q_0;
}
gate ryy_5106107600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.407558030349137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5106117776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1240468907215235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106107552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9411356575835548, 1.3098887523023817, -1.3098887523023817) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  xx_plus_yy_5106122576(3.7233821758662664, 2.5962869082484668) _gate_q_0, _gate_q_6;
  crx(0.13649794711292565) _gate_q_1, _gate_q_2;
  x _gate_q_7;
  rz(3.774569784282043) _gate_q_5;
  rxx_5106118928(5.587986059858912) _gate_q_4, _gate_q_3;
  rz(2.177502798187109) _gate_q_1;
  sxdg _gate_q_0;
  cry(2.7136526832550936) _gate_q_3, _gate_q_6;
  cx _gate_q_7, _gate_q_4;
  iswap _gate_q_2, _gate_q_5;
  iswap _gate_q_5, _gate_q_6;
  swap _gate_q_1, _gate_q_4;
  crx(2.7423818401725177) _gate_q_0, _gate_q_7;
  csdg _gate_q_2, _gate_q_3;
  cz _gate_q_0, _gate_q_4;
  sx _gate_q_2;
  sdg _gate_q_5;
  dcx _gate_q_7, _gate_q_3;
  rzz_5106117920(5.5897896610335955) _gate_q_1, _gate_q_6;
  x _gate_q_4;
  cz _gate_q_3, _gate_q_1;
  cx _gate_q_2, _gate_q_6;
  h _gate_q_5;
  xx_plus_yy_5106111440(3.757219775675649, 1.2151726555782525) _gate_q_0, _gate_q_7;
  ryy_5106107600(5.407558030349137) _gate_q_1, _gate_q_4;
  cry(5.3757004306141) _gate_q_5, _gate_q_6;
  tdg _gate_q_2;
  cy _gate_q_7, _gate_q_0;
  U(2.853510893549515, 4.20626584308326, 2.8838589163698596) _gate_q_3;
  cx _gate_q_2, _gate_q_1;
  id _gate_q_0;
  cs _gate_q_3, _gate_q_4;
  h _gate_q_7;
  cy _gate_q_6, _gate_q_5;
  rzz_5106117776(3.1240468907215235) _gate_q_7, _gate_q_6;
  p(5.5521030529677144) _gate_q_2;
  ry(1.9872744267418803) _gate_q_0;
  swap _gate_q_1, _gate_q_4;
  r_5106107552(3.9411356575835548, 2.8806850790972782) _gate_q_3;
  h _gate_q_5;
}