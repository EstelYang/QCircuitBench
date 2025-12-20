gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5070902032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.27576260148680365) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.27576260148680365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.27576260148680365) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5070903472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.22395365926471) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  ry(5.232574871221072) _gate_q_5;
  rz(0.37899577907239435) _gate_q_2;
  cs _gate_q_3, _gate_q_0;
  cu1_5070902032(0.5515252029736073) _gate_q_1, _gate_q_4;
  sdg _gate_q_2;
  rx(0.6125212075918184) _gate_q_3;
  u3(2.3889667918315722, 4.814554791621498, 4.8066258205981525) _gate_q_1;
  t _gate_q_4;
  ry(0.06783826489232381) _gate_q_0;
  u2(5.674915934840259, 5.456937671906899) _gate_q_5;
  dcx _gate_q_0, _gate_q_5;
  p(1.128050734436827) _gate_q_3;
  u3(4.75999853050722, 5.9772301864874064, 6.231147763999748) _gate_q_2;
  rzz_5070903472(2.22395365926471) _gate_q_4, _gate_q_1;
  dcx _gate_q_5, _gate_q_1;
  iswap _gate_q_4, _gate_q_0;
  cu(4.5280757798771125, 0.857385010122598, 2.6109109858071062, 0.4158660740988709) _gate_q_2, _gate_q_3;
  csx _gate_q_0, _gate_q_3;
  crx(5.000601237812663) _gate_q_4, _gate_q_1;
  csdg _gate_q_5, _gate_q_2;
  cp(1.396496841859202) _gate_q_2, _gate_q_1;
  cy _gate_q_3, _gate_q_0;
  cry(0.19055060953988795) _gate_q_5, _gate_q_4;
}
gate cu3_5070901312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7911344324643879) _gate_q_0;
  u1(-0.49322122549946423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.007411911690254, 0, -1.7911344324643879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.007411911690254, 2.284355657963852, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070901504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.523338873321191) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3001925791433277) _gate_q_0;
  ry(-0.3001925791433277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.523338873321191) _gate_q_1;
}
gate r_5070903616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.534771732447911, 1.6511509839826015, -1.6511509839826015) _gate_q_0;
}
gate cu1_5070901120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.55140778438724) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.55140778438724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.55140778438724) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  sdg _gate_q_0;
  cu3_5070901312(2.014823823380508, 2.284355657963852, 1.2979132069649235) _gate_q_4, _gate_q_5;
  z _gate_q_3;
  sdg _gate_q_1;
  t _gate_q_2;
  cs _gate_q_2, _gate_q_0;
  xx_minus_yy_5070901504(0.6003851582866554, 5.523338873321191) _gate_q_3, _gate_q_4;
  sx _gate_q_5;
  u2(0.04863687489542986, 4.555023397408534) _gate_q_1;
  cs _gate_q_2, _gate_q_4;
  s _gate_q_0;
  rx(6.17788157960919) _gate_q_1;
  rx(0.14146468666295806) _gate_q_3;
  sx _gate_q_5;
  iswap _gate_q_4, _gate_q_5;
  r_5070903616(4.534771732447911, 3.221947310777498) _gate_q_1;
  cu1_5070901120(3.10281556877448) _gate_q_3, _gate_q_0;
  t _gate_q_2;
  csx _gate_q_5, _gate_q_2;
  crx(6.242966705869617) _gate_q_1, _gate_q_0;
  cu(3.6741237407793417, 3.8998149105641784, 1.1347653451551807, 4.906216822126042) _gate_q_3, _gate_q_4;
  ry(1.3005596753662425) _gate_q_4;
  cu(4.35515246750903, 0.9559937975309779, 4.6151008962214695, 4.298533074159709) _gate_q_0, _gate_q_5;
  cu(6.039237581353568, 0.5779454099678135, 3.2916026722801464, 1.3235785410448735) _gate_q_1, _gate_q_3;
  sdg _gate_q_2;
}