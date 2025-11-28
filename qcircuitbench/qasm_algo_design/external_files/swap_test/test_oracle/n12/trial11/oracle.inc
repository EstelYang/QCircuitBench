gate cu3_5074262720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9718823961907095) _gate_q_0;
  u1(-0.04697455197228817) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2010392122545563, 0, -2.9718823961907095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2010392122545563, 3.0188569481629974, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate ryy_5074265456(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.533960485149448) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074264016(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6046404822660754) _gate_q_0;
  u1(-0.447411372155316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.336955024440842, 0, -1.6046404822660754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.336955024440842, 2.0520518544213915, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074263872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.5561203744953795) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07875258625889918) _gate_q_0;
  ry(-0.07875258625889918) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.5561203744953795) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5074264256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.041151321583902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074263392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.104705695336404) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6055157825097237) _gate_q_0;
  ry(-2.6055157825097237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.104705695336404) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074264928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.018758765070673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate ryy_5074264976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4356551690702477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  rx(5.844033344193823) _gate_q_5;
  sx _gate_q_3;
  cz _gate_q_6, _gate_q_0;
  cu3_5074262720(2.4020784245091127, 3.0188569481629974, 2.924907844218421) _gate_q_9, _gate_q_10;
  z _gate_q_8;
  iswap _gate_q_4, _gate_q_11;
  ry(0.6629121983919609) _gate_q_2;
  id _gate_q_7;
  t _gate_q_1;
  p(5.476341562745666) _gate_q_7;
  csx _gate_q_3, _gate_q_8;
  ryy_5074265456(5.533960485149448) _gate_q_1, _gate_q_4;
  rx(4.1209052808707325) _gate_q_0;
  z _gate_q_10;
  iswap _gate_q_2, _gate_q_11;
  u3(6.2677860998100385, 5.317446501321089, 1.207830385360196) _gate_q_5;
  sdg _gate_q_9;
  rz(1.5801925429054087) _gate_q_6;
  sdg _gate_q_4;
  cu3_5074264016(4.673910048881684, 2.0520518544213915, 1.1572291101107595) _gate_q_1, _gate_q_2;
  cp(6.197469219124817) _gate_q_3, _gate_q_9;
  t _gate_q_11;
  xx_minus_yy_5074263872(0.15750517251779836, 4.5561203744953795) _gate_q_6, _gate_q_5;
  h _gate_q_8;
  cs _gate_q_7, _gate_q_0;
  sx _gate_q_10;
  sx _gate_q_2;
  dcx _gate_q_4, _gate_q_10;
  ch _gate_q_8, _gate_q_11;
  cx _gate_q_3, _gate_q_7;
  cp(5.694376480463869) _gate_q_6, _gate_q_1;
  rzx_5074264256(5.041151321583902) _gate_q_5, _gate_q_0;
  h _gate_q_9;
  s _gate_q_4;
  h _gate_q_10;
  xx_minus_yy_5074263392(5.211031565019447, 4.104705695336404) _gate_q_3, _gate_q_9;
  iswap _gate_q_11, _gate_q_0;
  u3(1.873700376684457, 4.414946665537786, 2.607162085000484) _gate_q_2;
  U(5.599805245744414, 4.24899328415207, 2.5080366054327317) _gate_q_8;
  cy _gate_q_6, _gate_q_5;
  swap _gate_q_1, _gate_q_7;
  x _gate_q_4;
  cs _gate_q_9, _gate_q_7;
  dcx _gate_q_3, _gate_q_10;
  crz(6.132271350990646) _gate_q_11, _gate_q_5;
  u3(5.112009537836101, 2.5156125218035, 3.101676592541183) _gate_q_2;
  csdg _gate_q_6, _gate_q_0;
  z _gate_q_1;
  sdg _gate_q_8;
  dcx _gate_q_7, _gate_q_3;
  cry(3.3274663742471318) _gate_q_6, _gate_q_11;
  cs _gate_q_2, _gate_q_8;
  cry(5.0977201412248405) _gate_q_9, _gate_q_1;
  rzx_5074264928(1.018758765070673) _gate_q_10, _gate_q_4;
  cu(4.982565308915541, 3.2514574593395533, 2.72520263142632, 2.7218031770287388) _gate_q_5, _gate_q_0;
  z _gate_q_7;
  sdg _gate_q_11;
  tdg _gate_q_9;
  cp(0.28634292946227774) _gate_q_10, _gate_q_2;
  ecr _gate_q_8, _gate_q_6;
  sdg _gate_q_3;
  cu(6.0074207982545165, 1.8700266539063122, 4.986237976347092, 4.111722785441208) _gate_q_1, _gate_q_4;
  U(1.9155935963362811, 2.223873394131556, 5.887694209871958) _gate_q_5;
  h _gate_q_0;
  u2(0.7605142160585907, 5.91442160866232) _gate_q_11;
  cz _gate_q_4, _gate_q_3;
  csx _gate_q_1, _gate_q_5;
  cz _gate_q_6, _gate_q_7;
  ryy_5074264976(3.4356551690702477) _gate_q_0, _gate_q_10;
  rz(4.944197392356713) _gate_q_2;
  x _gate_q_8;
  s _gate_q_9;
  cu(3.768915861378428, 5.562390193697929, 3.8401784005758137, 5.1403942238441385) _gate_q_11, _gate_q_10;
  sx _gate_q_1;
  z _gate_q_2;
  dcx _gate_q_5, _gate_q_4;
  x _gate_q_6;
  u3(4.171738860436034, 6.281399468415166, 3.011918308981969) _gate_q_7;
  cz _gate_q_8, _gate_q_9;
  u1(0.9178684062866878) _gate_q_0;
  sdg _gate_q_3;
}
gate cu1_5074265840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.12023411515078505) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.12023411515078505) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.12023411515078505) _gate_q_1;
}
gate rzx_5074264400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6646698667873436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074263920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1376206976280967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074268576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4486490107322383) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2727046319799897) _gate_q_1;
  ry(-2.2727046319799897) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4486490107322383) _gate_q_0;
}
gate xx_plus_yy_5074267712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.818971123360516) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6905781349983074) _gate_q_1;
  ry(-0.6905781349983074) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.818971123360516) _gate_q_0;
}
gate ryy_5074267904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.994986452850294) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074269392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6054026068892284) _gate_q_0;
  u1(2.383908169725837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1495738371531092, 0, -3.6054026068892284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1495738371531092, 1.2214944371633913, 0) _gate_q_1;
}
gate xx_minus_yy_5074268432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7489238130952787) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0828794540350966) _gate_q_0;
  ry(-1.0828794540350966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7489238130952787) _gate_q_1;
}
gate cu3_5074269488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6533432919971722) _gate_q_0;
  u1(0.931468917041276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.742681065240871, 0, -3.6533432919971722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.742681065240871, 2.7218743749558962, 0) _gate_q_1;
}
gate rzx_5074269008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0488433572088054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074269584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6179140454361727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074270496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4910203701253475, 3.482566704978445, -3.482566704978445) _gate_q_0;
}
gate cu1_5074270592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0454324106916169) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0454324106916169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0454324106916169) _gate_q_1;
}
gate cu3_5074271120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.4019978384300664) _gate_q_0;
  u1(0.37982976673488067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.38086721257946543, 0, -0.4019978384300664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.38086721257946543, 0.022168071695185768, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  dcx _gate_q_4, _gate_q_9;
  id _gate_q_2;
  cs _gate_q_1, _gate_q_7;
  cu1_5074265840(0.2404682303015701) _gate_q_0, _gate_q_5;
  rzx_5074264400(2.6646698667873436) _gate_q_11, _gate_q_10;
  rxx_5074263920(0.1376206976280967) _gate_q_6, _gate_q_3;
  tdg _gate_q_8;
  p(1.8203012726315633) _gate_q_11;
  ecr _gate_q_8, _gate_q_2;
  xx_plus_yy_5074268576(4.5454092639599795, 3.4486490107322383) _gate_q_6, _gate_q_7;
  u2(3.325235247814742, 5.035148770893073) _gate_q_4;
  ry(0.9003124978736607) _gate_q_3;
  xx_plus_yy_5074267712(1.381156269996615, 1.818971123360516) _gate_q_10, _gate_q_9;
  p(1.6048186184148552) _gate_q_1;
  cy _gate_q_5, _gate_q_0;
  ryy_5074267904(5.994986452850294) _gate_q_5, _gate_q_6;
  h _gate_q_1;
  p(5.055448454145336) _gate_q_7;
  dcx _gate_q_4, _gate_q_2;
  cu3_5074269392(4.2991476743062185, 1.2214944371633913, 5.989310776615065) _gate_q_8, _gate_q_11;
  csx _gate_q_0, _gate_q_10;
  csx _gate_q_9, _gate_q_3;
  cx _gate_q_3, _gate_q_0;
  sdg _gate_q_9;
  xx_minus_yy_5074268432(2.165758908070193, 1.7489238130952787) _gate_q_5, _gate_q_10;
  cp(1.1904739832336948) _gate_q_7, _gate_q_2;
  csdg _gate_q_4, _gate_q_8;
  swap _gate_q_6, _gate_q_11;
  u3(0.6318143574092303, 1.72393767323637, 2.1157948722382662) _gate_q_1;
  crx(2.481524504274701) _gate_q_2, _gate_q_8;
  crx(5.7490569590395495) _gate_q_5, _gate_q_11;
  u1(4.2832243410285855) _gate_q_1;
  sdg _gate_q_6;
  cs _gate_q_10, _gate_q_7;
  rz(2.139210313987001) _gate_q_0;
  rx(5.293701913213035) _gate_q_3;
  cz _gate_q_4, _gate_q_9;
  cry(3.95054161367012) _gate_q_3, _gate_q_6;
  crz(3.5236582558732703) _gate_q_1, _gate_q_9;
  cu(3.340215956990561, 5.619854631121897, 1.07701625788062, 5.012242780570251) _gate_q_2, _gate_q_7;
  dcx _gate_q_5, _gate_q_0;
  cx _gate_q_8, _gate_q_4;
  t _gate_q_11;
  tdg _gate_q_10;
  rx(5.291658215952992) _gate_q_3;
  cx _gate_q_7, _gate_q_10;
  cu3_5074269488(5.485362130481742, 2.7218743749558962, 4.584812209038448) _gate_q_5, _gate_q_1;
  p(1.2095448919683713) _gate_q_6;
  swap _gate_q_11, _gate_q_4;
  rzx_5074269008(2.0488433572088054) _gate_q_0, _gate_q_2;
  id _gate_q_9;
  rx(0.16250534929809213) _gate_q_8;
  crx(1.0002272563652814) _gate_q_1, _gate_q_4;
  ry(5.935525218000673) _gate_q_5;
  sxdg _gate_q_0;
  rxx_5074269584(1.6179140454361727) _gate_q_8, _gate_q_10;
  y _gate_q_11;
  sdg _gate_q_9;
  dcx _gate_q_6, _gate_q_7;
  t _gate_q_3;
  id _gate_q_2;
  cry(4.645418080846672) _gate_q_7, _gate_q_10;
  cx _gate_q_8, _gate_q_4;
  r_5074270496(2.4910203701253475, 5.053363031773341) _gate_q_6;
  swap _gate_q_2, _gate_q_5;
  sdg _gate_q_11;
  sx _gate_q_1;
  crz(0.3504356365497458) _gate_q_9, _gate_q_0;
  id _gate_q_3;
  tdg _gate_q_5;
  u2(6.157801759898041, 1.1217274227259755) _gate_q_3;
  csdg _gate_q_1, _gate_q_7;
  y _gate_q_6;
  cu(1.736756894202948, 0.860722803828264, 1.5298967176185543, 4.477589821690734) _gate_q_9, _gate_q_4;
  cu1_5074270592(2.0908648213832337) _gate_q_2, _gate_q_0;
  cu3_5074271120(0.7617344251589309, 0.022168071695185768, 0.7818276051649471) _gate_q_11, _gate_q_8;
  x _gate_q_10;
}