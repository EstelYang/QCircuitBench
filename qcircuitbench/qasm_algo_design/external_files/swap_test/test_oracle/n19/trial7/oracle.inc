gate rzz_5116473136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.4825964420057165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5116462528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.019886170645168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116465408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.806516576065247) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.806516576065247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.806516576065247) _gate_q_1;
}
gate rxx_5116464688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13871054645458208) _gate_q_1;
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
gate xx_plus_yy_5116472992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.3708587077642513) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.752464138905841) _gate_q_1;
  ry(-1.752464138905841) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.3708587077642513) _gate_q_0;
}
gate cu1_5116464112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1107721670985105) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1107721670985105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1107721670985105) _gate_q_1;
}
gate rzx_5116464640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.24693940610600562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5116463056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.005260076859019) _gate_q_0;
  u1(-0.13432582151617556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.09977362853150307, 0, -5.005260076859019) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.09977362853150307, 5.139585898375195, 0) _gate_q_1;
}
gate xx_minus_yy_5116469488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9961081625727184) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5008160227256675) _gate_q_0;
  ry(-1.5008160227256675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9961081625727184) _gate_q_1;
}
gate rzx_5116473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.948787381992009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116462096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.053347329494363, -0.7208518779512945, 0.7208518779512945) _gate_q_0;
}
gate r_5116477312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.322849519484094, 2.221287027274068, -2.221287027274068) _gate_q_0;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5116463680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.4821624417717745) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.447262648008841) _gate_q_1;
  ry(-2.447262648008841) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.4821624417717745) _gate_q_0;
}
gate r_5116464016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.01375011794767, 0.86419757405822, -0.86419757405822) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5116469872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.751040520676362) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0683808158725263) _gate_q_1;
  ry(-2.0683808158725263) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.751040520676362) _gate_q_0;
}
gate cu1_5116474240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.149108079032591) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.149108079032591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.149108079032591) _gate_q_1;
}
gate cu1_5116472944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1052980877200356) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1052980877200356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1052980877200356) _gate_q_1;
}
gate rzz_5116467904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7689272843772581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5116473904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.692243932815301) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116462000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.172690375593578) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7871479929912103) _gate_q_0;
  ry(-0.7871479929912103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.172690375593578) _gate_q_1;
}
gate rxx_5116475584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9018020612721083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116475200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.177653434840344) _gate_q_1;
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
gate rzz_5116464208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.654490778445108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5116473088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.753860530920887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5116476880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3511161896814403) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3511161896814403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3511161896814403) _gate_q_1;
}
gate r_5116464400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.4447356789538315, 2.5682755029381115, -2.5682755029381115) _gate_q_0;
}
gate rzz_5116462576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3291464625691405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116471024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7932895866803332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116473712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.903876883112394) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.903876883112394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.903876883112394) _gate_q_1;
}
gate xx_plus_yy_5116470592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5357724059845054) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6910774212469752) _gate_q_1;
  ry(-1.6910774212469752) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5357724059845054) _gate_q_0;
}
gate rzz_5116465552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.646214390519891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116474384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.916888926512882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5116462048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3109433013667733) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3109433013667733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3109433013667733) _gate_q_1;
}
gate rxx_5116470304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8979754357525135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  s _gate_q_0;
  cry(5.126885189380551) _gate_q_15, _gate_q_7;
  rzz_5116473136(4.4825964420057165) _gate_q_2, _gate_q_17;
  sxdg _gate_q_5;
  swap _gate_q_3, _gate_q_11;
  h _gate_q_9;
  cy _gate_q_4, _gate_q_1;
  cp(0.4255414826919236) _gate_q_14, _gate_q_12;
  rzz_5116462528(3.019886170645168) _gate_q_16, _gate_q_8;
  cu1_5116465408(5.613033152130494) _gate_q_10, _gate_q_13;
  rxx_5116464688(0.13871054645458208) _gate_q_6, _gate_q_18;
  u3(5.972487166909644, 1.7810828653737905, 2.436745235859818) _gate_q_16;
  rz(4.3405356493305245) _gate_q_1;
  csx _gate_q_13, _gate_q_17;
  tdg _gate_q_12;
  xx_plus_yy_5116472992(3.504928277811682, 3.3708587077642513) _gate_q_11, _gate_q_8;
  csx _gate_q_7, _gate_q_2;
  s _gate_q_0;
  h _gate_q_3;
  cry(4.0663820241719995) _gate_q_18, _gate_q_15;
  cu(0.532814277589979, 3.135680486323967, 5.108088008897233, 1.2104147279018478) _gate_q_4, _gate_q_6;
  x _gate_q_5;
  z _gate_q_10;
  cu1_5116464112(2.221544334197021) _gate_q_14, _gate_q_9;
  p(0.3794316313487695) _gate_q_0;
  sxdg _gate_q_6;
  ry(3.684465616231587) _gate_q_13;
  h _gate_q_1;
  rx(4.549442474316018) _gate_q_9;
  rzx_5116464640(0.24693940610600562) _gate_q_5, _gate_q_12;
  csx _gate_q_4, _gate_q_10;
  cu3_5116463056(0.19954725706300613, 5.139585898375195, 4.870934255342844) _gate_q_18, _gate_q_8;
  id _gate_q_17;
  xx_minus_yy_5116469488(3.001632045451335, 3.9961081625727184) _gate_q_7, _gate_q_16;
  cx _gate_q_11, _gate_q_15;
  rzx_5116473424(2.948787381992009) _gate_q_2, _gate_q_14;
  r_5116462096(4.053347329494363, 0.8499444488436021) _gate_q_3;
  z _gate_q_13;
  y _gate_q_14;
  r_5116477312(4.322849519484094, 3.7920833540689647) _gate_q_16;
  cy _gate_q_8, _gate_q_9;
  ecr _gate_q_4, _gate_q_11;
  csdg _gate_q_7, _gate_q_12;
  csx _gate_q_5, _gate_q_3;
  cz _gate_q_15, _gate_q_10;
  xx_plus_yy_5116463680(4.894525296017682, 5.4821624417717745) _gate_q_2, _gate_q_17;
  ecr _gate_q_6, _gate_q_18;
  crz(6.18186271274048) _gate_q_0, _gate_q_1;
  r_5116464016(4.01375011794767, 2.4349939008531165) _gate_q_13;
  rx(0.2435358048893796) _gate_q_1;
  h _gate_q_2;
  U(0.3552738271370324, 5.887923509677162, 0.5439249836456084) _gate_q_14;
  iswap _gate_q_5, _gate_q_3;
  s _gate_q_0;
  id _gate_q_16;
  xx_plus_yy_5116469872(4.136761631745053, 5.751040520676362) _gate_q_6, _gate_q_8;
  cu(4.933073240482115, 5.928346014901494, 1.0761551237383244, 4.747248567891634) _gate_q_15, _gate_q_18;
  csdg _gate_q_11, _gate_q_4;
  cu1_5116474240(4.298216158065182) _gate_q_12, _gate_q_7;
  cu1_5116472944(6.210596175440071) _gate_q_9, _gate_q_10;
  p(6.265113223076886) _gate_q_17;
  rzz_5116467904(0.7689272843772581) _gate_q_14, _gate_q_15;
  rzx_5116473904(5.692243932815301) _gate_q_17, _gate_q_18;
  xx_minus_yy_5116462000(1.5742959859824206, 6.172690375593578) _gate_q_13, _gate_q_1;
  ch _gate_q_3, _gate_q_5;
  cz _gate_q_16, _gate_q_11;
  cx _gate_q_8, _gate_q_9;
  rxx_5116475584(3.9018020612721083) _gate_q_4, _gate_q_10;
  cx _gate_q_12, _gate_q_6;
  u1(3.662871954107373) _gate_q_0;
  sdg _gate_q_7;
  h _gate_q_2;
  rzx_5116475200(2.177653434840344) _gate_q_13, _gate_q_8;
  crz(2.0819512866820644) _gate_q_4, _gate_q_18;
  cs _gate_q_6, _gate_q_15;
  rzz_5116464208(4.654490778445108) _gate_q_2, _gate_q_3;
  x _gate_q_12;
  ecr _gate_q_14, _gate_q_16;
  sdg _gate_q_5;
  y _gate_q_7;
  t _gate_q_11;
  p(5.375244732268882) _gate_q_0;
  swap _gate_q_9, _gate_q_1;
  ryy_5116473088(2.753860530920887) _gate_q_17, _gate_q_10;
  cry(2.343457498783179) _gate_q_13, _gate_q_15;
  sdg _gate_q_18;
  cz _gate_q_8, _gate_q_12;
  cry(6.211949798088255) _gate_q_5, _gate_q_0;
  cy _gate_q_9, _gate_q_2;
  dcx _gate_q_14, _gate_q_16;
  sxdg _gate_q_6;
  cu1_5116476880(2.7022323793628806) _gate_q_11, _gate_q_1;
  rx(5.296553567733785) _gate_q_17;
  r_5116464400(5.4447356789538315, 4.139071829733008) _gate_q_10;
  u1(3.3873477889964656) _gate_q_4;
  u2(5.044805050339895, 6.119338204875908) _gate_q_3;
  tdg _gate_q_7;
  cu(1.7834760140413566, 3.873750263256853, 2.088794478809885, 0.46001814404650004) _gate_q_14, _gate_q_2;
  iswap _gate_q_0, _gate_q_13;
  rzz_5116462576(3.3291464625691405) _gate_q_10, _gate_q_11;
  cp(4.537982360838751) _gate_q_16, _gate_q_7;
  x _gate_q_6;
  z _gate_q_8;
  z _gate_q_17;
  rzz_5116471024(0.7932895866803332) _gate_q_9, _gate_q_4;
  ecr _gate_q_18, _gate_q_1;
  cu1_5116473712(3.807753766224788) _gate_q_5, _gate_q_12;
  xx_plus_yy_5116470592(3.3821548424939505, 0.5357724059845054) _gate_q_3, _gate_q_15;
  cy _gate_q_16, _gate_q_2;
  rzz_5116465552(2.646214390519891) _gate_q_7, _gate_q_4;
  rxx_5116474384(4.916888926512882) _gate_q_1, _gate_q_3;
  cu1_5116462048(4.621886602733547) _gate_q_17, _gate_q_11;
  cy _gate_q_14, _gate_q_0;
  rxx_5116470304(0.8979754357525135) _gate_q_8, _gate_q_10;
  sxdg _gate_q_15;
  sx _gate_q_5;
  x _gate_q_9;
  crz(1.9900299104291144) _gate_q_6, _gate_q_12;
  ecr _gate_q_13, _gate_q_18;
}
gate cu3_5116471360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.5358074949451569) _gate_q_0;
  u1(-0.3408758157434084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.576099898704922, 0, -0.5358074949451569) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.576099898704922, 0.8766833106885653, 0) _gate_q_1;
}
gate cu1_5116471216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9230860570263347) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9230860570263347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9230860570263347) _gate_q_1;
}
gate rxx_5116474816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5758467406675236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5116472800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5306082915647115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116470736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1265315546431958) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1265315546431958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1265315546431958) _gate_q_1;
}
gate rzx_5116475104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4657842734385015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116472032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.398638309494872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5116471504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9092339960283224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116466416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5131866435008425) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9060907139187135) _gate_q_0;
  ry(-1.9060907139187135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5131866435008425) _gate_q_1;
}
gate cu1_5116475344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7053794765515815) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7053794765515815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7053794765515815) _gate_q_1;
}
gate rzx_5116474480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.419024152319707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116473040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5081690515401567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116467376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3829885085334443) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7368433366034828) _gate_q_0;
  ry(-0.7368433366034828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3829885085334443) _gate_q_1;
}
gate cu3_5116469680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6998518868704444) _gate_q_0;
  u1(2.283456146748465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.0607958924987328, 0, -3.6998518868704444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.0607958924987328, 1.4163957401219789, 0) _gate_q_1;
}
gate cu1_5116473520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5435764567096621) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5435764567096621) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5435764567096621) _gate_q_1;
}
gate ryy_5116475296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7577278890001615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5116468480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.505840103498748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116469248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.002950989740134) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.34042284760251) _gate_q_1;
  ry(-2.34042284760251) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.002950989740134) _gate_q_0;
}
gate xx_plus_yy_5116476208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.947474621557406) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3485563918980152) _gate_q_1;
  ry(-2.3485563918980152) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.947474621557406) _gate_q_0;
}
gate cu1_5116464928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3113745218854866) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3113745218854866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3113745218854866) _gate_q_1;
}
gate rzz_5116463584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.578578827406244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116472848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.589754309802422) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.589754309802422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.589754309802422) _gate_q_1;
}
gate rzz_5116475872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.730533108425631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cu3_5116471360(5.152199797409844, 0.8766833106885653, 0.1949316792017485) _gate_q_16, _gate_q_7;
  U(2.3564473102333006, 5.963795981960419, 5.5933421210854855) _gate_q_0;
  t _gate_q_3;
  U(5.295446724769165, 4.285027522507718, 2.937347359624062) _gate_q_9;
  cry(2.3359803220800357) _gate_q_1, _gate_q_12;
  crx(2.359855600250815) _gate_q_11, _gate_q_6;
  u3(2.249540497498796, 3.8904823999753897, 6.16996822822902) _gate_q_15;
  cu1_5116471216(1.8461721140526695) _gate_q_4, _gate_q_14;
  ecr _gate_q_8, _gate_q_18;
  rx(3.245242954931605) _gate_q_10;
  rxx_5116474816(3.5758467406675236) _gate_q_17, _gate_q_13;
  ryy_5116472800(3.5306082915647115) _gate_q_5, _gate_q_2;
  cu1_5116470736(4.2530631092863915) _gate_q_7, _gate_q_17;
  z _gate_q_3;
  rzx_5116475104(0.4657842734385015) _gate_q_15, _gate_q_6;
  sdg _gate_q_4;
  tdg _gate_q_13;
  u3(5.038643283608943, 2.477153516147661, 2.558381606377784) _gate_q_10;
  u3(5.403889708571101, 0.1597665126314886, 4.632492109982234) _gate_q_16;
  ecr _gate_q_12, _gate_q_18;
  cp(0.5527698161342) _gate_q_11, _gate_q_2;
  cx _gate_q_1, _gate_q_9;
  cu(4.220968130159503, 5.547478671875486, 3.131576788714803, 1.5287801842391175) _gate_q_0, _gate_q_8;
  rzz_5116472032(5.398638309494872) _gate_q_5, _gate_q_14;
  crx(3.612429144331799) _gate_q_10, _gate_q_5;
  rzx_5116471504(0.9092339960283224) _gate_q_15, _gate_q_16;
  x _gate_q_12;
  xx_minus_yy_5116466416(3.812181427837427, 3.5131866435008425) _gate_q_3, _gate_q_6;
  u2(0.7620967688559581, 5.882092995744389) _gate_q_4;
  cu1_5116475344(5.410758953103163) _gate_q_11, _gate_q_17;
  crx(1.1219858442372943) _gate_q_9, _gate_q_7;
  rzx_5116474480(5.419024152319707) _gate_q_18, _gate_q_2;
  cz _gate_q_0, _gate_q_1;
  t _gate_q_8;
  crz(5.447335720751372) _gate_q_13, _gate_q_14;
  id _gate_q_9;
  cry(0.9121134882790265) _gate_q_4, _gate_q_17;
  p(1.6402520599136527) _gate_q_18;
  rzz_5116473040(2.5081690515401567) _gate_q_11, _gate_q_6;
  sxdg _gate_q_15;
  crz(3.5298608241885154) _gate_q_10, _gate_q_7;
  tdg _gate_q_12;
  cz _gate_q_5, _gate_q_13;
  id _gate_q_3;
  xx_minus_yy_5116467376(1.4736866732069656, 3.3829885085334443) _gate_q_16, _gate_q_1;
  x _gate_q_0;
  tdg _gate_q_14;
  cu3_5116469680(0.1215917849974656, 1.4163957401219789, 5.9833080336189095) _gate_q_2, _gate_q_8;
  csdg _gate_q_4, _gate_q_3;
  sdg _gate_q_1;
  u3(3.554365037819621, 2.4135900014143212, 1.6410276106215804) _gate_q_5;
  cu(0.25047174773562675, 5.0339203191910595, 4.221477110555941, 0.18171611515011163) _gate_q_8, _gate_q_10;
  iswap _gate_q_14, _gate_q_7;
  csx _gate_q_2, _gate_q_17;
  crz(4.87302767953198) _gate_q_12, _gate_q_13;
  x _gate_q_9;
  cz _gate_q_18, _gate_q_6;
  cy _gate_q_16, _gate_q_0;
  cu1_5116473520(3.0871529134193243) _gate_q_15, _gate_q_11;
  id _gate_q_3;
  csdg _gate_q_4, _gate_q_16;
  u1(2.3233186916297233) _gate_q_15;
  rz(5.799782581511216) _gate_q_0;
  sdg _gate_q_8;
  swap _gate_q_14, _gate_q_7;
  crx(3.6454095974847562) _gate_q_18, _gate_q_6;
  swap _gate_q_11, _gate_q_13;
  dcx _gate_q_12, _gate_q_2;
  rz(4.006984997454519) _gate_q_17;
  ryy_5116475296(2.7577278890001615) _gate_q_1, _gate_q_9;
  cry(0.18705956144580985) _gate_q_10, _gate_q_5;
  u3(6.1125424016872385, 2.470733580214631, 5.515066019865547) _gate_q_10;
  ry(4.979671892304022) _gate_q_0;
  tdg _gate_q_1;
  sxdg _gate_q_15;
  csx _gate_q_4, _gate_q_18;
  rzz_5116468480(3.505840103498748) _gate_q_7, _gate_q_6;
  csx _gate_q_8, _gate_q_11;
  xx_plus_yy_5116469248(4.68084569520502, 5.002950989740134) _gate_q_12, _gate_q_13;
  csdg _gate_q_14, _gate_q_17;
  ch _gate_q_2, _gate_q_16;
  crx(5.635878765039809) _gate_q_5, _gate_q_9;
  ry(6.2479184860161725) _gate_q_3;
  cu(2.967535528659322, 6.192911112464099, 5.970518931991117, 5.810405477816437) _gate_q_16, _gate_q_7;
  s _gate_q_11;
  csx _gate_q_0, _gate_q_18;
  rz(0.894161514673969) _gate_q_10;
  cry(4.127480020189331) _gate_q_4, _gate_q_2;
  u2(5.062275605466267, 2.620506830955727) _gate_q_14;
  z _gate_q_1;
  u3(3.8622447094905894, 3.4254852546479, 5.965903981202664) _gate_q_9;
  ecr _gate_q_5, _gate_q_15;
  y _gate_q_3;
  p(1.3802489293001041) _gate_q_17;
  u3(2.0257378386986056, 4.505415472129727, 3.229911623734616) _gate_q_13;
  sdg _gate_q_12;
  swap _gate_q_8, _gate_q_6;
  y _gate_q_11;
  xx_plus_yy_5116476208(4.6971127837960305, 2.947474621557406) _gate_q_6, _gate_q_2;
  cry(5.998996839182125) _gate_q_13, _gate_q_18;
  cu1_5116464928(4.622749043770973) _gate_q_12, _gate_q_14;
  p(4.936764401686817) _gate_q_10;
  rzz_5116463584(4.578578827406244) _gate_q_8, _gate_q_5;
  ch _gate_q_17, _gate_q_9;
  cp(3.242978417788735) _gate_q_0, _gate_q_7;
  h _gate_q_15;
  rz(0.1139717036268344) _gate_q_1;
  ry(3.7221839343828407) _gate_q_16;
  u1(1.3295877165228724) _gate_q_4;
  rx(3.9483838169262424) _gate_q_3;
  t _gate_q_12;
  cu1_5116472848(5.179508619604844) _gate_q_15, _gate_q_0;
  u3(1.5421907694422874, 1.0987466309558112, 1.4504512644213141) _gate_q_11;
  ecr _gate_q_8, _gate_q_18;
  csdg _gate_q_3, _gate_q_17;
  U(5.203161371658679, 0.6706732204981554, 0.7771796260684795) _gate_q_1;
  y _gate_q_6;
  sx _gate_q_9;
  csdg _gate_q_2, _gate_q_4;
  ch _gate_q_7, _gate_q_14;
  t _gate_q_13;
  rzz_5116475872(5.730533108425631) _gate_q_10, _gate_q_5;
  sx _gate_q_16;
}