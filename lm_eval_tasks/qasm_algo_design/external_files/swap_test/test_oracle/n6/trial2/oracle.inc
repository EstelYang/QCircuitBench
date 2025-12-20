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
gate rzx_5105584704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.976924901804497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105586480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.241510090752145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  y _gate_q_2;
  ry(2.028455830583146) _gate_q_3;
  cy _gate_q_4, _gate_q_1;
  u3(5.475723389350483, 2.4527401408090657, 4.539333763424263) _gate_q_0;
  h _gate_q_5;
  crz(4.3302985696194005) _gate_q_1, _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
  y _gate_q_5;
  ry(5.321636718036473) _gate_q_2;
  cz _gate_q_5, _gate_q_4;
  rx(2.293473683492444) _gate_q_3;
  p(2.7172223947481924) _gate_q_2;
  sx _gate_q_0;
  h _gate_q_1;
  h _gate_q_0;
  rzx_5105584704(5.976924901804497) _gate_q_1, _gate_q_3;
  crz(0.8885333266331161) _gate_q_4, _gate_q_5;
  u3(3.8740696897419826, 6.133391172016415, 5.531002753220807) _gate_q_2;
  h _gate_q_4;
  x _gate_q_1;
  cz _gate_q_3, _gate_q_2;
  rx(4.972160262431741) _gate_q_0;
  u3(0.8477761327125724, 1.384274942418745, 5.5754195703200224) _gate_q_5;
  U(4.5369207775138545, 1.589663134890186, 1.4968714630342719) _gate_q_0;
  y _gate_q_1;
  u1(5.369780494855574) _gate_q_3;
  rxx_5105586480(6.241510090752145) _gate_q_5, _gate_q_4;
  u1(3.841062862833496) _gate_q_2;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5105587344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2553097209635973, 0.3097820850945807, -0.3097820850945807) _gate_q_0;
}
gate rzz_5105582208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8966477732377274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105584080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.20507948764134395) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1642632353211553) _gate_q_0;
  ry(-1.1642632353211553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.20507948764134395) _gate_q_1;
}
gate rxx_5105588064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.904936496510735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  ch _gate_q_3, _gate_q_4;
  dcx _gate_q_2, _gate_q_5;
  x _gate_q_0;
  rx(3.372467850598614) _gate_q_1;
  cry(0.7840006888695054) _gate_q_2, _gate_q_0;
  csx _gate_q_1, _gate_q_3;
  sxdg _gate_q_4;
  r_5105587344(3.2553097209635973, 1.8805784118894773) _gate_q_5;
  t _gate_q_1;
  id _gate_q_2;
  cx _gate_q_0, _gate_q_5;
  rzz_5105582208(2.8966477732377274) _gate_q_4, _gate_q_3;
  dcx _gate_q_1, _gate_q_4;
  xx_minus_yy_5105584080(2.3285264706423106, 0.20507948764134395) _gate_q_2, _gate_q_0;
  ch _gate_q_3, _gate_q_5;
  id _gate_q_0;
  rxx_5105588064(4.904936496510735) _gate_q_2, _gate_q_5;
  cp(3.648081847691266) _gate_q_4, _gate_q_3;
  y _gate_q_1;
  ry(0.4930131372519237) _gate_q_3;
  u3(2.2824382574309228, 1.8818966600393032, 4.381938901333166) _gate_q_2;
  id _gate_q_4;
  rz(3.984450502220094) _gate_q_1;
  iswap _gate_q_0, _gate_q_5;
}