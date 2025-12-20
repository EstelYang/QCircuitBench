gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate cu3_5072112672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.124301981805271) _gate_q_0;
  u1(0.538056169453323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3543496564113229, 0, -5.124301981805271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3543496564113229, 4.586245812351947, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate rzz_5072115648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6613620903845354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5072125200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.176513070154203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072124192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.8465694272256155) _gate_q_0;
  u1(0.00829566067924592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.610936913914968, 0, -5.8465694272256155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.610936913914968, 5.8382737665463695, 0) _gate_q_1;
}
gate cu3_5072122320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7660787269828733) _gate_q_0;
  u1(-1.7277894350676983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6081943866257857, 0, -1.7660787269828733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6081943866257857, 3.4938681620505716, 0) _gate_q_1;
}
gate xx_minus_yy_5072205968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.112986096615536) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8973808962807823) _gate_q_0;
  ry(-1.8973808962807823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.112986096615536) _gate_q_1;
}
gate rxx_5072201408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.886740311082159) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072196368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.67847353335626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072199776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2959467908721116, 1.0229662965518367, -1.0229662965518367) _gate_q_0;
}
gate r_5072197136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2694614903830623, 2.9323854061709147, -2.9323854061709147) _gate_q_0;
}
gate r_5072198384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3367660855099135, -0.7750000755229511, 0.7750000755229511) _gate_q_0;
}
gate cu1_5072198240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3103437803096385) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3103437803096385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3103437803096385) _gate_q_1;
}
gate xx_plus_yy_5072205440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5535469483304587) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1765863503827962) _gate_q_1;
  ry(-1.1765863503827962) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5535469483304587) _gate_q_0;
}
gate xx_minus_yy_5072200256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.755780105563375) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.719305450527607) _gate_q_0;
  ry(-2.719305450527607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.755780105563375) _gate_q_1;
}
gate rzz_5072199344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.20604047194076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072202464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4979988848403662, 3.959573508965308, -3.959573508965308) _gate_q_0;
}
gate xx_plus_yy_5072202848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1599658170746565) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.694088844784102) _gate_q_1;
  ry(-0.694088844784102) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1599658170746565) _gate_q_0;
}
gate rzx_5072206160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5143535019448994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5072196992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.110110708042363) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7896894360669401) _gate_q_1;
  ry(-0.7896894360669401) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.110110708042363) _gate_q_0;
}
gate rxx_5072194112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.550618078442669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072122224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.28284190647646096) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4936240264401737) _gate_q_1;
  ry(-2.4936240264401737) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.28284190647646096) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  csdg _gate_q_7, _gate_q_6;
  csx _gate_q_11, _gate_q_8;
  u3(0.7732975595553981, 5.028950461524253, 1.5493697090641294) _gate_q_9;
  U(5.904974924373985, 2.648806678841393, 4.636997572261714) _gate_q_5;
  y _gate_q_3;
  p(5.967664410547081) _gate_q_12;
  sx _gate_q_0;
  x _gate_q_4;
  cu3_5072112672(2.7086993128226458, 4.586245812351947, 5.662358151258593) _gate_q_1, _gate_q_2;
  x _gate_q_10;
  ch _gate_q_7, _gate_q_6;
  sxdg _gate_q_0;
  ecr _gate_q_8, _gate_q_11;
  rzz_5072115648(3.6613620903845354) _gate_q_5, _gate_q_2;
  iswap _gate_q_9, _gate_q_3;
  p(2.5982399185184004) _gate_q_10;
  t _gate_q_12;
  cz _gate_q_1, _gate_q_4;
  id _gate_q_5;
  tdg _gate_q_7;
  h _gate_q_9;
  sxdg _gate_q_3;
  tdg _gate_q_1;
  cz _gate_q_4, _gate_q_0;
  rzz_5072125200(4.176513070154203) _gate_q_11, _gate_q_12;
  t _gate_q_2;
  u3(0.7794782665710334, 5.068332977222866, 1.2512263239699737) _gate_q_8;
  z _gate_q_10;
  U(4.357063117051992, 1.2110112815253624, 4.7380919958597705) _gate_q_6;
  cu3_5072124192(3.221873827829936, 5.8382737665463695, 5.854865087904861) _gate_q_9, _gate_q_5;
  cu3_5072122320(5.2163887732515715, 3.4938681620505716, 0.038289291915174856) _gate_q_6, _gate_q_8;
  ecr _gate_q_4, _gate_q_10;
  cu(0.5832728208868385, 1.0356021728169307, 5.737089300571139, 5.353538645088564) _gate_q_3, _gate_q_1;
  id _gate_q_0;
  xx_minus_yy_5072205968(3.7947617925615647, 5.112986096615536) _gate_q_12, _gate_q_11;
  rxx_5072201408(0.886740311082159) _gate_q_2, _gate_q_7;
  cy _gate_q_8, _gate_q_0;
  u1(3.407472894600148) _gate_q_3;
  crz(2.8895143065714763) _gate_q_2, _gate_q_6;
  csx _gate_q_12, _gate_q_7;
  tdg _gate_q_11;
  p(5.3215645661284565) _gate_q_4;
  rzx_5072196368(2.67847353335626) _gate_q_5, _gate_q_1;
  U(4.732941771121122, 2.426276683792629, 4.424543018269365) _gate_q_10;
  s _gate_q_9;
  ecr _gate_q_6, _gate_q_4;
  s _gate_q_7;
  r_5072199776(1.2959467908721116, 2.5937626233467332) _gate_q_2;
  cz _gate_q_0, _gate_q_3;
  z _gate_q_12;
  u1(0.7410249370276338) _gate_q_8;
  ch _gate_q_1, _gate_q_5;
  r_5072197136(3.2694614903830623, 4.503181732965811) _gate_q_10;
  sdg _gate_q_11;
  r_5072198384(1.3367660855099135, 0.7957962512719454) _gate_q_9;
  y _gate_q_2;
  sxdg _gate_q_7;
  csx _gate_q_10, _gate_q_12;
  t _gate_q_8;
  y _gate_q_5;
  z _gate_q_6;
  ch _gate_q_9, _gate_q_11;
  cu1_5072198240(2.620687560619277) _gate_q_0, _gate_q_1;
  xx_plus_yy_5072205440(2.3531727007655925, 1.5535469483304587) _gate_q_4, _gate_q_3;
  ry(0.4866425905081557) _gate_q_11;
  xx_minus_yy_5072200256(5.438610901055214, 4.755780105563375) _gate_q_2, _gate_q_6;
  z _gate_q_4;
  rzz_5072199344(3.20604047194076) _gate_q_5, _gate_q_10;
  sx _gate_q_7;
  u2(0.5912000105329206, 3.7789349275683164) _gate_q_12;
  csdg _gate_q_1, _gate_q_8;
  r_5072202464(0.4979988848403662, 5.5303698357602045) _gate_q_9;
  xx_plus_yy_5072202848(1.388177689568204, 3.1599658170746565) _gate_q_0, _gate_q_3;
  rzx_5072206160(0.5143535019448994) _gate_q_3, _gate_q_5;
  sdg _gate_q_4;
  cs _gate_q_8, _gate_q_7;
  cz _gate_q_11, _gate_q_9;
  u1(2.667413181121011) _gate_q_12;
  rx(4.187930863342981) _gate_q_2;
  xx_plus_yy_5072196992(1.5793788721338802, 4.110110708042363) _gate_q_6, _gate_q_10;
  rz(1.563674689645741) _gate_q_1;
  sdg _gate_q_0;
  rxx_5072194112(2.550618078442669) _gate_q_11, _gate_q_8;
  u1(0.44398766660956684) _gate_q_1;
  cp(1.4947008955362493) _gate_q_5, _gate_q_6;
  tdg _gate_q_4;
  csdg _gate_q_9, _gate_q_3;
  cu(2.1529569520924774, 0.203893022642294, 2.0729304161665048, 1.2671830917584284) _gate_q_10, _gate_q_2;
  xx_plus_yy_5072122224(4.987248052880347, 0.28284190647646096) _gate_q_12, _gate_q_7;
  h _gate_q_0;
}
gate cu3_5072200064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.312522162977608) _gate_q_0;
  u1(0.8106165885600702) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.13732032921142617, 0, -2.312522162977608) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.13732032921142617, 1.5019055744175374, 0) _gate_q_1;
}
gate cu1_5072205056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3214863676149171) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3214863676149171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3214863676149171) _gate_q_1;
}
gate xx_plus_yy_5072193200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8814835428648653) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5885499240799724) _gate_q_1;
  ry(-0.5885499240799724) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8814835428648653) _gate_q_0;
}
gate ryy_5072201984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.002194359373223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072192960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.529560314919903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072193152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.562264637632992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072198624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1416853809130005) _gate_q_0;
  u1(-0.06225195895820412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.318491991914614, 0, -1.1416853809130005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.318491991914614, 1.2039373398712045, 0) _gate_q_1;
}
gate xx_minus_yy_5072197664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.498091220045533) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.939603502866122) _gate_q_0;
  ry(-2.939603502866122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.498091220045533) _gate_q_1;
}
gate cu1_5072198912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3432086817288655) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3432086817288655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3432086817288655) _gate_q_1;
}
gate rxx_5072200112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2973371616455087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072200496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.757407708749027) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0633114270306767) _gate_q_1;
  ry(-2.0633114270306767) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.757407708749027) _gate_q_0;
}
gate rxx_5072207552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.253690312553863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072204576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.221465466846329) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8306316971567681) _gate_q_1;
  ry(-0.8306316971567681) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.221465466846329) _gate_q_0;
}
gate xx_minus_yy_5072199296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.269296931341082) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0763906270685304) _gate_q_0;
  ry(-1.0763906270685304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.269296931341082) _gate_q_1;
}
gate xx_minus_yy_5072197520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6203066470213259) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2068348406413527) _gate_q_0;
  ry(-2.2068348406413527) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6203066470213259) _gate_q_1;
}
gate xx_minus_yy_5072207216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.486787958459001) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1569782161891062) _gate_q_0;
  ry(-0.1569782161891062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.486787958459001) _gate_q_1;
}
gate rxx_5072194160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4164089103227235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072204480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.420357596397452, -0.5771231203784436, 0.5771231203784436) _gate_q_0;
}
gate rxx_5072202800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5577534753824382) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  p(3.4081205689428744) _gate_q_5;
  ecr _gate_q_0, _gate_q_1;
  cs _gate_q_3, _gate_q_8;
  cp(2.0373575131744794) _gate_q_6, _gate_q_2;
  swap _gate_q_12, _gate_q_4;
  cp(2.7102738393460353) _gate_q_11, _gate_q_9;
  cu3_5072200064(0.27464065842285235, 1.5019055744175374, 3.123138751537678) _gate_q_10, _gate_q_7;
  iswap _gate_q_7, _gate_q_11;
  cry(2.0063160113336265) _gate_q_2, _gate_q_8;
  s _gate_q_0;
  u3(0.7576798616798138, 4.776793369524564, 1.3886943590343883) _gate_q_9;
  cp(3.6812609678034174) _gate_q_1, _gate_q_12;
  p(1.8834678729615095) _gate_q_5;
  ecr _gate_q_10, _gate_q_6;
  cu1_5072205056(2.6429727352298342) _gate_q_4, _gate_q_3;
  id _gate_q_8;
  rx(2.472142828116968) _gate_q_6;
  U(6.21907108749219, 1.3310246339332823, 3.551039730311878) _gate_q_3;
  xx_plus_yy_5072193200(1.1770998481599448, 2.8814835428648653) _gate_q_4, _gate_q_0;
  swap _gate_q_7, _gate_q_5;
  p(4.978848362374718) _gate_q_2;
  ryy_5072201984(6.002194359373223) _gate_q_12, _gate_q_9;
  rzx_5072192960(2.529560314919903) _gate_q_11, _gate_q_10;
  u1(3.4204668672300627) _gate_q_1;
  iswap _gate_q_3, _gate_q_9;
  x _gate_q_5;
  cy _gate_q_2, _gate_q_1;
  s _gate_q_12;
  rxx_5072193152(1.562264637632992) _gate_q_4, _gate_q_0;
  ry(6.132141274138959) _gate_q_11;
  U(0.08924780528464674, 5.149433350320315, 3.980882404332264) _gate_q_6;
  crx(5.637711765570314) _gate_q_7, _gate_q_8;
  u3(2.138967476446261, 5.133599659085037, 1.8955166226648807) _gate_q_10;
  p(4.226975098296409) _gate_q_10;
  y _gate_q_12;
  rx(0.4212096484620981) _gate_q_6;
  cu3_5072198624(2.636983983829228, 1.2039373398712045, 1.0794334219547963) _gate_q_1, _gate_q_4;
  sdg _gate_q_9;
  csdg _gate_q_3, _gate_q_7;
  id _gate_q_8;
  sdg _gate_q_0;
  x _gate_q_11;
  xx_minus_yy_5072197664(5.879207005732244, 1.498091220045533) _gate_q_5, _gate_q_2;
  cy _gate_q_10, _gate_q_4;
  h _gate_q_9;
  id _gate_q_6;
  u3(2.157112068976736, 5.347846997652799, 3.3506137767701754) _gate_q_8;
  cu1_5072198912(4.686417363457731) _gate_q_1, _gate_q_2;
  rxx_5072200112(3.2973371616455087) _gate_q_12, _gate_q_7;
  xx_plus_yy_5072200496(4.126622854061353, 5.757407708749027) _gate_q_0, _gate_q_11;
  rxx_5072207552(6.253690312553863) _gate_q_3, _gate_q_5;
  xx_plus_yy_5072204576(1.6612633943135362, 3.221465466846329) _gate_q_5, _gate_q_6;
  xx_minus_yy_5072199296(2.152781254137061, 6.269296931341082) _gate_q_2, _gate_q_9;
  csx _gate_q_0, _gate_q_10;
  u2(2.628626834164469, 2.447170168842485) _gate_q_7;
  xx_minus_yy_5072197520(4.413669681282705, 1.6203066470213259) _gate_q_3, _gate_q_11;
  z _gate_q_8;
  csdg _gate_q_12, _gate_q_1;
  sxdg _gate_q_4;
  cu(2.8170792340858353, 2.7289080437440516, 6.204701614107772, 1.7279886544370255) _gate_q_7, _gate_q_5;
  tdg _gate_q_6;
  xx_minus_yy_5072207216(0.3139564323782124, 5.486787958459001) _gate_q_4, _gate_q_0;
  U(3.9442457590763307, 1.9734285082718779, 2.7744546765632396) _gate_q_3;
  u1(6.190171961241667) _gate_q_12;
  rxx_5072194160(3.4164089103227235) _gate_q_9, _gate_q_11;
  csx _gate_q_1, _gate_q_2;
  crz(1.5465036125598481) _gate_q_10, _gate_q_8;
  cu(3.9673636524903393, 5.53080689572063, 1.8796163945026518, 4.216181661294066) _gate_q_3, _gate_q_4;
  cp(2.3365395385323855) _gate_q_12, _gate_q_10;
  r_5072204480(4.420357596397452, 0.993673206416453) _gate_q_8;
  cy _gate_q_6, _gate_q_5;
  z _gate_q_7;
  ry(0.47796906789410126) _gate_q_1;
  sxdg _gate_q_9;
  sdg _gate_q_0;
  rxx_5072202800(2.5577534753824382) _gate_q_2, _gate_q_11;
  ch _gate_q_7, _gate_q_2;
  sxdg _gate_q_5;
  cp(4.928577264318091) _gate_q_11, _gate_q_1;
  cx _gate_q_10, _gate_q_3;
  y _gate_q_0;
  csx _gate_q_4, _gate_q_8;
  iswap _gate_q_12, _gate_q_6;
  z _gate_q_9;
}