gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5105276336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.985410194423974, -1.2612674355355613, 1.2612674355355613) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105281088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.761312759289311) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3945661575359908) _gate_q_0;
  ry(-0.3945661575359908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.761312759289311) _gate_q_1;
}
gate r_5105286992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.2588465732610645, -1.0713681614468271, 1.0713681614468271) _gate_q_0;
}
gate rzx_5105285552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.863950424246417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_minus_yy_5105283536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0101540201006325) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.028940388804814) _gate_q_0;
  ry(-1.028940388804814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0101540201006325) _gate_q_1;
}
gate xx_minus_yy_5105282096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7478467418985187) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.359522964786187) _gate_q_0;
  ry(-2.359522964786187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7478467418985187) _gate_q_1;
}
gate xx_minus_yy_5105274800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.828289646665687) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.229259280222782) _gate_q_0;
  ry(-2.229259280222782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.828289646665687) _gate_q_1;
}
gate rzz_5105284112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7814606262014648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105271536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6845066760201783) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6845066760201783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6845066760201783) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105281664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9006972017067203, 1.168096594403052, -1.168096594403052) _gate_q_0;
}
gate rzz_5105281520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.19624975259757785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  id _gate_q_6;
  ry(3.076013633016201) _gate_q_4;
  cy _gate_q_7, _gate_q_3;
  cu(3.462158418863854, 0.22847370525994007, 2.9241326417434923, 4.439885179939211) _gate_q_5, _gate_q_8;
  cu(3.3677136473776974, 2.0959963157669614, 1.2528372816922688, 5.49215680245409) _gate_q_1, _gate_q_2;
  y _gate_q_0;
  ry(1.5236164088938355) _gate_q_0;
  U(6.197166764306747, 2.3416827668530162, 3.0103227783593693) _gate_q_8;
  t _gate_q_4;
  iswap _gate_q_7, _gate_q_3;
  r_5105276336(2.985410194423974, 0.3095288912593352) _gate_q_2;
  u3(2.9570128853762245, 3.3334873756084833, 3.135638274922692) _gate_q_1;
  z _gate_q_6;
  y _gate_q_5;
  xx_minus_yy_5105281088(0.7891323150719816, 2.761312759289311) _gate_q_5, _gate_q_2;
  rx(2.7268045910754406) _gate_q_4;
  u3(4.59633318133082, 2.4893387198589045, 0.6131570640748231) _gate_q_1;
  cry(0.48561173910145367) _gate_q_6, _gate_q_3;
  cz _gate_q_8, _gate_q_7;
  s _gate_q_0;
  z _gate_q_4;
  z _gate_q_6;
  sdg _gate_q_7;
  swap _gate_q_3, _gate_q_0;
  h _gate_q_8;
  r_5105286992(4.2588465732610645, 0.4994281653480694) _gate_q_5;
  rzx_5105285552(5.863950424246417) _gate_q_2, _gate_q_1;
  cry(3.290268640165814) _gate_q_4, _gate_q_2;
  sdg _gate_q_7;
  p(5.789168601812425) _gate_q_0;
  rz(5.256726037491492) _gate_q_1;
  u3(0.38538722309027984, 1.8515074155010156, 1.7182513320265658) _gate_q_6;
  U(3.0035497346931814, 4.2492756076016684, 0.24648007545843875) _gate_q_8;
  ecr _gate_q_5, _gate_q_3;
  rx(2.8723202964377483) _gate_q_7;
  s _gate_q_3;
  xx_minus_yy_5105283536(2.057880777609628, 1.0101540201006325) _gate_q_2, _gate_q_4;
  ry(2.700031477491274) _gate_q_0;
  xx_minus_yy_5105282096(4.719045929572374, 0.7478467418985187) _gate_q_8, _gate_q_1;
  xx_minus_yy_5105274800(4.458518560445564, 5.828289646665687) _gate_q_5, _gate_q_6;
  rzz_5105284112(0.7814606262014648) _gate_q_4, _gate_q_6;
  cry(3.5684824524546004) _gate_q_5, _gate_q_8;
  cu1_5105271536(3.3690133520403567) _gate_q_2, _gate_q_7;
  u2(2.4303244994727864, 0.265829109390787) _gate_q_0;
  sdg _gate_q_1;
  tdg _gate_q_3;
  dcx _gate_q_6, _gate_q_8;
  rz(4.072927974957795) _gate_q_5;
  r_5105281664(3.9006972017067203, 2.7388929211979485) _gate_q_3;
  iswap _gate_q_0, _gate_q_2;
  id _gate_q_7;
  rx(4.136485474832298) _gate_q_4;
  s _gate_q_1;
  crz(5.926139195421872) _gate_q_5, _gate_q_0;
  cx _gate_q_3, _gate_q_2;
  h _gate_q_1;
  rzz_5105281520(0.19624975259757785) _gate_q_4, _gate_q_7;
  cs _gate_q_6, _gate_q_8;
}
gate xx_minus_yy_5105276240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.398548143974123) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.373500756073183) _gate_q_0;
  ry(-1.373500756073183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.398548143974123) _gate_q_1;
}
gate ryy_5105277824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.05229550540123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105271056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.010727874022727) _gate_q_0;
  u1(-0.4953691844475099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4304269132867988, 0, -5.010727874022727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4304269132867988, 5.506097058470237, 0) _gate_q_1;
}
gate ryy_5105284736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29849009210256144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105278448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.670713304405817) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.670713304405817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.670713304405817) _gate_q_1;
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
gate r_5105277152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1265680573520167, 2.802718126707428, -2.802718126707428) _gate_q_0;
}
gate cu3_5105271872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7025148283489306) _gate_q_0;
  u1(-0.78168770406987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.28260959449118483, 0, -3.7025148283489306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.28260959449118483, 4.4842025324188, 0) _gate_q_1;
}
gate cu3_5105273552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8888851755346625) _gate_q_0;
  u1(1.291693553301836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9703872186293886, 0, -4.8888851755346625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9703872186293886, 3.597191622232826, 0) _gate_q_1;
}
gate r_5105275040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.100286700866518, 1.2345229440323866, -1.2345229440323866) _gate_q_0;
}
gate rzz_5105279168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.372478754100476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cry(4.341210153820825) _gate_q_8, _gate_q_1;
  s _gate_q_2;
  sdg _gate_q_7;
  ry(3.5610021117849837) _gate_q_4;
  xx_minus_yy_5105276240(2.747001512146366, 5.398548143974123) _gate_q_6, _gate_q_0;
  t _gate_q_3;
  y _gate_q_5;
  u2(0.7313918358988393, 0.7522468089511702) _gate_q_0;
  cz _gate_q_6, _gate_q_8;
  swap _gate_q_2, _gate_q_5;
  u2(1.2379839014840905, 0.6062350926544027) _gate_q_1;
  cu(2.31934861222688, 2.506401979513561, 5.446568594564375, 2.3091468088734897) _gate_q_3, _gate_q_4;
  rz(3.467364965511503) _gate_q_7;
  ryy_5105277824(5.05229550540123) _gate_q_8, _gate_q_2;
  crx(4.066123080036468) _gate_q_5, _gate_q_4;
  p(3.1140295999321848) _gate_q_6;
  ry(5.988055947799848) _gate_q_3;
  s _gate_q_7;
  ry(6.102144412003367) _gate_q_1;
  rx(2.2930736980604127) _gate_q_0;
  cu3_5105271056(2.8608538265735977, 5.506097058470237, 4.515358689575217) _gate_q_7, _gate_q_5;
  U(5.1100323681654904, 3.097432224762823, 0.13752296269235612) _gate_q_2;
  cu(2.7928818292512076, 4.610226480274565, 3.0242182355731044, 5.234857983535891) _gate_q_8, _gate_q_1;
  iswap _gate_q_4, _gate_q_3;
  cz _gate_q_0, _gate_q_6;
  sx _gate_q_3;
  ryy_5105284736(0.29849009210256144) _gate_q_5, _gate_q_7;
  cu1_5105278448(3.341426608811634) _gate_q_6, _gate_q_8;
  csx _gate_q_4, _gate_q_1;
  u2(3.864906368282158, 6.23769547925929) _gate_q_0;
  U(5.184038275191645, 1.0397242416748547, 4.4689329784058875) _gate_q_2;
  u1(4.71933008288821) _gate_q_6;
  dcx _gate_q_8, _gate_q_3;
  r_5105277152(3.1265680573520167, 4.373514453502325) _gate_q_1;
  sxdg _gate_q_5;
  rx(1.9417595821845441) _gate_q_7;
  cu3_5105271872(0.5652191889823697, 4.4842025324188, 2.9208271242790604) _gate_q_4, _gate_q_0;
  sx _gate_q_2;
  x _gate_q_7;
  cu3_5105273552(1.9407744372587772, 3.597191622232826, 6.180578728836498) _gate_q_0, _gate_q_2;
  r_5105275040(2.100286700866518, 2.805319270827283) _gate_q_5;
  ry(4.405185394955814) _gate_q_3;
  id _gate_q_8;
  swap _gate_q_4, _gate_q_6;
  x _gate_q_1;
  id _gate_q_5;
  u3(2.970459256744025, 1.1331038721264224, 2.6553262641404336) _gate_q_1;
  dcx _gate_q_2, _gate_q_8;
  crx(5.239353860812552) _gate_q_7, _gate_q_4;
  cs _gate_q_3, _gate_q_0;
  h _gate_q_6;
  U(4.422719481535185, 6.041572347148608, 5.232431365659441) _gate_q_2;
  cu(0.6170137686770816, 4.013914351726546, 0.715011716905429, 3.955561780286462) _gate_q_6, _gate_q_8;
  rz(6.0400363540262) _gate_q_0;
  iswap _gate_q_3, _gate_q_4;
  rzz_5105279168(4.372478754100476) _gate_q_7, _gate_q_5;
  u1(2.705308954848261) _gate_q_1;
}