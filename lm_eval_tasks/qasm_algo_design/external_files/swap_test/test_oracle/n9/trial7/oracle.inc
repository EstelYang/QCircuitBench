gate rzz_5103921888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4124739665311026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5103923088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6942700296648137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5103926640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6283187741173406) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0781766374324895) _gate_q_0;
  ry(-2.0781766374324895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6283187741173406) _gate_q_1;
}
gate ryy_5103918864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6301322544189771) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5103922320(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.181684424078827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5103925680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.160362071033512) _gate_q_0;
  u1(-0.018051371392807436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.934251391352317, 0, -0.160362071033512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.934251391352317, 0.17841344242631943, 0) _gate_q_1;
}
gate ryy_5103918912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2785610008053179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5103920400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.03315851188627) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3060615451806836) _gate_q_0;
  ry(-0.3060615451806836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.03315851188627) _gate_q_1;
}
gate rzx_5103920064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.151784299599302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5103924144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0280537196274042) _gate_q_1;
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
gate r_5103926112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.779959308910544, 1.533740380933435, -1.533740380933435) _gate_q_0;
}
gate r_5103921984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9183898691793666, 0.5426202535896594, -0.5426202535896594) _gate_q_0;
}
gate rzx_5103923712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6792676040050725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5103922176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7946181532973577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5103921552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9047547590027376) _gate_q_0;
  u1(2.2405046059762377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.108137260731102, 0, -3.9047547590027376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.108137260731102, 1.6642501530265001, 0) _gate_q_1;
}
gate r_5103923424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.09403792449579043, -0.4634922001194963, 0.4634922001194963) _gate_q_0;
}
gate xx_plus_yy_5103925248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1619648451148135) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.46651805396886975) _gate_q_1;
  ry(-0.46651805396886975) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1619648451148135) _gate_q_0;
}
gate r_5103927072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8766922256338754, 1.3241392186657648, -1.3241392186657648) _gate_q_0;
}
gate rxx_5103926256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.283069484666904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  rzz_5103921888(3.4124739665311026) _gate_q_0, _gate_q_3;
  crx(2.090627177611335) _gate_q_1, _gate_q_2;
  sx _gate_q_5;
  ry(2.3532929974856462) _gate_q_8;
  rzz_5103923088(1.6942700296648137) _gate_q_4, _gate_q_6;
  sdg _gate_q_7;
  xx_minus_yy_5103926640(4.156353274864979, 3.6283187741173406) _gate_q_4, _gate_q_6;
  z _gate_q_5;
  ryy_5103918864(0.6301322544189771) _gate_q_2, _gate_q_3;
  rz(5.076491047172961) _gate_q_8;
  U(5.6683095806673975, 0.2270814472560776, 1.3309720113352488) _gate_q_0;
  id _gate_q_1;
  rz(4.651368790883278) _gate_q_7;
  t _gate_q_8;
  rzz_5103922320(3.181684424078827) _gate_q_4, _gate_q_0;
  s _gate_q_5;
  cu(1.550421575682988, 1.908774124604859, 5.8975308381109235, 5.382197731479851) _gate_q_1, _gate_q_3;
  sx _gate_q_7;
  cu3_5103925680(5.868502782704634, 0.17841344242631943, 0.14231069964070456) _gate_q_6, _gate_q_2;
  ryy_5103918912(1.2785610008053179) _gate_q_3, _gate_q_4;
  ry(3.3722749908076097) _gate_q_6;
  xx_minus_yy_5103920400(0.6121230903613673, 4.03315851188627) _gate_q_5, _gate_q_7;
  rzx_5103920064(4.151784299599302) _gate_q_8, _gate_q_2;
  sxdg _gate_q_0;
  ry(3.808360619069881) _gate_q_1;
  ryy_5103924144(1.0280537196274042) _gate_q_7, _gate_q_4;
  ecr _gate_q_3, _gate_q_6;
  r_5103926112(5.779959308910544, 3.1045367077283315) _gate_q_0;
  r_5103921984(2.9183898691793666, 2.113416580384556) _gate_q_1;
  cu(4.68729282788224, 1.7991405550631523, 1.562147322673491, 3.860348921561358) _gate_q_5, _gate_q_2;
  u1(2.1786536044197344) _gate_q_8;
  rzx_5103923712(3.6792676040050725) _gate_q_7, _gate_q_4;
  csdg _gate_q_1, _gate_q_3;
  sxdg _gate_q_6;
  cz _gate_q_5, _gate_q_0;
  ecr _gate_q_8, _gate_q_2;
  rzx_5103922176(3.7946181532973577) _gate_q_6, _gate_q_3;
  t _gate_q_5;
  cz _gate_q_1, _gate_q_8;
  U(4.9234252456321075, 5.213360169331643, 5.857231324149944) _gate_q_2;
  cu3_5103921552(6.216274521462204, 1.6642501530265001, 6.145259364978975) _gate_q_0, _gate_q_7;
  u3(1.606483744371212, 3.397792959992933, 4.629164130864408) _gate_q_4;
  ry(2.6531866719618304) _gate_q_5;
  id _gate_q_6;
  r_5103923424(0.09403792449579043, 1.1073041266754002) _gate_q_8;
  p(6.188305100384406) _gate_q_4;
  ry(5.760832808567797) _gate_q_7;
  xx_plus_yy_5103925248(0.9330361079377395, 3.1619648451148135) _gate_q_2, _gate_q_0;
  t _gate_q_3;
  r_5103927072(2.8766922256338754, 2.8949355454606613) _gate_q_1;
  tdg _gate_q_3;
  rz(4.233695887285331) _gate_q_1;
  rxx_5103926256(4.283069484666904) _gate_q_0, _gate_q_6;
  sx _gate_q_2;
  sx _gate_q_8;
  u2(1.1032190471189272, 2.4906908375700665) _gate_q_4;
  cs _gate_q_7, _gate_q_5;
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
gate rxx_5103925488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0976091987157113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5103923520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.300715659865438) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3418592059587806) _gate_q_0;
  ry(-2.3418592059587806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.300715659865438) _gate_q_1;
}
gate xx_plus_yy_5103923952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.832299401112573) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5681547487166498) _gate_q_1;
  ry(-0.5681547487166498) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.832299401112573) _gate_q_0;
}
gate cu3_5103916608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.42413892220387) _gate_q_0;
  u1(-0.14467892968448925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1950743796353405, 0, -4.42413892220387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1950743796353405, 4.568817851888359, 0) _gate_q_1;
}
gate r_5103924288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.549361957833852, -1.174334749732742, 1.174334749732742) _gate_q_0;
}
gate cu1_5103921744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4819546587552943) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4819546587552943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4819546587552943) _gate_q_1;
}
gate xx_plus_yy_5103919248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.739337756890374) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8560096684689986) _gate_q_1;
  ry(-2.8560096684689986) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.739337756890374) _gate_q_0;
}
gate cu3_5103924048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.135804210729395) _gate_q_0;
  u1(1.0067264094135635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3025527402552732, 0, -5.135804210729395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3025527402552732, 4.129077801315831, 0) _gate_q_1;
}
gate rzz_5103923040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.111616776564994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5103925536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4249244735855195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  csx _gate_q_1, _gate_q_4;
  rxx_5103925488(2.0976091987157113) _gate_q_6, _gate_q_8;
  xx_minus_yy_5103923520(4.683718411917561, 4.300715659865438) _gate_q_2, _gate_q_0;
  xx_plus_yy_5103923952(1.1363094974332997, 0.832299401112573) _gate_q_7, _gate_q_3;
  u1(0.054857789708024705) _gate_q_5;
  cy _gate_q_3, _gate_q_5;
  sx _gate_q_2;
  rz(2.303059096401473) _gate_q_0;
  cp(0.7208002425739531) _gate_q_1, _gate_q_7;
  sx _gate_q_6;
  ry(4.2629173529238775) _gate_q_4;
  sdg _gate_q_8;
  rz(0.6869228858891924) _gate_q_8;
  h _gate_q_2;
  cu3_5103916608(4.390148759270681, 4.568817851888359, 4.279459992519381) _gate_q_3, _gate_q_5;
  crx(6.127425106022979) _gate_q_0, _gate_q_7;
  swap _gate_q_6, _gate_q_4;
  r_5103924288(5.549361957833852, 0.3964615770621545) _gate_q_1;
  u1(1.2248433884815397) _gate_q_7;
  sdg _gate_q_0;
  t _gate_q_1;
  crz(5.017587925005316) _gate_q_4, _gate_q_8;
  cu1_5103921744(4.963909317510589) _gate_q_6, _gate_q_3;
  x _gate_q_5;
  tdg _gate_q_2;
  p(1.3948504197252432) _gate_q_7;
  p(3.63900706746149) _gate_q_2;
  cz _gate_q_0, _gate_q_4;
  swap _gate_q_8, _gate_q_6;
  cx _gate_q_1, _gate_q_5;
  tdg _gate_q_3;
  xx_plus_yy_5103919248(5.712019336937997, 0.739337756890374) _gate_q_2, _gate_q_0;
  u1(5.24808512773383) _gate_q_4;
  sdg _gate_q_3;
  sx _gate_q_6;
  cz _gate_q_7, _gate_q_5;
  p(2.879795203987643) _gate_q_8;
  id _gate_q_1;
  cu3_5103924048(2.6051054805105465, 4.129077801315831, 6.142530620142958) _gate_q_3, _gate_q_4;
  id _gate_q_1;
  ry(3.444385472045119) _gate_q_7;
  ch _gate_q_6, _gate_q_8;
  s _gate_q_0;
  ch _gate_q_2, _gate_q_5;
  cry(2.420032283038722) _gate_q_0, _gate_q_7;
  ch _gate_q_3, _gate_q_4;
  p(0.9625264016583307) _gate_q_6;
  rzz_5103923040(2.111616776564994) _gate_q_1, _gate_q_5;
  swap _gate_q_2, _gate_q_8;
  tdg _gate_q_3;
  p(1.6448870383905414) _gate_q_0;
  u1(6.187525835701246) _gate_q_4;
  rxx_5103925536(2.4249244735855195) _gate_q_8, _gate_q_7;
  csx _gate_q_5, _gate_q_2;
  U(3.877182799235144, 0.7168735264038673, 3.6635536720662376) _gate_q_1;
  id _gate_q_6;
}