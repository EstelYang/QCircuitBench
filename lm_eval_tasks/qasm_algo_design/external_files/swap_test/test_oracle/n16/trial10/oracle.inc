gate cu3_5118564048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.811881812201939) _gate_q_0;
  u1(-0.2868530465272465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.06566807448480433, 0, -3.811881812201939) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.06566807448480433, 4.098734858729186, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate xx_plus_yy_5118564624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.41737459149366) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.116977823149008) _gate_q_1;
  ry(-2.116977823149008) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.41737459149366) _gate_q_0;
}
gate r_5118563136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.999357758576289, 1.0291583215979645, -1.0291583215979645) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5118564720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9195217667929638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5118564768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.598270763635936) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.598270763635936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.598270763635936) _gate_q_1;
}
gate xx_minus_yy_5118564864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7810682711628771) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.505013461117949) _gate_q_0;
  ry(-0.505013461117949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7810682711628771) _gate_q_1;
}
gate rzx_5118564960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.481540540626563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5118565008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5633075311147329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5118565296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.176649543821416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5118565440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.394015540063001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5118565536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2596672414410923) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8712531651323627) _gate_q_1;
  ry(-2.8712531651323627) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2596672414410923) _gate_q_0;
}
gate rzz_5118565680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.489875464254841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5118565776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1953004512202927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5118565920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2562081638902134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5118566016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.558118146970991) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5118566112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1275722569461213) _gate_q_1;
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
gate cu3_5118566208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.921785196041275) _gate_q_0;
  u1(0.677391220658718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2521681840482959, 0, -4.921785196041275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2521681840482959, 4.244393975382557, 0) _gate_q_1;
}
gate xx_plus_yy_5118566496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.788518417213654) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2140073564665617) _gate_q_1;
  ry(-1.2140073564665617) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.788518417213654) _gate_q_0;
}
gate r_5118566640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6392349167696239, 3.0120590043428086, -3.0120590043428086) _gate_q_0;
}
gate xx_minus_yy_5118566688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7935366961093341) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.22420272453421286) _gate_q_0;
  ry(-0.22420272453421286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7935366961093341) _gate_q_1;
}
gate cu1_5118566928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2856259650271915) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2856259650271915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2856259650271915) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5118567264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.904823091224054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  z _gate_q_8;
  cu3_5118564048(0.13133614896960866, 4.098734858729186, 3.525028765674693) _gate_q_13, _gate_q_12;
  tdg _gate_q_14;
  ch _gate_q_0, _gate_q_4;
  x _gate_q_9;
  sxdg _gate_q_11;
  cu(0.6388751263156075, 0.0005015321661368347, 0.958655690755856, 5.711718344833413) _gate_q_1, _gate_q_6;
  rx(3.1431566416749757) _gate_q_7;
  s _gate_q_15;
  dcx _gate_q_10, _gate_q_2;
  cp(5.18162563218112) _gate_q_3, _gate_q_5;
  cry(0.9032465692447594) _gate_q_3, _gate_q_15;
  sdg _gate_q_5;
  u2(5.240076761467609, 1.6696775374123667) _gate_q_14;
  x _gate_q_4;
  U(1.249545092649159, 3.44506254129929, 1.3893402452758945) _gate_q_11;
  ecr _gate_q_9, _gate_q_2;
  y _gate_q_10;
  sdg _gate_q_12;
  crx(4.8386522933041665) _gate_q_6, _gate_q_8;
  xx_plus_yy_5118564624(4.233955646298016, 5.41737459149366) _gate_q_7, _gate_q_13;
  r_5118563136(4.999357758576289, 2.599954648392861) _gate_q_1;
  rz(2.8526295064524794) _gate_q_0;
  cs _gate_q_6, _gate_q_9;
  rzx_5118564720(1.9195217667929638) _gate_q_2, _gate_q_10;
  swap _gate_q_0, _gate_q_8;
  cu1_5118564768(5.196541527271872) _gate_q_12, _gate_q_3;
  xx_minus_yy_5118564864(1.010026922235898, 0.7810682711628771) _gate_q_13, _gate_q_5;
  U(1.9473593394180977, 3.637866412396572, 1.4336417919972895) _gate_q_14;
  rzx_5118564960(4.481540540626563) _gate_q_15, _gate_q_1;
  rxx_5118565008(0.5633075311147329) _gate_q_4, _gate_q_7;
  y _gate_q_11;
  dcx _gate_q_4, _gate_q_13;
  tdg _gate_q_2;
  cs _gate_q_3, _gate_q_7;
  x _gate_q_15;
  cu(2.4000885171537267, 0.9098302210046069, 5.3461238695222635, 5.443977802170079) _gate_q_11, _gate_q_12;
  rx(5.5218483538080525) _gate_q_8;
  p(3.1502790398665415) _gate_q_6;
  ry(4.839111980995676) _gate_q_9;
  ryy_5118565296(3.176649543821416) _gate_q_10, _gate_q_14;
  h _gate_q_0;
  cu(2.919549081574946, 1.2500065951616925, 4.161005605264401, 2.0013686114776164) _gate_q_5, _gate_q_1;
  rxx_5118565440(4.394015540063001) _gate_q_12, _gate_q_6;
  sxdg _gate_q_8;
  ecr _gate_q_15, _gate_q_3;
  dcx _gate_q_2, _gate_q_9;
  h _gate_q_11;
  u3(3.7240549786419797, 1.946944903351088, 1.3508103766657789) _gate_q_1;
  xx_plus_yy_5118565536(5.7425063302647255, 2.2596672414410923) _gate_q_4, _gate_q_5;
  x _gate_q_13;
  z _gate_q_14;
  p(0.9107622780199248) _gate_q_10;
  u3(0.8874088819775182, 4.753097358527191, 3.718445890927085) _gate_q_7;
  s _gate_q_0;
  sxdg _gate_q_10;
  rzz_5118565680(5.489875464254841) _gate_q_13, _gate_q_15;
  u1(1.4552334536609581) _gate_q_0;
  rzz_5118565776(1.1953004512202927) _gate_q_11, _gate_q_6;
  swap _gate_q_2, _gate_q_1;
  ch _gate_q_4, _gate_q_5;
  y _gate_q_14;
  cp(5.318709236278558) _gate_q_8, _gate_q_3;
  rzz_5118565920(3.2562081638902134) _gate_q_9, _gate_q_7;
  U(2.6500097284944637, 3.856335229915105, 0.8870580964620828) _gate_q_12;
  y _gate_q_9;
  rzz_5118566016(1.558118146970991) _gate_q_15, _gate_q_12;
  cs _gate_q_14, _gate_q_2;
  t _gate_q_6;
  swap _gate_q_13, _gate_q_4;
  u2(0.7457021427752847, 1.5856391981920792) _gate_q_8;
  s _gate_q_7;
  ryy_5118566112(1.1275722569461213) _gate_q_11, _gate_q_3;
  cs _gate_q_0, _gate_q_5;
  csdg _gate_q_10, _gate_q_1;
  dcx _gate_q_5, _gate_q_3;
  h _gate_q_0;
  rx(3.335326368714423) _gate_q_11;
  cu3_5118566208(2.5043363680965918, 4.244393975382557, 5.599176416699993) _gate_q_9, _gate_q_12;
  u3(6.001889084701981, 0.5006191731195744, 1.155408877713539) _gate_q_10;
  crz(0.551983951401628) _gate_q_4, _gate_q_1;
  cp(1.952816705991175) _gate_q_14, _gate_q_8;
  xx_plus_yy_5118566496(2.4280147129331233, 4.788518417213654) _gate_q_7, _gate_q_13;
  crx(2.6996765450791655) _gate_q_6, _gate_q_15;
  r_5118566640(0.6392349167696239, 4.582855331137705) _gate_q_2;
  xx_minus_yy_5118566688(0.4484054490684257, 0.7935366961093341) _gate_q_14, _gate_q_6;
  cy _gate_q_1, _gate_q_11;
  ecr _gate_q_4, _gate_q_12;
  sdg _gate_q_3;
  y _gate_q_15;
  p(0.4756802069278405) _gate_q_10;
  u3(4.515140657595018, 0.19962442862569996, 0.1712078465926402) _gate_q_13;
  cu(6.0147448056076085, 5.61578395125457, 1.812276046353413, 5.3075187705799465) _gate_q_5, _gate_q_0;
  ch _gate_q_2, _gate_q_8;
  cu1_5118566928(4.571251930054383) _gate_q_9, _gate_q_7;
  x _gate_q_0;
  y _gate_q_11;
  h _gate_q_14;
  cu(2.236886699587695, 0.6500573646467459, 0.906440079236296, 4.381380162414305) _gate_q_2, _gate_q_15;
  csx _gate_q_8, _gate_q_13;
  u3(5.098459302994136, 5.6663944714498555, 2.442290711557418) _gate_q_9;
  iswap _gate_q_4, _gate_q_6;
  crx(2.0596284561975247) _gate_q_1, _gate_q_5;
  rxx_5118567264(4.904823091224054) _gate_q_10, _gate_q_12;
  cu(2.324541368784907, 4.141428848756764, 3.389124172022844, 4.613400835628278) _gate_q_3, _gate_q_7;
}
gate cu3_5118571200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.200013904602143) _gate_q_0;
  u1(0.4116171753562461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0137328344301901, 0, -4.200013904602143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0137328344301901, 3.788396729245897, 0) _gate_q_1;
}
gate rzx_5118571392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.498777106719728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5118571440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3764575282510405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5118571488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9822488323389118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5118571680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6868431244140836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5118571872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8183310166325588) _gate_q_0;
  u1(-0.13067288152172496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.15273935472530348, 0, -0.8183310166325588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.15273935472530348, 0.9490038981542838, 0) _gate_q_1;
}
gate xx_minus_yy_5118572016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.6113035998905145) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3513064756330229) _gate_q_0;
  ry(-1.3513064756330229) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.6113035998905145) _gate_q_1;
}
gate ryy_5118572640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1019731858371853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5118572928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1205051179174457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5118572976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7190095155377987) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.21129571489933519) _gate_q_0;
  ry(-0.21129571489933519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7190095155377987) _gate_q_1;
}
gate r_5118573072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9538567962892381, 4.6712705340142575, -4.6712705340142575) _gate_q_0;
}
gate r_5118573168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.570234279902377, 1.8428087784365306, -1.8428087784365306) _gate_q_0;
}
gate xx_minus_yy_5118573312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9712049001424472) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.695877438618946) _gate_q_0;
  ry(-2.695877438618946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9712049001424472) _gate_q_1;
}
gate xx_minus_yy_5118573792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5673218465802243) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8117022211815097) _gate_q_0;
  ry(-0.8117022211815097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5673218465802243) _gate_q_1;
}
gate xx_minus_yy_5118573840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.1282219713939982) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.131487278956208) _gate_q_0;
  ry(-1.131487278956208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.1282219713939982) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csx _gate_q_5, _gate_q_7;
  s _gate_q_3;
  U(4.225579299109716, 6.051270068008413, 4.734764897360142) _gate_q_13;
  rx(6.077084777853339) _gate_q_11;
  u1(0.3229256892341179) _gate_q_9;
  cu(0.40118747095821367, 4.172354596935726, 0.7511992523229527, 5.112054515195684) _gate_q_4, _gate_q_10;
  rz(3.726006003297385) _gate_q_15;
  cu(3.8507341804410418, 2.1978272000069996, 2.9973821126291615, 4.271595304561378) _gate_q_6, _gate_q_14;
  cu3_5118571200(2.0274656688603803, 3.788396729245897, 4.611631079958389) _gate_q_1, _gate_q_0;
  csdg _gate_q_8, _gate_q_2;
  U(5.624628978304558, 2.9658468314855613, 5.678699202702421) _gate_q_12;
  u1(4.856253732191927) _gate_q_0;
  y _gate_q_7;
  rzx_5118571392(4.498777106719728) _gate_q_11, _gate_q_12;
  id _gate_q_1;
  rzx_5118571440(1.3764575282510405) _gate_q_6, _gate_q_9;
  ecr _gate_q_15, _gate_q_13;
  ryy_5118571488(1.9822488323389118) _gate_q_8, _gate_q_10;
  dcx _gate_q_14, _gate_q_3;
  csdg _gate_q_2, _gate_q_4;
  sx _gate_q_5;
  rz(4.703980984474627) _gate_q_2;
  h _gate_q_8;
  u3(3.609001575991971, 0.6909200183951678, 2.4026847928178134) _gate_q_11;
  cz _gate_q_1, _gate_q_10;
  ecr _gate_q_6, _gate_q_7;
  t _gate_q_14;
  h _gate_q_9;
  cz _gate_q_4, _gate_q_3;
  csdg _gate_q_15, _gate_q_5;
  swap _gate_q_13, _gate_q_12;
  p(3.384787323302118) _gate_q_0;
  y _gate_q_5;
  x _gate_q_11;
  rxx_5118571680(0.6868431244140836) _gate_q_4, _gate_q_10;
  cu(1.8871495511494982, 4.341284038935726, 5.118660041210001, 0.6166208774036226) _gate_q_2, _gate_q_8;
  y _gate_q_12;
  sdg _gate_q_14;
  y _gate_q_1;
  u2(1.116374949275007, 2.6775226173089814) _gate_q_3;
  cs _gate_q_7, _gate_q_0;
  t _gate_q_6;
  cu3_5118571872(0.30547870945060696, 0.9490038981542838, 0.6876581351108338) _gate_q_15, _gate_q_13;
  u2(1.7521100555185918, 1.2413251036876276) _gate_q_9;
  sxdg _gate_q_3;
  csdg _gate_q_15, _gate_q_10;
  sx _gate_q_9;
  y _gate_q_4;
  xx_minus_yy_5118572016(2.7026129512660457, 4.6113035998905145) _gate_q_14, _gate_q_7;
  dcx _gate_q_2, _gate_q_5;
  cy _gate_q_6, _gate_q_11;
  sxdg _gate_q_12;
  z _gate_q_0;
  cy _gate_q_13, _gate_q_8;
  id _gate_q_1;
  ecr _gate_q_14, _gate_q_7;
  cs _gate_q_10, _gate_q_12;
  U(4.447667565349812, 3.97246547223546, 5.847446825390544) _gate_q_0;
  crz(5.027984558506288) _gate_q_8, _gate_q_13;
  sdg _gate_q_5;
  u3(2.5777153729267726, 0.19704944525227183, 1.698150937149358) _gate_q_15;
  u3(1.3067227544126208, 1.3654664283155156, 4.725531240453644) _gate_q_2;
  x _gate_q_3;
  crx(0.9156658847452691) _gate_q_9, _gate_q_1;
  U(5.321149757808503, 1.852938405733532, 1.5538675442830958) _gate_q_4;
  h _gate_q_6;
  tdg _gate_q_11;
  sdg _gate_q_3;
  sxdg _gate_q_13;
  cu(5.662290987529487, 1.9223356001357002, 2.9292642297999962, 5.926721794265206) _gate_q_7, _gate_q_8;
  ry(1.7740690281466323) _gate_q_11;
  sx _gate_q_9;
  ry(2.1279899334330157) _gate_q_2;
  sx _gate_q_10;
  ryy_5118572640(2.1019731858371853) _gate_q_15, _gate_q_5;
  dcx _gate_q_12, _gate_q_0;
  crx(3.576114574928755) _gate_q_14, _gate_q_4;
  ry(3.126091797485625) _gate_q_6;
  U(5.6267884149332374, 3.8236549286009853, 2.135008679643019) _gate_q_1;
  p(5.239033787212263) _gate_q_12;
  tdg _gate_q_4;
  rzx_5118572928(1.1205051179174457) _gate_q_7, _gate_q_2;
  dcx _gate_q_11, _gate_q_10;
  xx_minus_yy_5118572976(0.42259142979867037, 0.7190095155377987) _gate_q_6, _gate_q_14;
  u3(4.1936812519574405, 0.8588150201360752, 1.8438530269961786) _gate_q_9;
  cz _gate_q_15, _gate_q_8;
  r_5118573072(1.9538567962892381, 6.242066860809154) _gate_q_1;
  t _gate_q_3;
  u1(2.763092465995779) _gate_q_0;
  csdg _gate_q_5, _gate_q_13;
  csdg _gate_q_9, _gate_q_12;
  r_5118573168(3.570234279902377, 3.413605105231427) _gate_q_1;
  cy _gate_q_3, _gate_q_11;
  id _gate_q_8;
  t _gate_q_13;
  z _gate_q_0;
  sx _gate_q_7;
  iswap _gate_q_6, _gate_q_5;
  crx(2.6449496059482835) _gate_q_2, _gate_q_15;
  xx_minus_yy_5118573312(5.391754877237892, 0.9712049001424472) _gate_q_14, _gate_q_10;
  u1(1.9703284682956554) _gate_q_4;
  csx _gate_q_13, _gate_q_4;
  s _gate_q_12;
  cry(4.757057150394435) _gate_q_11, _gate_q_6;
  U(2.2074246447892, 2.395759123122511, 0.07967918709801551) _gate_q_1;
  crz(0.6231348106700504) _gate_q_0, _gate_q_9;
  id _gate_q_15;
  u3(1.0633822146014142, 1.2841730994197134, 4.037994117343579) _gate_q_2;
  cu(4.938783485041559, 1.9470640191795554, 3.5102426502558703, 4.76744805339038) _gate_q_7, _gate_q_5;
  xx_minus_yy_5118573792(1.6234044423630194, 2.5673218465802243) _gate_q_3, _gate_q_14;
  xx_minus_yy_5118573840(2.262974557912416, 0.1282219713939982) _gate_q_8, _gate_q_10;
}