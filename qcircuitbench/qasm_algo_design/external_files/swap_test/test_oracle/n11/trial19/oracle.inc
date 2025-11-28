gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5074279296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.659517508525473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074278192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0446122330265766) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0890015925879446) _gate_q_0;
  ry(-2.0890015925879446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0446122330265766) _gate_q_1;
}
gate rzz_5074278864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.755449278510126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5074279776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.358713343406163) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6328608981350259) _gate_q_1;
  ry(-1.6328608981350259) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.358713343406163) _gate_q_0;
}
gate cu3_5074280064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.639177970332194) _gate_q_0;
  u1(0.9653702626387519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0578015249411314, 0, -4.639177970332194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0578015249411314, 3.673807707693442, 0) _gate_q_1;
}
gate cu3_5074280304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.509352112062278) _gate_q_0;
  u1(1.1393899564836605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4603624799202512, 0, -4.509352112062278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4603624799202512, 3.369962155578618, 0) _gate_q_1;
}
gate rzx_5074276128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7333521046959608) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074279728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8744653914362084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074280016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7672618842606725) _gate_q_0;
  u1(0.3459786548194056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6116166471738027, 0, -0.7672618842606725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6116166471738027, 0.42128322944126695, 0) _gate_q_1;
}
gate cu3_5074280352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.627596341347593) _gate_q_0;
  u1(0.3789005172162856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5258897010767838, 0, -5.627596341347593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5258897010767838, 5.248695824131308, 0) _gate_q_1;
}
gate rzz_5074279056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.025881546177697196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5074279008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.140344185626228, -1.0446376420606804, 1.0446376420606804) _gate_q_0;
}
gate rzx_5074279200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.269746816699138) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074281024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4448239460830936, 0.4141860234086523, -0.4141860234086523) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5074281312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.407268173750463) _gate_q_0;
  u1(0.7994914902900041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.889813468444446, 0, -3.407268173750463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.889813468444446, 2.6077766834604588, 0) _gate_q_1;
}
gate cu1_5074281216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.612257933157178) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.612257933157178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.612257933157178) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  iswap _gate_q_3, _gate_q_8;
  cy _gate_q_0, _gate_q_7;
  cu(2.79228447398406, 0.44237132113821576, 0.09892075082780795, 2.2481503911655394) _gate_q_10, _gate_q_2;
  u1(2.69220756883088) _gate_q_5;
  rzz_5074279296(5.659517508525473) _gate_q_4, _gate_q_6;
  rz(5.308254582762003) _gate_q_1;
  s _gate_q_9;
  ch _gate_q_10, _gate_q_9;
  ry(3.2995487255318148) _gate_q_0;
  x _gate_q_5;
  xx_minus_yy_5074278192(4.178003185175889, 1.0446122330265766) _gate_q_8, _gate_q_7;
  rzz_5074278864(3.755449278510126) _gate_q_6, _gate_q_4;
  ecr _gate_q_3, _gate_q_2;
  sx _gate_q_1;
  cy _gate_q_9, _gate_q_3;
  cs _gate_q_0, _gate_q_1;
  cu(5.114432827338255, 0.2654110407805699, 5.4025473086177955, 3.0627949841375237) _gate_q_10, _gate_q_7;
  s _gate_q_8;
  xx_plus_yy_5074279776(3.2657217962700518, 5.358713343406163) _gate_q_4, _gate_q_6;
  p(3.1375942745918) _gate_q_2;
  sxdg _gate_q_5;
  cu3_5074280064(4.115603049882263, 3.673807707693442, 5.604548232970946) _gate_q_3, _gate_q_2;
  crx(3.4221389544879983) _gate_q_1, _gate_q_6;
  swap _gate_q_4, _gate_q_9;
  y _gate_q_10;
  cu3_5074280304(0.9207249598405024, 3.369962155578618, 5.648742068545939) _gate_q_8, _gate_q_5;
  rzx_5074276128(1.7333521046959608) _gate_q_0, _gate_q_7;
  sxdg _gate_q_0;
  u2(1.1839811072664668, 5.893110514192377) _gate_q_4;
  ryy_5074279728(1.8744653914362084) _gate_q_6, _gate_q_2;
  cu3_5074280016(3.2232332943476054, 0.42128322944126695, 1.1132405390800781) _gate_q_8, _gate_q_5;
  tdg _gate_q_1;
  cu3_5074280352(1.0517794021535676, 5.248695824131308, 6.006496858563879) _gate_q_10, _gate_q_7;
  swap _gate_q_9, _gate_q_3;
  rzz_5074279056(0.025881546177697196) _gate_q_9, _gate_q_3;
  csx _gate_q_7, _gate_q_4;
  cy _gate_q_0, _gate_q_6;
  y _gate_q_2;
  U(2.1089512648197037, 1.9452060326818161, 1.7737015897303576) _gate_q_8;
  r_5074279008(5.140344185626228, 0.526158684734216) _gate_q_1;
  cx _gate_q_5, _gate_q_10;
  u3(4.995067496745686, 3.046378896491553, 2.9195181912211385) _gate_q_1;
  iswap _gate_q_7, _gate_q_2;
  cz _gate_q_9, _gate_q_0;
  cy _gate_q_4, _gate_q_3;
  rzx_5074279200(4.269746816699138) _gate_q_5, _gate_q_8;
  r_5074281024(3.4448239460830936, 1.9849823502035489) _gate_q_10;
  u2(3.3980403563648056, 1.8403699327724534) _gate_q_6;
  tdg _gate_q_10;
  dcx _gate_q_1, _gate_q_2;
  u3(3.591771006736979, 6.115643578577269, 0.8167669570241499) _gate_q_7;
  h _gate_q_5;
  U(5.902906716543676, 4.009236484718668, 1.0906080493585792) _gate_q_8;
  rz(0.013327612192863506) _gate_q_4;
  cy _gate_q_0, _gate_q_3;
  tdg _gate_q_6;
  s _gate_q_9;
  cp(2.5970834114578105) _gate_q_3, _gate_q_8;
  sxdg _gate_q_0;
  rx(2.6686074396399375) _gate_q_2;
  cu3_5074281312(1.779626936888892, 2.6077766834604588, 4.206759664040467) _gate_q_10, _gate_q_6;
  cu1_5074281216(5.224515866314356) _gate_q_5, _gate_q_7;
  id _gate_q_4;
  cry(4.3349337789380735) _gate_q_1, _gate_q_9;
  s _gate_q_0;
  cx _gate_q_9, _gate_q_3;
  cy _gate_q_7, _gate_q_1;
  ecr _gate_q_2, _gate_q_8;
  crx(0.24357396880625926) _gate_q_6, _gate_q_4;
  t _gate_q_5;
  u2(2.249907254656093, 2.864996900798807) _gate_q_10;
}
gate rzz_5074282752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8167403199594037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074282704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.360882713619331, -1.2378304150097157, 1.2378304150097157) _gate_q_0;
}
gate r_5074283520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6361137997944903, 3.5712402642551497, -3.5712402642551497) _gate_q_0;
}
gate rzx_5074284816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.46982471942722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074283712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3115394297463414) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6335468365578732) _gate_q_1;
  ry(-0.6335468365578732) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3115394297463414) _gate_q_0;
}
gate r_5074284720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.6401328664601404, 3.301745971144941, -3.301745971144941) _gate_q_0;
}
gate r_5074284528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.981204695157764, 4.0128352361166195, -4.0128352361166195) _gate_q_0;
}
gate rxx_5074284480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.835536661142632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074285104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.643929282186573, 4.287690491030905, -4.287690491030905) _gate_q_0;
}
gate cu3_5074285776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9587079598014001) _gate_q_0;
  u1(-0.5153181084433759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7240383354179647, 0, -1.9587079598014001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7240383354179647, 2.474026068244776, 0) _gate_q_1;
}
gate r_5074285536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.601669238768463, 3.316955795268223, -3.316955795268223) _gate_q_0;
}
gate rxx_5074285872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.27278442667086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074285584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.37584307222372) _gate_q_0;
  u1(0.961397641760708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1847386760691427, 0, -4.37584307222372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1847386760691427, 3.4144454304630116, 0) _gate_q_1;
}
gate rxx_5074277376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8235434968279836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074286160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.019197635892091988, 1.8779340580059198, -1.8779340580059198) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5074285680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.885270622747898) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.224706645317764) _gate_q_1;
  ry(-1.224706645317764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.885270622747898) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  u1(5.125482096135868) _gate_q_4;
  p(1.5581431334880884) _gate_q_7;
  rzz_5074282752(2.8167403199594037) _gate_q_0, _gate_q_8;
  h _gate_q_6;
  u2(5.004509740082004, 6.0457804984674155) _gate_q_9;
  r_5074282704(3.360882713619331, 0.33296591178518087) _gate_q_2;
  cp(4.927601241219888) _gate_q_3, _gate_q_1;
  r_5074283520(1.6361137997944903, 5.142036591050046) _gate_q_5;
  h _gate_q_10;
  s _gate_q_2;
  rzx_5074284816(2.46982471942722) _gate_q_9, _gate_q_10;
  ch _gate_q_7, _gate_q_6;
  t _gate_q_8;
  rx(1.9226157472830365) _gate_q_4;
  sxdg _gate_q_3;
  x _gate_q_1;
  sdg _gate_q_0;
  z _gate_q_5;
  ch _gate_q_10, _gate_q_5;
  xx_plus_yy_5074283712(1.2670936731157465, 2.3115394297463414) _gate_q_9, _gate_q_7;
  csx _gate_q_8, _gate_q_2;
  r_5074284720(4.6401328664601404, 4.872542297939837) _gate_q_6;
  ecr _gate_q_0, _gate_q_1;
  ch _gate_q_4, _gate_q_3;
  crz(2.31370480621568) _gate_q_5, _gate_q_6;
  tdg _gate_q_8;
  swap _gate_q_0, _gate_q_4;
  rx(4.709251512089055) _gate_q_3;
  x _gate_q_7;
  id _gate_q_10;
  cs _gate_q_1, _gate_q_2;
  s _gate_q_9;
  r_5074284528(5.981204695157764, 5.583631562911516) _gate_q_7;
  cy _gate_q_3, _gate_q_9;
  iswap _gate_q_8, _gate_q_1;
  tdg _gate_q_0;
  csx _gate_q_10, _gate_q_2;
  sxdg _gate_q_5;
  p(0.43426937707203317) _gate_q_4;
  p(2.8231159488537836) _gate_q_6;
  sx _gate_q_2;
  rxx_5074284480(3.835536661142632) _gate_q_1, _gate_q_6;
  cp(2.137132719085505) _gate_q_0, _gate_q_3;
  cu(0.9490104937350018, 0.21309130615846708, 1.2354737933301088, 0.7209980195728154) _gate_q_10, _gate_q_8;
  crz(1.0180929614471241) _gate_q_7, _gate_q_5;
  rx(1.3629979260144585) _gate_q_9;
  r_5074285104(0.643929282186573, 5.858486817825802) _gate_q_4;
  cu3_5074285776(1.4480766708359294, 2.474026068244776, 1.4433898513580241) _gate_q_9, _gate_q_3;
  rz(2.58340540019994) _gate_q_10;
  sxdg _gate_q_6;
  r_5074285536(4.601669238768463, 4.8877521220631195) _gate_q_8;
  U(1.8290447209486456, 3.310290080932869, 2.3069576386242763) _gate_q_7;
  tdg _gate_q_4;
  rxx_5074285872(4.27278442667086) _gate_q_1, _gate_q_0;
  cu3_5074285584(4.3694773521382855, 3.4144454304630116, 5.337240713984428) _gate_q_5, _gate_q_2;
  rxx_5074277376(2.8235434968279836) _gate_q_3, _gate_q_7;
  iswap _gate_q_10, _gate_q_6;
  r_5074286160(0.019197635892091988, 3.4487303848008164) _gate_q_1;
  cry(2.757377074772363) _gate_q_8, _gate_q_2;
  csdg _gate_q_5, _gate_q_4;
  xx_plus_yy_5074285680(2.449413290635528, 4.885270622747898) _gate_q_0, _gate_q_9;
  U(4.662117580462399, 2.7271519882792186, 5.817410947412097) _gate_q_5;
  ch _gate_q_0, _gate_q_4;
  cx _gate_q_2, _gate_q_7;
  ecr _gate_q_3, _gate_q_8;
  ry(0.11066724626382338) _gate_q_10;
  swap _gate_q_1, _gate_q_9;
  U(2.2848563036150633, 4.733305826598854, 1.1960977257852066) _gate_q_6;
  id _gate_q_4;
  dcx _gate_q_7, _gate_q_10;
  cz _gate_q_9, _gate_q_6;
  cx _gate_q_0, _gate_q_2;
  swap _gate_q_5, _gate_q_1;
  y _gate_q_3;
  y _gate_q_8;
}