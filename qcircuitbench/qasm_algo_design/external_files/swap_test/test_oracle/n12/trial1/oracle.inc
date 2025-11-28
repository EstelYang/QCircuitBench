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
gate rxx_5107721968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8718821046302727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5107722256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.34750459959588226) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.34750459959588226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.34750459959588226) _gate_q_1;
}
gate rzz_5107722016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.479966491870501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5107722352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.158176854775688) _gate_q_1;
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
gate rzz_5107721680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.927336256250129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107722784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8391222914868751) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107723648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1994358647473873) _gate_q_0;
  u1(-2.1613340464069677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9879615924244305, 0, -2.1994358647473873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9879615924244305, 4.360769911154355, 0) _gate_q_1;
}
gate rzx_5107723408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3500641424731272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107723552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5641681472198377) _gate_q_0;
  u1(-0.0020193754385855467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.63912934088462, 0, -2.5641681472198377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.63912934088462, 2.566187522658423, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5107722496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.532965963970838, 0.39665941257723913, -0.39665941257723913) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  u2(1.722009608175868, 1.9040888912067215) _gate_q_1;
  cy _gate_q_3, _gate_q_9;
  cx _gate_q_2, _gate_q_6;
  ry(5.612751022853015) _gate_q_8;
  crz(2.047563420297767) _gate_q_11, _gate_q_7;
  crz(0.42528460940054696) _gate_q_5, _gate_q_10;
  y _gate_q_4;
  s _gate_q_0;
  U(3.2255392201817203, 3.9400127698447966, 0.9044853924757033) _gate_q_6;
  cry(3.8973615135598925) _gate_q_4, _gate_q_2;
  csx _gate_q_0, _gate_q_3;
  rxx_5107721968(2.8718821046302727) _gate_q_7, _gate_q_9;
  csdg _gate_q_1, _gate_q_5;
  dcx _gate_q_11, _gate_q_8;
  z _gate_q_10;
  sxdg _gate_q_10;
  cu1_5107722256(0.6950091991917645) _gate_q_11, _gate_q_2;
  rzz_5107722016(5.479966491870501) _gate_q_5, _gate_q_1;
  h _gate_q_9;
  ecr _gate_q_3, _gate_q_4;
  crz(0.37267962434309115) _gate_q_7, _gate_q_0;
  ry(3.169881003103982) _gate_q_8;
  u3(1.7433747137789115, 1.7945305882714986, 0.2695982026423795) _gate_q_6;
  cu(1.851353271799506, 0.015336351622333651, 0.15461417519048792, 0.7443674949418188) _gate_q_11, _gate_q_9;
  rxx_5107722352(1.158176854775688) _gate_q_10, _gate_q_7;
  h _gate_q_3;
  rz(2.275012753998174) _gate_q_6;
  dcx _gate_q_8, _gate_q_4;
  y _gate_q_0;
  u3(3.160231101197988, 0.9413952460853622, 5.736455580305471) _gate_q_1;
  cs _gate_q_2, _gate_q_5;
  tdg _gate_q_9;
  rzz_5107721680(5.927336256250129) _gate_q_11, _gate_q_7;
  dcx _gate_q_5, _gate_q_1;
  ch _gate_q_0, _gate_q_8;
  dcx _gate_q_2, _gate_q_4;
  cry(4.358779135367041) _gate_q_3, _gate_q_6;
  s _gate_q_10;
  crz(0.5468603168848808) _gate_q_10, _gate_q_5;
  tdg _gate_q_6;
  cu(0.4723016671258861, 5.821476547411393, 5.614765308181676, 2.6128833407170142) _gate_q_1, _gate_q_7;
  rzx_5107722784(0.8391222914868751) _gate_q_2, _gate_q_8;
  sxdg _gate_q_11;
  cz _gate_q_0, _gate_q_3;
  x _gate_q_9;
  rx(4.625425108563145) _gate_q_4;
  sdg _gate_q_2;
  p(1.9240013502203828) _gate_q_10;
  sx _gate_q_11;
  z _gate_q_5;
  sdg _gate_q_3;
  ecr _gate_q_4, _gate_q_0;
  id _gate_q_8;
  tdg _gate_q_6;
  u3(0.3600156575482535, 3.9728517719053604, 5.843249791718316) _gate_q_7;
  cry(4.40667559401844) _gate_q_9, _gate_q_1;
  csx _gate_q_11, _gate_q_7;
  cy _gate_q_0, _gate_q_2;
  ecr _gate_q_10, _gate_q_6;
  tdg _gate_q_1;
  u2(3.271958430639245, 2.9668949443088084) _gate_q_3;
  cz _gate_q_9, _gate_q_8;
  ry(5.658537737418463) _gate_q_4;
  u2(1.6532274102794806, 2.2330060378979995) _gate_q_5;
  cu3_5107723648(3.975923184848861, 4.360769911154355, 0.03810181834041973) _gate_q_8, _gate_q_10;
  rzx_5107723408(2.3500641424731272) _gate_q_2, _gate_q_4;
  t _gate_q_3;
  cu3_5107723552(5.27825868176924, 2.566187522658423, 2.562148771781252) _gate_q_0, _gate_q_7;
  rx(5.398243711546313) _gate_q_1;
  crx(2.536055884774321) _gate_q_5, _gate_q_9;
  cs _gate_q_6, _gate_q_11;
  s _gate_q_0;
  sdg _gate_q_3;
  ecr _gate_q_2, _gate_q_5;
  iswap _gate_q_4, _gate_q_8;
  r_5107722496(5.532965963970838, 1.9674557393721357) _gate_q_11;
  sdg _gate_q_6;
  h _gate_q_10;
  cz _gate_q_9, _gate_q_1;
  U(1.1584287250267373, 1.4618920410781873, 4.454029331782454) _gate_q_7;
}
gate xx_plus_yy_5107727200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4144243440025557) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.039306409219281) _gate_q_1;
  ry(-2.039306409219281) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4144243440025557) _gate_q_0;
}
gate rxx_5107727392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.792759663564916) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107727056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.11945588783582702) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8529430132695717) _gate_q_0;
  ry(-1.8529430132695717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.11945588783582702) _gate_q_1;
}
gate cu1_5107727440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0065177370851024) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0065177370851024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0065177370851024) _gate_q_1;
}
gate ryy_5107727488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.711912444211262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107720432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.975477738601137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107727920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.428139198763562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107728016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2213285493650616) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5674105911723206) _gate_q_1;
  ry(-2.5674105911723206) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2213285493650616) _gate_q_0;
}
gate cu1_5107727872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5274539190992149) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5274539190992149) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5274539190992149) _gate_q_1;
}
gate xx_minus_yy_5107727968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.400640359838178) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1630439901459799) _gate_q_0;
  ry(-0.1630439901459799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.400640359838178) _gate_q_1;
}
gate cu1_5107728112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9930352211991043) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9930352211991043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9930352211991043) _gate_q_1;
}
gate cu1_5107718272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4054303406850517) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4054303406850517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4054303406850517) _gate_q_1;
}
gate r_5107726480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.8826061855303236, -0.6642104798206006, 0.6642104798206006) _gate_q_0;
}
gate xx_minus_yy_5107726336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.47600100749041996) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9817057968190592) _gate_q_0;
  ry(-1.9817057968190592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.47600100749041996) _gate_q_1;
}
gate ryy_5107600560(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.306447507030453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  tdg _gate_q_1;
  id _gate_q_8;
  csx _gate_q_4, _gate_q_5;
  cu(2.6610736953211913, 5.715799162139166, 4.392629852883786, 0.7697248957676545) _gate_q_0, _gate_q_2;
  ch _gate_q_3, _gate_q_6;
  iswap _gate_q_9, _gate_q_11;
  s _gate_q_7;
  u2(3.820417387231168, 5.733053209883236) _gate_q_10;
  ry(4.430704234491528) _gate_q_6;
  xx_plus_yy_5107727200(4.078612818438562, 1.4144243440025557) _gate_q_1, _gate_q_7;
  u3(2.9176124235403744, 0.08423994501635564, 2.6999571351823684) _gate_q_9;
  z _gate_q_2;
  tdg _gate_q_11;
  csdg _gate_q_0, _gate_q_10;
  rxx_5107727392(4.792759663564916) _gate_q_3, _gate_q_8;
  u2(5.464322295161502, 5.941453067808464) _gate_q_4;
  u2(0.04267844740205116, 0.858391660234508) _gate_q_5;
  u1(2.1844293904463603) _gate_q_0;
  xx_minus_yy_5107727056(3.7058860265391433, 0.11945588783582702) _gate_q_7, _gate_q_9;
  cu(0.934347522585574, 5.194679635339105, 5.661617268165588, 5.864436485787658) _gate_q_8, _gate_q_4;
  cu1_5107727440(2.013035474170205) _gate_q_5, _gate_q_10;
  U(4.444016885465464, 3.543300784877823, 4.216015939934519) _gate_q_3;
  t _gate_q_1;
  cs _gate_q_11, _gate_q_6;
  y _gate_q_2;
  cz _gate_q_3, _gate_q_4;
  t _gate_q_6;
  crx(2.8270218852521087) _gate_q_9, _gate_q_11;
  U(4.378655042473171, 1.9970426950575217, 1.7511143300886631) _gate_q_2;
  cz _gate_q_7, _gate_q_8;
  t _gate_q_0;
  ryy_5107727488(5.711912444211262) _gate_q_10, _gate_q_1;
  U(1.228528898857592, 1.0105319204890737, 2.084397984152135) _gate_q_5;
  s _gate_q_8;
  rz(3.9494885851543544) _gate_q_10;
  t _gate_q_6;
  sx _gate_q_11;
  cy _gate_q_9, _gate_q_3;
  ecr _gate_q_4, _gate_q_2;
  swap _gate_q_1, _gate_q_7;
  rxx_5107720432(5.975477738601137) _gate_q_5, _gate_q_0;
  rz(1.6944888082361047) _gate_q_11;
  crx(5.888070897915979) _gate_q_10, _gate_q_7;
  u2(3.5046827784300416, 5.410923917937531) _gate_q_6;
  rzz_5107727920(5.428139198763562) _gate_q_9, _gate_q_3;
  xx_plus_yy_5107728016(5.134821182344641, 3.2213285493650616) _gate_q_0, _gate_q_8;
  cu1_5107727872(1.0549078381984298) _gate_q_2, _gate_q_1;
  ch _gate_q_5, _gate_q_4;
  csx _gate_q_1, _gate_q_9;
  id _gate_q_11;
  ch _gate_q_0, _gate_q_4;
  xx_minus_yy_5107727968(0.3260879802919598, 2.400640359838178) _gate_q_2, _gate_q_10;
  u1(5.5409066164876855) _gate_q_3;
  cu1_5107728112(3.9860704423982085) _gate_q_6, _gate_q_8;
  cz _gate_q_7, _gate_q_5;
  cs _gate_q_9, _gate_q_2;
  t _gate_q_5;
  tdg _gate_q_4;
  iswap _gate_q_6, _gate_q_10;
  u2(5.066831905054138, 3.9380564895933667) _gate_q_1;
  crz(2.426599264158508) _gate_q_8, _gate_q_3;
  p(2.2016950250867557) _gate_q_11;
  t _gate_q_7;
  sdg _gate_q_0;
  u2(1.6206525982261943, 2.981168368919256) _gate_q_0;
  cu1_5107718272(4.810860681370103) _gate_q_2, _gate_q_10;
  r_5107726480(4.8826061855303236, 0.906585846974296) _gate_q_3;
  xx_minus_yy_5107726336(3.9634115936381185, 0.47600100749041996) _gate_q_11, _gate_q_6;
  sxdg _gate_q_7;
  iswap _gate_q_8, _gate_q_1;
  csdg _gate_q_9, _gate_q_5;
  p(4.3760060874706195) _gate_q_4;
  u1(2.7301375689239853) _gate_q_10;
  rz(2.9394290178865936) _gate_q_0;
  U(0.24703032810730793, 5.475506237244839, 4.7192954812121055) _gate_q_3;
  ryy_5107600560(5.306447507030453) _gate_q_5, _gate_q_2;
  z _gate_q_7;
  crz(0.24994297766871387) _gate_q_11, _gate_q_1;
  p(4.268697649799989) _gate_q_8;
  y _gate_q_9;
  u2(4.8873729635346645, 2.7219272342163734) _gate_q_6;
  sdg _gate_q_4;
}