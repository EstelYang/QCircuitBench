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
gate cu1_5074140912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2229151481699794) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2229151481699794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2229151481699794) _gate_q_1;
}
gate ryy_5074134048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.009829082965706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074125984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4125065260836596) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4125065260836596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4125065260836596) _gate_q_1;
}
gate ryy_5074138128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8629879601701633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074129200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.248900379597754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074134144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.048871787683846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu3_5074136496(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6075301046328128) _gate_q_0;
  u1(-0.42520988744036226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.742848011607112, 0, -3.6075301046328128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.742848011607112, 4.032739992073175, 0) _gate_q_1;
}
gate cu3_5074139280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7580688062607392) _gate_q_0;
  u1(-2.5845863156500237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8877934144768315, 0, -2.7580688062607392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8877934144768315, 5.342655121910763, 0) _gate_q_1;
}
gate r_5074133088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.913613731915265, -0.8286374677816365, 0.8286374677816365) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate rzz_5074132656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8055546688998207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074134864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2622925760534492) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.603125597460922) _gate_q_1;
  ry(-2.603125597460922) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2622925760534492) _gate_q_0;
}
gate ryy_5074128816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4765028452441205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074134096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.098249809173553, 3.9916190008202603, -3.9916190008202603) _gate_q_0;
}
gate xx_plus_yy_5074134336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.890556266179333) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8288526317615248) _gate_q_1;
  ry(-0.8288526317615248) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.890556266179333) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5074137792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.25895473794873997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074140624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6091368961131987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074129824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.07190604266195413) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.07190604266195413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.07190604266195413) _gate_q_1;
}
gate xx_plus_yy_5074128336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.565933933922336) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.841197332054441) _gate_q_1;
  ry(-1.841197332054441) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.565933933922336) _gate_q_0;
}
gate xx_plus_yy_5074134240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5445510691916002) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7927303056305264) _gate_q_1;
  ry(-2.7927303056305264) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5445510691916002) _gate_q_0;
}
gate cu1_5074133712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4009540930408015) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4009540930408015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4009540930408015) _gate_q_1;
}
gate cu3_5074137360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9830262675863484) _gate_q_0;
  u1(0.7074183097604856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3331873849568667, 0, -0.9830262675863484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3331873849568667, 0.2756079578258628, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  ry(1.0626333311558616) _gate_q_2;
  sx _gate_q_9;
  rz(4.042026054613003) _gate_q_13;
  swap _gate_q_15, _gate_q_8;
  sx _gate_q_17;
  rx(1.3689020506694054) _gate_q_6;
  tdg _gate_q_11;
  csdg _gate_q_5, _gate_q_10;
  cx _gate_q_4, _gate_q_14;
  dcx _gate_q_16, _gate_q_1;
  cu1_5074140912(4.445830296339959) _gate_q_12, _gate_q_3;
  ryy_5074134048(6.009829082965706) _gate_q_7, _gate_q_0;
  t _gate_q_9;
  cu1_5074125984(2.825013052167319) _gate_q_2, _gate_q_3;
  ryy_5074138128(3.8629879601701633) _gate_q_0, _gate_q_13;
  rz(4.931852198136537) _gate_q_6;
  rzz_5074129200(6.248900379597754) _gate_q_14, _gate_q_1;
  crz(4.2772415462366) _gate_q_5, _gate_q_7;
  dcx _gate_q_10, _gate_q_4;
  rzx_5074134144(6.048871787683846) _gate_q_12, _gate_q_16;
  t _gate_q_11;
  rz(3.7047381476665953) _gate_q_8;
  cz _gate_q_17, _gate_q_15;
  dcx _gate_q_5, _gate_q_17;
  swap _gate_q_13, _gate_q_7;
  ecr _gate_q_8, _gate_q_0;
  rz(5.8787143632110075) _gate_q_1;
  y _gate_q_3;
  tdg _gate_q_2;
  cu3_5074136496(5.485696023214224, 4.032739992073175, 3.1823202171924505) _gate_q_9, _gate_q_10;
  z _gate_q_16;
  csdg _gate_q_4, _gate_q_6;
  cz _gate_q_14, _gate_q_12;
  cu3_5074139280(1.775586828953663, 5.342655121910763, 0.17348249061071538) _gate_q_15, _gate_q_11;
  u1(0.42671878523955853) _gate_q_6;
  r_5074133088(5.913613731915265, 0.7421588590132601) _gate_q_11;
  dcx _gate_q_10, _gate_q_16;
  crz(2.6481606032166116) _gate_q_0, _gate_q_17;
  sx _gate_q_8;
  u1(1.6749706735593886) _gate_q_13;
  ecr _gate_q_12, _gate_q_9;
  iswap _gate_q_14, _gate_q_1;
  csx _gate_q_3, _gate_q_2;
  cz _gate_q_7, _gate_q_5;
  z _gate_q_15;
  z _gate_q_4;
  tdg _gate_q_4;
  csdg _gate_q_11, _gate_q_12;
  cx _gate_q_17, _gate_q_15;
  ecr _gate_q_6, _gate_q_14;
  u1(2.272857719752414) _gate_q_5;
  rz(3.678869737554588) _gate_q_3;
  y _gate_q_8;
  csdg _gate_q_7, _gate_q_16;
  rzz_5074132656(0.8055546688998207) _gate_q_2, _gate_q_9;
  cx _gate_q_13, _gate_q_1;
  cu(3.380502962457306, 3.3790715523515993, 1.652742353112146, 1.927767762348) _gate_q_0, _gate_q_10;
  crx(5.16395401162087) _gate_q_6, _gate_q_3;
  iswap _gate_q_1, _gate_q_15;
  xx_plus_yy_5074134864(5.206251194921844, 0.2622925760534492) _gate_q_8, _gate_q_5;
  cp(4.466469210474667) _gate_q_4, _gate_q_11;
  cu(1.2809225001870523, 3.722300952014472, 1.9229876859982538, 4.297265375105774) _gate_q_9, _gate_q_14;
  dcx _gate_q_10, _gate_q_13;
  ryy_5074128816(3.4765028452441205) _gate_q_7, _gate_q_2;
  tdg _gate_q_0;
  cp(2.7503459974877464) _gate_q_12, _gate_q_17;
  r_5074134096(4.098249809173553, 5.562415327615157) _gate_q_16;
  xx_plus_yy_5074134336(1.6577052635230496, 5.890556266179333) _gate_q_6, _gate_q_14;
  cs _gate_q_15, _gate_q_5;
  cz _gate_q_11, _gate_q_3;
  s _gate_q_16;
  cu(4.78285464547008, 2.0375252072409635, 3.566539761143308, 2.330930090898636) _gate_q_4, _gate_q_17;
  cp(1.139058454991262) _gate_q_9, _gate_q_0;
  csdg _gate_q_7, _gate_q_13;
  cz _gate_q_8, _gate_q_2;
  t _gate_q_10;
  p(1.8369467670680064) _gate_q_1;
  x _gate_q_12;
  ry(2.8515194011675584) _gate_q_6;
  rzx_5074137792(0.25895473794873997) _gate_q_8, _gate_q_5;
  cs _gate_q_15, _gate_q_13;
  csdg _gate_q_2, _gate_q_3;
  h _gate_q_9;
  rx(0.5221811902045719) _gate_q_17;
  h _gate_q_1;
  u2(1.7379068488838363, 2.2434389294087285) _gate_q_4;
  tdg _gate_q_10;
  rzz_5074140624(1.6091368961131987) _gate_q_16, _gate_q_0;
  csdg _gate_q_11, _gate_q_12;
  rz(1.5109162254894652) _gate_q_7;
  tdg _gate_q_14;
  cu1_5074129824(0.14381208532390827) _gate_q_10, _gate_q_3;
  xx_plus_yy_5074128336(3.682394664108882, 3.565933933922336) _gate_q_6, _gate_q_7;
  cx _gate_q_1, _gate_q_12;
  cz _gate_q_11, _gate_q_17;
  xx_plus_yy_5074134240(5.585460611261053, 3.5445510691916002) _gate_q_13, _gate_q_15;
  sx _gate_q_2;
  u3(5.964402755734757, 5.435325371463355, 5.1796540152461015) _gate_q_8;
  u3(1.6717278979881334, 0.9762143087760626, 1.8571901505253678) _gate_q_0;
  U(3.800094607726285, 3.638945156364952, 5.8865837658246845) _gate_q_9;
  cu1_5074133712(2.801908186081603) _gate_q_4, _gate_q_5;
  u1(3.5089921241503887) _gate_q_14;
  tdg _gate_q_16;
  cu3_5074137360(2.6663747699137335, 0.2756079578258628, 1.690444577346834) _gate_q_15, _gate_q_5;
  y _gate_q_4;
  u2(0.5601344219799061, 1.4340795140606002) _gate_q_6;
  cz _gate_q_12, _gate_q_1;
  ch _gate_q_8, _gate_q_2;
  cx _gate_q_3, _gate_q_10;
  cz _gate_q_7, _gate_q_11;
  cx _gate_q_13, _gate_q_16;
  U(4.024942655470168, 0.03916066787973335, 1.2520611343460073) _gate_q_0;
  id _gate_q_9;
  cry(4.9910928486972965) _gate_q_14, _gate_q_17;
}
gate ryy_5074288416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.784655749874954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074285440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3285120402920825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074288608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8124741499965614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074282752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.710840736592094, -1.3327811989799028, 1.3327811989799028) _gate_q_0;
}
gate cu3_5074278240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.810965001695089) _gate_q_0;
  u1(1.840233289787216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.266457837213212, 0, -3.810965001695089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.266457837213212, 1.9707317119078727, 0) _gate_q_1;
}
gate xx_minus_yy_5074278048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.544803528405036) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7732842965699878) _gate_q_0;
  ry(-1.7732842965699878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.544803528405036) _gate_q_1;
}
gate xx_plus_yy_5074282896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.581191535242123) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3293936002435034) _gate_q_1;
  ry(-2.3293936002435034) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.581191535242123) _gate_q_0;
}
gate rxx_5074282704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.162910765765654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074287216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5699856797522019) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074285488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.3427421955897785, 3.3641276560020232, -3.3641276560020232) _gate_q_0;
}
gate xx_plus_yy_5074275168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.631837571188662) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8304040153966672) _gate_q_1;
  ry(-1.8304040153966672) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.631837571188662) _gate_q_0;
}
gate r_5074287648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.618656412115024, 4.057213128397261, -4.057213128397261) _gate_q_0;
}
gate xx_plus_yy_5074287936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.313306942602417) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8455713168283445) _gate_q_1;
  ry(-2.8455713168283445) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.313306942602417) _gate_q_0;
}
gate rzz_5074279824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1674256047398284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074279680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.197560753928983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074272768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.493975218417876, 1.2090821864501091, -1.2090821864501091) _gate_q_0;
}
gate cu1_5074283952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.627835928505991) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.627835928505991) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.627835928505991) _gate_q_1;
}
gate xx_minus_yy_5074274496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7736348851181967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0259504715081227) _gate_q_0;
  ry(-3.0259504715081227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7736348851181967) _gate_q_1;
}
gate cu1_5074275360(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.834224491560392) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.834224491560392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.834224491560392) _gate_q_1;
}
gate cu1_5074279104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4982835060083046) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4982835060083046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4982835060083046) _gate_q_1;
}
gate xx_minus_yy_5074287072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6437565501130263) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7576696520279405) _gate_q_0;
  ry(-2.7576696520279405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6437565501130263) _gate_q_1;
}
gate rzz_5074279872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.190074189675402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074275456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.802248669337384) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.412290938595997) _gate_q_0;
  ry(-2.412290938595997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.802248669337384) _gate_q_1;
}
gate rzx_5074277760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2944250372139936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cs _gate_q_11, _gate_q_4;
  swap _gate_q_1, _gate_q_13;
  cu(0.3398355635110387, 1.457076056177687, 6.06558348710286, 5.222883550177859) _gate_q_5, _gate_q_10;
  cz _gate_q_16, _gate_q_12;
  csx _gate_q_6, _gate_q_3;
  ch _gate_q_14, _gate_q_2;
  ryy_5074288416(4.784655749874954) _gate_q_15, _gate_q_8;
  cs _gate_q_7, _gate_q_0;
  ryy_5074285440(5.3285120402920825) _gate_q_9, _gate_q_17;
  rzz_5074288608(0.8124741499965614) _gate_q_9, _gate_q_14;
  iswap _gate_q_16, _gate_q_1;
  dcx _gate_q_12, _gate_q_5;
  s _gate_q_10;
  r_5074282752(4.710840736592094, 0.23801512781499387) _gate_q_3;
  cx _gate_q_0, _gate_q_7;
  sdg _gate_q_17;
  y _gate_q_15;
  sdg _gate_q_2;
  cu3_5074278240(4.532915674426424, 1.9707317119078727, 5.651198291482305) _gate_q_11, _gate_q_8;
  ch _gate_q_4, _gate_q_13;
  z _gate_q_6;
  swap _gate_q_16, _gate_q_14;
  u2(5.438662024250246, 1.5176534932735732) _gate_q_2;
  cs _gate_q_12, _gate_q_9;
  cx _gate_q_10, _gate_q_11;
  rx(5.506133600573943) _gate_q_1;
  rx(5.512940285920128) _gate_q_7;
  cy _gate_q_13, _gate_q_6;
  ecr _gate_q_8, _gate_q_17;
  xx_minus_yy_5074278048(3.5465685931399755, 5.544803528405036) _gate_q_3, _gate_q_5;
  crx(2.1363976294450158) _gate_q_15, _gate_q_4;
  u1(1.384183041201741) _gate_q_0;
  xx_plus_yy_5074282896(4.658787200487007, 3.581191535242123) _gate_q_17, _gate_q_1;
  x _gate_q_4;
  rxx_5074282704(5.162910765765654) _gate_q_0, _gate_q_6;
  ryy_5074287216(0.5699856797522019) _gate_q_13, _gate_q_8;
  ch _gate_q_7, _gate_q_3;
  swap _gate_q_11, _gate_q_14;
  cry(2.238481096815009) _gate_q_16, _gate_q_9;
  h _gate_q_2;
  h _gate_q_12;
  r_5074285488(5.3427421955897785, 4.93492398279692) _gate_q_5;
  sxdg _gate_q_10;
  u2(5.149809822278755, 0.7067872591353125) _gate_q_15;
  xx_plus_yy_5074275168(3.6608080307933344, 3.631837571188662) _gate_q_0, _gate_q_8;
  sx _gate_q_7;
  cz _gate_q_3, _gate_q_13;
  ry(0.8847678103094135) _gate_q_9;
  p(5.252313385157357) _gate_q_15;
  r_5074287648(5.618656412115024, 5.628009455192157) _gate_q_2;
  ch _gate_q_11, _gate_q_17;
  sx _gate_q_6;
  cp(4.84725775729387) _gate_q_12, _gate_q_14;
  csx _gate_q_5, _gate_q_16;
  rz(1.3125302972819763) _gate_q_10;
  ry(3.834423984580942) _gate_q_1;
  z _gate_q_4;
  p(5.916076173194585) _gate_q_7;
  ry(2.044572379141301) _gate_q_11;
  dcx _gate_q_12, _gate_q_5;
  cy _gate_q_2, _gate_q_4;
  xx_plus_yy_5074287936(5.691142633656689, 5.313306942602417) _gate_q_1, _gate_q_6;
  csx _gate_q_0, _gate_q_13;
  cry(5.037643400925776) _gate_q_16, _gate_q_15;
  rz(0.3292246741507177) _gate_q_3;
  crx(3.348091948776284) _gate_q_17, _gate_q_9;
  h _gate_q_14;
  t _gate_q_10;
  sx _gate_q_8;
  csdg _gate_q_14, _gate_q_3;
  cu(2.9126556554176135, 5.035176007443565, 0.3018314059610271, 4.538595659451684) _gate_q_2, _gate_q_11;
  swap _gate_q_7, _gate_q_4;
  u3(1.5324907522258289, 3.6683865747577395, 6.194420938594985) _gate_q_16;
  rzz_5074279824(1.1674256047398284) _gate_q_0, _gate_q_17;
  cp(2.4085656142427125) _gate_q_12, _gate_q_10;
  tdg _gate_q_13;
  u3(0.12156805142651429, 5.76648460365513, 2.2971604014851645) _gate_q_6;
  t _gate_q_8;
  sxdg _gate_q_9;
  h _gate_q_1;
  u1(0.08442055402622249) _gate_q_15;
  y _gate_q_5;
  rzx_5074279680(4.197560753928983) _gate_q_1, _gate_q_13;
  tdg _gate_q_16;
  r_5074272768(5.493975218417876, 2.7798785132450057) _gate_q_3;
  u2(6.095924324345341, 2.79638077572747) _gate_q_7;
  cu1_5074283952(5.255671857011982) _gate_q_12, _gate_q_14;
  tdg _gate_q_9;
  rx(1.438654676339336) _gate_q_11;
  sx _gate_q_6;
  dcx _gate_q_10, _gate_q_0;
  xx_minus_yy_5074274496(6.051900943016245, 1.7736348851181967) _gate_q_2, _gate_q_15;
  x _gate_q_17;
  sxdg _gate_q_5;
  cu1_5074275360(3.668448983120784) _gate_q_8, _gate_q_4;
  cu1_5074279104(2.9965670120166092) _gate_q_17, _gate_q_0;
  xx_minus_yy_5074287072(5.515339304055881, 0.6437565501130263) _gate_q_3, _gate_q_2;
  z _gate_q_7;
  rz(3.3223298507138597) _gate_q_16;
  s _gate_q_12;
  crz(0.5886624093223622) _gate_q_1, _gate_q_6;
  s _gate_q_10;
  ch _gate_q_5, _gate_q_11;
  h _gate_q_13;
  h _gate_q_14;
  dcx _gate_q_4, _gate_q_8;
  ry(2.57124986295349) _gate_q_9;
  sxdg _gate_q_15;
  rz(1.806726845616111) _gate_q_9;
  rzz_5074279872(6.190074189675402) _gate_q_15, _gate_q_17;
  dcx _gate_q_14, _gate_q_2;
  iswap _gate_q_4, _gate_q_6;
  id _gate_q_10;
  csx _gate_q_0, _gate_q_3;
  xx_minus_yy_5074275456(4.824581877191994, 4.802248669337384) _gate_q_11, _gate_q_8;
  y _gate_q_16;
  rzx_5074277760(2.2944250372139936) _gate_q_1, _gate_q_12;
  x _gate_q_13;
  ecr _gate_q_5, _gate_q_7;
}