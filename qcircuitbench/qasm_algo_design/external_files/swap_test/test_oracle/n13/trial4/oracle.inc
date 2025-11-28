gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5106022112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.88434241238965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106015440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.027013502301255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106015584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.71738567848554) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.71738567848554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.71738567848554) _gate_q_1;
}
gate r_5106013856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.488338901877982, 4.385294207411203, -4.385294207411203) _gate_q_0;
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
gate rxx_5106019568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1540758876264463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5106024416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9373473002801895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106015248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.783275825823558, -0.3203121782305267, 0.3203121782305267) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5106024176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2439546090402205) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.1221846815321395) _gate_q_1;
  ry(-3.1221846815321395) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2439546090402205) _gate_q_0;
}
gate xx_minus_yy_5106015200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5112627357597437) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4967153326322356) _gate_q_0;
  ry(-2.4967153326322356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5112627357597437) _gate_q_1;
}
gate rzx_5106018512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.664309856844769) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106018320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.014208126401981) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.014208126401981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.014208126401981) _gate_q_1;
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
gate rxx_5106009776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6562161431770857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106016112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3325908701802474) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3325908701802474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3325908701802474) _gate_q_1;
}
gate cu3_5106012608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2486913387121996) _gate_q_0;
  u1(-0.9266368924996738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.346855977327485, 0, -1.2486913387121996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.346855977327485, 2.1753282312118736, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5106020480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.761833294441214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  U(0.9800275291283035, 0.0622575532257099, 5.412183696117124) _gate_q_0;
  U(6.2460118214232025, 5.459155543994231, 2.9967638930264333) _gate_q_6;
  dcx _gate_q_1, _gate_q_12;
  cx _gate_q_2, _gate_q_3;
  h _gate_q_8;
  cry(5.674888954729709) _gate_q_10, _gate_q_5;
  u3(1.2920254158768298, 4.439115492479768, 5.193063369702397) _gate_q_7;
  cs _gate_q_4, _gate_q_11;
  u2(3.7683739374304426, 4.815280056516949) _gate_q_9;
  ryy_5106022112(5.88434241238965) _gate_q_9, _gate_q_7;
  t _gate_q_3;
  s _gate_q_0;
  rzz_5106015440(3.027013502301255) _gate_q_11, _gate_q_1;
  u1(1.6448914502214576) _gate_q_2;
  cz _gate_q_8, _gate_q_5;
  ry(2.534443168238563) _gate_q_6;
  crx(1.6942551612487162) _gate_q_4, _gate_q_10;
  t _gate_q_12;
  ry(0.6219499137645468) _gate_q_10;
  cs _gate_q_9, _gate_q_5;
  cy _gate_q_4, _gate_q_3;
  tdg _gate_q_12;
  s _gate_q_11;
  cu1_5106015584(3.43477135697108) _gate_q_7, _gate_q_2;
  sdg _gate_q_1;
  cz _gate_q_6, _gate_q_0;
  r_5106013856(2.488338901877982, 5.9560905342060995) _gate_q_8;
  sdg _gate_q_12;
  h _gate_q_10;
  tdg _gate_q_2;
  ry(5.0733442197187895) _gate_q_7;
  cz _gate_q_5, _gate_q_4;
  csx _gate_q_0, _gate_q_11;
  cx _gate_q_8, _gate_q_3;
  swap _gate_q_6, _gate_q_1;
  rx(2.108997136137832) _gate_q_9;
  rxx_5106019568(1.1540758876264463) _gate_q_0, _gate_q_2;
  sx _gate_q_9;
  crx(1.8820727217533841) _gate_q_7, _gate_q_3;
  tdg _gate_q_5;
  sxdg _gate_q_8;
  swap _gate_q_11, _gate_q_12;
  rzx_5106024416(2.9373473002801895) _gate_q_1, _gate_q_10;
  r_5106015248(3.783275825823558, 1.2504841485643698) _gate_q_6;
  u1(1.6585494149242404) _gate_q_4;
  cz _gate_q_5, _gate_q_12;
  cz _gate_q_11, _gate_q_3;
  rz(1.1406167269916019) _gate_q_9;
  sx _gate_q_1;
  tdg _gate_q_4;
  cy _gate_q_2, _gate_q_10;
  iswap _gate_q_6, _gate_q_0;
  sxdg _gate_q_7;
  id _gate_q_8;
  xx_plus_yy_5106024176(6.244369363064279, 1.2439546090402205) _gate_q_10, _gate_q_8;
  xx_minus_yy_5106015200(4.993430665264471, 2.5112627357597437) _gate_q_6, _gate_q_5;
  rzx_5106018512(4.664309856844769) _gate_q_4, _gate_q_1;
  sdg _gate_q_2;
  swap _gate_q_0, _gate_q_12;
  cs _gate_q_7, _gate_q_11;
  cu1_5106018320(4.028416252803962) _gate_q_9, _gate_q_3;
  y _gate_q_4;
  y _gate_q_8;
  ecr _gate_q_7, _gate_q_9;
  x _gate_q_10;
  id _gate_q_2;
  rxx_5106009776(1.6562161431770857) _gate_q_1, _gate_q_11;
  t _gate_q_5;
  u1(5.533137606528501) _gate_q_12;
  cu1_5106016112(2.6651817403604947) _gate_q_3, _gate_q_6;
  U(5.2233657481101625, 3.827823069592006, 3.801163522773832) _gate_q_0;
  id _gate_q_12;
  cu3_5106012608(4.69371195465497, 2.1753282312118736, 0.3220544462125259) _gate_q_5, _gate_q_9;
  id _gate_q_4;
  crz(4.929126434547792) _gate_q_1, _gate_q_8;
  cx _gate_q_11, _gate_q_0;
  x _gate_q_6;
  u2(2.050309614109569, 3.1097959183458586) _gate_q_2;
  h _gate_q_7;
  cp(4.185176300312219) _gate_q_10, _gate_q_3;
  csdg _gate_q_1, _gate_q_10;
  ecr _gate_q_6, _gate_q_5;
  crz(0.9566405533766147) _gate_q_9, _gate_q_4;
  cz _gate_q_0, _gate_q_2;
  rxx_5106020480(4.761833294441214) _gate_q_12, _gate_q_11;
  u1(5.099311099690623) _gate_q_8;
  ecr _gate_q_7, _gate_q_3;
}
gate xx_minus_yy_5106012512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9339854060020073) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5954752104122297) _gate_q_0;
  ry(-0.5954752104122297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9339854060020073) _gate_q_1;
}
gate xx_plus_yy_5106017312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.0848241151039277) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.14360161957476966) _gate_q_1;
  ry(-0.14360161957476966) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.0848241151039277) _gate_q_0;
}
gate xx_minus_yy_5106014240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4021881532322418) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4223511597086797) _gate_q_0;
  ry(-0.4223511597086797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4021881532322418) _gate_q_1;
}
gate rzz_5106009632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.14940187862570464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106013616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.98213631887475) _gate_q_0;
  u1(2.1465692083350496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.22726766590083, 0, -2.98213631887475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.22726766590083, 0.8355671105397001, 0) _gate_q_1;
}
gate xx_minus_yy_5106022160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.523717856307575) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.970243367723086) _gate_q_0;
  ry(-2.970243367723086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.523717856307575) _gate_q_1;
}
gate rzx_5106015536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.326179558011998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5106012224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.36132850174140513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106012944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6014079780923183) _gate_q_0;
  u1(0.7777802750820522) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2286621276369964, 0, -3.6014079780923183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2286621276369964, 2.823627703010266, 0) _gate_q_1;
}
gate rzx_5106022928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.129651819593896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106017072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.291140386788234) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4797286173159434) _gate_q_0;
  ry(-2.4797286173159434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.291140386788234) _gate_q_1;
}
gate rzz_5106023936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.65091878803246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106014528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6647758455695543) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6227323603051137) _gate_q_0;
  ry(-0.6227323603051137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6647758455695543) _gate_q_1;
}
gate cu1_5106010640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.435258023255096) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.435258023255096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.435258023255096) _gate_q_1;
}
gate ryy_5106014624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.368214555115823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  sx _gate_q_10;
  cp(3.7277565867151545) _gate_q_3, _gate_q_2;
  s _gate_q_11;
  ch _gate_q_7, _gate_q_12;
  U(5.8157085905258326, 0.12476187327310835, 4.01983082529017) _gate_q_4;
  U(0.6907346784192403, 2.649016819909776, 6.10919595960564) _gate_q_6;
  xx_minus_yy_5106012512(1.1909504208244595, 0.9339854060020073) _gate_q_5, _gate_q_1;
  cp(5.912835930348667) _gate_q_9, _gate_q_0;
  tdg _gate_q_8;
  xx_plus_yy_5106017312(0.2872032391495393, 0.0848241151039277) _gate_q_3, _gate_q_10;
  xx_minus_yy_5106014240(0.8447023194173594, 1.4021881532322418) _gate_q_9, _gate_q_8;
  x _gate_q_12;
  crz(4.780747575263227) _gate_q_6, _gate_q_5;
  crz(1.2003351927980164) _gate_q_7, _gate_q_1;
  crx(4.000128035978856) _gate_q_11, _gate_q_4;
  sxdg _gate_q_2;
  ry(5.969864618829946) _gate_q_0;
  p(5.719152408912562) _gate_q_2;
  h _gate_q_6;
  rzz_5106009632(0.14940187862570464) _gate_q_10, _gate_q_3;
  y _gate_q_4;
  u3(1.260480695117677, 1.2838118477035008, 5.9674947135152205) _gate_q_9;
  cu3_5106013616(4.45453533180166, 0.8355671105397001, 5.128705527209799) _gate_q_1, _gate_q_5;
  xx_minus_yy_5106022160(5.940486735446172, 1.523717856307575) _gate_q_7, _gate_q_12;
  rzx_5106015536(5.326179558011998) _gate_q_8, _gate_q_0;
  u3(0.527839050535052, 4.163664307582445, 4.929237888280025) _gate_q_11;
  cs _gate_q_2, _gate_q_9;
  iswap _gate_q_5, _gate_q_11;
  ch _gate_q_7, _gate_q_0;
  ry(0.9667854974994097) _gate_q_12;
  cp(1.4534465191904746) _gate_q_8, _gate_q_3;
  cs _gate_q_1, _gate_q_4;
  csx _gate_q_10, _gate_q_6;
  rzx_5106012224(0.36132850174140513) _gate_q_7, _gate_q_2;
  cx _gate_q_1, _gate_q_11;
  csdg _gate_q_12, _gate_q_9;
  t _gate_q_6;
  u2(2.9229726621735264, 2.6249905533562514) _gate_q_0;
  dcx _gate_q_8, _gate_q_4;
  u1(1.7301984208230539) _gate_q_5;
  ry(1.7988417317540786) _gate_q_10;
  h _gate_q_3;
  rz(2.2969934162697134) _gate_q_5;
  dcx _gate_q_4, _gate_q_11;
  crz(4.457962629819221) _gate_q_9, _gate_q_7;
  tdg _gate_q_8;
  dcx _gate_q_1, _gate_q_0;
  ry(5.867427445681501) _gate_q_3;
  cu3_5106012944(4.457324255273993, 2.823627703010266, 4.37918825317437) _gate_q_2, _gate_q_12;
  cy _gate_q_10, _gate_q_6;
  h _gate_q_3;
  rx(2.047398743704099) _gate_q_2;
  crz(4.596193731427737) _gate_q_6, _gate_q_7;
  u3(1.4955047954983904, 5.532109073982829, 0.03010095152699366) _gate_q_9;
  ecr _gate_q_4, _gate_q_12;
  rzx_5106022928(1.129651819593896) _gate_q_8, _gate_q_0;
  x _gate_q_10;
  xx_minus_yy_5106017072(4.959457234631887, 3.291140386788234) _gate_q_11, _gate_q_5;
  tdg _gate_q_1;
  rz(1.2575321000530089) _gate_q_6;
  cy _gate_q_10, _gate_q_8;
  u1(0.4074078964495195) _gate_q_9;
  rzz_5106023936(5.65091878803246) _gate_q_4, _gate_q_3;
  rx(1.9753001394569902) _gate_q_5;
  t _gate_q_0;
  z _gate_q_2;
  u2(5.515094068424248, 1.623737854671283) _gate_q_12;
  crz(4.897516707167957) _gate_q_11, _gate_q_1;
  s _gate_q_7;
  u1(1.656242957526621) _gate_q_10;
  dcx _gate_q_2, _gate_q_5;
  rx(4.74973749651867) _gate_q_1;
  xx_minus_yy_5106014528(1.2454647206102274, 1.6647758455695543) _gate_q_3, _gate_q_12;
  id _gate_q_9;
  sdg _gate_q_7;
  dcx _gate_q_4, _gate_q_8;
  sx _gate_q_0;
  csx _gate_q_11, _gate_q_6;
  cu1_5106010640(4.870516046510192) _gate_q_11, _gate_q_0;
  t _gate_q_6;
  p(2.2293835481428275) _gate_q_7;
  csdg _gate_q_2, _gate_q_9;
  rx(0.11608143196577606) _gate_q_4;
  cry(4.741475159138883) _gate_q_12, _gate_q_5;
  y _gate_q_3;
  ryy_5106014624(5.368214555115823) _gate_q_8, _gate_q_10;
  p(0.9683741415158474) _gate_q_1;
}