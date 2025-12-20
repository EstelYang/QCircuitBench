gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107605216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4563172082913596) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.390102750009801) _gate_q_0;
  ry(-1.390102750009801) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4563172082913596) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5107605120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1883442062088645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107609296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.172833637567564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107608864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.206520751752256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107607472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.16260384480656584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.16260384480656584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.16260384480656584) _gate_q_1;
}
gate xx_plus_yy_5107932464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8567367502667547) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7962831612199869) _gate_q_1;
  ry(-0.7962831612199869) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8567367502667547) _gate_q_0;
}
gate ryy_5105281232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.710245617947913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105282096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.627403149921317) _gate_q_1;
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
gate rxx_5105275568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.004599024831813) _gate_q_1;
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
gate xx_plus_yy_5105277584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.176412824705172) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9094861945849794) _gate_q_1;
  ry(-0.9094861945849794) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.176412824705172) _gate_q_0;
}
gate r_5105286128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.33581104981093, 4.035699093489995, -4.035699093489995) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5106385936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6781406985096834) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5264837927786856) _gate_q_1;
  ry(-0.5264837927786856) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6781406985096834) _gate_q_0;
}
gate cu1_5106397696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.058224810613664) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.058224810613664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.058224810613664) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5106398752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.055483798254333, 1.1202985472260423, -1.1202985472260423) _gate_q_0;
}
gate xx_plus_yy_5116427296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0345336950131103) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7013288871821097) _gate_q_1;
  ry(-2.7013288871821097) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0345336950131103) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  ch _gate_q_2, _gate_q_6;
  dcx _gate_q_7, _gate_q_9;
  cry(1.0828963479686229) _gate_q_11, _gate_q_12;
  ry(1.268403612310431) _gate_q_10;
  xx_minus_yy_5107605216(2.780205500019602, 1.4563172082913596) _gate_q_3, _gate_q_1;
  cu(5.4258750986440525, 4.657947801498562, 1.829644181141317, 3.907435417073109) _gate_q_4, _gate_q_5;
  cry(0.08660960323903859) _gate_q_0, _gate_q_8;
  cry(6.139349887900432) _gate_q_0, _gate_q_2;
  csdg _gate_q_1, _gate_q_6;
  rzx_5107605120(2.1883442062088645) _gate_q_7, _gate_q_3;
  ry(3.3737420265796527) _gate_q_8;
  s _gate_q_4;
  cp(1.0593558740361344) _gate_q_12, _gate_q_11;
  cu(1.8345398531042683, 1.9073359861841426, 2.2349133000981465, 0.7970199425954305) _gate_q_5, _gate_q_9;
  ry(1.5982950356597214) _gate_q_10;
  cx _gate_q_4, _gate_q_5;
  U(0.3615523228921644, 3.587674775758038, 2.570037303173528) _gate_q_11;
  rxx_5107609296(4.172833637567564) _gate_q_1, _gate_q_12;
  ry(5.410778290876342) _gate_q_0;
  rzz_5107608864(6.206520751752256) _gate_q_8, _gate_q_6;
  s _gate_q_10;
  swap _gate_q_3, _gate_q_2;
  id _gate_q_7;
  y _gate_q_9;
  ry(0.34373446364422033) _gate_q_10;
  ry(1.2048279480337711) _gate_q_7;
  tdg _gate_q_12;
  crz(4.175038295711844) _gate_q_0, _gate_q_8;
  u2(4.8304278066459005, 3.3664797663211514) _gate_q_1;
  cu1_5107607472(0.3252076896131317) _gate_q_4, _gate_q_3;
  u3(0.41397538439956505, 2.406088057781492, 1.5771909545983962) _gate_q_9;
  U(5.985563444963961, 2.298394453977441, 2.2124247727892903) _gate_q_2;
  z _gate_q_11;
  cx _gate_q_6, _gate_q_5;
  tdg _gate_q_9;
  u3(5.217383984858791, 1.3063508433197049, 0.11739473313337054) _gate_q_8;
  p(3.1358500682579438) _gate_q_4;
  sx _gate_q_12;
  xx_plus_yy_5107932464(1.5925663224399738, 1.8567367502667547) _gate_q_7, _gate_q_6;
  ch _gate_q_0, _gate_q_1;
  x _gate_q_2;
  cy _gate_q_3, _gate_q_11;
  ryy_5105281232(4.710245617947913) _gate_q_5, _gate_q_10;
  h _gate_q_9;
  csdg _gate_q_11, _gate_q_10;
  ryy_5105282096(2.627403149921317) _gate_q_0, _gate_q_3;
  ecr _gate_q_5, _gate_q_7;
  rxx_5105275568(4.004599024831813) _gate_q_1, _gate_q_2;
  crx(3.019454025539408) _gate_q_6, _gate_q_8;
  h _gate_q_12;
  x _gate_q_4;
  csx _gate_q_5, _gate_q_2;
  xx_plus_yy_5105277584(1.8189723891699587, 6.176412824705172) _gate_q_1, _gate_q_10;
  p(1.7356750597482127) _gate_q_12;
  ecr _gate_q_7, _gate_q_3;
  s _gate_q_11;
  r_5105286128(3.33581104981093, 5.606495420284891) _gate_q_4;
  y _gate_q_0;
  rz(5.9252257778724315) _gate_q_8;
  cs _gate_q_6, _gate_q_9;
  p(3.0985523721473722) _gate_q_12;
  cs _gate_q_10, _gate_q_3;
  crz(1.4730906479682937) _gate_q_11, _gate_q_1;
  xx_plus_yy_5106385936(1.0529675855573712, 3.6781406985096834) _gate_q_9, _gate_q_0;
  p(5.3350683295288945) _gate_q_2;
  ry(5.824649270173566) _gate_q_4;
  U(5.947447153021562, 4.0983615190510365, 2.986297963367438) _gate_q_5;
  cu1_5106397696(4.116449621227328) _gate_q_7, _gate_q_6;
  u1(1.288887179535155) _gate_q_8;
  cry(0.3679235348695391) _gate_q_0, _gate_q_5;
  iswap _gate_q_11, _gate_q_2;
  r_5106398752(2.055483798254333, 2.691094874020939) _gate_q_6;
  u2(1.3595855804810455, 1.5451612933272456) _gate_q_10;
  cz _gate_q_12, _gate_q_3;
  rz(1.405163436543852) _gate_q_4;
  id _gate_q_1;
  dcx _gate_q_8, _gate_q_7;
  x _gate_q_9;
  id _gate_q_3;
  cy _gate_q_12, _gate_q_2;
  ecr _gate_q_11, _gate_q_1;
  id _gate_q_4;
  u3(4.1339957501764575, 0.7183481022442354, 3.2467473927625607) _gate_q_10;
  sx _gate_q_0;
  xx_plus_yy_5116427296(5.4026577743642195, 3.0345336950131103) _gate_q_7, _gate_q_8;
  y _gate_q_9;
  h _gate_q_5;
  rz(5.763872655137497) _gate_q_6;
}
gate cu3_5116682144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.394378868527224) _gate_q_0;
  u1(-0.6771372857205822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4401451421575751, 0, -3.394378868527224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4401451421575751, 4.071516154247806, 0) _gate_q_1;
}
gate rzx_5116682096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8607456643171765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5116682384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7484887721565743) _gate_q_0;
  u1(0.04563922443835744) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3329609560461317, 0, -2.7484887721565743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3329609560461317, 2.702849547718217, 0) _gate_q_1;
}
gate xx_plus_yy_5116682528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.513106582511975) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.34784889789839063) _gate_q_1;
  ry(-0.34784889789839063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.513106582511975) _gate_q_0;
}
gate rzx_5116682768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.812838186249418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116682672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.763471104877766) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.763471104877766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.763471104877766) _gate_q_1;
}
gate rzx_5116681760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1011719837973997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116682864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.683873684414342, 0.09824330180320762, -0.09824330180320762) _gate_q_0;
}
gate cu1_5116683056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4924683633443183) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4924683633443183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4924683633443183) _gate_q_1;
}
gate cu3_5116683152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.01838261812124) _gate_q_0;
  u1(1.1880085806565392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2599191635202067, 0, -5.01838261812124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2599191635202067, 3.8303740374647006, 0) _gate_q_1;
}
gate rxx_5116683440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4979749911700466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116683488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1114022718991023) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8695245039081803) _gate_q_0;
  ry(-0.8695245039081803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1114022718991023) _gate_q_1;
}
gate rzx_5116683584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3119828843143326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5116683872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.04825973103076805) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2924582210813804) _gate_q_1;
  ry(-1.2924582210813804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.04825973103076805) _gate_q_0;
}
gate rzz_5116683920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.64435979484503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116675136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.285962744713179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116675184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6884672997415324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116677824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.553413748253567) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.990248832652761) _gate_q_0;
  ry(-0.990248832652761) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.553413748253567) _gate_q_1;
}
gate xx_minus_yy_5116677680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.472376590897223) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0502414811182588) _gate_q_0;
  ry(-3.0502414811182588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.472376590897223) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  ecr _gate_q_4, _gate_q_1;
  sxdg _gate_q_9;
  p(3.223512140533079) _gate_q_12;
  cry(2.952028665491443) _gate_q_6, _gate_q_10;
  y _gate_q_7;
  cu3_5116682144(0.8802902843151502, 4.071516154247806, 2.717241582806642) _gate_q_11, _gate_q_8;
  sx _gate_q_0;
  y _gate_q_2;
  rzx_5116682096(1.8607456643171765) _gate_q_5, _gate_q_3;
  z _gate_q_3;
  t _gate_q_8;
  t _gate_q_9;
  tdg _gate_q_6;
  U(3.5520668480573496, 2.9500217371157786, 1.9336696459602936) _gate_q_5;
  cp(5.1583875426148476) _gate_q_2, _gate_q_7;
  crx(0.7505293710506777) _gate_q_10, _gate_q_0;
  cz _gate_q_4, _gate_q_12;
  cu3_5116682384(0.6659219120922634, 2.702849547718217, 2.794127996594932) _gate_q_11, _gate_q_1;
  sdg _gate_q_8;
  U(2.52877531311435, 0.39049578269731017, 2.1995195105229586) _gate_q_11;
  z _gate_q_2;
  swap _gate_q_7, _gate_q_6;
  xx_plus_yy_5116682528(0.6956977957967813, 0.513106582511975) _gate_q_1, _gate_q_10;
  sx _gate_q_3;
  cs _gate_q_5, _gate_q_0;
  swap _gate_q_4, _gate_q_12;
  id _gate_q_9;
  ry(3.0503842217901838) _gate_q_6;
  rzx_5116682768(5.812838186249418) _gate_q_10, _gate_q_7;
  cu1_5116682672(3.526942209755532) _gate_q_11, _gate_q_3;
  rzx_5116681760(1.1011719837973997) _gate_q_2, _gate_q_4;
  iswap _gate_q_5, _gate_q_12;
  r_5116682864(3.683873684414342, 1.6690396285981042) _gate_q_9;
  t _gate_q_0;
  ecr _gate_q_1, _gate_q_8;
  rz(5.461323167216384) _gate_q_5;
  crz(1.8084622166791693) _gate_q_11, _gate_q_10;
  z _gate_q_6;
  cu1_5116683056(4.984936726688637) _gate_q_7, _gate_q_3;
  cu3_5116683152(4.519838327040413, 3.8303740374647006, 6.206391198777779) _gate_q_12, _gate_q_9;
  csx _gate_q_0, _gate_q_8;
  ry(3.5898448793242217) _gate_q_1;
  sdg _gate_q_4;
  u2(1.136798255960837, 2.72052278199944) _gate_q_2;
  ch _gate_q_8, _gate_q_0;
  csx _gate_q_4, _gate_q_5;
  crx(2.7588273553481426) _gate_q_2, _gate_q_11;
  rxx_5116683440(0.4979749911700466) _gate_q_7, _gate_q_12;
  y _gate_q_1;
  cy _gate_q_6, _gate_q_9;
  cz _gate_q_3, _gate_q_10;
  cx _gate_q_3, _gate_q_2;
  xx_minus_yy_5116683488(1.7390490078163605, 1.1114022718991023) _gate_q_8, _gate_q_7;
  rx(5.734870279083845) _gate_q_12;
  rzx_5116683584(1.3119828843143326) _gate_q_1, _gate_q_6;
  z _gate_q_5;
  u3(4.793739984923498, 0.685950131117606, 1.7511377565745472) _gate_q_4;
  id _gate_q_10;
  rz(4.609905232203827) _gate_q_11;
  p(0.3290632807835593) _gate_q_0;
  rx(1.086320453353031) _gate_q_9;
  rx(0.07314957507770808) _gate_q_2;
  x _gate_q_8;
  rx(2.6482530871906693) _gate_q_5;
  tdg _gate_q_9;
  xx_plus_yy_5116683872(2.584916442162761, 0.04825973103076805) _gate_q_11, _gate_q_3;
  y _gate_q_1;
  rzz_5116683920(4.64435979484503) _gate_q_6, _gate_q_0;
  s _gate_q_12;
  csx _gate_q_10, _gate_q_7;
  id _gate_q_4;
  rzz_5116675136(1.285962744713179) _gate_q_8, _gate_q_1;
  rxx_5116675184(1.6884672997415324) _gate_q_10, _gate_q_6;
  u1(6.077811747983477) _gate_q_3;
  u3(4.986847376612042, 5.206210283482051, 0.027614034310087337) _gate_q_9;
  ch _gate_q_2, _gate_q_7;
  xx_minus_yy_5116677824(1.980497665305522, 5.553413748253567) _gate_q_5, _gate_q_12;
  ch _gate_q_11, _gate_q_4;
  sdg _gate_q_0;
  iswap _gate_q_7, _gate_q_1;
  crz(0.4845685211116057) _gate_q_10, _gate_q_12;
  tdg _gate_q_11;
  sxdg _gate_q_5;
  xx_minus_yy_5116677680(6.1004829622365175, 0.472376590897223) _gate_q_4, _gate_q_0;
  csx _gate_q_3, _gate_q_9;
  ry(4.6336786108174195) _gate_q_2;
  ecr _gate_q_6, _gate_q_8;
}