gate rzz_5074504592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.322578540465723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5074515968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6422466227829158) _gate_q_1;
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
gate rzx_5074502912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.086687482614527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074508816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4947538196446692) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074509824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4148991272555306) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.12494561479193614) _gate_q_0;
  ry(-0.12494561479193614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4148991272555306) _gate_q_1;
}
gate cu3_5074517264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.798548172095425) _gate_q_0;
  u1(-0.545865064200544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7670124929084876, 0, -3.798548172095425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7670124929084876, 4.344413236295969, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5074503632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9839291282368368, 0.6661544976521809, -0.6661544976521809) _gate_q_0;
}
gate rzx_5074502432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.03527966493721108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074517216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9692425298015674) _gate_q_0;
  u1(0.027479438759950625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4179177203827761, 0, -2.9692425298015674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4179177203827761, 2.941763091041617, 0) _gate_q_1;
}
gate rzx_5074502528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7715339945751091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_plus_yy_5074508624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.089727330044937) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2620380453808435) _gate_q_1;
  ry(-2.2620380453808435) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.089727330044937) _gate_q_0;
}
gate rzz_5074504544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1404393374977224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074504304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.915307264273323) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8983192945836342) _gate_q_0;
  ry(-1.8983192945836342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.915307264273323) _gate_q_1;
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
gate r_5074502288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7346890404610948, -0.9648371447630779, 0.9648371447630779) _gate_q_0;
}
gate rzz_5074501760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6270949010896125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074501712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1250907206845704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1250907206845704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1250907206845704) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  swap _gate_q_0, _gate_q_2;
  sdg _gate_q_8;
  rzz_5074504592(5.322578540465723) _gate_q_11, _gate_q_9;
  rx(1.4143253857388474) _gate_q_7;
  sxdg _gate_q_3;
  h _gate_q_1;
  y _gate_q_10;
  rxx_5074515968(1.6422466227829158) _gate_q_4, _gate_q_6;
  sdg _gate_q_5;
  iswap _gate_q_9, _gate_q_2;
  t _gate_q_3;
  U(3.7682397705820607, 4.715380769954473, 5.5725520075302795) _gate_q_1;
  s _gate_q_8;
  cz _gate_q_4, _gate_q_5;
  rzx_5074502912(4.086687482614527) _gate_q_10, _gate_q_11;
  rxx_5074508816(2.4947538196446692) _gate_q_6, _gate_q_7;
  h _gate_q_0;
  xx_minus_yy_5074509824(0.24989122958387228, 0.4148991272555306) _gate_q_8, _gate_q_6;
  cu3_5074517264(5.534024985816975, 4.344413236295969, 3.252683107894881) _gate_q_7, _gate_q_3;
  u1(4.237608945344232) _gate_q_9;
  ch _gate_q_2, _gate_q_11;
  csdg _gate_q_4, _gate_q_10;
  h _gate_q_0;
  cry(0.9117570484053279) _gate_q_1, _gate_q_5;
  z _gate_q_3;
  r_5074503632(1.9839291282368368, 2.2369508244470775) _gate_q_6;
  cp(1.388374312395795) _gate_q_10, _gate_q_7;
  x _gate_q_9;
  rzx_5074502432(0.03527966493721108) _gate_q_8, _gate_q_5;
  cu(3.477481871720148, 3.7207755976296957, 4.325296894781377, 4.250228764841142) _gate_q_0, _gate_q_2;
  cu3_5074517216(0.8358354407655522, 2.941763091041617, 2.996721968561518) _gate_q_1, _gate_q_4;
  U(5.5699595871372685, 4.019639418402914, 1.1591581970758444) _gate_q_11;
  cx _gate_q_9, _gate_q_2;
  z _gate_q_0;
  ry(4.005679003940425) _gate_q_5;
  iswap _gate_q_7, _gate_q_3;
  rzx_5074502528(0.7715339945751091) _gate_q_1, _gate_q_8;
  crx(5.311436275605226) _gate_q_10, _gate_q_6;
  dcx _gate_q_4, _gate_q_11;
  U(2.5466668420762826, 3.3138129254264443, 0.01858747532695965) _gate_q_10;
  u1(6.231345093989934) _gate_q_3;
  ecr _gate_q_6, _gate_q_1;
  u1(3.926345251420359) _gate_q_4;
  xx_plus_yy_5074508624(4.524076090761687, 5.089727330044937) _gate_q_5, _gate_q_8;
  rzz_5074504544(2.1404393374977224) _gate_q_0, _gate_q_11;
  sx _gate_q_2;
  sx _gate_q_9;
  ry(6.093316994327606) _gate_q_7;
  t _gate_q_10;
  id _gate_q_4;
  z _gate_q_3;
  u1(4.018353788664149) _gate_q_9;
  sx _gate_q_11;
  xx_minus_yy_5074504304(3.7966385891672685, 1.915307264273323) _gate_q_8, _gate_q_0;
  s _gate_q_5;
  t _gate_q_7;
  z _gate_q_1;
  cy _gate_q_6, _gate_q_2;
  ecr _gate_q_0, _gate_q_1;
  cu(3.7280848039901855, 1.3669937282861668, 3.8870656456485637, 4.9402073629268815) _gate_q_7, _gate_q_11;
  cry(5.471757576436571) _gate_q_3, _gate_q_6;
  p(1.3588005164488355) _gate_q_5;
  z _gate_q_9;
  t _gate_q_10;
  x _gate_q_8;
  csx _gate_q_4, _gate_q_2;
  crz(5.847573390223139) _gate_q_11, _gate_q_8;
  x _gate_q_5;
  x _gate_q_4;
  sx _gate_q_6;
  swap _gate_q_0, _gate_q_1;
  x _gate_q_7;
  y _gate_q_2;
  h _gate_q_9;
  rz(3.599558941061321) _gate_q_10;
  rz(4.235707004634435) _gate_q_3;
  cz _gate_q_6, _gate_q_11;
  r_5074502288(1.7346890404610948, 0.6059591820318186) _gate_q_0;
  t _gate_q_3;
  cp(3.8930613670592202) _gate_q_4, _gate_q_2;
  rzz_5074501760(1.6270949010896125) _gate_q_9, _gate_q_8;
  cu1_5074501712(4.250181441369141) _gate_q_10, _gate_q_1;
  rx(2.080326595499767) _gate_q_7;
  sx _gate_q_5;
}
gate rzx_5074509584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7950943758797646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074509440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6742102476422236) _gate_q_0;
  u1(-1.6617159776549841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9483072063500113, 0, -1.6742102476422236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9483072063500113, 3.3359262252972077, 0) _gate_q_1;
}
gate xx_minus_yy_5074510256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7239073122304471) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.218778891761604) _gate_q_0;
  ry(-2.218778891761604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7239073122304471) _gate_q_1;
}
gate cu3_5074508336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6226025448019343) _gate_q_0;
  u1(0.5965184389384189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.0543708113300204, 0, -1.6226025448019343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.0543708113300204, 1.0260841058635155, 0) _gate_q_1;
}
gate rzx_5074425024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.487691573754329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074424640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.48480841670323) _gate_q_0;
  u1(1.5905694543612525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6479190996972892, 0, -2.48480841670323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6479190996972892, 0.8942389623419772, 0) _gate_q_1;
}
gate xx_minus_yy_5074420560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9308472649739468) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.04420379001381071) _gate_q_0;
  ry(-0.04420379001381071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9308472649739468) _gate_q_1;
}
gate rzx_5074424256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5780653981559205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074421136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.982577925697537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074423584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.019970203389604) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.16571907508324266) _gate_q_0;
  ry(-0.16571907508324266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.019970203389604) _gate_q_1;
}
gate ryy_5074420080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1672756361158931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074423344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7164280936083015, -1.0849518880857516, 1.0849518880857516) _gate_q_0;
}
gate r_5074421424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1443007111355543, 3.0621197342200137, -3.0621197342200137) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  u1(3.128808305051587) _gate_q_0;
  swap _gate_q_5, _gate_q_6;
  ecr _gate_q_2, _gate_q_10;
  rzx_5074509584(0.7950943758797646) _gate_q_8, _gate_q_9;
  sxdg _gate_q_4;
  rz(0.22017153311885485) _gate_q_11;
  cu3_5074509440(1.8966144127000226, 3.3359262252972077, 0.012494269987239372) _gate_q_7, _gate_q_1;
  h _gate_q_3;
  xx_minus_yy_5074510256(4.437557783523208, 1.7239073122304471) _gate_q_0, _gate_q_3;
  csx _gate_q_8, _gate_q_5;
  u1(4.43071487696992) _gate_q_11;
  sdg _gate_q_10;
  dcx _gate_q_1, _gate_q_2;
  cu3_5074508336(0.1087416226600408, 1.0260841058635155, 2.2191209837403534) _gate_q_6, _gate_q_7;
  x _gate_q_9;
  p(5.749060359180031) _gate_q_4;
  t _gate_q_10;
  rx(0.5716727078197772) _gate_q_4;
  cp(3.608357230770424) _gate_q_1, _gate_q_5;
  cp(1.4169036498834662) _gate_q_3, _gate_q_11;
  h _gate_q_9;
  dcx _gate_q_8, _gate_q_6;
  rzx_5074425024(2.487691573754329) _gate_q_0, _gate_q_2;
  y _gate_q_7;
  h _gate_q_1;
  crz(0.42194206170940723) _gate_q_8, _gate_q_7;
  z _gate_q_4;
  sx _gate_q_9;
  cu3_5074424640(3.2958381993945784, 0.8942389623419772, 4.075377871064482) _gate_q_2, _gate_q_6;
  h _gate_q_5;
  ecr _gate_q_0, _gate_q_11;
  h _gate_q_10;
  tdg _gate_q_3;
  cz _gate_q_3, _gate_q_1;
  h _gate_q_4;
  xx_minus_yy_5074420560(0.08840758002762142, 3.9308472649739468) _gate_q_0, _gate_q_10;
  crx(4.7419548913478895) _gate_q_5, _gate_q_8;
  iswap _gate_q_9, _gate_q_6;
  y _gate_q_11;
  rzx_5074424256(1.5780653981559205) _gate_q_7, _gate_q_2;
  p(4.759630569459101) _gate_q_8;
  u3(3.6316918869050867, 2.3391890564575015, 3.968527017449557) _gate_q_1;
  crx(3.504750462248271) _gate_q_10, _gate_q_4;
  id _gate_q_5;
  crx(2.8291075574446425) _gate_q_11, _gate_q_0;
  rzz_5074421136(5.982577925697537) _gate_q_3, _gate_q_6;
  csx _gate_q_9, _gate_q_7;
  sxdg _gate_q_2;
  cry(5.208321974861464) _gate_q_8, _gate_q_5;
  cy _gate_q_7, _gate_q_1;
  ecr _gate_q_2, _gate_q_10;
  csdg _gate_q_9, _gate_q_0;
  cp(5.475231126903246) _gate_q_3, _gate_q_4;
  cy _gate_q_11, _gate_q_6;
  xx_minus_yy_5074423584(0.3314381501664853, 5.019970203389604) _gate_q_0, _gate_q_1;
  cy _gate_q_2, _gate_q_10;
  h _gate_q_6;
  ryy_5074420080(1.1672756361158931) _gate_q_9, _gate_q_3;
  r_5074423344(0.7164280936083015, 0.48584443870914495) _gate_q_11;
  r_5074421424(2.1443007111355543, 4.63291606101491) _gate_q_5;
  sx _gate_q_7;
  u3(5.549635895097159, 2.2814908590996446, 6.137722159756056) _gate_q_4;
  u3(5.210406156697384, 2.357563242103477, 4.15886868673875) _gate_q_8;
  sx _gate_q_8;
  x _gate_q_11;
  y _gate_q_9;
  ecr _gate_q_6, _gate_q_5;
  cp(2.4869701344322928) _gate_q_0, _gate_q_10;
  u1(0.33230123112956106) _gate_q_3;
  x _gate_q_7;
  id _gate_q_2;
  cp(3.5884301316932454) _gate_q_4, _gate_q_1;
  cx _gate_q_5, _gate_q_10;
  U(4.735541654558431, 1.6646355546816742, 0.47406225697261173) _gate_q_1;
  rz(0.2570752843410667) _gate_q_9;
  ecr _gate_q_8, _gate_q_4;
  ch _gate_q_7, _gate_q_0;
  rz(3.121637636603093) _gate_q_3;
  csx _gate_q_6, _gate_q_2;
  sdg _gate_q_11;
}