gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5070726512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1502492899030847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070731216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.026283221065368) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  iswap _gate_q_2, _gate_q_4;
  iswap _gate_q_0, _gate_q_3;
  ry(2.4850393339117516) _gate_q_1;
  s _gate_q_3;
  u1(5.1058495795698065) _gate_q_4;
  rx(3.6577565018475378) _gate_q_2;
  tdg _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_2;
  rzz_5070726512(3.1502492899030847) _gate_q_3, _gate_q_4;
  p(4.180077883227565) _gate_q_1;
  rzx_5070731216(5.026283221065368) _gate_q_4, _gate_q_3;
  s _gate_q_1;
  rz(5.2879836744466875) _gate_q_2;
  x _gate_q_0;
  tdg _gate_q_3;
  cy _gate_q_2, _gate_q_0;
  cu(1.3255709426109188, 4.916343353377972, 5.486511573385633, 1.0360608222315861) _gate_q_4, _gate_q_1;
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
gate cu1_5070730112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.33309672032748) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.33309672032748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.33309672032748) _gate_q_1;
}
gate r_5070728048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.009634724226237, -1.1268318327652942, 1.1268318327652942) _gate_q_0;
}
gate cu3_5070730208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4033973917085922) _gate_q_0;
  u1(0.22714384777224284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2648727527494015, 0, -1.4033973917085922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2648727527494015, 1.1762535439363495, 0) _gate_q_1;
}
gate rxx_5070725312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.045549363705943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  ecr _gate_q_3, _gate_q_0;
  rz(3.7515637607766963) _gate_q_4;
  swap _gate_q_1, _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  cu1_5070730112(0.66619344065496) _gate_q_4, _gate_q_0;
  sx _gate_q_1;
  crx(1.2923030503030308) _gate_q_0, _gate_q_2;
  swap _gate_q_1, _gate_q_4;
  r_5070728048(5.009634724226237, 0.44396449402960236) _gate_q_3;
  id _gate_q_3;
  cu3_5070730208(2.529745505498803, 1.1762535439363495, 1.6305412394808352) _gate_q_2, _gate_q_4;
  rxx_5070725312(4.045549363705943) _gate_q_1, _gate_q_0;
  cy _gate_q_0, _gate_q_4;
  cu(3.9644116594979057, 1.4991777257398895, 2.3986187616244528, 3.7824218389901363) _gate_q_3, _gate_q_1;
  tdg _gate_q_2;
}