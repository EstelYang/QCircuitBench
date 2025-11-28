gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072191856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.856822365497005) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.710208106282837) _gate_q_0;
  ry(-2.710208106282837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.856822365497005) _gate_q_1;
}
gate rzz_5072198624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.631449978467206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5072204816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4898641127786331) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2153039039601736) _gate_q_1;
  ry(-1.2153039039601736) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4898641127786331) _gate_q_0;
}
gate r_5072191616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.060131035425306, 2.0478218626276945, -2.0478218626276945) _gate_q_0;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072192480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5745676890155322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072193632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.6250631610719015) _gate_q_0;
  u1(-1.309134619319995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4076140609409587, 0, -4.6250631610719015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4076140609409587, 5.934197780391896, 0) _gate_q_1;
}
gate xx_minus_yy_5072196128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.685801447213078) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4576149464152726) _gate_q_0;
  ry(-1.4576149464152726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.685801447213078) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  rx(3.0076382076909534) _gate_q_2;
  rz(0.8691661887162889) _gate_q_5;
  xx_minus_yy_5072191856(5.420416212565674, 2.856822365497005) _gate_q_4, _gate_q_1;
  z _gate_q_3;
  p(2.2558961726079128) _gate_q_0;
  sdg _gate_q_6;
  sdg _gate_q_2;
  rzz_5072198624(3.631449978467206) _gate_q_0, _gate_q_5;
  y _gate_q_4;
  cs _gate_q_3, _gate_q_6;
  z _gate_q_1;
  t _gate_q_2;
  xx_plus_yy_5072204816(2.4306078079203473, 0.4898641127786331) _gate_q_1, _gate_q_6;
  cs _gate_q_4, _gate_q_0;
  r_5072191616(2.060131035425306, 3.618618189422591) _gate_q_5;
  t _gate_q_3;
  U(2.80731015441512, 1.8685849548785405, 4.86117767941886) _gate_q_1;
  csx _gate_q_6, _gate_q_0;
  z _gate_q_2;
  rxx_5072192480(2.5745676890155322) _gate_q_4, _gate_q_5;
  u1(2.8661946742759628) _gate_q_3;
  cs _gate_q_0, _gate_q_6;
  cu3_5072193632(0.8152281218819174, 5.934197780391896, 3.315928541751906) _gate_q_3, _gate_q_1;
  t _gate_q_2;
  t _gate_q_4;
  h _gate_q_5;
  y _gate_q_5;
  xx_minus_yy_5072196128(2.915229892830545, 4.685801447213078) _gate_q_4, _gate_q_1;
  u2(4.360700794358342, 5.285627670608918) _gate_q_2;
  z _gate_q_0;
  crx(3.6207381748024927) _gate_q_6, _gate_q_3;
  y _gate_q_0;
  cz _gate_q_4, _gate_q_5;
  ecr _gate_q_6, _gate_q_3;
  dcx _gate_q_2, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5072191664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.081193874493737) _gate_q_0;
  u1(-0.46891923038707883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7211207590483142, 0, -3.081193874493737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7211207590483142, 3.5501131048808157, 0) _gate_q_1;
}
gate cu1_5072193776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.22276052748992625) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.22276052748992625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.22276052748992625) _gate_q_1;
}
gate ryy_5072200208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7011863829257927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072200304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.433530830576059) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072191904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6500861666890096, 2.034599422583812, -2.034599422583812) _gate_q_0;
}
gate cu1_5072201120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5726616290847013) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5726616290847013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5726616290847013) _gate_q_1;
}
gate cu3_5072206448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.264932398248093) _gate_q_0;
  u1(-0.6964392636056385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.020699877508606, 0, -4.264932398248093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.020699877508606, 4.961371661853732, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  U(5.13008445324663, 3.3156283131234883, 3.154236567078579) _gate_q_2;
  iswap _gate_q_5, _gate_q_0;
  cu3_5072191664(1.4422415180966284, 3.5501131048808157, 2.612274644106658) _gate_q_6, _gate_q_3;
  ecr _gate_q_1, _gate_q_4;
  csx _gate_q_2, _gate_q_5;
  cu1_5072193776(0.4455210549798525) _gate_q_0, _gate_q_1;
  crx(4.991758251900608) _gate_q_6, _gate_q_3;
  sx _gate_q_4;
  s _gate_q_5;
  swap _gate_q_0, _gate_q_1;
  rx(4.313899267855281) _gate_q_2;
  t _gate_q_3;
  ryy_5072200208(2.7011863829257927) _gate_q_6, _gate_q_4;
  ryy_5072200304(2.433530830576059) _gate_q_6, _gate_q_4;
  r_5072191904(2.6500861666890096, 3.6053957493787085) _gate_q_3;
  tdg _gate_q_0;
  ch _gate_q_5, _gate_q_2;
  id _gate_q_1;
  cu1_5072201120(3.1453232581694026) _gate_q_3, _gate_q_1;
  cry(2.1127575515087953) _gate_q_5, _gate_q_2;
  crz(0.708560917736967) _gate_q_6, _gate_q_0;
  id _gate_q_4;
  cs _gate_q_5, _gate_q_0;
  dcx _gate_q_2, _gate_q_6;
  U(4.1975503228049895, 0.7199331080238861, 0.7975485558382217) _gate_q_1;
  z _gate_q_3;
  z _gate_q_4;
  u3(5.249630151440683, 3.0595287187100175, 0.31293818961089814) _gate_q_2;
  U(3.148584485688522, 2.6777834999305057, 4.787421437108956) _gate_q_0;
  cu3_5072206448(6.041399755017212, 4.961371661853732, 3.5684931346424547) _gate_q_4, _gate_q_3;
  sdg _gate_q_6;
  crx(5.826485555762576) _gate_q_5, _gate_q_1;
}