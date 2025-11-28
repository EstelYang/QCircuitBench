gate rzx_5106110240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5009474863445202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106113504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9321443078319048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106112592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8684180673226476) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9980677291079851) _gate_q_0;
  ry(-0.9980677291079851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8684180673226476) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5106113264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.693722232121615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate r_5106385120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.221487090624134, 1.910427400410422, -1.910427400410422) _gate_q_0;
}
gate rzx_5106395152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.177979874747244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106395200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4052472519350876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106392800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.038093861920044) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.654925239737199) _gate_q_1;
  ry(-0.654925239737199) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.038093861920044) _gate_q_0;
}
gate rzx_5106389344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.247809387833695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106400720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.644678413389547) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5001069281314656) _gate_q_0;
  ry(-2.5001069281314656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.644678413389547) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105510704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.056464541509778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105512720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4857186909913684, 1.4326419513593516, -1.4326419513593516) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rzx_5106110240(2.5009474863445202) _gate_q_2, _gate_q_5;
  sx _gate_q_6;
  z _gate_q_4;
  ch _gate_q_1, _gate_q_8;
  ch _gate_q_3, _gate_q_7;
  s _gate_q_0;
  cz _gate_q_2, _gate_q_7;
  ryy_5106113504(0.9321443078319048) _gate_q_6, _gate_q_8;
  xx_minus_yy_5106112592(1.9961354582159703, 3.8684180673226476) _gate_q_0, _gate_q_4;
  cry(6.170458792874737) _gate_q_5, _gate_q_1;
  z _gate_q_3;
  x _gate_q_3;
  p(4.988580316474715) _gate_q_6;
  sx _gate_q_5;
  csdg _gate_q_0, _gate_q_8;
  cy _gate_q_1, _gate_q_4;
  rxx_5106113264(1.693722232121615) _gate_q_2, _gate_q_7;
  u1(4.11088621566682) _gate_q_3;
  csdg _gate_q_0, _gate_q_6;
  u3(4.060753170493839, 2.8162368667959328, 5.263191668457632) _gate_q_5;
  ry(3.9655839556261574) _gate_q_2;
  tdg _gate_q_7;
  u3(2.3057997548786746, 1.8556558305430428, 1.6352504677742348) _gate_q_8;
  u2(3.9963245349203422, 3.712944271605031) _gate_q_4;
  u2(0.8062876639644669, 2.992724621132081) _gate_q_1;
  u2(1.2154039061822792, 5.57331626440149) _gate_q_0;
  ecr _gate_q_8, _gate_q_4;
  cx _gate_q_5, _gate_q_7;
  r_5106385120(5.221487090624134, 3.4812237272053186) _gate_q_6;
  tdg _gate_q_2;
  y _gate_q_3;
  sxdg _gate_q_1;
  s _gate_q_0;
  y _gate_q_6;
  rzx_5106395152(3.177979874747244) _gate_q_2, _gate_q_7;
  rxx_5106395200(2.4052472519350876) _gate_q_8, _gate_q_5;
  xx_plus_yy_5106392800(1.309850479474398, 4.038093861920044) _gate_q_4, _gate_q_3;
  rx(4.101133088447398) _gate_q_1;
  rzx_5106389344(4.247809387833695) _gate_q_5, _gate_q_7;
  xx_minus_yy_5106400720(5.000213856262931, 5.644678413389547) _gate_q_2, _gate_q_1;
  ecr _gate_q_6, _gate_q_3;
  u2(5.4101920644728185, 1.9345075365418691) _gate_q_4;
  cy _gate_q_0, _gate_q_8;
  iswap _gate_q_2, _gate_q_5;
  U(0.610848933509022, 0.1313018224993451, 0.9651423143396513) _gate_q_8;
  csdg _gate_q_3, _gate_q_1;
  ryy_5105510704(1.056464541509778) _gate_q_7, _gate_q_4;
  y _gate_q_6;
  z _gate_q_0;
  id _gate_q_6;
  r_5105512720(3.4857186909913684, 3.003438278154248) _gate_q_1;
  tdg _gate_q_0;
  u1(3.9815437025896676) _gate_q_3;
  crx(4.616640505441345) _gate_q_8, _gate_q_5;
  cs _gate_q_7, _gate_q_4;
  s _gate_q_2;
}
gate rzx_5105510800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3129028567235842) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105500432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.128651951315206) _gate_q_0;
  u1(0.20345745529116543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.226679103589767, 0, -5.128651951315206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.226679103589767, 4.92519449602404, 0) _gate_q_1;
}
gate cu3_5105501008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8235594246196971) _gate_q_0;
  u1(-0.9834289017110306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.06941184147652583, 0, -1.8235594246196971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.06941184147652583, 2.806988326330728, 0) _gate_q_1;
}
gate ryy_5105512672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4665295083100462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105503024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5953321452476872) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5953321452476872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5953321452476872) _gate_q_1;
}
gate rzx_5105514016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0999078648167573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105505232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.490753200595213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105506432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6798637082806462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105510944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3597653116505826) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7631575791222436) _gate_q_1;
  ry(-2.7631575791222436) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3597653116505826) _gate_q_0;
}
gate r_5105515936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.732677987705776, 1.9090306004034185, -1.9090306004034185) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  u1(4.77546133475773) _gate_q_0;
  t _gate_q_3;
  h _gate_q_7;
  rzx_5105510800(0.3129028567235842) _gate_q_2, _gate_q_6;
  crz(5.99718847928941) _gate_q_8, _gate_q_1;
  U(6.069470300645854, 5.202323181919025, 5.4746218050308855) _gate_q_4;
  p(1.2498158955844512) _gate_q_5;
  ecr _gate_q_7, _gate_q_5;
  h _gate_q_3;
  s _gate_q_6;
  t _gate_q_1;
  cu3_5105500432(4.453358207179534, 4.92519449602404, 5.332109406606371) _gate_q_8, _gate_q_0;
  rz(3.4969751583700837) _gate_q_4;
  tdg _gate_q_2;
  u3(1.414291937534462, 5.178523252416121, 1.0214958665148826) _gate_q_1;
  swap _gate_q_8, _gate_q_7;
  p(0.15408096201156102) _gate_q_4;
  cy _gate_q_6, _gate_q_2;
  cx _gate_q_3, _gate_q_5;
  u2(5.365569246257254, 1.0721971559423122) _gate_q_0;
  p(2.2784493118243523) _gate_q_4;
  t _gate_q_6;
  ry(0.5131611135853328) _gate_q_0;
  u1(4.817861677343077) _gate_q_1;
  cy _gate_q_8, _gate_q_7;
  cu3_5105501008(0.13882368295305167, 2.806988326330728, 0.8401305229086666) _gate_q_3, _gate_q_2;
  sx _gate_q_5;
  ryy_5105512672(1.4665295083100462) _gate_q_7, _gate_q_0;
  cy _gate_q_3, _gate_q_4;
  h _gate_q_5;
  crz(2.7027563240840977) _gate_q_1, _gate_q_6;
  sdg _gate_q_2;
  rz(3.382982263114474) _gate_q_8;
  iswap _gate_q_7, _gate_q_2;
  cry(0.0297535869286172) _gate_q_4, _gate_q_5;
  cu1_5105503024(3.1906642904953744) _gate_q_8, _gate_q_1;
  ry(1.8938985386379108) _gate_q_6;
  U(2.544563781040531, 5.22077978160511, 3.2639035577015756) _gate_q_3;
  s _gate_q_0;
  rzx_5105514016(3.0999078648167573) _gate_q_8, _gate_q_3;
  sxdg _gate_q_6;
  ecr _gate_q_1, _gate_q_5;
  ryy_5105505232(5.490753200595213) _gate_q_2, _gate_q_4;
  u3(4.511735733356197, 6.202884139795954, 4.330526699868357) _gate_q_7;
  sx _gate_q_0;
  id _gate_q_1;
  rzz_5105506432(3.6798637082806462) _gate_q_0, _gate_q_7;
  h _gate_q_3;
  cz _gate_q_2, _gate_q_4;
  xx_plus_yy_5105510944(5.526315158244487, 2.3597653116505826) _gate_q_5, _gate_q_8;
  rx(2.75631843391697) _gate_q_6;
  sdg _gate_q_1;
  cs _gate_q_0, _gate_q_6;
  swap _gate_q_3, _gate_q_8;
  u1(5.045991461953557) _gate_q_2;
  cs _gate_q_4, _gate_q_5;
  r_5105515936(5.732677987705776, 3.479826927198315) _gate_q_7;
}