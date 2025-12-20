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
gate r_5105793504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.385950669349387, 0.9041831296931244, -0.9041831296931244) _gate_q_0;
}
gate ryy_5105793840(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.565254062517203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105793312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5059030597098326) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5059030597098326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5059030597098326) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  u2(1.1183883652961, 1.7739037832643219) _gate_q_2;
  csdg _gate_q_5, _gate_q_1;
  U(3.734682680780247, 4.686391919295719, 3.6796442486330445) _gate_q_3;
  rx(3.551332409249932) _gate_q_0;
  tdg _gate_q_4;
  crx(2.2206535939595637) _gate_q_4, _gate_q_5;
  id _gate_q_2;
  cp(6.100216784852183) _gate_q_1, _gate_q_3;
  h _gate_q_0;
  u2(2.6569221301423074, 4.90226819357773) _gate_q_3;
  sxdg _gate_q_1;
  rz(5.6244567346181915) _gate_q_5;
  cx _gate_q_2, _gate_q_4;
  rx(3.751924412850558) _gate_q_0;
  u2(5.737219601292766, 3.193446606933243) _gate_q_5;
  cy _gate_q_3, _gate_q_4;
  crz(1.9588678971601032) _gate_q_2, _gate_q_1;
  r_5105793504(4.385950669349387, 2.474979456488021) _gate_q_0;
  z _gate_q_2;
  ry(5.70753322668294) _gate_q_3;
  p(0.4140689106059968) _gate_q_4;
  ryy_5105793840(5.565254062517203) _gate_q_1, _gate_q_0;
  h _gate_q_5;
  cry(1.7505256050002562) _gate_q_5, _gate_q_3;
  cu1_5105793312(3.0118061194196653) _gate_q_1, _gate_q_2;
  crz(0.6369844979298448) _gate_q_4, _gate_q_0;
}
gate rzx_5105785248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.389958648217233) _gate_q_1;
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
gate cu3_5105789472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.005489937188557) _gate_q_0;
  u1(0.45280084036331525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.391831757539346, 0, -4.005489937188557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.391831757539346, 3.552689096825241, 0) _gate_q_1;
}
gate ryy_5105789808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.4931021607916195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105789664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2282079290492645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105783856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.044467413142908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  y _gate_q_2;
  rz(5.979323783798552) _gate_q_4;
  swap _gate_q_0, _gate_q_3;
  p(5.373673998453361) _gate_q_5;
  rx(0.5661082792557683) _gate_q_1;
  cu(1.9897526566978012, 4.178300216667214, 1.7287238522356476, 6.1265581464169525) _gate_q_2, _gate_q_3;
  rzx_5105785248(3.389958648217233) _gate_q_0, _gate_q_4;
  rx(5.125701029581344) _gate_q_1;
  tdg _gate_q_5;
  iswap _gate_q_4, _gate_q_5;
  cu3_5105789472(2.783663515078692, 3.552689096825241, 4.458290777551872) _gate_q_2, _gate_q_0;
  ryy_5105789808(5.4931021607916195) _gate_q_1, _gate_q_3;
  csdg _gate_q_2, _gate_q_0;
  ryy_5105789664(4.2282079290492645) _gate_q_1, _gate_q_5;
  id _gate_q_4;
  p(5.220389584214001) _gate_q_3;
  ryy_5105783856(2.044467413142908) _gate_q_0, _gate_q_3;
  cz _gate_q_2, _gate_q_5;
  cx _gate_q_1, _gate_q_4;
  u3(0.5118932747713351, 3.304745856996417, 2.1007003226148524) _gate_q_0;
  cs _gate_q_4, _gate_q_1;
  crx(1.395363027709012) _gate_q_5, _gate_q_2;
  p(6.113006413247274) _gate_q_3;
}