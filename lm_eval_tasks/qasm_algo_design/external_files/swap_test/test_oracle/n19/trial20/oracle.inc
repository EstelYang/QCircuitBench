gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074780128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.064227614116873) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.00600864607799647) _gate_q_0;
  ry(-0.00600864607799647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.064227614116873) _gate_q_1;
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
gate r_5074779120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.759611354788756, 0.6900439376452052, -0.6900439376452052) _gate_q_0;
}
gate xx_minus_yy_5074777920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.451628094829534) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5243054986283908) _gate_q_0;
  ry(-1.5243054986283908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.451628094829534) _gate_q_1;
}
gate rzx_5074766880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.498270664513603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074772352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.081444512712171, -0.3709102156380557, 0.3709102156380557) _gate_q_0;
}
gate xx_plus_yy_5074773552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.422471860012429) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5385482065754577) _gate_q_1;
  ry(-2.5385482065754577) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.422471860012429) _gate_q_0;
}
gate rzx_5074778976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.05189274083403076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074773312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.5921207309831775) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6629690844061015) _gate_q_1;
  ry(-0.6629690844061015) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.5921207309831775) _gate_q_0;
}
gate xx_minus_yy_5074765680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.184292798300434) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.34303023211621597) _gate_q_0;
  ry(-0.34303023211621597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.184292798300434) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5074772880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5345056885129018, 4.433576179027934, -4.433576179027934) _gate_q_0;
}
gate cu3_5074765344(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9681779502943746) _gate_q_0;
  u1(1.1913161712887044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9374682813707751, 0, -2.9681779502943746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9374682813707751, 1.7768617790056704, 0) _gate_q_1;
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
gate xx_minus_yy_5074764768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3074765840952343) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5642557549301974) _gate_q_0;
  ry(-0.5642557549301974) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3074765840952343) _gate_q_1;
}
gate xx_plus_yy_5074769952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.210374751528551) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7138812718451395) _gate_q_1;
  ry(-2.7138812718451395) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.210374751528551) _gate_q_0;
}
gate r_5074773648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.634705607437581, 3.02531047698454, -3.02531047698454) _gate_q_0;
}
gate rzz_5074765200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.632028268174068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074769664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.380906316123169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074779504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6317368835209146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074768032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.406861679840608) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074767168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.323824945417141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074770000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.6874556931627405, 1.7747110981705587, -1.7747110981705587) _gate_q_0;
}
gate ryy_5074780032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.15873007818983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074766064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.914026032148076, -1.5655497868694828, 1.5655497868694828) _gate_q_0;
}
gate r_5074770768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8380984031269767, 2.7996583090212868, -2.7996583090212868) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5074767264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2040444069841996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5074766448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5924221435188757) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0192566618133694) _gate_q_1;
  ry(-3.0192566618133694) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5924221435188757) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  xx_minus_yy_5074780128(0.01201729215599294, 1.064227614116873) _gate_q_14, _gate_q_16;
  ch _gate_q_10, _gate_q_17;
  ecr _gate_q_9, _gate_q_11;
  rz(3.3857537619652165) _gate_q_5;
  ecr _gate_q_13, _gate_q_8;
  x _gate_q_3;
  dcx _gate_q_0, _gate_q_4;
  x _gate_q_12;
  ch _gate_q_2, _gate_q_6;
  r_5074779120(2.759611354788756, 2.2608402644401018) _gate_q_1;
  ch _gate_q_7, _gate_q_15;
  u3(5.525657962849892, 5.461589648183071, 6.2593821053740415) _gate_q_18;
  rz(0.20828372746562046) _gate_q_2;
  xx_minus_yy_5074777920(3.0486109972567816, 5.451628094829534) _gate_q_12, _gate_q_5;
  ry(1.3783426792333866) _gate_q_8;
  cz _gate_q_11, _gate_q_6;
  x _gate_q_14;
  crz(0.7122245389142847) _gate_q_4, _gate_q_3;
  u3(4.5901015800313, 4.961820655469541, 0.9988582392031358) _gate_q_18;
  ecr _gate_q_16, _gate_q_15;
  rzx_5074766880(4.498270664513603) _gate_q_0, _gate_q_9;
  cp(1.418680531821482) _gate_q_7, _gate_q_17;
  tdg _gate_q_1;
  z _gate_q_13;
  r_5074772352(1.081444512712171, 1.1998861111568409) _gate_q_10;
  crx(5.916548684476711) _gate_q_17, _gate_q_3;
  crz(1.7825083584233303) _gate_q_11, _gate_q_12;
  rz(3.6424246820599184) _gate_q_5;
  cp(5.637872825895127) _gate_q_8, _gate_q_4;
  xx_plus_yy_5074773552(5.077096413150915, 5.422471860012429) _gate_q_18, _gate_q_9;
  rzx_5074778976(0.05189274083403076) _gate_q_2, _gate_q_6;
  cy _gate_q_13, _gate_q_0;
  cry(1.3557992993508938) _gate_q_7, _gate_q_10;
  xx_plus_yy_5074773312(1.325938168812203, 4.5921207309831775) _gate_q_1, _gate_q_16;
  sx _gate_q_14;
  rx(1.201060003751094) _gate_q_15;
  cz _gate_q_8, _gate_q_3;
  u2(0.19745058980451088, 1.6284282494384035) _gate_q_1;
  z _gate_q_9;
  ch _gate_q_10, _gate_q_4;
  sxdg _gate_q_12;
  sxdg _gate_q_2;
  x _gate_q_0;
  ry(4.32175001641271) _gate_q_5;
  u2(0.5860859990601793, 3.5072616533374315) _gate_q_15;
  s _gate_q_17;
  rx(3.4379445203686534) _gate_q_16;
  cx _gate_q_7, _gate_q_13;
  t _gate_q_14;
  y _gate_q_11;
  crz(3.9983657045811896) _gate_q_6, _gate_q_18;
  u2(1.6873812652089082, 5.681223897636439) _gate_q_3;
  s _gate_q_0;
  rz(5.772320642704861) _gate_q_2;
  cry(6.043073311802313) _gate_q_11, _gate_q_7;
  xx_minus_yy_5074765680(0.6860604642324319, 5.184292798300434) _gate_q_4, _gate_q_15;
  iswap _gate_q_12, _gate_q_6;
  rz(4.3412221246539655) _gate_q_17;
  t _gate_q_9;
  z _gate_q_18;
  r_5074772880(1.5345056885129018, 6.004372505822831) _gate_q_10;
  u2(2.579652399763052, 5.568996767360485) _gate_q_14;
  cu3_5074765344(1.8749365627415502, 1.7768617790056704, 4.159494121583079) _gate_q_1, _gate_q_8;
  swap _gate_q_5, _gate_q_16;
  z _gate_q_13;
  csx _gate_q_2, _gate_q_8;
  csx _gate_q_7, _gate_q_17;
  rz(3.6764966571380713) _gate_q_14;
  iswap _gate_q_6, _gate_q_12;
  iswap _gate_q_9, _gate_q_13;
  xx_minus_yy_5074764768(1.1285115098603948, 3.3074765840952343) _gate_q_4, _gate_q_16;
  xx_plus_yy_5074769952(5.427762543690279, 4.210374751528551) _gate_q_11, _gate_q_3;
  ecr _gate_q_18, _gate_q_5;
  rx(2.332550274895326) _gate_q_0;
  U(0.11574137321729931, 1.172449525533993, 2.5792659707443053) _gate_q_1;
  cp(3.5295709132239477) _gate_q_15, _gate_q_10;
  u1(2.3652017559908534) _gate_q_1;
  z _gate_q_11;
  r_5074773648(2.634705607437581, 4.596106803779437) _gate_q_16;
  u3(4.711540357827151, 5.8446233319436045, 4.365299912776097) _gate_q_13;
  y _gate_q_17;
  h _gate_q_14;
  rzz_5074765200(4.632028268174068) _gate_q_18, _gate_q_4;
  cry(4.779330457619435) _gate_q_15, _gate_q_12;
  ry(5.150024456199016) _gate_q_7;
  s _gate_q_2;
  ryy_5074769664(4.380906316123169) _gate_q_10, _gate_q_9;
  z _gate_q_3;
  s _gate_q_0;
  rz(5.090941969398128) _gate_q_5;
  x _gate_q_6;
  U(5.6874226172111175, 2.3498879909150023, 2.4721838060148422) _gate_q_8;
  ecr _gate_q_9, _gate_q_16;
  ch _gate_q_14, _gate_q_10;
  rzx_5074779504(0.6317368835209146) _gate_q_3, _gate_q_15;
  U(5.366706510975266, 3.107616546073619, 0.48064969524196327) _gate_q_13;
  x _gate_q_0;
  csx _gate_q_1, _gate_q_8;
  ryy_5074768032(4.406861679840608) _gate_q_17, _gate_q_18;
  crz(5.035576134493963) _gate_q_11, _gate_q_7;
  u2(0.16307290540499797, 0.3575005009708653) _gate_q_4;
  iswap _gate_q_12, _gate_q_5;
  y _gate_q_6;
  z _gate_q_2;
  sx _gate_q_7;
  rx(2.9489156267268974) _gate_q_16;
  s _gate_q_13;
  ryy_5074767168(4.323824945417141) _gate_q_15, _gate_q_4;
  r_5074770000(4.6874556931627405, 3.3455074249654553) _gate_q_2;
  ryy_5074780032(5.15873007818983) _gate_q_11, _gate_q_1;
  iswap _gate_q_9, _gate_q_10;
  ry(1.4274472374341236) _gate_q_0;
  cu(1.9178098242889046, 0.32931457446793583, 3.9984925610529225, 2.8907690038407705) _gate_q_5, _gate_q_3;
  r_5074766064(4.914026032148076, 0.005246539925413807) _gate_q_8;
  cp(2.489023309886345) _gate_q_6, _gate_q_17;
  s _gate_q_14;
  r_5074770768(3.8380984031269767, 4.370454635816183) _gate_q_18;
  z _gate_q_12;
  cz _gate_q_10, _gate_q_15;
  rz(1.2712192027337674) _gate_q_6;
  ry(3.6409617130562175) _gate_q_3;
  crz(0.9728380678865051) _gate_q_5, _gate_q_11;
  csdg _gate_q_1, _gate_q_9;
  h _gate_q_12;
  x _gate_q_16;
  ecr _gate_q_13, _gate_q_17;
  rxx_5074767264(1.2040444069841996) _gate_q_2, _gate_q_8;
  cs _gate_q_4, _gate_q_0;
  u2(3.1739924429020916, 3.0464268131092607) _gate_q_7;
  xx_plus_yy_5074766448(6.038513323626739, 1.5924221435188757) _gate_q_18, _gate_q_14;
}
gate xx_minus_yy_5074770336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.077703658001216) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.796883333883878) _gate_q_0;
  ry(-0.796883333883878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.077703658001216) _gate_q_1;
}
gate ryy_5074777536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.822335370064916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074768704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5044026268849686) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7024345610657076) _gate_q_1;
  ry(-0.7024345610657076) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5044026268849686) _gate_q_0;
}
gate rzx_5074768992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5894483241859554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074766016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.378951721334894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074963776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1942515061181034) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1942515061181034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1942515061181034) _gate_q_1;
}
gate xx_minus_yy_5074974288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4444854292418077) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5782480365348606) _gate_q_0;
  ry(-1.5782480365348606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4444854292418077) _gate_q_1;
}
gate cu3_5074974960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.354811041572012) _gate_q_0;
  u1(1.6944035897630394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.465505077267615, 0, -4.354811041572012) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.465505077267615, 2.660407451808973, 0) _gate_q_1;
}
gate xx_plus_yy_5074963536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7151370735493132) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1181462269795377) _gate_q_1;
  ry(-1.1181462269795377) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7151370735493132) _gate_q_0;
}
gate cu3_5074962672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.252063363026794) _gate_q_0;
  u1(2.8584682190748856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.960562534455521, 0, -3.252063363026794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.960562534455521, 0.39359514395190887, 0) _gate_q_1;
}
gate cu1_5074967616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.319624870663347) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.319624870663347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.319624870663347) _gate_q_1;
}
gate r_5074972752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1841180622121215, 0.43461723140932706, -0.43461723140932706) _gate_q_0;
}
gate xx_plus_yy_5074965792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1482367281669794) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9828146862628864) _gate_q_1;
  ry(-2.9828146862628864) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1482367281669794) _gate_q_0;
}
gate cu3_5074964832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.575374824770558) _gate_q_0;
  u1(0.3576268110387417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2860820539276099, 0, -2.575374824770558) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2860820539276099, 2.2177480137318164, 0) _gate_q_1;
}
gate cu1_5074968576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.49702084365241167) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.49702084365241167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.49702084365241167) _gate_q_1;
}
gate ryy_5074960512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.177330645725292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074968048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4047847953504455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074971360(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8403985247736485) _gate_q_0;
  u1(0.24973897397006573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5751359700154293, 0, -3.8403985247736485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5751359700154293, 3.590659550803583, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  crx(5.212044408927202) _gate_q_8, _gate_q_6;
  xx_minus_yy_5074770336(1.593766667767756, 6.077703658001216) _gate_q_4, _gate_q_16;
  ryy_5074777536(4.822335370064916) _gate_q_2, _gate_q_14;
  iswap _gate_q_5, _gate_q_12;
  s _gate_q_1;
  ch _gate_q_0, _gate_q_9;
  u3(3.8075054751912534, 6.277213899258242, 1.526409094614784) _gate_q_13;
  U(2.718634087252398, 2.7394529619164443, 0.4401256436154272) _gate_q_7;
  rz(4.299342694179876) _gate_q_15;
  dcx _gate_q_10, _gate_q_18;
  x _gate_q_11;
  sx _gate_q_17;
  u1(1.4150456767108204) _gate_q_3;
  u1(6.159944472393983) _gate_q_11;
  z _gate_q_12;
  z _gate_q_7;
  x _gate_q_9;
  ry(0.12284230034354744) _gate_q_1;
  s _gate_q_6;
  cy _gate_q_18, _gate_q_5;
  xx_plus_yy_5074768704(1.4048691221314151, 1.5044026268849686) _gate_q_4, _gate_q_10;
  cx _gate_q_0, _gate_q_13;
  ry(0.7572809898810018) _gate_q_17;
  crz(6.074672350676533) _gate_q_14, _gate_q_15;
  rzx_5074768992(1.5894483241859554) _gate_q_3, _gate_q_16;
  ecr _gate_q_2, _gate_q_8;
  cy _gate_q_7, _gate_q_11;
  u3(3.460611036154381, 2.984871714397853, 1.5310852709284481) _gate_q_17;
  cx _gate_q_15, _gate_q_3;
  ry(1.4850040625142868) _gate_q_18;
  ch _gate_q_2, _gate_q_4;
  ryy_5074766016(5.378951721334894) _gate_q_0, _gate_q_12;
  cz _gate_q_9, _gate_q_8;
  iswap _gate_q_10, _gate_q_14;
  id _gate_q_1;
  h _gate_q_13;
  cp(0.25900364132012904) _gate_q_5, _gate_q_6;
  y _gate_q_16;
  rz(3.410775056655254) _gate_q_15;
  t _gate_q_4;
  cu(3.6569965580337027, 6.04240145445648, 0.20545895097719485, 0.245719535523505) _gate_q_11, _gate_q_6;
  x _gate_q_12;
  cu(1.1480784513581244, 2.7521138105259895, 0.989116708127288, 1.5763939892566403) _gate_q_2, _gate_q_3;
  u1(5.878603941521575) _gate_q_17;
  cu1_5074963776(2.3885030122362068) _gate_q_9, _gate_q_14;
  rx(6.234182924333201) _gate_q_0;
  tdg _gate_q_1;
  xx_minus_yy_5074974288(3.156496073069721, 3.4444854292418077) _gate_q_18, _gate_q_10;
  ry(2.1809683010432024) _gate_q_8;
  csdg _gate_q_5, _gate_q_16;
  iswap _gate_q_7, _gate_q_13;
  cu3_5074974960(2.93101015453523, 2.660407451808973, 6.049214631335052) _gate_q_10, _gate_q_6;
  cu(2.25337020072612, 2.112196279191565, 4.868947241620859, 1.9038479782468847) _gate_q_7, _gate_q_2;
  xx_plus_yy_5074963536(2.2362924539590754, 0.7151370735493132) _gate_q_9, _gate_q_0;
  ch _gate_q_11, _gate_q_3;
  u2(6.098245150999436, 0.12633842331126888) _gate_q_13;
  t _gate_q_12;
  csdg _gate_q_5, _gate_q_15;
  crx(4.761516954399885) _gate_q_17, _gate_q_18;
  x _gate_q_4;
  cu3_5074962672(5.921125068911042, 0.39359514395190887, 6.11053158210168) _gate_q_14, _gate_q_8;
  cu1_5074967616(4.639249741326694) _gate_q_1, _gate_q_16;
  U(4.388821084718854, 2.5243865449930905, 1.746418576620235) _gate_q_10;
  cx _gate_q_11, _gate_q_12;
  tdg _gate_q_3;
  u2(2.8887148994750196, 4.5887944795574125) _gate_q_2;
  r_5074972752(5.1841180622121215, 2.0054135582042236) _gate_q_5;
  csx _gate_q_16, _gate_q_8;
  xx_plus_yy_5074965792(5.965629372525773, 2.1482367281669794) _gate_q_15, _gate_q_6;
  cu3_5074964832(2.5721641078552198, 2.2177480137318164, 2.9330016358093) _gate_q_14, _gate_q_13;
  u2(1.5878166468865225, 6.272410472865833) _gate_q_0;
  h _gate_q_7;
  dcx _gate_q_1, _gate_q_4;
  sx _gate_q_9;
  cu(2.236427742071935, 4.993702189804596, 1.1679523580355005, 0.18043064337085443) _gate_q_18, _gate_q_17;
  ch _gate_q_17, _gate_q_10;
  U(1.4288351829346269, 5.968798448266527, 2.1684288614807334) _gate_q_7;
  cry(1.879673981834311) _gate_q_1, _gate_q_12;
  cu(1.559136529249164, 1.9603630567687003, 3.771307369935001, 0.40792418741035735) _gate_q_16, _gate_q_4;
  u2(0.9358573970549591, 3.793917683219308) _gate_q_0;
  iswap _gate_q_15, _gate_q_2;
  s _gate_q_8;
  cp(3.7996357987660363) _gate_q_6, _gate_q_3;
  crx(3.9444605175226695) _gate_q_11, _gate_q_5;
  U(3.190294653400862, 1.4409254935868983, 1.06219967809227) _gate_q_9;
  u1(0.14659156280857844) _gate_q_13;
  iswap _gate_q_18, _gate_q_14;
  sdg _gate_q_0;
  cu1_5074968576(0.9940416873048233) _gate_q_2, _gate_q_5;
  csx _gate_q_8, _gate_q_7;
  ch _gate_q_3, _gate_q_17;
  u2(4.59080293729924, 2.32254968478593) _gate_q_11;
  p(2.2905355719140834) _gate_q_4;
  ch _gate_q_6, _gate_q_9;
  cs _gate_q_1, _gate_q_16;
  cp(6.0348237181381625) _gate_q_14, _gate_q_12;
  y _gate_q_15;
  crz(0.8529543785650552) _gate_q_13, _gate_q_18;
  rz(2.7709400375333653) _gate_q_10;
  cz _gate_q_17, _gate_q_13;
  csdg _gate_q_6, _gate_q_4;
  ryy_5074960512(4.177330645725292) _gate_q_3, _gate_q_18;
  cp(2.3064986778763634) _gate_q_0, _gate_q_16;
  cu(2.5254401748050808, 0.230329543910899, 4.619843199511279, 2.79316633595549) _gate_q_11, _gate_q_9;
  cp(5.536342631860702) _gate_q_5, _gate_q_2;
  rz(2.2412896266897784) _gate_q_10;
  u1(1.452087701661925) _gate_q_1;
  s _gate_q_12;
  u1(1.7837008390380051) _gate_q_15;
  ryy_5074968048(1.4047847953504455) _gate_q_8, _gate_q_14;
  u1(1.8396787005163544) _gate_q_7;
  z _gate_q_6;
  cu3_5074971360(3.1502719400308585, 3.590659550803583, 4.090137498743714) _gate_q_4, _gate_q_7;
  crx(0.08761900880662622) _gate_q_0, _gate_q_9;
  csx _gate_q_3, _gate_q_12;
  crx(2.637043985242588) _gate_q_2, _gate_q_13;
  iswap _gate_q_11, _gate_q_1;
  cry(3.4029832986362925) _gate_q_10, _gate_q_8;
  dcx _gate_q_5, _gate_q_17;
  y _gate_q_18;
  cx _gate_q_16, _gate_q_14;
  s _gate_q_15;
}