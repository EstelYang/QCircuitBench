gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzz_5106325920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.19656381549232102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106319536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.524784285135027) _gate_q_0;
  u1(-1.3202726481005256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8358216163904917, 0, -4.524784285135027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8358216163904917, 5.845056933235552, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5106334656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4843002903297893) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.695192683601703) _gate_q_1;
  ry(-1.695192683601703) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4843002903297893) _gate_q_0;
}
gate rzz_5106333600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3793006194892659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106332208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.232879716249279) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6440111247474147) _gate_q_0;
  ry(-1.6440111247474147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.232879716249279) _gate_q_1;
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
gate xx_minus_yy_5106329904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.549814992650822) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.087246050638715) _gate_q_0;
  ry(-2.087246050638715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.549814992650822) _gate_q_1;
}
gate ryy_5106333072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.220212735575642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106334176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4130953145331888) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.916029214027005) _gate_q_0;
  ry(-0.916029214027005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4130953145331888) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5106326544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.854858520825822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106324960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2428183826847436) _gate_q_0;
  u1(1.094183982950018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2632917513129085, 0, -3.2428183826847436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2632917513129085, 2.1486343997347257, 0) _gate_q_1;
}
gate cu1_5106320832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6233986468853243) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6233986468853243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6233986468853243) _gate_q_1;
}
gate rzz_5106335280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.15399916041957654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106334272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9341105292802434) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9341105292802434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9341105292802434) _gate_q_1;
}
gate rzx_5106325680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1314264950168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106320496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7605444877818635, 0.19931155802311284, -0.19931155802311284) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  sxdg _gate_q_9;
  s _gate_q_0;
  rzz_5106325920(0.19656381549232102) _gate_q_8, _gate_q_4;
  cu3_5106319536(1.6716432327809834, 5.845056933235552, 3.2045116370345013) _gate_q_1, _gate_q_3;
  ch _gate_q_6, _gate_q_7;
  csdg _gate_q_5, _gate_q_2;
  xx_plus_yy_5106334656(3.390385367203406, 1.4843002903297893) _gate_q_2, _gate_q_5;
  ch _gate_q_4, _gate_q_0;
  swap _gate_q_3, _gate_q_8;
  rzz_5106333600(1.3793006194892659) _gate_q_6, _gate_q_7;
  xx_minus_yy_5106332208(3.2880222494948295, 4.232879716249279) _gate_q_9, _gate_q_1;
  csx _gate_q_6, _gate_q_0;
  s _gate_q_1;
  rx(2.438911386002312) _gate_q_4;
  csdg _gate_q_8, _gate_q_2;
  swap _gate_q_5, _gate_q_9;
  cry(5.391800027534439) _gate_q_7, _gate_q_3;
  xx_minus_yy_5106329904(4.17449210127743, 2.549814992650822) _gate_q_3, _gate_q_0;
  ryy_5106333072(6.220212735575642) _gate_q_7, _gate_q_8;
  csx _gate_q_1, _gate_q_4;
  rx(0.46696764757810155) _gate_q_2;
  xx_minus_yy_5106334176(1.83205842805401, 1.4130953145331888) _gate_q_5, _gate_q_6;
  z _gate_q_9;
  x _gate_q_9;
  ecr _gate_q_6, _gate_q_0;
  y _gate_q_1;
  rx(5.5184448419463425) _gate_q_4;
  dcx _gate_q_7, _gate_q_8;
  cs _gate_q_5, _gate_q_2;
  t _gate_q_3;
  csdg _gate_q_8, _gate_q_7;
  s _gate_q_1;
  csdg _gate_q_9, _gate_q_6;
  U(0.20542388577771648, 0.9612217905632344, 5.961186178059906) _gate_q_4;
  sxdg _gate_q_2;
  rzx_5106326544(5.854858520825822) _gate_q_5, _gate_q_0;
  u2(3.142705767004996, 3.815716290033597) _gate_q_3;
  crz(5.026402048646016) _gate_q_7, _gate_q_8;
  cu3_5106324960(4.526583502625817, 2.1486343997347257, 4.337002365634762) _gate_q_0, _gate_q_5;
  csx _gate_q_6, _gate_q_2;
  sxdg _gate_q_3;
  y _gate_q_4;
  cu1_5106320832(3.2467972937706486) _gate_q_1, _gate_q_9;
  cp(0.024882484667773076) _gate_q_9, _gate_q_6;
  ecr _gate_q_3, _gate_q_4;
  U(3.5462719590529588, 5.789956676654396, 0.34282359477207347) _gate_q_8;
  rzz_5106335280(0.15399916041957654) _gate_q_7, _gate_q_1;
  h _gate_q_5;
  h _gate_q_0;
  ry(3.321797481978491) _gate_q_2;
  cy _gate_q_1, _gate_q_7;
  cry(1.474480198764344) _gate_q_2, _gate_q_6;
  cu1_5106334272(3.868221058560487) _gate_q_0, _gate_q_8;
  sx _gate_q_3;
  rzx_5106325680(6.1314264950168) _gate_q_4, _gate_q_9;
  u3(0.6861147081903389, 3.539106004386319, 1.5672076907979233) _gate_q_5;
  sdg _gate_q_9;
  sx _gate_q_7;
  ch _gate_q_2, _gate_q_1;
  cu(1.138127874580138, 2.1559772477374706, 5.773601565541006, 6.120759525015164) _gate_q_4, _gate_q_5;
  tdg _gate_q_0;
  cp(4.375465270428386) _gate_q_8, _gate_q_6;
  r_5106320496(0.7605444877818635, 1.7701078848180094) _gate_q_3;
}
gate cu1_5106257072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.41924303202422086) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.41924303202422086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.41924303202422086) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5106260480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.028041498224342157) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6019786153590795) _gate_q_1;
  ry(-0.6019786153590795) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.028041498224342157) _gate_q_0;
}
gate ryy_5106269408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2915202923127575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106261440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.407277400935793) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1576702535832313) _gate_q_0;
  ry(-1.1576702535832313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.407277400935793) _gate_q_1;
}
gate xx_minus_yy_5106258320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9256746472205895) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4676004307747177) _gate_q_0;
  ry(-2.4676004307747177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9256746472205895) _gate_q_1;
}
gate cu3_5106259808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.212200074316632) _gate_q_0;
  u1(0.42603976275160793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.691153168931958, 0, -4.212200074316632) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.691153168931958, 3.786160311565024, 0) _gate_q_1;
}
gate rxx_5106257120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.725727918441165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106254960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.247006065068738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106259952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.053649381985587, 2.310116910290196, -2.310116910290196) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  z _gate_q_0;
  cs _gate_q_1, _gate_q_2;
  cs _gate_q_8, _gate_q_5;
  cu1_5106257072(0.8384860640484417) _gate_q_4, _gate_q_3;
  tdg _gate_q_6;
  t _gate_q_7;
  s _gate_q_9;
  iswap _gate_q_7, _gate_q_6;
  crx(4.211125944880314) _gate_q_5, _gate_q_4;
  p(5.963679481809546) _gate_q_8;
  rz(1.846015585899502) _gate_q_9;
  crx(0.751494219107082) _gate_q_1, _gate_q_2;
  rz(3.86902338868106) _gate_q_3;
  rx(0.19103511401779047) _gate_q_0;
  xx_plus_yy_5106260480(1.203957230718159, 0.028041498224342157) _gate_q_7, _gate_q_4;
  cy _gate_q_2, _gate_q_1;
  cu(4.013661118315625, 5.402406319761688, 1.395766698420701, 3.1686874247699497) _gate_q_5, _gate_q_0;
  ryy_5106269408(0.2915202923127575) _gate_q_3, _gate_q_9;
  csdg _gate_q_8, _gate_q_6;
  crz(5.887318591885164) _gate_q_9, _gate_q_4;
  cu(3.186683210033653, 1.2780508344428887, 1.0526313842341748, 0.4994606434795328) _gate_q_3, _gate_q_7;
  crx(0.9630953373491659) _gate_q_1, _gate_q_5;
  xx_minus_yy_5106261440(2.3153405071664626, 5.407277400935793) _gate_q_6, _gate_q_0;
  u3(1.9726360094917763, 1.8911091214857219, 4.860176351514193) _gate_q_8;
  U(6.202320674287155, 1.094646484602003, 3.826466365206154) _gate_q_2;
  csx _gate_q_0, _gate_q_7;
  rx(5.716631999440201) _gate_q_2;
  sdg _gate_q_9;
  cy _gate_q_6, _gate_q_1;
  t _gate_q_8;
  cry(0.3650953209957123) _gate_q_4, _gate_q_3;
  id _gate_q_5;
  cx _gate_q_2, _gate_q_3;
  csdg _gate_q_6, _gate_q_9;
  xx_minus_yy_5106258320(4.935200861549435, 0.9256746472205895) _gate_q_0, _gate_q_7;
  ry(5.62565941013343) _gate_q_4;
  id _gate_q_1;
  u2(2.4572930932215895, 0.1694919325368769) _gate_q_5;
  id _gate_q_8;
  cs _gate_q_0, _gate_q_1;
  cs _gate_q_6, _gate_q_4;
  crz(0.8572041010582978) _gate_q_2, _gate_q_5;
  u1(0.0030114938488200486) _gate_q_8;
  cry(0.16181847474849514) _gate_q_3, _gate_q_9;
  sx _gate_q_7;
  cu3_5106259808(3.382306337863916, 3.786160311565024, 4.63823983706824) _gate_q_1, _gate_q_4;
  cy _gate_q_0, _gate_q_8;
  iswap _gate_q_3, _gate_q_7;
  u3(0.7191356088406329, 0.15983115622858748, 2.94178207025471) _gate_q_6;
  rxx_5106257120(4.725727918441165) _gate_q_2, _gate_q_5;
  sxdg _gate_q_9;
  s _gate_q_3;
  rzx_5106254960(5.247006065068738) _gate_q_2, _gate_q_1;
  u3(2.5932321824671236, 5.499149899616232, 3.986156368002156) _gate_q_9;
  h _gate_q_6;
  tdg _gate_q_5;
  cs _gate_q_4, _gate_q_8;
  cry(6.227328898049331) _gate_q_7, _gate_q_0;
  rz(2.9415129937724656) _gate_q_4;
  dcx _gate_q_7, _gate_q_5;
  tdg _gate_q_2;
  cry(1.8487716618749381) _gate_q_3, _gate_q_1;
  cry(6.141374188169756) _gate_q_6, _gate_q_0;
  r_5106259952(2.053649381985587, 3.8809132370850925) _gate_q_8;
  tdg _gate_q_9;
}