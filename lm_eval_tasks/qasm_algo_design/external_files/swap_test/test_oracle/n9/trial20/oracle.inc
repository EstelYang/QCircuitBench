gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate r_5072973616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6480130484293265, -0.6619495289395931, 0.6619495289395931) _gate_q_0;
}
gate rxx_5072963872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7489081772616055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072972800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2583351504395313) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.552610230143974) _gate_q_0;
  ry(-0.552610230143974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2583351504395313) _gate_q_1;
}
gate ryy_5072962528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.04554293150431876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072961664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5644993548239956) _gate_q_0;
  u1(1.1474106105964121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9415062855761995, 0, -3.5644993548239956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9415062855761995, 2.4170887442275837, 0) _gate_q_1;
}
gate ryy_5072971888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.301418994976566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072971696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9543125331748021) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9543125331748021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9543125331748021) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5072961760(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6317573924006297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cp(1.6001534428073636) _gate_q_6, _gate_q_3;
  sx _gate_q_2;
  crz(0.768420956646537) _gate_q_1, _gate_q_7;
  rx(2.688126657367503) _gate_q_5;
  p(5.756658550721481) _gate_q_4;
  u1(1.2137747165693125) _gate_q_8;
  x _gate_q_0;
  u3(4.550031282883455, 5.313489422420236, 1.3031492180515616) _gate_q_3;
  cs _gate_q_8, _gate_q_1;
  s _gate_q_5;
  rz(4.091295810921619) _gate_q_4;
  csx _gate_q_0, _gate_q_7;
  ecr _gate_q_2, _gate_q_6;
  z _gate_q_4;
  U(0.20915322106501028, 2.4157053821306604, 3.203825135171241) _gate_q_8;
  csdg _gate_q_5, _gate_q_7;
  csdg _gate_q_2, _gate_q_3;
  y _gate_q_6;
  cx _gate_q_0, _gate_q_1;
  csx _gate_q_2, _gate_q_7;
  ry(3.396648628020607) _gate_q_8;
  id _gate_q_6;
  r_5072973616(3.6480130484293265, 0.9088467978553034) _gate_q_3;
  rx(5.865139022100955) _gate_q_4;
  sdg _gate_q_0;
  U(4.257751523287149, 1.5241481246569968, 0.6910291424945901) _gate_q_1;
  u3(2.5747134036196226, 1.7605064937762434, 2.948624335169367) _gate_q_5;
  ch _gate_q_4, _gate_q_0;
  u2(5.384304979656359, 1.3402646901953443) _gate_q_1;
  p(5.870272929521492) _gate_q_2;
  csx _gate_q_3, _gate_q_5;
  rxx_5072963872(5.7489081772616055) _gate_q_7, _gate_q_8;
  t _gate_q_6;
  xx_minus_yy_5072972800(1.105220460287948, 3.2583351504395313) _gate_q_3, _gate_q_7;
  ryy_5072962528(0.04554293150431876) _gate_q_5, _gate_q_6;
  cu3_5072961664(1.883012571152399, 2.4170887442275837, 4.711909965420408) _gate_q_0, _gate_q_1;
  sxdg _gate_q_2;
  crx(3.459722879327834) _gate_q_8, _gate_q_4;
  sx _gate_q_5;
  ryy_5072971888(4.301418994976566) _gate_q_7, _gate_q_4;
  y _gate_q_2;
  u3(4.253923530692595, 5.44649790953482, 5.801101183185116) _gate_q_3;
  sx _gate_q_0;
  cu1_5072971696(3.9086250663496043) _gate_q_6, _gate_q_1;
  tdg _gate_q_8;
  sx _gate_q_0;
  iswap _gate_q_2, _gate_q_4;
  sxdg _gate_q_5;
  ch _gate_q_7, _gate_q_1;
  cx _gate_q_6, _gate_q_8;
  t _gate_q_3;
  cry(5.015252733089572) _gate_q_2, _gate_q_0;
  u2(5.518375374049092, 4.120654567595865) _gate_q_1;
  ryy_5072961760(2.6317573924006297) _gate_q_8, _gate_q_6;
  cry(4.784613072600644) _gate_q_4, _gate_q_7;
  crx(5.054174399706014) _gate_q_5, _gate_q_3;
}
gate rxx_5072975728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6426187704413113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5072961904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.14684364615312495) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9569412958492127) _gate_q_0;
  ry(-2.9569412958492127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.14684364615312495) _gate_q_1;
}
gate r_5072968384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6413751526393967, 4.298381117728572, -4.298381117728572) _gate_q_0;
}
gate cu3_5072963584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.293628318271235) _gate_q_0;
  u1(-0.5571550955233109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6652092813740615, 0, -5.293628318271235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6652092813740615, 5.850783413794546, 0) _gate_q_1;
}
gate rzx_5072975872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.517729433252145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072973904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.660343386663183) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.660343386663183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.660343386663183) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  swap _gate_q_2, _gate_q_0;
  rxx_5072975728(2.6426187704413113) _gate_q_4, _gate_q_8;
  cy _gate_q_7, _gate_q_6;
  h _gate_q_3;
  cy _gate_q_5, _gate_q_1;
  dcx _gate_q_8, _gate_q_7;
  cs _gate_q_4, _gate_q_6;
  u1(3.9025704226410665) _gate_q_0;
  u1(5.089531388171811) _gate_q_3;
  cry(1.1786978732919589) _gate_q_5, _gate_q_2;
  z _gate_q_1;
  ch _gate_q_1, _gate_q_6;
  cp(2.419833910230271) _gate_q_2, _gate_q_4;
  t _gate_q_3;
  u3(5.447936004892115, 2.3017653314693067, 5.583333180595398) _gate_q_5;
  cp(3.3311776701066202) _gate_q_8, _gate_q_0;
  ry(1.0830553637623206) _gate_q_7;
  id _gate_q_6;
  crz(6.273195050372498) _gate_q_8, _gate_q_0;
  ecr _gate_q_3, _gate_q_2;
  csx _gate_q_4, _gate_q_1;
  cp(3.862083981762754) _gate_q_7, _gate_q_5;
  csx _gate_q_0, _gate_q_1;
  rx(5.004708164442689) _gate_q_6;
  cs _gate_q_4, _gate_q_2;
  xx_minus_yy_5072961904(5.9138825916984255, 0.14684364615312495) _gate_q_7, _gate_q_3;
  dcx _gate_q_8, _gate_q_5;
  r_5072968384(1.6413751526393967, 5.869177444523468) _gate_q_1;
  id _gate_q_0;
  cy _gate_q_2, _gate_q_8;
  ry(4.626893186575323) _gate_q_3;
  h _gate_q_4;
  cu3_5072963584(3.330418562748123, 5.850783413794546, 4.736473222747924) _gate_q_7, _gate_q_6;
  u3(1.8575997440808467, 6.157201700941081, 4.777191002056252) _gate_q_5;
  swap _gate_q_6, _gate_q_2;
  sdg _gate_q_3;
  ecr _gate_q_0, _gate_q_4;
  sx _gate_q_8;
  ry(2.035692169720747) _gate_q_5;
  sdg _gate_q_1;
  U(0.6494071242376482, 1.7998004209361271, 6.074389025105298) _gate_q_7;
  sxdg _gate_q_7;
  rzx_5072975872(5.517729433252145) _gate_q_3, _gate_q_1;
  cu1_5072973904(3.320686773326366) _gate_q_2, _gate_q_4;
  x _gate_q_0;
  swap _gate_q_5, _gate_q_8;
  u1(0.9352396110546527) _gate_q_6;
  id _gate_q_1;
  y _gate_q_0;
  sx _gate_q_8;
  cz _gate_q_2, _gate_q_3;
  cy _gate_q_5, _gate_q_4;
  sx _gate_q_6;
  u1(5.879118789340184) _gate_q_7;
}