gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate rxx_5074369904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.204315396469085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074370432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3608186444487114, -1.1710057515936378, 1.1710057515936378) _gate_q_0;
}
gate r_5074370144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.774805757720688, 1.2373551624572041, -1.2373551624572041) _gate_q_0;
}
gate rxx_5074368560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.6788201338599835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074368128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10766272632507476) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5068704704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5343862626210969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_4815867152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9659612972672733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate r_5074260368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.821356364514576, 0.12306364489876875, -0.12306364489876875) _gate_q_0;
}
gate r_5074257536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.51649022571466, 3.509621910735758, -3.509621910735758) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074256192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.067019563493364) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3223880961765453) _gate_q_0;
  ry(-1.3223880961765453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.067019563493364) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5074257056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.13629013811915) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5542135017137275) _gate_q_1;
  ry(-1.5542135017137275) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.13629013811915) _gate_q_0;
}
gate r_5074256576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.12688607116950287, -0.4075785001052732, 0.4075785001052732) _gate_q_0;
}
gate r_5074265024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.448347013426963, 1.8123978306119564, -1.8123978306119564) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  dcx _gate_q_11, _gate_q_3;
  s _gate_q_7;
  u1(2.855019358664723) _gate_q_5;
  csx _gate_q_0, _gate_q_2;
  ry(1.9338871271823963) _gate_q_10;
  cy _gate_q_1, _gate_q_9;
  cz _gate_q_8, _gate_q_4;
  p(3.310142582416189) _gate_q_6;
  x _gate_q_9;
  sx _gate_q_2;
  z _gate_q_5;
  dcx _gate_q_0, _gate_q_1;
  rxx_5074369904(5.204315396469085) _gate_q_6, _gate_q_8;
  crx(0.8008334355496024) _gate_q_3, _gate_q_7;
  ch _gate_q_4, _gate_q_11;
  r_5074370432(3.3608186444487114, 0.39979057520125877) _gate_q_10;
  r_5074370144(0.774805757720688, 2.8081514892521007) _gate_q_2;
  u2(2.0803320543760346, 2.988274160052391) _gate_q_7;
  id _gate_q_0;
  rxx_5074368560(5.6788201338599835) _gate_q_11, _gate_q_5;
  crz(2.7117459121043863) _gate_q_3, _gate_q_1;
  z _gate_q_4;
  ryy_5074368128(0.10766272632507476) _gate_q_10, _gate_q_8;
  z _gate_q_9;
  u3(2.7150946826324325, 1.1332003953714058, 4.698436537347309) _gate_q_6;
  ch _gate_q_6, _gate_q_7;
  ry(3.8240222396426846) _gate_q_4;
  rz(0.8748894126688249) _gate_q_2;
  id _gate_q_8;
  cz _gate_q_0, _gate_q_5;
  id _gate_q_9;
  U(0.7371652572466265, 5.520623077414707, 4.051577033051054) _gate_q_11;
  cp(5.389627252107318) _gate_q_1, _gate_q_10;
  u1(1.3064839660977166) _gate_q_3;
  rxx_5068704704(0.5343862626210969) _gate_q_10, _gate_q_2;
  dcx _gate_q_0, _gate_q_7;
  cry(5.55776296412183) _gate_q_6, _gate_q_11;
  rzx_4815867152(1.9659612972672733) _gate_q_9, _gate_q_4;
  ch _gate_q_1, _gate_q_8;
  p(3.612488808847118) _gate_q_5;
  sx _gate_q_3;
  ecr _gate_q_3, _gate_q_7;
  r_5074260368(4.821356364514576, 1.6938599716936653) _gate_q_9;
  cz _gate_q_1, _gate_q_4;
  r_5074257536(3.51649022571466, 5.080418237530655) _gate_q_10;
  sdg _gate_q_5;
  cx _gate_q_0, _gate_q_8;
  cry(2.945518850139148) _gate_q_11, _gate_q_2;
  sx _gate_q_6;
  csdg _gate_q_7, _gate_q_5;
  xx_minus_yy_5074256192(2.6447761923530906, 6.067019563493364) _gate_q_11, _gate_q_3;
  cs _gate_q_10, _gate_q_9;
  ry(3.7345624803485356) _gate_q_1;
  dcx _gate_q_6, _gate_q_4;
  z _gate_q_8;
  rz(2.9503428360182844) _gate_q_2;
  id _gate_q_0;
  z _gate_q_2;
  u2(2.769435235027012, 5.944811757038602) _gate_q_6;
  cz _gate_q_8, _gate_q_0;
  swap _gate_q_3, _gate_q_11;
  sxdg _gate_q_4;
  xx_plus_yy_5074257056(3.108427003427455, 4.13629013811915) _gate_q_10, _gate_q_7;
  u2(1.7964138430371335, 5.139665289929155) _gate_q_1;
  id _gate_q_5;
  sxdg _gate_q_9;
  sdg _gate_q_1;
  cz _gate_q_5, _gate_q_0;
  t _gate_q_11;
  u2(4.558006485998455, 0.27703755212261594) _gate_q_6;
  cs _gate_q_4, _gate_q_2;
  crz(2.218542923619106) _gate_q_7, _gate_q_8;
  t _gate_q_3;
  id _gate_q_9;
  rx(5.285061521752393) _gate_q_10;
  p(4.75892745585133) _gate_q_0;
  sxdg _gate_q_8;
  r_5074256576(0.12688607116950287, 1.1632178266896234) _gate_q_3;
  sdg _gate_q_5;
  r_5074265024(3.448347013426963, 3.383194157406853) _gate_q_7;
  rz(5.941966269113076) _gate_q_4;
  h _gate_q_1;
  id _gate_q_9;
  cx _gate_q_10, _gate_q_6;
  tdg _gate_q_2;
  rz(1.5067550177596347) _gate_q_11;
}
gate cu1_5074270160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8915513597043475) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8915513597043475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8915513597043475) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5074263920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.478020840332133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074261040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2530468424627084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074263680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.920048791637062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074259312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.847794910174908, -0.43443575156978254, 0.43443575156978254) _gate_q_0;
}
gate cu1_5074262672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.23994691039114757) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.23994691039114757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.23994691039114757) _gate_q_1;
}
gate ryy_5074270688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.947830239064402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074261520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.70139282479454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074259744(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.656106573794527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074262576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7267621990536098, 0.13288923123619445, -0.13288923123619445) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  csdg _gate_q_6, _gate_q_8;
  rz(1.9129064701109946) _gate_q_7;
  cu1_5074270160(1.783102719408695) _gate_q_2, _gate_q_4;
  sx _gate_q_9;
  iswap _gate_q_0, _gate_q_10;
  U(4.700599074049539, 5.5116464550276545, 0.2275836919060761) _gate_q_11;
  dcx _gate_q_1, _gate_q_5;
  u3(1.9610630335307275, 1.0779835631863706, 4.1386487509129415) _gate_q_3;
  y _gate_q_6;
  iswap _gate_q_10, _gate_q_4;
  y _gate_q_8;
  u1(0.17071096469456049) _gate_q_11;
  ecr _gate_q_2, _gate_q_0;
  sdg _gate_q_1;
  U(2.785463593625563, 1.772714687662382, 5.794929332617658) _gate_q_9;
  y _gate_q_7;
  u2(1.3287093231083722, 0.7189097551609347) _gate_q_3;
  U(3.594222650396214, 1.8318487167374804, 1.431287055912517) _gate_q_5;
  dcx _gate_q_9, _gate_q_11;
  z _gate_q_0;
  t _gate_q_7;
  csx _gate_q_3, _gate_q_2;
  ecr _gate_q_10, _gate_q_4;
  crz(2.2052333117915315) _gate_q_8, _gate_q_6;
  ry(3.3461885928362323) _gate_q_5;
  y _gate_q_1;
  p(0.06500932717795482) _gate_q_3;
  cx _gate_q_2, _gate_q_6;
  u2(3.4307581225378967, 0.6374645416282932) _gate_q_7;
  tdg _gate_q_11;
  csx _gate_q_4, _gate_q_5;
  rzz_5074263920(5.478020840332133) _gate_q_0, _gate_q_9;
  sdg _gate_q_1;
  tdg _gate_q_10;
  rx(0.6035566071732001) _gate_q_8;
  rz(4.917032899188846) _gate_q_2;
  cy _gate_q_1, _gate_q_11;
  dcx _gate_q_10, _gate_q_4;
  rzz_5074261040(3.2530468424627084) _gate_q_3, _gate_q_7;
  rxx_5074263680(3.920048791637062) _gate_q_9, _gate_q_8;
  dcx _gate_q_5, _gate_q_6;
  sxdg _gate_q_0;
  rx(4.2427848272689115) _gate_q_3;
  cry(4.765087908297723) _gate_q_11, _gate_q_2;
  r_5074259312(2.847794910174908, 1.136360575225114) _gate_q_8;
  cx _gate_q_10, _gate_q_5;
  rz(3.884574117485474) _gate_q_6;
  u2(2.6677117694535664, 1.8165183841389136) _gate_q_7;
  sxdg _gate_q_4;
  sx _gate_q_9;
  h _gate_q_0;
  tdg _gate_q_1;
  cy _gate_q_0, _gate_q_7;
  cu1_5074262672(0.47989382078229514) _gate_q_5, _gate_q_8;
  swap _gate_q_10, _gate_q_9;
  p(0.8848386346374636) _gate_q_2;
  ryy_5074270688(3.947830239064402) _gate_q_1, _gate_q_6;
  ecr _gate_q_11, _gate_q_4;
  h _gate_q_3;
  sx _gate_q_7;
  s _gate_q_8;
  rzx_5074261520(5.70139282479454) _gate_q_2, _gate_q_1;
  U(4.131014843614997, 0.037231001588699894, 2.0290949188470218) _gate_q_11;
  cy _gate_q_10, _gate_q_6;
  rz(2.5864940741987716) _gate_q_9;
  cp(5.050127195070991) _gate_q_5, _gate_q_4;
  ch _gate_q_3, _gate_q_0;
  cx _gate_q_9, _gate_q_8;
  cp(3.7661251767242416) _gate_q_7, _gate_q_1;
  u3(5.654017239430009, 0.6757078073059878, 4.122778685733925) _gate_q_2;
  csx _gate_q_4, _gate_q_10;
  cu(4.395508982471554, 3.8306748474242998, 1.1375745369922121, 5.778567830768672) _gate_q_0, _gate_q_3;
  sx _gate_q_5;
  rz(1.4520621309241477) _gate_q_11;
  u3(0.47073936401992306, 0.16304393487981692, 1.3321594902933325) _gate_q_6;
  sdg _gate_q_2;
  t _gate_q_4;
  u2(4.381121081065869, 1.7482998817108417) _gate_q_6;
  cry(1.330059580549248) _gate_q_5, _gate_q_0;
  ryy_5074259744(5.656106573794527) _gate_q_11, _gate_q_8;
  crx(1.0674191962100856) _gate_q_7, _gate_q_3;
  r_5074262576(0.7267621990536098, 1.703685558031091) _gate_q_1;
  z _gate_q_9;
  h _gate_q_10;
}