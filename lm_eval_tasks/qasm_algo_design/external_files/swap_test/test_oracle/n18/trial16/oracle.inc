gate cu1_5070141296(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8882356383355599) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8882356383355599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8882356383355599) _gate_q_1;
}
gate rxx_5070129392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2696627986357091) _gate_q_1;
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
gate cu3_5070128816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.115191320555729) _gate_q_0;
  u1(0.8468396984236377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2786994480151583, 0, -5.115191320555729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2786994480151583, 4.268351622132091, 0) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5070129536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1945920459310173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070127808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.079254166597715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070133520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.332027576144968, 2.7714670676714857, -2.7714670676714857) _gate_q_0;
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
gate r_5070132848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.0117894525238205, -0.6627705372327474, 0.6627705372327474) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5070137024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.991812844272723) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8760580116311358) _gate_q_0;
  ry(-1.8760580116311358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.991812844272723) _gate_q_1;
}
gate ryy_5070128912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5686782241225877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070132272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4084057949692266) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8012091335241265) _gate_q_0;
  ry(-2.8012091335241265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4084057949692266) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5070138800(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.508015835730941) _gate_q_0;
  u1(-1.4764454174954882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3199025819069798, 0, -3.508015835730941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3199025819069798, 4.984461253226429, 0) _gate_q_1;
}
gate xx_minus_yy_5070138176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9414426808418527) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6047219723841044) _gate_q_0;
  ry(-2.6047219723841044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9414426808418527) _gate_q_1;
}
gate ryy_5070141200(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4018992392165477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070136928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8155747792789311) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.914431213281619) _gate_q_0;
  ry(-1.914431213281619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8155747792789311) _gate_q_1;
}
gate cu3_5070141776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6439895329248784) _gate_q_0;
  u1(2.3387268449259646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3060138846183293, 0, -3.6439895329248784) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3060138846183293, 1.3052626879989135, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  swap _gate_q_11, _gate_q_7;
  ry(4.442624277805742) _gate_q_8;
  cry(1.5948942755809923) _gate_q_13, _gate_q_12;
  crx(2.0535665027232697) _gate_q_1, _gate_q_15;
  U(4.06519865098469, 0.2398687433705799, 4.969704680032308) _gate_q_6;
  s _gate_q_3;
  ry(2.0653477555786712) _gate_q_5;
  cz _gate_q_16, _gate_q_10;
  id _gate_q_9;
  crz(5.6469634989612025) _gate_q_2, _gate_q_14;
  rx(5.363456213371938) _gate_q_4;
  sdg _gate_q_17;
  t _gate_q_0;
  cu1_5070141296(3.7764712766711197) _gate_q_9, _gate_q_5;
  z _gate_q_12;
  t _gate_q_15;
  tdg _gate_q_11;
  crx(4.518979080176818) _gate_q_1, _gate_q_0;
  cp(5.429671730510591) _gate_q_14, _gate_q_17;
  h _gate_q_16;
  t _gate_q_7;
  rxx_5070129392(0.2696627986357091) _gate_q_3, _gate_q_10;
  U(0.6612898862555048, 4.590307691785222, 1.2386350216626165) _gate_q_2;
  cry(1.1136177040806323) _gate_q_8, _gate_q_6;
  z _gate_q_4;
  y _gate_q_13;
  U(2.044041250539039, 6.2694305231610175, 2.385742914857167) _gate_q_15;
  s _gate_q_3;
  iswap _gate_q_14, _gate_q_10;
  x _gate_q_8;
  cu3_5070128816(2.5573988960303167, 4.268351622132091, 5.962031018979366) _gate_q_7, _gate_q_2;
  h _gate_q_0;
  rx(0.3036815659877518) _gate_q_1;
  rz(6.242646170347682) _gate_q_4;
  cy _gate_q_5, _gate_q_11;
  sdg _gate_q_6;
  crx(1.5614226494025771) _gate_q_12, _gate_q_17;
  crz(5.3647628217804355) _gate_q_9, _gate_q_16;
  h _gate_q_13;
  csx _gate_q_11, _gate_q_15;
  dcx _gate_q_7, _gate_q_17;
  u2(2.738466707603963, 4.584065509677876) _gate_q_3;
  crz(1.0811158667298484) _gate_q_9, _gate_q_8;
  sxdg _gate_q_2;
  cu(2.4466553821725454, 0.747172197890401, 0.4974232908589778, 2.4246472785044246) _gate_q_16, _gate_q_5;
  z _gate_q_4;
  t _gate_q_0;
  u2(3.751760417950806, 1.8310730518120417) _gate_q_10;
  cy _gate_q_13, _gate_q_12;
  cy _gate_q_1, _gate_q_14;
  U(5.271843701140027, 0.08066090705301544, 4.601922227910608) _gate_q_6;
  ryy_5070129536(3.1945920459310173) _gate_q_17, _gate_q_10;
  rxx_5070127808(2.079254166597715) _gate_q_14, _gate_q_4;
  cz _gate_q_8, _gate_q_15;
  crx(1.377928116798662) _gate_q_12, _gate_q_6;
  cx _gate_q_0, _gate_q_11;
  rx(0.3396795498045405) _gate_q_9;
  r_5070133520(3.332027576144968, 4.342263394466382) _gate_q_16;
  sdg _gate_q_1;
  cy _gate_q_13, _gate_q_3;
  cry(5.374750730298912) _gate_q_2, _gate_q_5;
  u2(5.915600948465282, 0.860990616509273) _gate_q_7;
  csx _gate_q_17, _gate_q_15;
  rz(3.310773643984617) _gate_q_4;
  cz _gate_q_6, _gate_q_9;
  ecr _gate_q_14, _gate_q_7;
  cry(5.867710932000269) _gate_q_13, _gate_q_11;
  u1(6.145955587382328) _gate_q_8;
  cry(6.230320381644675) _gate_q_3, _gate_q_1;
  sx _gate_q_5;
  r_5070132848(5.0117894525238205, 0.9080257895621492) _gate_q_10;
  cs _gate_q_0, _gate_q_2;
  swap _gate_q_16, _gate_q_12;
  sdg _gate_q_5;
  cp(0.5838036498112529) _gate_q_12, _gate_q_14;
  swap _gate_q_6, _gate_q_16;
  cry(0.8725246139929805) _gate_q_8, _gate_q_10;
  s _gate_q_15;
  ch _gate_q_9, _gate_q_13;
  tdg _gate_q_3;
  U(5.4725886672582895, 0.6576315469608062, 0.3635311630212868) _gate_q_7;
  cs _gate_q_17, _gate_q_2;
  xx_minus_yy_5070137024(3.7521160232622717, 5.991812844272723) _gate_q_1, _gate_q_11;
  ry(6.048291673175376) _gate_q_0;
  x _gate_q_4;
  h _gate_q_6;
  crx(0.09496629998256541) _gate_q_2, _gate_q_0;
  cu(4.295906803847839, 5.8541811490689755, 1.8299961519403858, 0.10446091524319279) _gate_q_16, _gate_q_17;
  iswap _gate_q_15, _gate_q_13;
  u3(3.9506081247467297, 6.051371829226927, 2.5741877115040777) _gate_q_1;
  ryy_5070128912(0.5686782241225877) _gate_q_12, _gate_q_5;
  xx_minus_yy_5070132272(5.602418267048253, 3.4084057949692266) _gate_q_11, _gate_q_4;
  csdg _gate_q_3, _gate_q_10;
  cu3_5070138800(2.6398051638139597, 4.984461253226429, 2.0315704182354524) _gate_q_7, _gate_q_9;
  tdg _gate_q_14;
  y _gate_q_8;
  cry(3.481703954936111) _gate_q_3, _gate_q_9;
  id _gate_q_11;
  y _gate_q_10;
  u3(4.340980952309936, 6.136976857487994, 4.919505449708399) _gate_q_17;
  xx_minus_yy_5070138176(5.209443944768209, 0.9414426808418527) _gate_q_6, _gate_q_5;
  cp(0.9594972005931024) _gate_q_2, _gate_q_13;
  u3(4.3805425426979925, 3.6696129619778097, 5.897652225306001) _gate_q_14;
  crz(2.3690646380217713) _gate_q_7, _gate_q_0;
  dcx _gate_q_4, _gate_q_15;
  rx(1.6802495977425385) _gate_q_12;
  csx _gate_q_1, _gate_q_16;
  sdg _gate_q_8;
  tdg _gate_q_7;
  u1(0.40367046391408623) _gate_q_8;
  u3(6.076939419030001, 1.987517343781166, 4.912551919914126) _gate_q_17;
  tdg _gate_q_13;
  id _gate_q_10;
  cy _gate_q_4, _gate_q_0;
  swap _gate_q_16, _gate_q_2;
  ryy_5070141200(3.4018992392165477) _gate_q_15, _gate_q_3;
  sx _gate_q_11;
  cs _gate_q_9, _gate_q_14;
  xx_minus_yy_5070136928(3.828862426563238, 0.8155747792789311) _gate_q_1, _gate_q_6;
  cu3_5070141776(2.6120277692366587, 1.3052626879989135, 5.982716377850843) _gate_q_12, _gate_q_5;
}
gate ryy_5070132896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.610555239382864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070135872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9418469523729046) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9418469523729046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9418469523729046) _gate_q_1;
}
gate r_5070143072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.474371573548782, -0.6335158119817341, 0.6335158119817341) _gate_q_0;
}
gate rzx_5070127616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6195704571627005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070129200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.8928629120047855) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.876868225875954) _gate_q_1;
  ry(-2.876868225875954) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.8928629120047855) _gate_q_0;
}
gate r_5070127760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1526526802077817, 0.8847462031815905, -0.8847462031815905) _gate_q_0;
}
gate cu3_5084637536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8400963814907225) _gate_q_0;
  u1(0.9879805186519119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3581983732709335, 0, -3.8400963814907225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3581983732709335, 2.8521158628388106, 0) _gate_q_1;
}
gate rxx_5084638112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.166527995414735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5084636336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9049595678198052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5084637008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.653373356059323) _gate_q_0;
  u1(-1.328279457298397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9111484743348375, 0, -4.653373356059323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9111484743348375, 5.981652813357719, 0) _gate_q_1;
}
gate cu3_5084637248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.580129267892691) _gate_q_0;
  u1(-0.5365351240932759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3832477716515004, 0, -4.580129267892691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3832477716515004, 5.1166643919859665, 0) _gate_q_1;
}
gate xx_minus_yy_5084636864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9231507061343653) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9815998953048313) _gate_q_0;
  ry(-2.9815998953048313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9231507061343653) _gate_q_1;
}
gate r_5084641280(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.06860823097932682, 1.1092418140371505, -1.1092418140371505) _gate_q_0;
}
gate xx_minus_yy_5084628464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5326320132349252) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.38542196136237955) _gate_q_0;
  ry(-0.38542196136237955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5326320132349252) _gate_q_1;
}
gate ryy_5084630192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8419327886705739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5084627264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6686503807008424) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6686503807008424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6686503807008424) _gate_q_1;
}
gate r_5084638400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.615405764246936, -0.5579977551645321, 0.5579977551645321) _gate_q_0;
}
gate cu3_5084630144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9583573395897589) _gate_q_0;
  u1(0.034961857596366996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3141140411098426, 0, -0.9583573395897589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3141140411098426, 0.9233954819933918, 0) _gate_q_1;
}
gate xx_minus_yy_5084629328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.910401297533698) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7546565606729048) _gate_q_0;
  ry(-1.7546565606729048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.910401297533698) _gate_q_1;
}
gate rzx_5084628320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.266269281998718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5084629712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.580597266813937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5084628128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.965865533713861) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5084633840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3610014675615305) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3610014675615305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3610014675615305) _gate_q_1;
}
gate xx_plus_yy_5084638160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5270895866023033) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0810072334374268) _gate_q_1;
  ry(-1.0810072334374268) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5270895866023033) _gate_q_0;
}
gate ryy_5084638784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.183338478086409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5084640800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.08895896280772665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5084639600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9280833107398732, -0.919853831394679, 0.919853831394679) _gate_q_0;
}
gate cu3_5084639312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.389734214067968) _gate_q_0;
  u1(-0.4430689515400972) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7259914181227285, 0, -5.389734214067968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7259914181227285, 5.832803165608065, 0) _gate_q_1;
}
gate xx_plus_yy_5084631200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.976523932849482) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.326681810614094) _gate_q_1;
  ry(-2.326681810614094) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.976523932849482) _gate_q_0;
}
gate xx_plus_yy_5084630528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2917025520535206) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3319882254089346) _gate_q_1;
  ry(-2.3319882254089346) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2917025520535206) _gate_q_0;
}
gate r_5084639408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7944723925158135, 4.66865626759134, -4.66865626759134) _gate_q_0;
}
gate cu3_5084631104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5962844638979776) _gate_q_0;
  u1(0.9319769856479104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.001714873441944, 0, -2.5962844638979776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.001714873441944, 1.6643074782500673, 0) _gate_q_1;
}
gate rxx_5084638832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7631533993970006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  s _gate_q_15;
  tdg _gate_q_4;
  dcx _gate_q_0, _gate_q_12;
  U(4.632913460947971, 0.9109235414267368, 2.951620955086268) _gate_q_17;
  swap _gate_q_9, _gate_q_7;
  ryy_5070132896(4.610555239382864) _gate_q_1, _gate_q_2;
  t _gate_q_14;
  id _gate_q_10;
  x _gate_q_11;
  dcx _gate_q_3, _gate_q_6;
  cu1_5070135872(1.8836939047458092) _gate_q_5, _gate_q_16;
  crx(3.4567188865122436) _gate_q_13, _gate_q_8;
  id _gate_q_0;
  y _gate_q_1;
  x _gate_q_14;
  cp(3.851699458539944) _gate_q_12, _gate_q_5;
  p(0.5977015467352113) _gate_q_3;
  cp(1.5432409813692944) _gate_q_15, _gate_q_10;
  r_5070143072(1.474371573548782, 0.9372805148131624) _gate_q_9;
  rzx_5070127616(2.6195704571627005) _gate_q_6, _gate_q_2;
  x _gate_q_4;
  csdg _gate_q_13, _gate_q_7;
  x _gate_q_8;
  tdg _gate_q_17;
  cy _gate_q_11, _gate_q_16;
  xx_plus_yy_5070129200(5.753736451751908, 4.8928629120047855) _gate_q_0, _gate_q_13;
  r_5070127760(1.1526526802077817, 2.455542529976487) _gate_q_11;
  u3(1.0161077455500684, 2.5556419167177666, 1.1768881655519314) _gate_q_7;
  t _gate_q_12;
  cu3_5084637536(4.716396746541867, 2.8521158628388106, 4.8280769001426345) _gate_q_9, _gate_q_15;
  cx _gate_q_10, _gate_q_5;
  ecr _gate_q_3, _gate_q_4;
  t _gate_q_2;
  id _gate_q_16;
  ch _gate_q_8, _gate_q_1;
  rxx_5084638112(4.166527995414735) _gate_q_17, _gate_q_6;
  p(3.339513611496076) _gate_q_14;
  rxx_5084636336(3.9049595678198052) _gate_q_5, _gate_q_3;
  x _gate_q_11;
  id _gate_q_0;
  cu3_5084637008(5.822296948669675, 5.981652813357719, 3.3250938987609255) _gate_q_8, _gate_q_6;
  u1(0.4205896489138095) _gate_q_9;
  rz(5.542748286811364) _gate_q_4;
  cu3_5084637248(4.766495543303001, 5.1166643919859665, 4.043594143799415) _gate_q_12, _gate_q_2;
  swap _gate_q_1, _gate_q_17;
  ry(1.1655512213727308) _gate_q_7;
  u1(4.621506456877188) _gate_q_10;
  sxdg _gate_q_15;
  t _gate_q_16;
  p(5.280110297631796) _gate_q_13;
  sxdg _gate_q_14;
  sxdg _gate_q_10;
  x _gate_q_0;
  xx_minus_yy_5084636864(5.9631997906096625, 3.9231507061343653) _gate_q_11, _gate_q_15;
  p(6.008796636850805) _gate_q_3;
  sxdg _gate_q_9;
  cy _gate_q_6, _gate_q_1;
  r_5084641280(0.06860823097932682, 2.680038140832047) _gate_q_16;
  xx_minus_yy_5084628464(0.7708439227247591, 1.5326320132349252) _gate_q_2, _gate_q_5;
  t _gate_q_13;
  u3(5.010200578023755, 1.4918678655948903, 3.5808178729842512) _gate_q_12;
  ryy_5084630192(0.8419327886705739) _gate_q_17, _gate_q_4;
  sx _gate_q_14;
  sdg _gate_q_7;
  u1(4.625895779923376) _gate_q_8;
  cu1_5084627264(5.337300761401685) _gate_q_8, _gate_q_15;
  csx _gate_q_10, _gate_q_13;
  r_5084638400(5.615405764246936, 1.0127985716303645) _gate_q_17;
  cu3_5084630144(0.6282280822196852, 0.9233954819933918, 0.9933191971861258) _gate_q_5, _gate_q_1;
  csdg _gate_q_0, _gate_q_3;
  xx_minus_yy_5084629328(3.5093131213458095, 4.910401297533698) _gate_q_7, _gate_q_6;
  rzx_5084628320(5.266269281998718) _gate_q_4, _gate_q_12;
  swap _gate_q_11, _gate_q_14;
  rzx_5084629712(5.580597266813937) _gate_q_16, _gate_q_9;
  sxdg _gate_q_2;
  id _gate_q_4;
  rzz_5084628128(4.965865533713861) _gate_q_11, _gate_q_12;
  cu1_5084633840(2.722002935123061) _gate_q_14, _gate_q_17;
  xx_plus_yy_5084638160(2.1620144668748535, 0.5270895866023033) _gate_q_6, _gate_q_9;
  cs _gate_q_0, _gate_q_1;
  crx(0.8178335582990554) _gate_q_5, _gate_q_3;
  z _gate_q_15;
  u1(1.919800858961197) _gate_q_2;
  y _gate_q_7;
  iswap _gate_q_16, _gate_q_13;
  u2(2.976897357469056, 5.797241612137558) _gate_q_10;
  sdg _gate_q_8;
  cz _gate_q_16, _gate_q_17;
  ch _gate_q_11, _gate_q_7;
  u1(5.3224250210808135) _gate_q_1;
  iswap _gate_q_12, _gate_q_6;
  h _gate_q_8;
  ryy_5084638784(6.183338478086409) _gate_q_5, _gate_q_10;
  cz _gate_q_14, _gate_q_2;
  u2(5.205484000381019, 4.518382782374233) _gate_q_13;
  U(2.6265279398698516, 3.022056603045503, 5.723803914640432) _gate_q_15;
  swap _gate_q_9, _gate_q_3;
  ryy_5084640800(0.08895896280772665) _gate_q_0, _gate_q_4;
  t _gate_q_8;
  ry(1.1396397023529277) _gate_q_16;
  ry(3.884056292661911) _gate_q_15;
  rx(6.176440562102813) _gate_q_12;
  cy _gate_q_4, _gate_q_10;
  U(5.656430989377629, 5.149698395403799, 0.41379325088335456) _gate_q_6;
  cx _gate_q_1, _gate_q_14;
  p(6.121423291901554) _gate_q_7;
  x _gate_q_9;
  r_5084639600(0.9280833107398732, 0.6509424954002175) _gate_q_13;
  y _gate_q_0;
  cu3_5084639312(5.451982836245457, 5.832803165608065, 4.946665262527871) _gate_q_2, _gate_q_3;
  z _gate_q_5;
  xx_plus_yy_5084631200(4.653363621228188, 4.976523932849482) _gate_q_11, _gate_q_17;
  xx_plus_yy_5084630528(4.663976450817869, 3.2917025520535206) _gate_q_7, _gate_q_1;
  r_5084639408(5.7944723925158135, 6.239452594386236) _gate_q_4;
  cu3_5084631104(2.003429746883888, 1.6643074782500673, 3.528261449545888) _gate_q_12, _gate_q_6;
  cu(5.871850528155039, 1.0934456383970048, 5.516067061913997, 0.44426097380288937) _gate_q_11, _gate_q_3;
  t _gate_q_14;
  crx(1.4490770633333494) _gate_q_8, _gate_q_5;
  rxx_5084638832(1.7631533993970006) _gate_q_15, _gate_q_16;
  sdg _gate_q_17;
  rz(3.4854494984035287) _gate_q_9;
  id _gate_q_10;
  iswap _gate_q_2, _gate_q_13;
  x _gate_q_0;
}