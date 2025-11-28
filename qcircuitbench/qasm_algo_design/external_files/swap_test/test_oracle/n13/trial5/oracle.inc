gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5105141856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9800761258550923) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9800761258550923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9800761258550923) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5105153040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6119536626720192) _gate_q_0;
  u1(0.1970939648203267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.37882325133654, 0, -3.6119536626720192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.37882325133654, 3.4148596978516923, 0) _gate_q_1;
}
gate cu1_5105144592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2431811693844566) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2431811693844566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2431811693844566) _gate_q_1;
}
gate rxx_5105153568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.728504779303816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105152224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8756597102986623) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8756597102986623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8756597102986623) _gate_q_1;
}
gate cu3_5105149536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8527346706522241) _gate_q_0;
  u1(0.12927184490919696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8997469059405057, 0, -0.8527346706522241) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8997469059405057, 0.7234628257430271, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5105143056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9272687881736674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105150400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9929044941868874) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9929044941868874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9929044941868874) _gate_q_1;
}
gate cu1_5105140032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7128109969592956) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7128109969592956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7128109969592956) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate r_5105153424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6452100763422641, -0.11608758098562455, 0.11608758098562455) _gate_q_0;
}
gate xx_plus_yy_5105145024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5485055799362925) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.630847109283854) _gate_q_1;
  ry(-1.630847109283854) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5485055799362925) _gate_q_0;
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
gate rxx_5105155584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8046376224633605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105862896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.015912228488854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105874416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5964843069412784) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5964843069412784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5964843069412784) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  u1(3.77896548782214) _gate_q_12;
  iswap _gate_q_1, _gate_q_6;
  cu1_5105141856(1.9601522517101846) _gate_q_4, _gate_q_8;
  u1(0.3392402552502313) _gate_q_2;
  id _gate_q_3;
  cs _gate_q_11, _gate_q_9;
  cu3_5105153040(2.75764650267308, 3.4148596978516923, 3.8090476274923457) _gate_q_10, _gate_q_5;
  cu1_5105144592(0.4863623387689132) _gate_q_0, _gate_q_7;
  crx(0.33831728605730393) _gate_q_4, _gate_q_9;
  rxx_5105153568(1.728504779303816) _gate_q_7, _gate_q_3;
  tdg _gate_q_8;
  U(4.848260275128262, 3.8289971651466854, 3.3841030394116727) _gate_q_2;
  ch _gate_q_0, _gate_q_10;
  cp(5.860331619772856) _gate_q_1, _gate_q_5;
  u2(1.4543837295900883, 1.226902659414514) _gate_q_11;
  cu1_5105152224(5.751319420597325) _gate_q_12, _gate_q_6;
  h _gate_q_12;
  cx _gate_q_2, _gate_q_3;
  cu3_5105149536(5.799493811881011, 0.7234628257430271, 0.982006515561421) _gate_q_0, _gate_q_7;
  cs _gate_q_4, _gate_q_11;
  csdg _gate_q_1, _gate_q_6;
  ry(4.508567582678015) _gate_q_9;
  dcx _gate_q_10, _gate_q_8;
  y _gate_q_5;
  tdg _gate_q_1;
  ry(0.2680519966983711) _gate_q_8;
  rzx_5105143056(3.9272687881736674) _gate_q_9, _gate_q_4;
  rz(2.317127238411752) _gate_q_2;
  sdg _gate_q_3;
  x _gate_q_6;
  x _gate_q_11;
  u3(0.2505087109908053, 3.980858245699938, 5.75621819072219) _gate_q_7;
  cu1_5105150400(1.9858089883737748) _gate_q_12, _gate_q_10;
  x _gate_q_0;
  t _gate_q_5;
  t _gate_q_11;
  cu1_5105140032(1.4256219939185912) _gate_q_7, _gate_q_10;
  cu(0.7891477293815369, 2.00365050885188, 2.755872805150187, 0.2503335752708426) _gate_q_3, _gate_q_4;
  cu(5.679171239120891, 4.099406532427213, 2.9351436611146116, 1.7701981883976172) _gate_q_12, _gate_q_6;
  y _gate_q_9;
  cp(3.935366888873528) _gate_q_1, _gate_q_8;
  h _gate_q_5;
  z _gate_q_0;
  u3(6.098765685528805, 3.0386077793998227, 3.70353800029973) _gate_q_2;
  sxdg _gate_q_11;
  cu(5.426764655042921, 5.241805978982811, 0.0026998290082365364, 0.011559904247341397) _gate_q_6, _gate_q_7;
  u1(5.5311180397846265) _gate_q_3;
  p(5.171218091159745) _gate_q_2;
  ecr _gate_q_5, _gate_q_4;
  u1(6.147041721679566) _gate_q_12;
  z _gate_q_9;
  r_5105153424(0.6452100763422641, 1.454708745809272) _gate_q_1;
  sx _gate_q_10;
  tdg _gate_q_0;
  y _gate_q_8;
  u3(5.273773375968051, 5.350309778639886, 0.3258874653581496) _gate_q_9;
  cy _gate_q_0, _gate_q_7;
  cz _gate_q_2, _gate_q_4;
  xx_plus_yy_5105145024(3.261694218567708, 0.5485055799362925) _gate_q_10, _gate_q_1;
  crx(1.5936358810399873) _gate_q_3, _gate_q_11;
  u3(0.6317812594613142, 4.794894753923165, 1.3828484935144667) _gate_q_6;
  sx _gate_q_12;
  sxdg _gate_q_5;
  p(3.9891518847215544) _gate_q_8;
  u2(0.1978503696371137, 5.648215188734794) _gate_q_8;
  u3(5.736035815189806, 4.015578299561767, 3.2033467860742917) _gate_q_6;
  cu(5.842586340748177, 4.129953146488041, 2.1378503217455678, 4.68156608159835) _gate_q_12, _gate_q_1;
  csx _gate_q_10, _gate_q_2;
  rxx_5105155584(2.8046376224633605) _gate_q_9, _gate_q_4;
  cy _gate_q_5, _gate_q_3;
  u3(2.6384450434720463, 0.5403955637774455, 5.392930276913469) _gate_q_11;
  cp(2.145221329884738) _gate_q_0, _gate_q_7;
  x _gate_q_8;
  z _gate_q_12;
  u2(2.8030716299467775, 0.8287196156200127) _gate_q_3;
  p(3.2082277137668718) _gate_q_1;
  u2(1.4126595449383905, 4.626612553860418) _gate_q_0;
  s _gate_q_2;
  sx _gate_q_4;
  crx(4.822748901194891) _gate_q_11, _gate_q_7;
  u3(2.114300946778522, 6.147750461266518, 2.804120849250159) _gate_q_10;
  crx(0.20095980374336084) _gate_q_5, _gate_q_9;
  tdg _gate_q_6;
  h _gate_q_5;
  crz(0.13669147802504691) _gate_q_1, _gate_q_7;
  csx _gate_q_6, _gate_q_11;
  rzx_5105862896(5.015912228488854) _gate_q_0, _gate_q_10;
  x _gate_q_4;
  cs _gate_q_8, _gate_q_12;
  sxdg _gate_q_2;
  cu1_5105874416(3.192968613882557) _gate_q_3, _gate_q_9;
}
gate rxx_5105860736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3922529750593293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5105876768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2883355297666275) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4947482238847347) _gate_q_0;
  ry(-1.4947482238847347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2883355297666275) _gate_q_1;
}
gate r_5105868176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.920841615808371, -0.8027467876142798, 0.8027467876142798) _gate_q_0;
}
gate rxx_5105872880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8307549012809528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105874848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.33736193656789026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105863232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5441901422603035, 0.07078826300467278, -0.07078826300467278) _gate_q_0;
}
gate r_5105866592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.175650728159156, 0.4313786414779619, -0.4313786414779619) _gate_q_0;
}
gate rzz_5105875184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1945448988849603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105861120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.914790113500176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105868080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4298203962108285) _gate_q_0;
  u1(1.4923144904195966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7572638833954527, 0, -2.4298203962108285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7572638833954527, 0.9375059057912317, 0) _gate_q_1;
}
gate cu3_5105867840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.329453811447628) _gate_q_0;
  u1(1.6930581013480461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4332147948998366, 0, -2.329453811447628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4332147948998366, 0.636395710099582, 0) _gate_q_1;
}
gate r_5105865584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.805257913041214, 2.3741342512777086, -2.3741342512777086) _gate_q_0;
}
gate r_5105869664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5462631701364664, 0.11631690424123353, -0.11631690424123353) _gate_q_0;
}
gate cu1_5105862848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.946058595282712) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.946058595282712) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.946058595282712) _gate_q_1;
}
gate rxx_5105866544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.751142751678311) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105869088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.04316021287853069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  csx _gate_q_11, _gate_q_8;
  ch _gate_q_10, _gate_q_9;
  u2(3.5923171945020727, 4.188398099319827) _gate_q_3;
  y _gate_q_12;
  rxx_5105860736(2.3922529750593293) _gate_q_7, _gate_q_5;
  xx_minus_yy_5105876768(2.9894964477694694, 2.2883355297666275) _gate_q_6, _gate_q_4;
  rx(3.0414085862162072) _gate_q_0;
  csx _gate_q_2, _gate_q_1;
  sxdg _gate_q_7;
  cy _gate_q_6, _gate_q_9;
  sdg _gate_q_3;
  r_5105868176(3.920841615808371, 0.7680495391806168) _gate_q_11;
  cy _gate_q_8, _gate_q_10;
  rz(4.420298590048568) _gate_q_0;
  x _gate_q_4;
  rxx_5105872880(3.8307549012809528) _gate_q_1, _gate_q_12;
  rx(3.9408773631801255) _gate_q_2;
  t _gate_q_5;
  rzz_5105874848(0.33736193656789026) _gate_q_10, _gate_q_3;
  sxdg _gate_q_8;
  r_5105863232(2.5441901422603035, 1.6415845897995693) _gate_q_6;
  csx _gate_q_1, _gate_q_2;
  ecr _gate_q_4, _gate_q_11;
  sx _gate_q_0;
  sxdg _gate_q_7;
  dcx _gate_q_5, _gate_q_9;
  p(4.136052258571229) _gate_q_12;
  csdg _gate_q_5, _gate_q_12;
  cx _gate_q_8, _gate_q_11;
  r_5105866592(6.175650728159156, 2.0021749682728585) _gate_q_2;
  cs _gate_q_1, _gate_q_0;
  sdg _gate_q_10;
  p(0.05599629093235148) _gate_q_9;
  cu(1.8319437705937336, 1.1799128500921394, 4.705405023347452, 3.610133869629643) _gate_q_3, _gate_q_6;
  rzz_5105875184(1.1945448988849603) _gate_q_4, _gate_q_7;
  sxdg _gate_q_0;
  swap _gate_q_10, _gate_q_8;
  sdg _gate_q_4;
  cx _gate_q_7, _gate_q_11;
  iswap _gate_q_3, _gate_q_12;
  cu(1.2819657774711166, 4.091261772034846, 4.333759926926882, 3.3929173638213834) _gate_q_2, _gate_q_5;
  t _gate_q_9;
  crx(2.6427554164800857) _gate_q_1, _gate_q_6;
  rzx_5105861120(5.914790113500176) _gate_q_2, _gate_q_10;
  crz(4.999931097689157) _gate_q_3, _gate_q_4;
  cu3_5105868080(1.5145277667909054, 0.9375059057912317, 3.922134886630425) _gate_q_9, _gate_q_8;
  crx(1.285624969834188) _gate_q_5, _gate_q_0;
  cu(1.9121344697191618, 0.9325784493961472, 5.281174469192424, 3.291034062937791) _gate_q_1, _gate_q_11;
  cs _gate_q_12, _gate_q_6;
  rx(3.540144354627773) _gate_q_7;
  id _gate_q_0;
  cu3_5105867840(2.866429589799673, 0.636395710099582, 4.022511912795674) _gate_q_7, _gate_q_9;
  sx _gate_q_10;
  cu(1.569925183776333, 0.20068973188426797, 1.8550027391350377, 3.03933439159109) _gate_q_11, _gate_q_1;
  rz(0.7464295934229708) _gate_q_5;
  cp(2.8679760181785823) _gate_q_3, _gate_q_4;
  r_5105865584(4.805257913041214, 3.944930578072605) _gate_q_2;
  swap _gate_q_12, _gate_q_6;
  y _gate_q_8;
  csdg _gate_q_3, _gate_q_1;
  id _gate_q_12;
  u2(5.9891381980049, 5.831403259331137) _gate_q_5;
  z _gate_q_2;
  csdg _gate_q_4, _gate_q_6;
  s _gate_q_9;
  p(0.05729740232512538) _gate_q_11;
  csx _gate_q_10, _gate_q_8;
  r_5105869664(2.5462631701364664, 1.68711323103613) _gate_q_7;
  id _gate_q_0;
  cu1_5105862848(1.892117190565424) _gate_q_8, _gate_q_5;
  cz _gate_q_10, _gate_q_12;
  cry(3.6865316316307917) _gate_q_7, _gate_q_2;
  rxx_5105866544(2.751142751678311) _gate_q_4, _gate_q_3;
  x _gate_q_0;
  u3(1.9445290156257837, 2.975271824753944, 5.817486321565619) _gate_q_1;
  rx(5.513723635357532) _gate_q_6;
  sx _gate_q_9;
  sx _gate_q_11;
  u2(3.7886671646493273, 6.197662460846486) _gate_q_5;
  sxdg _gate_q_10;
  U(0.14810458608225296, 3.4817494673625826, 0.80842266482029) _gate_q_7;
  ecr _gate_q_2, _gate_q_6;
  t _gate_q_8;
  cy _gate_q_3, _gate_q_4;
  p(4.04248316300983) _gate_q_0;
  x _gate_q_9;
  rzz_5105869088(0.04316021287853069) _gate_q_12, _gate_q_11;
  tdg _gate_q_1;
}