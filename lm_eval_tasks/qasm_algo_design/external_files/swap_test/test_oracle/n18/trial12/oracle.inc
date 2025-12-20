gate rxx_5070425840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.199364276340362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070423152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6170332256441693, 1.8801910171625122, -1.8801910171625122) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070432464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.61255851149987) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.556274583242184) _gate_q_0;
  ry(-0.556274583242184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.61255851149987) _gate_q_1;
}
gate r_5070431648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1914334301583156, -1.3337846411941987, 1.3337846411941987) _gate_q_0;
}
gate xx_minus_yy_5070426368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.12578190950305) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5400478884527278) _gate_q_0;
  ry(-2.5400478884527278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.12578190950305) _gate_q_1;
}
gate rxx_5070437120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9151627827647023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070427904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5109446481274302) _gate_q_0;
  u1(0.6325422581618472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.72455210847772, 0, -2.5109446481274302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.72455210847772, 1.8784023899655828, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5070429104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.42429856908876207) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.811032245506479) _gate_q_1;
  ry(-2.811032245506479) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.42429856908876207) _gate_q_0;
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
gate r_5070428336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6719144943971921, 0.3049085863949861, -0.3049085863949861) _gate_q_0;
}
gate rzx_5070426128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.998371108570367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu3_5070432320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.14242105293623) _gate_q_0;
  u1(1.3660608261667613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0988268122583804, 0, -2.14242105293623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0988268122583804, 0.776360226769469, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5070425984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.372308738058151) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8096370228656256) _gate_q_1;
  ry(-1.8096370228656256) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.372308738058151) _gate_q_0;
}
gate cu3_5070428432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7341776489798835) _gate_q_0;
  u1(-2.4738109364961436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5517977336337923, 0, -3.7341776489798835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5517977336337923, 6.207988585476027, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5070422480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.162994038938808, -1.2277803048988867, 1.2277803048988867) _gate_q_0;
}
gate r_5070435680(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5040916265504385, 3.9397059205573486, -3.9397059205573486) _gate_q_0;
}
gate cu3_5070433616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.389629429907992) _gate_q_0;
  u1(-1.828372492637401) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0718873514640714, 0, -4.389629429907992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0718873514640714, 6.218001922545393, 0) _gate_q_1;
}
gate r_5070437504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6642484620113246, 1.352076079999632, -1.352076079999632) _gate_q_0;
}
gate ryy_5070436592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.69558327418069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070423920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2291610171692278) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2291610171692278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2291610171692278) _gate_q_1;
}
gate xx_plus_yy_5070425648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.664038376555096) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8717716425377633) _gate_q_1;
  ry(-1.8717716425377633) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.664038376555096) _gate_q_0;
}
gate cu3_5070435200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.33968168557127) _gate_q_0;
  u1(-0.12053400635757017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.802908581405248, 0, -2.33968168557127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.802908581405248, 2.4602156919288403, 0) _gate_q_1;
}
gate cu3_5070424400(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.390687807167934) _gate_q_0;
  u1(-0.16886592366598618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7554173973409904, 0, -1.390687807167934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7554173973409904, 1.5595537308339202, 0) _gate_q_1;
}
gate rxx_5070432752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1422053656073468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070435968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2490063853651856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070424256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7537065364115602) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.024751367765600368) _gate_q_1;
  ry(-0.024751367765600368) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7537065364115602) _gate_q_0;
}
gate rzz_5070425936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.44750127944254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070432992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.4079903952177135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070433952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.3486686809607615) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.560514936900832) _gate_q_1;
  ry(-2.560514936900832) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.3486686809607615) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rz(1.1323699564006926) _gate_q_5;
  rxx_5070425840(2.199364276340362) _gate_q_14, _gate_q_10;
  r_5070423152(1.6170332256441693, 3.450987343957409) _gate_q_8;
  cp(4.380158188752543) _gate_q_2, _gate_q_1;
  U(5.351771898040597, 5.64597943233618, 5.537432870522812) _gate_q_12;
  xx_minus_yy_5070432464(1.112549166484368, 4.61255851149987) _gate_q_13, _gate_q_6;
  ry(0.1179836427965283) _gate_q_9;
  r_5070431648(3.1914334301583156, 0.2370116856006978) _gate_q_17;
  xx_minus_yy_5070426368(5.0800957769054556, 6.12578190950305) _gate_q_16, _gate_q_0;
  cp(1.8083338315622586) _gate_q_7, _gate_q_15;
  h _gate_q_11;
  rxx_5070437120(0.9151627827647023) _gate_q_3, _gate_q_4;
  cu3_5070427904(5.44910421695544, 1.8784023899655828, 3.143486906289277) _gate_q_0, _gate_q_13;
  iswap _gate_q_2, _gate_q_16;
  cs _gate_q_12, _gate_q_8;
  sx _gate_q_5;
  crz(5.832503386953024) _gate_q_3, _gate_q_7;
  p(2.9054666156249476) _gate_q_14;
  swap _gate_q_17, _gate_q_10;
  sxdg _gate_q_15;
  z _gate_q_9;
  crx(2.6890701970598094) _gate_q_11, _gate_q_4;
  u2(5.934250722012925, 2.732308012789236) _gate_q_6;
  s _gate_q_1;
  u2(2.1328673827391382, 5.489918723546367) _gate_q_5;
  xx_plus_yy_5070429104(5.622064491012958, 0.42429856908876207) _gate_q_12, _gate_q_14;
  cx _gate_q_9, _gate_q_4;
  U(1.5095136503146702, 2.606103292205359, 3.4287270677179285) _gate_q_2;
  cx _gate_q_8, _gate_q_17;
  ecr _gate_q_0, _gate_q_3;
  id _gate_q_10;
  u2(0.2923854276236847, 3.675830512562427) _gate_q_7;
  x _gate_q_6;
  h _gate_q_1;
  ecr _gate_q_11, _gate_q_15;
  r_5070428336(0.6719144943971921, 1.8757049131898826) _gate_q_16;
  sxdg _gate_q_13;
  p(3.839729492599533) _gate_q_1;
  rzx_5070426128(4.998371108570367) _gate_q_15, _gate_q_2;
  swap _gate_q_12, _gate_q_5;
  cy _gate_q_7, _gate_q_4;
  s _gate_q_11;
  ch _gate_q_17, _gate_q_13;
  cz _gate_q_16, _gate_q_14;
  tdg _gate_q_3;
  cz _gate_q_8, _gate_q_10;
  cry(5.518462690866727) _gate_q_9, _gate_q_0;
  sdg _gate_q_6;
  ry(4.067268459169094) _gate_q_4;
  sxdg _gate_q_13;
  y _gate_q_10;
  swap _gate_q_1, _gate_q_11;
  h _gate_q_8;
  U(1.9269619666892288, 5.323280514884487, 5.1607354054528605) _gate_q_2;
  swap _gate_q_3, _gate_q_12;
  sx _gate_q_9;
  cp(4.069591128678117) _gate_q_0, _gate_q_7;
  ecr _gate_q_14, _gate_q_17;
  csx _gate_q_16, _gate_q_5;
  sxdg _gate_q_15;
  t _gate_q_6;
  cry(2.9827653934983855) _gate_q_10, _gate_q_0;
  U(0.669273091029733, 0.9417842504624625, 1.8324375342116859) _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cx _gate_q_12, _gate_q_8;
  cu3_5070432320(6.197653624516761, 0.776360226769469, 3.5084818791029915) _gate_q_7, _gate_q_15;
  csdg _gate_q_1, _gate_q_9;
  xx_plus_yy_5070425984(3.619274045731251, 1.372308738058151) _gate_q_17, _gate_q_11;
  cu3_5070428432(3.1035954672675845, 6.207988585476027, 1.26036671248374) _gate_q_13, _gate_q_6;
  dcx _gate_q_14, _gate_q_3;
  id _gate_q_16;
  h _gate_q_12;
  u2(2.1646432914027263, 1.192993144916075) _gate_q_2;
  cy _gate_q_15, _gate_q_13;
  sxdg _gate_q_6;
  s _gate_q_16;
  ecr _gate_q_9, _gate_q_14;
  r_5070422480(5.162994038938808, 0.34301602189600977) _gate_q_0;
  rz(3.788466596087555) _gate_q_11;
  z _gate_q_1;
  r_5070435680(2.5040916265504385, 5.510502247352245) _gate_q_10;
  cz _gate_q_5, _gate_q_17;
  sx _gate_q_3;
  cu3_5070433616(6.143774702928143, 6.218001922545393, 2.561256937270591) _gate_q_8, _gate_q_4;
  id _gate_q_7;
  cs _gate_q_6, _gate_q_9;
  h _gate_q_15;
  csdg _gate_q_4, _gate_q_11;
  r_5070437504(0.6642484620113246, 2.9228724067945286) _gate_q_13;
  ryy_5070436592(5.69558327418069) _gate_q_2, _gate_q_3;
  cp(3.14081255558134) _gate_q_8, _gate_q_7;
  dcx _gate_q_14, _gate_q_1;
  h _gate_q_17;
  rz(3.9323981070684626) _gate_q_5;
  U(4.223823437924273, 1.7609852467880471, 4.455777017549882) _gate_q_0;
  cu1_5070423920(4.4583220343384555) _gate_q_16, _gate_q_12;
  ry(3.236345839763428) _gate_q_10;
  csdg _gate_q_12, _gate_q_1;
  rx(5.438633448009086) _gate_q_7;
  y _gate_q_2;
  xx_plus_yy_5070425648(3.7435432850755266, 4.664038376555096) _gate_q_0, _gate_q_3;
  cu3_5070435200(1.605817162810496, 2.4602156919288403, 2.2191476792137) _gate_q_9, _gate_q_11;
  rx(4.906573887080557) _gate_q_17;
  u2(4.962807253574332, 2.3633603802178427) _gate_q_16;
  cu3_5070424400(1.510834794681981, 1.5595537308339202, 1.2218218835019479) _gate_q_6, _gate_q_14;
  u2(4.798214367615235, 5.6824369514676905) _gate_q_5;
  ry(2.2480517411755483) _gate_q_10;
  crz(0.985787906472095) _gate_q_13, _gate_q_8;
  rxx_5070432752(3.1422053656073468) _gate_q_15, _gate_q_4;
  rx(0.446127276232349) _gate_q_12;
  x _gate_q_1;
  rzz_5070435968(2.2490063853651856) _gate_q_17, _gate_q_16;
  u3(2.371078150183001, 4.46376038131155, 5.686290970070663) _gate_q_2;
  cp(3.8637578166121047) _gate_q_10, _gate_q_4;
  crx(3.8540632150086904) _gate_q_7, _gate_q_9;
  xx_plus_yy_5070424256(0.049502735531200735, 0.7537065364115602) _gate_q_0, _gate_q_6;
  h _gate_q_3;
  rzz_5070425936(4.44750127944254) _gate_q_8, _gate_q_11;
  rxx_5070432992(4.4079903952177135) _gate_q_14, _gate_q_15;
  xx_plus_yy_5070433952(5.121029873801664, 5.3486686809607615) _gate_q_5, _gate_q_13;
}
gate cu1_5072125440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.06780759893281123) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.06780759893281123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.06780759893281123) _gate_q_1;
}
gate rzx_5072121936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.045964725481726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074134192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7221898721321124) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0184056593327806) _gate_q_0;
  ry(-1.0184056593327806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7221898721321124) _gate_q_1;
}
gate ryy_5074131936(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4436431623907455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074128048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3373345215246517) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8246755182917391) _gate_q_0;
  ry(-1.8246755182917391) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3373345215246517) _gate_q_1;
}
gate cu1_5074771536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8789915637976022) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8789915637976022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8789915637976022) _gate_q_1;
}
gate xx_minus_yy_5074776432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6998115833233347) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5799651142526226) _gate_q_0;
  ry(-0.5799651142526226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6998115833233347) _gate_q_1;
}
gate cu1_5074773504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7431850818742187) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7431850818742187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7431850818742187) _gate_q_1;
}
gate r_5074772832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.500145375284998, -1.3032466498703361, 1.3032466498703361) _gate_q_0;
}
gate xx_minus_yy_5074777440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.038767329614181) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9809786286778905) _gate_q_0;
  ry(-2.9809786286778905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.038767329614181) _gate_q_1;
}
gate rzx_5074777344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.967453834671279) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074774224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9448069968172407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074778592(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.602043301458551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074777728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7262394091491802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074771824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4973986919404323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074766592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.088148429878581) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074775520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.831785635659672) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.831785635659672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.831785635659672) _gate_q_1;
}
gate ryy_5074779408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.562068527589144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074779168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.058502999735323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074768272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3502339810482837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074768896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.277639178290104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074779072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5098866096878454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074763952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.224058254353151) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.556002783384988) _gate_q_1;
  ry(-2.556002783384988) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.224058254353151) _gate_q_0;
}
gate rxx_5074775616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2702861076149836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  t _gate_q_16;
  t _gate_q_7;
  cu1_5072125440(0.13561519786562246) _gate_q_12, _gate_q_5;
  s _gate_q_9;
  sdg _gate_q_1;
  h _gate_q_15;
  h _gate_q_0;
  z _gate_q_2;
  x _gate_q_17;
  cy _gate_q_6, _gate_q_11;
  t _gate_q_13;
  rzx_5072121936(3.045964725481726) _gate_q_10, _gate_q_14;
  x _gate_q_8;
  swap _gate_q_4, _gate_q_3;
  u2(3.6246562057289973, 0.9816462345658472) _gate_q_1;
  xx_minus_yy_5074134192(2.036811318665561, 0.7221898721321124) _gate_q_16, _gate_q_3;
  cx _gate_q_14, _gate_q_12;
  ryy_5074131936(3.4436431623907455) _gate_q_17, _gate_q_7;
  rx(1.8566179654934367) _gate_q_10;
  h _gate_q_15;
  xx_minus_yy_5074128048(3.6493510365834783, 3.3373345215246517) _gate_q_6, _gate_q_2;
  z _gate_q_0;
  id _gate_q_4;
  u1(5.812151802597091) _gate_q_11;
  tdg _gate_q_9;
  cu1_5074771536(3.7579831275952045) _gate_q_8, _gate_q_5;
  rz(4.88593155119089) _gate_q_13;
  z _gate_q_13;
  iswap _gate_q_12, _gate_q_15;
  ch _gate_q_16, _gate_q_0;
  sxdg _gate_q_14;
  xx_minus_yy_5074776432(1.1599302285052453, 1.6998115833233347) _gate_q_2, _gate_q_17;
  sxdg _gate_q_7;
  ch _gate_q_4, _gate_q_8;
  crx(1.5978940964664918) _gate_q_11, _gate_q_10;
  u3(2.918194806943169, 1.3605496122092346, 1.5437945274280365) _gate_q_1;
  swap _gate_q_5, _gate_q_6;
  rx(0.10069530611703574) _gate_q_3;
  y _gate_q_9;
  cu1_5074773504(3.4863701637484374) _gate_q_15, _gate_q_5;
  ry(3.956920812304366) _gate_q_11;
  crx(1.7894357498026723) _gate_q_10, _gate_q_7;
  tdg _gate_q_6;
  r_5074772832(4.500145375284998, 0.2675496769245605) _gate_q_0;
  z _gate_q_1;
  xx_minus_yy_5074777440(5.961957257355781, 4.038767329614181) _gate_q_16, _gate_q_4;
  csdg _gate_q_17, _gate_q_14;
  sxdg _gate_q_9;
  cx _gate_q_2, _gate_q_12;
  cz _gate_q_8, _gate_q_3;
  s _gate_q_13;
  id _gate_q_4;
  z _gate_q_7;
  p(2.192163758524733) _gate_q_1;
  sx _gate_q_14;
  U(1.2088186412258908, 4.296526000832477, 5.039679186948929) _gate_q_0;
  h _gate_q_16;
  sdg _gate_q_13;
  crx(3.428344280537194) _gate_q_17, _gate_q_6;
  h _gate_q_8;
  sxdg _gate_q_11;
  tdg _gate_q_9;
  u2(0.4942908999441904, 0.43856226498219) _gate_q_12;
  rx(4.172106345799749) _gate_q_2;
  tdg _gate_q_5;
  rzx_5074777344(5.967453834671279) _gate_q_10, _gate_q_3;
  u1(3.575268675499273) _gate_q_15;
  swap _gate_q_6, _gate_q_10;
  y _gate_q_8;
  p(1.1041334964061733) _gate_q_0;
  rx(2.197350108574487) _gate_q_15;
  u2(1.2035345378324254, 1.4198105332620459) _gate_q_1;
  u1(2.9723176815610794) _gate_q_9;
  tdg _gate_q_7;
  iswap _gate_q_5, _gate_q_13;
  ry(6.119153099858979) _gate_q_16;
  s _gate_q_17;
  h _gate_q_2;
  cs _gate_q_11, _gate_q_4;
  y _gate_q_14;
  rzx_5074774224(0.9448069968172407) _gate_q_3, _gate_q_12;
  ryy_5074778592(5.602043301458551) _gate_q_5, _gate_q_0;
  rzz_5074777728(1.7262394091491802) _gate_q_12, _gate_q_9;
  cx _gate_q_8, _gate_q_10;
  ecr _gate_q_15, _gate_q_6;
  cry(4.688241732977696) _gate_q_11, _gate_q_17;
  ryy_5074771824(1.4973986919404323) _gate_q_3, _gate_q_14;
  cp(4.2831005725423985) _gate_q_13, _gate_q_7;
  csdg _gate_q_16, _gate_q_2;
  id _gate_q_1;
  U(5.705591615036626, 4.445489858178065, 1.339899555471685) _gate_q_4;
  swap _gate_q_17, _gate_q_16;
  x _gate_q_8;
  u1(4.278078795898408) _gate_q_6;
  rzx_5074766592(5.088148429878581) _gate_q_13, _gate_q_4;
  cu1_5074775520(1.663571271319344) _gate_q_11, _gate_q_2;
  cz _gate_q_0, _gate_q_7;
  rz(1.742007643491191) _gate_q_3;
  ryy_5074779408(5.562068527589144) _gate_q_1, _gate_q_5;
  tdg _gate_q_14;
  rzz_5074779168(2.058502999735323) _gate_q_10, _gate_q_15;
  id _gate_q_9;
  sx _gate_q_12;
  cu(5.476853823800821, 3.5157837575143978, 5.829865789171378, 3.602539083931159) _gate_q_9, _gate_q_4;
  sx _gate_q_8;
  ryy_5074768272(2.3502339810482837) _gate_q_7, _gate_q_5;
  cu(4.0526053313490875, 1.7412166258421644, 6.169745468030165, 4.912382645342188) _gate_q_12, _gate_q_17;
  rzz_5074768896(2.277639178290104) _gate_q_6, _gate_q_13;
  u2(0.0637957263620811, 5.6054919495957325) _gate_q_16;
  sdg _gate_q_15;
  x _gate_q_1;
  cy _gate_q_11, _gate_q_10;
  tdg _gate_q_2;
  s _gate_q_0;
  crx(0.7156909357753409) _gate_q_3, _gate_q_14;
  ry(0.1546169048017172) _gate_q_17;
  p(5.5347937245568835) _gate_q_14;
  rzz_5074779072(3.5098866096878454) _gate_q_6, _gate_q_12;
  xx_plus_yy_5074763952(5.112005566769976, 5.224058254353151) _gate_q_3, _gate_q_7;
  cs _gate_q_15, _gate_q_1;
  cy _gate_q_11, _gate_q_0;
  dcx _gate_q_5, _gate_q_16;
  rxx_5074775616(1.2702861076149836) _gate_q_2, _gate_q_10;
  s _gate_q_8;
  y _gate_q_9;
  rx(0.7916022965188085) _gate_q_13;
  rx(1.9455231936730921) _gate_q_4;
}