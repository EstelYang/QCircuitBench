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
gate r_5107715488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.383979483906544, -1.2038482282803473, 1.2038482282803473) _gate_q_0;
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
gate xx_plus_yy_5107715008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.647024248100667) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8255361082794663) _gate_q_1;
  ry(-2.8255361082794663) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.647024248100667) _gate_q_0;
}
gate cu3_5107715296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8369388931637083) _gate_q_0;
  u1(1.7598632363366253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8290830857334753, 0, -3.8369388931637083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8290830857334753, 2.0770756568270827, 0) _gate_q_1;
}
gate rzz_5107714864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8009677775363415) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5107715824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2602623999595526) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2602623999595526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2602623999595526) _gate_q_1;
}
gate cu1_5107716976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1429159817197512) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1429159817197512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1429159817197512) _gate_q_1;
}
gate cu3_5108059504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.3916406584252596) _gate_q_0;
  u1(1.1107965899823145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.707316489480937, 0, -1.3916406584252596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.707316489480937, 0.280844068442945, 0) _gate_q_1;
}
gate r_5108061088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.688212226477147, 2.7398059940713706, -2.7398059940713706) _gate_q_0;
}
gate cu1_5108065360(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.322767254000986) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.322767254000986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.322767254000986) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5107714528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.162687715488199) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5108069968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9953925060149592) _gate_q_0;
  u1(-0.9343390702750737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7607269408090434, 0, -0.9953925060149592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7607269408090434, 1.929731576290033, 0) _gate_q_1;
}
gate cu3_5108071552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.561852192184706) _gate_q_0;
  u1(0.048149875420284594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7256029041135675, 0, -1.561852192184706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7256029041135675, 1.5137023167644212, 0) _gate_q_1;
}
gate rzz_5108056192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.264141831732781) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5108056240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8815026098486762) _gate_q_0;
  u1(1.04354778913188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3345780962983054, 0, -1.8815026098486762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3345780962983054, 0.8379548207167964, 0) _gate_q_1;
}
gate xx_plus_yy_5108056144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2503399737747788) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0270190147442784) _gate_q_1;
  ry(-2.0270190147442784) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2503399737747788) _gate_q_0;
}
gate rzz_5108056528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.910039877279675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5108056672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4169376932800601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  U(4.345145589686128, 1.34931408949817, 2.1920942724935673) _gate_q_2;
  cy _gate_q_3, _gate_q_0;
  y _gate_q_10;
  u1(0.8399750820708759) _gate_q_5;
  sdg _gate_q_11;
  csx _gate_q_7, _gate_q_4;
  r_5107715488(5.383979483906544, 0.36694809851454924) _gate_q_9;
  z _gate_q_6;
  x _gate_q_1;
  u1(0.45525415109590095) _gate_q_8;
  ry(2.4794426469195674) _gate_q_4;
  U(5.659291633148257, 0.2013915401857845, 4.256931010830778) _gate_q_6;
  cs _gate_q_3, _gate_q_9;
  u1(3.6190155219175115) _gate_q_2;
  xx_plus_yy_5107715008(5.651072216558933, 1.647024248100667) _gate_q_0, _gate_q_8;
  cu3_5107715296(1.6581661714669507, 2.0770756568270827, 5.596802129500333) _gate_q_10, _gate_q_11;
  u2(2.606010121613544, 5.40430175770201) _gate_q_1;
  cry(6.214980574035597) _gate_q_7, _gate_q_5;
  h _gate_q_6;
  rzz_5107714864(2.8009677775363415) _gate_q_7, _gate_q_10;
  ecr _gate_q_11, _gate_q_1;
  U(4.537697231940001, 3.562961152696066, 5.468957107776536) _gate_q_4;
  U(5.420761319662573, 0.27576040613474, 3.8367127492597035) _gate_q_9;
  id _gate_q_0;
  cs _gate_q_3, _gate_q_5;
  y _gate_q_8;
  sx _gate_q_2;
  iswap _gate_q_6, _gate_q_7;
  iswap _gate_q_10, _gate_q_11;
  csdg _gate_q_3, _gate_q_2;
  cu1_5107715824(2.520524799919105) _gate_q_4, _gate_q_8;
  s _gate_q_5;
  cs _gate_q_0, _gate_q_9;
  tdg _gate_q_1;
  u1(3.0600914734341553) _gate_q_5;
  ch _gate_q_3, _gate_q_11;
  x _gate_q_9;
  ry(2.9297200363128484) _gate_q_4;
  u1(5.970006838680847) _gate_q_0;
  h _gate_q_6;
  cu1_5107716976(2.2858319634395023) _gate_q_2, _gate_q_10;
  ecr _gate_q_7, _gate_q_8;
  p(6.042691494946731) _gate_q_1;
  cu3_5108059504(3.414632978961874, 0.280844068442945, 2.502437248407574) _gate_q_10, _gate_q_5;
  h _gate_q_7;
  x _gate_q_1;
  tdg _gate_q_2;
  cz _gate_q_11, _gate_q_3;
  x _gate_q_0;
  tdg _gate_q_4;
  cs _gate_q_6, _gate_q_8;
  r_5108061088(4.688212226477147, 4.310602320866267) _gate_q_9;
  cz _gate_q_2, _gate_q_4;
  ry(5.737233180678953) _gate_q_11;
  id _gate_q_10;
  crz(1.7344861921625843) _gate_q_6, _gate_q_1;
  cu1_5108065360(4.645534508001972) _gate_q_0, _gate_q_8;
  dcx _gate_q_5, _gate_q_7;
  rxx_5107714528(6.162687715488199) _gate_q_9, _gate_q_3;
  cu3_5108069968(1.5214538816180867, 1.929731576290033, 0.061053435739885635) _gate_q_6, _gate_q_11;
  s _gate_q_4;
  cu3_5108071552(1.451205808227135, 1.5137023167644212, 1.6100020676049904) _gate_q_2, _gate_q_8;
  dcx _gate_q_3, _gate_q_7;
  u3(4.358012759403403, 0.918928873920543, 3.6713332555733142) _gate_q_9;
  csdg _gate_q_5, _gate_q_0;
  rzz_5108056192(6.264141831732781) _gate_q_1, _gate_q_10;
  tdg _gate_q_3;
  sxdg _gate_q_4;
  cu3_5108056240(4.669156192596611, 0.8379548207167964, 2.9250503989805563) _gate_q_9, _gate_q_2;
  xx_plus_yy_5108056144(4.054038029488557, 0.2503399737747788) _gate_q_5, _gate_q_7;
  u3(0.8779561891156801, 1.995772048698422, 3.067878633240793) _gate_q_0;
  cu(2.0146491012510697, 3.714365550912721, 3.923229021919439, 3.9310745700740815) _gate_q_11, _gate_q_1;
  rzz_5108056528(1.910039877279675) _gate_q_8, _gate_q_6;
  x _gate_q_10;
  ch _gate_q_3, _gate_q_2;
  ecr _gate_q_11, _gate_q_4;
  p(3.375549600434629) _gate_q_7;
  cx _gate_q_5, _gate_q_8;
  U(5.859586827438094, 0.4627213542789124, 5.036252315396332) _gate_q_0;
  rxx_5108056672(1.4169376932800601) _gate_q_6, _gate_q_1;
  sx _gate_q_10;
  rz(0.5525401784994602) _gate_q_9;
}
gate rxx_5108060512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9876864796157805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5108060464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2893846855144673) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2700381126896934) _gate_q_1;
  ry(-1.2700381126896934) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2893846855144673) _gate_q_0;
}
gate ryy_5108058448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1693273083876825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5108058208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.132772189721849) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5108058256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.009468789642531) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5108058160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8016663477165955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5108062336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.736898423548607) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.736898423548607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.736898423548607) _gate_q_1;
}
gate rxx_5108061616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.113814583380637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108059648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.17324938221905076) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.17324938221905076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.17324938221905076) _gate_q_1;
}
gate rxx_5108061808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6665621986010004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5108061760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8213489529248235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108061664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.11970961711380458) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.11970961711380458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.11970961711380458) _gate_q_1;
}
gate rzx_5108061856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.181739722936957) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108062096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.858033405202151) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.360841330481854) _gate_q_0;
  ry(-2.360841330481854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.858033405202151) _gate_q_1;
}
gate xx_plus_yy_5108061424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.339343950354488) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5241648741277531) _gate_q_1;
  ry(-1.5241648741277531) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.339343950354488) _gate_q_0;
}
gate cu3_5108061184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2429202314697254) _gate_q_0;
  u1(-2.1097782531697447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6379473797481469, 0, -3.2429202314697254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6379473797481469, 5.35269848463947, 0) _gate_q_1;
}
gate xx_minus_yy_5108065312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.562406016775203) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.869841214625931) _gate_q_0;
  ry(-1.869841214625931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.562406016775203) _gate_q_1;
}
gate cu3_5108062624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5422717770426835) _gate_q_0;
  u1(2.3387566749401665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7572225739433608, 0, -3.5422717770426835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7572225739433608, 1.203515102102517, 0) _gate_q_1;
}
gate rzx_5108063104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.923087223221907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cp(4.401015112010363) _gate_q_9, _gate_q_7;
  crx(4.7255310724717265) _gate_q_3, _gate_q_2;
  crz(4.630481363761445) _gate_q_8, _gate_q_4;
  u3(2.915576232455872, 4.407949814414153, 5.40006181706532) _gate_q_5;
  rxx_5108060512(1.9876864796157805) _gate_q_1, _gate_q_0;
  cp(3.9521789626308723) _gate_q_6, _gate_q_10;
  u1(3.85195039484404) _gate_q_11;
  p(1.3697174947235378) _gate_q_10;
  xx_plus_yy_5108060464(2.5400762253793867, 1.2893846855144673) _gate_q_2, _gate_q_8;
  cu(2.6273392655769388, 0.6766114414072545, 2.175158408557232, 5.422421213804913) _gate_q_1, _gate_q_6;
  x _gate_q_9;
  crz(1.8470164478498234) _gate_q_0, _gate_q_3;
  cx _gate_q_5, _gate_q_11;
  t _gate_q_4;
  t _gate_q_7;
  dcx _gate_q_1, _gate_q_5;
  rz(2.9045970612155148) _gate_q_11;
  crx(4.781826807408638) _gate_q_9, _gate_q_8;
  cp(1.2235489789930674) _gate_q_4, _gate_q_3;
  ryy_5108058448(6.1693273083876825) _gate_q_0, _gate_q_7;
  sxdg _gate_q_2;
  ryy_5108058208(5.132772189721849) _gate_q_6, _gate_q_10;
  csx _gate_q_2, _gate_q_7;
  rzx_5108058256(4.009468789642531) _gate_q_0, _gate_q_3;
  id _gate_q_1;
  ryy_5108058160(1.8016663477165955) _gate_q_4, _gate_q_6;
  s _gate_q_9;
  cu1_5108062336(5.473796847097214) _gate_q_11, _gate_q_5;
  tdg _gate_q_10;
  y _gate_q_8;
  crz(4.393662194915564) _gate_q_3, _gate_q_11;
  rxx_5108061616(6.113814583380637) _gate_q_4, _gate_q_7;
  cry(4.69284785540621) _gate_q_10, _gate_q_9;
  cu1_5108059648(0.3464987644381015) _gate_q_5, _gate_q_6;
  rxx_5108061808(1.6665621986010004) _gate_q_2, _gate_q_8;
  rxx_5108061760(3.8213489529248235) _gate_q_1, _gate_q_0;
  cs _gate_q_3, _gate_q_4;
  u3(0.6201227401905498, 1.275990803987948, 1.1997412128040916) _gate_q_6;
  cz _gate_q_11, _gate_q_0;
  cu1_5108061664(0.23941923422760916) _gate_q_7, _gate_q_10;
  tdg _gate_q_9;
  cry(3.2172273086875456) _gate_q_1, _gate_q_8;
  rzx_5108061856(5.181739722936957) _gate_q_2, _gate_q_5;
  u1(1.8164801647477882) _gate_q_6;
  ch _gate_q_8, _gate_q_2;
  csx _gate_q_9, _gate_q_3;
  id _gate_q_11;
  xx_minus_yy_5108062096(4.721682660963708, 3.858033405202151) _gate_q_1, _gate_q_0;
  ry(0.04182722488575792) _gate_q_5;
  swap _gate_q_4, _gate_q_10;
  s _gate_q_7;
  sdg _gate_q_8;
  crx(4.7083475934683) _gate_q_3, _gate_q_7;
  crz(3.7941073713362563) _gate_q_9, _gate_q_1;
  csx _gate_q_6, _gate_q_0;
  rz(4.807068784415613) _gate_q_5;
  xx_plus_yy_5108061424(3.0483297482555063, 3.339343950354488) _gate_q_2, _gate_q_10;
  cu3_5108061184(1.2758947594962937, 5.35269848463947, 1.133141978299981) _gate_q_11, _gate_q_4;
  t _gate_q_2;
  xx_minus_yy_5108065312(3.739682429251862, 5.562406016775203) _gate_q_4, _gate_q_5;
  sxdg _gate_q_1;
  u3(2.314481092290919, 6.199921029250673, 2.5818074817352477) _gate_q_6;
  U(3.1781083047537564, 1.9103955244595239, 1.0037343197448505) _gate_q_3;
  crz(4.676238053815567) _gate_q_9, _gate_q_7;
  swap _gate_q_10, _gate_q_8;
  cu3_5108062624(1.5144451478867216, 1.203515102102517, 5.88102845198285) _gate_q_11, _gate_q_0;
  dcx _gate_q_5, _gate_q_3;
  rzx_5108063104(5.923087223221907) _gate_q_11, _gate_q_2;
  cy _gate_q_6, _gate_q_10;
  cz _gate_q_1, _gate_q_0;
  h _gate_q_4;
  cx _gate_q_9, _gate_q_8;
  id _gate_q_7;
}