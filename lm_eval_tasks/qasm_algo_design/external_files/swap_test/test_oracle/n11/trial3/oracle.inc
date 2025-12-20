gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_minus_yy_5105758768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.23375906816406183) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9573745273427394) _gate_q_0;
  ry(-2.9573745273427394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.23375906816406183) _gate_q_1;
}
gate rzx_5105760688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.149038145596323) _gate_q_1;
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
gate ryy_5105748064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6978396286421995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105750512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.531697677649053, -0.571068232099616, 0.571068232099616) _gate_q_0;
}
gate xx_plus_yy_5105761264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.46320279983896906) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.161288386734637) _gate_q_1;
  ry(-2.161288386734637) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.46320279983896906) _gate_q_0;
}
gate rzz_5105759584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7508360598813099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105752048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.45433369899929393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105756176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.30094295313361136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105748784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.406334722809962) _gate_q_0;
  u1(-0.823166446829249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.920936799155971, 0, -4.406334722809962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.920936799155971, 5.229501169639211, 0) _gate_q_1;
}
gate cu1_5105758240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8240113901355466) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8240113901355466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8240113901355466) _gate_q_1;
}
gate ryy_5105760976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.326637341540993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105749504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.279172165661167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105758336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.44887686192115667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105759536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0112112641767093) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0112112641767093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0112112641767093) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  swap _gate_q_6, _gate_q_5;
  h _gate_q_9;
  cx _gate_q_3, _gate_q_4;
  dcx _gate_q_7, _gate_q_10;
  cz _gate_q_8, _gate_q_0;
  cs _gate_q_1, _gate_q_2;
  rz(1.6691288739017855) _gate_q_0;
  s _gate_q_2;
  sxdg _gate_q_1;
  xx_minus_yy_5105758768(5.914749054685479, 0.23375906816406183) _gate_q_4, _gate_q_9;
  swap _gate_q_5, _gate_q_7;
  rzx_5105760688(3.149038145596323) _gate_q_10, _gate_q_3;
  iswap _gate_q_6, _gate_q_8;
  ecr _gate_q_5, _gate_q_6;
  cx _gate_q_3, _gate_q_4;
  U(5.3982956981314025, 1.156277324342672, 3.255881007973757) _gate_q_8;
  csx _gate_q_0, _gate_q_10;
  ryy_5105748064(0.6978396286421995) _gate_q_7, _gate_q_1;
  cry(2.533708999671691) _gate_q_9, _gate_q_2;
  cx _gate_q_0, _gate_q_3;
  iswap _gate_q_1, _gate_q_4;
  r_5105750512(5.531697677649053, 0.9997280946952806) _gate_q_7;
  cp(4.051804873848221) _gate_q_6, _gate_q_9;
  crx(1.2799918529275007) _gate_q_8, _gate_q_5;
  xx_plus_yy_5105761264(4.322576773469274, 0.46320279983896906) _gate_q_10, _gate_q_2;
  z _gate_q_9;
  t _gate_q_3;
  U(6.046019459128059, 0.3685198547955326, 2.4242151169918) _gate_q_5;
  rzz_5105759584(0.7508360598813099) _gate_q_10, _gate_q_2;
  x _gate_q_1;
  ecr _gate_q_6, _gate_q_8;
  cy _gate_q_7, _gate_q_0;
  t _gate_q_4;
  sxdg _gate_q_4;
  rx(4.8743090920412495) _gate_q_10;
  y _gate_q_8;
  dcx _gate_q_1, _gate_q_9;
  s _gate_q_6;
  rzz_5105752048(0.45433369899929393) _gate_q_7, _gate_q_0;
  p(3.241607341238923) _gate_q_3;
  rzz_5105756176(0.30094295313361136) _gate_q_5, _gate_q_2;
  sdg _gate_q_5;
  cu3_5105748784(3.841873598311942, 5.229501169639211, 3.583168275980713) _gate_q_6, _gate_q_3;
  s _gate_q_10;
  ry(4.742117943630851) _gate_q_8;
  cu1_5105758240(3.648022780271093) _gate_q_9, _gate_q_7;
  cu(1.132664251062018, 0.19729970974386066, 5.169591218979883, 1.6663370958287707) _gate_q_0, _gate_q_2;
  cs _gate_q_4, _gate_q_1;
  ryy_5105760976(5.326637341540993) _gate_q_0, _gate_q_4;
  tdg _gate_q_2;
  ryy_5105749504(6.279172165661167) _gate_q_5, _gate_q_8;
  ryy_5105758336(0.44887686192115667) _gate_q_1, _gate_q_10;
  sx _gate_q_3;
  U(6.012803287048985, 5.8013238745186895, 2.6609884239689285) _gate_q_9;
  id _gate_q_6;
  sx _gate_q_7;
  t _gate_q_0;
  p(4.354989019296546) _gate_q_6;
  cu1_5105759536(2.0224225283534185) _gate_q_2, _gate_q_7;
  dcx _gate_q_10, _gate_q_8;
  cry(6.0814775507933545) _gate_q_9, _gate_q_1;
  sxdg _gate_q_5;
  crz(4.076972457702289) _gate_q_4, _gate_q_3;
  cs _gate_q_9, _gate_q_8;
  t _gate_q_3;
  iswap _gate_q_1, _gate_q_2;
  csx _gate_q_7, _gate_q_6;
  crx(4.733411126830926) _gate_q_0, _gate_q_4;
  id _gate_q_5;
  rx(5.021435784958782) _gate_q_10;
}
gate xx_minus_yy_5105643648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.535073847360567) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9503815255357349) _gate_q_0;
  ry(-0.9503815255357349) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.535073847360567) _gate_q_1;
}
gate cu1_5105645232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4500821193701695) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4500821193701695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4500821193701695) _gate_q_1;
}
gate r_5105645904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3220845887779897, 2.1674977039843943, -2.1674977039843943) _gate_q_0;
}
gate cu3_5105640144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6801026517016973) _gate_q_0;
  u1(-2.334083918172285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.874340440107504, 0, -2.6801026517016973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.874340440107504, 5.014186569873982, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5105640240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.546314219454459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105643360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7803490753292466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105642304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3016175561963674, 1.5586847289099013, -1.5586847289099013) _gate_q_0;
}
gate rzz_5105634720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5682983209420127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105634960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2466842947489485) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5563264724414987) _gate_q_1;
  ry(-2.5563264724414987) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2466842947489485) _gate_q_0;
}
gate rzx_5105633424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.744715033399812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105633808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.130104830136355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105635584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.605649731633262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105636112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.803855123175165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  swap _gate_q_3, _gate_q_8;
  csx _gate_q_6, _gate_q_7;
  u1(3.339994615525278) _gate_q_2;
  xx_minus_yy_5105643648(1.9007630510714697, 4.535073847360567) _gate_q_0, _gate_q_10;
  swap _gate_q_1, _gate_q_9;
  cu1_5105645232(0.900164238740339) _gate_q_4, _gate_q_5;
  r_5105645904(2.3220845887779897, 3.738294030779291) _gate_q_0;
  cs _gate_q_5, _gate_q_7;
  cry(2.751519326573387) _gate_q_10, _gate_q_4;
  crx(4.405491699835271) _gate_q_1, _gate_q_2;
  cu3_5105640144(1.748680880215008, 5.014186569873982, 0.3460187335294122) _gate_q_8, _gate_q_3;
  csdg _gate_q_6, _gate_q_9;
  ryy_5105640240(4.546314219454459) _gate_q_0, _gate_q_5;
  rz(3.9543198567966833) _gate_q_1;
  rxx_5105643360(2.7803490753292466) _gate_q_7, _gate_q_3;
  sx _gate_q_6;
  h _gate_q_9;
  r_5105642304(3.3016175561963674, 3.129481055704798) _gate_q_2;
  dcx _gate_q_8, _gate_q_10;
  id _gate_q_4;
  ch _gate_q_8, _gate_q_10;
  h _gate_q_3;
  cy _gate_q_1, _gate_q_0;
  crz(2.1256612764848253) _gate_q_5, _gate_q_9;
  z _gate_q_2;
  y _gate_q_6;
  cry(5.303942428318087) _gate_q_4, _gate_q_7;
  rz(1.4417793788529965) _gate_q_0;
  crz(4.9669070367844395) _gate_q_8, _gate_q_1;
  sx _gate_q_5;
  cry(1.0653083146664322) _gate_q_2, _gate_q_10;
  u2(0.21345845587426274, 3.2607377956183368) _gate_q_3;
  s _gate_q_4;
  ch _gate_q_6, _gate_q_9;
  s _gate_q_7;
  u3(2.2770571389824714, 1.300124501836262, 5.1486162731568585) _gate_q_7;
  rzz_5105634720(0.5682983209420127) _gate_q_0, _gate_q_1;
  ry(0.8020733600356758) _gate_q_5;
  xx_plus_yy_5105634960(5.112652944882997, 3.2466842947489485) _gate_q_4, _gate_q_2;
  dcx _gate_q_8, _gate_q_3;
  u3(0.32889189254185924, 5.210521341593335, 5.142543181149407) _gate_q_10;
  cu(6.184812584840981, 3.0686164199710895, 3.389957916630731, 4.429113147734353) _gate_q_9, _gate_q_6;
  csdg _gate_q_0, _gate_q_9;
  cx _gate_q_4, _gate_q_3;
  ecr _gate_q_5, _gate_q_1;
  rzx_5105633424(5.744715033399812) _gate_q_2, _gate_q_6;
  u3(1.8688540879553868, 4.737817687368587, 5.598564252509412) _gate_q_8;
  crx(4.1739806796049015) _gate_q_10, _gate_q_7;
  ecr _gate_q_0, _gate_q_4;
  cx _gate_q_1, _gate_q_2;
  U(4.263602800791781, 6.171148430751985, 0.06948841879610383) _gate_q_3;
  x _gate_q_7;
  t _gate_q_5;
  dcx _gate_q_10, _gate_q_6;
  cry(3.4503896813104875) _gate_q_9, _gate_q_8;
  u3(6.195504724821986, 2.9811290656615936, 4.9160276830126) _gate_q_10;
  swap _gate_q_5, _gate_q_3;
  rxx_5105633808(4.130104830136355) _gate_q_1, _gate_q_8;
  crz(1.7277973562300113) _gate_q_7, _gate_q_6;
  csdg _gate_q_2, _gate_q_0;
  ryy_5105635584(5.605649731633262) _gate_q_4, _gate_q_9;
  id _gate_q_6;
  cx _gate_q_1, _gate_q_7;
  id _gate_q_9;
  rz(4.01813424716523) _gate_q_5;
  ryy_5105636112(5.803855123175165) _gate_q_0, _gate_q_10;
  crz(3.4640887732415737) _gate_q_3, _gate_q_4;
  ecr _gate_q_8, _gate_q_2;
}