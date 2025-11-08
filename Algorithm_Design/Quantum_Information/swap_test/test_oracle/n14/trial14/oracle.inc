gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074128144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9233145029353955) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9106675576075661) _gate_q_1;
  ry(-0.9106675576075661) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9233145029353955) _gate_q_0;
}
gate cu1_5074125552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1531245839038444) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1531245839038444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1531245839038444) _gate_q_1;
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
gate rxx_5074135488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6206273224055545) _gate_q_1;
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
gate cu1_5074125648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.683631612650833) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.683631612650833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.683631612650833) _gate_q_1;
}
gate r_5074128528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0197712555406329, -1.552942597642433, 1.552942597642433) _gate_q_0;
}
gate r_5074135824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.483989856637601, 0.19832298146691585, -0.19832298146691585) _gate_q_0;
}
gate ryy_5074131840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8144463328159945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074128624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1769692468020363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074140816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6007697935183194, 0.6213351026513938, -0.6213351026513938) _gate_q_0;
}
gate xx_minus_yy_5074125504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.309589119493287) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.489757811171577) _gate_q_0;
  ry(-2.489757811171577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.309589119493287) _gate_q_1;
}
gate xx_minus_yy_5074135584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.9362643313628976) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8953743003492547) _gate_q_0;
  ry(-1.8953743003492547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.9362643313628976) _gate_q_1;
}
gate cu1_5074132080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5991462399298937) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5991462399298937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5991462399298937) _gate_q_1;
}
gate cu1_5074124976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.024978498516141947) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.024978498516141947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.024978498516141947) _gate_q_1;
}
gate r_5074124880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8861498985939567, -0.6010936350583149, 0.6010936350583149) _gate_q_0;
}
gate cu1_5074138080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6631282654988664) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6631282654988664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6631282654988664) _gate_q_1;
}
gate rxx_5074138944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1569131943382405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5074125408(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8611803070264816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074125072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5675509356419055) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5675509356419055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5675509356419055) _gate_q_1;
}
gate r_5074128288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0418974948408826, 4.033301139421292, -4.033301139421292) _gate_q_0;
}
gate xx_plus_yy_5074128672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.053716990825226) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5740062912895922) _gate_q_1;
  ry(-2.5740062912895922) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.053716990825226) _gate_q_0;
}
gate ryy_5074137936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6673171860408296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074128000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.610516730526067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074127952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.835323410025604) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1426439965810573) _gate_q_1;
  ry(-1.1426439965810573) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.835323410025604) _gate_q_0;
}
gate rzz_5074127472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9890420987917947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  z _gate_q_2;
  u2(0.421787043914247, 1.497753510662817) _gate_q_0;
  ch _gate_q_10, _gate_q_6;
  xx_plus_yy_5074128144(1.8213351152151322, 3.9233145029353955) _gate_q_3, _gate_q_7;
  cu1_5074125552(4.306249167807689) _gate_q_8, _gate_q_12;
  cx _gate_q_13, _gate_q_9;
  y _gate_q_4;
  x _gate_q_5;
  ry(1.4566850658345087) _gate_q_1;
  id _gate_q_11;
  sdg _gate_q_11;
  t _gate_q_0;
  cu(2.367673709011597, 3.8024746764303403, 3.1830470265053683, 3.459626955618383) _gate_q_2, _gate_q_8;
  sx _gate_q_13;
  rx(4.553115238050282) _gate_q_10;
  s _gate_q_5;
  u2(4.117887302012414, 6.1134506141425025) _gate_q_12;
  u3(3.2694224977066932, 5.256521525421005, 1.5701506300526076) _gate_q_9;
  cx _gate_q_6, _gate_q_3;
  s _gate_q_7;
  u1(4.344027573042146) _gate_q_1;
  rz(6.249156252080926) _gate_q_4;
  t _gate_q_3;
  csx _gate_q_6, _gate_q_0;
  csx _gate_q_9, _gate_q_12;
  z _gate_q_5;
  csx _gate_q_1, _gate_q_10;
  rz(3.3269250882797374) _gate_q_4;
  iswap _gate_q_8, _gate_q_13;
  rxx_5074135488(4.6206273224055545) _gate_q_7, _gate_q_11;
  ry(1.9174654516897278) _gate_q_2;
  sdg _gate_q_1;
  csx _gate_q_11, _gate_q_4;
  cu(0.4076499503823806, 5.9192941295633785, 3.3899561112560246, 3.9264718510431864) _gate_q_9, _gate_q_3;
  cs _gate_q_2, _gate_q_6;
  rx(2.9956904478774096) _gate_q_12;
  cz _gate_q_8, _gate_q_13;
  z _gate_q_7;
  tdg _gate_q_5;
  cu1_5074125648(1.367263225301666) _gate_q_10, _gate_q_0;
  r_5074128528(1.0197712555406329, 0.017853729152463693) _gate_q_3;
  sxdg _gate_q_12;
  swap _gate_q_5, _gate_q_9;
  sx _gate_q_10;
  r_5074135824(5.483989856637601, 1.7691193082618124) _gate_q_0;
  u2(4.026625372253237, 5.147194082836656) _gate_q_4;
  iswap _gate_q_6, _gate_q_7;
  u2(4.531070400381191, 2.3017953374454447) _gate_q_11;
  tdg _gate_q_2;
  cx _gate_q_1, _gate_q_13;
  U(2.93394606860923, 4.873303494622414, 3.2998029314805835) _gate_q_8;
  ryy_5074131840(4.8144463328159945) _gate_q_10, _gate_q_6;
  rxx_5074128624(3.1769692468020363) _gate_q_12, _gate_q_11;
  r_5074140816(0.6007697935183194, 2.1921314294462904) _gate_q_2;
  cy _gate_q_4, _gate_q_1;
  cp(3.7557781809718116) _gate_q_5, _gate_q_9;
  id _gate_q_3;
  rz(3.0948764195233163) _gate_q_13;
  xx_minus_yy_5074125504(4.979515622343154, 2.309589119493287) _gate_q_8, _gate_q_0;
  y _gate_q_7;
  xx_minus_yy_5074135584(3.7907486006985094, 5.9362643313628976) _gate_q_13, _gate_q_9;
  cu1_5074132080(1.1982924798597874) _gate_q_0, _gate_q_11;
  cu1_5074124976(0.049956997032283894) _gate_q_2, _gate_q_3;
  r_5074124880(2.8861498985939567, 0.9697026917365816) _gate_q_5;
  ry(3.1182879115260325) _gate_q_12;
  cu1_5074138080(3.3262565309977328) _gate_q_4, _gate_q_10;
  t _gate_q_1;
  crx(1.3294294108506355) _gate_q_8, _gate_q_6;
  rz(0.322252751188061) _gate_q_7;
  h _gate_q_3;
  rx(3.255566542014938) _gate_q_7;
  rxx_5074138944(2.1569131943382405) _gate_q_10, _gate_q_11;
  u1(2.188447790324086) _gate_q_9;
  dcx _gate_q_13, _gate_q_4;
  ry(6.034480326485463) _gate_q_2;
  s _gate_q_0;
  rzz_5074125408(1.8611803070264816) _gate_q_8, _gate_q_1;
  u2(1.1266004470721158, 4.809773845927741) _gate_q_5;
  dcx _gate_q_6, _gate_q_12;
  tdg _gate_q_11;
  s _gate_q_12;
  s _gate_q_7;
  y _gate_q_4;
  ry(1.9931632015980758) _gate_q_1;
  sdg _gate_q_9;
  cu1_5074125072(3.135101871283811) _gate_q_8, _gate_q_3;
  r_5074128288(3.0418974948408826, 5.604097466216189) _gate_q_13;
  cx _gate_q_6, _gate_q_10;
  xx_plus_yy_5074128672(5.1480125825791845, 3.053716990825226) _gate_q_0, _gate_q_5;
  x _gate_q_2;
  ryy_5074137936(3.6673171860408296) _gate_q_2, _gate_q_6;
  iswap _gate_q_1, _gate_q_3;
  u1(4.1424381184330645) _gate_q_8;
  rzx_5074128000(5.610516730526067) _gate_q_9, _gate_q_10;
  cry(2.0966163653729573) _gate_q_7, _gate_q_4;
  xx_plus_yy_5074127952(2.2852879931621146, 4.835323410025604) _gate_q_13, _gate_q_0;
  rzz_5074127472(3.9890420987917947) _gate_q_12, _gate_q_5;
  s _gate_q_11;
}
gate ryy_5074770672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.873764060231414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074770912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6241681460975856, -0.11543476394529018, 0.11543476394529018) _gate_q_0;
}
gate rzz_5074771008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5337099381892028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate ryy_5074770144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.020755726363044) _gate_q_1;
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
gate xx_minus_yy_5074771104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.413102137613681) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2803525225040047) _gate_q_0;
  ry(-2.2803525225040047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.413102137613681) _gate_q_1;
}
gate rzx_5074771200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3035249064173793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074779312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8534187834254054) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6411921253148518) _gate_q_0;
  ry(-1.6411921253148518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8534187834254054) _gate_q_1;
}
gate rzx_5074780032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.273915150742749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074779216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0022824349564416) _gate_q_0;
  u1(1.252267775935056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7092457284432827, 0, -2.0022824349564416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7092457284432827, 0.7500146590213859, 0) _gate_q_1;
}
gate rxx_5074779888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3677382257345276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074776960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.16558134353123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074779360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6990288275795278, 2.5863141426666525, -2.5863141426666525) _gate_q_0;
}
gate xx_minus_yy_5074779504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5989019056902507) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.576664718401254) _gate_q_0;
  ry(-2.576664718401254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5989019056902507) _gate_q_1;
}
gate cu3_5062355200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6106078997457518) _gate_q_0;
  u1(0.006891107091142379) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6077212310848752, 0, -1.6106078997457518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6077212310848752, 1.6037167926546094, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cz _gate_q_6, _gate_q_8;
  iswap _gate_q_11, _gate_q_3;
  rz(2.232466748976757) _gate_q_4;
  x _gate_q_12;
  sxdg _gate_q_5;
  ryy_5074770672(4.873764060231414) _gate_q_7, _gate_q_10;
  r_5074770912(3.6241681460975856, 1.4553615628496064) _gate_q_13;
  u1(1.964805674529858) _gate_q_2;
  ch _gate_q_0, _gate_q_9;
  z _gate_q_1;
  cry(5.662678758112214) _gate_q_4, _gate_q_12;
  cu(0.17728536370901554, 2.0941527363498516, 5.9131700308267, 1.513483806011437) _gate_q_0, _gate_q_9;
  rzz_5074771008(2.5337099381892028) _gate_q_11, _gate_q_10;
  ecr _gate_q_5, _gate_q_6;
  cp(0.9113594082314501) _gate_q_13, _gate_q_3;
  swap _gate_q_7, _gate_q_8;
  h _gate_q_2;
  p(0.5676848916441063) _gate_q_1;
  ryy_5074770144(5.020755726363044) _gate_q_11, _gate_q_6;
  u3(4.173919472055708, 6.0298668197226055, 1.0656920218525854) _gate_q_0;
  id _gate_q_8;
  tdg _gate_q_5;
  csdg _gate_q_1, _gate_q_9;
  xx_minus_yy_5074771104(4.560705045008009, 1.413102137613681) _gate_q_13, _gate_q_4;
  cs _gate_q_3, _gate_q_2;
  iswap _gate_q_10, _gate_q_7;
  tdg _gate_q_12;
  iswap _gate_q_7, _gate_q_8;
  rzx_5074771200(3.3035249064173793) _gate_q_13, _gate_q_9;
  u3(3.9452651030821944, 5.494715421262499, 3.753034013832752) _gate_q_2;
  s _gate_q_4;
  cs _gate_q_3, _gate_q_10;
  u3(0.7888817835120033, 2.1264877769604267, 5.781741920681266) _gate_q_1;
  cu(5.4602066090672094, 1.8468384318103344, 4.778345539756438, 6.004764381007659) _gate_q_11, _gate_q_0;
  cx _gate_q_6, _gate_q_12;
  tdg _gate_q_5;
  u2(2.3070528404571014, 1.7622234818415794) _gate_q_3;
  xx_minus_yy_5074779312(3.2823842506297036, 3.8534187834254054) _gate_q_8, _gate_q_5;
  cry(3.491375175136885) _gate_q_12, _gate_q_1;
  cry(2.822246987883015) _gate_q_4, _gate_q_2;
  sx _gate_q_11;
  sdg _gate_q_9;
  swap _gate_q_13, _gate_q_10;
  cs _gate_q_7, _gate_q_6;
  y _gate_q_0;
  rzx_5074780032(4.273915150742749) _gate_q_13, _gate_q_12;
  cs _gate_q_0, _gate_q_11;
  cu3_5074779216(5.418491456886565, 0.7500146590213859, 3.2545502108914977) _gate_q_3, _gate_q_1;
  u2(2.6017894913099595, 5.250513156689701) _gate_q_2;
  z _gate_q_6;
  h _gate_q_10;
  U(3.0372687389777124, 1.194805181942824, 5.948390216985171) _gate_q_8;
  p(5.346315873076198) _gate_q_4;
  cry(2.777758748957388) _gate_q_5, _gate_q_9;
  y _gate_q_7;
  cs _gate_q_7, _gate_q_9;
  rxx_5074779888(2.3677382257345276) _gate_q_5, _gate_q_13;
  rzz_5074776960(4.16558134353123) _gate_q_11, _gate_q_3;
  r_5074779360(1.6990288275795278, 4.157110469461549) _gate_q_10;
  ecr _gate_q_4, _gate_q_2;
  sdg _gate_q_12;
  cx _gate_q_0, _gate_q_6;
  xx_minus_yy_5074779504(5.153329436802508, 1.5989019056902507) _gate_q_8, _gate_q_1;
  cs _gate_q_12, _gate_q_4;
  sx _gate_q_3;
  rz(2.9823918170226644) _gate_q_6;
  h _gate_q_9;
  cz _gate_q_10, _gate_q_13;
  ecr _gate_q_8, _gate_q_2;
  u3(2.6494197046348638, 1.1668678287978476, 3.2884608986554325) _gate_q_1;
  iswap _gate_q_0, _gate_q_7;
  dcx _gate_q_5, _gate_q_11;
  cz _gate_q_13, _gate_q_11;
  x _gate_q_7;
  csdg _gate_q_1, _gate_q_10;
  x _gate_q_5;
  cs _gate_q_3, _gate_q_8;
  cu(4.051660853075428, 4.534400181785966, 0.7107145415919072, 2.027606712310559) _gate_q_9, _gate_q_4;
  tdg _gate_q_6;
  ry(4.656685791758306) _gate_q_0;
  crx(1.8421469622902096) _gate_q_2, _gate_q_12;
  crx(3.83806352174106) _gate_q_6, _gate_q_5;
  crx(1.7301031387231465) _gate_q_13, _gate_q_10;
  u3(0.6055166312376037, 3.6442533159899284, 2.9783624058367506) _gate_q_9;
  cu3_5062355200(3.2154424621697504, 1.6037167926546094, 1.6174990068368942) _gate_q_7, _gate_q_4;
  cs _gate_q_1, _gate_q_8;
  cu(1.1111639242346423, 4.972246649745396, 6.138819679936916, 5.117330862392687) _gate_q_12, _gate_q_3;
  dcx _gate_q_11, _gate_q_2;
  u3(3.452058746314425, 4.713588343941047, 3.518988876193573) _gate_q_0;
}