gate cu3_5105140752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3829884573539766) _gate_q_0;
  u1(1.1300563000990325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.767606969886861, 0, -2.3829884573539766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.767606969886861, 1.252932157254944, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5105140368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6904824973662418) _gate_q_0;
  u1(-1.3365895374436736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4590965361222089, 0, -1.6904824973662418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4590965361222089, 3.0270720348099154, 0) _gate_q_1;
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
gate cu1_5107788416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5691605009175995) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5691605009175995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5691605009175995) _gate_q_1;
}
gate cu3_5107783376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.335800122984773) _gate_q_0;
  u1(-2.4561189689494776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.538880967249365, 0, -3.335800122984773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.538880967249365, 5.7919190919342505, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5107786016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7487667125851853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107792544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.07802928695392) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5118247074358092) _gate_q_0;
  ry(-0.5118247074358092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.07802928695392) _gate_q_1;
}
gate r_5107786400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3257891263077663, -1.3526278933818154, 1.3526278933818154) _gate_q_0;
}
gate rzz_5107784336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5372518564121727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5107786304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.728941201803708) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.622527157290927) _gate_q_1;
  ry(-2.622527157290927) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.728941201803708) _gate_q_0;
}
gate rxx_5107791008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.716991725242515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107421152(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.780055252184446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107432000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5074133805677894, 2.443864831077443, -2.443864831077443) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5107419760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8720564683558847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107421392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.0628791194278895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107425808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.399902033259603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5107430512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.316613623335146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107427248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.299085603666346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5107422208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.909588313864741) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.909588313864741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.909588313864741) _gate_q_1;
}
gate cu1_5107445936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9884475443623728) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9884475443623728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9884475443623728) _gate_q_1;
}
gate rxx_5107433984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.197153279116171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  z _gate_q_11;
  cu3_5105140752(1.535213939773722, 1.252932157254944, 3.513044757453009) _gate_q_8, _gate_q_13;
  csdg _gate_q_0, _gate_q_6;
  u2(6.254404991820177, 3.1889547214342695) _gate_q_5;
  csdg _gate_q_3, _gate_q_1;
  u2(3.840625975209262, 6.111771572843426) _gate_q_9;
  cu3_5105140368(0.9181930722444178, 3.0270720348099154, 0.35389295992256814) _gate_q_2, _gate_q_12;
  csdg _gate_q_15, _gate_q_14;
  cry(4.804250728888445) _gate_q_10, _gate_q_4;
  y _gate_q_7;
  swap _gate_q_7, _gate_q_0;
  ecr _gate_q_3, _gate_q_9;
  cu1_5107788416(3.138321001835199) _gate_q_12, _gate_q_10;
  cry(3.2676617996857744) _gate_q_8, _gate_q_6;
  ch _gate_q_14, _gate_q_11;
  cu3_5107783376(3.07776193449873, 5.7919190919342505, 0.8796811540352952) _gate_q_1, _gate_q_15;
  crx(2.560996300558592) _gate_q_5, _gate_q_13;
  iswap _gate_q_2, _gate_q_4;
  tdg _gate_q_7;
  rxx_5107786016(3.7487667125851853) _gate_q_1, _gate_q_13;
  u1(2.6086988392541786) _gate_q_5;
  xx_minus_yy_5107792544(1.0236494148716184, 4.07802928695392) _gate_q_4, _gate_q_10;
  u2(3.231989316044193, 4.862318009931715) _gate_q_2;
  sdg _gate_q_11;
  ry(5.656644824112616) _gate_q_3;
  ecr _gate_q_8, _gate_q_6;
  t _gate_q_9;
  cx _gate_q_15, _gate_q_0;
  ch _gate_q_12, _gate_q_14;
  U(5.085974398962881, 3.4716222745533325, 1.9493321615170613) _gate_q_7;
  s _gate_q_6;
  ry(3.582239885746582) _gate_q_14;
  r_5107786400(0.3257891263077663, 0.21816843341308112) _gate_q_5;
  rzz_5107784336(0.5372518564121727) _gate_q_0, _gate_q_15;
  csdg _gate_q_12, _gate_q_8;
  csx _gate_q_2, _gate_q_4;
  ecr _gate_q_3, _gate_q_11;
  sdg _gate_q_10;
  ecr _gate_q_13, _gate_q_1;
  tdg _gate_q_9;
  ecr _gate_q_2, _gate_q_12;
  xx_plus_yy_5107786304(5.245054314581854, 5.728941201803708) _gate_q_10, _gate_q_1;
  ch _gate_q_14, _gate_q_15;
  x _gate_q_13;
  rz(3.5269460190803503) _gate_q_6;
  rxx_5107791008(5.716991725242515) _gate_q_4, _gate_q_9;
  csx _gate_q_3, _gate_q_7;
  id _gate_q_5;
  rzz_5107421152(4.780055252184446) _gate_q_0, _gate_q_11;
  h _gate_q_8;
  U(1.5211391008981983, 2.517507597241427, 0.4952685164638154) _gate_q_0;
  swap _gate_q_5, _gate_q_12;
  sdg _gate_q_9;
  sdg _gate_q_4;
  cp(3.9933202943863897) _gate_q_10, _gate_q_11;
  id _gate_q_15;
  ch _gate_q_13, _gate_q_6;
  U(1.1968677978602427, 5.720969969665814, 5.127713263651339) _gate_q_14;
  tdg _gate_q_1;
  id _gate_q_8;
  r_5107432000(0.5074133805677894, 4.0146611578723395) _gate_q_2;
  x _gate_q_7;
  u1(0.7993232953518413) _gate_q_3;
  cs _gate_q_5, _gate_q_14;
  s _gate_q_8;
  rxx_5107419760(0.8720564683558847) _gate_q_3, _gate_q_0;
  rzx_5107421392(6.0628791194278895) _gate_q_1, _gate_q_7;
  cz _gate_q_9, _gate_q_2;
  x _gate_q_12;
  cy _gate_q_10, _gate_q_13;
  iswap _gate_q_11, _gate_q_6;
  rxx_5107425808(4.399902033259603) _gate_q_15, _gate_q_4;
  dcx _gate_q_1, _gate_q_4;
  ch _gate_q_11, _gate_q_7;
  cry(6.087320838735696) _gate_q_10, _gate_q_13;
  rzz_5107430512(4.316613623335146) _gate_q_12, _gate_q_14;
  cu(5.883429782385362, 0.4129999979313065, 2.202817357377242, 3.2065155072310882) _gate_q_3, _gate_q_15;
  U(1.3121055916602304, 1.6889353077025175, 4.228613414006886) _gate_q_6;
  rxx_5107427248(5.299085603666346) _gate_q_9, _gate_q_8;
  cu1_5107422208(5.819176627729482) _gate_q_0, _gate_q_2;
  U(6.001265313182732, 0.32799866536989625, 3.495737311181491) _gate_q_5;
  cp(4.933978221221526) _gate_q_10, _gate_q_12;
  ecr _gate_q_6, _gate_q_14;
  crx(4.878474226495913) _gate_q_7, _gate_q_9;
  cp(3.479995229187172) _gate_q_5, _gate_q_13;
  tdg _gate_q_1;
  h _gate_q_2;
  x _gate_q_4;
  crz(5.2055135636687275) _gate_q_8, _gate_q_11;
  ry(0.7378156417905282) _gate_q_15;
  sxdg _gate_q_3;
  sxdg _gate_q_0;
  t _gate_q_14;
  crx(3.17377052763651) _gate_q_15, _gate_q_9;
  iswap _gate_q_2, _gate_q_10;
  cp(2.4768083127338163) _gate_q_1, _gate_q_0;
  cu(4.8608704150755795, 3.3408480311701205, 5.170808145271248, 0.9643116257366989) _gate_q_3, _gate_q_6;
  cu(3.8756828909711065, 5.056449084460123, 0.6100329119355037, 4.069872365726943) _gate_q_11, _gate_q_13;
  U(3.6326832472259563, 5.123162510342029, 0.17479376670834096) _gate_q_5;
  cu1_5107445936(3.9768950887247456) _gate_q_8, _gate_q_4;
  rxx_5107433984(2.197153279116171) _gate_q_12, _gate_q_7;
}
gate ryy_5107440560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.594390351946418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107435376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.792152473297827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107449776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6624767808427532) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1176769896399583) _gate_q_1;
  ry(-2.1176769896399583) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6624767808427532) _gate_q_0;
}
gate rzz_5107446272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.146531693142872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107448288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.693315870415163) _gate_q_0;
  u1(0.09240264670786047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0399575231552367, 0, -5.693315870415163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0399575231552367, 5.600913223707303, 0) _gate_q_1;
}
gate xx_minus_yy_5107440848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.710466264841082) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7273655295568288) _gate_q_0;
  ry(-0.7273655295568288) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.710466264841082) _gate_q_1;
}
gate rzx_5107434608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0381208705378935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107437776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.506037626902148, 0.9424851306010078, -0.9424851306010078) _gate_q_0;
}
gate rxx_5107449056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1482362728667366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107434128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.68823526572861) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107439648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.600426128096418) _gate_q_0;
  u1(-1.4871361866467496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5877859135903509, 0, -4.600426128096418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5877859135903509, 6.087562314743168, 0) _gate_q_1;
}
gate rzz_5107438496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.10473982623197621) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107438544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.509208986421799) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0292304644612702) _gate_q_1;
  ry(-1.0292304644612702) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.509208986421799) _gate_q_0;
}
gate cu1_5107441568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0669936783861447) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0669936783861447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0669936783861447) _gate_q_1;
}
gate ryy_5107435664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8241225900038005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107449152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7841624343280547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  t _gate_q_6;
  ryy_5107440560(1.594390351946418) _gate_q_8, _gate_q_11;
  rzx_5107435376(2.792152473297827) _gate_q_7, _gate_q_15;
  xx_plus_yy_5107449776(4.235353979279917, 1.6624767808427532) _gate_q_0, _gate_q_3;
  dcx _gate_q_13, _gate_q_2;
  rzz_5107446272(6.146531693142872) _gate_q_10, _gate_q_14;
  dcx _gate_q_4, _gate_q_9;
  t _gate_q_12;
  s _gate_q_5;
  t _gate_q_1;
  U(4.5527947361006085, 3.723581110780296, 3.749570121914838) _gate_q_9;
  cy _gate_q_1, _gate_q_6;
  cu(1.4572353124949344, 5.443275070160114, 3.586978228383606, 1.752847521535481) _gate_q_0, _gate_q_3;
  cu3_5107448288(4.079915046310473, 5.600913223707303, 5.785718517123024) _gate_q_12, _gate_q_4;
  u2(1.3500488600154714, 5.05734794639969) _gate_q_14;
  crz(6.132808918598328) _gate_q_7, _gate_q_8;
  u1(6.018167747176986) _gate_q_5;
  csx _gate_q_2, _gate_q_11;
  crz(3.953485017673931) _gate_q_13, _gate_q_15;
  tdg _gate_q_10;
  xx_minus_yy_5107440848(1.4547310591136575, 3.710466264841082) _gate_q_2, _gate_q_10;
  sxdg _gate_q_13;
  rx(2.724376977205922) _gate_q_15;
  u2(5.953325766296871, 1.4834926899724754) _gate_q_3;
  x _gate_q_5;
  x _gate_q_0;
  cu(2.44490948347249, 5.592465131792101, 2.1325230021275883, 5.833196329780016) _gate_q_8, _gate_q_12;
  p(5.808988280252004) _gate_q_9;
  swap _gate_q_4, _gate_q_6;
  ch _gate_q_14, _gate_q_7;
  t _gate_q_11;
  x _gate_q_1;
  csdg _gate_q_7, _gate_q_9;
  iswap _gate_q_15, _gate_q_0;
  tdg _gate_q_12;
  sx _gate_q_10;
  cp(5.874372103681249) _gate_q_8, _gate_q_1;
  csx _gate_q_3, _gate_q_2;
  x _gate_q_6;
  y _gate_q_4;
  swap _gate_q_5, _gate_q_11;
  rz(1.7823132911433286) _gate_q_14;
  sx _gate_q_13;
  rzx_5107434608(2.0381208705378935) _gate_q_6, _gate_q_11;
  crx(3.3838764470379696) _gate_q_4, _gate_q_9;
  r_5107437776(3.506037626902148, 2.5132814573959044) _gate_q_2;
  rxx_5107449056(2.1482362728667366) _gate_q_15, _gate_q_10;
  ch _gate_q_14, _gate_q_5;
  ecr _gate_q_13, _gate_q_12;
  p(2.380582061632663) _gate_q_8;
  rz(4.206040110253311) _gate_q_0;
  csdg _gate_q_7, _gate_q_3;
  z _gate_q_1;
  ch _gate_q_2, _gate_q_6;
  cry(2.553898887839754) _gate_q_9, _gate_q_1;
  cu(3.2461477460976775, 4.1703482904016305, 2.8861488136476274, 0.9572808405271502) _gate_q_3, _gate_q_15;
  x _gate_q_8;
  cx _gate_q_11, _gate_q_10;
  cy _gate_q_13, _gate_q_7;
  dcx _gate_q_5, _gate_q_4;
  rxx_5107434128(4.68823526572861) _gate_q_0, _gate_q_12;
  U(6.084443630858048, 4.420872208951331, 3.945484003038568) _gate_q_14;
  rx(3.5321215202727565) _gate_q_1;
  x _gate_q_15;
  z _gate_q_11;
  cu3_5107439648(1.1755718271807019, 6.087562314743168, 3.1132899414496684) _gate_q_6, _gate_q_7;
  p(0.50823448136642) _gate_q_0;
  cp(4.992550378185846) _gate_q_4, _gate_q_3;
  rzz_5107438496(0.10473982623197621) _gate_q_9, _gate_q_10;
  cu(5.378677937199553, 1.3356401008814671, 5.732580094850192, 6.0284082871134395) _gate_q_12, _gate_q_14;
  iswap _gate_q_13, _gate_q_5;
  csdg _gate_q_2, _gate_q_8;
  h _gate_q_8;
  U(0.03257388711826138, 2.5639084976197695, 1.6670537669226528) _gate_q_11;
  cry(6.150029181496699) _gate_q_4, _gate_q_14;
  dcx _gate_q_2, _gate_q_10;
  s _gate_q_15;
  x _gate_q_6;
  cz _gate_q_3, _gate_q_1;
  cry(4.729493753932951) _gate_q_7, _gate_q_12;
  tdg _gate_q_0;
  dcx _gate_q_13, _gate_q_5;
  tdg _gate_q_9;
  y _gate_q_0;
  cp(5.869283125614344) _gate_q_9, _gate_q_1;
  cry(5.578210847889035) _gate_q_2, _gate_q_4;
  xx_plus_yy_5107438544(2.0584609289225404, 4.509208986421799) _gate_q_5, _gate_q_8;
  x _gate_q_10;
  U(1.7345466843119046, 0.41157052194079335, 5.773176956883644) _gate_q_13;
  h _gate_q_14;
  cu1_5107441568(4.133987356772289) _gate_q_3, _gate_q_15;
  t _gate_q_6;
  h _gate_q_11;
  ryy_5107435664(4.8241225900038005) _gate_q_7, _gate_q_12;
  u3(5.94430982867008, 2.2195672232222154, 1.5000128195115887) _gate_q_4;
  ryy_5107449152(2.7841624343280547) _gate_q_7, _gate_q_12;
  rz(3.5471749801116754) _gate_q_3;
  cy _gate_q_6, _gate_q_15;
  cy _gate_q_1, _gate_q_11;
  ry(3.32903118947407) _gate_q_2;
  cy _gate_q_8, _gate_q_14;
  cs _gate_q_9, _gate_q_13;
  p(2.5137717983452976) _gate_q_10;
  cu(5.066295148805305, 3.1363932948602105, 3.407795035079219, 1.8755204781726094) _gate_q_5, _gate_q_0;
}