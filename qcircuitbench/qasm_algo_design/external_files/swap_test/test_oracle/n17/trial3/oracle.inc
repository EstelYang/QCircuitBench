gate rzx_5106256736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.651036017465402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106256784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.537664207954816, 0.8697443783047736, -0.8697443783047736) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106263024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.740426917385289) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.732258921122564) _gate_q_0;
  ry(-2.732258921122564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.740426917385289) _gate_q_1;
}
gate rzz_5106261200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.987216493108709) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5106260960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.800466792512776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106270080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0615702848423068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106265424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1675427008809458) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6064593754979333) _gate_q_0;
  ry(-2.6064593754979333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1675427008809458) _gate_q_1;
}
gate ryy_5106267632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3128400637344133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106262448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.05819549376319, 0.9300267930768045, -0.9300267930768045) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5106269984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8349148390259313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106266000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8981995612950495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106256640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4945093085319514) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.0014061448539611592) _gate_q_0;
  ry(-0.0014061448539611592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4945093085319514) _gate_q_1;
}
gate xx_minus_yy_5106260240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.155945296892618) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.177684589935569) _gate_q_0;
  ry(-2.177684589935569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.155945296892618) _gate_q_1;
}
gate r_5106269936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9401346995843725, 0.43914092915981673, -0.43914092915981673) _gate_q_0;
}
gate rzx_5106254960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6035679684202275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106254192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.895179803255827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106259952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.469270601282379) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5869119352667242) _gate_q_0;
  ry(-1.5869119352667242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.469270601282379) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate xx_plus_yy_5106254624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7583785564263551) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4286824856839286) _gate_q_1;
  ry(-1.4286824856839286) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7583785564263551) _gate_q_0;
}
gate rzz_5106257648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.633507111712211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5106261920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.277987196211318) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.102484306596731) _gate_q_1;
  ry(-3.102484306596731) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.277987196211318) _gate_q_0;
}
gate xx_plus_yy_5106255776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0355061773225844) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.07100610789848713) _gate_q_1;
  ry(-0.07100610789848713) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0355061773225844) _gate_q_0;
}
gate xx_plus_yy_5106265184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.09166644187480857) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.02347482473747153) _gate_q_1;
  ry(-0.02347482473747153) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.09166644187480857) _gate_q_0;
}
gate rzx_5106263456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7574081977320155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106255680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.073796186598076, 4.079820246052573, -4.079820246052573) _gate_q_0;
}
gate cu3_5106268688(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.219791984854273) _gate_q_0;
  u1(0.35869883771692) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3699195985926551, 0, -4.219791984854273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3699195985926551, 3.861093147137353, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cry(0.6553259311969659) _gate_q_15, _gate_q_13;
  sx _gate_q_12;
  rzx_5106256736(0.651036017465402) _gate_q_6, _gate_q_1;
  tdg _gate_q_16;
  u1(0.04759721492548695) _gate_q_4;
  r_5106256784(3.537664207954816, 2.44054070509967) _gate_q_11;
  crx(5.708591713828403) _gate_q_10, _gate_q_0;
  swap _gate_q_3, _gate_q_14;
  xx_minus_yy_5106263024(5.464517842245128, 2.740426917385289) _gate_q_8, _gate_q_9;
  cx _gate_q_2, _gate_q_5;
  U(0.7220632445490811, 4.755195538245427, 4.902154690082097) _gate_q_7;
  p(1.7281405051706626) _gate_q_12;
  rz(5.606812806230834) _gate_q_8;
  rzz_5106261200(1.987216493108709) _gate_q_11, _gate_q_6;
  u3(2.689989419761569, 0.5987603845888295, 1.7427754286990258) _gate_q_14;
  sxdg _gate_q_0;
  iswap _gate_q_1, _gate_q_9;
  x _gate_q_15;
  dcx _gate_q_10, _gate_q_4;
  t _gate_q_13;
  cp(5.138686256973947) _gate_q_3, _gate_q_2;
  ryy_5106260960(2.800466792512776) _gate_q_16, _gate_q_7;
  h _gate_q_5;
  ryy_5106270080(1.0615702848423068) _gate_q_2, _gate_q_7;
  swap _gate_q_0, _gate_q_11;
  ch _gate_q_4, _gate_q_1;
  xx_minus_yy_5106265424(5.2129187509958665, 1.1675427008809458) _gate_q_16, _gate_q_8;
  h _gate_q_14;
  iswap _gate_q_12, _gate_q_6;
  ryy_5106267632(3.3128400637344133) _gate_q_5, _gate_q_10;
  dcx _gate_q_15, _gate_q_3;
  ry(4.12787371518439) _gate_q_13;
  r_5106262448(6.05819549376319, 2.500823119871701) _gate_q_9;
  cs _gate_q_15, _gate_q_3;
  rxx_5106269984(1.8349148390259313) _gate_q_9, _gate_q_16;
  rzx_5106266000(4.8981995612950495) _gate_q_8, _gate_q_0;
  cu(4.65064664726943, 4.747143618729309, 3.756066103672752, 0.4190779403360343) _gate_q_10, _gate_q_11;
  xx_minus_yy_5106256640(0.0028122897079223184, 3.4945093085319514) _gate_q_5, _gate_q_13;
  crz(0.7399284427512361) _gate_q_4, _gate_q_12;
  dcx _gate_q_14, _gate_q_1;
  rz(5.053971733255781) _gate_q_2;
  xx_minus_yy_5106260240(4.355369179871138, 2.155945296892618) _gate_q_7, _gate_q_6;
  cy _gate_q_7, _gate_q_13;
  u1(4.849298923924796) _gate_q_9;
  r_5106269936(1.9401346995843725, 2.0099372559547133) _gate_q_12;
  rzx_5106254960(4.6035679684202275) _gate_q_2, _gate_q_4;
  rz(3.9944420317971545) _gate_q_5;
  ryy_5106254192(5.895179803255827) _gate_q_1, _gate_q_8;
  sx _gate_q_15;
  xx_minus_yy_5106259952(3.1738238705334485, 4.469270601282379) _gate_q_14, _gate_q_0;
  z _gate_q_16;
  csdg _gate_q_11, _gate_q_10;
  sx _gate_q_6;
  x _gate_q_3;
  csx _gate_q_3, _gate_q_13;
  rx(5.489638681381898) _gate_q_7;
  crz(0.8146363591243483) _gate_q_2, _gate_q_0;
  u2(3.925836726864897, 5.9640453000052815) _gate_q_1;
  xx_plus_yy_5106254624(2.8573649713678573, 0.7583785564263551) _gate_q_5, _gate_q_10;
  ry(2.156562165607602) _gate_q_12;
  u1(4.947200067468944) _gate_q_11;
  rx(0.1944071022641259) _gate_q_9;
  rzz_5106257648(0.633507111712211) _gate_q_15, _gate_q_4;
  id _gate_q_16;
  s _gate_q_6;
  cs _gate_q_8, _gate_q_14;
  ecr _gate_q_7, _gate_q_4;
  cy _gate_q_0, _gate_q_12;
  cry(2.9987505339471885) _gate_q_2, _gate_q_9;
  xx_plus_yy_5106261920(6.204968613193462, 5.277987196211318) _gate_q_15, _gate_q_5;
  sdg _gate_q_16;
  ry(5.268257918372819) _gate_q_10;
  rx(4.944650619906001) _gate_q_6;
  sx _gate_q_11;
  cu(5.049831720783731, 1.776616597902687, 0.18967853565144507, 0.3740495597970161) _gate_q_14, _gate_q_13;
  csx _gate_q_3, _gate_q_8;
  sx _gate_q_1;
  xx_plus_yy_5106255776(0.14201221579697426, 3.0355061773225844) _gate_q_4, _gate_q_11;
  swap _gate_q_10, _gate_q_15;
  ch _gate_q_1, _gate_q_5;
  cp(0.7904429147105803) _gate_q_8, _gate_q_13;
  xx_plus_yy_5106265184(0.04694964947494306, 0.09166644187480857) _gate_q_7, _gate_q_2;
  cs _gate_q_3, _gate_q_9;
  cp(5.470199198818106) _gate_q_6, _gate_q_16;
  cy _gate_q_14, _gate_q_12;
  u2(1.5491731603384826, 2.3964434630580373) _gate_q_0;
  tdg _gate_q_11;
  id _gate_q_16;
  rzx_5106263456(2.7574081977320155) _gate_q_0, _gate_q_8;
  y _gate_q_2;
  r_5106255680(3.073796186598076, 5.650616572847469) _gate_q_4;
  cs _gate_q_3, _gate_q_7;
  cz _gate_q_5, _gate_q_10;
  iswap _gate_q_15, _gate_q_6;
  csx _gate_q_9, _gate_q_14;
  cu(6.092064547990085, 4.157374753487373, 3.4925869105396044, 0.9125022173509831) _gate_q_12, _gate_q_13;
  tdg _gate_q_1;
  cy _gate_q_6, _gate_q_14;
  U(4.372233120645221, 3.44182354811769, 5.035922550464853) _gate_q_12;
  crz(0.5132765323465296) _gate_q_15, _gate_q_9;
  cu(1.6308450025762615, 6.269984406069683, 0.45898356670474433, 3.2984561593277406) _gate_q_16, _gate_q_0;
  sdg _gate_q_8;
  u2(2.341627763560522, 3.7725184468758926) _gate_q_13;
  cu3_5106268688(0.7398391971853102, 3.861093147137353, 4.578490822571193) _gate_q_4, _gate_q_2;
  tdg _gate_q_5;
  cz _gate_q_10, _gate_q_7;
  p(6.222989691537317) _gate_q_3;
  iswap _gate_q_1, _gate_q_11;
}
gate cu3_5106268928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3651234719378977) _gate_q_0;
  u1(0.5379246965562183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2010900483947682, 0, -3.3651234719378977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2010900483947682, 2.8271987753816794, 0) _gate_q_1;
}
gate r_5106268880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.891926624138632, 3.2545295750094843, -3.2545295750094843) _gate_q_0;
}
gate ryy_5106259616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.095173484738439) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106256112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.762163528032517) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.584742383814556) _gate_q_0;
  ry(-1.584742383814556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.762163528032517) _gate_q_1;
}
gate cu1_5106263120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.209356660377794) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.209356660377794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.209356660377794) _gate_q_1;
}
gate r_5106269888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.538005503392903, -0.07660402561647639, 0.07660402561647639) _gate_q_0;
}
gate rzx_5106264896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7178841381995635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106261248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9711403527537605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106264848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.59712025553444) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3697732915427845) _gate_q_0;
  ry(-2.3697732915427845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.59712025553444) _gate_q_1;
}
gate rzz_5106254864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6325521699979064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106263504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.40975402801110655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106260576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.066676567024303, 2.9685380764103257, -2.9685380764103257) _gate_q_0;
}
gate xx_plus_yy_5106254432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.638063977846324) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7017594630157966) _gate_q_1;
  ry(-1.7017594630157966) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.638063977846324) _gate_q_0;
}
gate xx_plus_yy_5104272592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.497188876591789) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8640545842683258) _gate_q_1;
  ry(-0.8640545842683258) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.497188876591789) _gate_q_0;
}
gate xx_plus_yy_5104274224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1697555296797373) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4849845676727336) _gate_q_1;
  ry(-2.4849845676727336) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1697555296797373) _gate_q_0;
}
gate rzx_5104284112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2289447270776352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  u1(5.924609892502174) _gate_q_14;
  cu3_5106268928(2.4021800967895364, 2.8271987753816794, 3.903048168494116) _gate_q_11, _gate_q_13;
  cu(4.6905524301375685, 5.454859771957093, 4.334921520560475, 5.900103608535311) _gate_q_12, _gate_q_9;
  p(4.946647595309577) _gate_q_3;
  sx _gate_q_1;
  ry(5.337797641527629) _gate_q_0;
  cx _gate_q_8, _gate_q_5;
  x _gate_q_15;
  t _gate_q_6;
  x _gate_q_7;
  ch _gate_q_2, _gate_q_4;
  sx _gate_q_16;
  id _gate_q_10;
  cu(1.8937552027800617, 3.2330773772276062, 5.146892235859392, 5.438952374274291) _gate_q_10, _gate_q_11;
  ry(1.714165524310957) _gate_q_9;
  cu(3.929195132990193, 4.26147694209696, 4.230287924268451, 6.0303629072532) _gate_q_15, _gate_q_2;
  cry(5.18609355875394) _gate_q_4, _gate_q_7;
  t _gate_q_6;
  r_5106268880(5.891926624138632, 4.825325901804381) _gate_q_16;
  csx _gate_q_0, _gate_q_3;
  crx(2.0656758692958612) _gate_q_14, _gate_q_5;
  y _gate_q_12;
  crx(0.49461342314255846) _gate_q_8, _gate_q_13;
  ry(3.6127817626370353) _gate_q_1;
  cs _gate_q_0, _gate_q_9;
  sx _gate_q_13;
  ch _gate_q_16, _gate_q_12;
  ecr _gate_q_7, _gate_q_6;
  ecr _gate_q_3, _gate_q_8;
  tdg _gate_q_2;
  sxdg _gate_q_14;
  ryy_5106259616(3.095173484738439) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_10;
  cp(6.214307164559237) _gate_q_15, _gate_q_11;
  cs _gate_q_8, _gate_q_13;
  iswap _gate_q_16, _gate_q_12;
  xx_minus_yy_5106256112(3.169484767629112, 3.762163528032517) _gate_q_15, _gate_q_7;
  cu1_5106263120(2.418713320755588) _gate_q_4, _gate_q_0;
  ch _gate_q_1, _gate_q_11;
  cx _gate_q_10, _gate_q_9;
  cx _gate_q_14, _gate_q_3;
  u3(5.788125881650034, 4.361522915531487, 3.6213453900525994) _gate_q_2;
  s _gate_q_5;
  r_5106269888(5.538005503392903, 1.4941923011784202) _gate_q_6;
  sdg _gate_q_10;
  id _gate_q_15;
  iswap _gate_q_3, _gate_q_2;
  rzx_5106264896(4.7178841381995635) _gate_q_14, _gate_q_9;
  ryy_5106261248(3.9711403527537605) _gate_q_8, _gate_q_4;
  u2(1.6093198048234205, 2.069961504720954) _gate_q_6;
  ry(1.1907646063236343) _gate_q_13;
  iswap _gate_q_16, _gate_q_12;
  cz _gate_q_1, _gate_q_7;
  crx(6.182097814523765) _gate_q_5, _gate_q_0;
  p(1.5418644210348862) _gate_q_11;
  ry(4.041498770827352) _gate_q_1;
  xx_minus_yy_5106264848(4.739546583085569, 5.59712025553444) _gate_q_15, _gate_q_13;
  rzz_5106254864(0.6325521699979064) _gate_q_5, _gate_q_6;
  t _gate_q_2;
  rzz_5106263504(0.40975402801110655) _gate_q_11, _gate_q_10;
  swap _gate_q_8, _gate_q_14;
  cp(3.062639161427826) _gate_q_9, _gate_q_7;
  sxdg _gate_q_0;
  crz(0.9018165408202001) _gate_q_4, _gate_q_3;
  iswap _gate_q_12, _gate_q_16;
  crz(1.009771495392054) _gate_q_10, _gate_q_4;
  s _gate_q_5;
  cs _gate_q_3, _gate_q_1;
  cu(5.75822905182611, 1.8905307007457421, 4.970118093597399, 4.996784524258373) _gate_q_8, _gate_q_13;
  r_5106260576(3.066676567024303, 4.539334403205222) _gate_q_9;
  crx(4.920889714409765) _gate_q_14, _gate_q_16;
  sdg _gate_q_7;
  csx _gate_q_2, _gate_q_15;
  ry(1.681678997420308) _gate_q_11;
  xx_plus_yy_5106254432(3.4035189260315932, 4.638063977846324) _gate_q_6, _gate_q_12;
  t _gate_q_0;
  x _gate_q_4;
  cry(2.179414651474225) _gate_q_12, _gate_q_1;
  cu(0.8174275395321053, 0.5916008877121162, 0.4196794098471809, 3.020095366958074) _gate_q_11, _gate_q_9;
  cry(5.92220031587372) _gate_q_5, _gate_q_13;
  xx_plus_yy_5104272592(1.7281091685366516, 2.497188876591789) _gate_q_6, _gate_q_3;
  crz(2.12569581680592) _gate_q_10, _gate_q_7;
  z _gate_q_14;
  csx _gate_q_16, _gate_q_15;
  cu(4.217978902054619, 5.7296288437774265, 3.4355160009039873, 0.9986366276760094) _gate_q_8, _gate_q_2;
  h _gate_q_0;
  t _gate_q_5;
  u2(4.738184858930655, 5.80497984679651) _gate_q_16;
  y _gate_q_9;
  ecr _gate_q_3, _gate_q_1;
  u1(4.051658467979371) _gate_q_10;
  cy _gate_q_2, _gate_q_11;
  u3(2.7503611502952965, 4.456168331108918, 2.2649335350477586) _gate_q_12;
  s _gate_q_15;
  x _gate_q_7;
  xx_plus_yy_5104274224(4.969969135345467, 3.1697555296797373) _gate_q_8, _gate_q_0;
  cx _gate_q_14, _gate_q_4;
  y _gate_q_6;
  u3(6.1823787529182805, 5.203836530246864, 5.243149652815297) _gate_q_13;
  cx _gate_q_8, _gate_q_3;
  crz(2.2095896245578097) _gate_q_7, _gate_q_1;
  U(3.2689441522403624, 2.3513257540864774, 3.5544099590497114) _gate_q_6;
  p(5.912516213296127) _gate_q_16;
  iswap _gate_q_15, _gate_q_13;
  sxdg _gate_q_11;
  u2(5.8446185090887415, 4.19244751536145) _gate_q_2;
  rzx_5104284112(2.2289447270776352) _gate_q_4, _gate_q_5;
  cz _gate_q_0, _gate_q_12;
  x _gate_q_10;
  h _gate_q_9;
  sx _gate_q_14;
}