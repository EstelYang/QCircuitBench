gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5085465728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.18109981208763526) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.18109981208763526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.18109981208763526) _gate_q_1;
}
gate r_5085464720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.864239312617515, 0.6892045190709815, -0.6892045190709815) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5085466256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5233569989340654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rzz_5085466592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2584912247426026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5085466832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.462051829615816, 2.1046126681488433, -2.1046126681488433) _gate_q_0;
}
gate rzz_5085466880(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.8272094695067205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5085467024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.652296163907969) _gate_q_0;
  u1(-0.4221215353749157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.171710021733585, 0, -2.652296163907969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.171710021733585, 3.074417699282885, 0) _gate_q_1;
}
gate xx_minus_yy_5085467216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.840377097513861) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.111392951585437) _gate_q_0;
  ry(-2.111392951585437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.840377097513861) _gate_q_1;
}
gate rzx_5085467264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.226774531060126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5085409312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0685280233107455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5085467504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.129818827505845) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.129818827505845) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.129818827505845) _gate_q_1;
}
gate rzx_5085467984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.786566389038916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5085468032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.203653168058789) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5085468128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.244292939294829) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5085468176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.183239838301729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5085468272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4301574707814704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4301574707814704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4301574707814704) _gate_q_1;
}
gate ryy_5085468368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29365409644537915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070136592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4944268431283231) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.766161011724427) _gate_q_1;
  ry(-1.766161011724427) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4944268431283231) _gate_q_0;
}
gate xx_plus_yy_5085211216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7468464354737097) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6292823160624956) _gate_q_1;
  ry(-2.6292823160624956) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7468464354737097) _gate_q_0;
}
gate ryy_5085211168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.407162922079887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  dcx _gate_q_17, _gate_q_9;
  s _gate_q_14;
  rx(4.2284493203894) _gate_q_0;
  t _gate_q_10;
  cu1_5085465728(0.3621996241752705) _gate_q_16, _gate_q_2;
  u1(5.834526761071642) _gate_q_12;
  r_5085464720(5.864239312617515, 2.260000845865878) _gate_q_13;
  crx(6.031888144127077) _gate_q_5, _gate_q_3;
  rx(5.437766962331378) _gate_q_6;
  u3(0.3675963208030725, 1.2565896155900236, 4.355466510172994) _gate_q_8;
  cs _gate_q_7, _gate_q_11;
  ry(2.277942565696984) _gate_q_1;
  u2(2.71851433774338, 0.9556709403761615) _gate_q_4;
  z _gate_q_15;
  U(4.153989359721994, 5.405341402136506, 4.307681730362713) _gate_q_16;
  sdg _gate_q_3;
  csdg _gate_q_13, _gate_q_0;
  csdg _gate_q_8, _gate_q_5;
  u2(1.6226669734202346, 4.226259710995557) _gate_q_2;
  t _gate_q_17;
  s _gate_q_7;
  ryy_5085466256(3.5233569989340654) _gate_q_14, _gate_q_10;
  cry(4.049676688115201) _gate_q_4, _gate_q_9;
  ecr _gate_q_6, _gate_q_12;
  crz(0.37652550488601666) _gate_q_11, _gate_q_15;
  t _gate_q_1;
  cz _gate_q_12, _gate_q_0;
  cx _gate_q_9, _gate_q_11;
  ry(4.788416629422669) _gate_q_6;
  s _gate_q_3;
  cs _gate_q_13, _gate_q_10;
  cs _gate_q_7, _gate_q_1;
  x _gate_q_8;
  u2(2.9262012086706948, 1.1899690754672296) _gate_q_16;
  rz(2.39344025429606) _gate_q_15;
  cz _gate_q_17, _gate_q_14;
  rzz_5085466592(2.2584912247426026) _gate_q_4, _gate_q_5;
  ry(1.19191108506906) _gate_q_2;
  csx _gate_q_7, _gate_q_12;
  t _gate_q_17;
  cp(2.4348480673970196) _gate_q_1, _gate_q_16;
  sxdg _gate_q_11;
  csdg _gate_q_10, _gate_q_14;
  U(5.2172609609154135, 2.2414432850783523, 4.572140047304672) _gate_q_0;
  r_5085466832(3.462051829615816, 3.67540899494374) _gate_q_6;
  rzz_5085466880(4.8272094695067205) _gate_q_9, _gate_q_15;
  U(4.731351029351609, 3.91638869994324, 3.0954987345022382) _gate_q_8;
  u2(0.0778136527244234, 0.6460869580606139) _gate_q_13;
  cu3_5085467024(4.34342004346717, 3.074417699282885, 2.2301746285330535) _gate_q_3, _gate_q_5;
  u2(2.1427160172690733, 1.758552073789712) _gate_q_4;
  y _gate_q_2;
  ecr _gate_q_9, _gate_q_16;
  sxdg _gate_q_12;
  sxdg _gate_q_17;
  rx(5.490460361055109) _gate_q_5;
  xx_minus_yy_5085467216(4.222785903170874, 2.840377097513861) _gate_q_0, _gate_q_11;
  rzx_5085467264(3.226774531060126) _gate_q_10, _gate_q_14;
  cu(2.1544541993505377, 5.843048976542872, 1.2782640741093514, 4.543229141943447) _gate_q_6, _gate_q_3;
  ch _gate_q_7, _gate_q_2;
  sdg _gate_q_8;
  dcx _gate_q_1, _gate_q_15;
  iswap _gate_q_4, _gate_q_13;
  rxx_5085409312(1.0685280233107455) _gate_q_1, _gate_q_8;
  sxdg _gate_q_7;
  crz(2.2884996563624322) _gate_q_13, _gate_q_9;
  cx _gate_q_2, _gate_q_12;
  cu1_5085467504(0.25963765501169) _gate_q_5, _gate_q_11;
  id _gate_q_4;
  h _gate_q_14;
  cu(4.366803074923409, 4.30613514192338, 3.722737550781292, 1.8571771862793645) _gate_q_3, _gate_q_16;
  crx(5.21631461670296) _gate_q_17, _gate_q_10;
  sx _gate_q_15;
  sx _gate_q_6;
  s _gate_q_0;
  csx _gate_q_6, _gate_q_5;
  cy _gate_q_8, _gate_q_3;
  crx(3.748555313501133) _gate_q_9, _gate_q_11;
  cry(3.030672865142882) _gate_q_2, _gate_q_4;
  z _gate_q_12;
  rzx_5085467984(3.786566389038916) _gate_q_15, _gate_q_1;
  ryy_5085468032(4.203653168058789) _gate_q_0, _gate_q_17;
  ry(4.675052195340608) _gate_q_14;
  sdg _gate_q_16;
  rxx_5085468128(6.244292939294829) _gate_q_10, _gate_q_7;
  sx _gate_q_13;
  rzz_5085468176(6.183239838301729) _gate_q_4, _gate_q_14;
  u3(1.0805601583521058, 0.7544664060102408, 1.3367824958472612) _gate_q_7;
  z _gate_q_16;
  ecr _gate_q_5, _gate_q_13;
  x _gate_q_17;
  id _gate_q_12;
  y _gate_q_10;
  h _gate_q_8;
  cu1_5085468272(2.8603149415629407) _gate_q_2, _gate_q_3;
  tdg _gate_q_9;
  sx _gate_q_6;
  cs _gate_q_0, _gate_q_1;
  ryy_5085468368(0.29365409644537915) _gate_q_15, _gate_q_11;
  tdg _gate_q_7;
  tdg _gate_q_4;
  U(5.288271369779174, 5.9511718590069345, 1.0627595817195794) _gate_q_11;
  sx _gate_q_6;
  xx_plus_yy_5070136592(3.532322023448854, 0.4944268431283231) _gate_q_10, _gate_q_16;
  dcx _gate_q_5, _gate_q_15;
  u3(4.299986752484441, 1.7079673577921317, 0.6781994892734989) _gate_q_12;
  xx_plus_yy_5085211216(5.258564632124991, 1.7468464354737097) _gate_q_0, _gate_q_17;
  t _gate_q_1;
  ryy_5085211168(5.407162922079887) _gate_q_8, _gate_q_3;
  u3(1.7218394553676328, 6.188847962713854, 3.9978740906319565) _gate_q_14;
  z _gate_q_2;
  y _gate_q_13;
  t _gate_q_9;
  cx _gate_q_11, _gate_q_0;
  ch _gate_q_7, _gate_q_4;
  cs _gate_q_5, _gate_q_16;
  cz _gate_q_17, _gate_q_12;
  crz(1.545928282564165) _gate_q_9, _gate_q_6;
  cry(5.205047914241272) _gate_q_15, _gate_q_13;
  dcx _gate_q_2, _gate_q_3;
  tdg _gate_q_14;
  z _gate_q_1;
  ry(0.15458281488827771) _gate_q_10;
  t _gate_q_8;
}
gate ryy_5085202432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.665016974535081) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5085202384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.849484308149024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5085202336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0077478583281028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072702976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.684392179308817) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.853658170527863) _gate_q_1;
  ry(-1.853658170527863) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.684392179308817) _gate_q_0;
}
gate rxx_5072712864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.689398164909271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072706672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.276005780648891) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.276005780648891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.276005780648891) _gate_q_1;
}
gate rxx_5072709984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7935130608875984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072715408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.09470407619409688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072714256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.03534655420699188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072711328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7393682710515865, -0.40990342244095346, 0.40990342244095346) _gate_q_0;
}
gate cu1_5072713104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.588189501298285) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.588189501298285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.588189501298285) _gate_q_1;
}
gate ryy_5072701824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.047390576437677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072702256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1538897177314986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072710800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1439841639381365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072714160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.434696159756083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072711376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.142546198087766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072707776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.363981528995741) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1388345597916893) _gate_q_0;
  ry(-1.1388345597916893) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.363981528995741) _gate_q_1;
}
gate xx_plus_yy_5072706480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5710836002906006) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9917387250098313) _gate_q_1;
  ry(-1.9917387250098313) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5710836002906006) _gate_q_0;
}
gate xx_minus_yy_5072702736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.041189415477121) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5217447196287015) _gate_q_0;
  ry(-1.5217447196287015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.041189415477121) _gate_q_1;
}
gate xx_minus_yy_5072700480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.9580937444338105) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9070967294293677) _gate_q_0;
  ry(-1.9070967294293677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.9580937444338105) _gate_q_1;
}
gate rxx_5072709216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.238817671235692) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072700432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1616436899143607) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9806436122510751) _gate_q_1;
  ry(-0.9806436122510751) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1616436899143607) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  s _gate_q_0;
  ryy_5085202432(3.665016974535081) _gate_q_9, _gate_q_4;
  rzz_5085202384(3.849484308149024) _gate_q_6, _gate_q_17;
  cy _gate_q_16, _gate_q_15;
  u2(3.2282079591804123, 5.876886917452244) _gate_q_3;
  x _gate_q_14;
  csx _gate_q_7, _gate_q_5;
  iswap _gate_q_2, _gate_q_8;
  rzx_5085202336(1.0077478583281028) _gate_q_13, _gate_q_10;
  cy _gate_q_12, _gate_q_11;
  s _gate_q_1;
  tdg _gate_q_16;
  sx _gate_q_6;
  U(5.341245604927929, 1.1858923122769087, 5.42428990427901) _gate_q_13;
  rz(1.9440038523841996) _gate_q_15;
  sx _gate_q_17;
  cs _gate_q_0, _gate_q_11;
  u3(5.8652455367177305, 1.5085550354882893, 3.924810312111538) _gate_q_9;
  cp(2.349366140181703) _gate_q_2, _gate_q_1;
  ry(5.240614459790753) _gate_q_4;
  cu(4.089186393889164, 1.4167934715297346, 5.332491634097243, 1.1617863806456197) _gate_q_14, _gate_q_7;
  xx_plus_yy_5072702976(3.707316341055726, 5.684392179308817) _gate_q_5, _gate_q_12;
  cu(4.3076279807794995, 0.8055762759174988, 2.6294410145252263, 5.422571310271608) _gate_q_3, _gate_q_10;
  u2(1.2133928458531873, 3.6902829007431786) _gate_q_8;
  U(1.3617528718206768, 3.907321868315662, 4.882876224165643) _gate_q_1;
  rxx_5072712864(4.689398164909271) _gate_q_12, _gate_q_0;
  h _gate_q_8;
  t _gate_q_4;
  cu1_5072706672(4.552011561297782) _gate_q_3, _gate_q_7;
  csx _gate_q_2, _gate_q_17;
  rxx_5072709984(3.7935130608875984) _gate_q_11, _gate_q_14;
  cry(2.406611504127938) _gate_q_9, _gate_q_10;
  ecr _gate_q_6, _gate_q_5;
  crx(0.9300314503292517) _gate_q_13, _gate_q_15;
  h _gate_q_16;
  rzx_5072715408(0.09470407619409688) _gate_q_16, _gate_q_7;
  cp(5.904577579084814) _gate_q_3, _gate_q_2;
  sxdg _gate_q_8;
  cx _gate_q_10, _gate_q_0;
  t _gate_q_14;
  rxx_5072714256(0.03534655420699188) _gate_q_17, _gate_q_6;
  sdg _gate_q_4;
  cry(0.7876071810066865) _gate_q_15, _gate_q_13;
  cu(5.401782990122615, 0.7573692394697681, 2.5120981546464622, 1.9712678636918284) _gate_q_11, _gate_q_5;
  cu(0.784033832924895, 2.3439485712580157, 2.599743505227053, 5.606680969281233) _gate_q_1, _gate_q_12;
  rx(0.15625344690492013) _gate_q_9;
  y _gate_q_6;
  r_5072711328(1.7393682710515865, 1.160892904353943) _gate_q_0;
  cry(2.609010172191083) _gate_q_11, _gate_q_4;
  u3(0.8107424991372704, 4.0855705046658946, 4.952047683998261) _gate_q_8;
  csdg _gate_q_16, _gate_q_5;
  id _gate_q_10;
  sxdg _gate_q_15;
  ch _gate_q_13, _gate_q_9;
  cu1_5072713104(3.17637900259657) _gate_q_1, _gate_q_3;
  ecr _gate_q_2, _gate_q_12;
  u3(2.0933606394620474, 0.5787730386188952, 1.8025829218400267) _gate_q_7;
  tdg _gate_q_14;
  h _gate_q_17;
  ecr _gate_q_7, _gate_q_2;
  s _gate_q_6;
  tdg _gate_q_16;
  cz _gate_q_14, _gate_q_12;
  tdg _gate_q_17;
  U(3.5237520623467224, 2.27215562956847, 3.928863138316818) _gate_q_8;
  ryy_5072701824(4.047390576437677) _gate_q_4, _gate_q_15;
  ch _gate_q_1, _gate_q_13;
  csx _gate_q_9, _gate_q_10;
  cz _gate_q_11, _gate_q_0;
  cu(1.8819123129560227, 3.5469820945812067, 0.4499696756519193, 0.2947699428222641) _gate_q_5, _gate_q_3;
  csdg _gate_q_15, _gate_q_8;
  ryy_5072702256(3.1538897177314986) _gate_q_13, _gate_q_6;
  ch _gate_q_9, _gate_q_11;
  csx _gate_q_14, _gate_q_16;
  sdg _gate_q_0;
  u3(2.9713664383535563, 4.183443351415111, 0.6301555816674552) _gate_q_10;
  id _gate_q_5;
  z _gate_q_2;
  id _gate_q_12;
  cry(5.8615963144834) _gate_q_4, _gate_q_7;
  rzz_5072710800(3.1439841639381365) _gate_q_17, _gate_q_3;
  u2(3.2855137617505457, 3.2316821489385203) _gate_q_1;
  cu(6.2319450179143026, 0.24437061785827793, 3.970622242739509, 2.849665585965184) _gate_q_0, _gate_q_8;
  iswap _gate_q_6, _gate_q_4;
  rz(1.1613148873203292) _gate_q_9;
  ry(3.072765103126549) _gate_q_12;
  cp(3.5809184980857895) _gate_q_2, _gate_q_1;
  z _gate_q_11;
  z _gate_q_7;
  rzx_5072714160(5.434696159756083) _gate_q_10, _gate_q_14;
  cry(1.1317184296446192) _gate_q_3, _gate_q_5;
  cp(3.5230428749775147) _gate_q_13, _gate_q_15;
  id _gate_q_16;
  ry(1.1243935495008446) _gate_q_17;
  U(1.2939264854059902, 0.6729727179410863, 3.062041093172152) _gate_q_15;
  cx _gate_q_16, _gate_q_17;
  t _gate_q_6;
  cry(5.656732162821964) _gate_q_10, _gate_q_5;
  x _gate_q_1;
  t _gate_q_0;
  dcx _gate_q_2, _gate_q_14;
  rxx_5072711376(5.142546198087766) _gate_q_8, _gate_q_13;
  t _gate_q_11;
  swap _gate_q_4, _gate_q_9;
  crx(4.297305359787172) _gate_q_3, _gate_q_12;
  sdg _gate_q_7;
  sdg _gate_q_4;
  xx_minus_yy_5072707776(2.2776691195833787, 3.363981528995741) _gate_q_6, _gate_q_1;
  cp(2.4787676322435948) _gate_q_16, _gate_q_8;
  U(6.023518584339745, 4.62465761365223, 3.1140073715184506) _gate_q_0;
  xx_plus_yy_5072706480(3.9834774500196626, 0.5710836002906006) _gate_q_5, _gate_q_15;
  xx_minus_yy_5072702736(3.043489439257403, 6.041189415477121) _gate_q_3, _gate_q_14;
  xx_minus_yy_5072700480(3.8141934588587354, 4.9580937444338105) _gate_q_10, _gate_q_13;
  dcx _gate_q_7, _gate_q_11;
  rxx_5072709216(2.238817671235692) _gate_q_2, _gate_q_17;
  xx_plus_yy_5072700432(1.9612872245021502, 1.1616436899143607) _gate_q_9, _gate_q_12;
}