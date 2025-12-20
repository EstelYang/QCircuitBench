gate r_5108207632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.205916108889091, -1.5672202635709453, 1.5672202635709453) _gate_q_0;
}
gate cu1_5108206288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2862956702192543) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2862956702192543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2862956702192543) _gate_q_1;
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
gate cu1_5108207248(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8049441702215678) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8049441702215678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8049441702215678) _gate_q_1;
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
gate cu1_5108206384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6983602595277119) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6983602595277119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6983602595277119) _gate_q_1;
}
gate rzx_5108206192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.286732586680483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5108208160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9071457499887936) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3553205082705033) _gate_q_1;
  ry(-2.3553205082705033) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9071457499887936) _gate_q_0;
}
gate cu1_5108208496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4190252714430227) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4190252714430227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4190252714430227) _gate_q_1;
}
gate xx_plus_yy_5108208304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.720104644592665) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.491320744766897) _gate_q_1;
  ry(-1.491320744766897) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.720104644592665) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  swap _gate_q_1, _gate_q_6;
  cz _gate_q_3, _gate_q_4;
  U(5.600016139063595, 4.174876027861342, 2.0736852771015823) _gate_q_9;
  rz(3.976606217371611) _gate_q_2;
  swap _gate_q_7, _gate_q_10;
  r_5108207632(5.205916108889091, 0.003576063223951153) _gate_q_11;
  p(3.6428842509594412) _gate_q_5;
  swap _gate_q_0, _gate_q_8;
  cp(3.2285655061388807) _gate_q_5, _gate_q_2;
  rx(1.292202090417407) _gate_q_10;
  cu1_5108206288(4.572591340438509) _gate_q_7, _gate_q_3;
  cu(5.341999594304049, 6.252141464291366, 1.1340035970401634, 0.4125546278716101) _gate_q_1, _gate_q_8;
  cs _gate_q_6, _gate_q_11;
  dcx _gate_q_9, _gate_q_4;
  tdg _gate_q_0;
  cu(3.042771539923266, 5.579666688357284, 4.860506278950771, 4.113570508072533) _gate_q_10, _gate_q_2;
  sx _gate_q_0;
  p(4.219285063166146) _gate_q_9;
  cry(6.06606856863705) _gate_q_6, _gate_q_11;
  p(0.7695091911679871) _gate_q_1;
  crz(6.261715445894174) _gate_q_8, _gate_q_5;
  cy _gate_q_7, _gate_q_3;
  u3(0.7865791884994269, 5.604246844286366, 2.1641899807936458) _gate_q_4;
  tdg _gate_q_7;
  cu1_5108207248(3.6098883404431357) _gate_q_5, _gate_q_0;
  ecr _gate_q_11, _gate_q_4;
  swap _gate_q_9, _gate_q_2;
  x _gate_q_10;
  ch _gate_q_1, _gate_q_6;
  cs _gate_q_3, _gate_q_8;
  id _gate_q_0;
  rx(3.905246270864402) _gate_q_2;
  cry(4.665146215654614) _gate_q_3, _gate_q_1;
  crx(4.710665746424366) _gate_q_8, _gate_q_9;
  y _gate_q_7;
  cu(5.018277613781633, 0.151992807499595, 5.546849024758964, 6.055635628617259) _gate_q_4, _gate_q_6;
  id _gate_q_10;
  x _gate_q_5;
  s _gate_q_11;
  rz(1.2781416188481713) _gate_q_0;
  tdg _gate_q_4;
  csdg _gate_q_2, _gate_q_6;
  p(4.059721766621268) _gate_q_8;
  x _gate_q_3;
  rz(3.573177221618721) _gate_q_10;
  cu1_5108206384(1.3967205190554237) _gate_q_7, _gate_q_5;
  rx(5.132431558701259) _gate_q_1;
  cx _gate_q_11, _gate_q_9;
  s _gate_q_3;
  rzx_5108206192(5.286732586680483) _gate_q_6, _gate_q_10;
  swap _gate_q_8, _gate_q_7;
  dcx _gate_q_2, _gate_q_9;
  sdg _gate_q_5;
  cs _gate_q_0, _gate_q_1;
  t _gate_q_11;
  U(0.9459683635312048, 3.382390709285565, 5.493633058309456) _gate_q_4;
  p(4.352575458114597) _gate_q_10;
  h _gate_q_2;
  id _gate_q_7;
  tdg _gate_q_0;
  p(5.425013941559873) _gate_q_6;
  xx_plus_yy_5108208160(4.710641016541007, 2.9071457499887936) _gate_q_5, _gate_q_8;
  cp(2.7776257698597124) _gate_q_9, _gate_q_1;
  sx _gate_q_4;
  u3(5.731081816187557, 2.1859666024909084, 3.412869450864228) _gate_q_11;
  rz(4.522231756879404) _gate_q_3;
  rx(0.6814236438663136) _gate_q_0;
  rx(1.6186074241923767) _gate_q_9;
  cu1_5108208496(4.838050542886045) _gate_q_1, _gate_q_10;
  cy _gate_q_4, _gate_q_2;
  xx_plus_yy_5108208304(2.982641489533794, 4.720104644592665) _gate_q_7, _gate_q_3;
  cu(3.526364163312852, 5.414816330441703, 0.01150898337670685, 5.683251020133712) _gate_q_11, _gate_q_5;
  sx _gate_q_8;
  x _gate_q_6;
  tdg _gate_q_0;
  rx(2.402720540342757) _gate_q_2;
  s _gate_q_3;
  ry(5.069177371935466) _gate_q_5;
  cu(0.5218442467569474, 0.7767488319191642, 4.036939120795525, 3.0937111203613417) _gate_q_8, _gate_q_6;
  ecr _gate_q_4, _gate_q_11;
  id _gate_q_7;
  cry(1.9147258321504712) _gate_q_1, _gate_q_9;
  y _gate_q_10;
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
gate rxx_5108213200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.804376947061043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108212528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2982701736633333) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2982701736633333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2982701736633333) _gate_q_1;
}
gate xx_minus_yy_5108212480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9058897226467558) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4126119905823415) _gate_q_0;
  ry(-2.4126119905823415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9058897226467558) _gate_q_1;
}
gate xx_plus_yy_5108212816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.19621785825747) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7249514193654482) _gate_q_1;
  ry(-0.7249514193654482) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.19621785825747) _gate_q_0;
}
gate rxx_5108212960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2662232108750926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5108212192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.405135195254965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5108214448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6366709859877946) _gate_q_0;
  u1(-0.20681956538437873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.401109018932354, 0, -2.6366709859877946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.401109018932354, 2.8434905513721733, 0) _gate_q_1;
}
gate cu3_5108213584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.044981360973811) _gate_q_0;
  u1(-0.7884368265825903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8598360023838592, 0, -3.044981360973811) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8598360023838592, 3.833418187556401, 0) _gate_q_1;
}
gate cu3_5108213920(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.018126430549408) _gate_q_0;
  u1(-0.007238316545267853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1351214314502704, 0, -3.018126430549408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1351214314502704, 3.025364747094676, 0) _gate_q_1;
}
gate rxx_5108213488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8955992449678594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108213824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.674882056367575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108214064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.645699098262163) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5438861161501247) _gate_q_0;
  ry(-2.5438861161501247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.645699098262163) _gate_q_1;
}
gate r_5108214400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.286808397487373, 2.7183179545738785, -2.7183179545738785) _gate_q_0;
}
gate rzz_5108214688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.146305593467968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108213392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.46752179138208105) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.46752179138208105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.46752179138208105) _gate_q_1;
}
gate cu1_5108213248(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9415872866086155) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9415872866086155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9415872866086155) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cp(1.8116894183266927) _gate_q_7, _gate_q_3;
  rz(3.8948965498524486) _gate_q_9;
  csx _gate_q_8, _gate_q_1;
  u2(2.783350363896861, 0.8748301031445429) _gate_q_2;
  u1(0.14850955359085402) _gate_q_0;
  U(2.674333750012502, 1.215811545996855, 5.503910431568362) _gate_q_4;
  u3(4.045263657954827, 3.6081560510082094, 2.493162667713713) _gate_q_10;
  id _gate_q_5;
  rxx_5108213200(3.804376947061043) _gate_q_11, _gate_q_6;
  cry(3.317842856130813) _gate_q_1, _gate_q_8;
  u1(0.7316612626231634) _gate_q_10;
  cry(5.813647425367737) _gate_q_0, _gate_q_4;
  cu1_5108212528(2.5965403473266666) _gate_q_5, _gate_q_2;
  rz(4.641562674567539) _gate_q_3;
  cz _gate_q_6, _gate_q_11;
  sdg _gate_q_7;
  s _gate_q_9;
  ecr _gate_q_11, _gate_q_1;
  t _gate_q_8;
  xx_minus_yy_5108212480(4.825223981164683, 0.9058897226467558) _gate_q_6, _gate_q_7;
  cu(0.9712510573071131, 1.6461132662607183, 0.9206354803268489, 2.879998330168579) _gate_q_3, _gate_q_0;
  u2(2.5872207467248987, 3.8661041080006506) _gate_q_2;
  xx_plus_yy_5108212816(1.4499028387308963, 3.19621785825747) _gate_q_9, _gate_q_10;
  u3(1.1905251207742082, 2.79514885955353, 0.9121044758645022) _gate_q_5;
  p(3.4435752902722605) _gate_q_4;
  swap _gate_q_11, _gate_q_9;
  rxx_5108212960(3.2662232108750926) _gate_q_4, _gate_q_1;
  u1(4.169273656259663) _gate_q_0;
  tdg _gate_q_7;
  u3(0.19918984595975314, 1.4211774674587152, 2.0394107525226315) _gate_q_8;
  iswap _gate_q_2, _gate_q_10;
  u1(0.8097244404486219) _gate_q_3;
  U(5.648770905555207, 6.137859648552621, 3.9066910937676522) _gate_q_5;
  u2(2.4156204483430774, 2.9178796289738) _gate_q_6;
  tdg _gate_q_3;
  ryy_5108212192(1.405135195254965) _gate_q_1, _gate_q_2;
  cp(1.1561296077073486) _gate_q_0, _gate_q_10;
  cu3_5108214448(4.802218037864708, 2.8434905513721733, 2.429851420603416) _gate_q_8, _gate_q_7;
  cu3_5108213584(3.7196720047677183, 3.833418187556401, 2.2565445343912205) _gate_q_6, _gate_q_5;
  ry(2.3622853428339003) _gate_q_9;
  z _gate_q_4;
  sx _gate_q_11;
  h _gate_q_10;
  cu3_5108213920(6.270242862900541, 3.025364747094676, 3.0108881140041404) _gate_q_7, _gate_q_4;
  rxx_5108213488(1.8955992449678594) _gate_q_8, _gate_q_5;
  id _gate_q_6;
  tdg _gate_q_3;
  rzx_5108213824(4.674882056367575) _gate_q_11, _gate_q_0;
  p(0.5787720136449167) _gate_q_2;
  csx _gate_q_9, _gate_q_1;
  crz(3.9941185353687882) _gate_q_9, _gate_q_4;
  s _gate_q_1;
  u2(2.2695397657054714, 0.1330302796180154) _gate_q_11;
  y _gate_q_10;
  p(5.4536212239207345) _gate_q_5;
  rx(0.6299690353916187) _gate_q_2;
  ecr _gate_q_3, _gate_q_8;
  u1(2.679448665778788) _gate_q_6;
  cp(3.5941077488235513) _gate_q_0, _gate_q_7;
  u1(5.939486427007458) _gate_q_4;
  sxdg _gate_q_8;
  id _gate_q_7;
  xx_minus_yy_5108214064(5.087772232300249, 3.645699098262163) _gate_q_1, _gate_q_3;
  y _gate_q_0;
  cu(6.0202139819045515, 2.2256264745005865, 1.8622076974497745, 6.159729242121467) _gate_q_11, _gate_q_5;
  r_5108214400(4.286808397487373, 4.289114281368775) _gate_q_2;
  rzz_5108214688(2.146305593467968) _gate_q_9, _gate_q_6;
  U(4.959653422349954, 5.781227785519154, 3.834205050550856) _gate_q_10;
  h _gate_q_7;
  csdg _gate_q_10, _gate_q_1;
  cx _gate_q_2, _gate_q_9;
  cu1_5108213392(0.9350435827641621) _gate_q_8, _gate_q_11;
  tdg _gate_q_0;
  cu1_5108213248(3.883174573217231) _gate_q_4, _gate_q_6;
  t _gate_q_5;
  p(2.76393689177774) _gate_q_3;
  dcx _gate_q_3, _gate_q_7;
  p(5.252542276712496) _gate_q_0;
  cry(1.750941850423369) _gate_q_4, _gate_q_8;
  sxdg _gate_q_9;
  cp(0.2329370419345459) _gate_q_6, _gate_q_1;
  crx(4.699634327998091) _gate_q_10, _gate_q_5;
  rx(1.5341685645040921) _gate_q_11;
  U(6.275078992469327, 1.9203524120803108, 4.691316957994235) _gate_q_2;
}