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
gate rzx_5105780784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3788919534424786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105779152(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.5884153950228095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105791584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.693523550843692) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.705057798638257) _gate_q_1;
  ry(-1.705057798638257) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.693523550843692) _gate_q_0;
}
gate ryy_5105788032(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.811460806939277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105785200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4122553084431937) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0432978183876815) _gate_q_0;
  ry(-2.0432978183876815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4122553084431937) _gate_q_1;
}
gate xx_plus_yy_5105791680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4662181930886781) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6112733388559876) _gate_q_1;
  ry(-0.6112733388559876) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4662181930886781) _gate_q_0;
}
gate cu1_5105780928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5456819559566048) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5456819559566048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5456819559566048) _gate_q_1;
}
gate cu1_5105794272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7575198566057293) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7575198566057293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7575198566057293) _gate_q_1;
}
gate ryy_5105794944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.450959023211278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105786352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.575963893182258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104436432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.882119239511123, 1.9493730004657959, -1.9493730004657959) _gate_q_0;
}
gate rzz_5104443728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9679119574014536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5104436048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4766652124653694, 2.9038361292524915, -2.9038361292524915) _gate_q_0;
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
gate xx_plus_yy_5104441616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.620834872702386) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1637483217147975) _gate_q_1;
  ry(-2.1637483217147975) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.620834872702386) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5104450160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.05637615558875, 1.0630885225825568, -1.0630885225825568) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  dcx _gate_q_2, _gate_q_8;
  sdg _gate_q_5;
  sdg _gate_q_4;
  ch _gate_q_7, _gate_q_9;
  cry(2.863039302123704) _gate_q_10, _gate_q_3;
  cs _gate_q_1, _gate_q_6;
  sx _gate_q_0;
  rzx_5105780784(2.3788919534424786) _gate_q_8, _gate_q_9;
  s _gate_q_2;
  cp(2.941445588307405) _gate_q_0, _gate_q_7;
  rzz_5105779152(4.5884153950228095) _gate_q_5, _gate_q_10;
  xx_plus_yy_5105791584(3.410115597276514, 1.693523550843692) _gate_q_6, _gate_q_3;
  y _gate_q_4;
  p(5.641732261426297) _gate_q_1;
  ch _gate_q_4, _gate_q_7;
  u3(0.4983806850419477, 2.3871038161382687, 1.726325837977228) _gate_q_2;
  p(2.7485856750327007) _gate_q_3;
  x _gate_q_10;
  sdg _gate_q_5;
  p(2.015686914248534) _gate_q_1;
  ryy_5105788032(3.811460806939277) _gate_q_9, _gate_q_0;
  xx_minus_yy_5105785200(4.086595636775363, 0.4122553084431937) _gate_q_8, _gate_q_6;
  cy _gate_q_10, _gate_q_2;
  xx_plus_yy_5105791680(1.2225466777119751, 0.4662181930886781) _gate_q_6, _gate_q_8;
  cu1_5105780928(1.0913639119132097) _gate_q_5, _gate_q_7;
  u1(4.576646359409424) _gate_q_1;
  cu1_5105794272(1.5150397132114586) _gate_q_4, _gate_q_0;
  p(5.591431014394841) _gate_q_9;
  t _gate_q_3;
  cz _gate_q_1, _gate_q_5;
  cz _gate_q_7, _gate_q_8;
  crz(3.8704029237066937) _gate_q_9, _gate_q_4;
  ryy_5105794944(4.450959023211278) _gate_q_2, _gate_q_0;
  crx(5.88320565540808) _gate_q_6, _gate_q_10;
  sdg _gate_q_3;
  ryy_5105786352(5.575963893182258) _gate_q_3, _gate_q_9;
  z _gate_q_4;
  dcx _gate_q_0, _gate_q_6;
  crz(2.8465258665608686) _gate_q_1, _gate_q_2;
  U(0.36656502524855905, 1.5249944921292347, 5.504880045598473) _gate_q_5;
  swap _gate_q_7, _gate_q_10;
  t _gate_q_8;
  ry(2.035825131623895) _gate_q_7;
  cz _gate_q_2, _gate_q_4;
  rx(5.295809754284629) _gate_q_9;
  U(5.5681690760073215, 2.275808800906055, 1.3233406561526226) _gate_q_6;
  p(4.779965229568667) _gate_q_10;
  cu(5.028394964618928, 3.1709330446663584, 3.4853903938918296, 4.0246297101287025) _gate_q_1, _gate_q_3;
  cz _gate_q_5, _gate_q_0;
  u1(4.244696886557151) _gate_q_8;
  sdg _gate_q_0;
  cx _gate_q_8, _gate_q_1;
  sdg _gate_q_7;
  r_5104436432(2.882119239511123, 3.5201693272606924) _gate_q_6;
  cs _gate_q_4, _gate_q_2;
  cz _gate_q_5, _gate_q_3;
  rzz_5104443728(1.9679119574014536) _gate_q_9, _gate_q_10;
  r_5104436048(1.4766652124653694, 4.474632456047388) _gate_q_10;
  csx _gate_q_4, _gate_q_7;
  xx_plus_yy_5104441616(4.327496643429595, 3.620834872702386) _gate_q_1, _gate_q_5;
  cz _gate_q_0, _gate_q_6;
  ch _gate_q_3, _gate_q_2;
  u2(1.1441595091642531, 1.3674356567956791) _gate_q_8;
  z _gate_q_9;
  t _gate_q_0;
  p(4.699304956785902) _gate_q_7;
  t _gate_q_6;
  tdg _gate_q_2;
  csdg _gate_q_1, _gate_q_4;
  sdg _gate_q_8;
  iswap _gate_q_3, _gate_q_5;
  r_5104450160(1.05637615558875, 2.6338848493774534) _gate_q_10;
  y _gate_q_9;
}
gate rxx_5104439984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.998200753926877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5104439216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.134528232308234) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4401329690584357) _gate_q_1;
  ry(-1.4401329690584357) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.134528232308234) _gate_q_0;
}
gate cu3_5104447472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5918592017866584) _gate_q_0;
  u1(-2.2592762018174484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3320734522118243, 0, -3.5918592017866584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3320734522118243, 5.851135403604107, 0) _gate_q_1;
}
gate cu1_5104445984(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7642867247302324) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7642867247302324) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7642867247302324) _gate_q_1;
}
gate cu1_5104445552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.091201695717306) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.091201695717306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.091201695717306) _gate_q_1;
}
gate ryy_5104446128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.639824186960849) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5104439120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3312215356497403) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3312215356497403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3312215356497403) _gate_q_1;
}
gate cu1_5104447376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.984759822734296) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.984759822734296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.984759822734296) _gate_q_1;
}
gate xx_plus_yy_5104451072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0617556322248172) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1312507569251236) _gate_q_1;
  ry(-1.1312507569251236) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0617556322248172) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cry(2.8573990885580822) _gate_q_0, _gate_q_5;
  cp(3.4624537987798933) _gate_q_2, _gate_q_3;
  cu(4.587246747947699, 3.4361519965036953, 6.281247894188216, 5.808675801427911) _gate_q_7, _gate_q_9;
  u2(1.42886407064429, 0.5485932498298037) _gate_q_10;
  y _gate_q_8;
  z _gate_q_4;
  rxx_5104439984(5.998200753926877) _gate_q_6, _gate_q_1;
  cu(5.534282112774826, 5.770473140436158, 1.455014775060995, 2.180966713160353) _gate_q_1, _gate_q_7;
  dcx _gate_q_5, _gate_q_6;
  cp(6.132879901662401) _gate_q_0, _gate_q_3;
  ry(3.710769650506096) _gate_q_10;
  U(1.9672754073053245, 0.5113055681560507, 0.8342052540437784) _gate_q_4;
  y _gate_q_8;
  sx _gate_q_2;
  y _gate_q_9;
  csx _gate_q_0, _gate_q_6;
  cu(3.882305018861112, 3.2348940280728935, 0.7596246359779892, 1.6279410761355202) _gate_q_2, _gate_q_4;
  cu(0.9434099336126867, 5.990482808435339, 5.206766246913732, 0.43001960231520664) _gate_q_7, _gate_q_5;
  cz _gate_q_3, _gate_q_1;
  ry(5.285239527654561) _gate_q_9;
  cs _gate_q_8, _gate_q_10;
  x _gate_q_8;
  p(0.46523678711450156) _gate_q_0;
  u3(2.9169174785977035, 4.373109741297328, 3.375555784502665) _gate_q_4;
  u1(0.8457452533511887) _gate_q_9;
  xx_plus_yy_5104439216(2.8802659381168714, 5.134528232308234) _gate_q_2, _gate_q_5;
  crz(1.1554743466764517) _gate_q_10, _gate_q_6;
  csdg _gate_q_7, _gate_q_3;
  rx(0.29034466018163574) _gate_q_1;
  id _gate_q_4;
  u2(4.7366262820255765, 3.8307090717055905) _gate_q_2;
  ry(1.2274172180947929) _gate_q_3;
  z _gate_q_8;
  swap _gate_q_7, _gate_q_1;
  sdg _gate_q_5;
  cu3_5104447472(2.6641469044236485, 5.851135403604107, 1.3325829999692098) _gate_q_0, _gate_q_6;
  sxdg _gate_q_9;
  y _gate_q_10;
  cp(3.272023130967842) _gate_q_5, _gate_q_8;
  crx(0.22205834205027783) _gate_q_9, _gate_q_7;
  cu1_5104445984(1.5285734494604648) _gate_q_4, _gate_q_6;
  crx(2.264771577634442) _gate_q_0, _gate_q_1;
  h _gate_q_10;
  cu1_5104445552(6.182403391434612) _gate_q_3, _gate_q_2;
  sxdg _gate_q_3;
  sxdg _gate_q_4;
  y _gate_q_10;
  t _gate_q_6;
  U(5.743387444870194, 4.746556814120241, 4.272994876987032) _gate_q_8;
  crx(3.2678452142215364) _gate_q_2, _gate_q_9;
  crz(2.064014269150101) _gate_q_1, _gate_q_0;
  cp(1.6398462181368214) _gate_q_5, _gate_q_7;
  cu(1.8137887283670973, 2.014144931761789, 1.4273718356266114, 3.3072077200324275) _gate_q_2, _gate_q_3;
  h _gate_q_1;
  rz(0.8130245602355426) _gate_q_5;
  iswap _gate_q_0, _gate_q_6;
  swap _gate_q_4, _gate_q_10;
  cs _gate_q_9, _gate_q_7;
  sxdg _gate_q_8;
  tdg _gate_q_0;
  csdg _gate_q_8, _gate_q_7;
  dcx _gate_q_1, _gate_q_6;
  ryy_5104446128(4.639824186960849) _gate_q_3, _gate_q_4;
  cu1_5104439120(4.662443071299481) _gate_q_5, _gate_q_2;
  cx _gate_q_10, _gate_q_9;
  U(5.281900282494313, 3.0772935792382716, 3.7231601045850082) _gate_q_9;
  rx(5.376868029577311) _gate_q_8;
  p(2.7361483376527214) _gate_q_5;
  cu1_5104447376(5.969519645468592) _gate_q_1, _gate_q_0;
  sxdg _gate_q_7;
  tdg _gate_q_10;
  sxdg _gate_q_6;
  xx_plus_yy_5104451072(2.262501513850247, 1.0617556322248172) _gate_q_2, _gate_q_3;
  h _gate_q_4;
}