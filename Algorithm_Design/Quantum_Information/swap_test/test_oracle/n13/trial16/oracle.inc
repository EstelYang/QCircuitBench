gate rzz_5072774464(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.259329676678544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072777632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.272178800580689) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.30504027756061847) _gate_q_1;
  ry(-0.30504027756061847) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.272178800580689) _gate_q_0;
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
gate rxx_5072778016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.327574082467335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072767840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.066943032312291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072767456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0597168189274484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072766496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.35766669038165344) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.498770120794042) _gate_q_1;
  ry(-2.498770120794042) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.35766669038165344) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072766400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5535172923719482) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0690303074707623) _gate_q_1;
  ry(-3.0690303074707623) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5535172923719482) _gate_q_0;
}
gate xx_minus_yy_5072775136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.979593803106825) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3555839787412577) _gate_q_0;
  ry(-0.3555839787412577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.979593803106825) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5072776912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2718091384424983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072773936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.204445531386305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072766064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.759041585307882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5072767408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4083378182951187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072768032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.819170608062107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072779552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2993394648923573) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.0862735545214856) _gate_q_0;
  ry(-0.0862735545214856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2993394648923573) _gate_q_1;
}
gate cu3_5072778352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5371948603674648) _gate_q_0;
  u1(1.3291314313349123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.60911699874022, 0, -2.5371948603674648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.60911699874022, 1.2080634290325523, 0) _gate_q_1;
}
gate cu3_5072767648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5259705794431326) _gate_q_0;
  u1(1.4074169408136534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.558294971476447, 0, -2.5259705794431326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.558294971476447, 1.118553638629479, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cx _gate_q_10, _gate_q_6;
  ry(1.7393308997943615) _gate_q_0;
  rzz_5072774464(5.259329676678544) _gate_q_2, _gate_q_5;
  cy _gate_q_9, _gate_q_3;
  xx_plus_yy_5072777632(0.6100805551212369, 6.272178800580689) _gate_q_4, _gate_q_7;
  ecr _gate_q_8, _gate_q_11;
  rxx_5072778016(4.327574082467335) _gate_q_1, _gate_q_12;
  id _gate_q_5;
  u1(5.162212854839858) _gate_q_3;
  rz(0.6566738622374152) _gate_q_9;
  ryy_5072767840(5.066943032312291) _gate_q_1, _gate_q_11;
  y _gate_q_8;
  u3(5.873602226049026, 6.081731266495369, 4.7298595426063) _gate_q_6;
  rzx_5072767456(2.0597168189274484) _gate_q_4, _gate_q_10;
  xx_plus_yy_5072766496(4.997540241588084, 0.35766669038165344) _gate_q_7, _gate_q_0;
  u3(6.020281894879366, 0.19322115267328024, 1.8367506955747703) _gate_q_12;
  u1(1.3681185629865593) _gate_q_2;
  ry(1.404668624512575) _gate_q_11;
  sx _gate_q_7;
  id _gate_q_0;
  csdg _gate_q_2, _gate_q_5;
  iswap _gate_q_10, _gate_q_1;
  ry(5.35655235491031) _gate_q_6;
  ecr _gate_q_12, _gate_q_9;
  u3(6.11114503214566, 2.565136984980085, 0.647558625424289) _gate_q_3;
  s _gate_q_4;
  sx _gate_q_8;
  xx_plus_yy_5072766400(6.138060614941525, 3.5535172923719482) _gate_q_5, _gate_q_0;
  xx_minus_yy_5072775136(0.7111679574825154, 1.979593803106825) _gate_q_3, _gate_q_12;
  u1(3.306507608930084) _gate_q_6;
  ecr _gate_q_10, _gate_q_7;
  dcx _gate_q_9, _gate_q_1;
  z _gate_q_4;
  rz(1.9726318139968106) _gate_q_2;
  ch _gate_q_8, _gate_q_11;
  u1(2.4102829111939474) _gate_q_3;
  tdg _gate_q_11;
  U(2.254714048137185, 2.8683896243042595, 0.2640839435127837) _gate_q_6;
  cx _gate_q_10, _gate_q_2;
  ry(6.116879826136779) _gate_q_1;
  rz(2.567152165186227) _gate_q_0;
  rzx_5072776912(1.2718091384424983) _gate_q_7, _gate_q_4;
  sxdg _gate_q_8;
  U(0.8637424238495088, 3.467432572122723, 4.4537848975492125) _gate_q_9;
  ry(1.583507992211458) _gate_q_12;
  t _gate_q_5;
  rzx_5072773936(6.204445531386305) _gate_q_0, _gate_q_3;
  rzz_5072766064(1.759041585307882) _gate_q_6, _gate_q_5;
  cz _gate_q_8, _gate_q_4;
  dcx _gate_q_7, _gate_q_9;
  cs _gate_q_12, _gate_q_1;
  tdg _gate_q_11;
  tdg _gate_q_2;
  u2(2.70628854801619, 4.671905198190638) _gate_q_10;
  cx _gate_q_6, _gate_q_3;
  x _gate_q_0;
  dcx _gate_q_10, _gate_q_7;
  iswap _gate_q_4, _gate_q_12;
  y _gate_q_5;
  u3(6.223680617399722, 4.090293051596862, 4.945728291226872) _gate_q_1;
  crx(3.793309096264694) _gate_q_9, _gate_q_11;
  cz _gate_q_8, _gate_q_2;
  s _gate_q_4;
  cu(3.4822393481009337, 2.48846832380298, 0.16776573277631177, 5.628736439369299) _gate_q_0, _gate_q_11;
  u2(4.775939062096232, 4.085146623272913) _gate_q_7;
  cy _gate_q_9, _gate_q_5;
  cp(1.488168727748337) _gate_q_12, _gate_q_2;
  id _gate_q_3;
  cry(1.3632950285563523) _gate_q_6, _gate_q_10;
  u2(4.056839798435087, 4.339570375373122) _gate_q_8;
  sxdg _gate_q_1;
  rxx_5072767408(1.4083378182951187) _gate_q_9, _gate_q_4;
  dcx _gate_q_5, _gate_q_7;
  rzz_5072768032(4.819170608062107) _gate_q_6, _gate_q_12;
  crx(2.7987116499750453) _gate_q_0, _gate_q_3;
  xx_minus_yy_5072779552(0.1725471090429712, 1.2993394648923573) _gate_q_2, _gate_q_10;
  cu(1.3458489960023452, 0.054102549545753456, 0.631972926932028, 4.853046499015732) _gate_q_8, _gate_q_1;
  rz(6.168297175336084) _gate_q_11;
  crx(3.6399769253550898) _gate_q_1, _gate_q_8;
  id _gate_q_6;
  cu3_5072778352(3.21823399748044, 1.2080634290325523, 3.866326291702377) _gate_q_4, _gate_q_2;
  iswap _gate_q_12, _gate_q_11;
  cz _gate_q_9, _gate_q_10;
  cu3_5072767648(5.116589942952894, 1.118553638629479, 3.933387520256786) _gate_q_3, _gate_q_0;
  ecr _gate_q_5, _gate_q_7;
}
gate cu1_5072768224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.31761587276672) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.31761587276672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.31761587276672) _gate_q_1;
}
gate xx_plus_yy_5072772544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.579496456893383) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4102213008370982) _gate_q_1;
  ry(-0.4102213008370982) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.579496456893383) _gate_q_0;
}
gate rzz_5072775808(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.48404033365175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072769616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.558670901539444) _gate_q_0;
  u1(-1.4943668539074553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.291863526547678, 0, -3.558670901539444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.291863526547678, 5.0530377554468995, 0) _gate_q_1;
}
gate cu3_5072774080(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.3471079584389134) _gate_q_0;
  u1(0.6393542431540573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6020954459657926, 0, -1.3471079584389134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6020954459657926, 0.7077537152848561, 0) _gate_q_1;
}
gate rzz_5072776288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.133841971100892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072774320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.524169289387742) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1075050750030502) _gate_q_0;
  ry(-1.1075050750030502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.524169289387742) _gate_q_1;
}
gate cu3_5072769472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6079073275092632) _gate_q_0;
  u1(-1.0203021022948335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7590194951522009, 0, -2.6079073275092632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7590194951522009, 3.6282094298040968, 0) _gate_q_1;
}
gate rxx_5072769280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0918845987089087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072769424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.333534722324459) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.333534722324459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.333534722324459) _gate_q_1;
}
gate cu3_5072771440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.646498369592689) _gate_q_0;
  u1(-0.45141906874987714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.665437673352864, 0, -3.646498369592689) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.665437673352864, 4.0979174383425665, 0) _gate_q_1;
}
gate r_5072773216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.014060282174537, 2.2010971945884896, -2.2010971945884896) _gate_q_0;
}
gate cu3_5072774608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.7578130141355786) _gate_q_0;
  u1(0.02522681403250937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4810985039219364, 0, -5.7578130141355786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4810985039219364, 5.732586200103069, 0) _gate_q_1;
}
gate cu3_5072766304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.6755635724703275) _gate_q_0;
  u1(0.7372420273209404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5314422365564972, 0, -4.6755635724703275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5314422365564972, 3.938321545149387, 0) _gate_q_1;
}
gate r_5072767264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.509410757665189, 3.571445783239268, -3.571445783239268) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cu1_5072768224(4.63523174553344) _gate_q_8, _gate_q_11;
  swap _gate_q_6, _gate_q_7;
  tdg _gate_q_4;
  rz(5.435292133432374) _gate_q_5;
  U(0.34503704346448266, 0.7694187853589718, 0.6700499075217948) _gate_q_2;
  cx _gate_q_9, _gate_q_10;
  xx_plus_yy_5072772544(0.8204426016741964, 3.579496456893383) _gate_q_1, _gate_q_3;
  tdg _gate_q_0;
  u1(5.7878046111747485) _gate_q_12;
  u3(6.274743012218711, 5.6243574073074205, 4.1974211069455025) _gate_q_8;
  sxdg _gate_q_5;
  ch _gate_q_10, _gate_q_9;
  swap _gate_q_1, _gate_q_2;
  z _gate_q_3;
  crx(4.606411598359804) _gate_q_7, _gate_q_12;
  u1(4.488957742903977) _gate_q_6;
  x _gate_q_0;
  ry(5.2518336305679485) _gate_q_11;
  U(3.5030782044378, 5.143307041617533, 0.7496875118723132) _gate_q_4;
  s _gate_q_3;
  t _gate_q_4;
  y _gate_q_2;
  rzz_5072775808(4.48404033365175) _gate_q_1, _gate_q_12;
  swap _gate_q_0, _gate_q_9;
  cu3_5072769616(0.583727053095356, 5.0530377554468995, 2.064304047631989) _gate_q_6, _gate_q_7;
  csdg _gate_q_5, _gate_q_10;
  cu3_5072774080(5.204190891931585, 0.7077537152848561, 1.9864622015929707) _gate_q_11, _gate_q_8;
  rzz_5072776288(6.133841971100892) _gate_q_6, _gate_q_5;
  id _gate_q_4;
  xx_minus_yy_5072774320(2.2150101500061004, 5.524169289387742) _gate_q_7, _gate_q_10;
  U(3.521321409622285, 1.7827924248438205, 2.963752033591443) _gate_q_9;
  cu3_5072769472(1.5180389903044018, 3.6282094298040968, 1.5876052252144297) _gate_q_2, _gate_q_8;
  rxx_5072769280(1.0918845987089087) _gate_q_1, _gate_q_11;
  h _gate_q_0;
  s _gate_q_3;
  h _gate_q_12;
  t _gate_q_6;
  cu1_5072769424(4.667069444648918) _gate_q_10, _gate_q_9;
  rx(5.124846428387678) _gate_q_1;
  cx _gate_q_0, _gate_q_12;
  swap _gate_q_7, _gate_q_5;
  dcx _gate_q_3, _gate_q_11;
  u1(4.826195678752282) _gate_q_2;
  cz _gate_q_8, _gate_q_4;
  id _gate_q_12;
  iswap _gate_q_4, _gate_q_1;
  swap _gate_q_2, _gate_q_9;
  ry(0.02317724688087099) _gate_q_6;
  ecr _gate_q_8, _gate_q_5;
  y _gate_q_7;
  cu3_5072771440(1.330875346705728, 4.0979174383425665, 3.195079300842812) _gate_q_11, _gate_q_3;
  cu(0.3667788449501641, 1.1617742663727268, 0.8042083011050004, 5.464839643513163) _gate_q_0, _gate_q_10;
  y _gate_q_9;
  cx _gate_q_1, _gate_q_7;
  csdg _gate_q_2, _gate_q_12;
  crz(4.224564030689018) _gate_q_3, _gate_q_8;
  cy _gate_q_0, _gate_q_5;
  dcx _gate_q_11, _gate_q_4;
  p(1.648813470142194) _gate_q_10;
  r_5072773216(6.014060282174537, 3.771893521383386) _gate_q_6;
  ecr _gate_q_1, _gate_q_9;
  cry(4.062038954161409) _gate_q_11, _gate_q_5;
  u1(3.233066292731743) _gate_q_10;
  z _gate_q_8;
  ecr _gate_q_2, _gate_q_4;
  dcx _gate_q_6, _gate_q_12;
  U(5.429628811225394, 4.224416354902792, 0.621237246011319) _gate_q_0;
  y _gate_q_7;
  sx _gate_q_3;
  cy _gate_q_6, _gate_q_7;
  cu3_5072774608(4.962197007843873, 5.732586200103069, 5.7830398281680875) _gate_q_4, _gate_q_11;
  rz(3.468899166314795) _gate_q_10;
  h _gate_q_3;
  t _gate_q_8;
  cz _gate_q_1, _gate_q_0;
  sdg _gate_q_9;
  rz(3.1840271692337625) _gate_q_12;
  z _gate_q_5;
  u2(1.5224020870671844, 3.2406792290744577) _gate_q_2;
  cu3_5072766304(1.0628844731129945, 3.938321545149387, 5.412805599791268) _gate_q_0, _gate_q_4;
  z _gate_q_8;
  r_5072767264(3.509410757665189, 5.142242110034164) _gate_q_5;
  cy _gate_q_12, _gate_q_10;
  iswap _gate_q_2, _gate_q_3;
  ecr _gate_q_9, _gate_q_6;
  crx(4.494786790657872) _gate_q_1, _gate_q_7;
  s _gate_q_11;
}