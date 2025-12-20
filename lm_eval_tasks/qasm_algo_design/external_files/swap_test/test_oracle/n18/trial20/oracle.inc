gate rzx_5074502624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3953691069359522) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074502336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.725162928100473, 1.801945553445775, -1.801945553445775) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5074511840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2027052031438016) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2027052031438016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2027052031438016) _gate_q_1;
}
gate cu3_5074502432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4417364727763364) _gate_q_0;
  u1(-1.4462743107037306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1559125296091128, 0, -3.4417364727763364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1559125296091128, 4.888010783480067, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074504592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5019140899776555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074513568(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.366895993389136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074503728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0764116387700855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074509440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7050893640610876) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9314759747005832) _gate_q_0;
  ry(-1.9314759747005832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7050893640610876) _gate_q_1;
}
gate r_5074507088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.24544253113641, 1.2179054679665495, -1.2179054679665495) _gate_q_0;
}
gate rzz_5074515008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.1288989010017465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5074503872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3453617408237895) _gate_q_0;
  u1(-0.6345578884667573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2262677109989222, 0, -2.3453617408237895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2262677109989222, 2.9799196292905465, 0) _gate_q_1;
}
gate cu3_5074515200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0412669665813366) _gate_q_0;
  u1(1.4710618154447022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3958279280022086, 0, -3.0412669665813366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3958279280022086, 1.5702051511366346, 0) _gate_q_1;
}
gate xx_minus_yy_5074504352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0861792708014746) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4922757644315436) _gate_q_0;
  ry(-1.4922757644315436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0861792708014746) _gate_q_1;
}
gate xx_minus_yy_5074509632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.37991019959461) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3825646163006082) _gate_q_0;
  ry(-2.3825646163006082) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.37991019959461) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5074517072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9789932970913314) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9789932970913314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9789932970913314) _gate_q_1;
}
gate rzz_5074510784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.1660425435322574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074502912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1084623952745245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074511024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.252711009989857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074511168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.641996174476071) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9786041764894358) _gate_q_0;
  ry(-2.9786041764894358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.641996174476071) _gate_q_1;
}
gate cu1_5074517984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8350856665500109) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8350856665500109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8350856665500109) _gate_q_1;
}
gate xx_minus_yy_5074504112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.0356457364360345) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.07370331437694) _gate_q_0;
  ry(-2.07370331437694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.0356457364360345) _gate_q_1;
}
gate xx_plus_yy_5074517936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.13666730045286538) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.291513460009849) _gate_q_1;
  ry(-2.291513460009849) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.13666730045286538) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  swap _gate_q_2, _gate_q_6;
  p(6.230430401246442) _gate_q_17;
  tdg _gate_q_5;
  z _gate_q_4;
  rzx_5074502624(1.3953691069359522) _gate_q_9, _gate_q_13;
  u1(6.123148929829529) _gate_q_3;
  r_5074502336(4.725162928100473, 3.3727418802406715) _gate_q_10;
  swap _gate_q_0, _gate_q_14;
  id _gate_q_11;
  x _gate_q_15;
  u1(4.118245686298494) _gate_q_8;
  cs _gate_q_7, _gate_q_1;
  p(1.6487106334221717) _gate_q_12;
  sxdg _gate_q_16;
  cu1_5074511840(0.4054104062876032) _gate_q_2, _gate_q_13;
  cx _gate_q_15, _gate_q_11;
  cu3_5074502432(2.3118250592182257, 4.888010783480067, 1.9954621620726058) _gate_q_10, _gate_q_9;
  csdg _gate_q_0, _gate_q_14;
  sxdg _gate_q_17;
  swap _gate_q_8, _gate_q_6;
  u2(4.933119010409651, 2.780530735385448) _gate_q_12;
  cry(2.677080641603083) _gate_q_7, _gate_q_5;
  h _gate_q_16;
  crx(5.4407457796574406) _gate_q_4, _gate_q_3;
  U(3.99490965096236, 5.43248576584413, 4.050269892480521) _gate_q_1;
  x _gate_q_13;
  rzx_5074504592(1.5019140899776555) _gate_q_2, _gate_q_0;
  cy _gate_q_17, _gate_q_15;
  u3(4.642711348969262, 2.2686202096528154, 2.530655350030851) _gate_q_12;
  cs _gate_q_3, _gate_q_7;
  rzz_5074513568(3.366895993389136) _gate_q_9, _gate_q_4;
  rxx_5074503728(3.0764116387700855) _gate_q_14, _gate_q_6;
  u1(1.5673322176141795) _gate_q_8;
  h _gate_q_1;
  rz(5.850404096074373) _gate_q_5;
  cz _gate_q_10, _gate_q_11;
  id _gate_q_16;
  x _gate_q_5;
  h _gate_q_3;
  u1(4.491145386718237) _gate_q_4;
  id _gate_q_10;
  p(2.0079298534070165) _gate_q_6;
  xx_minus_yy_5074509440(3.8629519494011664, 2.7050893640610876) _gate_q_12, _gate_q_11;
  sdg _gate_q_14;
  sxdg _gate_q_15;
  cu(1.43606435212626, 0.8199858231542919, 5.716931768686222, 5.019802689946329) _gate_q_8, _gate_q_2;
  cx _gate_q_17, _gate_q_13;
  cz _gate_q_0, _gate_q_1;
  h _gate_q_7;
  z _gate_q_9;
  s _gate_q_16;
  r_5074507088(3.24544253113641, 2.788701794761446) _gate_q_16;
  y _gate_q_13;
  h _gate_q_12;
  t _gate_q_3;
  cx _gate_q_8, _gate_q_5;
  crx(5.155015560740548) _gate_q_2, _gate_q_14;
  cy _gate_q_11, _gate_q_9;
  rzz_5074515008(4.1288989010017465) _gate_q_6, _gate_q_17;
  csx _gate_q_10, _gate_q_4;
  csdg _gate_q_0, _gate_q_7;
  y _gate_q_15;
  x _gate_q_1;
  ch _gate_q_5, _gate_q_7;
  z _gate_q_1;
  dcx _gate_q_8, _gate_q_17;
  rx(4.800640497951092) _gate_q_13;
  p(0.2876875383758049) _gate_q_9;
  cs _gate_q_3, _gate_q_6;
  rx(0.25570444634056266) _gate_q_10;
  crz(1.8818720004294545) _gate_q_11, _gate_q_4;
  swap _gate_q_14, _gate_q_16;
  sx _gate_q_0;
  crx(0.5771002078803352) _gate_q_15, _gate_q_12;
  u2(4.124361265720722, 5.725391086440135) _gate_q_2;
  cz _gate_q_7, _gate_q_8;
  cu3_5074503872(2.4525354219978444, 2.9799196292905465, 1.710803852357032) _gate_q_10, _gate_q_13;
  U(4.241359250345691, 2.140555966605894, 1.0362307396570032) _gate_q_14;
  rx(1.7173050962641045) _gate_q_1;
  cu3_5074515200(2.791655856004417, 1.5702051511366346, 4.512328782026039) _gate_q_6, _gate_q_5;
  xx_minus_yy_5074504352(2.9845515288630873, 1.0861792708014746) _gate_q_2, _gate_q_9;
  cz _gate_q_3, _gate_q_16;
  xx_minus_yy_5074509632(4.7651292326012165, 5.37991019959461) _gate_q_12, _gate_q_15;
  iswap _gate_q_4, _gate_q_0;
  cu(4.647812298865501, 1.025940429979766, 4.481005731444303, 0.20874694496182428) _gate_q_11, _gate_q_17;
  cx _gate_q_14, _gate_q_2;
  cu1_5074517072(1.9579865941826629) _gate_q_4, _gate_q_3;
  rzz_5074510784(6.1660425435322574) _gate_q_0, _gate_q_1;
  sxdg _gate_q_16;
  cz _gate_q_17, _gate_q_5;
  t _gate_q_13;
  y _gate_q_6;
  iswap _gate_q_8, _gate_q_15;
  csdg _gate_q_7, _gate_q_11;
  u1(3.0748537085939662) _gate_q_9;
  x _gate_q_10;
  s _gate_q_12;
  x _gate_q_12;
  cu(2.0230130148162, 0.7746920977998376, 2.2968220964778094, 5.718111607951804) _gate_q_8, _gate_q_10;
  iswap _gate_q_1, _gate_q_17;
  swap _gate_q_5, _gate_q_3;
  rzx_5074502912(6.1084623952745245) _gate_q_16, _gate_q_4;
  sx _gate_q_7;
  u1(5.097485546683998) _gate_q_9;
  cp(4.652278564944977) _gate_q_2, _gate_q_11;
  rzz_5074511024(6.252711009989857) _gate_q_14, _gate_q_13;
  xx_minus_yy_5074511168(5.9572083529788715, 2.641996174476071) _gate_q_15, _gate_q_0;
  u1(1.4732483784800774) _gate_q_6;
  cu1_5074517984(1.6701713331000219) _gate_q_15, _gate_q_2;
  y _gate_q_0;
  h _gate_q_14;
  tdg _gate_q_16;
  xx_minus_yy_5074504112(4.14740662875388, 4.0356457364360345) _gate_q_4, _gate_q_17;
  U(4.258156660057977, 0.05579889534355339, 1.739018896173429) _gate_q_12;
  csdg _gate_q_8, _gate_q_9;
  dcx _gate_q_7, _gate_q_5;
  u3(5.494611642406069, 4.7306856024815005, 3.469896458686715) _gate_q_3;
  tdg _gate_q_6;
  xx_plus_yy_5074517936(4.583026920019698, 0.13666730045286538) _gate_q_1, _gate_q_13;
  s _gate_q_11;
  z _gate_q_10;
}
gate cu1_5074238976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8643621606036642) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8643621606036642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8643621606036642) _gate_q_1;
}
gate xx_plus_yy_5074234176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.764732470740573) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2352767872492345) _gate_q_1;
  ry(-1.2352767872492345) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.764732470740573) _gate_q_0;
}
gate cu1_5074231104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5518914468402691) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5518914468402691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5518914468402691) _gate_q_1;
}
gate ryy_5074238160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2859507747696985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074239408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2475469932501135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074239264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.768786174123163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074224864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.351169412682915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074237152(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5162650570486584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074235664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.812098241087719) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074224240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.17699766279149518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074227120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4663838314288027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074231824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.854298247854001, 0.24432709769943806, -0.24432709769943806) _gate_q_0;
}
gate ryy_5074233696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7703201221820699) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074234848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9860159301173069) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9860159301173069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9860159301173069) _gate_q_1;
}
gate rzx_5074224288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9988467245468553) _gate_q_1;
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
gate rzz_5074223760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.59357531127768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074229712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.475908408730463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074227888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7965195490040693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074233984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3885797595011193) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5457680279775469) _gate_q_1;
  ry(-0.5457680279775469) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3885797595011193) _gate_q_0;
}
gate cu1_5074228896(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6186366011219626) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6186366011219626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6186366011219626) _gate_q_1;
}
gate r_5074236048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1417964139728323, 2.792716074818583, -2.792716074818583) _gate_q_0;
}
gate xx_minus_yy_5074235568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8916718448341143) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.073865336938294) _gate_q_0;
  ry(-1.073865336938294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8916718448341143) _gate_q_1;
}
gate rxx_5074235904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13841106022680705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074236288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.369821862377928) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074233936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.400302572302727) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.400302572302727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.400302572302727) _gate_q_1;
}
gate cu1_5074230768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.28612959255811954) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.28612959255811954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.28612959255811954) _gate_q_1;
}
gate rzx_5074238448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4720832495699427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074225680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.207884410912306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074225392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5161784698874436) _gate_q_0;
  u1(1.8522480528435568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4913499491528635, 0, -2.5161784698874436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4913499491528635, 0.6639304170438867, 0) _gate_q_1;
}
gate ryy_5074228992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.783563962341839) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  u3(2.693378512331213, 5.584049826481207, 1.3714227123494949) _gate_q_9;
  u3(3.490402613550436, 6.234886607750195, 2.3139019287359397) _gate_q_2;
  z _gate_q_7;
  cu1_5074238976(1.7287243212073284) _gate_q_10, _gate_q_14;
  csdg _gate_q_0, _gate_q_17;
  xx_plus_yy_5074234176(2.470553574498469, 3.764732470740573) _gate_q_6, _gate_q_5;
  sdg _gate_q_1;
  csx _gate_q_15, _gate_q_8;
  crx(4.1407662578226505) _gate_q_11, _gate_q_3;
  cu1_5074231104(3.1037828936805383) _gate_q_13, _gate_q_12;
  iswap _gate_q_4, _gate_q_16;
  cy _gate_q_16, _gate_q_11;
  cy _gate_q_10, _gate_q_9;
  dcx _gate_q_6, _gate_q_17;
  sxdg _gate_q_8;
  cp(5.220489997584708) _gate_q_1, _gate_q_2;
  u1(2.974430273510806) _gate_q_7;
  cry(2.7705637160130028) _gate_q_13, _gate_q_15;
  ryy_5074238160(1.2859507747696985) _gate_q_4, _gate_q_5;
  z _gate_q_12;
  y _gate_q_14;
  u1(5.519158578830809) _gate_q_0;
  u2(3.8144656129586685, 1.1501149736257987) _gate_q_3;
  id _gate_q_11;
  cz _gate_q_1, _gate_q_17;
  crx(5.531084703745145) _gate_q_7, _gate_q_6;
  rxx_5074239408(3.2475469932501135) _gate_q_2, _gate_q_10;
  s _gate_q_3;
  crx(2.219469339552623) _gate_q_16, _gate_q_4;
  rxx_5074239264(4.768786174123163) _gate_q_9, _gate_q_0;
  U(4.106443132725222, 1.8799525546982436, 3.345496395702525) _gate_q_8;
  h _gate_q_12;
  ryy_5074224864(5.351169412682915) _gate_q_15, _gate_q_5;
  rzz_5074237152(3.5162650570486584) _gate_q_13, _gate_q_14;
  rzz_5074235664(0.812098241087719) _gate_q_3, _gate_q_6;
  swap _gate_q_15, _gate_q_5;
  z _gate_q_14;
  cs _gate_q_16, _gate_q_11;
  ry(1.8477110349451809) _gate_q_7;
  swap _gate_q_12, _gate_q_1;
  rxx_5074224240(0.17699766279149518) _gate_q_8, _gate_q_0;
  rxx_5074227120(3.4663838314288027) _gate_q_13, _gate_q_2;
  ry(2.19731378811327) _gate_q_9;
  rx(3.7240652126370453) _gate_q_4;
  y _gate_q_17;
  sdg _gate_q_10;
  ch _gate_q_5, _gate_q_14;
  cp(5.574822239224585) _gate_q_4, _gate_q_7;
  rx(3.501064010509418) _gate_q_6;
  x _gate_q_16;
  u1(4.111647886688503) _gate_q_17;
  crx(0.8355772847625172) _gate_q_3, _gate_q_10;
  r_5074231824(0.854298247854001, 1.8151234244943346) _gate_q_13;
  cry(5.523773646226226) _gate_q_8, _gate_q_11;
  u2(1.3306710336696854, 4.119653365043826) _gate_q_9;
  u3(6.238717776984688, 2.513338695622342, 1.519857246298855) _gate_q_15;
  csdg _gate_q_1, _gate_q_12;
  sdg _gate_q_2;
  u1(6.2775981751775864) _gate_q_0;
  ryy_5074233696(0.7703201221820699) _gate_q_2, _gate_q_15;
  cs _gate_q_7, _gate_q_5;
  y _gate_q_11;
  cry(0.8145497131468439) _gate_q_6, _gate_q_9;
  sdg _gate_q_12;
  cu1_5074234848(1.9720318602346139) _gate_q_17, _gate_q_3;
  dcx _gate_q_16, _gate_q_14;
  rzx_5074224288(1.9988467245468553) _gate_q_1, _gate_q_10;
  ecr _gate_q_0, _gate_q_8;
  rzz_5074223760(2.59357531127768) _gate_q_13, _gate_q_4;
  rzz_5074229712(2.475908408730463) _gate_q_0, _gate_q_15;
  u2(4.365571809925546, 1.0802859221010526) _gate_q_12;
  crz(6.209513129841584) _gate_q_9, _gate_q_7;
  x _gate_q_6;
  t _gate_q_11;
  ryy_5074227888(3.7965195490040693) _gate_q_4, _gate_q_1;
  xx_plus_yy_5074233984(1.0915360559550937, 2.3885797595011193) _gate_q_3, _gate_q_10;
  cu1_5074228896(3.2372732022439252) _gate_q_5, _gate_q_8;
  crz(3.3389170043010306) _gate_q_14, _gate_q_2;
  u1(1.3182894191818628) _gate_q_16;
  swap _gate_q_17, _gate_q_13;
  id _gate_q_16;
  cy _gate_q_8, _gate_q_7;
  iswap _gate_q_5, _gate_q_1;
  r_5074236048(3.1417964139728323, 4.363512401613479) _gate_q_15;
  xx_minus_yy_5074235568(2.147730673876588, 2.8916718448341143) _gate_q_0, _gate_q_4;
  sdg _gate_q_11;
  crz(5.016681035821481) _gate_q_3, _gate_q_14;
  cz _gate_q_13, _gate_q_10;
  rxx_5074235904(0.13841106022680705) _gate_q_17, _gate_q_2;
  crx(4.007480040678854) _gate_q_12, _gate_q_9;
  sdg _gate_q_6;
  rx(5.368682862850144) _gate_q_4;
  rxx_5074236288(4.369821862377928) _gate_q_13, _gate_q_11;
  crz(3.18664642797975) _gate_q_5, _gate_q_6;
  crx(0.13770905401765793) _gate_q_3, _gate_q_9;
  cx _gate_q_7, _gate_q_12;
  cu1_5074233936(4.800605144605454) _gate_q_14, _gate_q_8;
  cu(0.6315651532333277, 5.2253070413750935, 0.8072797208114462, 0.5764089258367662) _gate_q_17, _gate_q_1;
  rz(1.4606579283536822) _gate_q_16;
  cu1_5074230768(0.5722591851162391) _gate_q_15, _gate_q_2;
  U(4.536290277408148, 4.840690607730384, 6.21885813090347) _gate_q_0;
  sxdg _gate_q_10;
  u2(0.9083293715228857, 1.7391180991328716) _gate_q_4;
  U(4.774624263472905, 1.3729652625968036, 2.05287708356993) _gate_q_2;
  z _gate_q_6;
  rx(1.2838106958919322) _gate_q_7;
  rzx_5074238448(1.4720832495699427) _gate_q_3, _gate_q_10;
  x _gate_q_1;
  rzz_5074225680(4.207884410912306) _gate_q_0, _gate_q_12;
  cu3_5074225392(4.982699898305727, 0.6639304170438867, 4.368426522731) _gate_q_13, _gate_q_9;
  ryy_5074228992(5.783563962341839) _gate_q_17, _gate_q_14;
  u2(4.6146377383399155, 1.4244483416041758) _gate_q_16;
  sdg _gate_q_5;
  dcx _gate_q_11, _gate_q_8;
  sxdg _gate_q_15;
}