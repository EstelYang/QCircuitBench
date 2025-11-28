gate ryy_5072196368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.999465388280073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072206064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.309630279087133) _gate_q_0;
  u1(-1.4171574632041999) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3278470865837886, 0, -4.309630279087133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3278470865837886, 5.726787742291333, 0) _gate_q_1;
}
gate r_5072194688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.073939485603854, -1.3500618552997712, 1.3500618552997712) _gate_q_0;
}
gate cu3_5072024112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.444377562133026) _gate_q_0;
  u1(0.7962240167055046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.38836432073958416, 0, -5.444377562133026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.38836432073958416, 4.648153545427522, 0) _gate_q_1;
}
gate cu1_5072026512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.196314176076554) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.196314176076554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.196314176076554) _gate_q_1;
}
gate rzx_5072018736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9480770089390957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5072024976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5094399696066674) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5094399696066674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5094399696066674) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5072014416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.709534571011759, 4.192644150703209, -4.192644150703209) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  ryy_5072196368(2.999465388280073) _gate_q_5, _gate_q_0;
  cu3_5072206064(2.655694173167577, 5.726787742291333, 2.8924728158829334) _gate_q_4, _gate_q_2;
  id _gate_q_1;
  r_5072194688(4.073939485603854, 0.22073447149512543) _gate_q_3;
  p(1.5721640829336192) _gate_q_6;
  u2(1.1368359915544266, 4.030723027227304) _gate_q_4;
  u3(5.409731155390855, 4.229984444594272, 1.653231344426099) _gate_q_3;
  cu(3.775494817542788, 5.32918916730288, 3.538045823314676, 3.0854854336048874) _gate_q_6, _gate_q_0;
  sx _gate_q_2;
  U(1.7437778796196108, 5.347681024438193, 3.1116309318018445) _gate_q_1;
  t _gate_q_5;
  cz _gate_q_3, _gate_q_6;
  cu3_5072024112(0.7767286414791683, 4.648153545427522, 6.240601578838531) _gate_q_5, _gate_q_4;
  cu(2.5441491630210944, 5.410328279139034, 0.3805424693191966, 1.9290388207122768) _gate_q_1, _gate_q_2;
  sx _gate_q_0;
  cu1_5072026512(2.392628352153108) _gate_q_1, _gate_q_2;
  rzx_5072018736(0.9480770089390957) _gate_q_3, _gate_q_0;
  dcx _gate_q_6, _gate_q_5;
  s _gate_q_4;
  h _gate_q_1;
  sdg _gate_q_2;
  U(5.116107387195009, 0.7811993102777901, 6.221215006313327) _gate_q_5;
  sx _gate_q_3;
  sdg _gate_q_4;
  crz(4.195215130244235) _gate_q_0, _gate_q_6;
  u3(1.6547119856317096, 4.129515752658452, 2.350075578582778) _gate_q_1;
  rx(0.09399422743908616) _gate_q_3;
  crz(6.083288794172663) _gate_q_0, _gate_q_6;
  sxdg _gate_q_2;
  cu1_5072024976(5.018879939213335) _gate_q_4, _gate_q_5;
  swap _gate_q_6, _gate_q_0;
  cz _gate_q_2, _gate_q_4;
  iswap _gate_q_5, _gate_q_3;
  r_5072014416(4.709534571011759, 5.763440477498105) _gate_q_1;
}
gate cu1_5072462208(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5021803581151487) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5021803581151487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5021803581151487) _gate_q_1;
}
gate ryy_5072462256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.050407666533413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072457600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0499036807257873, -0.6965391970262845, 0.6965391970262845) _gate_q_0;
}
gate cu3_5072468880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7183163911884343) _gate_q_0;
  u1(1.1642073209599184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0455712976953766, 0, -3.7183163911884343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0455712976953766, 2.554109070228516, 0) _gate_q_1;
}
gate r_5072460624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.610081373078411, 3.5707304176271677, -3.5707304176271677) _gate_q_0;
}
gate cu1_5072461776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.18065755271114173) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.18065755271114173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.18065755271114173) _gate_q_1;
}
gate xx_plus_yy_5072455440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.393230408204622) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2680892425811401) _gate_q_1;
  ry(-0.2680892425811401) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.393230408204622) _gate_q_0;
}
gate xx_plus_yy_5072461008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.874292572451402) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.924608797798294) _gate_q_1;
  ry(-2.924608797798294) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.874292572451402) _gate_q_0;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  u3(1.4528000588885008, 1.4809548675834874, 1.056836735087971) _gate_q_4;
  cu1_5072462208(1.0043607162302974) _gate_q_3, _gate_q_6;
  p(0.9777560512064476) _gate_q_5;
  ryy_5072462256(6.050407666533413) _gate_q_1, _gate_q_0;
  u1(5.684324525748571) _gate_q_2;
  p(3.5587708924279386) _gate_q_3;
  t _gate_q_6;
  r_5072457600(3.0499036807257873, 0.874257129768612) _gate_q_2;
  cu3_5072468880(6.091142595390753, 2.554109070228516, 4.882523712148353) _gate_q_5, _gate_q_1;
  iswap _gate_q_4, _gate_q_0;
  r_5072460624(4.610081373078411, 5.141526744422064) _gate_q_0;
  x _gate_q_5;
  iswap _gate_q_3, _gate_q_1;
  sxdg _gate_q_6;
  cu1_5072461776(0.36131510542228346) _gate_q_2, _gate_q_4;
  xx_plus_yy_5072455440(0.5361784851622802, 5.393230408204622) _gate_q_0, _gate_q_5;
  t _gate_q_1;
  xx_plus_yy_5072461008(5.849217595596588, 3.874292572451402) _gate_q_2, _gate_q_3;
  u1(4.776085772475699) _gate_q_4;
  p(0.026026934660377508) _gate_q_6;
  ry(2.021698185286325) _gate_q_5;
  ecr _gate_q_2, _gate_q_1;
  iswap _gate_q_0, _gate_q_6;
  ecr _gate_q_3, _gate_q_4;
  p(4.2569020026539715) _gate_q_3;
  cs _gate_q_1, _gate_q_2;
  h _gate_q_6;
  x _gate_q_4;
  p(3.1849948103875825) _gate_q_0;
  t _gate_q_5;
  u2(5.793363597902846, 2.5448150521674604) _gate_q_1;
  cy _gate_q_6, _gate_q_5;
  cry(3.709188936589132) _gate_q_4, _gate_q_0;
  csx _gate_q_3, _gate_q_2;
}