gate cu3_5070307248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.824753942555505) _gate_q_0;
  u1(0.11430748640959854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.238743192014879, 0, -3.824753942555505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.238743192014879, 3.7104464561459065, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070294240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.328451215618825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5070297024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.590457997700992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070293328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4512670950664948) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4512670950664948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4512670950664948) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070291792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.717298674530915) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3792411386638728) _gate_q_0;
  ry(-2.3792411386638728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.717298674530915) _gate_q_1;
}
gate cu1_5070293760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2191421587663316) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2191421587663316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2191421587663316) _gate_q_1;
}
gate rzx_5070297984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1678253325373475) _gate_q_1;
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
gate xx_minus_yy_5070306720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.361693941304001) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7593503666884984) _gate_q_0;
  ry(-0.7593503666884984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.361693941304001) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cy _gate_q_7, _gate_q_4;
  cu3_5070307248(4.477486384029758, 3.7104464561459065, 3.9390614289651036) _gate_q_1, _gate_q_6;
  cy _gate_q_8, _gate_q_0;
  cx _gate_q_9, _gate_q_5;
  sx _gate_q_3;
  u2(5.627075889042563, 1.049283733521047) _gate_q_2;
  tdg _gate_q_7;
  t _gate_q_3;
  swap _gate_q_9, _gate_q_0;
  dcx _gate_q_8, _gate_q_2;
  crx(5.271731107903) _gate_q_1, _gate_q_5;
  cy _gate_q_6, _gate_q_4;
  id _gate_q_8;
  ryy_5070294240(1.328451215618825) _gate_q_6, _gate_q_7;
  id _gate_q_9;
  crx(2.275541269349306) _gate_q_5, _gate_q_4;
  cu(5.18011191132739, 4.13959573157649, 4.949595523225843, 3.416556018477159) _gate_q_0, _gate_q_2;
  id _gate_q_3;
  y _gate_q_1;
  sx _gate_q_6;
  cs _gate_q_8, _gate_q_3;
  ryy_5070297024(2.590457997700992) _gate_q_4, _gate_q_5;
  ch _gate_q_9, _gate_q_2;
  crz(4.234076671440853) _gate_q_7, _gate_q_0;
  u2(3.85728693027969, 5.847619049934741) _gate_q_1;
  crx(5.285547558988666) _gate_q_9, _gate_q_4;
  cu1_5070293328(4.9025341901329895) _gate_q_1, _gate_q_7;
  ch _gate_q_2, _gate_q_6;
  xx_minus_yy_5070291792(4.7584822773277455, 3.717298674530915) _gate_q_8, _gate_q_3;
  y _gate_q_5;
  u1(3.192994382073479) _gate_q_0;
  u3(4.634957096760594, 4.489775714387498, 6.145161274185254) _gate_q_4;
  cu1_5070293760(2.438284317532663) _gate_q_9, _gate_q_1;
  cz _gate_q_2, _gate_q_5;
  crz(3.107266163161245) _gate_q_7, _gate_q_3;
  z _gate_q_0;
  crx(4.779660050843009) _gate_q_8, _gate_q_6;
  id _gate_q_5;
  tdg _gate_q_2;
  sxdg _gate_q_7;
  rx(5.144875469896841) _gate_q_1;
  cp(6.061063631943516) _gate_q_8, _gate_q_9;
  sxdg _gate_q_6;
  rzx_5070297984(3.1678253325373475) _gate_q_0, _gate_q_4;
  rz(2.8061239472212174) _gate_q_3;
  cz _gate_q_2, _gate_q_1;
  s _gate_q_4;
  iswap _gate_q_5, _gate_q_7;
  id _gate_q_0;
  cu(2.9360554127759424, 5.267322383529099, 2.443411580023979, 1.1386539542643204) _gate_q_6, _gate_q_8;
  xx_minus_yy_5070306720(1.5187007333769968, 4.361693941304001) _gate_q_9, _gate_q_3;
  csx _gate_q_0, _gate_q_5;
  x _gate_q_4;
  ecr _gate_q_6, _gate_q_2;
  z _gate_q_3;
  h _gate_q_7;
  cz _gate_q_8, _gate_q_1;
  sdg _gate_q_9;
  sdg _gate_q_1;
  csdg _gate_q_2, _gate_q_9;
  x _gate_q_7;
  s _gate_q_4;
  sdg _gate_q_8;
  cs _gate_q_6, _gate_q_5;
  csdg _gate_q_3, _gate_q_0;
}
gate cu3_5070297216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.131856949554765) _gate_q_0;
  u1(0.9869899345901945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.963623402224776, 0, -4.131856949554765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.963623402224776, 3.1448670149645706, 0) _gate_q_1;
}
gate xx_minus_yy_5070292800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.06527322703832833) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.406762487452329) _gate_q_0;
  ry(-1.406762487452329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.06527322703832833) _gate_q_1;
}
gate rxx_5070291456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3877536671763533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070306336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.81391925574048) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5302431142647459) _gate_q_1;
  ry(-0.5302431142647459) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.81391925574048) _gate_q_0;
}
gate xx_plus_yy_5070291744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.699793814875861) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.886435571307165) _gate_q_1;
  ry(-2.886435571307165) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.699793814875861) _gate_q_0;
}
gate xx_minus_yy_5070303264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3294813609102567) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9869523686500182) _gate_q_0;
  ry(-0.9869523686500182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3294813609102567) _gate_q_1;
}
gate r_5070298608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.33950094341475306, 4.616185344182561, -4.616185344182561) _gate_q_0;
}
gate xx_plus_yy_5070295488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.11192513219063181) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4505217721710026) _gate_q_1;
  ry(-1.4505217721710026) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.11192513219063181) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cu3_5070297216(1.927246804449552, 3.1448670149645706, 5.1188468841449595) _gate_q_1, _gate_q_5;
  z _gate_q_0;
  cry(2.37303167883287) _gate_q_2, _gate_q_3;
  swap _gate_q_7, _gate_q_9;
  crx(4.825735752053862) _gate_q_4, _gate_q_6;
  z _gate_q_8;
  xx_minus_yy_5070292800(2.813524974904658, 0.06527322703832833) _gate_q_8, _gate_q_0;
  U(3.757609035178803, 5.354934178242613, 4.742998492211649) _gate_q_2;
  sdg _gate_q_1;
  t _gate_q_9;
  cp(6.010941872053798) _gate_q_3, _gate_q_6;
  rz(0.8226677125806557) _gate_q_7;
  s _gate_q_4;
  ry(4.993818745828187) _gate_q_5;
  cry(0.6476519685352453) _gate_q_0, _gate_q_3;
  rxx_5070291456(2.3877536671763533) _gate_q_5, _gate_q_9;
  sdg _gate_q_1;
  z _gate_q_6;
  xx_plus_yy_5070306336(1.0604862285294918, 5.81391925574048) _gate_q_2, _gate_q_4;
  dcx _gate_q_7, _gate_q_8;
  crz(1.753452309339751) _gate_q_0, _gate_q_1;
  u1(6.217961650241159) _gate_q_5;
  iswap _gate_q_8, _gate_q_7;
  xx_plus_yy_5070291744(5.77287114261433, 1.699793814875861) _gate_q_6, _gate_q_9;
  xx_minus_yy_5070303264(1.9739047373000365, 2.3294813609102567) _gate_q_4, _gate_q_3;
  rz(3.957362682102984) _gate_q_2;
  crz(0.9821792291470428) _gate_q_1, _gate_q_9;
  ecr _gate_q_0, _gate_q_8;
  iswap _gate_q_5, _gate_q_6;
  cu(0.23290298356682962, 1.572645694192854, 0.0004921232836903756, 5.8030673787728695) _gate_q_4, _gate_q_7;
  ch _gate_q_3, _gate_q_2;
  sdg _gate_q_6;
  x _gate_q_2;
  cz _gate_q_1, _gate_q_3;
  rx(1.8377336546180796) _gate_q_5;
  p(5.172445052435407) _gate_q_9;
  u3(4.43535977172828, 2.6290410778097577, 4.969334087681623) _gate_q_4;
  U(6.025211981220194, 4.7945976969366715, 5.960841753143714) _gate_q_8;
  cz _gate_q_0, _gate_q_7;
  p(1.1880596495578573) _gate_q_3;
  r_5070298608(0.33950094341475306, 6.186981670977458) _gate_q_1;
  cp(6.274244603231577) _gate_q_0, _gate_q_5;
  p(0.6940230631310617) _gate_q_9;
  z _gate_q_8;
  ecr _gate_q_6, _gate_q_7;
  z _gate_q_4;
  u2(5.5946198801691285, 5.594023331549682) _gate_q_2;
  h _gate_q_5;
  s _gate_q_6;
  cry(1.4435235726045554) _gate_q_3, _gate_q_0;
  s _gate_q_2;
  cp(5.104861882075896) _gate_q_1, _gate_q_9;
  cu(3.133164892835111, 0.5376958042756986, 0.19046353368304175, 3.85313112989098) _gate_q_4, _gate_q_7;
  tdg _gate_q_8;
  xx_plus_yy_5070295488(2.9010435443420053, 0.11192513219063181) _gate_q_7, _gate_q_2;
  swap _gate_q_4, _gate_q_1;
  x _gate_q_8;
  csdg _gate_q_3, _gate_q_5;
  csdg _gate_q_6, _gate_q_9;
  rz(5.4902189711736895) _gate_q_0;
  cx _gate_q_1, _gate_q_4;
  cry(0.8354903720701886) _gate_q_3, _gate_q_6;
  dcx _gate_q_9, _gate_q_8;
  p(2.9657371202574168) _gate_q_0;
  sdg _gate_q_2;
  swap _gate_q_5, _gate_q_7;
}