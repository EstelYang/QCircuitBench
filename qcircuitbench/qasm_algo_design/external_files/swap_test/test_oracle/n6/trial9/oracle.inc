gate cu3_5105750272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.052989182391155) _gate_q_0;
  u1(-0.1507600742542281) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9787458628355843, 0, -6.052989182391155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9787458628355843, 6.203749256645383, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5105761408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.541256710806764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105142672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.569427023278975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
  cu3_5105750272(1.9574917256711686, 6.203749256645383, 5.902229108136927) _gate_q_3, _gate_q_2;
  z _gate_q_1;
  cry(1.9499497170556042) _gate_q_5, _gate_q_0;
  sdg _gate_q_4;
  cx _gate_q_3, _gate_q_0;
  U(3.48138548259017, 4.952235316158407, 5.336385441536872) _gate_q_1;
  tdg _gate_q_5;
  z _gate_q_2;
  rz(4.365913194969224) _gate_q_4;
  tdg _gate_q_4;
  csdg _gate_q_1, _gate_q_3;
  ryy_5105761408(2.541256710806764) _gate_q_5, _gate_q_2;
  rz(2.3177624930020304) _gate_q_0;
  cry(1.3471022810973787) _gate_q_1, _gate_q_5;
  ch _gate_q_3, _gate_q_4;
  z _gate_q_2;
  rz(2.696716268876889) _gate_q_0;
  ry(1.7472812824545558) _gate_q_1;
  swap _gate_q_4, _gate_q_2;
  crz(2.5310623103674117) _gate_q_0, _gate_q_5;
  p(3.613475675700136) _gate_q_3;
  z _gate_q_3;
  sdg _gate_q_2;
  rxx_5105142672(2.569427023278975) _gate_q_4, _gate_q_5;
  csx _gate_q_0, _gate_q_1;
}
gate r_5105582928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.934761778176337, 0.8916203301753431, -0.8916203301753431) _gate_q_0;
}
gate ryy_5105595648(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5220311342890508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105588448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.200168217089273, 2.531732448066058, -2.531732448066058) _gate_q_0;
}
gate cu3_5105594640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.772723147025954) _gate_q_0;
  u1(1.697310658912686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.931619972577486, 0, -2.772723147025954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.931619972577486, 1.0754124881132683, 0) _gate_q_1;
}
gate rzx_5105592912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.226545033532045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  u1(3.215182173723029) _gate_q_0;
  r_5105582928(2.934761778176337, 2.4624166569702397) _gate_q_1;
  ryy_5105595648(0.5220311342890508) _gate_q_3, _gate_q_4;
  cy _gate_q_5, _gate_q_2;
  r_5105588448(5.200168217089273, 4.1025287748609545) _gate_q_5;
  t _gate_q_0;
  swap _gate_q_1, _gate_q_4;
  cz _gate_q_3, _gate_q_2;
  cu3_5105594640(5.863239945154972, 1.0754124881132683, 4.47003380593864) _gate_q_0, _gate_q_2;
  swap _gate_q_4, _gate_q_1;
  p(6.021050929641321) _gate_q_3;
  ry(6.015006010712773) _gate_q_5;
  id _gate_q_2;
  p(4.788408678661211) _gate_q_3;
  rz(4.082959172429035) _gate_q_4;
  y _gate_q_1;
  rzx_5105592912(3.226545033532045) _gate_q_0, _gate_q_5;
  sdg _gate_q_1;
  sxdg _gate_q_3;
  ecr _gate_q_4, _gate_q_0;
  h _gate_q_2;
  y _gate_q_5;
  csdg _gate_q_5, _gate_q_2;
  rx(1.6075893966770647) _gate_q_1;
  cu(4.867246755162645, 5.685887874284258, 4.9214824789367855, 3.873688099191214) _gate_q_0, _gate_q_4;
  y _gate_q_3;
}