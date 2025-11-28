gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107430368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7625633663260898) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.773403375752897) _gate_q_0;
  ry(-2.773403375752897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7625633663260898) _gate_q_1;
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
gate ryy_5107426624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.967477949353205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5107425376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.590749373723032) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.29322319559970483) _gate_q_1;
  ry(-0.29322319559970483) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.590749373723032) _gate_q_0;
}
gate ryy_5107433200(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6290156159050342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107429984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.034336381988391604) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.034336381988391604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.034336381988391604) _gate_q_1;
}
gate rxx_5107418368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3716413184912184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107432864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.645307352441841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5107426816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.158410030962263, 0.6690566361535648, -0.6690566361535648) _gate_q_0;
}
gate xx_minus_yy_5107428640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.115148465871986) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5539192017631662) _gate_q_0;
  ry(-2.5539192017631662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.115148465871986) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5107432720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.848230304117003) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.381892749253993) _gate_q_1;
  ry(-2.381892749253993) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.848230304117003) _gate_q_0;
}
gate rxx_5107432432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6129214831875993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107429216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.374628585887737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107419616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1846704167450355, 0.28577723233108077, -0.28577723233108077) _gate_q_0;
}
gate ryy_5107426240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.941533725873599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107427776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.06289105438925698) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7409558933316105) _gate_q_0;
  ry(-2.7409558933316105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.06289105438925698) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5107432480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.383441498445463) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.383441498445463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.383441498445463) _gate_q_1;
}
gate r_5107417936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.521073018599715, -0.961585957543918, 0.961585957543918) _gate_q_0;
}
gate cu3_5107418128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7548894733909197) _gate_q_0;
  u1(-1.141147702164515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.834136111529141, 0, -1.7548894733909197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.834136111529141, 2.896037175555435, 0) _gate_q_1;
}
gate rxx_5107433344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.297546982141734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_4965714160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5392361072814407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_4965846192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6853326132364814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_4965849600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.274142223215502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cx _gate_q_12, _gate_q_5;
  xx_minus_yy_5107430368(5.546806751505794, 1.7625633663260898) _gate_q_2, _gate_q_9;
  ecr _gate_q_0, _gate_q_11;
  ryy_5107426624(3.967477949353205) _gate_q_14, _gate_q_13;
  sx _gate_q_7;
  dcx _gate_q_8, _gate_q_3;
  xx_plus_yy_5107425376(0.5864463911994097, 4.590749373723032) _gate_q_1, _gate_q_4;
  dcx _gate_q_10, _gate_q_6;
  ryy_5107433200(1.6290156159050342) _gate_q_3, _gate_q_2;
  sxdg _gate_q_14;
  y _gate_q_12;
  ecr _gate_q_7, _gate_q_10;
  cu1_5107429984(0.06867276397678321) _gate_q_11, _gate_q_4;
  rxx_5107418368(0.3716413184912184) _gate_q_13, _gate_q_5;
  rx(3.8742160054610073) _gate_q_8;
  cry(4.899109268126334) _gate_q_9, _gate_q_0;
  cry(5.308677259960122) _gate_q_6, _gate_q_1;
  rxx_5107432864(5.645307352441841) _gate_q_14, _gate_q_3;
  csdg _gate_q_7, _gate_q_2;
  ecr _gate_q_10, _gate_q_13;
  ry(1.0520788079541992) _gate_q_1;
  crx(0.42445381686368955) _gate_q_4, _gate_q_9;
  swap _gate_q_0, _gate_q_5;
  swap _gate_q_8, _gate_q_12;
  x _gate_q_11;
  s _gate_q_6;
  U(0.7661207223300434, 3.024701376159494, 4.672584789423784) _gate_q_10;
  r_5107426816(2.158410030962263, 2.2398529629484614) _gate_q_8;
  cz _gate_q_6, _gate_q_13;
  cz _gate_q_9, _gate_q_12;
  id _gate_q_7;
  ch _gate_q_14, _gate_q_11;
  xx_minus_yy_5107428640(5.1078384035263324, 6.115148465871986) _gate_q_4, _gate_q_3;
  csdg _gate_q_5, _gate_q_2;
  crz(1.7810664844963795) _gate_q_1, _gate_q_0;
  cs _gate_q_4, _gate_q_8;
  xx_plus_yy_5107432720(4.763785498507986, 0.848230304117003) _gate_q_0, _gate_q_1;
  sdg _gate_q_5;
  h _gate_q_12;
  crz(6.180415145789144) _gate_q_11, _gate_q_7;
  cu(5.27080043745143, 5.854522039663143, 4.810345934469117, 1.2155166964833435) _gate_q_14, _gate_q_10;
  x _gate_q_9;
  rxx_5107432432(3.6129214831875993) _gate_q_13, _gate_q_3;
  y _gate_q_2;
  U(2.156444705636989, 0.7536981964754434, 1.1494284568344744) _gate_q_6;
  p(0.4298968834779213) _gate_q_7;
  x _gate_q_4;
  u1(3.40214274350046) _gate_q_12;
  p(0.8665487823697874) _gate_q_6;
  crx(0.7277752849768971) _gate_q_8, _gate_q_5;
  h _gate_q_9;
  ch _gate_q_1, _gate_q_14;
  ryy_5107429216(5.374628585887737) _gate_q_13, _gate_q_11;
  id _gate_q_2;
  ecr _gate_q_10, _gate_q_0;
  ry(2.7468366245069773) _gate_q_3;
  sxdg _gate_q_11;
  r_5107419616(3.1846704167450355, 1.8565735591259773) _gate_q_3;
  ch _gate_q_9, _gate_q_8;
  dcx _gate_q_6, _gate_q_0;
  t _gate_q_1;
  U(1.2123975926329678, 6.213054160679254, 0.7010923126744478) _gate_q_14;
  ryy_5107426240(5.941533725873599) _gate_q_7, _gate_q_10;
  xx_minus_yy_5107427776(5.481911786663221, 0.06289105438925698) _gate_q_12, _gate_q_13;
  rx(1.357427894870921) _gate_q_5;
  iswap _gate_q_4, _gate_q_2;
  swap _gate_q_6, _gate_q_11;
  h _gate_q_5;
  cu1_5107432480(2.766882996890926) _gate_q_13, _gate_q_7;
  cy _gate_q_1, _gate_q_12;
  cz _gate_q_14, _gate_q_10;
  u2(0.3049226880351941, 4.590251162415228) _gate_q_8;
  x _gate_q_0;
  x _gate_q_4;
  cry(0.20084803215708294) _gate_q_2, _gate_q_3;
  r_5107417936(3.521073018599715, 0.6092103692509786) _gate_q_9;
  cu3_5107418128(1.668272223058282, 2.896037175555435, 0.6137417712264045) _gate_q_12, _gate_q_9;
  rxx_5107433344(4.297546982141734) _gate_q_13, _gate_q_5;
  rx(4.283009740502703) _gate_q_8;
  p(1.4837896031211886) _gate_q_7;
  dcx _gate_q_11, _gate_q_6;
  rx(0.28313179265228844) _gate_q_2;
  rzz_4965714160(1.5392361072814407) _gate_q_14, _gate_q_1;
  t _gate_q_10;
  ecr _gate_q_0, _gate_q_4;
  sdg _gate_q_3;
  ecr _gate_q_12, _gate_q_11;
  crz(1.830456090308815) _gate_q_13, _gate_q_10;
  rz(4.174256670610779) _gate_q_14;
  p(0.3966682183422781) _gate_q_3;
  cz _gate_q_4, _gate_q_5;
  cy _gate_q_6, _gate_q_8;
  rxx_4965846192(0.6853326132364814) _gate_q_2, _gate_q_9;
  rzx_4965849600(3.274142223215502) _gate_q_7, _gate_q_1;
  U(0.4753925943204188, 5.90927872570991, 2.838050370993032) _gate_q_0;
}
gate rzz_5106261776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.769072053530894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5106254528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.151092912875194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106262352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6024300595483485) _gate_q_0;
  u1(-0.7601847451258582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7542058613106902, 0, -2.6024300595483485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7542058613106902, 3.3626148046742066, 0) _gate_q_1;
}
gate rzx_5106260864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6945512232721286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106262592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.995774533728912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate ryy_5106267536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.492539682335331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5106264608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.161526709820868) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.920348840510311) _gate_q_1;
  ry(-0.920348840510311) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.161526709820868) _gate_q_0;
}
gate rzz_5106264704(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.881326165884174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106265040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.753690425825727) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3460790981231932) _gate_q_0;
  ry(-0.3460790981231932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.753690425825727) _gate_q_1;
}
gate cu1_5106262688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6491587994469463) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6491587994469463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6491587994469463) _gate_q_1;
}
gate xx_minus_yy_5106266720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7989590282423698) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7516631256428822) _gate_q_0;
  ry(-0.7516631256428822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7989590282423698) _gate_q_1;
}
gate cu3_5106254624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.168290523051315) _gate_q_0;
  u1(-0.002616833700355148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.986118778384085, 0, -5.168290523051315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.986118778384085, 5.17090735675167, 0) _gate_q_1;
}
gate xx_plus_yy_5106264656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.12486984200550431) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.08857420988395913) _gate_q_1;
  ry(-0.08857420988395913) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.12486984200550431) _gate_q_0;
}
gate rzx_5106256064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9687713562456715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5106254816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.423923398208695) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.920147620697935) _gate_q_1;
  ry(-1.920147620697935) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.423923398208695) _gate_q_0;
}
gate ryy_5106256352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5056695150756921) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5106263408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.714590525251752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106256640(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6009978055310996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  rzz_5106261776(5.769072053530894) _gate_q_0, _gate_q_3;
  sdg _gate_q_2;
  sxdg _gate_q_14;
  U(5.4905395269299655, 3.4446544794498264, 5.71646722095689) _gate_q_4;
  rzx_5106254528(5.151092912875194) _gate_q_8, _gate_q_12;
  rx(0.9684153365801794) _gate_q_13;
  sdg _gate_q_11;
  cry(5.22887853196688) _gate_q_1, _gate_q_5;
  cu3_5106262352(1.5084117226213805, 3.3626148046742066, 1.8422453144224902) _gate_q_7, _gate_q_10;
  cry(1.2585726281170215) _gate_q_9, _gate_q_6;
  cs _gate_q_3, _gate_q_13;
  rzx_5106260864(0.6945512232721286) _gate_q_9, _gate_q_6;
  swap _gate_q_0, _gate_q_1;
  rz(3.07302651187496) _gate_q_14;
  swap _gate_q_2, _gate_q_7;
  cz _gate_q_5, _gate_q_4;
  cx _gate_q_10, _gate_q_8;
  rxx_5106262592(1.995774533728912) _gate_q_12, _gate_q_11;
  cs _gate_q_2, _gate_q_13;
  cu(0.7663340699581754, 3.5867143581684626, 2.30248526780932, 5.4508628517305695) _gate_q_11, _gate_q_6;
  csx _gate_q_9, _gate_q_5;
  rx(5.532351197353221) _gate_q_10;
  sx _gate_q_3;
  u2(3.4119062918946925, 3.7598653218084657) _gate_q_14;
  h _gate_q_0;
  x _gate_q_7;
  ryy_5106267536(4.492539682335331) _gate_q_8, _gate_q_12;
  cx _gate_q_1, _gate_q_4;
  ecr _gate_q_11, _gate_q_3;
  sxdg _gate_q_2;
  cz _gate_q_5, _gate_q_6;
  cy _gate_q_8, _gate_q_0;
  ecr _gate_q_1, _gate_q_7;
  xx_plus_yy_5106264608(1.840697681020622, 6.161526709820868) _gate_q_4, _gate_q_12;
  crx(2.3147877655568605) _gate_q_13, _gate_q_9;
  U(2.763557768462201, 4.596019693238891, 0.3977830741162501) _gate_q_14;
  tdg _gate_q_10;
  cz _gate_q_3, _gate_q_1;
  id _gate_q_14;
  rzz_5106264704(5.881326165884174) _gate_q_0, _gate_q_4;
  h _gate_q_11;
  u2(1.3035297389843634, 1.3339534997217746) _gate_q_12;
  dcx _gate_q_7, _gate_q_6;
  xx_minus_yy_5106265040(0.6921581962463864, 5.753690425825727) _gate_q_5, _gate_q_2;
  cz _gate_q_13, _gate_q_8;
  cz _gate_q_9, _gate_q_10;
  cp(5.651243509440788) _gate_q_1, _gate_q_0;
  cu1_5106262688(3.2983175988938926) _gate_q_6, _gate_q_4;
  crz(3.782563199470989) _gate_q_14, _gate_q_11;
  U(3.2790360753851577, 2.847092682673064, 1.7265360507425391) _gate_q_13;
  rx(2.4510877717921318) _gate_q_2;
  cx _gate_q_12, _gate_q_5;
  u1(4.825212542758105) _gate_q_10;
  sxdg _gate_q_7;
  ch _gate_q_8, _gate_q_3;
  rz(0.3109885249013257) _gate_q_9;
  xx_minus_yy_5106266720(1.5033262512857644, 3.7989590282423698) _gate_q_12, _gate_q_14;
  t _gate_q_10;
  cz _gate_q_0, _gate_q_6;
  s _gate_q_9;
  cs _gate_q_13, _gate_q_2;
  cu3_5106254624(5.97223755676817, 5.17090735675167, 5.165673689350959) _gate_q_5, _gate_q_8;
  csx _gate_q_1, _gate_q_7;
  p(3.6304790022057323) _gate_q_11;
  cu(3.5559387448060265, 6.057764354880672, 2.2309872309903622, 1.741772033800942) _gate_q_4, _gate_q_3;
  t _gate_q_13;
  cz _gate_q_6, _gate_q_0;
  sx _gate_q_4;
  rz(3.87704757127887) _gate_q_1;
  p(6.27066851841488) _gate_q_9;
  xx_plus_yy_5106264656(0.17714841976791826, 0.12486984200550431) _gate_q_14, _gate_q_3;
  rzx_5106256064(4.9687713562456715) _gate_q_11, _gate_q_12;
  xx_plus_yy_5106254816(3.84029524139587, 4.423923398208695) _gate_q_8, _gate_q_5;
  ryy_5106256352(0.5056695150756921) _gate_q_2, _gate_q_10;
  sx _gate_q_7;
  cz _gate_q_11, _gate_q_3;
  h _gate_q_5;
  sxdg _gate_q_2;
  csdg _gate_q_9, _gate_q_0;
  cp(5.299753194454762) _gate_q_13, _gate_q_10;
  csx _gate_q_1, _gate_q_12;
  ryy_5106263408(4.714590525251752) _gate_q_6, _gate_q_7;
  ch _gate_q_8, _gate_q_14;
  rz(4.060618111505257) _gate_q_4;
  rzz_5106256640(0.6009978055310996) _gate_q_6, _gate_q_13;
  dcx _gate_q_5, _gate_q_3;
  rx(5.790424763009857) _gate_q_11;
  sxdg _gate_q_8;
  dcx _gate_q_12, _gate_q_10;
  z _gate_q_14;
  sxdg _gate_q_0;
  cz _gate_q_9, _gate_q_2;
  t _gate_q_7;
  ry(2.407665121947492) _gate_q_4;
  sdg _gate_q_1;
}