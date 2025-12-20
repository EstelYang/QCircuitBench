gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5070901264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3172774878732874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070911344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9335078329232586) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9335078329232586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9335078329232586) _gate_q_1;
}
gate r_5070904384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5655948360717957, 1.569911335759747, -1.569911335759747) _gate_q_0;
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
gate rzx_5070908992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6220066160504257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070897280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.044104961909783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070911920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.133683924390819) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rxx_5070907600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.1404591320212925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070909040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3889022974432739) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3889022974432739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3889022974432739) _gate_q_1;
}
gate rxx_5069432608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.965719935359796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5069433472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.951665183644051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5069425984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3601268472183303, 2.1784469258103223, -2.1784469258103223) _gate_q_0;
}
gate rzz_5069425936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2634188983819488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5069422864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.598157950698072) _gate_q_0;
  u1(1.048300764409694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.117349025680059, 0, -4.598157950698072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.117349025680059, 3.549857186288378, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5067360544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.258184471180975) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8014857781986575) _gate_q_1;
  ry(-1.8014857781986575) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.258184471180975) _gate_q_0;
}
gate ryy_5072767264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.208544585530358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072767792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.148284846829757) _gate_q_0;
  u1(0.7532459678989578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8896487330480642, 0, -3.148284846829757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8896487330480642, 2.3950388789307993, 0) _gate_q_1;
}
gate xx_minus_yy_5072768704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.885343483464263) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1168044141065405) _gate_q_0;
  ry(-1.1168044141065405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.885343483464263) _gate_q_1;
}
gate rzx_5072780752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6453664012615774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072766304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.928109643480164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  id _gate_q_7;
  U(2.132349850995117, 3.6852039915944395, 3.597295764655313) _gate_q_18;
  sxdg _gate_q_4;
  dcx _gate_q_13, _gate_q_6;
  rzz_5070901264(1.3172774878732874) _gate_q_14, _gate_q_11;
  cu1_5070911344(1.8670156658465171) _gate_q_17, _gate_q_10;
  t _gate_q_12;
  u1(5.785332779560727) _gate_q_0;
  rz(3.4062268098777606) _gate_q_1;
  r_5070904384(1.5655948360717957, 3.1407076625546435) _gate_q_5;
  ecr _gate_q_15, _gate_q_2;
  cp(4.586487497817317) _gate_q_16, _gate_q_3;
  id _gate_q_9;
  p(0.2011925251149282) _gate_q_8;
  U(0.2614004371875837, 0.34944695094259376, 1.126191350652396) _gate_q_8;
  p(3.359423418932062) _gate_q_9;
  cu(0.018813811632644274, 5.658361138011396, 5.658156029504166, 4.754318905677977) _gate_q_15, _gate_q_6;
  cry(6.260354105955879) _gate_q_10, _gate_q_17;
  rz(0.6238199726371667) _gate_q_12;
  p(1.1519488611387207) _gate_q_11;
  h _gate_q_5;
  ch _gate_q_0, _gate_q_2;
  rzx_5070908992(0.6220066160504257) _gate_q_3, _gate_q_18;
  csdg _gate_q_16, _gate_q_4;
  u3(4.178524255172777, 3.7273936399249563, 6.2690063745364135) _gate_q_13;
  tdg _gate_q_14;
  cp(2.5674356347594003) _gate_q_1, _gate_q_7;
  sxdg _gate_q_16;
  ecr _gate_q_11, _gate_q_0;
  z _gate_q_8;
  sxdg _gate_q_12;
  dcx _gate_q_3, _gate_q_18;
  rx(5.362881594468289) _gate_q_9;
  dcx _gate_q_6, _gate_q_4;
  rx(2.171364439101025) _gate_q_5;
  sdg _gate_q_1;
  u1(1.6874842840860915) _gate_q_17;
  t _gate_q_13;
  p(4.291265674533275) _gate_q_15;
  rzz_5070897280(5.044104961909783) _gate_q_14, _gate_q_2;
  p(2.4847478310091398) _gate_q_10;
  z _gate_q_7;
  rxx_5070911920(2.133683924390819) _gate_q_12, _gate_q_8;
  u1(3.319131369202493) _gate_q_4;
  csx _gate_q_17, _gate_q_16;
  id _gate_q_18;
  u3(0.9978091046528096, 3.1152849617012204, 4.952225938892713) _gate_q_10;
  ecr _gate_q_15, _gate_q_5;
  rxx_5070907600(5.1404591320212925) _gate_q_13, _gate_q_2;
  z _gate_q_0;
  crx(5.37673576030435) _gate_q_1, _gate_q_7;
  tdg _gate_q_14;
  swap _gate_q_6, _gate_q_9;
  cry(2.1948500201340897) _gate_q_3, _gate_q_11;
  sx _gate_q_7;
  tdg _gate_q_9;
  u2(3.2472142666016297, 3.1727805740484216) _gate_q_16;
  s _gate_q_0;
  csdg _gate_q_5, _gate_q_13;
  p(2.686684740698439) _gate_q_15;
  s _gate_q_3;
  t _gate_q_1;
  id _gate_q_2;
  cx _gate_q_17, _gate_q_18;
  crz(6.144832973192186) _gate_q_8, _gate_q_12;
  swap _gate_q_14, _gate_q_4;
  cry(5.784139512219446) _gate_q_10, _gate_q_11;
  ry(4.2231469352919) _gate_q_6;
  swap _gate_q_8, _gate_q_6;
  sx _gate_q_0;
  crx(3.562324920076418) _gate_q_16, _gate_q_3;
  u1(2.4919287384267017) _gate_q_18;
  cz _gate_q_7, _gate_q_13;
  sdg _gate_q_4;
  sxdg _gate_q_12;
  sdg _gate_q_5;
  z _gate_q_1;
  rz(0.42865451270335436) _gate_q_15;
  sxdg _gate_q_9;
  csdg _gate_q_2, _gate_q_11;
  x _gate_q_17;
  swap _gate_q_10, _gate_q_14;
  y _gate_q_15;
  csx _gate_q_8, _gate_q_17;
  cu1_5070909040(2.7778045948865477) _gate_q_1, _gate_q_5;
  id _gate_q_14;
  sdg _gate_q_7;
  crx(0.49970253992842123) _gate_q_18, _gate_q_6;
  u3(5.505161920329633, 4.513012857542018, 0.3979360080744637) _gate_q_4;
  rxx_5069432608(5.965719935359796) _gate_q_16, _gate_q_2;
  rzz_5069433472(5.951665183644051) _gate_q_10, _gate_q_3;
  h _gate_q_11;
  r_5069425984(2.3601268472183303, 3.749243252605219) _gate_q_12;
  x _gate_q_9;
  rz(5.185002042318747) _gate_q_13;
  t _gate_q_0;
  cy _gate_q_8, _gate_q_9;
  cu(3.177191536573002, 3.117240427848676, 0.6682674492886602, 2.1010199213743284) _gate_q_1, _gate_q_6;
  tdg _gate_q_14;
  rzz_5069425936(1.2634188983819488) _gate_q_2, _gate_q_4;
  s _gate_q_12;
  cs _gate_q_10, _gate_q_0;
  cu3_5069422864(6.234698051360118, 3.549857186288378, 5.646458715107766) _gate_q_7, _gate_q_15;
  s _gate_q_3;
  ecr _gate_q_11, _gate_q_16;
  iswap _gate_q_13, _gate_q_5;
  dcx _gate_q_18, _gate_q_17;
  xx_plus_yy_5067360544(3.602971556397315, 3.258184471180975) _gate_q_15, _gate_q_17;
  s _gate_q_5;
  U(0.09834340014947511, 3.6672706150701484, 2.6376736557741864) _gate_q_14;
  iswap _gate_q_10, _gate_q_7;
  cz _gate_q_2, _gate_q_13;
  p(2.440699867961479) _gate_q_12;
  z _gate_q_18;
  ry(0.8039403326851738) _gate_q_8;
  id _gate_q_4;
  cz _gate_q_3, _gate_q_9;
  u2(0.3084671243637454, 2.879211163960789) _gate_q_6;
  csx _gate_q_16, _gate_q_0;
  p(5.382077598397885) _gate_q_1;
  ry(0.4056796730930131) _gate_q_11;
  ryy_5072767264(5.208544585530358) _gate_q_16, _gate_q_17;
  cu3_5072767792(5.7792974660961285, 2.3950388789307993, 3.901530814728715) _gate_q_9, _gate_q_18;
  ch _gate_q_1, _gate_q_11;
  crx(1.1423273094970061) _gate_q_14, _gate_q_2;
  xx_minus_yy_5072768704(2.233608828213081, 5.885343483464263) _gate_q_3, _gate_q_4;
  u2(3.5172210544460594, 3.503037986062707) _gate_q_6;
  rzx_5072780752(3.6453664012615774) _gate_q_15, _gate_q_0;
  crz(0.7764648483726654) _gate_q_7, _gate_q_5;
  sdg _gate_q_8;
  ryy_5072766304(4.928109643480164) _gate_q_10, _gate_q_12;
  s _gate_q_13;
}
gate cu3_5074264880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9250256785430722) _gate_q_0;
  u1(0.7199343846803212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1129377558508686, 0, -1.9250256785430722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1129377558508686, 1.205091293862751, 0) _gate_q_1;
}
gate rzx_5074267040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9843346195870596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5084994720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.288874324538767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070726560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.1724680720108013) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2221033854055614) _gate_q_0;
  ry(-2.2221033854055614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.1724680720108013) _gate_q_1;
}
gate cu3_5070721040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.768688582452736) _gate_q_0;
  u1(0.008491522445201571) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.612988992684726, 0, -4.768688582452736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.612988992684726, 4.760197060007535, 0) _gate_q_1;
}
gate rzz_5070717296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7051410109100034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070724736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.05099763358553, 0.06383956968432258, -0.06383956968432258) _gate_q_0;
}
gate rxx_5070725456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.55274823183663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070729392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.636819745853456) _gate_q_0;
  u1(0.8343475043927686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4493244497784876, 0, -1.636819745853456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4493244497784876, 0.8024722414606874, 0) _gate_q_1;
}
gate rzz_5070728624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.8256235593779335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070718784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.48779921385491626) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.004633046501005979) _gate_q_0;
  ry(-0.004633046501005979) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.48779921385491626) _gate_q_1;
}
gate xx_plus_yy_5070722192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.548378189354785) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2784927958689274) _gate_q_1;
  ry(-0.2784927958689274) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.548378189354785) _gate_q_0;
}
gate cu3_5070729056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.107248158034345) _gate_q_0;
  u1(-1.0455703064951922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.740699040686424, 0, -3.107248158034345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.740699040686424, 4.152818464529537, 0) _gate_q_1;
}
gate r_5070725648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3792466526536717, 1.3483531717578559, -1.3483531717578559) _gate_q_0;
}
gate r_5070720320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.731749673966521, 2.8909666694647926, -2.8909666694647926) _gate_q_0;
}
gate xx_plus_yy_5070728720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.147826098823962) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5528977381965894) _gate_q_1;
  ry(-2.5528977381965894) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.147826098823962) _gate_q_0;
}
gate r_5070717824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2470723697560118, 4.158099719634379, -4.158099719634379) _gate_q_0;
}
gate rzx_5070727232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.31298660221921) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070726656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2806100710311292) _gate_q_0;
  u1(2.0536224668883567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2733542478655793, 0, -2.2806100710311292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2733542478655793, 0.2269876041427728, 0) _gate_q_1;
}
gate xx_plus_yy_5070720272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.504011068313073) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.392236719236563) _gate_q_1;
  ry(-2.392236719236563) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.504011068313073) _gate_q_0;
}
gate rxx_5070730736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5245284241293975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070732608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.00850268163598163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  rz(1.8162548407527663) _gate_q_7;
  tdg _gate_q_9;
  u2(1.4707533652793574, 2.902373535939076) _gate_q_2;
  csx _gate_q_12, _gate_q_8;
  cp(3.9323409404217293) _gate_q_17, _gate_q_15;
  cu3_5074264880(4.225875511701737, 1.205091293862751, 2.6449600632233934) _gate_q_6, _gate_q_4;
  z _gate_q_18;
  s _gate_q_3;
  cx _gate_q_0, _gate_q_16;
  U(2.3934415793171095, 0.6842899343588211, 1.6214676051282364) _gate_q_10;
  rz(5.608172571798628) _gate_q_13;
  rzx_5074267040(0.9843346195870596) _gate_q_1, _gate_q_11;
  rzx_5084994720(1.288874324538767) _gate_q_5, _gate_q_14;
  ry(3.1904428206797784) _gate_q_17;
  s _gate_q_16;
  cx _gate_q_4, _gate_q_7;
  id _gate_q_0;
  x _gate_q_6;
  xx_minus_yy_5070726560(4.444206770811123, 0.1724680720108013) _gate_q_15, _gate_q_11;
  sdg _gate_q_10;
  cx _gate_q_8, _gate_q_18;
  cu3_5070721040(1.225977985369452, 4.760197060007535, 4.777180104897938) _gate_q_5, _gate_q_14;
  cz _gate_q_3, _gate_q_2;
  U(1.1355851711618095, 4.416713194359214, 2.0845439881291683) _gate_q_1;
  ecr _gate_q_9, _gate_q_13;
  sx _gate_q_12;
  sx _gate_q_3;
  p(3.2589666720735924) _gate_q_17;
  dcx _gate_q_0, _gate_q_11;
  t _gate_q_8;
  csdg _gate_q_13, _gate_q_1;
  ch _gate_q_5, _gate_q_4;
  cy _gate_q_7, _gate_q_6;
  p(6.018206606385908) _gate_q_14;
  rzz_5070717296(2.7051410109100034) _gate_q_12, _gate_q_15;
  p(5.7940378402602395) _gate_q_9;
  sxdg _gate_q_18;
  cx _gate_q_10, _gate_q_16;
  u1(0.46299008422776083) _gate_q_2;
  U(0.22630433603707198, 2.9196653622952398, 3.283396914992577) _gate_q_11;
  t _gate_q_14;
  rz(5.595240766875818) _gate_q_3;
  x _gate_q_15;
  r_5070724736(5.05099763358553, 1.6346358964792191) _gate_q_18;
  rxx_5070725456(5.55274823183663) _gate_q_9, _gate_q_2;
  u1(4.259420477883673) _gate_q_6;
  ecr _gate_q_4, _gate_q_10;
  rx(3.184892776659645) _gate_q_12;
  u2(5.636445040043763, 3.252375508407709) _gate_q_16;
  swap _gate_q_7, _gate_q_13;
  u1(1.8401486929735336) _gate_q_5;
  cu3_5070729392(4.898648899556975, 0.8024722414606874, 2.4711672502462245) _gate_q_8, _gate_q_17;
  rzz_5070728624(4.8256235593779335) _gate_q_1, _gate_q_0;
  csdg _gate_q_12, _gate_q_9;
  ecr _gate_q_8, _gate_q_5;
  sx _gate_q_1;
  sx _gate_q_4;
  ry(0.11516091827586612) _gate_q_11;
  rz(2.7683052300013844) _gate_q_16;
  csx _gate_q_2, _gate_q_17;
  xx_minus_yy_5070718784(0.009266093002011958, 0.48779921385491626) _gate_q_7, _gate_q_0;
  ch _gate_q_14, _gate_q_3;
  y _gate_q_15;
  cz _gate_q_18, _gate_q_13;
  xx_plus_yy_5070722192(0.5569855917378548, 4.548378189354785) _gate_q_6, _gate_q_10;
  p(4.31076893674434) _gate_q_10;
  ch _gate_q_4, _gate_q_9;
  dcx _gate_q_6, _gate_q_12;
  cx _gate_q_11, _gate_q_1;
  rx(5.964843305471521) _gate_q_15;
  h _gate_q_2;
  csx _gate_q_7, _gate_q_17;
  cu3_5070729056(5.481398081372848, 4.152818464529537, 2.061677851539153) _gate_q_3, _gate_q_13;
  rx(5.539865052214296) _gate_q_14;
  cz _gate_q_5, _gate_q_16;
  cry(2.160674743980669) _gate_q_0, _gate_q_8;
  u2(2.39121330402119, 0.6235141222749333) _gate_q_18;
  r_5070725648(2.3792466526536717, 2.9191494985527524) _gate_q_1;
  r_5070720320(3.731749673966521, 4.461762996259689) _gate_q_7;
  xx_plus_yy_5070728720(5.105795476393179, 3.147826098823962) _gate_q_15, _gate_q_10;
  swap _gate_q_5, _gate_q_11;
  ecr _gate_q_16, _gate_q_13;
  cy _gate_q_8, _gate_q_4;
  dcx _gate_q_14, _gate_q_17;
  cu(3.6838155891203734, 4.992923039191428, 0.3292419136732703, 5.326701126139415) _gate_q_12, _gate_q_2;
  h _gate_q_6;
  r_5070717824(3.2470723697560118, 5.728896046429275) _gate_q_0;
  cy _gate_q_3, _gate_q_9;
  sxdg _gate_q_18;
  csdg _gate_q_5, _gate_q_12;
  rzx_5070727232(2.31298660221921) _gate_q_8, _gate_q_1;
  y _gate_q_18;
  cs _gate_q_10, _gate_q_16;
  cs _gate_q_15, _gate_q_2;
  y _gate_q_3;
  rx(6.107107953780971) _gate_q_11;
  rz(4.134563324821348) _gate_q_13;
  rz(2.7965114376975335) _gate_q_4;
  id _gate_q_9;
  t _gate_q_7;
  cu3_5070726656(2.5467084957311585, 0.2269876041427728, 4.334232537919486) _gate_q_17, _gate_q_6;
  xx_plus_yy_5070720272(4.784473438473126, 4.504011068313073) _gate_q_0, _gate_q_14;
  ecr _gate_q_4, _gate_q_5;
  cy _gate_q_0, _gate_q_14;
  crx(1.0468811769723527) _gate_q_18, _gate_q_3;
  sdg _gate_q_12;
  rxx_5070730736(0.5245284241293975) _gate_q_11, _gate_q_13;
  sdg _gate_q_1;
  csdg _gate_q_15, _gate_q_6;
  sx _gate_q_16;
  ecr _gate_q_2, _gate_q_9;
  u2(2.417443379165322, 0.17641247636850274) _gate_q_7;
  sx _gate_q_10;
  ecr _gate_q_17, _gate_q_8;
  cry(2.6310129183533224) _gate_q_18, _gate_q_15;
  id _gate_q_17;
  ryy_5070732608(0.00850268163598163) _gate_q_13, _gate_q_4;
  h _gate_q_14;
  cy _gate_q_11, _gate_q_16;
  sxdg _gate_q_3;
  u2(5.581588708291891, 0.6549263041174181) _gate_q_6;
  iswap _gate_q_8, _gate_q_9;
  csx _gate_q_5, _gate_q_1;
  dcx _gate_q_2, _gate_q_10;
  z _gate_q_7;
  u3(2.8538504038643655, 2.960499191969226, 5.907368508025109) _gate_q_12;
  tdg _gate_q_0;
}