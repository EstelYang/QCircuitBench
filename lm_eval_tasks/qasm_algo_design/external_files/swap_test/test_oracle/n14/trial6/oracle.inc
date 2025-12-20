gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107726096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.2966698850316964) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0466414318058037) _gate_q_1;
  ry(-2.0466414318058037) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.2966698850316964) _gate_q_0;
}
gate cu3_5107724656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5058401846353755) _gate_q_0;
  u1(2.2210094771233653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2062393913314053, 0, -2.5058401846353755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2062393913314053, 0.2848307075120101, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5107717360(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.582283849505335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107715872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.433595872928768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107720192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.619322631456791) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107727536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7115183921630492) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5107712128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.23277755036234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107718992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3122586516140822) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3122586516140822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3122586516140822) _gate_q_1;
}
gate xx_plus_yy_5107717072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7027944770210228) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9815201663537712) _gate_q_1;
  ry(-0.9815201663537712) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7027944770210228) _gate_q_0;
}
gate rxx_5107718080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.562396273935638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107727632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9570855312145774) _gate_q_0;
  u1(1.3328620202944812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.748024412218092, 0, -1.9570855312145774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.748024412218092, 0.6242235109200964, 0) _gate_q_1;
}
gate cu3_5107721488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.657999769205781) _gate_q_0;
  u1(0.07763577209241546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8188333356149622, 0, -2.657999769205781) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8188333356149622, 2.580363997113366, 0) _gate_q_1;
}
gate rzz_5107722976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4701809121132468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5107722112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.17274112098168, 3.4991120312428237, -3.4991120312428237) _gate_q_0;
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
gate rzx_5107726672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.066586159017779) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107722544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7850634489235038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107727152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3326412020902267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  swap _gate_q_4, _gate_q_2;
  rx(0.7182161162274143) _gate_q_1;
  xx_plus_yy_5107726096(4.093282863611607, 4.2966698850316964) _gate_q_12, _gate_q_3;
  swap _gate_q_0, _gate_q_7;
  cu3_5107724656(2.4124787826628107, 0.2848307075120101, 4.726849661758741) _gate_q_9, _gate_q_11;
  ry(3.3512018867069044) _gate_q_13;
  crz(1.3398875847106337) _gate_q_10, _gate_q_6;
  rz(2.9625353257789397) _gate_q_5;
  u1(3.9706291533037668) _gate_q_8;
  cu(6.144086313739051, 3.4667364689303373, 2.2671441084320305, 0.1268183777257507) _gate_q_0, _gate_q_1;
  csdg _gate_q_3, _gate_q_11;
  cp(4.811695533703983) _gate_q_12, _gate_q_6;
  rzz_5107717360(3.582283849505335) _gate_q_7, _gate_q_2;
  s _gate_q_9;
  ryy_5107715872(5.433595872928768) _gate_q_8, _gate_q_13;
  swap _gate_q_5, _gate_q_4;
  ry(5.690244331672024) _gate_q_10;
  cy _gate_q_0, _gate_q_11;
  rxx_5107720192(4.619322631456791) _gate_q_10, _gate_q_7;
  rz(1.48767367529132) _gate_q_6;
  t _gate_q_4;
  cy _gate_q_1, _gate_q_12;
  u1(4.184377781116038) _gate_q_3;
  z _gate_q_2;
  ryy_5107727536(1.7115183921630492) _gate_q_9, _gate_q_8;
  U(2.1537146518214874, 0.14855422211146116, 0.9028882634208337) _gate_q_5;
  t _gate_q_13;
  csx _gate_q_9, _gate_q_13;
  rx(3.8582817746174807) _gate_q_1;
  csx _gate_q_0, _gate_q_7;
  crz(1.0999298787375678) _gate_q_6, _gate_q_3;
  ch _gate_q_11, _gate_q_4;
  cs _gate_q_2, _gate_q_12;
  crz(3.351998269246542) _gate_q_8, _gate_q_5;
  u2(0.28775116180946336, 1.927162646383311) _gate_q_10;
  s _gate_q_6;
  s _gate_q_10;
  rzx_5107712128(6.23277755036234) _gate_q_3, _gate_q_11;
  cu1_5107718992(2.6245173032281643) _gate_q_9, _gate_q_1;
  xx_plus_yy_5107717072(1.9630403327075423, 1.7027944770210228) _gate_q_13, _gate_q_8;
  crx(4.248377626905176) _gate_q_4, _gate_q_7;
  x _gate_q_0;
  p(2.5708862077760806) _gate_q_2;
  sdg _gate_q_12;
  u1(1.5119436958743904) _gate_q_5;
  cx _gate_q_8, _gate_q_1;
  cp(1.8650907463517636) _gate_q_0, _gate_q_3;
  h _gate_q_12;
  cy _gate_q_5, _gate_q_9;
  t _gate_q_4;
  U(1.0176587955877263, 5.660031050796532, 1.1126201271869804) _gate_q_6;
  rxx_5107718080(5.562396273935638) _gate_q_11, _gate_q_13;
  h _gate_q_2;
  id _gate_q_7;
  t _gate_q_10;
  h _gate_q_13;
  cu3_5107727632(3.496048824436184, 0.6242235109200964, 3.2899475515090586) _gate_q_6, _gate_q_12;
  ch _gate_q_0, _gate_q_1;
  u3(2.6968409576082992, 4.341017898395533, 6.282543052107649) _gate_q_11;
  id _gate_q_5;
  rz(4.864713717472983) _gate_q_2;
  cp(4.890220478657404) _gate_q_4, _gate_q_7;
  id _gate_q_8;
  sx _gate_q_9;
  y _gate_q_10;
  h _gate_q_3;
  t _gate_q_12;
  cu3_5107721488(3.6376666712299244, 2.580363997113366, 2.7356355412981967) _gate_q_1, _gate_q_10;
  rz(0.7784967950128526) _gate_q_5;
  h _gate_q_13;
  z _gate_q_2;
  rzz_5107722976(3.4701809121132468) _gate_q_11, _gate_q_4;
  iswap _gate_q_0, _gate_q_7;
  swap _gate_q_8, _gate_q_9;
  cy _gate_q_6, _gate_q_3;
  ry(3.1774123747605887) _gate_q_8;
  r_5107722112(2.17274112098168, 5.06990835803772) _gate_q_2;
  ecr _gate_q_3, _gate_q_7;
  rzx_5107726672(5.066586159017779) _gate_q_13, _gate_q_6;
  csdg _gate_q_11, _gate_q_0;
  y _gate_q_1;
  rz(3.678037059021218) _gate_q_4;
  cs _gate_q_9, _gate_q_5;
  cz _gate_q_10, _gate_q_12;
  ch _gate_q_12, _gate_q_10;
  cx _gate_q_13, _gate_q_1;
  ch _gate_q_2, _gate_q_11;
  rzz_5107722544(3.7850634489235038) _gate_q_9, _gate_q_6;
  ryy_5107727152(1.3326412020902267) _gate_q_0, _gate_q_3;
  U(0.11306088640110781, 1.3921992145555633, 2.9055730777238726) _gate_q_8;
  rx(1.4398603182548222) _gate_q_5;
  cry(0.20346222341249928) _gate_q_7, _gate_q_4;
}
gate ryy_5116251984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.49263020938892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5116262880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.27107025760001613) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2122370106679877) _gate_q_1;
  ry(-0.2122370106679877) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.27107025760001613) _gate_q_0;
}
gate r_5116249008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7207684792577003, 2.7513065586146803, -2.7513065586146803) _gate_q_0;
}
gate xx_minus_yy_5116249200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9962330262832353) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0007440932216176) _gate_q_0;
  ry(-2.0007440932216176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9962330262832353) _gate_q_1;
}
gate cu3_5116252272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8142551438142056) _gate_q_0;
  u1(2.7915662278257476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2951265879700522, 0, -2.8142551438142056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2951265879700522, 0.022688915988458083, 0) _gate_q_1;
}
gate rxx_5116262976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2207627753040755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5116250736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4246832354017236) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0602514008338864) _gate_q_1;
  ry(-1.0602514008338864) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4246832354017236) _gate_q_0;
}
gate rzx_5116261440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.646491423680342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107611792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.883926160849129) _gate_q_0;
  u1(1.0109592503296922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3310496928990359, 0, -2.883926160849129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3310496928990359, 1.8729669105194366, 0) _gate_q_1;
}
gate rxx_5107605792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.329185704789291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107612512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.4562549550806585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107604256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.501741522132243) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8477886836256476) _gate_q_1;
  ry(-2.8477886836256476) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.501741522132243) _gate_q_0;
}
gate r_5107606512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.174740430003549, -1.5585583171797386, 1.5585583171797386) _gate_q_0;
}
gate xx_plus_yy_5107602288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.9532806696524565) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0172835131244513) _gate_q_1;
  ry(-2.0172835131244513) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.9532806696524565) _gate_q_0;
}
gate r_5107606416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7002555789297356, 1.6748041956529653, -1.6748041956529653) _gate_q_0;
}
gate r_5107606176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.894734992117989, -0.6352942223278476, 0.6352942223278476) _gate_q_0;
}
gate r_5107598784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.723045887545915, 2.5899876770192787, -2.5899876770192787) _gate_q_0;
}
gate cu3_5107600368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.385511452184252) _gate_q_0;
  u1(-0.7425687484724316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1823858875768022, 0, -1.385511452184252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1823858875768022, 2.1280802006566835, 0) _gate_q_1;
}
gate rzz_5107608480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.36679428727758) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  u1(5.468056951529704) _gate_q_4;
  iswap _gate_q_6, _gate_q_12;
  csx _gate_q_2, _gate_q_0;
  sx _gate_q_11;
  ryy_5116251984(5.49263020938892) _gate_q_1, _gate_q_13;
  dcx _gate_q_3, _gate_q_8;
  ecr _gate_q_10, _gate_q_9;
  u2(2.278446256247345, 3.4415080157466194) _gate_q_5;
  sx _gate_q_7;
  h _gate_q_2;
  U(5.242716468556823, 0.6734643442224945, 3.8305575674603203) _gate_q_5;
  u1(0.026062047560114276) _gate_q_13;
  xx_plus_yy_5116262880(0.4244740213359754, 0.27107025760001613) _gate_q_7, _gate_q_9;
  sdg _gate_q_6;
  sdg _gate_q_0;
  r_5116249008(2.7207684792577003, 4.322102885409577) _gate_q_1;
  cp(4.928606648522713) _gate_q_8, _gate_q_4;
  xx_minus_yy_5116249200(4.001488186443235, 2.9962330262832353) _gate_q_10, _gate_q_12;
  crz(2.9021130910640456) _gate_q_11, _gate_q_3;
  cry(2.8573491837422424) _gate_q_8, _gate_q_2;
  ch _gate_q_9, _gate_q_3;
  cu(0.3607865685991933, 0.7532255309666036, 2.8930232508634464, 0.0426687140450476) _gate_q_11, _gate_q_13;
  U(5.43107481847234, 0.02612169189208545, 3.6596995572804456) _gate_q_4;
  cu3_5116252272(2.5902531759401044, 0.022688915988458083, 5.605821371639953) _gate_q_5, _gate_q_0;
  sdg _gate_q_1;
  dcx _gate_q_7, _gate_q_12;
  h _gate_q_10;
  u1(4.571371578064925) _gate_q_6;
  ecr _gate_q_1, _gate_q_0;
  ecr _gate_q_11, _gate_q_7;
  rxx_5116262976(1.2207627753040755) _gate_q_6, _gate_q_3;
  xx_plus_yy_5116250736(2.1205028016677727, 0.4246832354017236) _gate_q_4, _gate_q_12;
  t _gate_q_13;
  crx(1.1622628163527888) _gate_q_9, _gate_q_5;
  dcx _gate_q_8, _gate_q_10;
  id _gate_q_2;
  csdg _gate_q_1, _gate_q_8;
  p(4.369193874109411) _gate_q_11;
  cry(3.448593364152236) _gate_q_5, _gate_q_6;
  ch _gate_q_3, _gate_q_13;
  swap _gate_q_9, _gate_q_0;
  rzx_5116261440(4.646491423680342) _gate_q_7, _gate_q_10;
  s _gate_q_12;
  u2(3.7222139120933546, 0.8814963890640966) _gate_q_4;
  tdg _gate_q_2;
  s _gate_q_13;
  id _gate_q_3;
  ch _gate_q_1, _gate_q_10;
  u2(2.9313910155610436, 5.593507046250959) _gate_q_0;
  cz _gate_q_12, _gate_q_6;
  rz(3.158331403603913) _gate_q_2;
  cu3_5107611792(2.6620993857980717, 1.8729669105194366, 3.894885411178821) _gate_q_4, _gate_q_9;
  ry(2.7319870478515416) _gate_q_5;
  cry(6.0117427810364825) _gate_q_7, _gate_q_11;
  x _gate_q_8;
  rxx_5107605792(5.329185704789291) _gate_q_0, _gate_q_3;
  rxx_5107612512(5.4562549550806585) _gate_q_1, _gate_q_5;
  csx _gate_q_7, _gate_q_2;
  cp(1.3757556009569372) _gate_q_8, _gate_q_10;
  xx_plus_yy_5107604256(5.695577367251295, 5.501741522132243) _gate_q_4, _gate_q_11;
  z _gate_q_12;
  iswap _gate_q_6, _gate_q_13;
  r_5107606512(3.174740430003549, 0.012238009615157957) _gate_q_9;
  ry(2.723389968968535) _gate_q_5;
  xx_plus_yy_5107602288(4.034567026248903, 4.9532806696524565) _gate_q_10, _gate_q_2;
  sxdg _gate_q_7;
  cy _gate_q_13, _gate_q_0;
  sdg _gate_q_6;
  dcx _gate_q_11, _gate_q_12;
  crx(3.2154895906889553) _gate_q_3, _gate_q_1;
  sx _gate_q_4;
  r_5107606416(3.7002555789297356, 3.245600522447862) _gate_q_8;
  r_5107606176(4.894734992117989, 0.935502104467049) _gate_q_9;
  r_5107598784(2.723045887545915, 4.160784003814175) _gate_q_8;
  cry(4.4355157888454) _gate_q_7, _gate_q_3;
  u3(2.025693077414885, 6.137013499108297, 5.093615515272607) _gate_q_12;
  ecr _gate_q_2, _gate_q_13;
  cu3_5107600368(0.3647717751536044, 2.1280802006566835, 0.6429427037118203) _gate_q_10, _gate_q_6;
  rx(0.7902725319337913) _gate_q_4;
  u1(2.298097837847815) _gate_q_11;
  y _gate_q_0;
  sx _gate_q_1;
  cp(0.2611497902847032) _gate_q_9, _gate_q_5;
  x _gate_q_10;
  id _gate_q_2;
  rzz_5107608480(3.36679428727758) _gate_q_8, _gate_q_13;
  cry(4.183910435277073) _gate_q_9, _gate_q_4;
  dcx _gate_q_12, _gate_q_7;
  cz _gate_q_11, _gate_q_1;
  z _gate_q_0;
  y _gate_q_3;
  u3(0.012937881799954639, 2.2848000516203673, 5.259580114787927) _gate_q_5;
  h _gate_q_6;
}