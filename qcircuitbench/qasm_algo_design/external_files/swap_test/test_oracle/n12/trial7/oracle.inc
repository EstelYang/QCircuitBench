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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5107005344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8964074560643949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107001696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.688327463990544) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.936453740231405) _gate_q_1;
  ry(-2.936453740231405) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.688327463990544) _gate_q_0;
}
gate xx_plus_yy_5107001024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.046246026598018) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8069346199216345) _gate_q_1;
  ry(-2.8069346199216345) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.046246026598018) _gate_q_0;
}
gate r_5107005296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6560650680970292, 0.5946252168239483, -0.5946252168239483) _gate_q_0;
}
gate xx_plus_yy_5107006736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8760254122010047) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3896074059931001) _gate_q_1;
  ry(-0.3896074059931001) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8760254122010047) _gate_q_0;
}
gate rxx_5107001168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9789863895910127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106995024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.886468572092594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106992480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.8210140148299025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106998288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4201007895121207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106998144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5213177996434157) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5213177996434157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5213177996434157) _gate_q_1;
}
gate xx_minus_yy_5106996416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.119044771986184) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.466894011557717) _gate_q_0;
  ry(-2.466894011557717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.119044771986184) _gate_q_1;
}
gate xx_minus_yy_5106994976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1094390019261322) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2409582991078825) _gate_q_0;
  ry(-2.2409582991078825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1094390019261322) _gate_q_1;
}
gate cu3_5107002848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5231372509278476) _gate_q_0;
  u1(1.720330620813592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6650764531943127, 0, -3.5231372509278476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6650764531943127, 1.8028066301142558, 0) _gate_q_1;
}
gate xx_minus_yy_5106996800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.166182436051508) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.074666947980464) _gate_q_0;
  ry(-1.074666947980464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.166182436051508) _gate_q_1;
}
gate rxx_5107003376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4187131124260057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107004960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1472395882621722, -1.3186489421666145, 1.3186489421666145) _gate_q_0;
}
gate cu3_5107006112(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8804720103032664) _gate_q_0;
  u1(1.8798813185500278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5492600212289631, 0, -2.8804720103032664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5492600212289631, 1.0005906917532388, 0) _gate_q_1;
}
gate rzz_5107000928(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.829208351144274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_plus_yy_5106995120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0449038415804008) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3268437585428248) _gate_q_1;
  ry(-2.3268437585428248) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0449038415804008) _gate_q_0;
}
gate rzx_5106992144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8127565065297144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  csx _gate_q_8, _gate_q_2;
  cp(0.5980621911210222) _gate_q_10, _gate_q_9;
  dcx _gate_q_6, _gate_q_7;
  iswap _gate_q_11, _gate_q_5;
  x _gate_q_4;
  h _gate_q_0;
  sxdg _gate_q_3;
  tdg _gate_q_1;
  rx(4.181896873571623) _gate_q_6;
  rzz_5107005344(0.8964074560643949) _gate_q_2, _gate_q_7;
  xx_plus_yy_5107001696(5.87290748046281, 5.688327463990544) _gate_q_10, _gate_q_5;
  xx_plus_yy_5107001024(5.613869239843269, 6.046246026598018) _gate_q_11, _gate_q_8;
  u2(5.319666673282394, 0.5274527809898196) _gate_q_3;
  dcx _gate_q_4, _gate_q_0;
  cp(0.2528646518178333) _gate_q_9, _gate_q_1;
  r_5107005296(3.6560650680970292, 2.165421543618845) _gate_q_0;
  id _gate_q_4;
  u3(3.6645593269304206, 2.3672312961127226, 3.2125011566734725) _gate_q_7;
  id _gate_q_8;
  cu(3.583641022911396, 4.263597786415933, 5.502049919388637, 4.122111178719156) _gate_q_3, _gate_q_1;
  cz _gate_q_10, _gate_q_5;
  cz _gate_q_6, _gate_q_2;
  cz _gate_q_11, _gate_q_9;
  x _gate_q_11;
  xx_plus_yy_5107006736(0.7792148119862002, 1.8760254122010047) _gate_q_10, _gate_q_8;
  u2(4.999095650307925, 1.4299049980110752) _gate_q_7;
  t _gate_q_1;
  rxx_5107001168(3.9789863895910127) _gate_q_4, _gate_q_3;
  iswap _gate_q_5, _gate_q_9;
  cu(3.0260469534759107, 4.622408335003772, 2.165433252937609, 2.5242095220134213) _gate_q_6, _gate_q_2;
  sdg _gate_q_0;
  csx _gate_q_3, _gate_q_11;
  ryy_5106995024(3.886468572092594) _gate_q_8, _gate_q_9;
  rzz_5106992480(5.8210140148299025) _gate_q_1, _gate_q_10;
  tdg _gate_q_5;
  rzz_5106998288(3.4201007895121207) _gate_q_0, _gate_q_6;
  swap _gate_q_4, _gate_q_7;
  rx(2.719756732271347) _gate_q_2;
  cx _gate_q_9, _gate_q_1;
  cu(4.9233257188602595, 1.1346991567955986, 1.6715098422391383, 1.25176120378996) _gate_q_3, _gate_q_8;
  cu1_5106998144(5.0426355992868315) _gate_q_5, _gate_q_11;
  xx_minus_yy_5106996416(4.933788023115434, 5.119044771986184) _gate_q_4, _gate_q_0;
  xx_minus_yy_5106994976(4.481916598215765, 1.1094390019261322) _gate_q_2, _gate_q_10;
  cu3_5107002848(3.3301529063886255, 1.8028066301142558, 5.24346787174144) _gate_q_6, _gate_q_7;
  xx_minus_yy_5106996800(2.149333895960928, 4.166182436051508) _gate_q_2, _gate_q_0;
  z _gate_q_6;
  U(5.288206422411766, 4.75952023717807, 2.801569098813202) _gate_q_10;
  rxx_5107003376(2.4187131124260057) _gate_q_4, _gate_q_11;
  r_5107004960(1.1472395882621722, 0.25214738462828207) _gate_q_8;
  ch _gate_q_7, _gate_q_5;
  ry(1.6312037909881594) _gate_q_3;
  cu3_5107006112(3.0985200424579262, 1.0005906917532388, 4.760353328853294) _gate_q_1, _gate_q_9;
  cx _gate_q_3, _gate_q_0;
  crz(5.361783231982157) _gate_q_8, _gate_q_11;
  rzz_5107000928(5.829208351144274) _gate_q_9, _gate_q_7;
  sxdg _gate_q_6;
  sxdg _gate_q_4;
  t _gate_q_1;
  crz(2.5985476980019286) _gate_q_5, _gate_q_10;
  u1(5.680418014827736) _gate_q_2;
  ecr _gate_q_1, _gate_q_7;
  xx_plus_yy_5106995120(4.6536875170856495, 1.0449038415804008) _gate_q_11, _gate_q_2;
  cz _gate_q_8, _gate_q_4;
  u1(0.2726084089211308) _gate_q_0;
  cu(0.9267563168330212, 6.2145165214689655, 2.9983558757487074, 5.70407961500115) _gate_q_3, _gate_q_5;
  cry(1.4396187331698374) _gate_q_10, _gate_q_6;
  x _gate_q_9;
  crx(1.8833103440959398) _gate_q_0, _gate_q_7;
  cx _gate_q_2, _gate_q_11;
  rzx_5106992144(3.8127565065297144) _gate_q_4, _gate_q_6;
  id _gate_q_9;
  dcx _gate_q_5, _gate_q_10;
  u3(4.0907033087456774, 2.630783955839493, 3.1524079024606335) _gate_q_1;
  tdg _gate_q_8;
  y _gate_q_3;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5106259088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8386102027700364) _gate_q_0;
  u1(1.1035072222153393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1917809429831434, 0, -2.8386102027700364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1917809429831434, 1.735102980554697, 0) _gate_q_1;
}
gate cu3_5106257264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.583119605292672) _gate_q_0;
  u1(0.15313041070586664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9238035030130094, 0, -1.583119605292672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9238035030130094, 1.4299891945868053, 0) _gate_q_1;
}
gate r_5106262448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7185879371381579, 0.4246777505147592, -0.4246777505147592) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5106264128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.48354886552051074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106260384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0435719026446564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106268256(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0111486239768803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106254480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.09561455835573346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106257408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6520019190593427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106266096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0530045610400645) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.351529345751726) _gate_q_1;
  ry(-2.351529345751726) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0530045610400645) _gate_q_0;
}
gate cu1_5106267104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6669558604218055) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6669558604218055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6669558604218055) _gate_q_1;
}
gate rxx_5106262928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.710277712147588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106265376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.435860707505985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5106254384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.705342249727537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106268352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.059379550138139676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106258176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.780662630398458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106269456(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.64016932617949) _gate_q_0;
  u1(-1.6082098408168044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.0941429925283804, 0, -2.64016932617949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.0941429925283804, 4.248379166996294, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  sdg _gate_q_5;
  cs _gate_q_6, _gate_q_1;
  cu3_5106259088(2.383561885966287, 1.735102980554697, 3.9421174249853754) _gate_q_11, _gate_q_10;
  ecr _gate_q_9, _gate_q_4;
  z _gate_q_8;
  sxdg _gate_q_0;
  swap _gate_q_7, _gate_q_3;
  y _gate_q_2;
  cu3_5106257264(5.847607006026019, 1.4299891945868053, 1.7362500159985386) _gate_q_2, _gate_q_9;
  r_5106262448(0.7185879371381579, 1.9954740773096558) _gate_q_10;
  tdg _gate_q_6;
  cu(6.173293169434406, 3.1332770985415532, 2.5347037797222094, 6.0675400558824935) _gate_q_0, _gate_q_1;
  crx(2.206605507971086) _gate_q_11, _gate_q_3;
  h _gate_q_8;
  ecr _gate_q_4, _gate_q_5;
  rz(2.8839046406678026) _gate_q_7;
  csdg _gate_q_0, _gate_q_7;
  ecr _gate_q_6, _gate_q_10;
  cry(0.7418251114149874) _gate_q_9, _gate_q_8;
  ryy_5106264128(0.48354886552051074) _gate_q_2, _gate_q_3;
  swap _gate_q_11, _gate_q_1;
  sxdg _gate_q_4;
  sx _gate_q_5;
  ry(0.3300171914952526) _gate_q_1;
  crx(1.479693585904499) _gate_q_5, _gate_q_7;
  z _gate_q_8;
  cry(4.409024045407069) _gate_q_4, _gate_q_9;
  h _gate_q_2;
  id _gate_q_10;
  swap _gate_q_6, _gate_q_0;
  csdg _gate_q_3, _gate_q_11;
  sdg _gate_q_6;
  x _gate_q_10;
  tdg _gate_q_1;
  crz(4.932234925237062) _gate_q_5, _gate_q_4;
  csx _gate_q_9, _gate_q_8;
  x _gate_q_3;
  y _gate_q_0;
  p(2.426069198724917) _gate_q_7;
  ch _gate_q_2, _gate_q_11;
  rz(3.507224566770868) _gate_q_11;
  tdg _gate_q_4;
  ry(4.095307004810002) _gate_q_10;
  rz(0.29614942177786396) _gate_q_2;
  dcx _gate_q_3, _gate_q_0;
  rzz_5106260384(1.0435719026446564) _gate_q_9, _gate_q_1;
  rzz_5106268256(1.0111486239768803) _gate_q_7, _gate_q_5;
  rzz_5106254480(0.09561455835573346) _gate_q_8, _gate_q_6;
  u3(0.8096944754000647, 4.394035610911963, 0.32513755888574397) _gate_q_5;
  rz(3.8559269171485666) _gate_q_4;
  ecr _gate_q_0, _gate_q_1;
  sx _gate_q_3;
  ryy_5106257408(3.6520019190593427) _gate_q_11, _gate_q_7;
  csx _gate_q_9, _gate_q_8;
  sxdg _gate_q_6;
  id _gate_q_2;
  h _gate_q_10;
  U(1.730489024861206, 4.001472806020833, 0.8900754048444247) _gate_q_9;
  xx_plus_yy_5106266096(4.703058691503452, 1.0530045610400645) _gate_q_11, _gate_q_1;
  ry(0.981195100260408) _gate_q_4;
  dcx _gate_q_3, _gate_q_6;
  h _gate_q_5;
  cz _gate_q_8, _gate_q_10;
  crx(5.9719740365480645) _gate_q_7, _gate_q_0;
  sx _gate_q_2;
  cu1_5106267104(5.333911720843611) _gate_q_4, _gate_q_6;
  rxx_5106262928(5.710277712147588) _gate_q_1, _gate_q_9;
  rxx_5106265376(4.435860707505985) _gate_q_10, _gate_q_7;
  cu(1.851496659675477, 0.28982860916859754, 2.1780353883859185, 1.9249171470108197) _gate_q_0, _gate_q_11;
  iswap _gate_q_2, _gate_q_8;
  U(6.13833030109964, 0.8179269566540099, 4.723280361555349) _gate_q_3;
  x _gate_q_5;
  dcx _gate_q_1, _gate_q_8;
  t _gate_q_4;
  ryy_5106254384(2.705342249727537) _gate_q_9, _gate_q_5;
  rxx_5106268352(0.059379550138139676) _gate_q_2, _gate_q_7;
  ry(2.5488623012757894) _gate_q_11;
  rzx_5106258176(3.780662630398458) _gate_q_3, _gate_q_6;
  cu3_5106269456(0.1882859850567608, 4.248379166996294, 1.0319594853626852) _gate_q_10, _gate_q_0;
}