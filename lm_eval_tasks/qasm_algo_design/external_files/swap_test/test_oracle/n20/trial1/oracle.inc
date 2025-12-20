gate rzx_5105792880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.093355844076685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105785008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0819856912253805, 2.9194005554268836, -2.9194005554268836) _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105790672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5259735384139466) _gate_q_1;
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
gate rzx_5105789376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.496797215357719) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105790144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2944341265548873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5105788608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2237322906690213) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9787753591574089) _gate_q_1;
  ry(-1.9787753591574089) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2237322906690213) _gate_q_0;
}
gate cu3_5105789472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9673018074162392) _gate_q_0;
  u1(0.5858910214939517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2824484088108718, 0, -1.9673018074162392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2824484088108718, 1.3814107859222875, 0) _gate_q_1;
}
gate rxx_5105784000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.316357165286619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105789808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.294115103539633) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.107835305784567) _gate_q_1;
  ry(-2.107835305784567) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.294115103539633) _gate_q_0;
}
gate r_5105783184(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.114331252303052, 1.7280399897296421, -1.7280399897296421) _gate_q_0;
}
gate cu1_5105785344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2671499406812896) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2671499406812896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2671499406812896) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5105779344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9498485389420734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105779728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6695501647250828) _gate_q_0;
  u1(0.6594031682926471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.128775710569274, 0, -0.6695501647250828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.128775710569274, 0.010146996432435744, 0) _gate_q_1;
}
gate cu3_5105785056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7154292933288366) _gate_q_0;
  u1(-0.0632064354919879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7804316688091886, 0, -3.7154292933288366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7804316688091886, 3.7786357288208245, 0) _gate_q_1;
}
gate xx_plus_yy_5105793744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9224990768162953) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.004979866420109) _gate_q_1;
  ry(-2.004979866420109) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9224990768162953) _gate_q_0;
}
gate rzx_5105787216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6212921046543871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105781648(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.891432427000174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105792256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.3787745427882445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105792304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0127121007067545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105790624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.809041135862598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105783136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3847861568935436, 3.3831562729075815, -3.3831562729075815) _gate_q_0;
}
gate ryy_5105792400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.919695045145198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cz _gate_q_2, _gate_q_10;
  rzx_5105792880(6.093355844076685) _gate_q_19, _gate_q_5;
  u1(4.375352918673225) _gate_q_1;
  cry(2.1080229293514017) _gate_q_7, _gate_q_6;
  r_5105785008(1.0819856912253805, 4.49019688222178) _gate_q_17;
  crz(1.722930197111535) _gate_q_16, _gate_q_0;
  swap _gate_q_18, _gate_q_12;
  t _gate_q_14;
  csx _gate_q_9, _gate_q_3;
  ch _gate_q_13, _gate_q_8;
  csx _gate_q_15, _gate_q_11;
  sxdg _gate_q_4;
  iswap _gate_q_18, _gate_q_4;
  x _gate_q_9;
  ryy_5105790672(1.5259735384139466) _gate_q_3, _gate_q_8;
  u3(0.751689347895033, 4.834295860204374, 3.9756657621737777) _gate_q_16;
  x _gate_q_7;
  sdg _gate_q_10;
  ecr _gate_q_12, _gate_q_2;
  rzx_5105789376(2.496797215357719) _gate_q_5, _gate_q_11;
  u2(5.885594459386225, 0.1111900932780903) _gate_q_0;
  u1(5.645092359748616) _gate_q_1;
  rzz_5105790144(1.2944341265548873) _gate_q_15, _gate_q_14;
  cs _gate_q_19, _gate_q_6;
  ecr _gate_q_13, _gate_q_17;
  cx _gate_q_1, _gate_q_18;
  ecr _gate_q_3, _gate_q_16;
  xx_plus_yy_5105788608(3.9575507183148178, 3.2237322906690213) _gate_q_2, _gate_q_12;
  swap _gate_q_9, _gate_q_7;
  rz(2.6514653115748605) _gate_q_0;
  cx _gate_q_6, _gate_q_5;
  sdg _gate_q_15;
  t _gate_q_11;
  cy _gate_q_14, _gate_q_4;
  u2(2.3949653014261014, 2.7227316981006955) _gate_q_10;
  sx _gate_q_8;
  y _gate_q_17;
  cs _gate_q_13, _gate_q_19;
  cy _gate_q_17, _gate_q_2;
  cu3_5105789472(0.5648968176217436, 1.3814107859222875, 2.553192828910191) _gate_q_13, _gate_q_1;
  u3(1.3493866469413298, 0.6801053147175271, 0.6740084899853391) _gate_q_14;
  ecr _gate_q_8, _gate_q_4;
  u2(1.8902743591578097, 0.4077707359172151) _gate_q_15;
  rxx_5105784000(3.316357165286619) _gate_q_10, _gate_q_7;
  cx _gate_q_16, _gate_q_9;
  xx_plus_yy_5105789808(4.215670611569134, 4.294115103539633) _gate_q_5, _gate_q_18;
  crx(3.5213481624585907) _gate_q_0, _gate_q_19;
  iswap _gate_q_3, _gate_q_11;
  rx(2.2444553540440895) _gate_q_12;
  t _gate_q_6;
  rz(2.4741891585928597) _gate_q_16;
  rx(0.24489043115143627) _gate_q_5;
  u1(1.4606332141353005) _gate_q_19;
  r_5105783184(2.114331252303052, 3.2988363165245387) _gate_q_2;
  x _gate_q_3;
  U(0.9708134767446827, 2.373975884633319, 1.1252825373830748) _gate_q_7;
  rz(4.337801142937816) _gate_q_18;
  h _gate_q_11;
  cp(4.446516467958265) _gate_q_15, _gate_q_10;
  U(1.5275050151425003, 3.399545096322751, 3.8710519278140865) _gate_q_9;
  csx _gate_q_1, _gate_q_8;
  swap _gate_q_13, _gate_q_17;
  U(2.7460424001518438, 2.5728676537938204, 2.5620366898925853) _gate_q_6;
  id _gate_q_4;
  cu1_5105785344(4.534299881362579) _gate_q_12, _gate_q_14;
  tdg _gate_q_0;
  sdg _gate_q_9;
  cx _gate_q_1, _gate_q_3;
  u3(0.6830965597756464, 1.193226812480727, 0.5552674980458614) _gate_q_14;
  dcx _gate_q_8, _gate_q_17;
  cy _gate_q_2, _gate_q_18;
  cs _gate_q_10, _gate_q_15;
  ry(0.9693019195235832) _gate_q_12;
  cu(0.12649021620513057, 1.7012317512438992, 2.502338004684969, 5.535293953452881) _gate_q_0, _gate_q_11;
  y _gate_q_16;
  cry(3.69292958786109) _gate_q_19, _gate_q_13;
  y _gate_q_5;
  rz(1.690808438676666) _gate_q_7;
  ecr _gate_q_4, _gate_q_6;
  rxx_5105779344(2.9498485389420734) _gate_q_13, _gate_q_6;
  cu3_5105779728(6.257551421138548, 0.010146996432435744, 1.3289533330177299) _gate_q_12, _gate_q_14;
  cz _gate_q_7, _gate_q_3;
  swap _gate_q_18, _gate_q_0;
  rz(3.0658993379006856) _gate_q_8;
  cu3_5105785056(5.560863337618377, 3.7786357288208245, 3.6522228578368487) _gate_q_5, _gate_q_4;
  dcx _gate_q_17, _gate_q_9;
  ecr _gate_q_1, _gate_q_2;
  y _gate_q_16;
  u3(0.4441869180030697, 6.267416874379987, 1.7692794534010283) _gate_q_15;
  swap _gate_q_11, _gate_q_10;
  h _gate_q_19;
  sxdg _gate_q_16;
  ry(5.9108286492893445) _gate_q_3;
  xx_plus_yy_5105793744(4.009959732840218, 3.9224990768162953) _gate_q_8, _gate_q_7;
  U(3.6418955490721663, 0.14912662363910517, 2.4910549969299396) _gate_q_4;
  rx(0.17098334734417883) _gate_q_0;
  sdg _gate_q_1;
  iswap _gate_q_12, _gate_q_19;
  sx _gate_q_5;
  rx(2.8336587422784443) _gate_q_18;
  csx _gate_q_15, _gate_q_2;
  rx(3.2862427605170605) _gate_q_10;
  dcx _gate_q_11, _gate_q_9;
  csx _gate_q_14, _gate_q_6;
  dcx _gate_q_13, _gate_q_17;
  cz _gate_q_12, _gate_q_19;
  rzx_5105787216(0.6212921046543871) _gate_q_4, _gate_q_1;
  ryy_5105781648(4.891432427000174) _gate_q_7, _gate_q_16;
  cs _gate_q_10, _gate_q_6;
  sdg _gate_q_17;
  p(6.216420217995088) _gate_q_9;
  ch _gate_q_5, _gate_q_8;
  cs _gate_q_2, _gate_q_0;
  ryy_5105792256(4.3787745427882445) _gate_q_11, _gate_q_13;
  p(1.308791504274767) _gate_q_18;
  rzx_5105792304(4.0127121007067545) _gate_q_15, _gate_q_3;
  U(3.9153458992176846, 4.028918108057765, 2.2106433375561596) _gate_q_14;
  rx(2.131905680056304) _gate_q_13;
  cz _gate_q_16, _gate_q_4;
  rx(4.741843805181065) _gate_q_2;
  sx _gate_q_12;
  rzz_5105790624(2.809041135862598) _gate_q_15, _gate_q_19;
  r_5105783136(2.3847861568935436, 4.953952599702478) _gate_q_3;
  u2(5.631162013267044, 3.4137169252936013) _gate_q_11;
  ry(5.302767201401716) _gate_q_17;
  ch _gate_q_10, _gate_q_6;
  dcx _gate_q_9, _gate_q_7;
  sxdg _gate_q_18;
  ry(4.135829783825313) _gate_q_14;
  ryy_5105792400(3.919695045145198) _gate_q_5, _gate_q_1;
  rz(3.291965636571814) _gate_q_0;
  t _gate_q_8;
}
gate rxx_5107419616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.932599490235287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107417600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35302921277403376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107423744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1272190539674942) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107423648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.40873555100536, -0.9865028715730296, 0.9865028715730296) _gate_q_0;
}
gate rxx_5107423024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.939667329318437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107424080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.902398046078918) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4094931556810315) _gate_q_1;
  ry(-2.4094931556810315) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.902398046078918) _gate_q_0;
}
gate rzz_5107432048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.196112338753342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107429600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.869691245056961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107420144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.659606332211509, 1.3697819279090613, -1.3697819279090613) _gate_q_0;
}
gate rzz_5107432528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5049290275400815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107431856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.658521046829434) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.658521046829434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.658521046829434) _gate_q_1;
}
gate cu3_5107431376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.921164672690277) _gate_q_0;
  u1(0.16065245832619102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1084849325772947, 0, -4.921164672690277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1084849325772947, 4.760512214364086, 0) _gate_q_1;
}
gate xx_plus_yy_5107429312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4120029807047878) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4271518280170965) _gate_q_1;
  ry(-2.4271518280170965) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4120029807047878) _gate_q_0;
}
gate xx_plus_yy_5107423936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.954790801599395) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5247523582622557) _gate_q_1;
  ry(-1.5247523582622557) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.954790801599395) _gate_q_0;
}
gate r_5107421296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.91031554298068, 1.3493533425938686, -1.3493533425938686) _gate_q_0;
}
gate r_5107425952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.76727165448048, 1.099756482377869, -1.099756482377869) _gate_q_0;
}
gate rzx_5107431616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.110658688565977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5107427680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5117731422786472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107431904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.734819103896539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107420816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7797255252950226) _gate_q_0;
  u1(0.2763409314486085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7689397206548416, 0, -3.7797255252950226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7689397206548416, 3.503384593846414, 0) _gate_q_1;
}
gate rzz_5107418032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.20196546632727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107419952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7297621049711935, 2.0618376360567234, -2.0618376360567234) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  crx(1.0658350548678988) _gate_q_14, _gate_q_18;
  crz(0.024390670520924335) _gate_q_2, _gate_q_6;
  sx _gate_q_3;
  h _gate_q_0;
  rxx_5107419616(4.932599490235287) _gate_q_8, _gate_q_19;
  u1(5.739907620546083) _gate_q_15;
  crx(0.4216317226092205) _gate_q_11, _gate_q_5;
  crz(5.302643580979691) _gate_q_4, _gate_q_13;
  swap _gate_q_1, _gate_q_12;
  cy _gate_q_7, _gate_q_10;
  cs _gate_q_9, _gate_q_17;
  z _gate_q_16;
  y _gate_q_18;
  cry(0.9503297317664363) _gate_q_1, _gate_q_11;
  p(2.189720516927477) _gate_q_8;
  cp(1.5735259457093524) _gate_q_14, _gate_q_12;
  rz(5.8056136670446294) _gate_q_16;
  y _gate_q_5;
  crz(2.0364172971034717) _gate_q_15, _gate_q_3;
  ryy_5107417600(0.35302921277403376) _gate_q_13, _gate_q_2;
  sx _gate_q_4;
  p(0.8728514947729319) _gate_q_6;
  rx(5.599932188654591) _gate_q_19;
  h _gate_q_0;
  cx _gate_q_17, _gate_q_7;
  ry(0.7908175238658394) _gate_q_9;
  U(0.4801401556596766, 4.917594639620939, 2.6980755389833724) _gate_q_10;
  cx _gate_q_10, _gate_q_17;
  csx _gate_q_9, _gate_q_3;
  ry(1.541780188815451) _gate_q_11;
  iswap _gate_q_2, _gate_q_1;
  cry(4.266126494194958) _gate_q_15, _gate_q_12;
  dcx _gate_q_6, _gate_q_16;
  u3(3.9547669441790188, 3.1045946934240285, 2.783472888441196) _gate_q_19;
  rzx_5107423744(3.1272190539674942) _gate_q_18, _gate_q_0;
  cry(0.4505102555534078) _gate_q_14, _gate_q_5;
  r_5107423648(4.40873555100536, 0.5842934552218669) _gate_q_4;
  rxx_5107423024(2.939667329318437) _gate_q_7, _gate_q_13;
  rx(5.33916220063866) _gate_q_8;
  s _gate_q_5;
  csx _gate_q_3, _gate_q_12;
  U(0.9925957406635115, 3.8554680937163215, 2.5677099364001568) _gate_q_9;
  crx(1.9271292677172362) _gate_q_1, _gate_q_6;
  cx _gate_q_8, _gate_q_13;
  crx(0.9850544017628879) _gate_q_16, _gate_q_11;
  U(1.0788799790112884, 1.2968087511017876, 2.119254937137911) _gate_q_17;
  z _gate_q_19;
  cry(0.2711511473233166) _gate_q_10, _gate_q_7;
  iswap _gate_q_0, _gate_q_2;
  sx _gate_q_4;
  u1(0.03450621997987854) _gate_q_18;
  cry(5.001252607155811) _gate_q_14, _gate_q_15;
  sxdg _gate_q_2;
  cz _gate_q_13, _gate_q_15;
  ch _gate_q_3, _gate_q_18;
  cy _gate_q_9, _gate_q_6;
  xx_plus_yy_5107424080(4.818986311362063, 4.902398046078918) _gate_q_0, _gate_q_7;
  cu(5.839704637600942, 0.09948157911474234, 0.14863253159209233, 6.065012383530871) _gate_q_4, _gate_q_11;
  crz(5.183713007174466) _gate_q_5, _gate_q_10;
  cp(6.066841583868641) _gate_q_14, _gate_q_19;
  t _gate_q_1;
  rzz_5107432048(5.196112338753342) _gate_q_12, _gate_q_8;
  cu(0.15241627144286138, 0.17580379799564536, 4.774168408731482, 0.9430106294465804) _gate_q_17, _gate_q_16;
  tdg _gate_q_16;
  ecr _gate_q_17, _gate_q_13;
  rxx_5107429600(4.869691245056961) _gate_q_0, _gate_q_9;
  r_5107420144(4.659606332211509, 2.940578254703958) _gate_q_2;
  rz(0.40533573250280097) _gate_q_18;
  U(5.941350820843061, 3.2514096679648787, 4.48557003896999) _gate_q_19;
  rz(0.457206176687189) _gate_q_11;
  x _gate_q_14;
  crz(2.00410954926746) _gate_q_8, _gate_q_12;
  x _gate_q_1;
  cs _gate_q_6, _gate_q_5;
  tdg _gate_q_10;
  dcx _gate_q_3, _gate_q_15;
  u3(3.283126435796448, 3.0532994230247046, 3.2880692812966075) _gate_q_4;
  rz(3.170142848840509) _gate_q_7;
  rzz_5107432528(2.5049290275400815) _gate_q_6, _gate_q_1;
  id _gate_q_0;
  cu1_5107431856(3.317042093658868) _gate_q_9, _gate_q_11;
  cy _gate_q_15, _gate_q_3;
  ecr _gate_q_4, _gate_q_13;
  cy _gate_q_8, _gate_q_17;
  dcx _gate_q_5, _gate_q_12;
  s _gate_q_16;
  s _gate_q_2;
  cu3_5107431376(6.2169698651545895, 4.760512214364086, 5.081817131016468) _gate_q_7, _gate_q_19;
  xx_plus_yy_5107429312(4.854303656034193, 1.4120029807047878) _gate_q_18, _gate_q_14;
  z _gate_q_10;
  xx_plus_yy_5107423936(3.0495047165245115, 5.954790801599395) _gate_q_9, _gate_q_3;
  sxdg _gate_q_2;
  r_5107421296(2.91031554298068, 2.920149669388765) _gate_q_16;
  x _gate_q_6;
  sx _gate_q_0;
  r_5107425952(5.76727165448048, 2.6705528091727655) _gate_q_8;
  rz(6.223033867153282) _gate_q_15;
  y _gate_q_5;
  cs _gate_q_14, _gate_q_1;
  p(3.732667847455597) _gate_q_17;
  rzx_5107431616(3.110658688565977) _gate_q_4, _gate_q_19;
  csx _gate_q_13, _gate_q_7;
  tdg _gate_q_12;
  cry(6.161943451408841) _gate_q_10, _gate_q_18;
  sx _gate_q_11;
  z _gate_q_9;
  csdg _gate_q_1, _gate_q_13;
  ecr _gate_q_16, _gate_q_10;
  csx _gate_q_7, _gate_q_8;
  swap _gate_q_12, _gate_q_17;
  ryy_5107427680(0.5117731422786472) _gate_q_18, _gate_q_14;
  iswap _gate_q_0, _gate_q_3;
  crx(4.803760143916366) _gate_q_2, _gate_q_11;
  cz _gate_q_15, _gate_q_4;
  rzx_5107431904(3.734819103896539) _gate_q_5, _gate_q_6;
  u2(4.943296369871241, 0.5802835859362142) _gate_q_19;
  h _gate_q_14;
  cu3_5107420816(5.537879441309683, 3.503384593846414, 4.056066456743631) _gate_q_1, _gate_q_18;
  t _gate_q_10;
  cs _gate_q_0, _gate_q_17;
  cry(3.633157191532371) _gate_q_7, _gate_q_16;
  csdg _gate_q_15, _gate_q_5;
  sx _gate_q_4;
  rx(2.030668055224889) _gate_q_11;
  z _gate_q_9;
  u2(4.420416302166793, 3.639224091517944) _gate_q_6;
  u1(1.2825940681687578) _gate_q_8;
  rzz_5107418032(2.20196546632727) _gate_q_19, _gate_q_12;
  cz _gate_q_13, _gate_q_3;
  r_5107419952(5.7297621049711935, 3.63263396285162) _gate_q_2;
}