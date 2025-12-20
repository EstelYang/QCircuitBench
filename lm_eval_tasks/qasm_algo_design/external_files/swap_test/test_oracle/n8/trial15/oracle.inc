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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072709888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.691761037350724) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4625019933192762) _gate_q_0;
  ry(-1.4625019933192762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.691761037350724) _gate_q_1;
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
gate rzx_5072604960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4987752271549136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072712768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.278605416305565) _gate_q_0;
  u1(0.09632590198939717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1505676122795565, 0, -5.278605416305565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1505676122795565, 5.182279514316168, 0) _gate_q_1;
}
gate xx_minus_yy_5072711232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1045683871677863) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.259809854483304) _gate_q_0;
  ry(-2.259809854483304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1045683871677863) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072705904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5244183067902769) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.838235372776189) _gate_q_1;
  ry(-0.838235372776189) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5244183067902769) _gate_q_0;
}
gate ryy_5072715312(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3279117488953145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072707056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.482554823285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  ecr _gate_q_0, _gate_q_3;
  crz(1.225358623829869) _gate_q_6, _gate_q_2;
  id _gate_q_5;
  rx(0.027315075302312333) _gate_q_1;
  ch _gate_q_4, _gate_q_7;
  cx _gate_q_3, _gate_q_1;
  rx(3.7019866012624374) _gate_q_0;
  xx_minus_yy_5072709888(2.9250039866385524, 5.691761037350724) _gate_q_7, _gate_q_4;
  cp(5.9688192474033706) _gate_q_5, _gate_q_6;
  y _gate_q_2;
  crz(0.4694910123695887) _gate_q_5, _gate_q_1;
  cs _gate_q_3, _gate_q_0;
  cry(0.20950276917013377) _gate_q_7, _gate_q_6;
  x _gate_q_4;
  rx(3.375894919104341) _gate_q_2;
  sdg _gate_q_3;
  csx _gate_q_0, _gate_q_5;
  ry(5.982382665601616) _gate_q_7;
  cu(4.617343691808262, 5.282522915640404, 4.041519721944025, 6.063795082890947) _gate_q_4, _gate_q_1;
  rzx_5072604960(0.4987752271549136) _gate_q_6, _gate_q_2;
  cu3_5072712768(2.301135224559113, 5.182279514316168, 5.374931318294962) _gate_q_4, _gate_q_3;
  rx(2.096614400281337) _gate_q_5;
  xx_minus_yy_5072711232(4.519619708966608, 2.1045683871677863) _gate_q_6, _gate_q_1;
  cry(5.756494784340922) _gate_q_0, _gate_q_2;
  U(1.3565873846715364, 5.945080114785763, 1.993598695495588) _gate_q_7;
  iswap _gate_q_5, _gate_q_4;
  xx_plus_yy_5072705904(1.676470745552378, 0.5244183067902769) _gate_q_1, _gate_q_7;
  cry(3.1890239590694613) _gate_q_2, _gate_q_3;
  sdg _gate_q_0;
  sx _gate_q_6;
  cs _gate_q_2, _gate_q_1;
  u1(5.037553583573021) _gate_q_6;
  u1(0.4427161279028112) _gate_q_3;
  csx _gate_q_5, _gate_q_0;
  ryy_5072715312(3.3279117488953145) _gate_q_4, _gate_q_7;
  rzz_5072707056(4.482554823285) _gate_q_4, _gate_q_1;
  t _gate_q_3;
  x _gate_q_7;
  dcx _gate_q_2, _gate_q_5;
  id _gate_q_0;
  ry(1.9156207324537473) _gate_q_6;
}
gate cu3_5072709696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9826397587782276) _gate_q_0;
  u1(-0.9591059496293015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.09796391963247922, 0, -2.9826397587782276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.09796391963247922, 3.941745708407529, 0) _gate_q_1;
}
gate xx_minus_yy_5072712192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.49742459954584756) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.33349428736221787) _gate_q_0;
  ry(-0.33349428736221787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.49742459954584756) _gate_q_1;
}
gate r_5072712816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6305974604868594, 3.7602557761696875, -3.7602557761696875) _gate_q_0;
}
gate rzx_5072706336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1150537640854346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072712624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.194054595903175) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.199857211531148) _gate_q_0;
  ry(-2.199857211531148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.194054595903175) _gate_q_1;
}
gate r_5072704704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9631293615811518, 2.7021558615497137, -2.7021558615497137) _gate_q_0;
}
gate rxx_5072713920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.817179276549013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072700048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.980161712463501, 4.413825436469434, -4.413825436469434) _gate_q_0;
}
gate cu1_5072714064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.644210660629262) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.644210660629262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.644210660629262) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rz(0.15512784652286127) _gate_q_0;
  tdg _gate_q_3;
  p(2.402608037808409) _gate_q_1;
  u3(4.09823776215305, 5.06197944243147, 4.336846219966877) _gate_q_2;
  z _gate_q_6;
  cu3_5072709696(0.19592783926495844, 3.941745708407529, 2.023533809148926) _gate_q_4, _gate_q_7;
  p(3.4999112467110676) _gate_q_5;
  p(1.7948443432073968) _gate_q_7;
  crx(2.8858371330426635) _gate_q_2, _gate_q_0;
  swap _gate_q_5, _gate_q_4;
  cy _gate_q_6, _gate_q_1;
  id _gate_q_3;
  csx _gate_q_7, _gate_q_4;
  ecr _gate_q_1, _gate_q_6;
  rz(2.395416482818571) _gate_q_5;
  xx_minus_yy_5072712192(0.6669885747244357, 0.49742459954584756) _gate_q_2, _gate_q_0;
  r_5072712816(1.6305974604868594, 5.331052102964584) _gate_q_3;
  u2(5.687650069647541, 2.7367445594149697) _gate_q_4;
  s _gate_q_1;
  cz _gate_q_2, _gate_q_3;
  iswap _gate_q_7, _gate_q_0;
  t _gate_q_5;
  u3(2.749994447112055, 3.0150500823208883, 1.0027241143457302) _gate_q_6;
  csx _gate_q_3, _gate_q_4;
  rzx_5072706336(4.1150537640854346) _gate_q_2, _gate_q_6;
  sx _gate_q_5;
  z _gate_q_1;
  cx _gate_q_0, _gate_q_7;
  sxdg _gate_q_7;
  rz(4.915940100557689) _gate_q_1;
  xx_minus_yy_5072712624(4.399714423062296, 5.194054595903175) _gate_q_0, _gate_q_5;
  r_5072704704(1.9631293615811518, 4.27295218834461) _gate_q_4;
  cz _gate_q_6, _gate_q_2;
  U(2.9823039000163702, 3.2655245950716263, 1.40776750000585) _gate_q_3;
  rxx_5072713920(5.817179276549013) _gate_q_7, _gate_q_4;
  s _gate_q_2;
  cz _gate_q_3, _gate_q_1;
  cz _gate_q_0, _gate_q_6;
  u3(5.402143890007324, 4.795739731974246, 0.6157866936846383) _gate_q_5;
  cry(2.1967041212755443) _gate_q_3, _gate_q_6;
  r_5072700048(3.980161712463501, 5.984621763264331) _gate_q_7;
  cu(3.103409714971476, 0.04178093556285759, 5.586393751350183, 5.181296436738701) _gate_q_2, _gate_q_5;
  cu1_5072714064(5.288421321258524) _gate_q_4, _gate_q_0;
  tdg _gate_q_1;
}