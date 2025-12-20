gate rzz_5116415008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.228532291367495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate cu3_5116423984(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.856750734493046) _gate_q_0;
  u1(0.4817001463398556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4497329785997981, 0, -2.856750734493046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4497329785997981, 2.3750505881531905, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5116425184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4984976318761385) _gate_q_0;
  u1(0.22492032421999375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.27530322021825404, 0, -3.4984976318761385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.27530322021825404, 3.273577307656145, 0) _gate_q_1;
}
gate rzx_5116420432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2034969586388602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116417936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6484870180574579) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6484870180574579) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6484870180574579) _gate_q_1;
}
gate rxx_5116420720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8596923280725823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5116415440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.719462170060807) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.388217731386806) _gate_q_1;
  ry(-2.388217731386806) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.719462170060807) _gate_q_0;
}
gate cu3_5116425472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8873918881718788) _gate_q_0;
  u1(0.21749293700139694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9708676157137086, 0, -3.8873918881718788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9708676157137086, 3.669898951170482, 0) _gate_q_1;
}
gate cu1_5116419088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.208246325471225) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.208246325471225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.208246325471225) _gate_q_1;
}
gate rzz_5116427536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.017639662692415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5116422688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8479283590087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116424512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2075289459175444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116424896(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.894114791084422) _gate_q_0;
  u1(-1.5758270597796455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.47352194484058363, 0, -2.894114791084422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.47352194484058363, 4.469941850864068, 0) _gate_q_1;
}
gate cu1_5116414288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4502520726566486) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4502520726566486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4502520726566486) _gate_q_1;
}
gate xx_minus_yy_5116427776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.061216755696785) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5913099472014964) _gate_q_0;
  ry(-1.5913099472014964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.061216755696785) _gate_q_1;
}
gate cu1_5116427680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2043675403449148) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2043675403449148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2043675403449148) _gate_q_1;
}
gate xx_plus_yy_5116427104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.43040456429973073) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.31484805688904555) _gate_q_1;
  ry(-0.31484805688904555) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.43040456429973073) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  swap _gate_q_10, _gate_q_17;
  rzz_5116415008(5.228532291367495) _gate_q_13, _gate_q_9;
  dcx _gate_q_18, _gate_q_2;
  U(1.3809734434117955, 5.558568075487556, 1.010989329586716) _gate_q_7;
  id _gate_q_0;
  cs _gate_q_8, _gate_q_15;
  ecr _gate_q_3, _gate_q_14;
  rz(5.7400204923906175) _gate_q_1;
  csx _gate_q_16, _gate_q_4;
  u2(1.8114827861549374, 0.3688959946321965) _gate_q_5;
  cu3_5116423984(0.8994659571995962, 2.3750505881531905, 3.3384508808329016) _gate_q_6, _gate_q_11;
  h _gate_q_12;
  cry(4.605000197179862) _gate_q_13, _gate_q_17;
  dcx _gate_q_11, _gate_q_1;
  rx(2.332096236471008) _gate_q_8;
  ch _gate_q_10, _gate_q_2;
  id _gate_q_5;
  p(1.001588813974565) _gate_q_18;
  tdg _gate_q_16;
  tdg _gate_q_6;
  cy _gate_q_9, _gate_q_15;
  s _gate_q_0;
  cu(5.880844762653124, 3.604529008621919, 3.5804445694993055, 5.4188801950264684) _gate_q_7, _gate_q_14;
  iswap _gate_q_3, _gate_q_4;
  s _gate_q_12;
  cu3_5116425184(0.5506064404365081, 3.273577307656145, 3.7234179560961325) _gate_q_8, _gate_q_11;
  id _gate_q_9;
  rx(1.5421002616782384) _gate_q_18;
  rzx_5116420432(1.2034969586388602) _gate_q_12, _gate_q_0;
  cu1_5116417936(1.2969740361149158) _gate_q_16, _gate_q_2;
  rxx_5116420720(3.8596923280725823) _gate_q_3, _gate_q_5;
  t _gate_q_6;
  dcx _gate_q_7, _gate_q_14;
  id _gate_q_15;
  cs _gate_q_17, _gate_q_1;
  crz(0.9648140368813105) _gate_q_10, _gate_q_4;
  id _gate_q_13;
  crx(1.2175376645235787) _gate_q_4, _gate_q_5;
  crz(0.8507468156983039) _gate_q_14, _gate_q_7;
  U(1.9523994275219947, 0.5120516711725829, 2.41899842549755) _gate_q_18;
  cry(3.659982054002155) _gate_q_8, _gate_q_0;
  swap _gate_q_11, _gate_q_15;
  p(5.379035558543759) _gate_q_1;
  y _gate_q_3;
  crz(3.319927458948751) _gate_q_6, _gate_q_16;
  iswap _gate_q_13, _gate_q_12;
  cry(3.716891838790751) _gate_q_9, _gate_q_17;
  xx_plus_yy_5116415440(4.776435462773612, 5.719462170060807) _gate_q_2, _gate_q_10;
  cs _gate_q_11, _gate_q_17;
  swap _gate_q_13, _gate_q_0;
  z _gate_q_4;
  p(2.2180910251861694) _gate_q_6;
  x _gate_q_14;
  cry(2.490192092754955) _gate_q_8, _gate_q_16;
  sx _gate_q_9;
  sx _gate_q_12;
  sxdg _gate_q_10;
  sx _gate_q_5;
  p(2.894575252297249) _gate_q_7;
  h _gate_q_2;
  cz _gate_q_3, _gate_q_1;
  cu3_5116425472(1.9417352314274172, 3.669898951170482, 4.104884825173276) _gate_q_18, _gate_q_15;
  cp(3.7929275155234397) _gate_q_3, _gate_q_5;
  rz(0.0471610863835278) _gate_q_16;
  cs _gate_q_17, _gate_q_18;
  s _gate_q_4;
  u3(3.1912522455531884, 5.569821644617307, 0.3324629382511558) _gate_q_2;
  y _gate_q_11;
  cz _gate_q_13, _gate_q_10;
  cy _gate_q_15, _gate_q_12;
  u3(1.4509890520717172, 4.920779498255365, 0.9186559949530851) _gate_q_0;
  sxdg _gate_q_7;
  cz _gate_q_1, _gate_q_14;
  u1(5.5270214117319325) _gate_q_9;
  t _gate_q_6;
  u1(2.946770788567464) _gate_q_8;
  cx _gate_q_3, _gate_q_6;
  cp(4.0107982669069004) _gate_q_8, _gate_q_10;
  cs _gate_q_15, _gate_q_9;
  u1(2.5041149817395114) _gate_q_13;
  cu1_5116419088(4.41649265094245) _gate_q_7, _gate_q_4;
  crx(0.6677700747450137) _gate_q_16, _gate_q_18;
  iswap _gate_q_1, _gate_q_2;
  ry(3.3417475779388828) _gate_q_0;
  cs _gate_q_17, _gate_q_12;
  rzz_5116427536(4.017639662692415) _gate_q_5, _gate_q_11;
  x _gate_q_14;
  rz(1.6678173120735458) _gate_q_4;
  x _gate_q_3;
  t _gate_q_13;
  cz _gate_q_9, _gate_q_5;
  cz _gate_q_12, _gate_q_7;
  p(3.1074486201471605) _gate_q_18;
  csdg _gate_q_14, _gate_q_11;
  ch _gate_q_17, _gate_q_8;
  sx _gate_q_1;
  U(2.0736426832324595, 4.459531110280067, 4.372878124321566) _gate_q_0;
  ch _gate_q_10, _gate_q_6;
  p(4.926534239060546) _gate_q_15;
  h _gate_q_2;
  t _gate_q_16;
  dcx _gate_q_13, _gate_q_1;
  cy _gate_q_4, _gate_q_3;
  u3(5.58206767413265, 2.531044357130075, 1.2561851866045886) _gate_q_12;
  u1(2.316465060438723) _gate_q_17;
  rzz_5116422688(3.8479283590087) _gate_q_0, _gate_q_18;
  rxx_5116424512(0.2075289459175444) _gate_q_5, _gate_q_2;
  cp(0.13797239391296556) _gate_q_6, _gate_q_10;
  cy _gate_q_7, _gate_q_16;
  cu3_5116424896(0.9470438896811673, 4.469941850864068, 1.3182877313047765) _gate_q_15, _gate_q_8;
  sdg _gate_q_9;
  U(4.24443197390754, 3.681942276832987, 1.0416770741825365) _gate_q_14;
  sdg _gate_q_11;
  s _gate_q_16;
  cu1_5116414288(2.900504145313297) _gate_q_6, _gate_q_9;
  s _gate_q_14;
  sx _gate_q_2;
  xx_minus_yy_5116427776(3.182619894402993, 6.061216755696785) _gate_q_1, _gate_q_11;
  cu1_5116427680(2.4087350806898296) _gate_q_5, _gate_q_7;
  p(1.2523848987886208) _gate_q_4;
  iswap _gate_q_12, _gate_q_10;
  h _gate_q_0;
  csx _gate_q_13, _gate_q_8;
  xx_plus_yy_5116427104(0.6296961137780911, 0.43040456429973073) _gate_q_3, _gate_q_15;
  p(4.849616950612048) _gate_q_18;
  x _gate_q_17;
}
gate cu3_5116425040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.929451456774132) _gate_q_0;
  u1(0.3992059405373647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.724817105560927, 0, -4.929451456774132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.724817105560927, 4.530245516236767, 0) _gate_q_1;
}
gate ryy_5116418464(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.311281862509291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5116421152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9067931830032836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5116422592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.075751252172221, 0.3125068327199818, -0.3125068327199818) _gate_q_0;
}
gate cu3_5116424848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4387806846449323) _gate_q_0;
  u1(-1.058628515008837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.987146650441543, 0, -3.4387806846449323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.987146650441543, 4.497409199653769, 0) _gate_q_1;
}
gate cu3_5116423696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6923862406684886) _gate_q_0;
  u1(-1.253089147796441) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.006822131999050017, 0, -1.6923862406684886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.006822131999050017, 2.9454753884649296, 0) _gate_q_1;
}
gate r_5116416016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.36452403183555937, -0.3846920277730774, 0.3846920277730774) _gate_q_0;
}
gate rxx_5116416352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4258182881047399) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5116418896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.593854546599635, 2.002016912052658, -2.002016912052658) _gate_q_0;
}
gate xx_plus_yy_5116420960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.737448994730651) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1389133267274847) _gate_q_1;
  ry(-2.1389133267274847) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.737448994730651) _gate_q_0;
}
gate r_5116414336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1169056303193727, 0.07184452189557611, -0.07184452189557611) _gate_q_0;
}
gate rzx_5116418224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.2872584503351785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116426336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.080495950674426) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5701945959123597) _gate_q_0;
  ry(-0.5701945959123597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.080495950674426) _gate_q_1;
}
gate cu1_5116420048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8313455117932103) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8313455117932103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8313455117932103) _gate_q_1;
}
gate cu3_5116418080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2084982949182792) _gate_q_0;
  u1(-0.18770705849201164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.279987545215854, 0, -1.2084982949182792) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.279987545215854, 1.3962053534102907, 0) _gate_q_1;
}
gate r_5116423504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.069176349902704, 1.4043136392945872, -1.4043136392945872) _gate_q_0;
}
gate ryy_5116423360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3074324196835523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5116413712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.821924160405397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116414768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.413730716833695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116426720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.350428041848235) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8591098258881695) _gate_q_0;
  ry(-2.8591098258881695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.350428041848235) _gate_q_1;
}
gate rzx_5116413232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2198850706278015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116414576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.44965804990048075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116422880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7404134420842137, 4.3327922807409545, -4.3327922807409545) _gate_q_0;
}
gate cu3_5116413280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.51771523768488) _gate_q_0;
  u1(0.5763647212888212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.234806617070115, 0, -4.51771523768488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.234806617070115, 3.9413505163960587, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  tdg _gate_q_2;
  cu3_5116425040(3.449634211121854, 4.530245516236767, 5.328657397311496) _gate_q_1, _gate_q_6;
  cs _gate_q_11, _gate_q_16;
  y _gate_q_14;
  ryy_5116418464(4.311281862509291) _gate_q_12, _gate_q_5;
  z _gate_q_18;
  u1(1.8980861968228253) _gate_q_17;
  u1(3.0249901103758163) _gate_q_13;
  rxx_5116421152(2.9067931830032836) _gate_q_3, _gate_q_10;
  t _gate_q_9;
  r_5116422592(1.075751252172221, 1.8833031595148784) _gate_q_0;
  iswap _gate_q_15, _gate_q_7;
  swap _gate_q_8, _gate_q_4;
  cu3_5116424848(1.974293300883086, 4.497409199653769, 2.380152169636095) _gate_q_6, _gate_q_7;
  cx _gate_q_17, _gate_q_9;
  rz(0.24569665009347927) _gate_q_3;
  cz _gate_q_12, _gate_q_15;
  x _gate_q_10;
  sdg _gate_q_13;
  cu3_5116423696(0.013644263998100033, 2.9454753884649296, 0.4392970928720478) _gate_q_1, _gate_q_2;
  ecr _gate_q_16, _gate_q_11;
  u3(3.778052601726526, 5.604532194256024, 4.573196312449732) _gate_q_8;
  csx _gate_q_4, _gate_q_18;
  crx(4.793376267772618) _gate_q_5, _gate_q_14;
  r_5116416016(0.36452403183555937, 1.1861042990218191) _gate_q_0;
  cz _gate_q_2, _gate_q_6;
  u2(2.8696046198092917, 1.1057954596922375) _gate_q_10;
  z _gate_q_1;
  cp(2.3864841766641494) _gate_q_9, _gate_q_17;
  sx _gate_q_0;
  p(3.4619963010867583) _gate_q_15;
  swap _gate_q_11, _gate_q_7;
  z _gate_q_8;
  rx(1.5324754114848012) _gate_q_12;
  sxdg _gate_q_18;
  rxx_5116416352(1.4258182881047399) _gate_q_16, _gate_q_14;
  s _gate_q_3;
  p(1.966658407610414) _gate_q_5;
  r_5116418896(4.593854546599635, 3.5728132388475546) _gate_q_13;
  rx(4.08738344243201) _gate_q_4;
  tdg _gate_q_0;
  swap _gate_q_6, _gate_q_12;
  cry(3.1123364536510083) _gate_q_16, _gate_q_10;
  swap _gate_q_1, _gate_q_14;
  s _gate_q_9;
  p(4.38665442576692) _gate_q_8;
  ch _gate_q_2, _gate_q_18;
  h _gate_q_5;
  U(5.421671101644361, 1.164873614137623, 5.2344498187563016) _gate_q_7;
  csdg _gate_q_17, _gate_q_15;
  crx(4.441887119965749) _gate_q_13, _gate_q_4;
  cy _gate_q_3, _gate_q_11;
  u2(2.4836736687186898, 4.475512949035427) _gate_q_15;
  csx _gate_q_12, _gate_q_4;
  id _gate_q_18;
  x _gate_q_14;
  U(1.0860535202817307, 2.346487089782443, 1.7327921897966208) _gate_q_2;
  cx _gate_q_6, _gate_q_16;
  rz(0.047383823999729) _gate_q_8;
  x _gate_q_3;
  csdg _gate_q_0, _gate_q_13;
  id _gate_q_5;
  x _gate_q_10;
  cy _gate_q_7, _gate_q_17;
  swap _gate_q_11, _gate_q_9;
  x _gate_q_1;
  u3(1.8210922604966142, 5.409155731887576, 1.1689960735361582) _gate_q_7;
  cry(0.6284988839515832) _gate_q_3, _gate_q_11;
  cs _gate_q_12, _gate_q_16;
  U(0.40683021144655485, 3.6220656340554482, 5.170147540047032) _gate_q_5;
  xx_plus_yy_5116420960(4.277826653454969, 5.737448994730651) _gate_q_18, _gate_q_2;
  ry(0.0517691234960213) _gate_q_10;
  r_5116414336(2.1169056303193727, 1.6426408486904727) _gate_q_4;
  tdg _gate_q_13;
  x _gate_q_1;
  rz(2.943728515808896) _gate_q_14;
  rzx_5116418224(5.2872584503351785) _gate_q_15, _gate_q_8;
  id _gate_q_6;
  xx_minus_yy_5116426336(1.1403891918247193, 4.080495950674426) _gate_q_9, _gate_q_17;
  y _gate_q_0;
  csdg _gate_q_15, _gate_q_1;
  h _gate_q_7;
  cu1_5116420048(3.6626910235864205) _gate_q_2, _gate_q_14;
  ry(1.46500211898022) _gate_q_6;
  cy _gate_q_11, _gate_q_17;
  crz(0.5258484166643792) _gate_q_8, _gate_q_5;
  cu3_5116418080(2.559975090431708, 1.3962053534102907, 1.0207912364262675) _gate_q_10, _gate_q_4;
  ecr _gate_q_18, _gate_q_3;
  csx _gate_q_13, _gate_q_9;
  h _gate_q_16;
  iswap _gate_q_12, _gate_q_0;
  r_5116423504(5.069176349902704, 2.9751099660894837) _gate_q_0;
  swap _gate_q_1, _gate_q_6;
  sx _gate_q_2;
  ryy_5116423360(1.3074324196835523) _gate_q_9, _gate_q_11;
  s _gate_q_17;
  y _gate_q_15;
  cp(5.5749832460005715) _gate_q_7, _gate_q_16;
  iswap _gate_q_5, _gate_q_8;
  cy _gate_q_18, _gate_q_10;
  rzz_5116413712(5.821924160405397) _gate_q_12, _gate_q_13;
  rxx_5116414768(4.413730716833695) _gate_q_14, _gate_q_3;
  y _gate_q_4;
  sx _gate_q_0;
  U(4.943416329551041, 5.035546993487528, 1.8070845779631735) _gate_q_3;
  sx _gate_q_13;
  xx_minus_yy_5116426720(5.718219651776339, 4.350428041848235) _gate_q_11, _gate_q_7;
  x _gate_q_12;
  ecr _gate_q_9, _gate_q_15;
  cx _gate_q_2, _gate_q_4;
  cz _gate_q_5, _gate_q_17;
  rzx_5116413232(2.2198850706278015) _gate_q_14, _gate_q_6;
  rzx_5116414576(0.44965804990048075) _gate_q_18, _gate_q_16;
  r_5116422880(1.7404134420842137, 5.903588607535851) _gate_q_1;
  id _gate_q_8;
  tdg _gate_q_10;
  sxdg _gate_q_7;
  sx _gate_q_12;
  cu(1.6436266452927701, 4.59791198844743, 2.9296229945359924, 1.9820965938663129) _gate_q_9, _gate_q_10;
  p(0.4360844706903508) _gate_q_18;
  sdg _gate_q_6;
  sdg _gate_q_0;
  x _gate_q_13;
  rx(5.651949547916755) _gate_q_11;
  cu3_5116413280(2.46961323414023, 3.9413505163960587, 5.094079958973701) _gate_q_3, _gate_q_14;
  y _gate_q_15;
  cy _gate_q_5, _gate_q_17;
  s _gate_q_16;
  crz(0.1306663765585744) _gate_q_1, _gate_q_2;
  cu(5.807328276127904, 4.893250193881427, 4.034642262943079, 5.734679201233542) _gate_q_4, _gate_q_8;
}