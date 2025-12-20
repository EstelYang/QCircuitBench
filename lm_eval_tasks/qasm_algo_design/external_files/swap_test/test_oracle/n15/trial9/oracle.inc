gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105271152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9373399640787956) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1601983281186529) _gate_q_0;
  ry(-0.1601983281186529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9373399640787956) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5105285264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.129414010416096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105272016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.902323815493556, 2.534095948610952, -2.534095948610952) _gate_q_0;
}
gate xx_minus_yy_5105285552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8968034250786525) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.54002094196152) _gate_q_0;
  ry(-1.54002094196152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8968034250786525) _gate_q_1;
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
gate xx_plus_yy_5105282864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.9227609626127835) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4527910337349064) _gate_q_1;
  ry(-2.4527910337349064) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.9227609626127835) _gate_q_0;
}
gate cu3_5105276960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8162851691262603) _gate_q_0;
  u1(2.225854436530665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3770788843458903, 0, -2.8162851691262603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3770788843458903, 0.5904307325955953, 0) _gate_q_1;
}
gate rzx_5105271776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4974214787492994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu1_5105275088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7855517283549904) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7855517283549904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7855517283549904) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5105283824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.405333986483008, 4.127499439517204, -4.127499439517204) _gate_q_0;
}
gate xx_minus_yy_5105284928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6492151568661844) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9981319121103208) _gate_q_0;
  ry(-0.9981319121103208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6492151568661844) _gate_q_1;
}
gate rzz_5105286320(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2702274577350345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105286896(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1695423138222023) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1695423138222023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1695423138222023) _gate_q_1;
}
gate rzz_5105271488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.0668456672117955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105281760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4014504526951272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5105283632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9017382969220559) _gate_q_0;
  u1(-0.709879416909385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8846939355503052, 0, -0.9017382969220559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8846939355503052, 1.611617713831441, 0) _gate_q_1;
}
gate cu3_5105281424(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0581142427047445) _gate_q_0;
  u1(-0.8831309868792001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1040645243037839, 0, -2.0581142427047445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1040645243037839, 2.9412452295839446, 0) _gate_q_1;
}
gate cu1_5105282336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.12184345426316) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.12184345426316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.12184345426316) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sxdg _gate_q_0;
  p(2.3953004027524756) _gate_q_4;
  crz(3.336801555272639) _gate_q_11, _gate_q_14;
  cz _gate_q_2, _gate_q_10;
  sxdg _gate_q_1;
  xx_minus_yy_5105271152(0.3203966562373058, 1.9373399640787956) _gate_q_3, _gate_q_9;
  cp(3.314694011104039) _gate_q_7, _gate_q_6;
  dcx _gate_q_12, _gate_q_13;
  cu(0.14247007963319633, 1.324974625394351, 2.9317100059382564, 5.277854478975167) _gate_q_8, _gate_q_5;
  id _gate_q_11;
  y _gate_q_1;
  crx(5.384540284535282) _gate_q_13, _gate_q_8;
  z _gate_q_7;
  p(3.47990049095605) _gate_q_12;
  id _gate_q_14;
  rxx_5105285264(4.129414010416096) _gate_q_0, _gate_q_9;
  iswap _gate_q_10, _gate_q_4;
  dcx _gate_q_6, _gate_q_2;
  u3(0.18554528178866003, 2.132359691521177, 6.14009382589126) _gate_q_5;
  r_5105272016(1.902323815493556, 4.104892275405849) _gate_q_3;
  z _gate_q_4;
  U(5.5575272071452275, 1.905155049281747, 2.372269613425625) _gate_q_7;
  id _gate_q_8;
  cz _gate_q_12, _gate_q_11;
  xx_minus_yy_5105285552(3.08004188392304, 1.8968034250786525) _gate_q_2, _gate_q_9;
  u1(3.771609849299842) _gate_q_14;
  u3(5.1608966368149005, 5.889715097401688, 4.804055215514097) _gate_q_0;
  x _gate_q_6;
  cp(1.8821813587243097) _gate_q_1, _gate_q_13;
  tdg _gate_q_3;
  iswap _gate_q_5, _gate_q_10;
  ry(2.802386909714733) _gate_q_12;
  u1(2.0197824897369374) _gate_q_10;
  csx _gate_q_4, _gate_q_3;
  sdg _gate_q_6;
  sxdg _gate_q_1;
  xx_plus_yy_5105282864(4.905582067469813, 4.9227609626127835) _gate_q_9, _gate_q_7;
  crx(4.132987967239051) _gate_q_0, _gate_q_13;
  cry(5.562895168329367) _gate_q_2, _gate_q_8;
  t _gate_q_5;
  z _gate_q_11;
  y _gate_q_14;
  rz(1.506664544038749) _gate_q_8;
  cy _gate_q_3, _gate_q_2;
  t _gate_q_14;
  cu3_5105276960(4.754157768691781, 0.5904307325955953, 5.042139605656925) _gate_q_6, _gate_q_7;
  rzx_5105271776(3.4974214787492994) _gate_q_0, _gate_q_4;
  sxdg _gate_q_11;
  cry(0.5031889963483763) _gate_q_1, _gate_q_5;
  t _gate_q_12;
  t _gate_q_10;
  p(1.428537726150912) _gate_q_13;
  sdg _gate_q_9;
  ecr _gate_q_13, _gate_q_4;
  ry(3.810277968903055) _gate_q_10;
  sxdg _gate_q_6;
  u3(2.0844584587788098, 2.3825338011708186, 3.7637484597777577) _gate_q_8;
  iswap _gate_q_14, _gate_q_7;
  cu1_5105275088(5.571103456709981) _gate_q_12, _gate_q_11;
  u3(2.616843416378619, 3.8051375379796246, 1.9942708114527574) _gate_q_1;
  rx(0.1249027995468359) _gate_q_2;
  z _gate_q_9;
  cp(0.41126793108235243) _gate_q_3, _gate_q_0;
  rz(2.7368982437805562) _gate_q_5;
  csdg _gate_q_7, _gate_q_0;
  r_5105283824(2.405333986483008, 5.698295766312101) _gate_q_4;
  xx_minus_yy_5105284928(1.9962638242206416, 1.6492151568661844) _gate_q_5, _gate_q_12;
  rzz_5105286320(1.2702274577350345) _gate_q_6, _gate_q_10;
  cu1_5105286896(2.3390846276444046) _gate_q_11, _gate_q_3;
  cp(1.5973069816110401) _gate_q_14, _gate_q_2;
  rzz_5105271488(0.0668456672117955) _gate_q_13, _gate_q_9;
  ch _gate_q_1, _gate_q_8;
  crz(3.2168117485011893) _gate_q_4, _gate_q_12;
  swap _gate_q_6, _gate_q_0;
  u3(4.584989238512666, 5.1150235622808955, 2.482126031957773) _gate_q_7;
  rxx_5105281760(2.4014504526951272) _gate_q_13, _gate_q_14;
  cx _gate_q_5, _gate_q_3;
  s _gate_q_2;
  id _gate_q_8;
  cs _gate_q_11, _gate_q_1;
  cu3_5105283632(3.7693878711006104, 1.611617713831441, 0.19185888001267085) _gate_q_9, _gate_q_10;
  cs _gate_q_14, _gate_q_5;
  id _gate_q_0;
  swap _gate_q_7, _gate_q_13;
  cp(1.2540690326371637) _gate_q_9, _gate_q_4;
  cu3_5105281424(2.2081290486075678, 2.9412452295839446, 1.1749832558255444) _gate_q_1, _gate_q_11;
  rx(6.12816619741337) _gate_q_10;
  U(1.711024538517129, 2.5042429475645758, 0.44343396138386015) _gate_q_12;
  y _gate_q_3;
  ch _gate_q_2, _gate_q_6;
  rz(0.008700054504611098) _gate_q_8;
  cu1_5105282336(6.24368690852632) _gate_q_1, _gate_q_13;
  csx _gate_q_2, _gate_q_0;
  y _gate_q_7;
  s _gate_q_8;
  csdg _gate_q_6, _gate_q_10;
  u1(0.04213193453348171) _gate_q_3;
  cp(4.95609749136189) _gate_q_12, _gate_q_14;
  cz _gate_q_5, _gate_q_4;
  rx(3.7830923726934973) _gate_q_11;
  rx(4.757115490650778) _gate_q_9;
}
gate rzz_5105277536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.111871065752562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105281280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.130426965802439) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.130426965802439) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.130426965802439) _gate_q_1;
}
gate xx_minus_yy_5105280704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4233788788677402) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.458796486750758) _gate_q_0;
  ry(-1.458796486750758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4233788788677402) _gate_q_1;
}
gate ryy_5105272784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.264052068227318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105273504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.525336499497897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105271584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.394030822345105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105271536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.890639440269381, 3.242572130968587, -3.242572130968587) _gate_q_0;
}
gate xx_minus_yy_5105276528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.272791325628012) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2030730535708223) _gate_q_0;
  ry(-2.2030730535708223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.272791325628012) _gate_q_1;
}
gate rxx_5105277200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.069858116867687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105276336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.001030904540705) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.001030904540705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.001030904540705) _gate_q_1;
}
gate rzz_5105281472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.991514163160338) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105273312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9224768869193058) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9224768869193058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9224768869193058) _gate_q_1;
}
gate cu1_5105276720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0904313801940697) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0904313801940697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0904313801940697) _gate_q_1;
}
gate xx_minus_yy_5105272976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3433796883523547) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.573505945409652) _gate_q_0;
  ry(-2.573505945409652) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3433796883523547) _gate_q_1;
}
gate r_5105277392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.818326139367913, 4.039151064681727, -4.039151064681727) _gate_q_0;
}
gate r_5105275136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5822515989196908, 4.177088815430242, -4.177088815430242) _gate_q_0;
}
gate cu1_5105282576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.12753343609900278) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.12753343609900278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.12753343609900278) _gate_q_1;
}
gate ryy_5105271632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.372690632084301) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105286224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2136038636496986) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2224993336118746) _gate_q_1;
  ry(-2.2224993336118746) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2136038636496986) _gate_q_0;
}
gate xx_plus_yy_5105284736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0384077371976814) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7093963057778425) _gate_q_1;
  ry(-2.7093963057778425) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0384077371976814) _gate_q_0;
}
gate rzx_5105278640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2387915843931374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105286128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.40294289776994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105282096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.184241546061913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  u2(6.22525850306329, 4.050367719185748) _gate_q_0;
  rzz_5105277536(2.111871065752562) _gate_q_5, _gate_q_6;
  u1(3.5258637572572122) _gate_q_7;
  x _gate_q_3;
  x _gate_q_8;
  cp(3.445738046252783) _gate_q_9, _gate_q_10;
  rz(5.829037445816565) _gate_q_4;
  cu1_5105281280(4.260853931604878) _gate_q_12, _gate_q_1;
  sdg _gate_q_14;
  crz(4.931990088245183) _gate_q_13, _gate_q_2;
  h _gate_q_11;
  tdg _gate_q_4;
  ry(1.6228054577459443) _gate_q_5;
  t _gate_q_3;
  xx_minus_yy_5105280704(2.917592973501516, 1.4233788788677402) _gate_q_10, _gate_q_0;
  cs _gate_q_2, _gate_q_7;
  ryy_5105272784(6.264052068227318) _gate_q_13, _gate_q_8;
  tdg _gate_q_1;
  id _gate_q_9;
  rxx_5105273504(5.525336499497897) _gate_q_14, _gate_q_11;
  y _gate_q_6;
  y _gate_q_12;
  x _gate_q_11;
  h _gate_q_4;
  ecr _gate_q_3, _gate_q_10;
  t _gate_q_13;
  cs _gate_q_0, _gate_q_1;
  t _gate_q_2;
  U(5.849696680966616, 2.616434754955578, 2.9883760718159356) _gate_q_5;
  csdg _gate_q_14, _gate_q_9;
  cp(3.3624569266862667) _gate_q_12, _gate_q_7;
  h _gate_q_8;
  y _gate_q_6;
  h _gate_q_7;
  csx _gate_q_13, _gate_q_9;
  t _gate_q_11;
  ryy_5105271584(2.394030822345105) _gate_q_4, _gate_q_5;
  cy _gate_q_12, _gate_q_1;
  cy _gate_q_14, _gate_q_0;
  r_5105271536(5.890639440269381, 4.813368457763484) _gate_q_2;
  cy _gate_q_8, _gate_q_10;
  cs _gate_q_3, _gate_q_6;
  t _gate_q_10;
  rx(1.7161027489289102) _gate_q_2;
  U(4.281732021077988, 0.13641909365770216, 5.853222305289222) _gate_q_13;
  p(3.0122090031581306) _gate_q_3;
  x _gate_q_1;
  t _gate_q_6;
  rz(0.9715675198275993) _gate_q_9;
  xx_minus_yy_5105276528(4.406146107141645, 5.272791325628012) _gate_q_14, _gate_q_7;
  U(5.7992906171657435, 3.6749150133438953, 5.033770836362023) _gate_q_8;
  id _gate_q_0;
  id _gate_q_5;
  rxx_5105277200(6.069858116867687) _gate_q_12, _gate_q_4;
  id _gate_q_11;
  id _gate_q_4;
  csdg _gate_q_3, _gate_q_6;
  sdg _gate_q_9;
  cu1_5105276336(4.00206180908141) _gate_q_10, _gate_q_14;
  rzz_5105281472(4.991514163160338) _gate_q_11, _gate_q_13;
  cx _gate_q_12, _gate_q_8;
  csx _gate_q_5, _gate_q_0;
  cu1_5105273312(3.8449537738386117) _gate_q_2, _gate_q_7;
  u3(3.1594515731446213, 1.7575299223980476, 2.098632926560498) _gate_q_1;
  u3(0.78085092571309, 1.487188551153543, 6.129514761066062) _gate_q_2;
  sxdg _gate_q_1;
  h _gate_q_10;
  cu1_5105276720(6.180862760388139) _gate_q_12, _gate_q_14;
  xx_minus_yy_5105272976(5.147011890819304, 0.3433796883523547) _gate_q_5, _gate_q_13;
  t _gate_q_0;
  tdg _gate_q_8;
  r_5105277392(4.818326139367913, 5.609947391476624) _gate_q_9;
  r_5105275136(1.5822515989196908, 5.7478851422251385) _gate_q_3;
  cu1_5105282576(0.25506687219800556) _gate_q_6, _gate_q_11;
  crz(2.787805318164394) _gate_q_4, _gate_q_7;
  sdg _gate_q_11;
  cs _gate_q_3, _gate_q_1;
  rz(0.04115375721027932) _gate_q_10;
  ecr _gate_q_8, _gate_q_9;
  ryy_5105271632(2.372690632084301) _gate_q_7, _gate_q_14;
  rx(2.640579788767348) _gate_q_12;
  rz(4.094979232147361) _gate_q_5;
  crz(4.103076862292171) _gate_q_0, _gate_q_4;
  csdg _gate_q_13, _gate_q_2;
  t _gate_q_6;
  x _gate_q_13;
  sxdg _gate_q_2;
  sxdg _gate_q_9;
  sx _gate_q_7;
  xx_plus_yy_5105286224(4.444998667223749, 1.2136038636496986) _gate_q_1, _gate_q_11;
  xx_plus_yy_5105284736(5.418792611555685, 2.0384077371976814) _gate_q_8, _gate_q_10;
  rzx_5105278640(3.2387915843931374) _gate_q_12, _gate_q_5;
  ryy_5105286128(4.40294289776994) _gate_q_3, _gate_q_0;
  csdg _gate_q_4, _gate_q_14;
  x _gate_q_6;
  cz _gate_q_13, _gate_q_12;
  s _gate_q_8;
  rz(1.2477828111621252) _gate_q_14;
  iswap _gate_q_9, _gate_q_1;
  z _gate_q_10;
  p(3.1375504869764863) _gate_q_6;
  swap _gate_q_4, _gate_q_0;
  u2(1.5445976002322095, 5.954222138216874) _gate_q_5;
  p(3.915960074277336) _gate_q_7;
  rzx_5105282096(5.184241546061913) _gate_q_11, _gate_q_2;
  sxdg _gate_q_3;
}