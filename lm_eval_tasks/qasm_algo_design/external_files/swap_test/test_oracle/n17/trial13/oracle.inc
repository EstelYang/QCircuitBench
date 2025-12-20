gate cu3_5070897472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8934495926322206) _gate_q_0;
  u1(-1.0557578139554376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.49823593295103, 0, -2.8934495926322206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.49823593295103, 3.949207406587658, 0) _gate_q_1;
}
gate rzz_5070905152(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5080331128203004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu3_5070903568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9033936175375104) _gate_q_0;
  u1(-1.885783686094547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.780215004209233, 0, -1.9033936175375104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.780215004209233, 3.7891773036320573, 0) _gate_q_1;
}
gate rzz_5070898768(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1626863169589883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070912400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.237452496060094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070902176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0324954449996566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070908128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0424058732777555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070907696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.24893926391987908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070905440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.950456278511058) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5274237595289006) _gate_q_1;
  ry(-1.5274237595289006) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.950456278511058) _gate_q_0;
}
gate cu1_5070899440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5332895638768984) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5332895638768984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5332895638768984) _gate_q_1;
}
gate cu3_5070906592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9779877490302242) _gate_q_0;
  u1(0.22230737344710638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3246466034182054, 0, -2.9779877490302242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3246466034182054, 2.755680375583118, 0) _gate_q_1;
}
gate cu3_5070908272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1699049363513359) _gate_q_0;
  u1(-0.8818917529765358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1890219433863956, 0, -1.1699049363513359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1890219433863956, 2.0517966893278716, 0) _gate_q_1;
}
gate xx_plus_yy_5070900976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.42413768996493456) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.08723467628066) _gate_q_1;
  ry(-3.08723467628066) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.42413768996493456) _gate_q_0;
}
gate rzz_5070910048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.170879283742487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070902272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5393080461859965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070907312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.814317927005759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070897232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3434688833650412) _gate_q_0;
  u1(-1.3283293857214813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8582881587278613, 0, -2.3434688833650412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8582881587278613, 3.6717982690865223, 0) _gate_q_1;
}
gate cu3_5070899584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.892995055528343) _gate_q_0;
  u1(0.10804704060838488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7136070104765877, 0, -3.892995055528343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7136070104765877, 3.784948014919958, 0) _gate_q_1;
}
gate rxx_5070906112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.910355759615289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070899200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6911352786694454) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7266172428196795) _gate_q_0;
  ry(-2.7266172428196795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6911352786694454) _gate_q_1;
}
gate rzx_5070909184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5545077497929098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070913408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.821442902964791) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5070898192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.927904090911813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070898912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.386560014190682) _gate_q_0;
  u1(0.335159696993673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.538969640290744, 0, -4.386560014190682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.538969640290744, 4.051400317197008, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5070910144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.33118697999444036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  y _gate_q_3;
  crx(1.3889305437021613) _gate_q_15, _gate_q_16;
  cu3_5070897472(4.99647186590206, 3.949207406587658, 1.837691778676783) _gate_q_13, _gate_q_2;
  cp(4.048150117528929) _gate_q_6, _gate_q_14;
  crx(0.8894233905957378) _gate_q_8, _gate_q_11;
  rzz_5070905152(2.5080331128203004) _gate_q_10, _gate_q_9;
  ry(2.7500495367325746) _gate_q_5;
  cs _gate_q_1, _gate_q_12;
  sx _gate_q_4;
  dcx _gate_q_0, _gate_q_7;
  U(4.394774051125074, 0.9874238509496727, 1.0164104411374448) _gate_q_1;
  crx(2.0951504294222563) _gate_q_7, _gate_q_0;
  rz(2.8400200133514755) _gate_q_16;
  z _gate_q_3;
  ecr _gate_q_14, _gate_q_10;
  u2(6.0737123376228705, 0.38231587949126417) _gate_q_2;
  crx(5.2412525660165645) _gate_q_8, _gate_q_13;
  ry(1.7450573992859553) _gate_q_11;
  csdg _gate_q_6, _gate_q_12;
  csdg _gate_q_15, _gate_q_4;
  y _gate_q_9;
  sxdg _gate_q_5;
  cu3_5070903568(5.560430008418466, 3.7891773036320573, 0.01760993144296341) _gate_q_11, _gate_q_5;
  h _gate_q_1;
  rzz_5070898768(2.1626863169589883) _gate_q_0, _gate_q_9;
  p(3.0091397679661442) _gate_q_3;
  ryy_5070912400(4.237452496060094) _gate_q_7, _gate_q_10;
  rxx_5070902176(2.0324954449996566) _gate_q_14, _gate_q_4;
  p(2.07719773362547) _gate_q_8;
  rxx_5070908128(4.0424058732777555) _gate_q_2, _gate_q_16;
  id _gate_q_6;
  id _gate_q_15;
  U(2.690254813914439, 5.544085504658516, 3.3794369625617504) _gate_q_13;
  u1(5.957316559271676) _gate_q_12;
  cp(3.0428529002997133) _gate_q_9, _gate_q_4;
  h _gate_q_10;
  crz(3.1147640535828063) _gate_q_2, _gate_q_1;
  crx(5.148786686464307) _gate_q_0, _gate_q_5;
  cz _gate_q_14, _gate_q_15;
  z _gate_q_8;
  cy _gate_q_16, _gate_q_3;
  cz _gate_q_7, _gate_q_13;
  y _gate_q_6;
  sdg _gate_q_12;
  z _gate_q_11;
  sdg _gate_q_13;
  dcx _gate_q_9, _gate_q_11;
  ry(3.5209125379074417) _gate_q_14;
  ecr _gate_q_1, _gate_q_5;
  y _gate_q_2;
  rzz_5070907696(0.24893926391987908) _gate_q_0, _gate_q_16;
  t _gate_q_4;
  sdg _gate_q_10;
  xx_plus_yy_5070905440(3.0548475190578013, 3.950456278511058) _gate_q_15, _gate_q_7;
  sx _gate_q_8;
  ecr _gate_q_12, _gate_q_3;
  U(0.3180255664986838, 5.581315813565096, 2.8053365125952032) _gate_q_6;
  cu1_5070899440(3.066579127753797) _gate_q_16, _gate_q_6;
  cu3_5070906592(2.649293206836411, 2.755680375583118, 3.2002951224773306) _gate_q_15, _gate_q_13;
  rz(1.0264903351323247) _gate_q_11;
  cu3_5070908272(4.378043886772791, 2.0517966893278716, 0.28801318337480003) _gate_q_5, _gate_q_8;
  z _gate_q_2;
  cu(3.837517263489604, 5.704175885253254, 0.896229939713363, 2.137467741741675) _gate_q_1, _gate_q_14;
  dcx _gate_q_10, _gate_q_3;
  cy _gate_q_4, _gate_q_7;
  cz _gate_q_0, _gate_q_9;
  t _gate_q_12;
  rx(4.8139496614785715) _gate_q_16;
  xx_plus_yy_5070900976(6.17446935256132, 0.42413768996493456) _gate_q_8, _gate_q_1;
  rzz_5070910048(6.170879283742487) _gate_q_7, _gate_q_5;
  rxx_5070902272(3.5393080461859965) _gate_q_12, _gate_q_15;
  rzx_5070907312(5.814317927005759) _gate_q_0, _gate_q_14;
  csdg _gate_q_2, _gate_q_11;
  cu(5.532209866531496, 0.19342282285733176, 1.938047440827816, 5.114337674887206) _gate_q_13, _gate_q_6;
  sx _gate_q_3;
  sxdg _gate_q_9;
  cz _gate_q_4, _gate_q_10;
  cy _gate_q_4, _gate_q_13;
  crx(5.413541513625316) _gate_q_16, _gate_q_11;
  u1(3.5601186415574904) _gate_q_9;
  tdg _gate_q_14;
  cu3_5070897232(1.7165763174557227, 3.6717982690865223, 1.0151394976435597) _gate_q_0, _gate_q_2;
  cu3_5070899584(1.4272140209531754, 3.784948014919958, 4.001042096136728) _gate_q_15, _gate_q_7;
  rxx_5070906112(5.910355759615289) _gate_q_3, _gate_q_10;
  xx_minus_yy_5070899200(5.453234485639359, 3.6911352786694454) _gate_q_12, _gate_q_5;
  t _gate_q_6;
  id _gate_q_1;
  tdg _gate_q_8;
  y _gate_q_0;
  sdg _gate_q_14;
  ch _gate_q_7, _gate_q_11;
  rzx_5070909184(1.5545077497929098) _gate_q_1, _gate_q_16;
  ryy_5070913408(4.821442902964791) _gate_q_13, _gate_q_4;
  u1(3.912408832844415) _gate_q_15;
  rzx_5070898192(4.927904090911813) _gate_q_3, _gate_q_9;
  z _gate_q_12;
  swap _gate_q_5, _gate_q_2;
  swap _gate_q_8, _gate_q_6;
  u3(2.7667814811372455, 0.22584192526138955, 1.9762012306811794) _gate_q_10;
  s _gate_q_15;
  x _gate_q_9;
  u1(4.498534495362257) _gate_q_8;
  cu3_5070898912(5.077939280581488, 4.051400317197008, 4.721719711184354) _gate_q_0, _gate_q_5;
  y _gate_q_2;
  iswap _gate_q_3, _gate_q_7;
  x _gate_q_12;
  ryy_5070910144(0.33118697999444036) _gate_q_10, _gate_q_1;
  crx(2.7869609618358124) _gate_q_11, _gate_q_6;
  crx(1.6287433866519352) _gate_q_14, _gate_q_16;
  crz(5.055326048149241) _gate_q_4, _gate_q_13;
}
gate xx_minus_yy_5070899392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.714665323679757) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0225533612202127) _gate_q_0;
  ry(-2.0225533612202127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.714665323679757) _gate_q_1;
}
gate rzz_5070904144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.664106403517538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070899728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4006561949166045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070900352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.951764692147966, 0.24998158561840422, -0.24998158561840422) _gate_q_0;
}
gate cu1_5070913072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5933772489474345) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5933772489474345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5933772489474345) _gate_q_1;
}
gate rxx_5070913216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8254918886880738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070909520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.488018789604241) _gate_q_0;
  u1(0.072866482309635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6487408061950393, 0, -2.488018789604241) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6487408061950393, 2.415152307294606, 0) _gate_q_1;
}
gate rzx_5070899968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9085633750025264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5070588480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.389237101740532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070600768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.429052433115255) _gate_q_0;
  u1(1.026511914979779) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4456049737801069, 0, -3.429052433115255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4456049737801069, 2.4025405181354764, 0) _gate_q_1;
}
gate rzz_5070592560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.673858053209745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070588672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0102844329178136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070589728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5104308264793359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070599712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4537882434056772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070586272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.470232355772169) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2707143520715188) _gate_q_1;
  ry(-0.2707143520715188) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.470232355772169) _gate_q_0;
}
gate r_5070598896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8027862602028177, -1.490716283547541, 1.490716283547541) _gate_q_0;
}
gate ryy_5070588864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7634700006829569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070593616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.091053415611866) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9703983354002053) _gate_q_1;
  ry(-2.9703983354002053) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.091053415611866) _gate_q_0;
}
gate xx_minus_yy_5070592128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.65969935393481) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8429752415031038) _gate_q_0;
  ry(-1.8429752415031038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.65969935393481) _gate_q_1;
}
gate cu1_5070596208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5745206009032704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5745206009032704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5745206009032704) _gate_q_1;
}
gate xx_plus_yy_5070600864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1891735642533425) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.546838025209676) _gate_q_1;
  ry(-2.546838025209676) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1891735642533425) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  crx(2.7238226634536455) _gate_q_0, _gate_q_16;
  cx _gate_q_10, _gate_q_8;
  csdg _gate_q_5, _gate_q_13;
  u3(1.8627399379457852, 0.04598812929847319, 1.6139002823090234) _gate_q_1;
  cry(1.9827591843958792) _gate_q_2, _gate_q_12;
  cp(2.0152246164916248) _gate_q_9, _gate_q_11;
  h _gate_q_4;
  t _gate_q_14;
  U(4.662996608887084, 2.29260934189164, 3.7746578341227544) _gate_q_7;
  cz _gate_q_15, _gate_q_3;
  sdg _gate_q_6;
  sxdg _gate_q_6;
  swap _gate_q_1, _gate_q_3;
  xx_minus_yy_5070899392(4.045106722440425, 4.714665323679757) _gate_q_4, _gate_q_9;
  rzz_5070904144(4.664106403517538) _gate_q_12, _gate_q_13;
  rxx_5070899728(1.4006561949166045) _gate_q_14, _gate_q_7;
  rz(4.0186428985003175) _gate_q_16;
  cry(4.569022186505448) _gate_q_15, _gate_q_10;
  r_5070900352(1.951764692147966, 1.8207779124133008) _gate_q_0;
  cu1_5070913072(1.186754497894869) _gate_q_2, _gate_q_8;
  dcx _gate_q_5, _gate_q_11;
  rz(3.2524780645376583) _gate_q_1;
  p(3.5478824339062665) _gate_q_6;
  x _gate_q_4;
  s _gate_q_3;
  sdg _gate_q_7;
  ch _gate_q_11, _gate_q_0;
  z _gate_q_9;
  rxx_5070913216(1.8254918886880738) _gate_q_2, _gate_q_16;
  id _gate_q_13;
  cu3_5070909520(5.2974816123900785, 2.415152307294606, 2.560885271913876) _gate_q_5, _gate_q_8;
  cu(3.300489633771142, 0.8136622943161415, 1.3307129168200762, 5.558525686516298) _gate_q_10, _gate_q_12;
  cs _gate_q_15, _gate_q_14;
  rzx_5070899968(2.9085633750025264) _gate_q_10, _gate_q_5;
  h _gate_q_11;
  sxdg _gate_q_8;
  id _gate_q_6;
  z _gate_q_7;
  csdg _gate_q_1, _gate_q_4;
  csdg _gate_q_12, _gate_q_13;
  csdg _gate_q_0, _gate_q_9;
  csx _gate_q_16, _gate_q_15;
  u1(5.126090422178378) _gate_q_2;
  csx _gate_q_14, _gate_q_3;
  z _gate_q_10;
  csx _gate_q_14, _gate_q_2;
  z _gate_q_9;
  cu(0.9212331966199799, 2.738044127634661, 2.6821616242209543, 3.8587082434266375) _gate_q_6, _gate_q_4;
  rxx_5070588480(2.389237101740532) _gate_q_3, _gate_q_16;
  crx(5.70511683098671) _gate_q_15, _gate_q_5;
  u1(0.8706354958451475) _gate_q_13;
  p(1.8242812415066545) _gate_q_7;
  tdg _gate_q_12;
  tdg _gate_q_8;
  cu3_5070600768(2.8912099475602138, 2.4025405181354764, 4.455564348095034) _gate_q_11, _gate_q_1;
  x _gate_q_0;
  sxdg _gate_q_3;
  rzz_5070592560(4.673858053209745) _gate_q_8, _gate_q_10;
  cz _gate_q_4, _gate_q_12;
  rzz_5070588672(1.0102844329178136) _gate_q_5, _gate_q_0;
  dcx _gate_q_2, _gate_q_11;
  csdg _gate_q_7, _gate_q_6;
  rx(4.589487902189085) _gate_q_16;
  tdg _gate_q_15;
  t _gate_q_14;
  rzx_5070589728(0.5104308264793359) _gate_q_1, _gate_q_9;
  tdg _gate_q_13;
  rzx_5070599712(3.4537882434056772) _gate_q_3, _gate_q_0;
  u2(1.7174256371463816, 1.3106941311689417) _gate_q_7;
  h _gate_q_6;
  U(1.2940465545062279, 2.9964854275309625, 0.9581657333168593) _gate_q_2;
  cu(6.104765428920786, 5.452618075477399, 4.626100445018352, 4.348257447342684) _gate_q_11, _gate_q_5;
  crx(3.6431479139327934) _gate_q_10, _gate_q_16;
  xx_plus_yy_5070586272(0.5414287041430376, 2.470232355772169) _gate_q_15, _gate_q_9;
  r_5070598896(2.8027862602028177, 0.08008004324735553) _gate_q_14;
  ecr _gate_q_1, _gate_q_8;
  ryy_5070588864(0.7634700006829569) _gate_q_4, _gate_q_12;
  sx _gate_q_13;
  u2(2.4772509617067526, 3.223407311673052) _gate_q_5;
  U(1.48365392870751, 2.6006372873574106, 4.684942938268505) _gate_q_8;
  crx(3.4222573846780766) _gate_q_11, _gate_q_14;
  rz(3.8330404036466508) _gate_q_9;
  cs _gate_q_13, _gate_q_6;
  cu(5.541500557766836, 0.45706218299967294, 0.815378875944924, 1.7947679024620258) _gate_q_3, _gate_q_15;
  sxdg _gate_q_12;
  cry(1.5862418867201529) _gate_q_16, _gate_q_4;
  id _gate_q_7;
  z _gate_q_10;
  p(0.3472393265776475) _gate_q_2;
  xx_plus_yy_5070593616(5.9407966708004105, 4.091053415611866) _gate_q_0, _gate_q_1;
  crz(1.039541292481405) _gate_q_1, _gate_q_5;
  cy _gate_q_11, _gate_q_12;
  cs _gate_q_0, _gate_q_2;
  h _gate_q_14;
  xx_minus_yy_5070592128(3.6859504830062075, 4.65969935393481) _gate_q_9, _gate_q_13;
  ry(1.8612484075419242) _gate_q_16;
  cu1_5070596208(5.149041201806541) _gate_q_3, _gate_q_8;
  dcx _gate_q_4, _gate_q_10;
  u1(3.758550586915156) _gate_q_7;
  csdg _gate_q_6, _gate_q_15;
  U(1.1085592986606534, 1.3597125902485203, 3.0974843880129255) _gate_q_13;
  s _gate_q_0;
  rz(5.309067900119106) _gate_q_15;
  tdg _gate_q_16;
  cs _gate_q_3, _gate_q_1;
  cs _gate_q_7, _gate_q_5;
  x _gate_q_14;
  id _gate_q_4;
  rx(6.2496231480315885) _gate_q_8;
  xx_plus_yy_5070600864(5.093676050419352, 2.1891735642533425) _gate_q_11, _gate_q_6;
  cs _gate_q_12, _gate_q_10;
  crx(2.203251917591343) _gate_q_2, _gate_q_9;
}