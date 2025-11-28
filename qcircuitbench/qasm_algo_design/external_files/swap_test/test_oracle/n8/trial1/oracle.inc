gate rzz_5106331968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6983923135397214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5106331776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.091204933867186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5106332208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.976304754157593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106332256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.34152784518013174) _gate_q_1;
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
gate xx_minus_yy_5106332640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.2225971602691175) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7705306977517484) _gate_q_0;
  ry(-0.7705306977517484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.2225971602691175) _gate_q_1;
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
gate xx_plus_yy_5106326208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.465421343793616) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8640490104004798) _gate_q_1;
  ry(-0.8640490104004798) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.465421343793616) _gate_q_0;
}
gate r_5106326976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.143220379910678, 3.316037588364124, -3.316037588364124) _gate_q_0;
}
gate r_5106328128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.267771039725196, 1.5717746156256163, -1.5717746156256163) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rzz_5106331968(2.6983923135397214) _gate_q_5, _gate_q_7;
  sx _gate_q_2;
  id _gate_q_0;
  y _gate_q_4;
  sxdg _gate_q_6;
  ryy_5106331776(6.091204933867186) _gate_q_1, _gate_q_3;
  cz _gate_q_1, _gate_q_5;
  u2(1.0525563347743323, 3.981581757408633) _gate_q_6;
  ch _gate_q_0, _gate_q_3;
  dcx _gate_q_2, _gate_q_4;
  u1(2.375997891367888) _gate_q_7;
  cy _gate_q_0, _gate_q_4;
  ryy_5106332208(5.976304754157593) _gate_q_2, _gate_q_7;
  tdg _gate_q_3;
  u1(0.5653525076324472) _gate_q_1;
  crx(1.4816052491938125) _gate_q_6, _gate_q_5;
  ryy_5106332256(0.34152784518013174) _gate_q_4, _gate_q_0;
  cry(0.6558169102114555) _gate_q_3, _gate_q_7;
  t _gate_q_1;
  ry(6.2347709397238) _gate_q_6;
  rx(1.5567793799743586) _gate_q_5;
  t _gate_q_2;
  cs _gate_q_5, _gate_q_6;
  cs _gate_q_1, _gate_q_4;
  crx(3.7573379626148102) _gate_q_3, _gate_q_2;
  ecr _gate_q_7, _gate_q_0;
  cry(5.90742090077107) _gate_q_6, _gate_q_7;
  p(3.4395948498341897) _gate_q_2;
  xx_minus_yy_5106332640(1.5410613955034969, 4.2225971602691175) _gate_q_5, _gate_q_3;
  crz(3.0804316689441458) _gate_q_0, _gate_q_1;
  tdg _gate_q_4;
  z _gate_q_0;
  ch _gate_q_1, _gate_q_6;
  z _gate_q_4;
  x _gate_q_2;
  csx _gate_q_3, _gate_q_5;
  t _gate_q_7;
  s _gate_q_3;
  ry(2.683367063995884) _gate_q_6;
  s _gate_q_5;
  xx_plus_yy_5106326208(1.7280980208009595, 5.465421343793616) _gate_q_7, _gate_q_1;
  r_5106326976(2.143220379910678, 4.886833915159021) _gate_q_0;
  sdg _gate_q_4;
  r_5106328128(6.267771039725196, 3.142570942420513) _gate_q_2;
}
gate cu3_5106327264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.712985640262669) _gate_q_0;
  u1(0.36550228280525543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6176362875429386, 0, -3.712985640262669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6176362875429386, 3.3474833574574134, 0) _gate_q_1;
}
gate xx_minus_yy_5106328896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.735665434797793) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7235204086616727) _gate_q_0;
  ry(-2.7235204086616727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.735665434797793) _gate_q_1;
}
gate cu1_5106328992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.902787185511007) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.902787185511007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.902787185511007) _gate_q_1;
}
gate r_5106328560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.9524718726984505, 2.1188882152206143, -2.1188882152206143) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cy _gate_q_1, _gate_q_7;
  h _gate_q_2;
  s _gate_q_6;
  cry(2.0565567834159064) _gate_q_3, _gate_q_0;
  cry(0.580523458882997) _gate_q_4, _gate_q_5;
  dcx _gate_q_7, _gate_q_4;
  x _gate_q_2;
  tdg _gate_q_1;
  cu(3.288274080679717, 1.9110523099332843, 0.5044317371197942, 3.80796409525133) _gate_q_6, _gate_q_3;
  y _gate_q_5;
  rz(1.8055263755268862) _gate_q_0;
  u2(0.5818099791073421, 3.5063338590870856) _gate_q_0;
  cx _gate_q_7, _gate_q_4;
  sxdg _gate_q_6;
  crz(1.261669833320451) _gate_q_2, _gate_q_1;
  sx _gate_q_3;
  sx _gate_q_5;
  cu3_5106327264(3.2352725750858773, 3.3474833574574134, 4.078487923067924) _gate_q_2, _gate_q_4;
  csx _gate_q_6, _gate_q_1;
  u3(5.151559502596049, 5.403638246661974, 3.4602049222227884) _gate_q_0;
  h _gate_q_7;
  rz(5.60898181143513) _gate_q_5;
  sx _gate_q_3;
  sxdg _gate_q_7;
  cp(5.094115773773892) _gate_q_2, _gate_q_3;
  rx(1.5783657393551735) _gate_q_5;
  cry(5.3916247612568835) _gate_q_4, _gate_q_1;
  cry(2.2833966266765433) _gate_q_0, _gate_q_6;
  id _gate_q_1;
  csx _gate_q_5, _gate_q_7;
  csx _gate_q_3, _gate_q_4;
  xx_minus_yy_5106328896(5.447040817323345, 4.735665434797793) _gate_q_2, _gate_q_6;
  x _gate_q_0;
  cu1_5106328992(5.805574371022014) _gate_q_1, _gate_q_0;
  u2(4.377522783838701, 3.5634950985162295) _gate_q_3;
  ch _gate_q_7, _gate_q_6;
  u2(0.3911108758441376, 0.2895716397765592) _gate_q_2;
  cz _gate_q_5, _gate_q_4;
  sdg _gate_q_4;
  rx(2.8919445980656313) _gate_q_5;
  csx _gate_q_3, _gate_q_7;
  u1(0.5513300758578067) _gate_q_6;
  r_5106328560(4.9524718726984505, 3.689684542015511) _gate_q_1;
  u2(1.4689304068727536, 1.9296418852198503) _gate_q_0;
  y _gate_q_2;
}