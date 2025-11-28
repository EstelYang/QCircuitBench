gate r_5108210128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1987674055742958, 3.3526638108303777, -3.3526638108303777) _gate_q_0;
}
gate cu3_5108211424(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6856208398740433) _gate_q_0;
  u1(0.29390380415965356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6779452891562989, 0, -2.6856208398740433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6779452891562989, 2.3917170357143895, 0) _gate_q_1;
}
gate rxx_5108216416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.895467196638181) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate ryy_5108216368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3999554572779096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108215984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8356935981752553, 1.3805734039650885, -1.3805734039650885) _gate_q_0;
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
gate r_5108216512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.713472686766951, 0.794831312012684, -0.794831312012684) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5108216608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7345460736426377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5108216320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.975522202177536) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.973998976015075) _gate_q_0;
  ry(-2.973998976015075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.975522202177536) _gate_q_1;
}
gate cu3_5108216032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.726410641605147) _gate_q_0;
  u1(-1.8513021208614933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3615152704625717, 0, -2.726410641605147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3615152704625717, 4.57771276246664, 0) _gate_q_1;
}
gate r_5108218624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9071442803164054, 1.2236947103993545, -1.2236947103993545) _gate_q_0;
}
gate rzz_5108210704(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5235168936824444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5108210176(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0007345053735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108210032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.390401306838221, 0.7378724782513268, -0.7378724782513268) _gate_q_0;
}
gate xx_plus_yy_5108217952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4705395367845218) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2298711692281037) _gate_q_1;
  ry(-2.2298711692281037) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4705395367845218) _gate_q_0;
}
gate r_5108218096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.23216944924288, 0.5617470333918049, -0.5617470333918049) _gate_q_0;
}
gate cu1_5108217856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.213436805124562) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.213436805124562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.213436805124562) _gate_q_1;
}
gate r_5108217904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.836810497352689, 2.1078940789011007, -2.1078940789011007) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cy _gate_q_11, _gate_q_3;
  rz(2.082477767593013) _gate_q_0;
  r_5108210128(1.1987674055742958, 4.923460137625274) _gate_q_6;
  crx(0.99949323198577) _gate_q_1, _gate_q_10;
  cu3_5108211424(1.3558905783125978, 2.3917170357143895, 2.9795246440336967) _gate_q_9, _gate_q_8;
  cu(4.135135810772073, 4.01833983871432, 2.3663885145292256, 2.188015927793317) _gate_q_4, _gate_q_7;
  id _gate_q_5;
  u3(1.0764578298904712, 2.852911092444581, 5.099077501894138) _gate_q_2;
  h _gate_q_2;
  cu(2.486482557338167, 5.458405328150217, 1.4953009560155623, 6.215480213570051) _gate_q_8, _gate_q_7;
  p(0.42363431291310527) _gate_q_5;
  t _gate_q_0;
  cu(2.9088357821688535, 5.491658498494256, 2.9299775574925864, 1.3328617915208927) _gate_q_3, _gate_q_4;
  ry(5.857912730238904) _gate_q_1;
  cx _gate_q_6, _gate_q_9;
  u2(0.3317355558853855, 3.552650865808561) _gate_q_10;
  sx _gate_q_11;
  rxx_5108216416(5.895467196638181) _gate_q_8, _gate_q_10;
  csx _gate_q_11, _gate_q_2;
  ecr _gate_q_1, _gate_q_3;
  ryy_5108216368(2.3999554572779096) _gate_q_4, _gate_q_0;
  rx(5.65379372436125) _gate_q_7;
  r_5108215984(1.8356935981752553, 2.951369730759985) _gate_q_9;
  cu(4.100220199999088, 5.230333847433848, 4.054624048130847, 1.4775722551724038) _gate_q_6, _gate_q_5;
  h _gate_q_6;
  iswap _gate_q_11, _gate_q_0;
  u3(3.7345866111935675, 0.45527912701435647, 3.005416835141796) _gate_q_4;
  sx _gate_q_10;
  dcx _gate_q_9, _gate_q_5;
  iswap _gate_q_1, _gate_q_2;
  cz _gate_q_3, _gate_q_7;
  r_5108216512(5.713472686766951, 2.3656276388075805) _gate_q_8;
  csdg _gate_q_5, _gate_q_8;
  ryy_5108216608(3.7345460736426377) _gate_q_1, _gate_q_3;
  cy _gate_q_7, _gate_q_2;
  crz(5.104667107098921) _gate_q_4, _gate_q_9;
  xx_minus_yy_5108216320(5.94799795203015, 5.975522202177536) _gate_q_6, _gate_q_10;
  ch _gate_q_0, _gate_q_11;
  crz(5.478364734008492) _gate_q_0, _gate_q_5;
  z _gate_q_8;
  x _gate_q_2;
  swap _gate_q_1, _gate_q_6;
  cz _gate_q_9, _gate_q_3;
  cp(0.7586327377204088) _gate_q_4, _gate_q_7;
  ecr _gate_q_11, _gate_q_10;
  t _gate_q_11;
  U(5.579666422379081, 0.18420188307435667, 1.0682668247382394) _gate_q_0;
  cu3_5108216032(4.723030540925143, 4.57771276246664, 0.8751085207436535) _gate_q_1, _gate_q_3;
  sx _gate_q_4;
  crz(0.6601833864976651) _gate_q_5, _gate_q_2;
  y _gate_q_6;
  csdg _gate_q_7, _gate_q_8;
  s _gate_q_9;
  r_5108218624(2.9071442803164054, 2.794491037194251) _gate_q_10;
  cy _gate_q_11, _gate_q_3;
  cry(3.929964082764012) _gate_q_0, _gate_q_2;
  s _gate_q_4;
  rx(4.9276302224672595) _gate_q_10;
  z _gate_q_9;
  rzz_5108210704(1.5235168936824444) _gate_q_6, _gate_q_7;
  x _gate_q_5;
  sx _gate_q_8;
  sdg _gate_q_1;
  sx _gate_q_7;
  ecr _gate_q_10, _gate_q_0;
  ryy_5108210176(1.0007345053735) _gate_q_6, _gate_q_11;
  p(6.009451171935598) _gate_q_9;
  sx _gate_q_3;
  r_5108210032(4.390401306838221, 2.3086688050462234) _gate_q_8;
  dcx _gate_q_2, _gate_q_5;
  sx _gate_q_1;
  U(5.261711043478901, 3.794847602650528, 5.6316116269637515) _gate_q_4;
  ch _gate_q_2, _gate_q_6;
  xx_plus_yy_5108217952(4.459742338456207, 3.4705395367845218) _gate_q_3, _gate_q_1;
  r_5108218096(6.23216944924288, 2.1325433601867014) _gate_q_0;
  cu1_5108217856(4.426873610249124) _gate_q_10, _gate_q_7;
  ch _gate_q_9, _gate_q_8;
  cy _gate_q_11, _gate_q_5;
  r_5108217904(3.836810497352689, 3.6786904056959973) _gate_q_4;
}
gate xx_plus_yy_5107791200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2101389465259602) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2511766922776122) _gate_q_1;
  ry(-0.2511766922776122) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2101389465259602) _gate_q_0;
}
gate rzx_5107790000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7762869579735565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107790528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4480060448653878) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4480060448653878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4480060448653878) _gate_q_1;
}
gate rzz_5107791296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8929926160604144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107789808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8080226682719984) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6815170181833891) _gate_q_0;
  ry(-0.6815170181833891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8080226682719984) _gate_q_1;
}
gate xx_minus_yy_5107789760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.581589786350652) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2721933682226418) _gate_q_0;
  ry(-1.2721933682226418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.581589786350652) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5107791056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8315474220343977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107790336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.394619197387565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107790624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.951138821269273) _gate_q_0;
  u1(0.804059247193289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2272634015875532, 0, -4.951138821269273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2272634015875532, 4.147079574075984, 0) _gate_q_1;
}
gate rzx_5107790048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.867148465483903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107790432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9672906644045125) _gate_q_0;
  u1(-2.2900619002731877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6980191383906456, 0, -2.9672906644045125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6980191383906456, 5.2573525646777, 0) _gate_q_1;
}
gate r_5107789712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.811472019720885, -1.0926106367287276, 1.0926106367287276) _gate_q_0;
}
gate rzx_5107788560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3322608299091276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107788128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6578836386212015, 1.8973373620577858, -1.8973373620577858) _gate_q_0;
}
gate cu3_5107788176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3991938055237267) _gate_q_0;
  u1(2.1997923077971113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4483688348495156, 0, -3.3991938055237267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4483688348495156, 1.1994014977266154, 0) _gate_q_1;
}
gate cu3_5107787312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.59761147402447) _gate_q_0;
  u1(-1.8164308104571616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5424762698725516, 0, -3.59761147402447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5424762698725516, 5.414042284481631, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  xx_plus_yy_5107791200(0.5023533845552244, 1.2101389465259602) _gate_q_8, _gate_q_0;
  sxdg _gate_q_6;
  rzx_5107790000(1.7762869579735565) _gate_q_5, _gate_q_2;
  csx _gate_q_7, _gate_q_4;
  csdg _gate_q_3, _gate_q_1;
  id _gate_q_9;
  cu1_5107790528(4.8960120897307755) _gate_q_10, _gate_q_11;
  rzz_5107791296(0.8929926160604144) _gate_q_2, _gate_q_4;
  xx_minus_yy_5107789808(1.3630340363667781, 2.8080226682719984) _gate_q_3, _gate_q_8;
  x _gate_q_10;
  xx_minus_yy_5107789760(2.5443867364452837, 4.581589786350652) _gate_q_0, _gate_q_5;
  rx(2.1819302744473665) _gate_q_7;
  ecr _gate_q_9, _gate_q_6;
  cs _gate_q_1, _gate_q_11;
  cz _gate_q_0, _gate_q_4;
  rzz_5107791056(2.8315474220343977) _gate_q_10, _gate_q_5;
  u1(2.5374086896309382) _gate_q_8;
  ecr _gate_q_11, _gate_q_7;
  rz(5.695369101048211) _gate_q_3;
  cu(1.0703614662381162, 6.231921717998923, 1.4633046663915104, 5.219707408105869) _gate_q_9, _gate_q_1;
  z _gate_q_2;
  p(2.014172517862306) _gate_q_6;
  s _gate_q_5;
  rzz_5107790336(4.394619197387565) _gate_q_3, _gate_q_2;
  cu3_5107790624(2.4545268031751064, 4.147079574075984, 5.755198068462562) _gate_q_8, _gate_q_1;
  swap _gate_q_4, _gate_q_6;
  rzx_5107790048(3.867148465483903) _gate_q_0, _gate_q_9;
  cu3_5107790432(3.396038276781291, 5.2573525646777, 0.677228764131325) _gate_q_10, _gate_q_7;
  y _gate_q_11;
  ecr _gate_q_6, _gate_q_10;
  p(1.0151944374434145) _gate_q_9;
  y _gate_q_7;
  ecr _gate_q_1, _gate_q_2;
  swap _gate_q_5, _gate_q_0;
  sxdg _gate_q_11;
  ry(6.10151776144431) _gate_q_3;
  crx(1.111108048361276) _gate_q_8, _gate_q_4;
  csdg _gate_q_4, _gate_q_5;
  h _gate_q_6;
  cx _gate_q_8, _gate_q_9;
  u2(5.079380992167955, 3.9297086067512876) _gate_q_11;
  r_5107789712(1.811472019720885, 0.47818569006616884) _gate_q_2;
  z _gate_q_0;
  swap _gate_q_3, _gate_q_7;
  cu(2.3126838572197483, 4.0604549511124635, 5.1865902414614675, 2.0993495865105554) _gate_q_10, _gate_q_1;
  ecr _gate_q_4, _gate_q_7;
  rzx_5107788560(1.3322608299091276) _gate_q_8, _gate_q_9;
  csx _gate_q_6, _gate_q_0;
  y _gate_q_3;
  rx(0.291992934060445) _gate_q_5;
  csdg _gate_q_2, _gate_q_10;
  h _gate_q_1;
  sxdg _gate_q_11;
  t _gate_q_11;
  U(3.6373639777803475, 4.138836159240028, 5.79641175181596) _gate_q_5;
  sxdg _gate_q_10;
  y _gate_q_4;
  cu(3.207621445789362, 5.007692446996541, 3.585647177199091, 2.2764245759395667) _gate_q_0, _gate_q_3;
  x _gate_q_8;
  U(1.4632165473990935, 2.949918854002768, 3.335455153211165) _gate_q_2;
  p(3.5988154375559462) _gate_q_1;
  csdg _gate_q_7, _gate_q_6;
  r_5107788128(1.6578836386212015, 3.4681336888526824) _gate_q_9;
  crz(6.2118381274750725) _gate_q_1, _gate_q_10;
  swap _gate_q_7, _gate_q_8;
  iswap _gate_q_0, _gate_q_3;
  cu3_5107788176(2.8967376696990312, 1.1994014977266154, 5.598986113320838) _gate_q_11, _gate_q_4;
  U(3.4863458901529927, 2.1841240828548836, 5.22030838043857) _gate_q_6;
  cx _gate_q_5, _gate_q_9;
  p(2.16430759797827) _gate_q_2;
  cu(1.9527258065058328, 0.8583002989098643, 1.6616176779861522, 2.832854456115804) _gate_q_4, _gate_q_11;
  rx(1.631153890129419) _gate_q_1;
  y _gate_q_3;
  rz(0.09446900140236286) _gate_q_6;
  rz(6.055898734077345) _gate_q_7;
  crx(2.300311576717539) _gate_q_9, _gate_q_5;
  y _gate_q_0;
  cu3_5107787312(3.084952539745103, 5.414042284481631, 1.7811806635673082) _gate_q_2, _gate_q_10;
  tdg _gate_q_8;
}