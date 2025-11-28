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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5104449872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.874473462216583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5104450928(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2766096986303666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5104450304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.082998702380886) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.082998702380886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.082998702380886) _gate_q_1;
}
gate rzz_5104450016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.02532424517708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5104442288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2181143863391229) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5104435616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.525849009198241) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2815245062219445) _gate_q_1;
  ry(-0.2815245062219445) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.525849009198241) _gate_q_0;
}
gate ryy_5104442528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4479523326529085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104444832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.5069673260114795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5104445552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.143254977401199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5104439168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.126597231032648) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6008263946760763) _gate_q_0;
  ry(-1.6008263946760763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.126597231032648) _gate_q_1;
}
gate cu3_5104442864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.65238535652659) _gate_q_0;
  u1(-2.110392406069845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8380756575605766, 0, -2.65238535652659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8380756575605766, 4.762777762596435, 0) _gate_q_1;
}
gate cu3_5104446320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.763666499742878) _gate_q_0;
  u1(-0.8105231992063153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.04274300716918846, 0, -1.763666499742878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.04274300716918846, 2.5741896989491933, 0) _gate_q_1;
}
gate rxx_5104436432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.570927514913983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5104438256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0183797829138141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104448720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.812447893467729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104441424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5461590162531358, -1.2426189729534323, 1.2426189729534323) _gate_q_0;
}
gate rzx_5104438784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0208346294711126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5104448672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.859076995266798) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104449248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.313379238372925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5104448912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8711570384899184) _gate_q_0;
  u1(-0.15380385260529217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2172116808280617, 0, -0.8711570384899184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2172116808280617, 1.0249608910952106, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cy _gate_q_4, _gate_q_6;
  U(4.547793236447946, 5.0657477451674815, 3.1607060393345936) _gate_q_15;
  y _gate_q_0;
  swap _gate_q_11, _gate_q_3;
  U(4.934779937782459, 3.7299275486901498, 1.0331030978395606) _gate_q_9;
  u3(2.754533460600782, 2.080750793877068, 5.752818470961968) _gate_q_16;
  csx _gate_q_14, _gate_q_7;
  cs _gate_q_10, _gate_q_5;
  rzz_5104449872(1.874473462216583) _gate_q_13, _gate_q_2;
  sx _gate_q_1;
  dcx _gate_q_12, _gate_q_8;
  y _gate_q_4;
  crz(0.5296132202078336) _gate_q_7, _gate_q_0;
  cy _gate_q_13, _gate_q_5;
  ryy_5104450928(4.2766096986303666) _gate_q_16, _gate_q_11;
  sx _gate_q_1;
  ecr _gate_q_9, _gate_q_8;
  cy _gate_q_6, _gate_q_10;
  crx(0.1382996491900571) _gate_q_15, _gate_q_12;
  u2(1.890657033880914, 2.2572837183526384) _gate_q_2;
  y _gate_q_14;
  U(5.508849326249567, 3.4960602136049, 1.6708785916122837) _gate_q_3;
  crx(1.3257091133398955) _gate_q_1, _gate_q_6;
  iswap _gate_q_5, _gate_q_15;
  ch _gate_q_12, _gate_q_13;
  dcx _gate_q_10, _gate_q_9;
  csx _gate_q_4, _gate_q_11;
  s _gate_q_8;
  cy _gate_q_2, _gate_q_16;
  cs _gate_q_14, _gate_q_3;
  x _gate_q_0;
  u3(1.1250626595619608, 1.2248180688800785, 4.733155633306801) _gate_q_7;
  cu1_5104450304(6.165997404761772) _gate_q_10, _gate_q_13;
  u2(5.934666176923083, 2.673440570218866) _gate_q_1;
  rz(0.01149160828766889) _gate_q_2;
  csx _gate_q_7, _gate_q_3;
  rzz_5104450016(4.02532424517708) _gate_q_0, _gate_q_8;
  crz(1.2431289043179925) _gate_q_6, _gate_q_15;
  rx(4.787623125041005) _gate_q_5;
  rzx_5104442288(0.2181143863391229) _gate_q_11, _gate_q_16;
  sxdg _gate_q_14;
  cx _gate_q_12, _gate_q_4;
  id _gate_q_9;
  ch _gate_q_5, _gate_q_3;
  tdg _gate_q_6;
  csdg _gate_q_0, _gate_q_4;
  ch _gate_q_7, _gate_q_1;
  s _gate_q_12;
  p(5.856853738106379) _gate_q_13;
  sxdg _gate_q_14;
  x _gate_q_8;
  xx_plus_yy_5104435616(0.563049012443889, 5.525849009198241) _gate_q_16, _gate_q_2;
  ryy_5104442528(1.4479523326529085) _gate_q_9, _gate_q_10;
  y _gate_q_15;
  u3(5.232323060966475, 2.753013005053097, 2.927717696140131) _gate_q_11;
  ryy_5104444832(4.5069673260114795) _gate_q_10, _gate_q_12;
  u3(5.568873162880389, 1.3281109093024677, 2.289986662968105) _gate_q_14;
  rzx_5104445552(6.143254977401199) _gate_q_8, _gate_q_3;
  xx_minus_yy_5104439168(3.2016527893521527, 2.126597231032648) _gate_q_13, _gate_q_1;
  cu(2.4274588111020834, 6.0284332170603925, 2.0667870642855375, 4.72268602785961) _gate_q_4, _gate_q_11;
  ry(0.4847107882066721) _gate_q_9;
  cu3_5104442864(3.676151315121153, 4.762777762596435, 0.5419929504567452) _gate_q_7, _gate_q_16;
  y _gate_q_2;
  csx _gate_q_6, _gate_q_0;
  z _gate_q_15;
  y _gate_q_5;
  U(0.4437284569370355, 3.2883162131446477, 5.981066749034238) _gate_q_13;
  sxdg _gate_q_4;
  cry(6.106896283143181) _gate_q_1, _gate_q_5;
  iswap _gate_q_3, _gate_q_0;
  cp(4.451050514380601) _gate_q_10, _gate_q_6;
  cry(5.988820795592401) _gate_q_15, _gate_q_8;
  crx(3.8379461022944845) _gate_q_9, _gate_q_7;
  cz _gate_q_11, _gate_q_2;
  cs _gate_q_16, _gate_q_14;
  s _gate_q_12;
  tdg _gate_q_5;
  cu3_5104446320(0.08548601433837692, 2.5741896989491933, 0.9531433005365625) _gate_q_10, _gate_q_8;
  rxx_5104436432(3.570927514913983) _gate_q_14, _gate_q_12;
  u1(3.255156654417487) _gate_q_15;
  ryy_5104438256(1.0183797829138141) _gate_q_6, _gate_q_16;
  cy _gate_q_3, _gate_q_13;
  u3(3.154426430387232, 3.9063849125545462, 4.807124537385991) _gate_q_7;
  cz _gate_q_0, _gate_q_11;
  ryy_5104448720(4.812447893467729) _gate_q_9, _gate_q_2;
  u2(3.7358709541667996, 4.090043413265942) _gate_q_4;
  r_5104441424(0.5461590162531358, 0.3281773538414642) _gate_q_1;
  tdg _gate_q_8;
  u2(3.9278380979397958, 4.092123333047114) _gate_q_10;
  cs _gate_q_12, _gate_q_11;
  rzx_5104438784(1.0208346294711126) _gate_q_16, _gate_q_1;
  dcx _gate_q_3, _gate_q_2;
  dcx _gate_q_0, _gate_q_14;
  s _gate_q_13;
  cu(1.4452438061956647, 2.19174314636114, 0.7221200400231915, 1.5470623692018273) _gate_q_7, _gate_q_6;
  ryy_5104448672(5.859076995266798) _gate_q_15, _gate_q_9;
  x _gate_q_4;
  p(3.2570337245186733) _gate_q_5;
  cy _gate_q_6, _gate_q_1;
  ryy_5104449248(4.313379238372925) _gate_q_14, _gate_q_10;
  sx _gate_q_13;
  cu3_5104448912(4.4344233616561235, 1.0249608910952106, 0.7173531858846263) _gate_q_3, _gate_q_15;
  csdg _gate_q_8, _gate_q_11;
  z _gate_q_16;
  z _gate_q_12;
  ecr _gate_q_5, _gate_q_9;
  tdg _gate_q_7;
  crx(0.024530795565734797) _gate_q_4, _gate_q_2;
  u3(3.9071774241854413, 5.57156626290516, 4.6941605553350465) _gate_q_0;
}
gate r_5104436912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1427167769386217, 2.716613254998257, -2.716613254998257) _gate_q_0;
}
gate ryy_5104439360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.953370447218996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104443152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1821924858627306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5104447232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.972322008609241) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3098666443674944) _gate_q_1;
  ry(-2.3098666443674944) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.972322008609241) _gate_q_0;
}
gate r_5104445408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.893135926048088, -0.789822172721094, 0.789822172721094) _gate_q_0;
}
gate xx_plus_yy_5104443728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.687437015069013) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9808024310889634) _gate_q_1;
  ry(-2.9808024310889634) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.687437015069013) _gate_q_0;
}
gate cu1_5104435952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4614614427491128) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4614614427491128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4614614427491128) _gate_q_1;
}
gate rxx_5104446800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1606712253785114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5104435904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0651831366417015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104442912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.053255118369833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5104448384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1307484598781765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5104441328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.964528624467158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104441232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8378034570994257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5104451120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8968613646043493) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5910605612094082) _gate_q_0;
  ry(-0.5910605612094082) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8968613646043493) _gate_q_1;
}
gate xx_plus_yy_5104444160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2023542811264236) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.438308839337453) _gate_q_1;
  ry(-1.438308839337453) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2023542811264236) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  p(4.44464305316798) _gate_q_16;
  cy _gate_q_12, _gate_q_11;
  y _gate_q_15;
  u1(1.1759754999843939) _gate_q_14;
  csx _gate_q_4, _gate_q_3;
  cu(0.08144885357096986, 6.155300447898952, 4.235639655141602, 4.364138275892064) _gate_q_6, _gate_q_5;
  ry(6.007640715206889) _gate_q_1;
  swap _gate_q_10, _gate_q_0;
  cx _gate_q_9, _gate_q_2;
  r_5104436912(1.1427167769386217, 4.2874095817931535) _gate_q_7;
  ryy_5104439360(4.953370447218996) _gate_q_8, _gate_q_13;
  id _gate_q_6;
  cs _gate_q_0, _gate_q_9;
  u2(1.4701319074239685, 4.948637174807994) _gate_q_4;
  z _gate_q_5;
  cp(3.6687678968016493) _gate_q_13, _gate_q_7;
  dcx _gate_q_3, _gate_q_10;
  cx _gate_q_15, _gate_q_12;
  cp(5.494993847686494) _gate_q_8, _gate_q_11;
  ry(5.451438682636881) _gate_q_2;
  sdg _gate_q_1;
  ecr _gate_q_16, _gate_q_14;
  cy _gate_q_6, _gate_q_7;
  cx _gate_q_12, _gate_q_10;
  u1(1.053664496820346) _gate_q_14;
  s _gate_q_5;
  u3(5.812241145013575, 3.7431817409568584, 2.4890142638525377) _gate_q_16;
  ch _gate_q_13, _gate_q_8;
  cs _gate_q_11, _gate_q_4;
  s _gate_q_2;
  crz(1.8134397273194638) _gate_q_0, _gate_q_15;
  x _gate_q_1;
  tdg _gate_q_9;
  x _gate_q_3;
  x _gate_q_1;
  id _gate_q_7;
  rxx_5104443152(3.1821924858627306) _gate_q_8, _gate_q_3;
  x _gate_q_5;
  xx_plus_yy_5104447232(4.619733288734989, 1.972322008609241) _gate_q_13, _gate_q_6;
  cs _gate_q_2, _gate_q_11;
  s _gate_q_16;
  s _gate_q_12;
  rx(0.8359366176848437) _gate_q_15;
  r_5104445408(5.893135926048088, 0.7809741540738026) _gate_q_0;
  u2(5.37101666248299, 6.277540877621259) _gate_q_4;
  ch _gate_q_10, _gate_q_14;
  h _gate_q_9;
  ry(1.9838461330935449) _gate_q_7;
  cs _gate_q_14, _gate_q_12;
  h _gate_q_5;
  cu(0.9571930075707195, 3.061868696667033, 0.7815965035593951, 0.7175495912518735) _gate_q_10, _gate_q_16;
  U(4.939737610295076, 5.019162387416361, 5.156849829156702) _gate_q_9;
  crz(3.2472688526680544) _gate_q_2, _gate_q_6;
  tdg _gate_q_0;
  xx_plus_yy_5104443728(5.961604862177927, 3.687437015069013) _gate_q_3, _gate_q_11;
  cu1_5104435952(2.9229228854982257) _gate_q_13, _gate_q_4;
  sx _gate_q_15;
  cx _gate_q_8, _gate_q_1;
  z _gate_q_0;
  rxx_5104446800(1.1606712253785114) _gate_q_6, _gate_q_12;
  u2(2.648016091422359, 0.6305242923821378) _gate_q_10;
  rzz_5104435904(1.0651831366417015) _gate_q_5, _gate_q_11;
  sx _gate_q_15;
  cp(2.392306387807335) _gate_q_1, _gate_q_14;
  id _gate_q_2;
  ecr _gate_q_3, _gate_q_13;
  ryy_5104442912(3.053255118369833) _gate_q_7, _gate_q_4;
  u1(4.650311798294215) _gate_q_8;
  csx _gate_q_9, _gate_q_16;
  u1(0.8954866768026688) _gate_q_5;
  ry(2.5262075611977894) _gate_q_14;
  x _gate_q_8;
  cu(0.7720508851154104, 0.33845056589852157, 3.3767692973527232, 3.070589065877213) _gate_q_11, _gate_q_0;
  rx(3.3458053182323724) _gate_q_6;
  crx(4.790523152259917) _gate_q_4, _gate_q_16;
  cz _gate_q_13, _gate_q_12;
  rzz_5104448384(1.1307484598781765) _gate_q_15, _gate_q_1;
  ry(5.877316764713311) _gate_q_9;
  csdg _gate_q_2, _gate_q_10;
  ch _gate_q_3, _gate_q_7;
  sdg _gate_q_16;
  crz(1.195584312837849) _gate_q_13, _gate_q_6;
  u1(5.292066362284568) _gate_q_10;
  cx _gate_q_3, _gate_q_12;
  cp(5.8937494501600005) _gate_q_5, _gate_q_0;
  rzz_5104441328(3.964528624467158) _gate_q_1, _gate_q_8;
  dcx _gate_q_2, _gate_q_11;
  cs _gate_q_7, _gate_q_14;
  t _gate_q_9;
  crx(0.005790439547152515) _gate_q_4, _gate_q_15;
  iswap _gate_q_11, _gate_q_3;
  ch _gate_q_16, _gate_q_9;
  ryy_5104441232(1.8378034570994257) _gate_q_2, _gate_q_1;
  cz _gate_q_15, _gate_q_7;
  ecr _gate_q_12, _gate_q_10;
  cu(5.593225036294179, 4.455950594900986, 3.636918579916789, 3.6905130073358112) _gate_q_6, _gate_q_14;
  u1(3.5814434505582646) _gate_q_0;
  cy _gate_q_13, _gate_q_4;
  swap _gate_q_5, _gate_q_8;
  cu(2.908735592060578, 3.668728716610302, 6.031856661690056, 1.5343267729886174) _gate_q_9, _gate_q_4;
  dcx _gate_q_2, _gate_q_6;
  u1(6.023441605142105) _gate_q_10;
  cry(0.18097415602978723) _gate_q_14, _gate_q_3;
  ecr _gate_q_15, _gate_q_5;
  xx_minus_yy_5104451120(1.1821211224188164, 0.8968613646043493) _gate_q_7, _gate_q_16;
  ry(5.457891314395522) _gate_q_8;
  csx _gate_q_11, _gate_q_13;
  xx_plus_yy_5104444160(2.876617678674906, 2.2023542811264236) _gate_q_12, _gate_q_1;
  tdg _gate_q_0;
}