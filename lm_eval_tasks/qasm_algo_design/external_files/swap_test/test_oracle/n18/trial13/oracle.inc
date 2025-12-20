gate rzx_5070141104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.171089227877213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070128768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.971672319312537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5070132320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0928872606761668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_plus_yy_5074256576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.7109996635662625) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9678255260840014) _gate_q_1;
  ry(-1.9678255260840014) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.7109996635662625) _gate_q_0;
}
gate r_5074265744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.026214014703569568, -1.5074991614012851, 1.5074991614012851) _gate_q_0;
}
gate rxx_5074262144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9137271984052138) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rxx_5074264784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.66589885281366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5074267472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5023686969502332) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7154098806145996) _gate_q_0;
  ry(-1.7154098806145996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5023686969502332) _gate_q_1;
}
gate xx_minus_yy_5074256624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.10963831836195144) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4651074850780619) _gate_q_0;
  ry(-1.4651074850780619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.10963831836195144) _gate_q_1;
}
gate r_5074265936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5816557120686526, 3.745251458185761, -3.745251458185761) _gate_q_0;
}
gate ryy_5074265552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.072285831465868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074258400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.538532505455997) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9316940366964083) _gate_q_0;
  ry(-0.9316940366964083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.538532505455997) _gate_q_1;
}
gate rzx_5074262720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.22663516886266102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074266992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3777347831906224) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3631080416845406) _gate_q_0;
  ry(-0.3631080416845406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3777347831906224) _gate_q_1;
}
gate rzx_5074268000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4329689949543918) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074261184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.065291059513845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074259264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6740228314235437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074264304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.610606584424757, 0.8162218150923723, -0.8162218150923723) _gate_q_0;
}
gate xx_plus_yy_5074264544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7428487068235645) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0610001795426838) _gate_q_1;
  ry(-3.0610001795426838) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7428487068235645) _gate_q_0;
}
gate xx_minus_yy_5074271072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.607386599878418) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0883165962714794) _gate_q_0;
  ry(-1.0883165962714794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.607386599878418) _gate_q_1;
}
gate ryy_5074257728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1467766538427646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  p(4.043074819688172) _gate_q_5;
  tdg _gate_q_14;
  x _gate_q_15;
  cx _gate_q_6, _gate_q_12;
  u3(5.0416100993455135, 1.3290152296432567, 4.393564315502672) _gate_q_0;
  crz(2.4530341501621615) _gate_q_3, _gate_q_17;
  rzx_5070141104(3.171089227877213) _gate_q_7, _gate_q_16;
  rzx_5070128768(5.971672319312537) _gate_q_2, _gate_q_4;
  cz _gate_q_10, _gate_q_11;
  tdg _gate_q_9;
  crx(1.0040535158993498) _gate_q_1, _gate_q_13;
  y _gate_q_8;
  z _gate_q_5;
  h _gate_q_15;
  u1(2.361824222126545) _gate_q_2;
  cy _gate_q_8, _gate_q_6;
  t _gate_q_0;
  h _gate_q_11;
  cs _gate_q_13, _gate_q_9;
  rzx_5070132320(1.0928872606761668) _gate_q_3, _gate_q_12;
  cx _gate_q_14, _gate_q_16;
  dcx _gate_q_4, _gate_q_7;
  csdg _gate_q_10, _gate_q_1;
  s _gate_q_17;
  xx_plus_yy_5074256576(3.935651052168003, 5.7109996635662625) _gate_q_10, _gate_q_8;
  crz(0.257893619887028) _gate_q_14, _gate_q_7;
  p(5.6539287199954975) _gate_q_12;
  h _gate_q_9;
  z _gate_q_4;
  r_5074265744(0.026214014703569568, 0.06329716539361144) _gate_q_11;
  rxx_5074262144(1.9137271984052138) _gate_q_2, _gate_q_17;
  ch _gate_q_3, _gate_q_5;
  id _gate_q_0;
  ecr _gate_q_16, _gate_q_1;
  sx _gate_q_6;
  t _gate_q_15;
  x _gate_q_13;
  U(1.6177257959789209, 6.120138433548722, 2.297601131801913) _gate_q_10;
  rxx_5074264784(5.66589885281366) _gate_q_1, _gate_q_2;
  csx _gate_q_8, _gate_q_15;
  iswap _gate_q_0, _gate_q_17;
  crz(0.07866335247147455) _gate_q_3, _gate_q_11;
  p(2.7587040750164817) _gate_q_14;
  h _gate_q_7;
  ch _gate_q_13, _gate_q_12;
  u1(0.2517964653695797) _gate_q_5;
  ch _gate_q_16, _gate_q_9;
  sdg _gate_q_6;
  tdg _gate_q_4;
  cs _gate_q_0, _gate_q_13;
  swap _gate_q_9, _gate_q_12;
  cp(1.6756923712536862) _gate_q_11, _gate_q_16;
  xx_minus_yy_5074267472(3.4308197612291993, 0.5023686969502332) _gate_q_3, _gate_q_7;
  cz _gate_q_10, _gate_q_14;
  tdg _gate_q_4;
  cz _gate_q_6, _gate_q_8;
  tdg _gate_q_17;
  ry(3.7645925996136937) _gate_q_5;
  xx_minus_yy_5074256624(2.9302149701561238, 0.10963831836195144) _gate_q_1, _gate_q_15;
  sxdg _gate_q_2;
  ecr _gate_q_13, _gate_q_10;
  z _gate_q_1;
  cs _gate_q_14, _gate_q_8;
  y _gate_q_7;
  r_5074265936(0.5816557120686526, 5.3160477849806576) _gate_q_6;
  u3(3.0562789710897116, 3.313007890692574, 4.167514090453256) _gate_q_4;
  x _gate_q_12;
  ryy_5074265552(2.072285831465868) _gate_q_5, _gate_q_9;
  xx_minus_yy_5074258400(1.8633880733928165, 0.538532505455997) _gate_q_11, _gate_q_2;
  s _gate_q_16;
  id _gate_q_0;
  y _gate_q_17;
  sx _gate_q_15;
  rz(3.321571824624907) _gate_q_3;
  cu(4.622009863958599, 3.128273225893257, 1.9426379573779207, 5.151545271851502) _gate_q_5, _gate_q_12;
  z _gate_q_10;
  u2(5.500025485739688, 5.153977529028819) _gate_q_3;
  u3(3.926575100041822, 4.042737260710692, 4.22066445473002) _gate_q_11;
  cs _gate_q_1, _gate_q_14;
  cs _gate_q_15, _gate_q_8;
  ecr _gate_q_13, _gate_q_6;
  U(2.70723647708342, 5.5047891061060765, 5.7672511705940135) _gate_q_0;
  dcx _gate_q_2, _gate_q_9;
  U(2.4038239959081777, 5.791401275817166, 2.297998624060948) _gate_q_4;
  rzx_5074262720(0.22663516886266102) _gate_q_17, _gate_q_7;
  id _gate_q_16;
  crz(5.9820594740109865) _gate_q_3, _gate_q_1;
  xx_minus_yy_5074266992(0.7262160833690812, 2.3777347831906224) _gate_q_16, _gate_q_12;
  csdg _gate_q_9, _gate_q_5;
  rzx_5074268000(1.4329689949543918) _gate_q_2, _gate_q_14;
  crz(5.649774802325578) _gate_q_11, _gate_q_0;
  rx(3.9021111867254077) _gate_q_17;
  cz _gate_q_15, _gate_q_6;
  p(1.74201182324168) _gate_q_10;
  ryy_5074261184(6.065291059513845) _gate_q_7, _gate_q_8;
  u3(3.894560008580757, 2.2158386864935657, 1.0632111867380996) _gate_q_4;
  h _gate_q_13;
  U(3.82193295066042, 3.9458421864145983, 2.095353615372668) _gate_q_9;
  swap _gate_q_12, _gate_q_3;
  cu(2.2244217837838707, 1.7771212951873154, 0.39421648960833156, 5.21047133391858) _gate_q_14, _gate_q_6;
  rxx_5074259264(2.6740228314235437) _gate_q_5, _gate_q_15;
  r_5074264304(1.610606584424757, 2.387018141887269) _gate_q_17;
  dcx _gate_q_10, _gate_q_7;
  cu(4.30832029292048, 5.334596602888224, 6.268294799650795, 5.155950045473648) _gate_q_8, _gate_q_4;
  u2(3.454346934736356, 5.812651920565087) _gate_q_16;
  ecr _gate_q_13, _gate_q_1;
  xx_plus_yy_5074264544(6.1220003590853675, 2.7428487068235645) _gate_q_0, _gate_q_2;
  id _gate_q_11;
  crz(0.37917183176648606) _gate_q_10, _gate_q_5;
  sx _gate_q_7;
  u1(0.04205166119581852) _gate_q_1;
  s _gate_q_15;
  rx(3.1639191314468773) _gate_q_17;
  xx_minus_yy_5074271072(2.1766331925429587, 5.607386599878418) _gate_q_0, _gate_q_6;
  ryy_5074257728(1.1467766538427646) _gate_q_8, _gate_q_2;
  ry(4.4167139473195975) _gate_q_4;
  cx _gate_q_3, _gate_q_9;
  id _gate_q_16;
  u1(4.307115507082213) _gate_q_12;
  rz(3.0969834163659846) _gate_q_13;
  cu(4.422434357710169, 5.073236116210264, 5.249303492872873, 1.4239682915804799) _gate_q_11, _gate_q_14;
}
gate xx_minus_yy_5074267136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.364383175486977) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5813513638876433) _gate_q_0;
  ry(-2.5813513638876433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.364383175486977) _gate_q_1;
}
gate r_5074267328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2501471519515364, 1.9930918011598564, -1.9930918011598564) _gate_q_0;
}
gate cu1_5074268528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.724234585831951) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.724234585831951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.724234585831951) _gate_q_1;
}
gate rzz_5074269248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3548107972854214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074263440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.693016850376683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074271648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6927139146628767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074259504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.723549072491694) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0161471713010213) _gate_q_1;
  ry(-1.0161471713010213) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.723549072491694) _gate_q_0;
}
gate cu1_5074258208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2212201495364226) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2212201495364226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2212201495364226) _gate_q_1;
}
gate ryy_5074265888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.150160183051118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074262816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.76211450273324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074258448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2598177593109674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074261904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0204712480798066) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0204712480798066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0204712480798066) _gate_q_1;
}
gate cu3_5074262000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.618582858397315) _gate_q_0;
  u1(-0.6374153448044628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.005923010477719885, 0, -3.618582858397315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.005923010477719885, 4.255998203201778, 0) _gate_q_1;
}
gate ryy_5074258352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5900752195489334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074257776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5701540835501396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074258304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.408227803245872) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.408227803245872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.408227803245872) _gate_q_1;
}
gate rzx_5074258112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3703405339917477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  xx_minus_yy_5074267136(5.162702727775287, 2.364383175486977) _gate_q_0, _gate_q_5;
  ch _gate_q_12, _gate_q_4;
  u1(0.8910743579428004) _gate_q_6;
  crz(3.3792788845421877) _gate_q_2, _gate_q_16;
  ch _gate_q_17, _gate_q_13;
  r_5074267328(2.2501471519515364, 3.563888127954753) _gate_q_14;
  u2(4.0752768406868976, 0.09999245942549571) _gate_q_9;
  cu1_5074268528(3.448469171663902) _gate_q_11, _gate_q_15;
  u1(4.044996901890673) _gate_q_10;
  sdg _gate_q_7;
  cu(0.7716880019965286, 3.0182835210632617, 2.2009630922455075, 6.025381669286144) _gate_q_8, _gate_q_1;
  u3(3.076695634074242, 5.2181552895561865, 0.9946587210740054) _gate_q_3;
  cs _gate_q_2, _gate_q_8;
  rzz_5074269248(0.3548107972854214) _gate_q_13, _gate_q_5;
  y _gate_q_9;
  x _gate_q_16;
  rz(0.9839986930569654) _gate_q_7;
  sxdg _gate_q_17;
  cu(2.659518685570192, 4.280362864266188, 3.8370822849565105, 2.809734140549554) _gate_q_12, _gate_q_10;
  crz(2.926842300610393) _gate_q_4, _gate_q_0;
  t _gate_q_14;
  ryy_5074263440(4.693016850376683) _gate_q_15, _gate_q_1;
  u2(4.341352700398996, 4.173796335821091) _gate_q_11;
  id _gate_q_6;
  sx _gate_q_3;
  x _gate_q_13;
  rx(0.6826449481952466) _gate_q_16;
  ch _gate_q_6, _gate_q_12;
  x _gate_q_15;
  rzx_5074271648(1.6927139146628767) _gate_q_2, _gate_q_9;
  xx_plus_yy_5074259504(2.0322943426020426, 2.723549072491694) _gate_q_11, _gate_q_5;
  id _gate_q_7;
  cu(1.8396417990223597, 0.9038929431339583, 4.789392872819325, 3.3977179225705894) _gate_q_0, _gate_q_1;
  p(6.246155914603854) _gate_q_10;
  crz(2.6824130411562046) _gate_q_3, _gate_q_17;
  cs _gate_q_4, _gate_q_8;
  u2(0.834055632733815, 2.365205632929552) _gate_q_14;
  iswap _gate_q_1, _gate_q_11;
  tdg _gate_q_13;
  u1(2.397016606060717) _gate_q_8;
  crz(1.2522233665508222) _gate_q_9, _gate_q_0;
  cu1_5074258208(2.442440299072845) _gate_q_12, _gate_q_17;
  p(0.22338510114228258) _gate_q_14;
  tdg _gate_q_6;
  cs _gate_q_7, _gate_q_3;
  ry(3.5994242767918894) _gate_q_4;
  swap _gate_q_16, _gate_q_10;
  csdg _gate_q_2, _gate_q_15;
  h _gate_q_5;
  ryy_5074265888(4.150160183051118) _gate_q_2, _gate_q_10;
  csx _gate_q_8, _gate_q_4;
  crx(1.0018557961825594) _gate_q_12, _gate_q_14;
  rxx_5074262816(5.76211450273324) _gate_q_17, _gate_q_11;
  cs _gate_q_5, _gate_q_6;
  rx(2.581319217278869) _gate_q_16;
  cy _gate_q_13, _gate_q_9;
  rx(5.663891641328187) _gate_q_3;
  u1(3.547420985118573) _gate_q_15;
  id _gate_q_1;
  t _gate_q_7;
  h _gate_q_0;
  csdg _gate_q_15, _gate_q_4;
  U(3.917685501139742, 4.5738208925318675, 6.259554005807878) _gate_q_5;
  cz _gate_q_1, _gate_q_7;
  sx _gate_q_2;
  cu(4.977777366502327, 4.53575248241169, 5.614495079386046, 0.905632177433392) _gate_q_16, _gate_q_17;
  ch _gate_q_9, _gate_q_13;
  cp(4.471668844011548) _gate_q_14, _gate_q_12;
  ry(0.5480954755559515) _gate_q_0;
  z _gate_q_6;
  ecr _gate_q_11, _gate_q_3;
  U(2.9594435976008233, 6.119494104467626, 5.483791418826076) _gate_q_8;
  t _gate_q_10;
  cs _gate_q_2, _gate_q_6;
  z _gate_q_11;
  rxx_5074258448(3.2598177593109674) _gate_q_3, _gate_q_4;
  sdg _gate_q_5;
  y _gate_q_13;
  cs _gate_q_1, _gate_q_9;
  cu1_5074261904(2.040942496159613) _gate_q_0, _gate_q_12;
  z _gate_q_15;
  sx _gate_q_17;
  h _gate_q_8;
  ecr _gate_q_7, _gate_q_16;
  cx _gate_q_10, _gate_q_14;
  u3(5.313344615913344, 6.122754240116273, 6.01756088836485) _gate_q_7;
  cu3_5074262000(0.01184602095543977, 4.255998203201778, 2.9811675135928524) _gate_q_1, _gate_q_15;
  h _gate_q_8;
  u3(6.031096688596412, 0.8133015376751357, 2.9440624064915233) _gate_q_16;
  crz(4.019982344004204) _gate_q_4, _gate_q_10;
  ryy_5074258352(3.5900752195489334) _gate_q_13, _gate_q_17;
  ry(5.9354475014236465) _gate_q_14;
  swap _gate_q_3, _gate_q_11;
  ecr _gate_q_12, _gate_q_2;
  p(3.387324339447859) _gate_q_5;
  cy _gate_q_0, _gate_q_9;
  x _gate_q_6;
  ch _gate_q_1, _gate_q_10;
  rxx_5074257776(0.5701540835501396) _gate_q_8, _gate_q_15;
  rx(2.2764753297268228) _gate_q_2;
  s _gate_q_11;
  p(3.1115531539553) _gate_q_4;
  swap _gate_q_5, _gate_q_0;
  tdg _gate_q_14;
  x _gate_q_9;
  rz(5.890309148423185) _gate_q_16;
  h _gate_q_12;
  cry(4.087698001939327) _gate_q_3, _gate_q_13;
  cu1_5074258304(4.816455606491744) _gate_q_7, _gate_q_17;
  z _gate_q_6;
  cz _gate_q_5, _gate_q_8;
  csx _gate_q_14, _gate_q_16;
  cp(3.4220864233797115) _gate_q_2, _gate_q_11;
  rzx_5074258112(0.3703405339917477) _gate_q_9, _gate_q_3;
  csdg _gate_q_10, _gate_q_0;
  sx _gate_q_4;
  s _gate_q_1;
  t _gate_q_17;
  U(1.7393132496569281, 2.784664740009615, 1.3956686404918963) _gate_q_15;
  ch _gate_q_13, _gate_q_6;
  ch _gate_q_7, _gate_q_12;
}