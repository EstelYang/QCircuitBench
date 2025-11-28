gate ryy_5070860944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.886075342550377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070848848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6536858379748685, 1.7274735707443414, -1.7274735707443414) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070861328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.374732332813158) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2412339829660471) _gate_q_0;
  ry(-0.2412339829660471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.374732332813158) _gate_q_1;
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
gate rxx_5070858976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5549984221313166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ryy_5070860944(4.886075342550377) _gate_q_3, _gate_q_0;
  cx _gate_q_1, _gate_q_4;
  h _gate_q_2;
  r_5070848848(2.6536858379748685, 3.298269897539238) _gate_q_4;
  xx_minus_yy_5070861328(0.4824679659320942, 3.374732332813158) _gate_q_3, _gate_q_2;
  s _gate_q_1;
  rz(4.313620990864081) _gate_q_0;
  ecr _gate_q_1, _gate_q_3;
  rxx_5070858976(0.5549984221313166) _gate_q_2, _gate_q_4;
  rx(4.473589784950454) _gate_q_0;
  h _gate_q_2;
  sdg _gate_q_1;
  u2(3.628900596214294, 0.2867718629685045) _gate_q_0;
  z _gate_q_4;
  U(3.4448195365764716, 2.030326257259676, 0.15342892588974272) _gate_q_3;
  cx _gate_q_3, _gate_q_4;
  ecr _gate_q_2, _gate_q_0;
  u3(2.6665996384513377, 3.3059690006804145, 5.328791807169435) _gate_q_1;
}
gate ryy_5070849376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.467368230397081) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070856000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.294708438639086, 2.704565693631924, -2.704565693631924) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5070854080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1871023461900214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070855424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.068859155510305, -0.7231543787279012, 0.7231543787279012) _gate_q_0;
}
gate ryy_5070851968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3441883638093834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ryy_5070849376(0.467368230397081) _gate_q_2, _gate_q_1;
  z _gate_q_0;
  r_5070856000(5.294708438639086, 4.275362020426821) _gate_q_4;
  sx _gate_q_3;
  csdg _gate_q_1, _gate_q_2;
  rz(4.730930317054463) _gate_q_0;
  sxdg _gate_q_3;
  sxdg _gate_q_4;
  dcx _gate_q_2, _gate_q_3;
  rzz_5070854080(1.1871023461900214) _gate_q_1, _gate_q_4;
  u3(0.8333033792267674, 2.1614924984710036, 2.371658861414784) _gate_q_0;
  r_5070855424(5.068859155510305, 0.8476419480669953) _gate_q_0;
  cry(0.6626578266043105) _gate_q_4, _gate_q_3;
  ryy_5070851968(1.3441883638093834) _gate_q_2, _gate_q_1;
  crz(3.929544132994524) _gate_q_3, _gate_q_0;
  swap _gate_q_4, _gate_q_1;
  p(1.1201934254640051) _gate_q_2;
}