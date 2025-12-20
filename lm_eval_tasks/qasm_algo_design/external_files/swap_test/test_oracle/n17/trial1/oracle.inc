gate cu1_5116633184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.133731424804409) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.133731424804409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.133731424804409) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5116627328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29134493046316073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5116625456(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7749909930652645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu3_5116625360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.5165458101297817) _gate_q_0;
  u1(0.5013028228379859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4803989571832397, 0, -0.5165458101297817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4803989571832397, 0.015242987291795745, 0) _gate_q_1;
}
gate cu3_5116633040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.085063555823226) _gate_q_0;
  u1(1.134945047733677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2453462993133453, 0, -3.085063555823226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2453462993133453, 1.950118508089549, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5116638704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2407101614870135) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9030119073019411) _gate_q_1;
  ry(-1.9030119073019411) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2407101614870135) _gate_q_0;
}
gate xx_plus_yy_5116640960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5275808344034885) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1717008356303356) _gate_q_1;
  ry(-1.1717008356303356) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5275808344034885) _gate_q_0;
}
gate rzx_5116639232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7154951347532816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5116638752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.561952626256061) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.561952626256061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.561952626256061) _gate_q_1;
}
gate rxx_5116639280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2104451273110213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116639088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4070073067820261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116639808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0145043553542394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5116639568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.611341249050038) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.34876160499507425) _gate_q_1;
  ry(-0.34876160499507425) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.611341249050038) _gate_q_0;
}
gate xx_plus_yy_5116636016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3476555962237584) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5410653691498206) _gate_q_1;
  ry(-0.5410653691498206) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3476555962237584) _gate_q_0;
}
gate cu1_5116637840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.11749738324550425) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.11749738324550425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.11749738324550425) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  cz _gate_q_6, _gate_q_3;
  cp(3.106461650794205) _gate_q_2, _gate_q_7;
  u1(0.6071838658959035) _gate_q_15;
  cx _gate_q_1, _gate_q_14;
  cu1_5116633184(4.267462849608818) _gate_q_11, _gate_q_9;
  u1(1.1714393842897062) _gate_q_13;
  iswap _gate_q_8, _gate_q_4;
  ryy_5116627328(0.29134493046316073) _gate_q_10, _gate_q_16;
  csx _gate_q_12, _gate_q_0;
  rx(0.7389129531008777) _gate_q_5;
  u3(4.47578548504581, 4.186692599776801, 1.128292325069487) _gate_q_3;
  csdg _gate_q_5, _gate_q_8;
  ryy_5116625456(2.7749909930652645) _gate_q_1, _gate_q_4;
  cz _gate_q_15, _gate_q_11;
  sdg _gate_q_2;
  cx _gate_q_10, _gate_q_6;
  cp(0.22515311171132954) _gate_q_0, _gate_q_14;
  iswap _gate_q_13, _gate_q_7;
  ecr _gate_q_12, _gate_q_9;
  rz(0.24115619194385957) _gate_q_16;
  ry(0.16306698520226076) _gate_q_10;
  cy _gate_q_8, _gate_q_14;
  h _gate_q_5;
  y _gate_q_16;
  rz(2.392379042569987) _gate_q_12;
  cu3_5116625360(2.9607979143664793, 0.015242987291795745, 1.0178486329677676) _gate_q_6, _gate_q_3;
  crx(0.9623931108473048) _gate_q_2, _gate_q_11;
  u3(5.1398397700136345, 4.972075683506749, 0.6331545851232226) _gate_q_4;
  ry(4.766760614874496) _gate_q_0;
  cu(5.089182166911976, 5.692427448249097, 0.0321133124783743, 0.876568680805889) _gate_q_9, _gate_q_7;
  iswap _gate_q_15, _gate_q_1;
  sx _gate_q_13;
  sdg _gate_q_5;
  cu3_5116633040(4.490692598626691, 1.950118508089549, 4.220008603556903) _gate_q_11, _gate_q_9;
  u2(5.621888390204598, 2.2541986675153214) _gate_q_8;
  cs _gate_q_12, _gate_q_10;
  crz(6.0065464310877115) _gate_q_3, _gate_q_4;
  csdg _gate_q_16, _gate_q_6;
  p(2.022350327191493) _gate_q_2;
  p(3.118957836519793) _gate_q_13;
  xx_plus_yy_5116638704(3.8060238146038823, 3.2407101614870135) _gate_q_7, _gate_q_14;
  cu(5.347276627124579, 5.675639288723638, 1.9905124644819505, 4.156276773662531) _gate_q_0, _gate_q_15;
  z _gate_q_1;
  rz(1.2581253258902307) _gate_q_9;
  ch _gate_q_4, _gate_q_1;
  cp(0.8896958322298478) _gate_q_11, _gate_q_16;
  csx _gate_q_10, _gate_q_14;
  id _gate_q_0;
  sxdg _gate_q_7;
  z _gate_q_12;
  p(1.9198220762038014) _gate_q_8;
  cp(1.9639988210777797) _gate_q_6, _gate_q_13;
  cu(3.6824108214333635, 2.9323652049246696, 3.7280013132105605, 2.7482454858127165) _gate_q_15, _gate_q_2;
  ry(1.9042095492595836) _gate_q_3;
  p(2.89312544665432) _gate_q_5;
  p(4.564045354087115) _gate_q_10;
  id _gate_q_3;
  U(6.0060994584220575, 0.2181829478061662, 0.26039735574954725) _gate_q_4;
  xx_plus_yy_5116640960(2.343401671260671, 3.5275808344034885) _gate_q_11, _gate_q_15;
  rzx_5116639232(2.7154951347532816) _gate_q_9, _gate_q_8;
  cry(5.643092666165113) _gate_q_13, _gate_q_16;
  id _gate_q_12;
  dcx _gate_q_5, _gate_q_0;
  s _gate_q_6;
  u2(4.153943319916888, 1.1244542581269972) _gate_q_7;
  ry(2.6181437376387438) _gate_q_2;
  crx(2.1552230063871396) _gate_q_14, _gate_q_1;
  iswap _gate_q_0, _gate_q_16;
  csdg _gate_q_7, _gate_q_10;
  csx _gate_q_12, _gate_q_3;
  cy _gate_q_6, _gate_q_1;
  tdg _gate_q_15;
  p(4.924151677911089) _gate_q_9;
  cu1_5116638752(5.123905252512122) _gate_q_5, _gate_q_14;
  csdg _gate_q_8, _gate_q_11;
  x _gate_q_4;
  cry(3.507887561595401) _gate_q_2, _gate_q_13;
  rz(2.25770033731946) _gate_q_15;
  rxx_5116639280(2.2104451273110213) _gate_q_13, _gate_q_2;
  sdg _gate_q_7;
  rxx_5116639088(1.4070073067820261) _gate_q_4, _gate_q_10;
  iswap _gate_q_6, _gate_q_1;
  u3(4.619094810320177, 5.3825100466349625, 0.3062587278387777) _gate_q_3;
  p(5.915740635764665) _gate_q_0;
  s _gate_q_8;
  ecr _gate_q_14, _gate_q_9;
  p(0.5134006815558817) _gate_q_16;
  rzx_5116639808(3.0145043553542394) _gate_q_5, _gate_q_12;
  tdg _gate_q_11;
  u3(4.775492697400509, 2.7068139743948376, 2.767834989298901) _gate_q_0;
  z _gate_q_8;
  xx_plus_yy_5116639568(0.6975232099901485, 3.611341249050038) _gate_q_2, _gate_q_5;
  rx(3.701546018840051) _gate_q_13;
  tdg _gate_q_14;
  sxdg _gate_q_12;
  u3(2.437940411429733, 5.437811575325971, 5.1538487640307835) _gate_q_9;
  u1(0.10286280647951924) _gate_q_3;
  ecr _gate_q_1, _gate_q_16;
  u2(4.170895049233826, 1.8083020718815306) _gate_q_15;
  h _gate_q_11;
  crz(0.1749423104206189) _gate_q_4, _gate_q_7;
  crx(0.6391355826686088) _gate_q_10, _gate_q_6;
  xx_plus_yy_5116636016(1.0821307382996412, 2.3476555962237584) _gate_q_15, _gate_q_6;
  cry(3.7655643640705883) _gate_q_2, _gate_q_4;
  cu1_5116637840(0.2349947664910085) _gate_q_1, _gate_q_11;
  x _gate_q_3;
  U(3.532427064438657, 1.954953913395247, 0.964357329157542) _gate_q_5;
  sx _gate_q_14;
  cs _gate_q_7, _gate_q_12;
  cx _gate_q_9, _gate_q_10;
  sdg _gate_q_8;
  cp(0.3135722837534497) _gate_q_16, _gate_q_13;
  y _gate_q_0;
}
gate rzx_5116634240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.056142839677777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116634480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5425172494005346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116635392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.746314318702651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116633760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.215225069354218) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.289326167919483) _gate_q_0;
  ry(-2.289326167919483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.215225069354218) _gate_q_1;
}
gate rzz_5116632992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.281140826957461) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116633712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6073072024884807) _gate_q_0;
  u1(1.3272820549105568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0774461926890244, 0, -2.6073072024884807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0774461926890244, 1.2800251475779238, 0) _gate_q_1;
}
gate xx_minus_yy_5116630736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.699577398404712) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5062379297039326) _gate_q_0;
  ry(-0.5062379297039326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.699577398404712) _gate_q_1;
}
gate ryy_5116631552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.273556969132821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116631984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1155197102041412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5116631648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.951129154120772) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3519550634573434) _gate_q_1;
  ry(-1.3519550634573434) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.951129154120772) _gate_q_0;
}
gate rxx_5116631456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8931865789848072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116631696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4984495838453173) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6011540403085542) _gate_q_0;
  ry(-1.6011540403085542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4984495838453173) _gate_q_1;
}
gate cu1_5116631168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8924441237528881) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8924441237528881) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8924441237528881) _gate_q_1;
}
gate r_5116631120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5979886713610851, 1.8389616193976797, -1.8389616193976797) _gate_q_0;
}
gate rzx_5116631216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.46133071654595936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116630112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0779834321268162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116630592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.2216597938651494) _gate_q_0;
  u1(-1.0321950300691192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3011939862076096, 0, -4.2216597938651494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3011939862076096, 5.253854823934269, 0) _gate_q_1;
}
gate xx_minus_yy_5116629536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.8848424001495845) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.853206476551634) _gate_q_0;
  ry(-0.853206476551634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.8848424001495845) _gate_q_1;
}
gate cu3_5116629632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.687898074104789) _gate_q_0;
  u1(-0.08733307813934221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1644859192306787, 0, -5.687898074104789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1644859192306787, 5.775231152244131, 0) _gate_q_1;
}
gate xx_plus_yy_5116629872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7855286661179857) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.735284962527744) _gate_q_1;
  ry(-2.735284962527744) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7855286661179857) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  sx _gate_q_7;
  ecr _gate_q_0, _gate_q_10;
  U(5.582531789637567, 5.046793587128391, 1.0083901882853963) _gate_q_11;
  s _gate_q_1;
  iswap _gate_q_2, _gate_q_8;
  crx(5.03201787405504) _gate_q_3, _gate_q_14;
  rzx_5116634240(1.056142839677777) _gate_q_6, _gate_q_15;
  u2(1.7611317388007153, 0.1576505222360466) _gate_q_13;
  ecr _gate_q_12, _gate_q_9;
  cp(1.5851034335197798) _gate_q_5, _gate_q_16;
  p(0.3341204376451935) _gate_q_4;
  sxdg _gate_q_1;
  rzx_5116634480(1.5425172494005346) _gate_q_14, _gate_q_3;
  rzx_5116635392(4.746314318702651) _gate_q_4, _gate_q_15;
  s _gate_q_11;
  crz(4.5520323321356475) _gate_q_2, _gate_q_5;
  cy _gate_q_9, _gate_q_13;
  sx _gate_q_6;
  h _gate_q_7;
  h _gate_q_12;
  h _gate_q_10;
  p(5.806161486267433) _gate_q_8;
  ch _gate_q_0, _gate_q_16;
  t _gate_q_6;
  t _gate_q_4;
  cz _gate_q_15, _gate_q_16;
  h _gate_q_1;
  cy _gate_q_2, _gate_q_0;
  x _gate_q_14;
  p(0.5313071088471851) _gate_q_10;
  xx_minus_yy_5116633760(4.578652335838966, 3.215225069354218) _gate_q_7, _gate_q_5;
  ecr _gate_q_3, _gate_q_8;
  U(1.3991332609322757, 2.729260664006854, 6.028825929327987) _gate_q_13;
  rz(3.4710025674216314) _gate_q_9;
  tdg _gate_q_12;
  s _gate_q_11;
  cu(2.0009629599285, 1.152945330084896, 0.1632856442487845, 4.72484921026026) _gate_q_7, _gate_q_13;
  cz _gate_q_3, _gate_q_6;
  crx(5.241763077298829) _gate_q_15, _gate_q_9;
  ch _gate_q_11, _gate_q_1;
  csdg _gate_q_16, _gate_q_8;
  csx _gate_q_5, _gate_q_4;
  cu(2.5903110770372484, 1.365688554466505, 2.1211891697619465, 3.8188041368438017) _gate_q_0, _gate_q_14;
  cs _gate_q_10, _gate_q_12;
  sdg _gate_q_2;
  swap _gate_q_14, _gate_q_6;
  rz(3.7723846125296747) _gate_q_0;
  rzz_5116632992(3.281140826957461) _gate_q_3, _gate_q_11;
  cu3_5116633712(4.154892385378049, 1.2800251475779238, 3.9345892573990375) _gate_q_4, _gate_q_7;
  cu(3.3886063310435532, 5.733275682333814, 0.6491497092809957, 3.255570037898905) _gate_q_16, _gate_q_13;
  u3(0.3449803520882839, 3.6703527802466773, 5.522698669150015) _gate_q_12;
  crz(1.2240263860224267) _gate_q_5, _gate_q_15;
  swap _gate_q_2, _gate_q_8;
  xx_minus_yy_5116630736(1.012475859407865, 4.699577398404712) _gate_q_1, _gate_q_9;
  tdg _gate_q_10;
  ecr _gate_q_14, _gate_q_6;
  cry(2.268779018584071) _gate_q_13, _gate_q_8;
  ryy_5116631552(2.273556969132821) _gate_q_10, _gate_q_9;
  u2(3.6549130729045887, 4.904339574066833) _gate_q_2;
  ry(3.024122642617242) _gate_q_12;
  cy _gate_q_15, _gate_q_7;
  cu(5.905320634346266, 0.8851039717793713, 4.314868135412015, 3.961385323553788) _gate_q_4, _gate_q_1;
  rz(3.6081209926507536) _gate_q_0;
  u2(1.4803805871756972, 5.099984106714103) _gate_q_16;
  y _gate_q_11;
  crx(2.800408892349404) _gate_q_3, _gate_q_5;
  rzx_5116631984(1.1155197102041412) _gate_q_5, _gate_q_4;
  sxdg _gate_q_7;
  xx_plus_yy_5116631648(2.703910126914687, 5.951129154120772) _gate_q_11, _gate_q_2;
  sx _gate_q_9;
  csdg _gate_q_3, _gate_q_8;
  ch _gate_q_6, _gate_q_16;
  cy _gate_q_14, _gate_q_10;
  rxx_5116631456(3.8931865789848072) _gate_q_15, _gate_q_0;
  sdg _gate_q_12;
  ecr _gate_q_1, _gate_q_13;
  xx_minus_yy_5116631696(3.2023080806171085, 1.4984495838453173) _gate_q_11, _gate_q_15;
  z _gate_q_1;
  cy _gate_q_14, _gate_q_8;
  cu1_5116631168(1.7848882475057761) _gate_q_5, _gate_q_13;
  cz _gate_q_7, _gate_q_2;
  id _gate_q_0;
  rz(4.2668965301639235) _gate_q_12;
  crz(2.3210781377283336) _gate_q_9, _gate_q_4;
  csx _gate_q_3, _gate_q_6;
  rz(4.923114859699719) _gate_q_10;
  u2(3.253505137888547, 0.5580515858270136) _gate_q_16;
  cz _gate_q_6, _gate_q_9;
  crz(4.607354403850569) _gate_q_14, _gate_q_0;
  cu(0.2647267599245324, 1.1348892021620398, 1.4633095600180093, 5.3199250577280885) _gate_q_13, _gate_q_4;
  r_5116631120(0.5979886713610851, 3.409757946192576) _gate_q_5;
  rzx_5116631216(0.46133071654595936) _gate_q_8, _gate_q_10;
  rzz_5116630112(2.0779834321268162) _gate_q_15, _gate_q_11;
  x _gate_q_3;
  h _gate_q_1;
  cx _gate_q_12, _gate_q_2;
  rx(3.8096690829426625) _gate_q_16;
  tdg _gate_q_7;
  cry(3.071042636188113) _gate_q_9, _gate_q_10;
  dcx _gate_q_7, _gate_q_3;
  cu3_5116630592(2.6023879724152192, 5.253854823934269, 3.1894647637960305) _gate_q_12, _gate_q_6;
  xx_minus_yy_5116629536(1.706412953103268, 4.8848424001495845) _gate_q_15, _gate_q_11;
  cu3_5116629632(2.3289718384613574, 5.775231152244131, 5.600564995965446) _gate_q_13, _gate_q_14;
  cp(2.688786000211207) _gate_q_1, _gate_q_8;
  z _gate_q_2;
  xx_plus_yy_5116629872(5.470569925055488, 0.7855286661179857) _gate_q_16, _gate_q_5;
  tdg _gate_q_4;
  u2(4.077282314690159, 2.140362416203504) _gate_q_0;
}