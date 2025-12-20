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
gate xx_plus_yy_5070131552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7978459223590324) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2089837010424405) _gate_q_1;
  ry(-2.2089837010424405) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7978459223590324) _gate_q_0;
}
gate ryy_5070140144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6477650615680326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070140288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.729199601340798) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070142208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.800854723728139) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.800854723728139) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.800854723728139) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070141824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.306365639704331) _gate_q_0;
  u1(-1.2941261458130728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.820936298342726, 0, -3.306365639704331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.820936298342726, 4.600491785517404, 0) _gate_q_1;
}
gate xx_minus_yy_5070137888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.25929991653456) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9179499190777936) _gate_q_0;
  ry(-2.9179499190777936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.25929991653456) _gate_q_1;
}
gate cu3_5070139088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.238111627987585) _gate_q_0;
  u1(-0.3104659632474204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7475909014250006, 0, -1.238111627987585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7475909014250006, 1.5485775912350055, 0) _gate_q_1;
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
gate rzz_5070133520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7306259502469383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070129920(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.680147859737163) _gate_q_0;
  u1(-0.03918752214384602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1395817315694743, 0, -5.680147859737163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1395817315694743, 5.719335381881009, 0) _gate_q_1;
}
gate rzx_5070135104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2869582704126237) _gate_q_1;
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
gate xx_plus_yy_5070129488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.711678019717086) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8160082252115834) _gate_q_1;
  ry(-1.8160082252115834) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.711678019717086) _gate_q_0;
}
gate rxx_5070128432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.022676639532638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070136112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4989417044597125) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.17390990287745442) _gate_q_0;
  ry(-0.17390990287745442) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4989417044597125) _gate_q_1;
}
gate r_5070141104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2590659830788042, 2.190253377460823, -2.190253377460823) _gate_q_0;
}
gate cu3_5070135392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.51008806559416) _gate_q_0;
  u1(0.6909186803762543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9459895282544888, 0, -1.51008806559416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9459895282544888, 0.8191693852179058, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  p(0.7158714364159826) _gate_q_11;
  csdg _gate_q_4, _gate_q_2;
  U(0.8414002378309597, 4.872985269082317, 5.754559725175296) _gate_q_0;
  xx_plus_yy_5070131552(4.417967402084881, 2.7978459223590324) _gate_q_6, _gate_q_12;
  ryy_5070140144(2.6477650615680326) _gate_q_7, _gate_q_10;
  cry(2.7910101594826653) _gate_q_5, _gate_q_8;
  ryy_5070140288(2.729199601340798) _gate_q_9, _gate_q_1;
  u1(3.1924683676045227) _gate_q_3;
  cu1_5070142208(5.601709447456278) _gate_q_10, _gate_q_3;
  U(5.605711105450546, 3.998030680202215, 1.479813368727411) _gate_q_4;
  cx _gate_q_11, _gate_q_2;
  u2(2.339046567177194, 1.8928890248688721) _gate_q_12;
  sxdg _gate_q_6;
  sxdg _gate_q_7;
  ecr _gate_q_5, _gate_q_9;
  iswap _gate_q_8, _gate_q_1;
  z _gate_q_0;
  cu3_5070141824(5.641872596685452, 4.600491785517404, 2.0122394938912582) _gate_q_5, _gate_q_12;
  cy _gate_q_8, _gate_q_2;
  y _gate_q_0;
  cx _gate_q_6, _gate_q_1;
  xx_minus_yy_5070137888(5.835899838155587, 4.25929991653456) _gate_q_11, _gate_q_3;
  cy _gate_q_4, _gate_q_9;
  id _gate_q_10;
  h _gate_q_7;
  cz _gate_q_0, _gate_q_5;
  iswap _gate_q_10, _gate_q_9;
  tdg _gate_q_11;
  ch _gate_q_6, _gate_q_3;
  sx _gate_q_2;
  cy _gate_q_12, _gate_q_8;
  cu3_5070139088(1.4951818028500012, 1.5485775912350055, 0.9276456647401647) _gate_q_7, _gate_q_1;
  sx _gate_q_4;
  csx _gate_q_8, _gate_q_5;
  rzz_5070133520(2.7306259502469383) _gate_q_3, _gate_q_12;
  u1(6.1213815186170235) _gate_q_9;
  dcx _gate_q_2, _gate_q_10;
  u3(5.6413832578939, 4.378660892765115, 1.6941980015993268) _gate_q_1;
  crx(6.260399261625192) _gate_q_6, _gate_q_0;
  cp(0.5324484897029604) _gate_q_4, _gate_q_7;
  y _gate_q_11;
  p(3.377389768700319) _gate_q_2;
  cp(0.9807777746111556) _gate_q_6, _gate_q_8;
  sxdg _gate_q_1;
  iswap _gate_q_4, _gate_q_0;
  cz _gate_q_11, _gate_q_5;
  cu3_5070129920(0.2791634631389486, 5.719335381881009, 5.640960337593317) _gate_q_7, _gate_q_10;
  cx _gate_q_9, _gate_q_12;
  t _gate_q_3;
  rzx_5070135104(2.2869582704126237) _gate_q_8, _gate_q_2;
  cs _gate_q_0, _gate_q_9;
  sx _gate_q_6;
  swap _gate_q_10, _gate_q_7;
  U(1.642432514949563, 5.751586425854499, 0.3955112108420879) _gate_q_1;
  id _gate_q_12;
  u1(0.44883844488447017) _gate_q_5;
  p(2.4651301859991426) _gate_q_3;
  x _gate_q_4;
  z _gate_q_11;
  U(2.682844468163855, 5.828000383623122, 3.576344226456705) _gate_q_3;
  crz(1.776475264838733) _gate_q_11, _gate_q_7;
  h _gate_q_1;
  cx _gate_q_5, _gate_q_10;
  u2(1.017762728146696, 4.965007067978127) _gate_q_12;
  t _gate_q_6;
  xx_plus_yy_5070129488(3.632016450423167, 2.711678019717086) _gate_q_4, _gate_q_2;
  crz(2.5698746725643398) _gate_q_0, _gate_q_9;
  tdg _gate_q_8;
  cp(1.166080188880183) _gate_q_10, _gate_q_0;
  cz _gate_q_12, _gate_q_1;
  rxx_5070128432(2.022676639532638) _gate_q_5, _gate_q_7;
  p(5.523756337432013) _gate_q_4;
  u1(2.610727643245747) _gate_q_8;
  sxdg _gate_q_11;
  swap _gate_q_2, _gate_q_3;
  y _gate_q_9;
  rz(1.2301740312230063) _gate_q_6;
  xx_minus_yy_5070136112(0.34781980575490884, 0.4989417044597125) _gate_q_5, _gate_q_4;
  s _gate_q_6;
  r_5070141104(3.2590659830788042, 3.7610497042557194) _gate_q_0;
  id _gate_q_7;
  sxdg _gate_q_12;
  x _gate_q_3;
  cz _gate_q_11, _gate_q_1;
  id _gate_q_10;
  u2(4.161656368073887, 5.673825171265148) _gate_q_9;
  cu3_5070135392(3.8919790565089776, 0.8191693852179058, 2.2010067459704143) _gate_q_8, _gate_q_2;
}
gate rzz_5074134096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.249381452080783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074140480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4165852196932835) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3690573988679766) _gate_q_1;
  ry(-2.3690573988679766) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4165852196932835) _gate_q_0;
}
gate r_5074134720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0604517213393394, 0.2670890937374899, -0.2670890937374899) _gate_q_0;
}
gate rxx_5074125312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.645470615751111) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074125456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5886418253555847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074132656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6463036372443554, 2.578826953545282, -2.578826953545282) _gate_q_0;
}
gate xx_plus_yy_5074133136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8941912211224053) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0903903466580567) _gate_q_1;
  ry(-2.0903903466580567) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8941912211224053) _gate_q_0;
}
gate cu3_5074133760(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0744161296059702) _gate_q_0;
  u1(-0.20500880979817876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.009973859323332, 0, -1.0744161296059702) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.009973859323332, 1.279424939404149, 0) _gate_q_1;
}
gate cu1_5074138608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9755310061030875) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9755310061030875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9755310061030875) _gate_q_1;
}
gate xx_plus_yy_5070131504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.741312197881817) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9625685411389178) _gate_q_1;
  ry(-2.9625685411389178) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.741312197881817) _gate_q_0;
}
gate cu3_5074129392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1974478515998204) _gate_q_0;
  u1(1.112051514950637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.112515290329299, 0, -1.1974478515998204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.112515290329299, 0.08539633664918354, 0) _gate_q_1;
}
gate ryy_5074141152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5253562349854913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074128864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.837854571266562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074136784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.826035353245209) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.090820877323601) _gate_q_1;
  ry(-2.090820877323601) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.826035353245209) _gate_q_0;
}
gate cu1_5074129728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.39794369340857766) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.39794369340857766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.39794369340857766) _gate_q_1;
}
gate xx_minus_yy_5074128048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9797817075517514) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.222122638565166) _gate_q_0;
  ry(-1.222122638565166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9797817075517514) _gate_q_1;
}
gate xx_minus_yy_5074140240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.010999675093597) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.818512566667835) _gate_q_0;
  ry(-2.818512566667835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.010999675093597) _gate_q_1;
}
gate cu3_5074129104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.03357260565605) _gate_q_0;
  u1(1.287819086590683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7031828151353694, 0, -4.03357260565605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7031828151353694, 2.7457535190653672, 0) _gate_q_1;
}
gate rzz_5074135440(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.75848246586349) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074127712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9160603915881143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074135200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3699182217902032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074131552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.899520043531242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074126416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6188029225194183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074131072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2394161047678938) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1794480007751108) _gate_q_0;
  ry(-0.1794480007751108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2394161047678938) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cu(2.6374931288416796, 3.0693450080990483, 5.132492009735699, 5.059713826079276) _gate_q_11, _gate_q_10;
  rzz_5074134096(6.249381452080783) _gate_q_4, _gate_q_3;
  crz(6.000370573972473) _gate_q_6, _gate_q_1;
  xx_plus_yy_5074140480(4.738114797735953, 3.4165852196932835) _gate_q_0, _gate_q_5;
  sx _gate_q_9;
  x _gate_q_2;
  cry(0.5695637753220136) _gate_q_8, _gate_q_7;
  r_5074134720(2.0604517213393394, 1.8378854205323865) _gate_q_12;
  csdg _gate_q_9, _gate_q_11;
  cy _gate_q_3, _gate_q_12;
  csx _gate_q_0, _gate_q_4;
  u3(0.748273910038406, 3.176400447909223, 5.534931836811836) _gate_q_8;
  dcx _gate_q_10, _gate_q_1;
  rxx_5074125312(1.645470615751111) _gate_q_7, _gate_q_2;
  x _gate_q_6;
  sx _gate_q_5;
  rzz_5074125456(2.5886418253555847) _gate_q_12, _gate_q_3;
  t _gate_q_4;
  x _gate_q_7;
  dcx _gate_q_6, _gate_q_2;
  csx _gate_q_1, _gate_q_8;
  ry(6.248597760799173) _gate_q_5;
  tdg _gate_q_11;
  u1(0.2757409459435381) _gate_q_0;
  u2(5.006374064184408, 5.009678556850521) _gate_q_10;
  sdg _gate_q_9;
  ch _gate_q_6, _gate_q_4;
  u1(2.402226318640558) _gate_q_2;
  r_5074132656(1.6463036372443554, 4.149623280340179) _gate_q_11;
  cu(2.6465092635771432, 1.6541964346859348, 4.779567561110876, 6.128174681912687) _gate_q_0, _gate_q_12;
  p(0.4654717014507413) _gate_q_7;
  u2(5.072095623102155, 4.2749074407959755) _gate_q_1;
  U(3.594062431816283, 4.845237877415984, 0.2462993380948842) _gate_q_5;
  x _gate_q_9;
  iswap _gate_q_8, _gate_q_3;
  h _gate_q_10;
  ch _gate_q_3, _gate_q_2;
  rz(6.077047025823156) _gate_q_7;
  cy _gate_q_6, _gate_q_8;
  xx_plus_yy_5074133136(4.180780693316113, 0.8941912211224053) _gate_q_10, _gate_q_1;
  cu3_5074133760(6.019947718646664, 1.279424939404149, 0.8694073198077915) _gate_q_9, _gate_q_12;
  dcx _gate_q_0, _gate_q_5;
  cu(5.352266353527551, 2.118123307645387, 0.38284502125403774, 0.804066017726515) _gate_q_4, _gate_q_11;
  z _gate_q_4;
  cu1_5074138608(5.951062012206175) _gate_q_2, _gate_q_1;
  csx _gate_q_8, _gate_q_7;
  ecr _gate_q_11, _gate_q_9;
  xx_plus_yy_5070131504(5.9251370822778355, 4.741312197881817) _gate_q_12, _gate_q_6;
  cu3_5074129392(4.225030580658598, 0.08539633664918354, 2.3094993665504573) _gate_q_5, _gate_q_0;
  ryy_5074141152(0.5253562349854913) _gate_q_3, _gate_q_10;
  rzz_5074128864(2.837854571266562) _gate_q_12, _gate_q_1;
  crz(5.167880408009404) _gate_q_3, _gate_q_4;
  u1(1.9617605743366802) _gate_q_0;
  p(3.8908791562571916) _gate_q_11;
  sdg _gate_q_2;
  xx_plus_yy_5074136784(4.181641754647202, 4.826035353245209) _gate_q_8, _gate_q_7;
  iswap _gate_q_9, _gate_q_10;
  cz _gate_q_5, _gate_q_6;
  ry(0.25173235710681646) _gate_q_8;
  cu1_5074129728(0.7958873868171553) _gate_q_1, _gate_q_11;
  s _gate_q_4;
  x _gate_q_0;
  xx_minus_yy_5074128048(2.444245277130332, 1.9797817075517514) _gate_q_6, _gate_q_7;
  xx_minus_yy_5074140240(5.63702513333567, 2.010999675093597) _gate_q_5, _gate_q_10;
  cu3_5074129104(1.4063656302707388, 2.7457535190653672, 5.321391692246733) _gate_q_2, _gate_q_3;
  csx _gate_q_12, _gate_q_9;
  rzz_5074135440(4.75848246586349) _gate_q_4, _gate_q_10;
  rxx_5074127712(0.9160603915881143) _gate_q_3, _gate_q_1;
  x _gate_q_11;
  dcx _gate_q_6, _gate_q_0;
  U(5.690095632484446, 0.6328266580514336, 5.4622160458088835) _gate_q_12;
  rxx_5074135200(0.3699182217902032) _gate_q_7, _gate_q_8;
  t _gate_q_5;
  z _gate_q_9;
  id _gate_q_2;
  rzz_5074131552(5.899520043531242) _gate_q_12, _gate_q_8;
  sx _gate_q_3;
  s _gate_q_9;
  rx(5.04318891917778) _gate_q_1;
  ry(1.1031781544187198) _gate_q_4;
  p(2.972927015885366) _gate_q_0;
  y _gate_q_6;
  rzx_5074126416(3.6188029225194183) _gate_q_7, _gate_q_11;
  xx_minus_yy_5074131072(0.3588960015502216, 2.2394161047678938) _gate_q_5, _gate_q_10;
  t _gate_q_2;
}