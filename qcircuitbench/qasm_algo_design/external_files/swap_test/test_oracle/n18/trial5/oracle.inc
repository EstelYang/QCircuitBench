gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5104283488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.374335899864571) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1538122878839318) _gate_q_0;
  ry(-0.1538122878839318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.374335899864571) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5104286992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7212918507845743) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7560762668362782) _gate_q_0;
  ry(-1.7560762668362782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7212918507845743) _gate_q_1;
}
gate xx_minus_yy_5104278496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.5722012990167182) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.189040331202651) _gate_q_0;
  ry(-0.189040331202651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.5722012990167182) _gate_q_1;
}
gate r_5104275952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8413239129636456, 0.3104920932171422, -0.3104920932171422) _gate_q_0;
}
gate rzz_5107781648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.329346558512443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104286800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9192565285536025, 3.5168752471037337, -3.5168752471037337) _gate_q_0;
}
gate xx_minus_yy_5104277008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.156410440364655) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.661187744237696) _gate_q_0;
  ry(-2.661187744237696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.156410440364655) _gate_q_1;
}
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
gate xx_minus_yy_5104275184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1210473327271429) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.026179664798623103) _gate_q_0;
  ry(-0.026179664798623103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1210473327271429) _gate_q_1;
}
gate xx_minus_yy_5104284208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.148467353672368) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0554141784261153) _gate_q_0;
  ry(-1.0554141784261153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.148467353672368) _gate_q_1;
}
gate cu1_5104285408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.891156523171395) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.891156523171395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.891156523171395) _gate_q_1;
}
gate ryy_5104280704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.038847150158002275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5104286848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.11597008723327024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104281472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.30044619332779776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5104281328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8676024441933559) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.53842128479932) _gate_q_0;
  ry(-2.53842128479932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8676024441933559) _gate_q_1;
}
gate rzx_5104285024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.07990420964179197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5104281808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.834601742407686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5104280416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.809619519071926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104275472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.03685013016720021, 3.988164084547143, -3.988164084547143) _gate_q_0;
}
gate rxx_5104278544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.857013993348377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5104280608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.225949917602221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104277104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6061114748479907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5104284544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.344294697375685) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104275568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5239626327625415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5104281616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3138843210098947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5104287424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.220451866013943, 3.140595444925034, -3.140595444925034) _gate_q_0;
}
gate rzz_5104276288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9975183409193926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  xx_minus_yy_5104283488(0.3076245757678636, 3.374335899864571) _gate_q_11, _gate_q_17;
  z _gate_q_1;
  ecr _gate_q_9, _gate_q_4;
  ch _gate_q_8, _gate_q_5;
  cz _gate_q_7, _gate_q_0;
  crx(4.233576680500875) _gate_q_10, _gate_q_15;
  ecr _gate_q_2, _gate_q_6;
  cs _gate_q_16, _gate_q_3;
  xx_minus_yy_5104286992(3.5121525336725563, 3.7212918507845743) _gate_q_12, _gate_q_13;
  id _gate_q_14;
  xx_minus_yy_5104278496(0.378080662405302, 2.5722012990167182) _gate_q_16, _gate_q_0;
  u1(4.657111884703958) _gate_q_4;
  cx _gate_q_3, _gate_q_17;
  cx _gate_q_2, _gate_q_10;
  id _gate_q_14;
  s _gate_q_15;
  cp(1.8070984405969952) _gate_q_8, _gate_q_13;
  x _gate_q_9;
  rx(1.8221091690923552) _gate_q_5;
  ry(1.118918673064519) _gate_q_12;
  sx _gate_q_6;
  r_5104275952(3.8413239129636456, 1.8812884200120388) _gate_q_11;
  z _gate_q_1;
  u1(6.264172365053045) _gate_q_7;
  rzz_5107781648(5.329346558512443) _gate_q_12, _gate_q_4;
  sdg _gate_q_11;
  cz _gate_q_2, _gate_q_5;
  p(5.369679248333445) _gate_q_14;
  cry(1.0333251011449744) _gate_q_17, _gate_q_0;
  r_5104286800(0.9192565285536025, 5.08767157389863) _gate_q_9;
  z _gate_q_3;
  xx_minus_yy_5104277008(5.322375488475392, 0.156410440364655) _gate_q_15, _gate_q_16;
  h _gate_q_7;
  U(3.459029959252346, 1.4882400526165218, 0.956395256916437) _gate_q_10;
  cs _gate_q_13, _gate_q_8;
  cry(1.5612119548242067) _gate_q_6, _gate_q_1;
  csdg _gate_q_12, _gate_q_3;
  dcx _gate_q_8, _gate_q_0;
  u3(1.5825181752685666, 5.031191152496087, 4.685047183209345) _gate_q_2;
  sxdg _gate_q_11;
  xx_minus_yy_5104275184(0.05235932959724621, 1.1210473327271429) _gate_q_4, _gate_q_17;
  u1(1.2308149124914147) _gate_q_14;
  tdg _gate_q_16;
  cz _gate_q_10, _gate_q_7;
  xx_minus_yy_5104284208(2.1108283568522306, 3.148467353672368) _gate_q_5, _gate_q_9;
  cu1_5104285408(5.78231304634279) _gate_q_1, _gate_q_13;
  id _gate_q_6;
  id _gate_q_15;
  dcx _gate_q_4, _gate_q_17;
  ryy_5104280704(0.038847150158002275) _gate_q_15, _gate_q_16;
  cy _gate_q_2, _gate_q_12;
  id _gate_q_11;
  csx _gate_q_3, _gate_q_0;
  cs _gate_q_9, _gate_q_6;
  csx _gate_q_1, _gate_q_13;
  ryy_5104286848(0.11597008723327024) _gate_q_8, _gate_q_14;
  csdg _gate_q_5, _gate_q_7;
  rz(4.120848710165115) _gate_q_10;
  id _gate_q_16;
  rxx_5104281472(0.30044619332779776) _gate_q_14, _gate_q_13;
  ecr _gate_q_0, _gate_q_6;
  u3(0.027618457398972392, 1.6939710158809254, 5.810301478348013) _gate_q_4;
  h _gate_q_8;
  sx _gate_q_11;
  tdg _gate_q_17;
  crz(2.515705943618215) _gate_q_7, _gate_q_9;
  xx_minus_yy_5104281328(5.07684256959864, 1.8676024441933559) _gate_q_15, _gate_q_1;
  rzx_5104285024(0.07990420964179197) _gate_q_12, _gate_q_5;
  s _gate_q_2;
  ryy_5104281808(5.834601742407686) _gate_q_10, _gate_q_3;
  u3(1.6148802635537594, 0.10907118946102473, 2.2597807447829674) _gate_q_5;
  rzx_5104280416(4.809619519071926) _gate_q_4, _gate_q_8;
  u2(5.112364106198624, 0.8796437355957282) _gate_q_16;
  crz(2.623391249830611) _gate_q_11, _gate_q_9;
  rz(0.8814752069318392) _gate_q_15;
  id _gate_q_13;
  rx(5.385197755444325) _gate_q_0;
  z _gate_q_2;
  r_5104275472(0.03685013016720021, 5.558960411342039) _gate_q_17;
  id _gate_q_6;
  u2(5.1023894968068015, 2.4847246728754446) _gate_q_12;
  U(6.117256273191828, 0.17322264635229645, 0.920996530853914) _gate_q_3;
  ch _gate_q_14, _gate_q_7;
  rxx_5104278544(2.857013993348377) _gate_q_1, _gate_q_10;
  s _gate_q_12;
  u3(5.919289687911788, 3.432036961183865, 4.240814685894109) _gate_q_15;
  id _gate_q_7;
  u2(6.025282844529239, 2.5063872387966626) _gate_q_2;
  cy _gate_q_8, _gate_q_14;
  ry(4.303974260881129) _gate_q_1;
  csdg _gate_q_5, _gate_q_0;
  crz(2.432933324755753) _gate_q_9, _gate_q_6;
  cu(3.6756867148104355, 5.448615405969279, 4.827363100691834, 1.9018490876421805) _gate_q_13, _gate_q_10;
  dcx _gate_q_16, _gate_q_17;
  crz(2.1208694977748013) _gate_q_3, _gate_q_4;
  ry(1.5186908791204234) _gate_q_11;
  sx _gate_q_14;
  cy _gate_q_9, _gate_q_17;
  ecr _gate_q_3, _gate_q_13;
  ryy_5104280608(3.225949917602221) _gate_q_4, _gate_q_6;
  rxx_5104277104(0.6061114748479907) _gate_q_10, _gate_q_1;
  U(2.057986585191698, 2.4284840748281677, 0.6683878487219997) _gate_q_15;
  u1(2.0286482296825894) _gate_q_2;
  crz(3.5527257255714786) _gate_q_0, _gate_q_12;
  rzz_5104284544(2.344294697375685) _gate_q_7, _gate_q_11;
  crz(1.5009282234612698) _gate_q_5, _gate_q_16;
  sdg _gate_q_8;
  ryy_5104275568(3.5239626327625415) _gate_q_13, _gate_q_6;
  rzx_5104281616(1.3138843210098947) _gate_q_16, _gate_q_14;
  id _gate_q_7;
  cry(3.648964179817371) _gate_q_4, _gate_q_2;
  cx _gate_q_5, _gate_q_17;
  z _gate_q_0;
  ry(4.475261190995848) _gate_q_10;
  cp(1.9643092327733898) _gate_q_3, _gate_q_9;
  iswap _gate_q_15, _gate_q_12;
  r_5104287424(4.220451866013943, 4.7113917717199305) _gate_q_8;
  rzz_5104276288(1.9975183409193926) _gate_q_11, _gate_q_1;
}
gate ryy_5104283248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.509001941800372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104281424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2272634299570075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5104277488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6469843580777452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5104275808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7607113429259758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104283104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7535819202732386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5104277632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.267025775968267, 3.010322707348342, -3.010322707348342) _gate_q_0;
}
gate cu3_5104271488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.142097562707644) _gate_q_0;
  u1(0.6426842245807713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8934870990798003, 0, -4.142097562707644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8934870990798003, 3.499413338126872, 0) _gate_q_1;
}
gate ryy_5104271872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7786472169676257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104287664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3196489857408262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5104279216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2596081493967908) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1066582557157028) _gate_q_1;
  ry(-2.1066582557157028) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2596081493967908) _gate_q_0;
}
gate cu3_5104280224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.09865955415548927) _gate_q_0;
  u1(0.07239240267375771) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4977742244168287, 0, -0.09865955415548927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4977742244168287, 0.02626715148173156, 0) _gate_q_1;
}
gate cu1_5104282192(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.467105224111676) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.467105224111676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.467105224111676) _gate_q_1;
}
gate xx_minus_yy_5104280848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4871026136452337) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5719371775097595) _gate_q_0;
  ry(-2.5719371775097595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4871026136452337) _gate_q_1;
}
gate rzz_5104279504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.080111663841837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104274800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9246930445109545, -1.0461110548571708, 1.0461110548571708) _gate_q_0;
}
gate xx_minus_yy_5104282624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.04277260805505) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.002444341199100674) _gate_q_0;
  ry(-0.002444341199100674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.04277260805505) _gate_q_1;
}
gate r_5104279696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.968848404807601, 1.728407074673231, -1.728407074673231) _gate_q_0;
}
gate rzx_5104278688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3262893599251195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5104273696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8898525995603632) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8898525995603632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8898525995603632) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  sxdg _gate_q_16;
  cy _gate_q_6, _gate_q_11;
  id _gate_q_12;
  p(0.3907592998670026) _gate_q_14;
  u3(2.117904894983906, 4.177723225331789, 1.2279950857761068) _gate_q_2;
  ryy_5104283248(5.509001941800372) _gate_q_0, _gate_q_8;
  rxx_5104281424(2.2272634299570075) _gate_q_13, _gate_q_1;
  sxdg _gate_q_3;
  id _gate_q_5;
  x _gate_q_4;
  dcx _gate_q_15, _gate_q_17;
  rz(3.7752321297152065) _gate_q_10;
  rzz_5104277488(0.6469843580777452) _gate_q_9, _gate_q_7;
  sx _gate_q_15;
  x _gate_q_17;
  tdg _gate_q_11;
  ry(3.0909891280023065) _gate_q_13;
  ch _gate_q_14, _gate_q_8;
  sdg _gate_q_16;
  cz _gate_q_3, _gate_q_9;
  crz(0.28240683235562414) _gate_q_10, _gate_q_7;
  cry(1.1205221452487015) _gate_q_5, _gate_q_4;
  cx _gate_q_6, _gate_q_2;
  rzx_5104275808(3.7607113429259758) _gate_q_12, _gate_q_0;
  u3(1.1760217445503993, 1.6138018925048783, 2.294888262226812) _gate_q_1;
  cz _gate_q_0, _gate_q_1;
  x _gate_q_13;
  rxx_5104283104(1.7535819202732386) _gate_q_11, _gate_q_8;
  cry(0.25778833950390406) _gate_q_6, _gate_q_17;
  csx _gate_q_4, _gate_q_16;
  cp(5.752049947401808) _gate_q_2, _gate_q_5;
  swap _gate_q_14, _gate_q_12;
  r_5104277632(2.267025775968267, 4.581119034143239) _gate_q_7;
  dcx _gate_q_10, _gate_q_15;
  t _gate_q_9;
  sx _gate_q_3;
  cu3_5104271488(5.786974198159601, 3.499413338126872, 4.784781787288415) _gate_q_1, _gate_q_2;
  u3(5.2179331922467265, 3.374227113001213, 6.222451524802901) _gate_q_11;
  csx _gate_q_6, _gate_q_9;
  ch _gate_q_3, _gate_q_16;
  ryy_5104271872(1.7786472169676257) _gate_q_8, _gate_q_5;
  iswap _gate_q_14, _gate_q_13;
  csdg _gate_q_17, _gate_q_4;
  u3(5.810453219040125, 4.366438534395391, 3.7778775329774943) _gate_q_10;
  cp(0.8538674764499252) _gate_q_0, _gate_q_12;
  tdg _gate_q_15;
  x _gate_q_7;
  cx _gate_q_17, _gate_q_16;
  sx _gate_q_10;
  ry(1.4264478905152165) _gate_q_14;
  swap _gate_q_1, _gate_q_4;
  ryy_5104287664(3.3196489857408262) _gate_q_9, _gate_q_2;
  cy _gate_q_12, _gate_q_8;
  rx(2.5198258665695477) _gate_q_3;
  cry(2.9131675981085463) _gate_q_6, _gate_q_15;
  dcx _gate_q_11, _gate_q_7;
  s _gate_q_5;
  tdg _gate_q_13;
  sdg _gate_q_0;
  tdg _gate_q_0;
  csx _gate_q_16, _gate_q_9;
  swap _gate_q_1, _gate_q_7;
  cu(3.8035463266520315, 3.9746326080886716, 0.7538223508008512, 0.04649477534253987) _gate_q_5, _gate_q_11;
  t _gate_q_13;
  cz _gate_q_3, _gate_q_10;
  u1(2.691750714348089) _gate_q_8;
  u2(2.6185093979550214, 2.64874070335529) _gate_q_15;
  cp(0.8241233494089154) _gate_q_12, _gate_q_2;
  p(2.546272109659513) _gate_q_17;
  z _gate_q_6;
  xx_plus_yy_5104279216(4.2133165114314055, 0.2596081493967908) _gate_q_4, _gate_q_14;
  sx _gate_q_8;
  cu3_5104280224(0.9955484488336575, 0.02626715148173156, 0.17105195682924698) _gate_q_14, _gate_q_15;
  cu1_5104282192(4.934210448223352) _gate_q_7, _gate_q_4;
  csdg _gate_q_10, _gate_q_17;
  xx_minus_yy_5104280848(5.143874355019519, 0.4871026136452337) _gate_q_13, _gate_q_1;
  rzz_5104279504(5.080111663841837) _gate_q_3, _gate_q_5;
  r_5104274800(3.9246930445109545, 0.5246852719377257) _gate_q_9;
  rx(1.3756254272345263) _gate_q_0;
  u1(1.9500535454892154) _gate_q_12;
  rx(2.472124954356441) _gate_q_16;
  cs _gate_q_6, _gate_q_2;
  u3(4.149472362707455, 3.577886570244678, 6.207356698070177) _gate_q_11;
  p(3.4649308488835384) _gate_q_14;
  crx(5.537500170887297) _gate_q_10, _gate_q_11;
  xx_minus_yy_5104282624(0.004888682398201348, 5.04277260805505) _gate_q_4, _gate_q_15;
  sdg _gate_q_7;
  u2(2.9438681125598856, 2.4635983660430862) _gate_q_1;
  s _gate_q_16;
  r_5104279696(2.968848404807601, 3.2992034014681275) _gate_q_17;
  crz(4.339935779189273) _gate_q_0, _gate_q_6;
  sdg _gate_q_8;
  cp(1.8037817663736422) _gate_q_5, _gate_q_9;
  U(0.9001160088614484, 3.444924585718888, 3.829396185364434) _gate_q_12;
  cy _gate_q_2, _gate_q_3;
  id _gate_q_13;
  rzx_5104278688(3.3262893599251195) _gate_q_4, _gate_q_10;
  ecr _gate_q_3, _gate_q_12;
  ch _gate_q_2, _gate_q_6;
  U(0.4358691602585837, 5.9269553036575795, 0.6763210295806923) _gate_q_1;
  csx _gate_q_15, _gate_q_13;
  csx _gate_q_11, _gate_q_7;
  y _gate_q_9;
  h _gate_q_5;
  swap _gate_q_14, _gate_q_17;
  t _gate_q_8;
  y _gate_q_0;
  z _gate_q_16;
  cu1_5104273696(3.7797051991207264) _gate_q_14, _gate_q_15;
  cy _gate_q_10, _gate_q_0;
  p(3.6364022853038436) _gate_q_12;
  h _gate_q_5;
  cy _gate_q_16, _gate_q_1;
  ecr _gate_q_4, _gate_q_11;
  tdg _gate_q_17;
  sdg _gate_q_3;
  s _gate_q_8;
  cz _gate_q_6, _gate_q_2;
  iswap _gate_q_9, _gate_q_7;
  z _gate_q_13;
}