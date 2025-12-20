gate rxx_5070718352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.553222815325357) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070722624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.929806970246984) _gate_q_0;
  u1(1.3606949489047022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8917587846578146, 0, -2.929806970246984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8917587846578146, 1.5691120213422818, 0) _gate_q_1;
}
gate ryy_5070729488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4163874369113987) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070729344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.897822092436381) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.670998409001352) _gate_q_0;
  ry(-2.670998409001352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.897822092436381) _gate_q_1;
}
gate cu3_5070727232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7048383491929293) _gate_q_0;
  u1(1.2033458020141126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2973225866857276, 0, -1.7048383491929293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2973225866857276, 0.5014925471788166, 0) _gate_q_1;
}
gate r_5070724496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5469253713109038, -1.3867371998380227, 1.3867371998380227) _gate_q_0;
}
gate ryy_5070731264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.43211063453386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070728864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.7115565460804536) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.386778247220274) _gate_q_1;
  ry(-2.386778247220274) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.7115565460804536) _gate_q_0;
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
gate cu1_5070723200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.725067365804521) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.725067365804521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.725067365804521) _gate_q_1;
}
gate r_5070722048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.775880488710516, 0.16296260154862985, -0.16296260154862985) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070726416(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.999162196321562) _gate_q_0;
  u1(-2.060261304526853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.378524961182106, 0, -2.999162196321562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.378524961182106, 5.059423500848415, 0) _gate_q_1;
}
gate xx_minus_yy_5070719504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0648210753773997) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3029034188020379) _gate_q_0;
  ry(-0.3029034188020379) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0648210753773997) _gate_q_1;
}
gate cu3_5070728720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7054024104134669) _gate_q_0;
  u1(1.4218023888465134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.42423890804410747, 0, -1.7054024104134669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.42423890804410747, 0.28360002156695335, 0) _gate_q_1;
}
gate rzz_5070728384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5481164870253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5070726656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.005585079754204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rx(0.7720904775685703) _gate_q_4;
  rxx_5070718352(4.553222815325357) _gate_q_1, _gate_q_5;
  crz(2.0158146651905935) _gate_q_6, _gate_q_8;
  cu3_5070722624(5.783517569315629, 1.5691120213422818, 4.290501919151686) _gate_q_2, _gate_q_7;
  ryy_5070729488(1.4163874369113987) _gate_q_3, _gate_q_0;
  t _gate_q_7;
  csdg _gate_q_5, _gate_q_6;
  u1(1.9684899729255163) _gate_q_8;
  cp(4.281771562985505) _gate_q_2, _gate_q_3;
  swap _gate_q_4, _gate_q_1;
  z _gate_q_0;
  tdg _gate_q_2;
  sdg _gate_q_1;
  xx_minus_yy_5070729344(5.341996818002704, 4.897822092436381) _gate_q_7, _gate_q_0;
  cry(4.482626857932559) _gate_q_6, _gate_q_3;
  cu3_5070727232(2.5946451733714553, 0.5014925471788166, 2.908184151207042) _gate_q_8, _gate_q_4;
  r_5070724496(0.5469253713109038, 0.1840591269568739) _gate_q_5;
  cu(1.032049684305644, 1.6089029676280724, 0.10402201536076898, 4.087857533721719) _gate_q_2, _gate_q_5;
  ryy_5070731264(5.43211063453386) _gate_q_8, _gate_q_0;
  xx_plus_yy_5070728864(4.773556494440548, 3.7115565460804536) _gate_q_4, _gate_q_6;
  s _gate_q_7;
  tdg _gate_q_3;
  U(3.5176804432776954, 4.848743103259474, 4.676977289914168) _gate_q_1;
  crx(6.093630858275934) _gate_q_7, _gate_q_8;
  crz(4.673935783108831) _gate_q_3, _gate_q_5;
  csx _gate_q_0, _gate_q_1;
  cu1_5070723200(3.450134731609042) _gate_q_4, _gate_q_2;
  r_5070722048(2.775880488710516, 1.7337589283435264) _gate_q_6;
  sxdg _gate_q_0;
  p(0.8769677552989527) _gate_q_5;
  dcx _gate_q_7, _gate_q_4;
  cu3_5070726416(4.757049922364212, 5.059423500848415, 0.9389008917947085) _gate_q_6, _gate_q_1;
  xx_minus_yy_5070719504(0.6058068376040758, 3.0648210753773997) _gate_q_3, _gate_q_8;
  p(6.261723000994003) _gate_q_2;
  csdg _gate_q_7, _gate_q_3;
  cu3_5070728720(0.8484778160882149, 0.28360002156695335, 3.1272047992599803) _gate_q_1, _gate_q_6;
  p(4.17217567793002) _gate_q_0;
  dcx _gate_q_2, _gate_q_8;
  p(5.583324293394377) _gate_q_5;
  s _gate_q_4;
  csx _gate_q_1, _gate_q_5;
  rzz_5070728384(3.5481164870253) _gate_q_4, _gate_q_3;
  crz(5.6807628535806485) _gate_q_2, _gate_q_6;
  cs _gate_q_8, _gate_q_0;
  t _gate_q_7;
  ry(6.023061598892117) _gate_q_5;
  rzx_5070726656(6.005585079754204) _gate_q_0, _gate_q_2;
  dcx _gate_q_8, _gate_q_3;
  t _gate_q_7;
  dcx _gate_q_1, _gate_q_4;
  s _gate_q_6;
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
gate cu1_5070717776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.118997241602764) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.118997241602764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.118997241602764) _gate_q_1;
}
gate cu1_5069422864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7711286975852696) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7711286975852696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7711286975852696) _gate_q_1;
}
gate rzz_5069426848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.715840518355395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5069433472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4530947627117623) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8593014723341891) _gate_q_0;
  ry(-0.8593014723341891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4530947627117623) _gate_q_1;
}
gate r_5069432608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6109999916270884, 1.303463711038514, -1.303463711038514) _gate_q_0;
}
gate rzz_5070428768(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.111016004573726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070435152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5938949918496084) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5938949918496084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5938949918496084) _gate_q_1;
}
gate r_5070422336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.803226603163975, 0.6296221127985437, -0.6296221127985437) _gate_q_0;
}
gate r_5070427616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9533867597414696, 3.2277156731142833, -3.2277156731142833) _gate_q_0;
}
gate rxx_5070432896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.775310061686076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070435680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.147933295189728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070435056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.537420470787616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070422624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5392506978782439) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070733280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.295107484928414) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.1345636881958835) _gate_q_1;
  ry(-0.1345636881958835) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.295107484928414) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cs _gate_q_6, _gate_q_8;
  crx(0.058501041318690127) _gate_q_3, _gate_q_4;
  t _gate_q_7;
  p(5.245720118042995) _gate_q_0;
  ecr _gate_q_2, _gate_q_5;
  id _gate_q_1;
  u1(4.309880096022173) _gate_q_0;
  rx(1.1476721347795051) _gate_q_2;
  sdg _gate_q_7;
  cu1_5070717776(6.237994483205528) _gate_q_4, _gate_q_3;
  cu1_5069422864(3.542257395170539) _gate_q_6, _gate_q_8;
  rzz_5069426848(3.715840518355395) _gate_q_1, _gate_q_5;
  xx_minus_yy_5069433472(1.7186029446683782, 3.4530947627117623) _gate_q_4, _gate_q_6;
  ecr _gate_q_1, _gate_q_5;
  cry(0.3484830898371995) _gate_q_2, _gate_q_8;
  r_5069432608(0.6109999916270884, 2.8742600378334107) _gate_q_7;
  id _gate_q_0;
  p(1.7237093345110728) _gate_q_3;
  rzz_5070428768(4.111016004573726) _gate_q_8, _gate_q_2;
  csx _gate_q_3, _gate_q_4;
  cu1_5070435152(1.1877899836992167) _gate_q_7, _gate_q_5;
  r_5070422336(2.803226603163975, 2.2004184395934403) _gate_q_1;
  x _gate_q_6;
  r_5070427616(1.9533867597414696, 4.79851199990918) _gate_q_0;
  crz(5.113217005698559) _gate_q_0, _gate_q_1;
  s _gate_q_7;
  rxx_5070432896(4.775310061686076) _gate_q_3, _gate_q_2;
  ry(1.6428510507573884) _gate_q_5;
  s _gate_q_4;
  rz(1.4744579392483033) _gate_q_6;
  y _gate_q_8;
  u2(3.0783570746527675, 2.315116342500694) _gate_q_5;
  ryy_5070435680(5.147933295189728) _gate_q_6, _gate_q_3;
  crz(4.411986098014385) _gate_q_0, _gate_q_4;
  p(6.187024846139134) _gate_q_7;
  sx _gate_q_8;
  id _gate_q_1;
  u1(4.668427455947145) _gate_q_2;
  cry(6.21914638675164) _gate_q_0, _gate_q_7;
  cry(5.85551759023189) _gate_q_4, _gate_q_8;
  sxdg _gate_q_5;
  crx(1.0695553826185558) _gate_q_2, _gate_q_6;
  crx(2.7519220431745577) _gate_q_3, _gate_q_1;
  u3(2.970825490726225, 4.311066155103269, 1.8767311399002393) _gate_q_7;
  ryy_5070435056(5.537420470787616) _gate_q_5, _gate_q_2;
  cx _gate_q_1, _gate_q_0;
  rzz_5070422624(1.5392506978782439) _gate_q_6, _gate_q_3;
  h _gate_q_4;
  p(5.022174653155026) _gate_q_8;
  sxdg _gate_q_1;
  csdg _gate_q_0, _gate_q_6;
  z _gate_q_7;
  crz(5.279201065322891) _gate_q_3, _gate_q_8;
  xx_plus_yy_5070733280(0.269127376391767, 4.295107484928414) _gate_q_2, _gate_q_5;
  z _gate_q_4;
}