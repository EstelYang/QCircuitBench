gate cu1_5105583888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.935661587651025) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.935661587651025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.935661587651025) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105582688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9641818104885234) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.025148923506068) _gate_q_0;
  ry(-2.025148923506068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9641818104885234) _gate_q_1;
}
gate r_5105584896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.238176190283034, -0.36302453860927497, 0.36302453860927497) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  rz(4.070458834184996) _gate_q_0;
  cu1_5105583888(5.87132317530205) _gate_q_1, _gate_q_2;
  cs _gate_q_3, _gate_q_4;
  rz(4.312429938734122) _gate_q_0;
  sdg _gate_q_4;
  u2(3.7696661950708794, 0.02784307804263547) _gate_q_1;
  ch _gate_q_3, _gate_q_2;
  sxdg _gate_q_2;
  crx(0.2905213668581023) _gate_q_1, _gate_q_4;
  cz _gate_q_0, _gate_q_3;
  xx_minus_yy_5105582688(4.050297847012136, 1.9641818104885234) _gate_q_2, _gate_q_1;
  y _gate_q_4;
  rz(2.3902692996495154) _gate_q_0;
  r_5105584896(3.238176190283034, 1.2077717881856216) _gate_q_3;
  cy _gate_q_0, _gate_q_3;
  cry(5.983297363413886) _gate_q_1, _gate_q_2;
  s _gate_q_4;
}
gate cu3_5105585856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.602880124384551) _gate_q_0;
  u1(-1.3808012799447613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.937259030185837, 0, -4.602880124384551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.937259030185837, 5.983681404329313, 0) _gate_q_1;
}
gate r_5105585952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8099710956798765, 2.536835502833936, -2.536835502833936) _gate_q_0;
}
gate ryy_5105584704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6893534166968034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105586048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.070999944618254) _gate_q_0;
  u1(-0.9271213363541959) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.972754425222636, 0, -4.070999944618254) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.972754425222636, 4.99812128097245, 0) _gate_q_1;
}
gate r_5105589024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.317599566551817, 1.1555873414900688, -1.1555873414900688) _gate_q_0;
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
gate rxx_5105584848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7927076703773484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cz _gate_q_1, _gate_q_2;
  cu3_5105585856(5.874518060371674, 5.983681404329313, 3.2220788444397903) _gate_q_0, _gate_q_3;
  r_5105585952(5.8099710956798765, 4.107631829628833) _gate_q_4;
  cs _gate_q_2, _gate_q_3;
  ryy_5105584704(2.6893534166968034) _gate_q_1, _gate_q_0;
  ry(2.586905234782461) _gate_q_4;
  crx(1.7995776216518173) _gate_q_4, _gate_q_2;
  rx(5.652122760201368) _gate_q_0;
  cu3_5105586048(5.945508850445272, 4.99812128097245, 3.143878608264058) _gate_q_1, _gate_q_3;
  z _gate_q_4;
  rz(1.3233853166629534) _gate_q_2;
  rz(0.03595710064902622) _gate_q_1;
  ry(2.78589534526179) _gate_q_0;
  r_5105589024(1.317599566551817, 2.7263836682849654) _gate_q_3;
  rx(2.9013292444554186) _gate_q_0;
  ecr _gate_q_1, _gate_q_2;
  rxx_5105584848(3.7927076703773484) _gate_q_4, _gate_q_3;
}