gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107321792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9045755142688305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3691658831334215) _gate_q_1;
  ry(-1.3691658831334215) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9045755142688305) _gate_q_0;
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
gate rzx_5107321840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13367285798261147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_plus_yy_5107321168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.203131612572319) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8338984649253542) _gate_q_1;
  ry(-0.8338984649253542) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.203131612572319) _gate_q_0;
}
gate rzx_5107322656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.23516412842158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107320736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.996096585571938) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47252735474054625) _gate_q_1;
  ry(-0.47252735474054625) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.996096585571938) _gate_q_0;
}
gate rxx_5107320784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2164496109037318) _gate_q_1;
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
gate xx_minus_yy_5107321456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4619265721733514) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3738545638537736) _gate_q_0;
  ry(-1.3738545638537736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4619265721733514) _gate_q_1;
}
gate cu3_5107320496(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6804364332126371) _gate_q_0;
  u1(0.5610030642058769) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8710999393234526, 0, -1.6804364332126371) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8710999393234526, 1.1194333690067604, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5107320880(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.494745482671777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107320640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0337126330729394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107320208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.295275475935601) _gate_q_0;
  u1(-2.423213682657344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7364871699203337, 0, -3.295275475935601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7364871699203337, 5.718489158592945, 0) _gate_q_1;
}
gate ryy_5107328512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.964740323064852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107325104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2457386609282444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107328464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.735222129960395, 3.832843393930573, -3.832843393930573) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  dcx _gate_q_6, _gate_q_1;
  xx_plus_yy_5107321792(2.738331766266843, 3.9045755142688305) _gate_q_9, _gate_q_2;
  h _gate_q_7;
  id _gate_q_8;
  ch _gate_q_3, _gate_q_4;
  t _gate_q_5;
  s _gate_q_0;
  h _gate_q_7;
  ecr _gate_q_1, _gate_q_2;
  sdg _gate_q_5;
  rzx_5107321840(0.13367285798261147) _gate_q_6, _gate_q_0;
  x _gate_q_9;
  y _gate_q_3;
  sxdg _gate_q_4;
  y _gate_q_8;
  sdg _gate_q_2;
  csx _gate_q_5, _gate_q_7;
  tdg _gate_q_1;
  crx(4.111168935143167) _gate_q_0, _gate_q_6;
  cp(5.441943935913058) _gate_q_4, _gate_q_3;
  x _gate_q_9;
  t _gate_q_8;
  xx_plus_yy_5107321168(1.6677969298507085, 4.203131612572319) _gate_q_0, _gate_q_4;
  rzx_5107322656(4.23516412842158) _gate_q_7, _gate_q_9;
  p(3.901243098346389) _gate_q_8;
  xx_plus_yy_5107320736(0.9450547094810925, 2.996096585571938) _gate_q_1, _gate_q_2;
  sdg _gate_q_3;
  rxx_5107320784(0.2164496109037318) _gate_q_5, _gate_q_6;
  dcx _gate_q_1, _gate_q_8;
  x _gate_q_4;
  cs _gate_q_3, _gate_q_9;
  ecr _gate_q_7, _gate_q_6;
  x _gate_q_2;
  ecr _gate_q_0, _gate_q_5;
  xx_minus_yy_5107321456(2.747709127707547, 2.4619265721733514) _gate_q_0, _gate_q_8;
  cu3_5107320496(1.7421998786469053, 1.1194333690067604, 2.241439497418514) _gate_q_3, _gate_q_7;
  dcx _gate_q_4, _gate_q_9;
  iswap _gate_q_5, _gate_q_1;
  csx _gate_q_6, _gate_q_2;
  p(5.403261021808335) _gate_q_7;
  rzz_5107320880(4.494745482671777) _gate_q_2, _gate_q_8;
  rxx_5107320640(2.0337126330729394) _gate_q_6, _gate_q_9;
  h _gate_q_4;
  cu3_5107320208(5.472974339840667, 5.718489158592945, 0.8720617932782568) _gate_q_5, _gate_q_1;
  crz(5.708580508373768) _gate_q_3, _gate_q_0;
  swap _gate_q_2, _gate_q_8;
  sxdg _gate_q_9;
  swap _gate_q_4, _gate_q_0;
  sxdg _gate_q_6;
  u3(2.477575946530416, 6.104644271112597, 4.604320775846303) _gate_q_1;
  rx(1.6994259903902187) _gate_q_7;
  ryy_5107328512(5.964740323064852) _gate_q_3, _gate_q_5;
  sx _gate_q_8;
  x _gate_q_7;
  id _gate_q_4;
  U(2.392423079531369, 3.71114281962672, 3.655636270551612) _gate_q_3;
  u1(1.475639424090847) _gate_q_5;
  tdg _gate_q_1;
  u1(5.097275779934568) _gate_q_9;
  dcx _gate_q_6, _gate_q_0;
  rz(2.2904278713573) _gate_q_2;
  rxx_5107325104(3.2457386609282444) _gate_q_8, _gate_q_7;
  r_5107328464(4.735222129960395, 5.40363972072547) _gate_q_0;
  id _gate_q_3;
  cry(4.278261861939839) _gate_q_6, _gate_q_5;
  rx(5.8530317866264205) _gate_q_9;
  crx(2.9252053114494587) _gate_q_4, _gate_q_2;
  p(4.624344774081178) _gate_q_1;
}
gate rzx_5107066416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4850207807159571) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107061040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.872982708104012, 2.3636355206231445, -2.3636355206231445) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5107058016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.38153177951817385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107060320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.138749923732081) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7311286341871803) _gate_q_1;
  ry(-1.7311286341871803) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.138749923732081) _gate_q_0;
}
gate rzz_5107060272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.10708958800528462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107060080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.423326721223711) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107061280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6374937965418335) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.774443685964333) _gate_q_1;
  ry(-2.774443685964333) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6374937965418335) _gate_q_0;
}
gate rzx_5107071888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.092648278800392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107070688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.918547842853126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107064592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.185320194126188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107072416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7744246596936057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107066944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5877849208736576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107061232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.15589520509068983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107061616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1234058743332764) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.528109825120613) _gate_q_0;
  ry(-2.528109825120613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1234058743332764) _gate_q_1;
}
gate cu1_5107071312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1655323065873078) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1655323065873078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1655323065873078) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cry(5.12262451818647) _gate_q_3, _gate_q_4;
  rzx_5107066416(0.4850207807159571) _gate_q_2, _gate_q_6;
  ry(4.884737760643928) _gate_q_0;
  iswap _gate_q_9, _gate_q_1;
  cry(4.294312540353731) _gate_q_8, _gate_q_5;
  x _gate_q_7;
  swap _gate_q_5, _gate_q_9;
  r_5107061040(5.872982708104012, 3.934431847418041) _gate_q_7;
  cy _gate_q_0, _gate_q_4;
  csdg _gate_q_3, _gate_q_1;
  tdg _gate_q_8;
  p(4.775141149440521) _gate_q_2;
  U(2.0487398818963753, 2.5381638862738845, 1.8471415990441118) _gate_q_6;
  rxx_5107058016(0.38153177951817385) _gate_q_8, _gate_q_3;
  cs _gate_q_4, _gate_q_6;
  xx_plus_yy_5107060320(3.4622572683743607, 5.138749923732081) _gate_q_9, _gate_q_1;
  tdg _gate_q_0;
  swap _gate_q_2, _gate_q_5;
  s _gate_q_7;
  rzz_5107060272(0.10708958800528462) _gate_q_7, _gate_q_6;
  dcx _gate_q_0, _gate_q_2;
  ryy_5107060080(5.423326721223711) _gate_q_3, _gate_q_5;
  y _gate_q_4;
  crz(3.806829549642178) _gate_q_8, _gate_q_9;
  u1(2.0007960596291867) _gate_q_1;
  y _gate_q_6;
  xx_plus_yy_5107061280(5.548887371928666, 2.6374937965418335) _gate_q_7, _gate_q_1;
  rzx_5107071888(5.092648278800392) _gate_q_4, _gate_q_8;
  id _gate_q_9;
  dcx _gate_q_5, _gate_q_3;
  z _gate_q_0;
  rx(1.6308953759677591) _gate_q_2;
  ryy_5107070688(5.918547842853126) _gate_q_0, _gate_q_2;
  rzx_5107064592(2.185320194126188) _gate_q_4, _gate_q_8;
  ecr _gate_q_1, _gate_q_5;
  dcx _gate_q_6, _gate_q_3;
  rzx_5107072416(2.7744246596936057) _gate_q_7, _gate_q_9;
  ry(5.60890092165144) _gate_q_9;
  cx _gate_q_8, _gate_q_7;
  ryy_5107066944(1.5877849208736576) _gate_q_0, _gate_q_5;
  h _gate_q_3;
  s _gate_q_1;
  iswap _gate_q_4, _gate_q_6;
  h _gate_q_2;
  ecr _gate_q_3, _gate_q_9;
  rxx_5107061232(0.15589520509068983) _gate_q_1, _gate_q_6;
  cu(0.11022625771695202, 2.3501726678779367, 1.5948206786133372, 0.3278213366950607) _gate_q_0, _gate_q_7;
  xx_minus_yy_5107061616(5.056219650241226, 1.1234058743332764) _gate_q_5, _gate_q_2;
  tdg _gate_q_4;
  u1(6.250787340510504) _gate_q_8;
  cy _gate_q_4, _gate_q_2;
  u3(0.757689212386892, 1.1281386585546274, 5.834740689079479) _gate_q_9;
  x _gate_q_1;
  cu1_5107071312(4.3310646131746156) _gate_q_8, _gate_q_5;
  u2(2.0200622875972143, 6.144587747459935) _gate_q_6;
  s _gate_q_3;
  rx(1.7674111523403204) _gate_q_0;
  y _gate_q_7;
  cs _gate_q_9, _gate_q_7;
  cx _gate_q_6, _gate_q_3;
  ch _gate_q_5, _gate_q_2;
  cx _gate_q_4, _gate_q_8;
  u3(5.9966850767433275, 5.507291145321193, 1.1061911500334711) _gate_q_0;
  ry(3.9656005653877253) _gate_q_1;
}