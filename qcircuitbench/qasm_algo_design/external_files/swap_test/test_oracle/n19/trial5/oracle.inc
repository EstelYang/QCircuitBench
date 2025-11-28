gate ryy_5118911472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.635763839555672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5118911664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.334462976821668, -1.2834876854810648, 1.2834876854810648) _gate_q_0;
}
gate cu3_5118911712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.132252250421267) _gate_q_0;
  u1(1.0845513956490591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.16565488988255053, 0, -4.132252250421267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.16565488988255053, 3.0477008547722075, 0) _gate_q_1;
}
gate cu1_5118911856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2347803346211585) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2347803346211585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2347803346211585) _gate_q_1;
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
gate rxx_5118912048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.587103679508655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5118912240(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.11058673243219, 3.0789561596573503, -3.0789561596573503) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5118912192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9544650025441938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5118912336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.30948230072480476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5118912576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7674429017456501) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1944835648453382) _gate_q_0;
  ry(-1.1944835648453382) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7674429017456501) _gate_q_1;
}
gate ryy_5118912624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4554660447247674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5118912864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.843578393272996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5118912960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8808366382612722) _gate_q_0;
  u1(-2.078587293833061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.086363185873581, 0, -3.8808366382612722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.086363185873581, 5.959423932094333, 0) _gate_q_1;
}
gate cu3_5118913392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.133423155472366) _gate_q_0;
  u1(-1.9582278641376978) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1394704266932107, 0, -4.133423155472366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1394704266932107, 6.091651019610064, 0) _gate_q_1;
}
gate rzz_5118905040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.755453337118169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5118904992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7129952960406634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5118904944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3230056417920752) _gate_q_0;
  u1(-2.91618914292185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.82714257553434, 0, -3.3230056417920752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.82714257553434, 6.239194784713925, 0) _gate_q_1;
}
gate ryy_5118904800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.383668013433199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5118904560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.231631574080826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5118904512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4624614624073753) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.23074454585193943) _gate_q_1;
  ry(-0.23074454585193943) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4624614624073753) _gate_q_0;
}
gate cu3_5118904368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3941812910369866) _gate_q_0;
  u1(-0.38932242602489175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2836683408930276, 0, -3.3941812910369866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2836683408930276, 3.7835037170618784, 0) _gate_q_1;
}
gate r_5118904176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.30654770217489075, 0.6476542428914338, -0.6476542428914338) _gate_q_0;
}
gate r_5118903984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4644793281972186, 1.1481502935525034, -1.1481502935525034) _gate_q_0;
}
gate xx_plus_yy_5118903696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.9639094255946405) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.467765648919802) _gate_q_1;
  ry(-1.467765648919802) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.9639094255946405) _gate_q_0;
}
gate rxx_5118903648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7945953694551422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5118903408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9426403294385398) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4164519705378518) _gate_q_0;
  ry(-2.4164519705378518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9426403294385398) _gate_q_1;
}
gate ryy_5118903264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3227444525033776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5118903120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4816718665547017) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4191835734060083) _gate_q_0;
  ry(-1.4191835734060083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4816718665547017) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ryy_5118911472(5.635763839555672) _gate_q_15, _gate_q_11;
  r_5118911664(3.334462976821668, 0.28730864131383177) _gate_q_9;
  s _gate_q_1;
  y _gate_q_7;
  cy _gate_q_0, _gate_q_8;
  cu3_5118911712(0.33130977976510106, 3.0477008547722075, 5.216803646070326) _gate_q_14, _gate_q_10;
  u3(5.666120205257657, 5.849914316143893, 0.16099753692122054) _gate_q_4;
  cu1_5118911856(2.469560669242317) _gate_q_17, _gate_q_12;
  ry(2.4177655845600405) _gate_q_13;
  ch _gate_q_18, _gate_q_2;
  csx _gate_q_3, _gate_q_16;
  cx _gate_q_5, _gate_q_6;
  cp(0.03566907021339394) _gate_q_4, _gate_q_11;
  sx _gate_q_8;
  ecr _gate_q_17, _gate_q_16;
  u1(5.536801079269256) _gate_q_0;
  y _gate_q_14;
  swap _gate_q_13, _gate_q_7;
  u3(0.20299917997293526, 1.2985427360718806, 2.2037149001975496) _gate_q_12;
  rxx_5118912048(4.587103679508655) _gate_q_15, _gate_q_5;
  r_5118912240(5.11058673243219, 4.649752486452247) _gate_q_9;
  t _gate_q_18;
  tdg _gate_q_1;
  id _gate_q_10;
  dcx _gate_q_3, _gate_q_6;
  u2(5.12586933397981, 4.804092553207814) _gate_q_2;
  sxdg _gate_q_7;
  h _gate_q_1;
  rxx_5118912192(0.9544650025441938) _gate_q_4, _gate_q_11;
  cry(2.9191676393356176) _gate_q_6, _gate_q_17;
  rzz_5118912336(0.30948230072480476) _gate_q_15, _gate_q_12;
  csdg _gate_q_9, _gate_q_8;
  y _gate_q_10;
  ry(6.272425109651311) _gate_q_3;
  s _gate_q_2;
  cs _gate_q_18, _gate_q_14;
  iswap _gate_q_5, _gate_q_0;
  xx_minus_yy_5118912576(2.3889671296906765, 0.7674429017456501) _gate_q_16, _gate_q_13;
  crx(3.669015290561718) _gate_q_3, _gate_q_5;
  ry(3.347762412047163) _gate_q_6;
  tdg _gate_q_8;
  ch _gate_q_14, _gate_q_13;
  ryy_5118912624(2.4554660447247674) _gate_q_11, _gate_q_9;
  csx _gate_q_12, _gate_q_18;
  id _gate_q_16;
  sdg _gate_q_0;
  ch _gate_q_10, _gate_q_17;
  U(4.936476315597763, 2.3804918081068545, 5.791470626456501) _gate_q_4;
  sx _gate_q_7;
  rzx_5118912864(2.843578393272996) _gate_q_2, _gate_q_1;
  u1(0.1741460998617013) _gate_q_15;
  id _gate_q_17;
  cu3_5118912960(4.172726371747162, 5.959423932094333, 1.8022493444282108) _gate_q_2, _gate_q_15;
  cu(4.864196965457841, 2.523776272000715, 0.8288346085135591, 4.986709967731208) _gate_q_11, _gate_q_4;
  swap _gate_q_0, _gate_q_12;
  csx _gate_q_1, _gate_q_3;
  cp(1.9722477136273429) _gate_q_7, _gate_q_16;
  sxdg _gate_q_14;
  y _gate_q_13;
  crz(5.769727769220259) _gate_q_8, _gate_q_5;
  sx _gate_q_6;
  p(5.273382961950465) _gate_q_10;
  crz(5.181307942911254) _gate_q_18, _gate_q_9;
  cu3_5118913392(4.2789408533864215, 6.091651019610064, 2.175195291334669) _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_6;
  rzz_5118905040(5.755453337118169) _gate_q_7, _gate_q_16;
  cy _gate_q_10, _gate_q_12;
  csx _gate_q_17, _gate_q_2;
  z _gate_q_11;
  cx _gate_q_5, _gate_q_8;
  rzx_5118904992(2.7129952960406634) _gate_q_14, _gate_q_18;
  sdg _gate_q_15;
  cu3_5118904944(5.65428515106868, 6.239194784713925, 0.4068164988702252) _gate_q_9, _gate_q_13;
  t _gate_q_3;
  cs _gate_q_9, _gate_q_18;
  cz _gate_q_3, _gate_q_15;
  ry(1.9836848900227537) _gate_q_11;
  id _gate_q_10;
  sdg _gate_q_6;
  sxdg _gate_q_17;
  iswap _gate_q_13, _gate_q_5;
  swap _gate_q_8, _gate_q_0;
  ryy_5118904800(3.383668013433199) _gate_q_16, _gate_q_12;
  cu(3.217393358000398, 2.9158932436280276, 2.1265195424982144, 4.37085721456043) _gate_q_1, _gate_q_4;
  z _gate_q_2;
  cry(5.381782058692576) _gate_q_7, _gate_q_14;
  rzz_5118904560(4.231631574080826) _gate_q_0, _gate_q_6;
  cz _gate_q_14, _gate_q_8;
  xx_plus_yy_5118904512(0.46148909170387886, 3.4624614624073753) _gate_q_3, _gate_q_13;
  crz(4.14495182566609) _gate_q_16, _gate_q_12;
  sxdg _gate_q_17;
  cu3_5118904368(4.567336681786055, 3.7835037170618784, 3.004858865012095) _gate_q_18, _gate_q_9;
  cp(3.194325593769594) _gate_q_4, _gate_q_1;
  r_5118904176(0.30654770217489075, 2.2184505696863304) _gate_q_7;
  sdg _gate_q_2;
  id _gate_q_10;
  x _gate_q_15;
  ry(3.3729042888629923) _gate_q_11;
  ry(0.4073970798035394) _gate_q_5;
  p(3.7638913877554923) _gate_q_7;
  r_5118903984(2.4644793281972186, 2.7189466203474) _gate_q_6;
  ry(5.715900300509757) _gate_q_5;
  u3(4.821895879593491, 3.9965204862331447, 1.4716708009450175) _gate_q_16;
  z _gate_q_17;
  rz(2.7254941437222433) _gate_q_4;
  cp(4.578848661363658) _gate_q_11, _gate_q_2;
  xx_plus_yy_5118903696(2.935531297839604, 4.9639094255946405) _gate_q_1, _gate_q_9;
  rxx_5118903648(0.7945953694551422) _gate_q_13, _gate_q_15;
  sx _gate_q_18;
  cu(1.7404494664495807, 4.767914984533822, 1.7790128287394853, 3.074529074704478) _gate_q_12, _gate_q_10;
  cu(3.304073026981022, 0.9201085908575771, 5.84353910628408, 1.4942790394444634) _gate_q_8, _gate_q_0;
  xx_minus_yy_5118903408(4.8329039410757035, 0.9426403294385398) _gate_q_14, _gate_q_3;
  cp(3.8153512390668207) _gate_q_11, _gate_q_4;
  ryy_5118903264(1.3227444525033776) _gate_q_8, _gate_q_7;
  ecr _gate_q_1, _gate_q_9;
  sdg _gate_q_17;
  id _gate_q_18;
  crz(5.785140491943532) _gate_q_10, _gate_q_15;
  xx_minus_yy_5118903120(2.8383671468120166, 2.4816718665547017) _gate_q_2, _gate_q_0;
  h _gate_q_13;
  cu(3.5652877783662524, 2.1174656660304056, 4.583733882039668, 0.3671889440271417) _gate_q_12, _gate_q_3;
  csx _gate_q_16, _gate_q_5;
  ch _gate_q_14, _gate_q_6;
}
gate xx_plus_yy_5118908208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.271653263923873) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3947889500150585) _gate_q_1;
  ry(-1.3947889500150585) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.271653263923873) _gate_q_0;
}
gate cu3_5118908304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.5070008429980907) _gate_q_0;
  u1(0.3581237301404244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.63574160337675, 0, -0.5070008429980907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.63574160337675, 0.14887711285766628, 0) _gate_q_1;
}
gate ryy_5118908448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.33758009931496114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5118913488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3805125340612079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5118913584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.942711807183586) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2873321048851936) _gate_q_0;
  ry(-2.2873321048851936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.942711807183586) _gate_q_1;
}
gate xx_minus_yy_5118913680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5571513445508667) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5742459456288986) _gate_q_0;
  ry(-2.5742459456288986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5571513445508667) _gate_q_1;
}
gate r_5118913920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3900598489008509, 3.0277512346740956, -3.0277512346740956) _gate_q_0;
}
gate r_5118914064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4524047742485697, 3.6942643265659667, -3.6942643265659667) _gate_q_0;
}
gate xx_plus_yy_5118914208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9994121679303174) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.960192926810167) _gate_q_1;
  ry(-2.960192926810167) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9994121679303174) _gate_q_0;
}
gate r_5118914256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.782598440042559, -1.323022540172314, 1.323022540172314) _gate_q_0;
}
gate xx_minus_yy_5118914544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1408114652400012) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5446829753771367) _gate_q_0;
  ry(-0.5446829753771367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1408114652400012) _gate_q_1;
}
gate cu1_5118915168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0383215711038836) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0383215711038836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0383215711038836) _gate_q_1;
}
gate ryy_5118915264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4922367082188297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5118915360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.40841061993317307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5118915648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5898804124214903) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4222750327783535) _gate_q_0;
  ry(-1.4222750327783535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5898804124214903) _gate_q_1;
}
gate xx_plus_yy_5118915840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.792855148525872) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5158009975606) _gate_q_1;
  ry(-1.5158009975606) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.792855148525872) _gate_q_0;
}
gate xx_plus_yy_5118915888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.928925268349727) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8411456505708371) _gate_q_1;
  ry(-0.8411456505708371) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.928925268349727) _gate_q_0;
}
gate xx_minus_yy_5118915936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7060172843734414) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.037136433426677) _gate_q_0;
  ry(-1.037136433426677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7060172843734414) _gate_q_1;
}
gate rxx_5118916032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.98962955318344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5118916176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6746178059139054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5118916224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.03267830558904) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.761991192251009) _gate_q_1;
  ry(-0.761991192251009) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.03267830558904) _gate_q_0;
}
gate r_5118916368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.842466762093069, 1.9912046477077783, -1.9912046477077783) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  xx_plus_yy_5118908208(2.789577900030117, 6.271653263923873) _gate_q_13, _gate_q_15;
  s _gate_q_6;
  csdg _gate_q_4, _gate_q_8;
  rx(2.249392418124747) _gate_q_12;
  crz(1.2778799403431653) _gate_q_3, _gate_q_2;
  U(3.465815896978004, 0.38662836394566164, 3.440560034180451) _gate_q_0;
  dcx _gate_q_16, _gate_q_18;
  cu3_5118908304(3.2714832067535, 0.14887711285766628, 0.8651245731385151) _gate_q_7, _gate_q_10;
  tdg _gate_q_9;
  ryy_5118908448(0.33758009931496114) _gate_q_14, _gate_q_1;
  sx _gate_q_5;
  ry(4.52101827147214) _gate_q_17;
  ry(0.9029212722626141) _gate_q_11;
  rzx_5118913488(1.3805125340612079) _gate_q_10, _gate_q_3;
  ry(0.5063975112889408) _gate_q_15;
  xx_minus_yy_5118913584(4.574664209770387, 2.942711807183586) _gate_q_13, _gate_q_7;
  rz(0.3799502070107292) _gate_q_4;
  cs _gate_q_2, _gate_q_0;
  dcx _gate_q_11, _gate_q_6;
  xx_minus_yy_5118913680(5.148491891257797, 2.5571513445508667) _gate_q_14, _gate_q_18;
  id _gate_q_17;
  sxdg _gate_q_16;
  tdg _gate_q_8;
  cu(4.0041290920445185, 0.39968291392900934, 4.930281187412373, 4.760813093269137) _gate_q_9, _gate_q_12;
  s _gate_q_5;
  rx(0.7935492495442844) _gate_q_1;
  cx _gate_q_8, _gate_q_18;
  csx _gate_q_15, _gate_q_6;
  h _gate_q_3;
  t _gate_q_17;
  p(3.7510602046328936) _gate_q_1;
  r_5118913920(1.3900598489008509, 4.598547561468992) _gate_q_9;
  cry(2.720929737743178) _gate_q_13, _gate_q_11;
  t _gate_q_16;
  csdg _gate_q_4, _gate_q_10;
  cz _gate_q_14, _gate_q_2;
  tdg _gate_q_7;
  dcx _gate_q_0, _gate_q_12;
  r_5118914064(3.4524047742485697, 5.265060653360863) _gate_q_5;
  rz(4.256627952186353) _gate_q_1;
  sxdg _gate_q_4;
  u3(5.163336545380417, 3.0804775683936105, 1.1424933603634102) _gate_q_6;
  h _gate_q_11;
  xx_plus_yy_5118914208(5.920385853620334, 0.9994121679303174) _gate_q_5, _gate_q_14;
  cs _gate_q_10, _gate_q_0;
  r_5118914256(5.782598440042559, 0.24777378662258256) _gate_q_18;
  x _gate_q_9;
  tdg _gate_q_2;
  ry(2.2706280717888707) _gate_q_13;
  swap _gate_q_16, _gate_q_7;
  cs _gate_q_17, _gate_q_15;
  cu(4.923752057982518, 0.3454545210318809, 2.3806717489389917, 1.736260690173419) _gate_q_3, _gate_q_8;
  id _gate_q_12;
  u3(3.8588118136106675, 1.5277163347741227, 6.260333431393006) _gate_q_2;
  ecr _gate_q_12, _gate_q_17;
  ecr _gate_q_13, _gate_q_16;
  rx(3.710774910919225) _gate_q_5;
  sx _gate_q_10;
  xx_minus_yy_5118914544(1.0893659507542734, 1.1408114652400012) _gate_q_15, _gate_q_14;
  cry(1.3740113596976802) _gate_q_8, _gate_q_11;
  csdg _gate_q_6, _gate_q_7;
  u2(2.06937291952508, 0.2438122007990967) _gate_q_18;
  z _gate_q_0;
  crx(4.72976669935345) _gate_q_4, _gate_q_3;
  U(3.3416478467365156, 2.681492520344941, 1.3400280771193303) _gate_q_1;
  sx _gate_q_9;
  rx(3.6100419096877014) _gate_q_7;
  csx _gate_q_12, _gate_q_17;
  ecr _gate_q_5, _gate_q_6;
  cs _gate_q_2, _gate_q_8;
  u1(1.4565693453301585) _gate_q_10;
  id _gate_q_4;
  crx(5.878338434927673) _gate_q_14, _gate_q_1;
  u2(0.0019423783752665679, 2.7795657412313046) _gate_q_15;
  s _gate_q_16;
  cs _gate_q_13, _gate_q_9;
  h _gate_q_11;
  ch _gate_q_18, _gate_q_0;
  u3(4.533360382603548, 4.599588349065991, 1.0643073481585517) _gate_q_3;
  cu1_5118915168(2.076643142207767) _gate_q_10, _gate_q_3;
  ryy_5118915264(0.4922367082188297) _gate_q_4, _gate_q_9;
  rz(2.2963168021019187) _gate_q_17;
  rxx_5118915360(0.40841061993317307) _gate_q_1, _gate_q_0;
  rz(5.6139286126557) _gate_q_15;
  z _gate_q_7;
  cu(5.324680929184519, 6.231935434678829, 5.1412134711641775, 1.5281682383020223) _gate_q_13, _gate_q_2;
  ry(5.088977855854596) _gate_q_5;
  rz(4.857437016747172) _gate_q_18;
  cs _gate_q_8, _gate_q_14;
  sx _gate_q_12;
  sxdg _gate_q_16;
  sxdg _gate_q_6;
  s _gate_q_11;
  xx_minus_yy_5118915648(2.844550065556707, 3.5898804124214903) _gate_q_8, _gate_q_12;
  u3(2.958505396383773, 2.286613637024824, 4.178312522981126) _gate_q_0;
  cs _gate_q_15, _gate_q_4;
  cry(0.16935047325053357) _gate_q_3, _gate_q_11;
  h _gate_q_7;
  xx_plus_yy_5118915840(3.0316019951212, 3.792855148525872) _gate_q_17, _gate_q_1;
  y _gate_q_6;
  z _gate_q_5;
  xx_plus_yy_5118915888(1.6822913011416742, 5.928925268349727) _gate_q_18, _gate_q_14;
  xx_minus_yy_5118915936(2.074272866853354, 3.7060172843734414) _gate_q_9, _gate_q_10;
  cx _gate_q_2, _gate_q_16;
  s _gate_q_13;
  y _gate_q_0;
  cx _gate_q_16, _gate_q_15;
  u3(3.9027819380148947, 2.607235938333935, 0.14411881522961273) _gate_q_17;
  sdg _gate_q_18;
  csdg _gate_q_11, _gate_q_5;
  rxx_5118916032(4.98962955318344) _gate_q_7, _gate_q_4;
  ry(4.026202551679455) _gate_q_6;
  tdg _gate_q_12;
  s _gate_q_2;
  rz(4.014042778603206) _gate_q_1;
  sxdg _gate_q_3;
  ch _gate_q_13, _gate_q_9;
  id _gate_q_14;
  cz _gate_q_10, _gate_q_8;
  rzx_5118916176(2.6746178059139054) _gate_q_2, _gate_q_12;
  xx_plus_yy_5118916224(1.523982384502018, 3.03267830558904) _gate_q_7, _gate_q_11;
  u3(1.5053675948091652, 3.9713891186806936, 3.384677870332699) _gate_q_1;
  sxdg _gate_q_3;
  u3(5.5249179781008335, 3.840058231733893, 2.2374979795410193) _gate_q_13;
  dcx _gate_q_5, _gate_q_8;
  cs _gate_q_17, _gate_q_14;
  s _gate_q_0;
  tdg _gate_q_10;
  r_5118916368(4.842466762093069, 3.562000974502675) _gate_q_9;
  u1(1.1781233606696675) _gate_q_15;
  sx _gate_q_16;
  u2(0.1751888299002287, 3.3222526764967912) _gate_q_6;
  rz(1.5344153351860503) _gate_q_4;
  sx _gate_q_18;
}