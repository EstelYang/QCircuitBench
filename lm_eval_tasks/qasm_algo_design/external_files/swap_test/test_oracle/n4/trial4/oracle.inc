gate rxx_5105276384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.241850953305184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105275520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.978620485375575, -1.5623199296605779, 1.5623199296605779) _gate_q_0;
}
gate cu1_5105279408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.520251797774515) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.520251797774515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.520251797774515) _gate_q_1;
}
gate ryy_5105274608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.416614707296754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105273936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.159504098751505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  rxx_5105276384(4.241850953305184) _gate_q_1, _gate_q_2;
  tdg _gate_q_3;
  r_5105275520(4.978620485375575, 0.008476397134318596) _gate_q_0;
  t _gate_q_1;
  u2(4.715583955671586, 4.3325177821358) _gate_q_0;
  cu1_5105279408(3.04050359554903) _gate_q_3, _gate_q_2;
  ryy_5105274608(2.416614707296754) _gate_q_3, _gate_q_1;
  swap _gate_q_2, _gate_q_0;
  rzz_5105273936(4.159504098751505) _gate_q_3, _gate_q_1;
  t _gate_q_2;
  sxdg _gate_q_0;
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
gate rzz_5104439696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1169549393548908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104441760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9447388404948984, 0.7910075930768095, -0.7910075930768095) _gate_q_0;
}
gate xx_minus_yy_5104444112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0706301680080323) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9757295717239096) _gate_q_0;
  ry(-1.9757295717239096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0706301680080323) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3 {
  csx _gate_q_1, _gate_q_0;
  cu(3.8773173501357414, 4.601474308540707, 3.3419376833516483, 1.204576969066475) _gate_q_2, _gate_q_3;
  cry(0.0813498120152948) _gate_q_3, _gate_q_2;
  rzz_5104439696(1.1169549393548908) _gate_q_0, _gate_q_1;
  r_5104441760(1.9447388404948984, 2.361803919871706) _gate_q_1;
  tdg _gate_q_2;
  cx _gate_q_0, _gate_q_3;
  xx_minus_yy_5104444112(3.9514591434478192, 2.0706301680080323) _gate_q_0, _gate_q_2;
  cz _gate_q_3, _gate_q_1;
}