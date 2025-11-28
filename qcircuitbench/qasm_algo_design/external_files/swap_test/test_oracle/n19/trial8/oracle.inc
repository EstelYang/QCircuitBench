gate rxx_5108217280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.172947894749828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108212528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.476177933020873, 3.1843796516072, -3.1843796516072) _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5108211280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.33392043828866974) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.115412334180129) _gate_q_0;
  ry(-3.115412334180129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.33392043828866974) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5108216848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.221458004896029) _gate_q_1;
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
gate rzz_5108208832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.924542237560931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5108204272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0788881450047016) _gate_q_1;
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
gate cu1_5108205664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1551418304500762) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1551418304500762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1551418304500762) _gate_q_1;
}
gate r_5108204944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9525913369738601, 3.3290663196360226, -3.3290663196360226) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5108207392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.311400788139195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108207056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.057278668598458) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.057278668598458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.057278668598458) _gate_q_1;
}
gate cu3_5108206960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6156457658464065) _gate_q_0;
  u1(2.095546117264444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2121509466309868, 0, -2.6156457658464065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2121509466309868, 0.5200996485819628, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5108215696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0058743133837347) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0058743133837347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0058743133837347) _gate_q_1;
}
gate r_5108206096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9954407563639376, 3.5470973353228725, -3.5470973353228725) _gate_q_0;
}
gate xx_minus_yy_5108213104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.59074880917165) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9348561499232703) _gate_q_0;
  ry(-0.9348561499232703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.59074880917165) _gate_q_1;
}
gate ryy_5108212432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2309406389801008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5108211664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5225475293427896) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9295861552083968) _gate_q_0;
  ry(-0.9295861552083968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5225475293427896) _gate_q_1;
}
gate cu3_5108210032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5101501692527073) _gate_q_0;
  u1(-1.7296425655776009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.632817481169679, 0, -3.5101501692527073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.632817481169679, 5.239792734830308, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  u2(4.200789405623606, 1.1519331063508684) _gate_q_3;
  s _gate_q_17;
  cy _gate_q_1, _gate_q_10;
  ch _gate_q_6, _gate_q_14;
  x _gate_q_7;
  rxx_5108217280(3.172947894749828) _gate_q_12, _gate_q_8;
  sx _gate_q_15;
  cp(0.05027533075700783) _gate_q_16, _gate_q_4;
  rz(0.07003779351267189) _gate_q_5;
  cz _gate_q_2, _gate_q_11;
  sdg _gate_q_0;
  z _gate_q_9;
  r_5108212528(2.476177933020873, 4.755175978402097) _gate_q_13;
  x _gate_q_18;
  ecr _gate_q_14, _gate_q_0;
  xx_minus_yy_5108211280(6.230824668360258, 0.33392043828866974) _gate_q_3, _gate_q_16;
  id _gate_q_10;
  rx(0.4774410070478282) _gate_q_17;
  ry(1.544117749865011) _gate_q_8;
  h _gate_q_18;
  ry(3.765679563739993) _gate_q_5;
  u2(5.7144003313430805, 5.912003594129613) _gate_q_6;
  sxdg _gate_q_4;
  p(0.23672272320711626) _gate_q_2;
  dcx _gate_q_1, _gate_q_12;
  cx _gate_q_15, _gate_q_13;
  dcx _gate_q_7, _gate_q_11;
  ry(1.081432814065033) _gate_q_9;
  sxdg _gate_q_0;
  u3(2.8316420361681898, 0.256854604394581, 2.222353731380389) _gate_q_13;
  cp(4.32998815429413) _gate_q_10, _gate_q_9;
  cx _gate_q_14, _gate_q_7;
  rzx_5108216848(3.221458004896029) _gate_q_11, _gate_q_4;
  u3(3.7508208345030276, 1.3797845683826142, 1.1075030999942663) _gate_q_5;
  ry(3.143709703570833) _gate_q_16;
  crx(0.7640132507981557) _gate_q_3, _gate_q_18;
  iswap _gate_q_2, _gate_q_1;
  cy _gate_q_8, _gate_q_6;
  x _gate_q_17;
  ry(5.8878673569446365) _gate_q_15;
  id _gate_q_12;
  cy _gate_q_13, _gate_q_5;
  ecr _gate_q_4, _gate_q_9;
  y _gate_q_11;
  id _gate_q_16;
  s _gate_q_3;
  cz _gate_q_6, _gate_q_15;
  rx(1.67255796408546) _gate_q_0;
  rzz_5108208832(4.924542237560931) _gate_q_1, _gate_q_18;
  dcx _gate_q_17, _gate_q_12;
  rxx_5108204272(3.0788881450047016) _gate_q_7, _gate_q_10;
  cry(4.737852322739501) _gate_q_14, _gate_q_2;
  sxdg _gate_q_8;
  t _gate_q_6;
  ry(5.177248972142175) _gate_q_12;
  ch _gate_q_1, _gate_q_16;
  ecr _gate_q_14, _gate_q_2;
  id _gate_q_9;
  cp(0.08573438946931039) _gate_q_3, _gate_q_4;
  csx _gate_q_5, _gate_q_13;
  cu(4.236503449259564, 4.212076232898279, 4.383674452258227, 2.4195641379350556) _gate_q_18, _gate_q_15;
  cu1_5108205664(4.3102836609001525) _gate_q_8, _gate_q_0;
  u1(4.3388535914828825) _gate_q_17;
  z _gate_q_11;
  r_5108204944(1.9525913369738601, 4.899862646430919) _gate_q_7;
  U(3.317472391158095, 3.642783363339433, 5.902058697248174) _gate_q_10;
  y _gate_q_11;
  cx _gate_q_8, _gate_q_15;
  cs _gate_q_0, _gate_q_3;
  tdg _gate_q_14;
  tdg _gate_q_16;
  crx(1.2870972790043738) _gate_q_1, _gate_q_9;
  x _gate_q_10;
  id _gate_q_12;
  rz(0.7734095248754748) _gate_q_7;
  rzz_5108207392(5.311400788139195) _gate_q_13, _gate_q_2;
  cu1_5108207056(6.114557337196916) _gate_q_4, _gate_q_5;
  ecr _gate_q_18, _gate_q_17;
  id _gate_q_6;
  u2(5.801314302588143, 4.508160641008963) _gate_q_8;
  rx(5.1321387306699275) _gate_q_9;
  p(4.514262908042515) _gate_q_14;
  ecr _gate_q_15, _gate_q_18;
  cu3_5108206960(4.4243018932619735, 0.5200996485819628, 4.711191883110851) _gate_q_10, _gate_q_13;
  cy _gate_q_0, _gate_q_7;
  crz(4.0077175817117245) _gate_q_12, _gate_q_3;
  ecr _gate_q_2, _gate_q_1;
  csdg _gate_q_5, _gate_q_4;
  s _gate_q_16;
  rz(5.128749095117388) _gate_q_6;
  cu1_5108215696(2.0117486267674694) _gate_q_11, _gate_q_17;
  r_5108206096(1.9954407563639376, 5.117893662117769) _gate_q_17;
  xx_minus_yy_5108213104(1.8697122998465405, 3.59074880917165) _gate_q_18, _gate_q_2;
  sxdg _gate_q_6;
  csx _gate_q_10, _gate_q_11;
  u2(0.39141813076499443, 2.909754621778719) _gate_q_16;
  U(5.774959452063317, 4.293197893769668, 0.3720097901085567) _gate_q_7;
  cry(6.010605536556866) _gate_q_5, _gate_q_14;
  x _gate_q_1;
  h _gate_q_8;
  ryy_5108212432(3.2309406389801008) _gate_q_3, _gate_q_12;
  ry(3.1137105629900828) _gate_q_0;
  s _gate_q_4;
  cry(0.48295379078633216) _gate_q_9, _gate_q_13;
  ry(1.42381814048503) _gate_q_15;
  ch _gate_q_8, _gate_q_14;
  rx(5.219137436265758) _gate_q_10;
  h _gate_q_2;
  z _gate_q_1;
  rx(0.9314161490806908) _gate_q_9;
  rx(2.5486954390386467) _gate_q_6;
  sx _gate_q_16;
  rx(6.033642428820416) _gate_q_5;
  cs _gate_q_13, _gate_q_12;
  u1(5.426977199088992) _gate_q_11;
  crx(6.239702464073066) _gate_q_0, _gate_q_18;
  ch _gate_q_7, _gate_q_4;
  dcx _gate_q_3, _gate_q_15;
  s _gate_q_17;
  xx_minus_yy_5108211664(1.8591723104167936, 0.5225475293427896) _gate_q_8, _gate_q_9;
  cz _gate_q_10, _gate_q_11;
  t _gate_q_5;
  sxdg _gate_q_3;
  ch _gate_q_0, _gate_q_4;
  t _gate_q_1;
  cry(6.138108926339493) _gate_q_18, _gate_q_16;
  rx(0.28967149112878915) _gate_q_15;
  u3(1.0522709644939057, 0.8041124395927934, 0.9512345369434194) _gate_q_17;
  sx _gate_q_7;
  cz _gate_q_14, _gate_q_12;
  cu3_5108210032(5.265634962339358, 5.239792734830308, 1.7805076036751066) _gate_q_13, _gate_q_6;
  p(4.196230157785981) _gate_q_2;
}
gate xx_plus_yy_5108203600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.101609813218474) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8551479371053806) _gate_q_1;
  ry(-0.8551479371053806) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.101609813218474) _gate_q_0;
}
gate rzz_5108214496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.606790437828666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5108218768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.34836654537126516) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4523588814942315) _gate_q_0;
  ry(-0.4523588814942315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.34836654537126516) _gate_q_1;
}
gate cu1_5108203696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3355071523268571) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3355071523268571) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3355071523268571) _gate_q_1;
}
gate xx_minus_yy_5108216944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.24392124149147) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8765720070768227) _gate_q_0;
  ry(-0.8765720070768227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.24392124149147) _gate_q_1;
}
gate ryy_5116263840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9737323286071904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116251120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.404217854075056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5116255440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.712352875637387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116254048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3645774532519428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116256304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.137276178942044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5116258176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.158435705016849, 0.3581037791741759, -0.3581037791741759) _gate_q_0;
}
gate rzx_5116260624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.243421298663455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116260096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.939987677184565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5116260816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.188147875052801) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116261776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3627945958525145) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3627945958525145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3627945958525145) _gate_q_1;
}
gate rxx_5116261008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.9507018271445835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116248864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.650571259905633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116254288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9234555073042787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116259328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.170189991485197) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.059236071326064725) _gate_q_0;
  ry(-0.059236071326064725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.170189991485197) _gate_q_1;
}
gate rzx_5116258848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.997479567249201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116262016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9770043708915243, 1.8133820867492978, -1.8133820867492978) _gate_q_0;
}
gate ryy_5116258032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4143388938896508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116249440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.224605021301225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116258608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.79190375949778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116249248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3344899790965656, -1.0979607006889314, 1.0979607006889314) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cy _gate_q_7, _gate_q_3;
  crz(5.270108457129304) _gate_q_15, _gate_q_12;
  xx_plus_yy_5108203600(1.7102958742107612, 6.101609813218474) _gate_q_10, _gate_q_9;
  ch _gate_q_16, _gate_q_0;
  u1(0.6335401441101003) _gate_q_2;
  cu(1.5814505913167864, 4.699162652453256, 5.124810714174736, 1.4467963642829114) _gate_q_13, _gate_q_5;
  rzz_5108214496(4.606790437828666) _gate_q_18, _gate_q_11;
  u2(0.002988256991931499, 3.5645569549064002) _gate_q_6;
  iswap _gate_q_4, _gate_q_17;
  U(1.9040934853593268, 2.7183487090112597, 0.06925646464053431) _gate_q_14;
  xx_minus_yy_5108218768(0.904717762988463, 0.34836654537126516) _gate_q_8, _gate_q_1;
  tdg _gate_q_13;
  u2(1.2103940542117302, 0.3274127213138449) _gate_q_4;
  cs _gate_q_12, _gate_q_11;
  s _gate_q_2;
  U(1.1907551849163176, 4.187513889064493, 1.60191316763508) _gate_q_1;
  sx _gate_q_14;
  cu1_5108203696(2.6710143046537143) _gate_q_15, _gate_q_5;
  swap _gate_q_7, _gate_q_9;
  iswap _gate_q_16, _gate_q_3;
  cu(3.7245955835800704, 4.378752733879956, 5.515548833649262, 4.417968935606301) _gate_q_10, _gate_q_6;
  y _gate_q_0;
  h _gate_q_17;
  iswap _gate_q_8, _gate_q_18;
  id _gate_q_9;
  rz(3.6999602914112373) _gate_q_1;
  u1(4.747956416836494) _gate_q_4;
  id _gate_q_2;
  xx_minus_yy_5108216944(1.7531440141536454, 1.24392124149147) _gate_q_15, _gate_q_5;
  y _gate_q_3;
  cu(0.97401227445843, 1.7163865351984549, 2.8695418923108087, 4.44592153136541) _gate_q_16, _gate_q_0;
  sdg _gate_q_17;
  U(5.500357523964156, 5.152694912404659, 3.988857181165107) _gate_q_13;
  sx _gate_q_18;
  ryy_5116263840(3.9737323286071904) _gate_q_14, _gate_q_6;
  rzx_5116251120(4.404217854075056) _gate_q_8, _gate_q_7;
  rxx_5116255440(5.712352875637387) _gate_q_12, _gate_q_10;
  sxdg _gate_q_11;
  sx _gate_q_1;
  rxx_5116254048(0.3645774532519428) _gate_q_16, _gate_q_6;
  U(2.493743664130993, 5.71971055943748, 1.6201029765308383) _gate_q_9;
  ecr _gate_q_3, _gate_q_12;
  cx _gate_q_10, _gate_q_15;
  U(0.660849881556512, 3.4799087077954027, 2.489764060489823) _gate_q_0;
  rxx_5116256304(4.137276178942044) _gate_q_14, _gate_q_7;
  cx _gate_q_13, _gate_q_5;
  r_5116258176(5.158435705016849, 1.9289001059690725) _gate_q_8;
  rzx_5116260624(5.243421298663455) _gate_q_17, _gate_q_11;
  p(4.8908603484328195) _gate_q_4;
  csx _gate_q_2, _gate_q_18;
  p(0.48645143100805827) _gate_q_6;
  sx _gate_q_14;
  sxdg _gate_q_13;
  rx(1.8279604533427767) _gate_q_10;
  rzx_5116260096(5.939987677184565) _gate_q_11, _gate_q_16;
  cs _gate_q_7, _gate_q_0;
  csx _gate_q_5, _gate_q_8;
  sxdg _gate_q_2;
  z _gate_q_1;
  cy _gate_q_4, _gate_q_15;
  cy _gate_q_18, _gate_q_12;
  ryy_5116260816(4.188147875052801) _gate_q_3, _gate_q_9;
  h _gate_q_17;
  U(2.8309790682609015, 3.7240185397200185, 5.249348659749323) _gate_q_2;
  u3(1.3661301636136416, 0.31878071207119185, 2.7356316140439603) _gate_q_16;
  cp(0.22982623453897172) _gate_q_10, _gate_q_7;
  dcx _gate_q_5, _gate_q_17;
  s _gate_q_6;
  cz _gate_q_13, _gate_q_8;
  sxdg _gate_q_12;
  cry(4.377046284946789) _gate_q_11, _gate_q_3;
  id _gate_q_15;
  cx _gate_q_9, _gate_q_14;
  sdg _gate_q_4;
  u2(5.431353757349638, 3.2143984739294558) _gate_q_18;
  csdg _gate_q_0, _gate_q_1;
  id _gate_q_12;
  u1(4.03880683430111) _gate_q_10;
  sdg _gate_q_11;
  cu1_5116261776(2.725589191705029) _gate_q_6, _gate_q_4;
  sxdg _gate_q_3;
  dcx _gate_q_7, _gate_q_9;
  z _gate_q_8;
  y _gate_q_18;
  rxx_5116261008(5.9507018271445835) _gate_q_16, _gate_q_2;
  rxx_5116248864(3.650571259905633) _gate_q_0, _gate_q_14;
  cs _gate_q_13, _gate_q_1;
  rx(0.5339852994732855) _gate_q_15;
  y _gate_q_17;
  z _gate_q_5;
  tdg _gate_q_11;
  u1(5.944655791083037) _gate_q_8;
  id _gate_q_9;
  u3(4.100931749283135, 3.2261208421258027, 6.190784336205355) _gate_q_7;
  rzz_5116254288(2.9234555073042787) _gate_q_17, _gate_q_16;
  cp(1.9724602034656422) _gate_q_13, _gate_q_2;
  crx(2.000638570970881) _gate_q_10, _gate_q_6;
  csx _gate_q_12, _gate_q_0;
  dcx _gate_q_5, _gate_q_15;
  xx_minus_yy_5116259328(0.11847214265212945, 5.170189991485197) _gate_q_4, _gate_q_14;
  U(3.793974794964299, 1.1726332559978836, 2.811442978987892) _gate_q_1;
  cu(2.2241189904301217, 3.2267806286021394, 0.9024554688176369, 2.7278941255333393) _gate_q_3, _gate_q_18;
  csdg _gate_q_5, _gate_q_13;
  rzx_5116258848(4.997479567249201) _gate_q_11, _gate_q_16;
  s _gate_q_4;
  ecr _gate_q_1, _gate_q_6;
  cz _gate_q_15, _gate_q_18;
  sxdg _gate_q_17;
  r_5116262016(0.9770043708915243, 3.3841784135441944) _gate_q_12;
  ryy_5116258032(1.4143388938896508) _gate_q_14, _gate_q_0;
  rzx_5116249440(3.224605021301225) _gate_q_8, _gate_q_7;
  tdg _gate_q_3;
  z _gate_q_10;
  cry(0.005915643362831354) _gate_q_2, _gate_q_9;
  s _gate_q_1;
  t _gate_q_14;
  csdg _gate_q_17, _gate_q_9;
  t _gate_q_0;
  cry(0.3100799971295606) _gate_q_6, _gate_q_12;
  rzx_5116258608(3.79190375949778) _gate_q_7, _gate_q_2;
  cx _gate_q_11, _gate_q_10;
  cu(3.8957867740813863, 4.455133351171275, 3.9493489708113874, 1.218637970165664) _gate_q_16, _gate_q_15;
  crx(3.860900601264959) _gate_q_3, _gate_q_13;
  cs _gate_q_8, _gate_q_4;
  h _gate_q_5;
  r_5116249248(2.3344899790965656, 0.4728356261059651) _gate_q_18;
}