gate cu3_5106573648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.081814489567954) _gate_q_0;
  u1(1.4041823470582067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.149102750355945, 0, -3.081814489567954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.149102750355945, 1.677632142509747, 0) _gate_q_1;
}
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
gate xx_plus_yy_5106581424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.08078535949144774) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3063282786718298) _gate_q_1;
  ry(-1.3063282786718298) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.08078535949144774) _gate_q_0;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5106571344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.306066947472386) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1553878618290447) _gate_q_1;
  ry(-2.1553878618290447) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.306066947472386) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5106581328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.764578614649132, 0.6222382494682805, -0.6222382494682805) _gate_q_0;
}
gate rzz_5106581376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.873420268255399) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106581040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.23403234492582) _gate_q_0;
  u1(-0.5407856366258095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6637290400927376, 0, -5.23403234492582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6637290400927376, 5.77481798155163, 0) _gate_q_1;
}
gate xx_plus_yy_5106571008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.30433795656976087) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1808727024749814) _gate_q_1;
  ry(-1.1808727024749814) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.30433795656976087) _gate_q_0;
}
gate rzx_5106566160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.224830268975171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106566928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.569947488928876) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.40759853991385897) _gate_q_0;
  ry(-0.40759853991385897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.569947488928876) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5106566832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2331617912979853) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4914907217626863) _gate_q_0;
  ry(-2.4914907217626863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2331617912979853) _gate_q_1;
}
gate r_5106567120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.867429664026751, -1.5338611883305744, 1.5338611883305744) _gate_q_0;
}
gate xx_plus_yy_5106566496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6509059997560027) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.18402771303698912) _gate_q_1;
  ry(-0.18402771303698912) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6509059997560027) _gate_q_0;
}
gate ryy_5106566784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.503879096710728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u3(1.2385861645731129, 4.5098564217225725, 0.706471789780616) _gate_q_4;
  cu3_5106573648(4.29820550071189, 1.677632142509747, 4.4859968366261604) _gate_q_6, _gate_q_7;
  csdg _gate_q_5, _gate_q_3;
  x _gate_q_0;
  xx_plus_yy_5106581424(2.6126565573436595, 0.08078535949144774) _gate_q_2, _gate_q_1;
  ecr _gate_q_4, _gate_q_3;
  p(3.882636135884425) _gate_q_2;
  dcx _gate_q_1, _gate_q_0;
  xx_plus_yy_5106571344(4.3107757236580895, 5.306066947472386) _gate_q_7, _gate_q_5;
  u1(5.49342230207543) _gate_q_6;
  cs _gate_q_1, _gate_q_7;
  crx(1.5436212801546962) _gate_q_2, _gate_q_3;
  sdg _gate_q_0;
  r_5106581328(1.764578614649132, 2.193034576263177) _gate_q_4;
  rzz_5106581376(3.873420268255399) _gate_q_6, _gate_q_5;
  cu3_5106581040(5.327458080185475, 5.77481798155163, 4.693246708300011) _gate_q_2, _gate_q_6;
  xx_plus_yy_5106571008(2.361745404949963, 0.30433795656976087) _gate_q_7, _gate_q_5;
  cry(4.483623013686497) _gate_q_3, _gate_q_0;
  z _gate_q_1;
  ry(1.4252465756247623) _gate_q_4;
  sxdg _gate_q_2;
  rzx_5106566160(5.224830268975171) _gate_q_4, _gate_q_1;
  cp(0.3274608495795744) _gate_q_0, _gate_q_6;
  xx_minus_yy_5106566928(0.8151970798277179, 4.569947488928876) _gate_q_7, _gate_q_3;
  s _gate_q_5;
  crz(0.6051410492002017) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cry(4.9892751693335535) _gate_q_1, _gate_q_5;
  iswap _gate_q_7, _gate_q_3;
  dcx _gate_q_6, _gate_q_1;
  u2(1.6605138598552203, 5.273410646307494) _gate_q_5;
  cy _gate_q_3, _gate_q_7;
  xx_minus_yy_5106566832(4.9829814435253725, 3.2331617912979853) _gate_q_2, _gate_q_0;
  u1(3.0730489145418525) _gate_q_4;
  r_5106567120(5.867429664026751, 0.03693513846432212) _gate_q_2;
  p(6.028789393062575) _gate_q_0;
  xx_plus_yy_5106566496(0.36805542607397823, 3.6509059997560027) _gate_q_7, _gate_q_3;
  swap _gate_q_6, _gate_q_5;
  ryy_5106566784(5.503879096710728) _gate_q_4, _gate_q_1;
}
gate xx_plus_yy_5106571680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7980209133834038) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.971395026097584) _gate_q_1;
  ry(-1.971395026097584) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7980209133834038) _gate_q_0;
}
gate ryy_5106571392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.99150339988655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106571872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.746181572819258) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.0877430025864495) _gate_q_0;
  ry(-0.0877430025864495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.746181572819258) _gate_q_1;
}
gate cu1_5106572304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0098901024174562) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0098901024174562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0098901024174562) _gate_q_1;
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
gate cu3_5106572592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.019427986066885) _gate_q_0;
  u1(0.355473169940975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3077821574001769, 0, -5.019427986066885) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3077821574001769, 4.66395481612591, 0) _gate_q_1;
}
gate xx_minus_yy_5106572928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3085792696580616) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6048364245599762) _gate_q_0;
  ry(-1.6048364245599762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3085792696580616) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  t _gate_q_7;
  csdg _gate_q_6, _gate_q_1;
  xx_plus_yy_5106571680(3.942790052195168, 1.7980209133834038) _gate_q_0, _gate_q_3;
  ry(2.138183397721545) _gate_q_4;
  ecr _gate_q_2, _gate_q_5;
  ryy_5106571392(2.99150339988655) _gate_q_3, _gate_q_1;
  csdg _gate_q_4, _gate_q_5;
  crz(3.10980673408376) _gate_q_2, _gate_q_7;
  xx_minus_yy_5106571872(0.175486005172899, 4.746181572819258) _gate_q_0, _gate_q_6;
  tdg _gate_q_3;
  x _gate_q_6;
  cry(4.171053537653129) _gate_q_0, _gate_q_5;
  crz(3.5172603642144273) _gate_q_7, _gate_q_1;
  cs _gate_q_4, _gate_q_2;
  cry(3.3238555380464394) _gate_q_6, _gate_q_3;
  csdg _gate_q_1, _gate_q_2;
  ry(4.9026941201325185) _gate_q_0;
  iswap _gate_q_7, _gate_q_5;
  ry(5.354443853364075) _gate_q_4;
  cu1_5106572304(4.0197802048349125) _gate_q_4, _gate_q_1;
  cu(0.6064312139519183, 4.751620966368017, 4.000741710855838, 5.494207886442317) _gate_q_0, _gate_q_2;
  id _gate_q_7;
  tdg _gate_q_6;
  tdg _gate_q_3;
  z _gate_q_5;
  csdg _gate_q_0, _gate_q_3;
  cz _gate_q_7, _gate_q_6;
  csx _gate_q_4, _gate_q_1;
  sxdg _gate_q_5;
  ry(5.354425855861852) _gate_q_2;
  cu3_5106572592(0.6155643148003538, 4.66395481612591, 5.37490115600786) _gate_q_3, _gate_q_6;
  z _gate_q_2;
  ch _gate_q_5, _gate_q_0;
  xx_minus_yy_5106572928(3.2096728491199524, 2.3085792696580616) _gate_q_4, _gate_q_7;
  rx(2.9666913839681035) _gate_q_1;
  u3(4.036828243477941, 1.3643823229506546, 4.626530880095842) _gate_q_5;
  cs _gate_q_4, _gate_q_1;
  csx _gate_q_3, _gate_q_2;
  csx _gate_q_6, _gate_q_0;
  rz(6.107752874016195) _gate_q_7;
}