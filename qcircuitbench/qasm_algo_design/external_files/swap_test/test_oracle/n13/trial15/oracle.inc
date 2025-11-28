gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070908512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6957165997635633) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4501524058554827) _gate_q_0;
  ry(-2.4501524058554827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6957165997635633) _gate_q_1;
}
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
gate cu3_5070904960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3775574219756015) _gate_q_0;
  u1(0.5010496792586883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.708703276341221, 0, -3.3775574219756015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.708703276341221, 2.876507742716913, 0) _gate_q_1;
}
gate rzz_5070904000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.541593479343602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070906304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.951107594205513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070908752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8726084196182646) _gate_q_0;
  u1(-0.020802064101017592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9849848136973145, 0, -2.8726084196182646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9849848136973145, 2.8934104837192822, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5070904480(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8735823379007654) _gate_q_0;
  u1(-1.41674932749816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9539135103022858, 0, -2.8735823379007654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9539135103022858, 4.290331665398925, 0) _gate_q_1;
}
gate cu3_5070910000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6129298003977205) _gate_q_0;
  u1(-0.12114566741358887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8811809042105235, 0, -0.6129298003977205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8811809042105235, 0.7340754678113094, 0) _gate_q_1;
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
gate r_5070905056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.258632625524885, 3.422556635753736, -3.422556635753736) _gate_q_0;
}
gate rzz_5070909664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.628885899697947) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070898288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.531251884379303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070906928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.488043810238276, -1.5232986606096086, 1.5232986606096086) _gate_q_0;
}
gate rxx_5070909904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.387468185424298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5070908368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.762906511909064, 1.6442718925282, -1.6442718925282) _gate_q_0;
}
gate xx_plus_yy_5070906160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.1846401967595533) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4435440874627754) _gate_q_1;
  ry(-1.4435440874627754) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.1846401967595533) _gate_q_0;
}
gate ryy_5070903472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8721066949671074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070901792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3337323757350243) _gate_q_0;
  u1(0.8819442215776232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0296856175620173, 0, -3.3337323757350243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0296856175620173, 2.451788154157401, 0) _gate_q_1;
}
gate r_5070900208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.23321353433795314, 1.9834392581668645, -1.9834392581668645) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  id _gate_q_4;
  tdg _gate_q_5;
  t _gate_q_12;
  rx(5.616468755420678) _gate_q_6;
  iswap _gate_q_1, _gate_q_0;
  rz(1.6796415461540033) _gate_q_10;
  swap _gate_q_11, _gate_q_9;
  xx_minus_yy_5070908512(4.900304811710965, 3.6957165997635633) _gate_q_3, _gate_q_2;
  u1(0.09422865760064145) _gate_q_7;
  t _gate_q_8;
  csdg _gate_q_10, _gate_q_0;
  csx _gate_q_2, _gate_q_11;
  cu3_5070904960(5.417406552682442, 2.876507742716913, 3.8786071012342895) _gate_q_8, _gate_q_6;
  t _gate_q_3;
  cu(4.341001083128619, 3.200025273953057, 4.4016198222946805, 3.4248446959872076) _gate_q_12, _gate_q_1;
  crz(2.6039463170918924) _gate_q_7, _gate_q_9;
  sx _gate_q_5;
  h _gate_q_4;
  csdg _gate_q_1, _gate_q_12;
  y _gate_q_11;
  p(5.9382611093968025) _gate_q_6;
  t _gate_q_10;
  cp(1.7847336266113942) _gate_q_5, _gate_q_2;
  ry(0.8293292084934278) _gate_q_0;
  s _gate_q_8;
  rzz_5070904000(5.541593479343602) _gate_q_3, _gate_q_9;
  u1(4.507109945880851) _gate_q_4;
  rx(1.3920867643397266) _gate_q_7;
  u2(4.777122076389695, 3.256033730318284) _gate_q_8;
  rxx_5070906304(5.951107594205513) _gate_q_10, _gate_q_9;
  h _gate_q_2;
  cu3_5070908752(3.969969627394629, 2.8934104837192822, 2.851806355517247) _gate_q_12, _gate_q_5;
  cs _gate_q_1, _gate_q_11;
  rx(3.377541320266636) _gate_q_0;
  cx _gate_q_4, _gate_q_6;
  cu3_5070904480(3.9078270206045715, 4.290331665398925, 1.4568330104026055) _gate_q_7, _gate_q_3;
  rz(2.5274373341291523) _gate_q_12;
  cy _gate_q_7, _gate_q_5;
  cu3_5070910000(1.762361808421047, 0.7340754678113094, 0.49178413298413165) _gate_q_4, _gate_q_6;
  crz(4.620000767240883) _gate_q_8, _gate_q_3;
  rz(0.6609073271354251) _gate_q_1;
  rz(2.9700643729713647) _gate_q_9;
  x _gate_q_0;
  ecr _gate_q_2, _gate_q_10;
  t _gate_q_11;
  cx _gate_q_4, _gate_q_5;
  x _gate_q_6;
  u1(5.866209190261374) _gate_q_7;
  cy _gate_q_9, _gate_q_11;
  r_5070905056(6.258632625524885, 4.993352962548633) _gate_q_0;
  rzz_5070909664(2.628885899697947) _gate_q_10, _gate_q_8;
  ry(0.8547390707278854) _gate_q_2;
  rzx_5070898288(1.531251884379303) _gate_q_3, _gate_q_1;
  tdg _gate_q_12;
  cs _gate_q_9, _gate_q_6;
  h _gate_q_2;
  r_5070906928(3.488043810238276, 0.0474976661852879) _gate_q_10;
  x _gate_q_1;
  s _gate_q_7;
  cs _gate_q_0, _gate_q_12;
  rxx_5070909904(1.387468185424298) _gate_q_3, _gate_q_5;
  dcx _gate_q_11, _gate_q_8;
  r_5070908368(3.762906511909064, 3.2150682193230966) _gate_q_4;
  sdg _gate_q_2;
  csx _gate_q_10, _gate_q_5;
  xx_plus_yy_5070906160(2.887088174925551, 0.1846401967595533) _gate_q_7, _gate_q_0;
  cs _gate_q_4, _gate_q_8;
  cp(5.903875113245279) _gate_q_6, _gate_q_11;
  ry(3.1589601695224836) _gate_q_1;
  crz(2.9537481058059902) _gate_q_9, _gate_q_3;
  id _gate_q_12;
  ecr _gate_q_12, _gate_q_4;
  cx _gate_q_11, _gate_q_1;
  ryy_5070903472(0.8721066949671074) _gate_q_5, _gate_q_9;
  cs _gate_q_0, _gate_q_6;
  s _gate_q_8;
  csdg _gate_q_7, _gate_q_2;
  cu3_5070901792(6.0593712351240345, 2.451788154157401, 4.2156765973126475) _gate_q_3, _gate_q_10;
  r_5070900208(0.23321353433795314, 3.554235584961761) _gate_q_11;
  sxdg _gate_q_5;
  u3(3.5588146917569206, 3.459198076359612, 0.2344287196431454) _gate_q_1;
  crx(6.205896266075173) _gate_q_12, _gate_q_9;
  ch _gate_q_2, _gate_q_8;
  crx(1.2530719764002232) _gate_q_4, _gate_q_3;
  t _gate_q_0;
  cs _gate_q_10, _gate_q_7;
  U(6.0291106387934015, 4.737801344739699, 6.125389391193473) _gate_q_6;
}
gate cu3_5070901216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8096483743457417) _gate_q_0;
  u1(0.11771985200048779) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8712814230327878, 0, -0.8096483743457417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8712814230327878, 0.6919285223452539, 0) _gate_q_1;
}
gate rzx_5070902032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3537555392740614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070901552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5746446941587943) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8675109464121804) _gate_q_1;
  ry(-2.8675109464121804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5746446941587943) _gate_q_0;
}
gate cu1_5070905488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6466540317500726) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6466540317500726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6466540317500726) _gate_q_1;
}
gate rzz_5070897232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.141694175866467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070907168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3545970658089324) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3545970658089324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3545970658089324) _gate_q_1;
}
gate rzz_5070903232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.150036110855859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070911536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9782730812963267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070902320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.538326890383552, 1.2429530981680026, -1.2429530981680026) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  x _gate_q_1;
  sx _gate_q_2;
  u2(5.0777917811734445, 4.51142345876567) _gate_q_9;
  rz(0.6623593370923627) _gate_q_7;
  dcx _gate_q_4, _gate_q_0;
  cp(4.413153453169104) _gate_q_6, _gate_q_12;
  z _gate_q_5;
  cy _gate_q_11, _gate_q_3;
  cy _gate_q_8, _gate_q_10;
  ry(2.8885667410680633) _gate_q_9;
  rz(4.790156465437301) _gate_q_7;
  sdg _gate_q_11;
  s _gate_q_2;
  swap _gate_q_0, _gate_q_4;
  csx _gate_q_1, _gate_q_6;
  crz(5.70864603121888) _gate_q_8, _gate_q_12;
  cz _gate_q_5, _gate_q_10;
  sx _gate_q_3;
  cz _gate_q_10, _gate_q_1;
  z _gate_q_2;
  cry(6.108157862382696) _gate_q_11, _gate_q_7;
  rx(5.107327291953552) _gate_q_3;
  h _gate_q_9;
  cx _gate_q_8, _gate_q_0;
  ecr _gate_q_12, _gate_q_4;
  cs _gate_q_5, _gate_q_6;
  p(4.200549532329478) _gate_q_11;
  sxdg _gate_q_12;
  rx(4.883622797766146) _gate_q_2;
  cx _gate_q_9, _gate_q_6;
  cu3_5070901216(1.7425628460655755, 0.6919285223452539, 0.9273682263462295) _gate_q_4, _gate_q_10;
  iswap _gate_q_1, _gate_q_3;
  z _gate_q_0;
  rx(1.1052889038261242) _gate_q_7;
  U(6.033474351939088, 6.087524671711734, 6.067982345067759) _gate_q_8;
  rx(2.225399133534955) _gate_q_5;
  z _gate_q_11;
  rzx_5070902032(5.3537555392740614) _gate_q_4, _gate_q_2;
  sdg _gate_q_12;
  xx_plus_yy_5070901552(5.735021892824361, 0.5746446941587943) _gate_q_0, _gate_q_7;
  csdg _gate_q_1, _gate_q_8;
  ry(2.817708557027276) _gate_q_5;
  cu1_5070905488(1.2933080635001453) _gate_q_9, _gate_q_3;
  ch _gate_q_6, _gate_q_10;
  csx _gate_q_1, _gate_q_0;
  rzz_5070897232(4.141694175866467) _gate_q_3, _gate_q_8;
  y _gate_q_4;
  cu(2.4818282653025907, 6.070401641164043, 1.7532778730995076, 0.632846029078452) _gate_q_2, _gate_q_9;
  h _gate_q_12;
  cu1_5070907168(0.7091941316178648) _gate_q_7, _gate_q_10;
  cs _gate_q_11, _gate_q_6;
  id _gate_q_5;
  crz(0.7712481011327775) _gate_q_1, _gate_q_6;
  t _gate_q_3;
  cp(6.179880911568176) _gate_q_10, _gate_q_9;
  u1(2.1306210967334835) _gate_q_4;
  crz(5.085771850521202) _gate_q_0, _gate_q_2;
  cx _gate_q_7, _gate_q_12;
  dcx _gate_q_5, _gate_q_11;
  sx _gate_q_8;
  ch _gate_q_3, _gate_q_4;
  sxdg _gate_q_11;
  h _gate_q_10;
  tdg _gate_q_7;
  x _gate_q_1;
  sx _gate_q_12;
  cp(3.38830927830348) _gate_q_9, _gate_q_0;
  id _gate_q_5;
  rz(1.7983214258400477) _gate_q_8;
  rzz_5070903232(6.150036110855859) _gate_q_2, _gate_q_6;
  ry(5.040365740293512) _gate_q_7;
  rz(2.4770285727610593) _gate_q_8;
  sxdg _gate_q_0;
  p(4.726663752652921) _gate_q_3;
  h _gate_q_12;
  y _gate_q_2;
  tdg _gate_q_1;
  dcx _gate_q_6, _gate_q_5;
  z _gate_q_11;
  rzz_5070911536(1.9782730812963267) _gate_q_10, _gate_q_9;
  sx _gate_q_4;
  r_5070902320(3.538326890383552, 2.813749424962899) _gate_q_4;
  u3(0.19606200616858827, 5.664788045713671, 1.9977891350358452) _gate_q_0;
  tdg _gate_q_12;
  dcx _gate_q_9, _gate_q_3;
  cu(5.628290339827837, 3.6221289486483697, 5.505253611939677, 4.508699446247647) _gate_q_8, _gate_q_11;
  crz(2.2852846190520544) _gate_q_5, _gate_q_7;
  u2(4.832603573248483, 5.708474746290373) _gate_q_6;
  s _gate_q_10;
  sx _gate_q_1;
  rz(1.5617315755127206) _gate_q_2;
}