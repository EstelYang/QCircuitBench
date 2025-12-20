gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5106118112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.306620129612851, -0.17122138374424023, 0.17122138374424023) _gate_q_0;
}
gate cu1_5106117104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.21619793428996478) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.21619793428996478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.21619793428996478) _gate_q_1;
}
gate r_5106113648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.998202550472658, 3.6182795325183195, -3.6182795325183195) _gate_q_0;
}
gate rxx_5106113744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.319710874972732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106108512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10826418433268832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106115616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.961285705125434) _gate_q_0;
  u1(0.4918362824004818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7743309997761352, 0, -0.961285705125434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7743309997761352, 0.46944942272495227, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5106120656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5582071108263427) _gate_q_0;
  u1(-0.4614551320391258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0767411533848876, 0, -2.5582071108263427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0767411533848876, 3.0196622428654685, 0) _gate_q_1;
}
gate rxx_5106119072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.644524304164391) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106116864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6975417477526045, 3.2679407146028945, -3.2679407146028945) _gate_q_0;
}
gate r_5106107360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4798722085382705, 2.221765393545343, -2.221765393545343) _gate_q_0;
}
gate rxx_5106118352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.657360426809473) _gate_q_1;
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
gate ryy_5106121520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8949381287385052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5106111392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8667289950813, 0.09213813742209598, -0.09213813742209598) _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5106110480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.319404886314371) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5106113312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.109053497734892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106120560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.053041639642413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106122096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.928525013742536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106117248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.021381188524265) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.30497620767197947) _gate_q_1;
  ry(-0.30497620767197947) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.021381188524265) _gate_q_0;
}
gate xx_plus_yy_5106117536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.846377456816437) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9716880022498727) _gate_q_1;
  ry(-0.9716880022498727) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.846377456816437) _gate_q_0;
}
gate rzz_5106107216(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.0932983233382005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106109904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.128579816356308) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5266143101474807) _gate_q_0;
  ry(-1.5266143101474807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.128579816356308) _gate_q_1;
}
gate xx_minus_yy_5106121088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.039928685524921646) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7493422978128295) _gate_q_0;
  ry(-2.7493422978128295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.039928685524921646) _gate_q_1;
}
gate rzz_5106114080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.159795142218244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5106111200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1854687144587348) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.519373295618475) _gate_q_1;
  ry(-2.519373295618475) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1854687144587348) _gate_q_0;
}
gate rzz_5106107744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.6123873469494816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106112784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.785554996338106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106116960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2426423363317975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106113552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.0691590738965034) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.0691590738965034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.0691590738965034) _gate_q_1;
}
gate cu1_5106117152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.1852939089647426) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.1852939089647426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.1852939089647426) _gate_q_1;
}
gate xx_plus_yy_5106108752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.4491229660810525) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.609421132330708) _gate_q_1;
  ry(-1.609421132330708) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.4491229660810525) _gate_q_0;
}
gate ryy_5106120608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.340017147511156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5106121280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9710788775710038) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9710788775710038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9710788775710038) _gate_q_1;
}
gate rxx_5104273984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.116427057617817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5104276096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.624005943095886) _gate_q_0;
  u1(1.580687579438765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.833408356862515, 0, -4.624005943095886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.833408356862515, 3.043318363657121, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  dcx _gate_q_9, _gate_q_19;
  cu(4.5389521798668255, 4.21967418729035, 1.1053423807199796, 0.43852290551743545) _gate_q_3, _gate_q_1;
  p(0.6619735219385117) _gate_q_11;
  cu(3.2411032020503665, 2.5297664668715054, 2.9872043993126445, 5.925532240094114) _gate_q_0, _gate_q_4;
  p(0.3881446559995342) _gate_q_17;
  s _gate_q_8;
  r_5106118112(1.306620129612851, 1.3995749430506563) _gate_q_2;
  U(0.05559760043511758, 0.5803963913395538, 4.33099139824528) _gate_q_5;
  cu1_5106117104(0.43239586857992957) _gate_q_14, _gate_q_18;
  r_5106113648(4.998202550472658, 5.189075859313216) _gate_q_16;
  rxx_5106113744(3.319710874972732) _gate_q_13, _gate_q_6;
  cy _gate_q_12, _gate_q_15;
  cy _gate_q_7, _gate_q_10;
  rxx_5106108512(0.10826418433268832) _gate_q_12, _gate_q_19;
  cu3_5106115616(3.5486619995522704, 0.46944942272495227, 1.4531219875259158) _gate_q_2, _gate_q_10;
  t _gate_q_14;
  csdg _gate_q_11, _gate_q_3;
  cx _gate_q_15, _gate_q_16;
  ecr _gate_q_6, _gate_q_9;
  sdg _gate_q_17;
  ecr _gate_q_18, _gate_q_8;
  u1(5.72915329029937) _gate_q_1;
  sxdg _gate_q_5;
  ry(3.406014786905928) _gate_q_4;
  csdg _gate_q_7, _gate_q_0;
  t _gate_q_13;
  ecr _gate_q_18, _gate_q_14;
  cu3_5106120656(4.153482306769775, 3.0196622428654685, 2.096751978787217) _gate_q_8, _gate_q_5;
  cz _gate_q_1, _gate_q_11;
  t _gate_q_9;
  z _gate_q_7;
  tdg _gate_q_19;
  rxx_5106119072(4.644524304164391) _gate_q_12, _gate_q_13;
  id _gate_q_2;
  r_5106116864(2.6975417477526045, 4.838737041397791) _gate_q_15;
  r_5106107360(2.4798722085382705, 3.7925617203402395) _gate_q_3;
  cu(4.296165928139787, 4.594762605263849, 3.4394107121102286, 3.1678037378815826) _gate_q_16, _gate_q_6;
  id _gate_q_4;
  rxx_5106118352(5.657360426809473) _gate_q_10, _gate_q_17;
  tdg _gate_q_0;
  iswap _gate_q_3, _gate_q_10;
  sx _gate_q_5;
  rx(0.11085533061080324) _gate_q_15;
  cry(2.8773292575941767) _gate_q_1, _gate_q_9;
  s _gate_q_4;
  ryy_5106121520(1.8949381287385052) _gate_q_8, _gate_q_12;
  r_5106111392(1.8667289950813, 1.6629344642169925) _gate_q_19;
  p(6.014352734904069) _gate_q_6;
  sx _gate_q_14;
  cry(4.445926729762735) _gate_q_17, _gate_q_0;
  U(4.627712889851849, 3.0138723887344594, 4.507523961797444) _gate_q_11;
  z _gate_q_13;
  rz(4.619060729142917) _gate_q_7;
  dcx _gate_q_2, _gate_q_18;
  U(5.49167271829406, 4.559044396410977, 3.9734071810765452) _gate_q_16;
  U(4.829954992043555, 1.8425756528030026, 4.4830943952682825) _gate_q_1;
  ry(3.7821202781751673) _gate_q_9;
  y _gate_q_4;
  csx _gate_q_17, _gate_q_3;
  crz(6.157051912100475) _gate_q_14, _gate_q_11;
  cs _gate_q_8, _gate_q_13;
  t _gate_q_5;
  rzz_5106110480(5.319404886314371) _gate_q_19, _gate_q_15;
  sx _gate_q_0;
  id _gate_q_16;
  csdg _gate_q_7, _gate_q_2;
  rzz_5106113312(6.109053497734892) _gate_q_18, _gate_q_12;
  sxdg _gate_q_10;
  h _gate_q_6;
  rxx_5106120560(6.053041639642413) _gate_q_8, _gate_q_1;
  id _gate_q_14;
  iswap _gate_q_17, _gate_q_9;
  csdg _gate_q_4, _gate_q_7;
  rxx_5106122096(5.928525013742536) _gate_q_5, _gate_q_12;
  s _gate_q_13;
  xx_plus_yy_5106117248(0.6099524153439589, 4.021381188524265) _gate_q_10, _gate_q_18;
  u3(0.4625895707353703, 5.280518178904173, 0.49317538203620653) _gate_q_16;
  cry(4.463046084496151) _gate_q_0, _gate_q_2;
  ch _gate_q_19, _gate_q_3;
  xx_plus_yy_5106117536(1.9433760044997455, 4.846377456816437) _gate_q_6, _gate_q_11;
  ry(2.00641540468534) _gate_q_15;
  cy _gate_q_4, _gate_q_14;
  rzz_5106107216(6.0932983233382005) _gate_q_15, _gate_q_12;
  h _gate_q_5;
  xx_minus_yy_5106109904(3.0532286202949614, 4.128579816356308) _gate_q_0, _gate_q_8;
  xx_minus_yy_5106121088(5.498684595625659, 0.039928685524921646) _gate_q_17, _gate_q_7;
  ecr _gate_q_19, _gate_q_10;
  rzz_5106114080(5.159795142218244) _gate_q_1, _gate_q_6;
  z _gate_q_9;
  cs _gate_q_11, _gate_q_13;
  x _gate_q_18;
  u3(5.217456258637903, 2.4752444056831173, 0.3683878875475319) _gate_q_3;
  xx_plus_yy_5106111200(5.03874659123695, 1.1854687144587348) _gate_q_16, _gate_q_2;
  rzz_5106107744(2.6123873469494816) _gate_q_3, _gate_q_9;
  ryy_5106112784(5.785554996338106) _gate_q_6, _gate_q_18;
  crx(5.152273772661489) _gate_q_11, _gate_q_15;
  swap _gate_q_10, _gate_q_13;
  u3(2.441689089683819, 3.972086833518423, 4.743572418749304) _gate_q_7;
  cu(0.4876845352564119, 4.809609722834823, 1.9894599668529171, 1.072739885361383) _gate_q_2, _gate_q_4;
  rxx_5106116960(3.2426423363317975) _gate_q_8, _gate_q_1;
  cu1_5106113552(0.1383181477930068) _gate_q_17, _gate_q_0;
  crx(0.13838471063338834) _gate_q_14, _gate_q_12;
  cu1_5106117152(0.3705878179294852) _gate_q_19, _gate_q_16;
  id _gate_q_5;
  xx_plus_yy_5106108752(3.218842264661416, 4.4491229660810525) _gate_q_15, _gate_q_0;
  ryy_5106120608(3.340017147511156) _gate_q_5, _gate_q_13;
  crx(3.6732767356005747) _gate_q_9, _gate_q_14;
  u2(0.12048647036625816, 1.9113452328040825) _gate_q_4;
  swap _gate_q_12, _gate_q_17;
  t _gate_q_18;
  u2(6.25207215043454, 0.26492889131734865) _gate_q_6;
  cs _gate_q_11, _gate_q_2;
  sx _gate_q_16;
  ecr _gate_q_1, _gate_q_8;
  u1(0.7431418644590003) _gate_q_3;
  cu1_5106121280(3.9421577551420075) _gate_q_19, _gate_q_7;
  t _gate_q_10;
  cz _gate_q_6, _gate_q_10;
  csx _gate_q_18, _gate_q_8;
  cp(2.6456902448588937) _gate_q_19, _gate_q_5;
  rx(3.1289866122620675) _gate_q_16;
  iswap _gate_q_7, _gate_q_4;
  cp(2.005953339591758) _gate_q_11, _gate_q_3;
  u3(2.5788193357230016, 6.222832203200319, 0.5609301343903743) _gate_q_0;
  csdg _gate_q_9, _gate_q_17;
  ecr _gate_q_13, _gate_q_14;
  rxx_5104273984(5.116427057617817) _gate_q_2, _gate_q_15;
  cu3_5104276096(5.66681671372503, 3.043318363657121, 6.204693522534651) _gate_q_12, _gate_q_1;
}
gate rzx_5104287328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8636094202006093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5104272304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.013783186826238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5104271632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.653960845320667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5104273600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3284856978763964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104280848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3874750353650641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104273552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8686346687399945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5104278064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1764848581730667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104272544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9569454368609667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5104279792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.973505060471361) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.438330661373274) _gate_q_1;
  ry(-1.438330661373274) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.973505060471361) _gate_q_0;
}
gate rzz_5104286224(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.751129178884552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104279840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.336963989624223, 2.6559826839500555, -2.6559826839500555) _gate_q_0;
}
gate rzx_5104272592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7618636009337526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5104285312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.920467201737979) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5104274224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.16698978509115528) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.16698978509115528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.16698978509115528) _gate_q_1;
}
gate rzz_5104286272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3830165512457556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104275376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4133000323237255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104285888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.338912639850401) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104281712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.196220226142023, 3.3623113236420075, -3.3623113236420075) _gate_q_0;
}
gate ryy_5104283584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8988650822943176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104284544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7670827856111035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104287472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.976620089396035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104277440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8019024267877743) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8019024267877743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8019024267877743) _gate_q_1;
}
gate cu3_5104276960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.340372643213997) _gate_q_0;
  u1(0.6910912935511895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.473377014569922, 0, -2.340372643213997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.473377014569922, 1.6492813496628074, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  u1(1.9019291137058196) _gate_q_8;
  crx(0.9717895279096331) _gate_q_3, _gate_q_19;
  cry(2.982164596373093) _gate_q_9, _gate_q_14;
  csdg _gate_q_0, _gate_q_10;
  s _gate_q_2;
  cs _gate_q_4, _gate_q_7;
  cx _gate_q_11, _gate_q_12;
  cu(3.203547021121535, 2.7657033137903806, 0.7160648143263931, 2.3542800824810497) _gate_q_1, _gate_q_18;
  csx _gate_q_17, _gate_q_16;
  u3(2.351808650860928, 4.8638083257823395, 4.822549734429111) _gate_q_5;
  rzx_5104287328(2.8636094202006093) _gate_q_6, _gate_q_13;
  x _gate_q_15;
  cy _gate_q_0, _gate_q_2;
  cx _gate_q_4, _gate_q_16;
  u3(0.5307487403911612, 0.274464764212408, 5.35071494103298) _gate_q_5;
  tdg _gate_q_14;
  crx(3.3343878683962043) _gate_q_15, _gate_q_13;
  t _gate_q_11;
  ryy_5104272304(5.013783186826238) _gate_q_1, _gate_q_8;
  rxx_5104271632(3.653960845320667) _gate_q_9, _gate_q_7;
  cz _gate_q_12, _gate_q_6;
  cp(2.551766640013456) _gate_q_17, _gate_q_3;
  csdg _gate_q_10, _gate_q_19;
  p(5.7550537546881015) _gate_q_18;
  sdg _gate_q_0;
  cz _gate_q_14, _gate_q_5;
  rzx_5104273600(3.3284856978763964) _gate_q_13, _gate_q_11;
  ch _gate_q_12, _gate_q_16;
  crx(3.721571425359785) _gate_q_8, _gate_q_10;
  z _gate_q_7;
  rzx_5104280848(0.3874750353650641) _gate_q_15, _gate_q_4;
  dcx _gate_q_17, _gate_q_3;
  rxx_5104273552(0.8686346687399945) _gate_q_9, _gate_q_6;
  cry(2.315388072260121) _gate_q_2, _gate_q_19;
  cu(1.3384898218239634, 3.71241767866646, 5.439589135566083, 5.074296804596293) _gate_q_1, _gate_q_18;
  cry(5.977609535915581) _gate_q_8, _gate_q_17;
  rz(5.306529940043279) _gate_q_10;
  ch _gate_q_13, _gate_q_5;
  rzx_5104278064(2.1764848581730667) _gate_q_3, _gate_q_1;
  rzx_5104272544(2.9569454368609667) _gate_q_0, _gate_q_9;
  xx_plus_yy_5104279792(2.876661322746548, 4.973505060471361) _gate_q_18, _gate_q_12;
  iswap _gate_q_19, _gate_q_14;
  ecr _gate_q_2, _gate_q_7;
  cx _gate_q_4, _gate_q_11;
  id _gate_q_15;
  cx _gate_q_6, _gate_q_16;
  sdg _gate_q_16;
  cy _gate_q_8, _gate_q_13;
  ry(0.711824771778624) _gate_q_0;
  u3(1.4455451727558646, 2.101682613492613, 3.503299568655973) _gate_q_12;
  rzz_5104286224(3.751129178884552) _gate_q_19, _gate_q_17;
  cz _gate_q_15, _gate_q_4;
  csdg _gate_q_11, _gate_q_7;
  r_5104279840(5.336963989624223, 4.226779010744952) _gate_q_3;
  rzx_5104272592(0.7618636009337526) _gate_q_9, _gate_q_6;
  t _gate_q_5;
  rzx_5104285312(3.920467201737979) _gate_q_18, _gate_q_2;
  cry(4.324203725823422) _gate_q_14, _gate_q_10;
  id _gate_q_1;
  dcx _gate_q_3, _gate_q_10;
  cu1_5104274224(0.33397957018231056) _gate_q_14, _gate_q_19;
  tdg _gate_q_13;
  tdg _gate_q_5;
  cry(0.8811169375407341) _gate_q_12, _gate_q_11;
  crx(0.41459795953686573) _gate_q_2, _gate_q_9;
  sdg _gate_q_6;
  z _gate_q_4;
  u2(4.677337642691756, 3.0389332572125283) _gate_q_7;
  cs _gate_q_15, _gate_q_16;
  cy _gate_q_17, _gate_q_18;
  h _gate_q_0;
  p(3.0286221502636916) _gate_q_8;
  s _gate_q_1;
  u2(2.4154379443154097, 1.8258939770999707) _gate_q_6;
  u3(5.84179964526092, 4.4900222367397395, 4.298351396999156) _gate_q_8;
  sx _gate_q_16;
  rzz_5104286272(0.3830165512457556) _gate_q_14, _gate_q_1;
  t _gate_q_9;
  sxdg _gate_q_7;
  ry(2.410504769642551) _gate_q_5;
  id _gate_q_17;
  sxdg _gate_q_10;
  ryy_5104275376(2.4133000323237255) _gate_q_4, _gate_q_2;
  crx(1.1643949957821862) _gate_q_15, _gate_q_3;
  crx(2.8212355438337706) _gate_q_13, _gate_q_18;
  iswap _gate_q_19, _gate_q_12;
  t _gate_q_11;
  rx(0.00027606640750430634) _gate_q_0;
  crx(1.97416578081141) _gate_q_9, _gate_q_17;
  cz _gate_q_10, _gate_q_4;
  cu(0.13033974126938025, 2.277051828741286, 1.7966065818821255, 0.06948841598725568) _gate_q_11, _gate_q_1;
  ryy_5104285888(4.338912639850401) _gate_q_3, _gate_q_7;
  r_5104281712(2.196220226142023, 4.933107650436904) _gate_q_8;
  sxdg _gate_q_12;
  cry(2.2192026475875455) _gate_q_18, _gate_q_5;
  ryy_5104283584(1.8988650822943176) _gate_q_16, _gate_q_15;
  ecr _gate_q_2, _gate_q_6;
  crx(4.92839281110168) _gate_q_19, _gate_q_13;
  rx(1.3969608100501905) _gate_q_14;
  u2(0.01597398845687152, 1.010520446418648) _gate_q_0;
  cs _gate_q_10, _gate_q_17;
  crz(1.5407418592476265) _gate_q_0, _gate_q_12;
  u3(3.75645657641888, 2.546449415839501, 4.355669578395261) _gate_q_3;
  ryy_5104284544(5.7670827856111035) _gate_q_18, _gate_q_1;
  iswap _gate_q_5, _gate_q_9;
  ryy_5104287472(5.976620089396035) _gate_q_2, _gate_q_14;
  tdg _gate_q_16;
  crz(3.4567069744572927) _gate_q_13, _gate_q_11;
  cu1_5104277440(3.6038048535755487) _gate_q_19, _gate_q_15;
  cx _gate_q_6, _gate_q_4;
  sx _gate_q_8;
  h _gate_q_7;
  crx(0.41127880971382047) _gate_q_5, _gate_q_13;
  csdg _gate_q_17, _gate_q_16;
  cy _gate_q_1, _gate_q_3;
  sdg _gate_q_11;
  z _gate_q_14;
  u1(2.2714023230450175) _gate_q_15;
  cp(1.9547508394421536) _gate_q_0, _gate_q_4;
  t _gate_q_6;
  id _gate_q_18;
  cry(4.1146781935818) _gate_q_10, _gate_q_9;
  cu3_5104276960(2.946754029139844, 1.6492813496628074, 3.0314639367651863) _gate_q_8, _gate_q_2;
  t _gate_q_7;
  sdg _gate_q_19;
  h _gate_q_12;
}