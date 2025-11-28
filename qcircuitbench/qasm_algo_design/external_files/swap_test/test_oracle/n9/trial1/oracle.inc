gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106018464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3447541986687552) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.078866274480557) _gate_q_1;
  ry(-3.078866274480557) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3447541986687552) _gate_q_0;
}
gate r_5106021488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0983957941724523, 3.3057047550198613, -3.3057047550198613) _gate_q_0;
}
gate ryy_5105637888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6682795202309342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105631696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6281555385399302) _gate_q_0;
  u1(0.04199359538365033) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7451907207405633, 0, -1.6281555385399302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7451907207405633, 1.58616194315628, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate xx_minus_yy_5105637408(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.180596384550225) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9604666241003705) _gate_q_0;
  ry(-0.9604666241003705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.180596384550225) _gate_q_1;
}
gate cu1_5105643456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.53442445563086) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.53442445563086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.53442445563086) _gate_q_1;
}
gate xx_minus_yy_5105643600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.005676782093887) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3158888249338176) _gate_q_0;
  ry(-1.3158888249338176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.005676782093887) _gate_q_1;
}
gate cu1_5105635104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.126355492664375) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.126355492664375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.126355492664375) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5105647152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.23885707907381) _gate_q_0;
  u1(0.10496599567675458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1446281825064029, 0, -2.23885707907381) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1446281825064029, 2.1338910833970552, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  crz(1.5209781901249924) _gate_q_6, _gate_q_0;
  xx_plus_yy_5106018464(6.157732548961114, 3.3447541986687552) _gate_q_2, _gate_q_7;
  cry(4.600624419526419) _gate_q_5, _gate_q_3;
  p(5.951277697412085) _gate_q_1;
  h _gate_q_4;
  sx _gate_q_8;
  sdg _gate_q_5;
  crz(2.702494839784479) _gate_q_7, _gate_q_8;
  crz(0.031249390648195045) _gate_q_6, _gate_q_2;
  r_5106021488(2.0983957941724523, 4.876501081814758) _gate_q_3;
  ryy_5105637888(1.6682795202309342) _gate_q_1, _gate_q_4;
  sdg _gate_q_0;
  crx(6.057394285492249) _gate_q_0, _gate_q_2;
  cy _gate_q_7, _gate_q_5;
  h _gate_q_3;
  cu3_5105631696(5.4903814414811265, 1.58616194315628, 1.6701491339235806) _gate_q_4, _gate_q_1;
  csdg _gate_q_6, _gate_q_8;
  cry(2.6285635568972485) _gate_q_0, _gate_q_3;
  crz(2.7246715338907603) _gate_q_5, _gate_q_7;
  p(4.342769427399001) _gate_q_1;
  cu(4.849529722095821, 2.2974836233310048, 6.22812089870233, 4.479801939238497) _gate_q_6, _gate_q_8;
  t _gate_q_4;
  p(5.882427653729764) _gate_q_2;
  ecr _gate_q_7, _gate_q_8;
  crz(4.7788252243933105) _gate_q_5, _gate_q_4;
  id _gate_q_0;
  cry(4.214794962389915) _gate_q_3, _gate_q_2;
  h _gate_q_1;
  id _gate_q_6;
  cs _gate_q_4, _gate_q_1;
  cz _gate_q_2, _gate_q_0;
  xx_minus_yy_5105637408(1.920933248200741, 6.180596384550225) _gate_q_6, _gate_q_7;
  cu1_5105643456(3.06884891126172) _gate_q_8, _gate_q_5;
  ry(4.432681240518337) _gate_q_3;
  xx_minus_yy_5105643600(2.6317776498676353, 4.005676782093887) _gate_q_6, _gate_q_5;
  cu1_5105635104(4.25271098532875) _gate_q_2, _gate_q_4;
  cu(5.874302547588573, 1.3084539150980194, 0.8888896044559227, 4.369312878874466) _gate_q_0, _gate_q_8;
  t _gate_q_3;
  iswap _gate_q_7, _gate_q_1;
  ecr _gate_q_4, _gate_q_6;
  sx _gate_q_0;
  ry(2.939179654498165) _gate_q_8;
  cy _gate_q_5, _gate_q_2;
  U(0.38092072950340655, 3.543124495928767, 1.6458326171605224) _gate_q_7;
  y _gate_q_1;
  sdg _gate_q_3;
  cu3_5105647152(0.2892563650128058, 2.1338910833970552, 2.3438230747505644) _gate_q_5, _gate_q_1;
  crx(6.223676254368769) _gate_q_3, _gate_q_2;
  u3(1.7276542435346596, 5.980604154852762, 2.7782249515536854) _gate_q_6;
  sdg _gate_q_4;
  u3(0.7490627512113197, 0.756196139707166, 2.7283874392987744) _gate_q_0;
  cp(0.5745410771188558) _gate_q_7, _gate_q_8;
}
gate rxx_5105647008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5273281465384687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5105639808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0906243949637369) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.060694228393938) _gate_q_0;
  ry(-2.060694228393938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0906243949637369) _gate_q_1;
}
gate ryy_5105642352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.179987692919074) _gate_q_1;
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
gate rzz_5105643504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.74674540773207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105642400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3795371823933733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105633472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.180113310106095) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.180113310106095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.180113310106095) _gate_q_1;
}
gate rzz_5105640432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.485403173355446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105643024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.333272358491633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105641488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2235362491326134, -0.7276384099677344, 0.7276384099677344) _gate_q_0;
}
gate cu3_5105632944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.257641037032441) _gate_q_0;
  u1(-1.220704310662915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7135912626806786, 0, -3.257641037032441) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7135912626806786, 4.478345347695356, 0) _gate_q_1;
}
gate xx_minus_yy_5105638176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6711448464770364) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.096667337701871) _gate_q_0;
  ry(-3.096667337701871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6711448464770364) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rxx_5105647008(3.5273281465384687) _gate_q_0, _gate_q_2;
  x _gate_q_8;
  crx(3.0394134329281797) _gate_q_5, _gate_q_1;
  t _gate_q_6;
  cx _gate_q_7, _gate_q_3;
  z _gate_q_4;
  xx_minus_yy_5105639808(4.121388456787876, 1.0906243949637369) _gate_q_5, _gate_q_2;
  cu(2.221204974799694, 5.066586082334676, 2.8699619602990754, 0.727381766339541) _gate_q_4, _gate_q_0;
  x _gate_q_6;
  p(2.499039784757535) _gate_q_1;
  x _gate_q_8;
  rz(5.5236398878416155) _gate_q_3;
  id _gate_q_7;
  h _gate_q_0;
  ryy_5105642352(3.179987692919074) _gate_q_6, _gate_q_3;
  h _gate_q_5;
  cz _gate_q_7, _gate_q_1;
  U(0.41417819799619404, 4.29151333564666, 1.707839997839678) _gate_q_2;
  swap _gate_q_8, _gate_q_4;
  csx _gate_q_0, _gate_q_3;
  rzz_5105643504(4.74674540773207) _gate_q_7, _gate_q_5;
  rzx_5105642400(3.3795371823933733) _gate_q_8, _gate_q_6;
  ecr _gate_q_2, _gate_q_1;
  u2(5.9171063856209924, 2.0135698780778686) _gate_q_4;
  cu1_5105633472(4.36022662021219) _gate_q_3, _gate_q_7;
  rzz_5105640432(5.485403173355446) _gate_q_5, _gate_q_0;
  ecr _gate_q_6, _gate_q_8;
  cz _gate_q_2, _gate_q_4;
  y _gate_q_1;
  rzx_5105643024(4.333272358491633) _gate_q_3, _gate_q_7;
  sx _gate_q_5;
  x _gate_q_4;
  u3(4.353001453364605, 3.8178785871274385, 5.004483837688608) _gate_q_6;
  h _gate_q_8;
  rx(3.9327903660074623) _gate_q_0;
  rz(0.9709281837410056) _gate_q_1;
  x _gate_q_2;
  cp(0.8983801305583156) _gate_q_6, _gate_q_7;
  cs _gate_q_1, _gate_q_2;
  cy _gate_q_8, _gate_q_4;
  cz _gate_q_5, _gate_q_0;
  r_5105641488(3.2235362491326134, 0.8431579168271621) _gate_q_3;
  s _gate_q_4;
  cu3_5105632944(5.427182525361357, 4.478345347695356, 2.036936726369526) _gate_q_6, _gate_q_8;
  cz _gate_q_7, _gate_q_0;
  swap _gate_q_3, _gate_q_1;
  xx_minus_yy_5105638176(6.193334675403742, 3.6711448464770364) _gate_q_2, _gate_q_5;
  csdg _gate_q_4, _gate_q_1;
  ch _gate_q_0, _gate_q_7;
  tdg _gate_q_2;
  crz(0.6679253762414668) _gate_q_3, _gate_q_5;
  y _gate_q_8;
  y _gate_q_6;
}