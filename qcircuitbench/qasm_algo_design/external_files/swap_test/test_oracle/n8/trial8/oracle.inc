gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate rzx_5105788128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9029813248168574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105794512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.048183399258728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5105783904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.094262219581411) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105782752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.231893958296561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105779152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.21292871354931164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rxx_5105794752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0839486651229941) _gate_q_1;
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
gate rxx_5105790144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.377514458259472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  csdg _gate_q_0, _gate_q_1;
  u2(5.767798630734449, 0.7544667154146104) _gate_q_3;
  sx _gate_q_2;
  csx _gate_q_7, _gate_q_4;
  rzx_5105788128(4.9029813248168574) _gate_q_5, _gate_q_6;
  ryy_5105794512(6.048183399258728) _gate_q_7, _gate_q_3;
  cry(5.88023297134464) _gate_q_5, _gate_q_0;
  tdg _gate_q_4;
  rz(5.861776962430954) _gate_q_2;
  rz(5.272282053484006) _gate_q_6;
  tdg _gate_q_1;
  u3(2.0896008247735165, 4.864921069021456, 3.9499439583546314) _gate_q_2;
  u3(5.62098796218813, 6.2782434758190675, 1.3318582616069126) _gate_q_4;
  y _gate_q_3;
  csx _gate_q_1, _gate_q_7;
  rz(2.214870392047738) _gate_q_5;
  crx(4.2640865843793305) _gate_q_0, _gate_q_6;
  dcx _gate_q_7, _gate_q_4;
  sdg _gate_q_5;
  x _gate_q_3;
  rxx_5105783904(4.094262219581411) _gate_q_0, _gate_q_2;
  ryy_5105782752(0.231893958296561) _gate_q_1, _gate_q_6;
  rzx_5105779152(0.21292871354931164) _gate_q_1, _gate_q_7;
  crz(2.366539235290709) _gate_q_0, _gate_q_6;
  ecr _gate_q_3, _gate_q_5;
  ecr _gate_q_2, _gate_q_4;
  ry(5.589892327845091) _gate_q_1;
  cry(3.175588955400145) _gate_q_7, _gate_q_4;
  h _gate_q_6;
  y _gate_q_5;
  sx _gate_q_2;
  rxx_5105794752(1.0839486651229941) _gate_q_0, _gate_q_3;
  cry(3.317423263379282) _gate_q_3, _gate_q_4;
  u3(1.6001028513832134, 5.207135413278879, 3.7957605995827173) _gate_q_2;
  y _gate_q_1;
  rz(0.27157397812023076) _gate_q_7;
  tdg _gate_q_0;
  csx _gate_q_6, _gate_q_5;
  crx(5.814043087469968) _gate_q_1, _gate_q_7;
  csx _gate_q_3, _gate_q_5;
  iswap _gate_q_4, _gate_q_0;
  rxx_5105790144(5.377514458259472) _gate_q_6, _gate_q_2;
}
gate rzz_5105780736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.785026763801512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105779248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.058977834374853) _gate_q_0;
  u1(0.7274557461097703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.527295219289066, 0, -2.058977834374853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.527295219289066, 1.3315220882650827, 0) _gate_q_1;
}
gate rzx_5105778768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.062809047780444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105782800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6803776108471868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5105790432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.6028354277266725) _gate_q_0;
  u1(0.14401977131526067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.492700293167175, 0, -5.6028354277266725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.492700293167175, 5.458815656411412, 0) _gate_q_1;
}
gate xx_plus_yy_5105791632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6050459344723746) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.06025957617373694) _gate_q_1;
  ry(-0.06025957617373694) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6050459344723746) _gate_q_0;
}
gate cu1_5105789136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3949054831934946) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3949054831934946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3949054831934946) _gate_q_1;
}
gate xx_minus_yy_5105780112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.866000299033305) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2258840488443586) _gate_q_0;
  ry(-0.2258840488443586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.866000299033305) _gate_q_1;
}
gate cu1_5105786880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.892216396161507) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.892216396161507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.892216396161507) _gate_q_1;
}
gate r_5105787024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.05611389145132528, 3.336202457270085, -3.336202457270085) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  crz(3.537079283069876) _gate_q_2, _gate_q_7;
  rzz_5105780736(5.785026763801512) _gate_q_5, _gate_q_4;
  u3(5.120956280105723, 2.0537947196734696, 1.112769980824242) _gate_q_0;
  x _gate_q_6;
  rz(3.9399157504649662) _gate_q_3;
  id _gate_q_1;
  cx _gate_q_5, _gate_q_4;
  crz(0.29921941968877763) _gate_q_6, _gate_q_3;
  x _gate_q_2;
  csx _gate_q_1, _gate_q_7;
  tdg _gate_q_0;
  cu3_5105779248(1.054590438578132, 1.3315220882650827, 2.786433580484623) _gate_q_0, _gate_q_4;
  sdg _gate_q_5;
  dcx _gate_q_1, _gate_q_3;
  h _gate_q_2;
  rz(2.2767178809772894) _gate_q_7;
  U(5.011216902448531, 2.433561733535314, 2.6153735323256364) _gate_q_6;
  csx _gate_q_1, _gate_q_5;
  cz _gate_q_3, _gate_q_0;
  ecr _gate_q_6, _gate_q_7;
  iswap _gate_q_4, _gate_q_2;
  t _gate_q_4;
  cx _gate_q_0, _gate_q_2;
  rzx_5105778768(4.062809047780444) _gate_q_5, _gate_q_6;
  iswap _gate_q_3, _gate_q_7;
  tdg _gate_q_1;
  id _gate_q_6;
  crx(2.806018071595145) _gate_q_7, _gate_q_4;
  csx _gate_q_0, _gate_q_3;
  rzx_5105782800(0.6803776108471868) _gate_q_5, _gate_q_2;
  sxdg _gate_q_1;
  u2(3.4798875874933133, 1.411792062653137) _gate_q_3;
  cu3_5105790432(2.98540058633435, 5.458815656411412, 5.746855199041933) _gate_q_2, _gate_q_0;
  xx_plus_yy_5105791632(0.12051915234747387, 2.6050459344723746) _gate_q_4, _gate_q_5;
  p(5.036163255584439) _gate_q_1;
  y _gate_q_7;
  rz(0.5418234256498571) _gate_q_6;
  cu1_5105789136(4.789810966386989) _gate_q_0, _gate_q_1;
  p(5.244213527292315) _gate_q_2;
  xx_minus_yy_5105780112(0.4517680976887172, 2.866000299033305) _gate_q_6, _gate_q_4;
  cu1_5105786880(5.784432792323014) _gate_q_3, _gate_q_5;
  r_5105787024(0.05611389145132528, 4.906998784064982) _gate_q_7;
}