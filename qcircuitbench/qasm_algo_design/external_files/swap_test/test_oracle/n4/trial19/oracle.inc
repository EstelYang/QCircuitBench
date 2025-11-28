gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzz_5070302112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.419388494705337) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  cs _gate_q_1, _gate_q_0;
  rzz_5070302112(5.419388494705337) _gate_q_2, _gate_q_3;
  x _gate_q_2;
  crx(0.48290088536840226) _gate_q_3, _gate_q_0;
  h _gate_q_1;
  u3(4.824864513705495, 2.387514159506832, 2.507938873109311) _gate_q_3;
  id _gate_q_0;
  cp(3.9765018600152424) _gate_q_2, _gate_q_1;
  ry(2.790243282130835) _gate_q_0;
  tdg _gate_q_2;
  cry(2.401338968641259) _gate_q_3, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070729344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.93954668046793) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.818198647603164) _gate_q_0;
  ry(-2.818198647603164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.93954668046793) _gate_q_1;
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
gate r_5070727616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.24424838408089, 1.3127159056536768, -1.3127159056536768) _gate_q_0;
}
gate cu3_5070727664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.664434876153036) _gate_q_0;
  u1(0.9248097811106988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0649457777863798, 0, -1.664434876153036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0649457777863798, 0.7396250950423373, 0) _gate_q_1;
}
gate rxx_5070728048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10218753231876539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  t _gate_q_0;
  xx_minus_yy_5070729344(5.636397295206328, 5.93954668046793) _gate_q_1, _gate_q_3;
  ry(4.181149849501904) _gate_q_2;
  z _gate_q_0;
  ecr _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cu(3.490375144774751, 5.658219010326394, 3.1003030256612196, 3.1733055229891836) _gate_q_3, _gate_q_1;
  p(1.250855646863339) _gate_q_2;
  r_5070727616(5.24424838408089, 2.8835122324485734) _gate_q_0;
  cu3_5070727664(2.1298915555727596, 0.7396250950423373, 2.589244657263735) _gate_q_1, _gate_q_2;
  rxx_5070728048(0.10218753231876539) _gate_q_3, _gate_q_0;
}