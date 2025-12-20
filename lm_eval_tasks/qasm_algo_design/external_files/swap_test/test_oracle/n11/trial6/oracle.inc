gate rzx_5104273408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2135575123129274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5104273648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.720573004034041) _gate_q_0;
  u1(0.05468082992256207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4503548999572676, 0, -5.720573004034041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4503548999572676, 5.6658921741114785, 0) _gate_q_1;
}
gate rxx_5104273312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1641701832117296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate r_5104275808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.77484482506972, 3.4879785687795364, -3.4879785687795364) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5104287040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1917597820090764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5104277200(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.599340258527734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104278496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.1067284457174) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6148053603378147) _gate_q_0;
  ry(-1.6148053603378147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.1067284457174) _gate_q_1;
}
gate ryy_5104287664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0629363017552365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104283488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0798818443261196) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0798818443261196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0798818443261196) _gate_q_1;
}
gate rzz_5104273024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.603161323881167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5104278976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.57174603098191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5104284016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.343921940573968) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.343921940573968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.343921940573968) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5104274080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.862919452571399, 0.49864067847502547, -0.49864067847502547) _gate_q_0;
}
gate rzx_5104285312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6399890502880262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104279648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7986661114634026, 0.5373997113771476, -0.5373997113771476) _gate_q_0;
}
gate cu3_5104277056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.060440029103683) _gate_q_0;
  u1(-0.7634037062835355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5070613817459306, 0, -5.060440029103683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5070613817459306, 5.823843735387219, 0) _gate_q_1;
}
gate cu1_5104284928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5945146425368573) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5945146425368573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5945146425368573) _gate_q_1;
}
gate xx_minus_yy_5105276576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3122625974643252) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2724912473238856) _gate_q_0;
  ry(-1.2724912473238856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3122625974643252) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  t _gate_q_5;
  p(5.340442471156647) _gate_q_4;
  rzx_5104273408(1.2135575123129274) _gate_q_1, _gate_q_2;
  s _gate_q_10;
  u1(1.2089669625949158) _gate_q_7;
  sx _gate_q_8;
  cu3_5104273648(0.9007097999145351, 5.6658921741114785, 5.775253833956603) _gate_q_6, _gate_q_0;
  rxx_5104273312(0.1641701832117296) _gate_q_3, _gate_q_9;
  csx _gate_q_0, _gate_q_7;
  crx(4.0361839750165664) _gate_q_3, _gate_q_5;
  p(4.9953919013396755) _gate_q_4;
  crz(4.284444578941969) _gate_q_10, _gate_q_1;
  r_5104275808(5.77484482506972, 5.058774895574433) _gate_q_6;
  rz(4.090675841612147) _gate_q_8;
  tdg _gate_q_2;
  U(2.115480259221337, 3.876004750131975, 1.7020506623530622) _gate_q_9;
  u1(1.040951780603336) _gate_q_2;
  csx _gate_q_7, _gate_q_0;
  dcx _gate_q_4, _gate_q_1;
  crx(5.341177763130362) _gate_q_8, _gate_q_3;
  t _gate_q_9;
  ecr _gate_q_6, _gate_q_5;
  h _gate_q_10;
  cy _gate_q_1, _gate_q_0;
  U(1.203585295359561, 4.470166487051072, 5.971928526404308) _gate_q_10;
  cs _gate_q_2, _gate_q_8;
  crz(6.150973725751787) _gate_q_6, _gate_q_5;
  U(5.767166004138641, 3.164179724553243, 2.41262823218576) _gate_q_7;
  u3(2.1844486091348214, 3.9483255952675687, 0.3322097872287796) _gate_q_3;
  ecr _gate_q_9, _gate_q_4;
  ry(1.6207511773478205) _gate_q_7;
  rzx_5104287040(2.1917597820090764) _gate_q_4, _gate_q_9;
  ryy_5104277200(4.599340258527734) _gate_q_6, _gate_q_5;
  crx(1.4986931650402548) _gate_q_0, _gate_q_8;
  xx_minus_yy_5104278496(3.2296107206756295, 6.1067284457174) _gate_q_2, _gate_q_10;
  cu(6.163002543600488, 0.47626817015331085, 3.9918099652279633, 3.880514828248278) _gate_q_3, _gate_q_1;
  y _gate_q_9;
  z _gate_q_10;
  y _gate_q_7;
  cz _gate_q_5, _gate_q_4;
  ryy_5104287664(4.0629363017552365) _gate_q_2, _gate_q_8;
  cs _gate_q_1, _gate_q_0;
  cu1_5104283488(4.159763688652239) _gate_q_6, _gate_q_3;
  cu(0.15789659072453963, 2.089926185777332, 0.8879942569406919, 5.815479347907302) _gate_q_4, _gate_q_10;
  rzz_5104273024(2.603161323881167) _gate_q_7, _gate_q_6;
  cu(0.8761878897710469, 3.2825779809210034, 0.5367087283594004, 3.916195539987131) _gate_q_1, _gate_q_9;
  id _gate_q_0;
  ecr _gate_q_3, _gate_q_2;
  sxdg _gate_q_8;
  y _gate_q_5;
  sdg _gate_q_0;
  rxx_5104278976(4.57174603098191) _gate_q_6, _gate_q_10;
  cu1_5104284016(4.687843881147936) _gate_q_8, _gate_q_5;
  ry(0.03858543129405011) _gate_q_2;
  u2(1.5452811186202868, 4.0553668310019) _gate_q_3;
  u3(5.649039279059458, 1.1863954241103147, 4.301683080699467) _gate_q_4;
  ry(1.594946673094288) _gate_q_9;
  csdg _gate_q_1, _gate_q_7;
  y _gate_q_9;
  sdg _gate_q_6;
  swap _gate_q_1, _gate_q_0;
  r_5104274080(4.862919452571399, 2.069437005269922) _gate_q_10;
  id _gate_q_7;
  cz _gate_q_3, _gate_q_4;
  u1(3.1782363034048) _gate_q_5;
  rzx_5104285312(0.6399890502880262) _gate_q_8, _gate_q_2;
  x _gate_q_5;
  r_5104279648(0.7986661114634026, 2.108196038172044) _gate_q_8;
  id _gate_q_1;
  cu3_5104277056(5.014122763491861, 5.823843735387219, 4.297036322820148) _gate_q_10, _gate_q_9;
  cu1_5104284928(3.1890292850737145) _gate_q_7, _gate_q_2;
  csdg _gate_q_6, _gate_q_0;
  xx_minus_yy_5105276576(2.5449824946477713, 1.3122625974643252) _gate_q_3, _gate_q_4;
}
gate rzx_5105279408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.390557294910102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105276384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.101747999025743) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9517577811186406) _gate_q_0;
  ry(-0.9517577811186406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.101747999025743) _gate_q_1;
}
gate ryy_5105287040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1477404740214612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105273216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.063691844469892) _gate_q_0;
  u1(-0.436964632580111) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8644490507606928, 0, -2.063691844469892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8644490507606928, 2.5006564770500033, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105275424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.44615027047611133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105278640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3613124265701404) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7073581913067777) _gate_q_0;
  ry(-2.7073581913067777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3613124265701404) _gate_q_1;
}
gate rzx_5105282144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0862468151280056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105271920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.296090819654342, 4.564910515716368, -4.564910515716368) _gate_q_0;
}
gate ryy_5105281952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7614828599766028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105278976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8643847507020266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105284592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7851142533905846) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.045894949588155) _gate_q_0;
  ry(-3.045894949588155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7851142533905846) _gate_q_1;
}
gate cu1_5105280608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.037229009584951366) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.037229009584951366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.037229009584951366) _gate_q_1;
}
gate rzz_5105280848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.674954545984542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105282576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7052618359969416, -0.4858311979919554, 0.4858311979919554) _gate_q_0;
}
gate xx_plus_yy_5105273312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.30340537696688) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.596330104642166) _gate_q_1;
  ry(-2.596330104642166) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.30340537696688) _gate_q_0;
}
gate cu1_5105281376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6918921524027821) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6918921524027821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6918921524027821) _gate_q_1;
}
gate cu1_5105284256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4271547214383014) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4271547214383014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4271547214383014) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  rzx_5105279408(5.390557294910102) _gate_q_6, _gate_q_8;
  h _gate_q_2;
  cz _gate_q_0, _gate_q_3;
  h _gate_q_1;
  y _gate_q_4;
  u1(1.411474485013556) _gate_q_9;
  xx_minus_yy_5105276384(1.9035155622372812, 6.101747999025743) _gate_q_5, _gate_q_10;
  id _gate_q_7;
  cs _gate_q_7, _gate_q_0;
  csdg _gate_q_1, _gate_q_8;
  crz(3.664107788819487) _gate_q_3, _gate_q_4;
  cy _gate_q_10, _gate_q_2;
  ryy_5105287040(1.1477404740214612) _gate_q_9, _gate_q_5;
  rz(1.7805131678002202) _gate_q_6;
  crz(5.260146970765911) _gate_q_6, _gate_q_0;
  u3(3.4029169263672747, 2.101361883503167, 5.699906848312128) _gate_q_4;
  cu3_5105273216(1.7288981015213856, 2.5006564770500033, 1.6267272118897813) _gate_q_9, _gate_q_2;
  ch _gate_q_3, _gate_q_8;
  iswap _gate_q_10, _gate_q_5;
  tdg _gate_q_1;
  z _gate_q_7;
  crx(5.292455024072642) _gate_q_5, _gate_q_0;
  csx _gate_q_7, _gate_q_4;
  crz(2.4277306562806262) _gate_q_9, _gate_q_8;
  ryy_5105275424(0.44615027047611133) _gate_q_3, _gate_q_10;
  iswap _gate_q_2, _gate_q_6;
  tdg _gate_q_1;
  xx_minus_yy_5105278640(5.414716382613555, 3.3613124265701404) _gate_q_7, _gate_q_1;
  rzx_5105282144(2.0862468151280056) _gate_q_10, _gate_q_6;
  y _gate_q_5;
  cy _gate_q_8, _gate_q_2;
  sdg _gate_q_3;
  rz(5.55156188986888) _gate_q_0;
  r_5105271920(2.296090819654342, 6.135706842511264) _gate_q_4;
  y _gate_q_9;
  rx(5.294841822682434) _gate_q_4;
  cu(1.7767776049225779, 6.0961321911502635, 5.904716357925853, 5.450155922961687) _gate_q_8, _gate_q_3;
  iswap _gate_q_10, _gate_q_6;
  U(4.885218398258785, 6.106845404545991, 0.16745327570660498) _gate_q_0;
  csdg _gate_q_7, _gate_q_9;
  cp(4.228437316341411) _gate_q_1, _gate_q_2;
  p(0.4016879342118594) _gate_q_5;
  iswap _gate_q_10, _gate_q_2;
  ryy_5105281952(1.7614828599766028) _gate_q_1, _gate_q_7;
  rzz_5105278976(2.8643847507020266) _gate_q_4, _gate_q_8;
  tdg _gate_q_6;
  xx_minus_yy_5105284592(6.09178989917631, 2.7851142533905846) _gate_q_0, _gate_q_9;
  id _gate_q_5;
  id _gate_q_3;
  u2(5.739071941343669, 5.556598016502068) _gate_q_7;
  cu1_5105280608(0.07445801916990273) _gate_q_8, _gate_q_0;
  iswap _gate_q_3, _gate_q_1;
  sx _gate_q_2;
  u1(4.394989426090856) _gate_q_9;
  u1(2.5706415320318197) _gate_q_10;
  ecr _gate_q_4, _gate_q_5;
  s _gate_q_6;
  s _gate_q_9;
  rzz_5105280848(2.674954545984542) _gate_q_3, _gate_q_10;
  r_5105282576(2.7052618359969416, 1.0849651288029412) _gate_q_8;
  x _gate_q_5;
  xx_plus_yy_5105273312(5.192660209284332, 1.30340537696688) _gate_q_1, _gate_q_0;
  swap _gate_q_2, _gate_q_6;
  u3(1.032458161020042, 5.32071992267541, 6.114819264892299) _gate_q_4;
  rx(2.020613291502251) _gate_q_7;
  cu1_5105281376(3.3837843048055642) _gate_q_9, _gate_q_7;
  cy _gate_q_1, _gate_q_8;
  id _gate_q_3;
  csdg _gate_q_6, _gate_q_0;
  cu1_5105284256(0.8543094428766028) _gate_q_4, _gate_q_2;
  ch _gate_q_10, _gate_q_5;
}