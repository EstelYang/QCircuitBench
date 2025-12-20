gate r_5105751232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.08478504430022, -1.186554255357228, 1.186554255357228) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5105754256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6295391032232478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105759248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.308551100466777) _gate_q_0;
  u1(-0.4937111821827971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7559967105056626, 0, -5.308551100466777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7559967105056626, 5.802262282649574, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105753632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.188743861550524) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  crx(3.8580141259014966) _gate_q_3, _gate_q_0;
  r_5105751232(1.08478504430022, 0.3842420714376686) _gate_q_2;
  rx(5.194539683854625) _gate_q_5;
  dcx _gate_q_1, _gate_q_4;
  id _gate_q_4;
  crx(4.746853152138297) _gate_q_3, _gate_q_2;
  u1(5.799627958066674) _gate_q_5;
  rxx_5105754256(1.6295391032232478) _gate_q_0, _gate_q_1;
  cz _gate_q_3, _gate_q_1;
  cu3_5105759248(3.5119934210113253, 5.802262282649574, 4.81483991828398) _gate_q_2, _gate_q_0;
  dcx _gate_q_5, _gate_q_4;
  y _gate_q_3;
  t _gate_q_1;
  id _gate_q_5;
  iswap _gate_q_4, _gate_q_0;
  rz(2.682683128262891) _gate_q_2;
  ryy_5105753632(5.188743861550524) _gate_q_3, _gate_q_1;
  csx _gate_q_5, _gate_q_4;
  csx _gate_q_0, _gate_q_2;
  U(5.443586181564331, 1.3651693918198151, 5.6237351843758105) _gate_q_5;
  p(2.8752357918895504) _gate_q_3;
  crz(3.456450339182365) _gate_q_2, _gate_q_4;
  cz _gate_q_1, _gate_q_0;
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
gate r_5105759392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.681331846110559, 2.3008015765757777, -2.3008015765757777) _gate_q_0;
}
gate rzz_5105752624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3161575858606636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5105747968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.23278719301469) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105746672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1385746727039, -0.5854456582896265, 0.5854456582896265) _gate_q_0;
}
gate cu1_5105746864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.193793622599157) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.193793622599157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.193793622599157) _gate_q_1;
}
gate cu1_5105747440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.36532434329335634) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.36532434329335634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.36532434329335634) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cx _gate_q_1, _gate_q_4;
  U(2.402126230124206, 2.7221740920933257, 0.9954505785010912) _gate_q_0;
  crz(1.8025570408913527) _gate_q_5, _gate_q_3;
  ry(3.725114264644595) _gate_q_2;
  rz(0.21575690135715941) _gate_q_5;
  csdg _gate_q_2, _gate_q_1;
  sxdg _gate_q_4;
  iswap _gate_q_3, _gate_q_0;
  r_5105759392(4.681331846110559, 3.871597903370674) _gate_q_5;
  rzz_5105752624(3.3161575858606636) _gate_q_3, _gate_q_0;
  u1(1.901841094726673) _gate_q_2;
  sx _gate_q_4;
  ry(1.637900481735253) _gate_q_1;
  ecr _gate_q_5, _gate_q_3;
  z _gate_q_2;
  U(2.7601168380283063, 3.890745131626359, 3.9111218869818387) _gate_q_1;
  rxx_5105747968(3.23278719301469) _gate_q_0, _gate_q_4;
  sx _gate_q_1;
  swap _gate_q_3, _gate_q_0;
  r_5105746672(5.1385746727039, 0.9853506685052701) _gate_q_4;
  cx _gate_q_2, _gate_q_5;
  u1(2.3858844125318694) _gate_q_0;
  cu1_5105746864(4.387587245198314) _gate_q_5, _gate_q_1;
  cu1_5105747440(0.7306486865867127) _gate_q_2, _gate_q_3;
  z _gate_q_4;
}