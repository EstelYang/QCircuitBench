gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5070300240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.635498721206371) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070303408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1741704323119997) _gate_q_0;
  u1(-1.4819355522329882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9539478209007689, 0, -3.1741704323119997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9539478209007689, 4.656105984544988, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5070296352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.656618580988085) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5849495752485804) _gate_q_1;
  ry(-0.5849495752485804) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.656618580988085) _gate_q_0;
}
gate cu1_5070305328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.03323516646776778) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.03323516646776778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.03323516646776778) _gate_q_1;
}
gate xx_plus_yy_5070305712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0343303750776547) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.833335361404961) _gate_q_1;
  ry(-2.833335361404961) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0343303750776547) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5070291120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.733955264668517, 1.928802791309833, -1.928802791309833) _gate_q_0;
}
gate rxx_5070296064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.918350131555935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate rzx_5070293424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9504270090096886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070294336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8606834282572026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070296688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6603981882660602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070294192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.965068525544718, 3.7582666681371544, -3.7582666681371544) _gate_q_0;
}
gate cu1_5070291744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.41193762621415625) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.41193762621415625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.41193762621415625) _gate_q_1;
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
gate rzx_5070298176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7933588022314515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070306480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.890808825755383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070293760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.688570029946543) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.688570029946543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.688570029946543) _gate_q_1;
}
gate cu3_5070299040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.161968936153675) _gate_q_0;
  u1(1.4307456405392323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.826121676208104, 0, -2.161968936153675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.826121676208104, 0.7312232956144428, 0) _gate_q_1;
}
gate ryy_5070293472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6288413485813804) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070297456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.712372936283236, -0.016638378887782412, 0.016638378887782412) _gate_q_0;
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
gate r_5070300768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.286146265668571, 3.9219788798873845, -3.9219788798873845) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  sxdg _gate_q_2;
  ryy_5070300240(5.635498721206371) _gate_q_10, _gate_q_5;
  tdg _gate_q_12;
  sxdg _gate_q_7;
  cu3_5070303408(1.9078956418015378, 4.656105984544988, 1.6922348800790115) _gate_q_0, _gate_q_11;
  ch _gate_q_6, _gate_q_1;
  csdg _gate_q_3, _gate_q_4;
  cy _gate_q_8, _gate_q_9;
  xx_plus_yy_5070296352(1.1698991504971608, 5.656618580988085) _gate_q_10, _gate_q_4;
  id _gate_q_6;
  cu1_5070305328(0.06647033293553556) _gate_q_11, _gate_q_12;
  s _gate_q_0;
  z _gate_q_7;
  ch _gate_q_8, _gate_q_2;
  xx_plus_yy_5070305712(5.666670722809922, 1.0343303750776547) _gate_q_5, _gate_q_3;
  p(4.878508163110258) _gate_q_1;
  u3(0.6420617978084706, 3.676967789119603, 0.504697620382596) _gate_q_9;
  swap _gate_q_1, _gate_q_0;
  iswap _gate_q_10, _gate_q_9;
  r_5070291120(4.733955264668517, 3.4995991181047295) _gate_q_11;
  rxx_5070296064(5.918350131555935) _gate_q_8, _gate_q_12;
  csx _gate_q_6, _gate_q_3;
  s _gate_q_5;
  rzx_5070293424(0.9504270090096886) _gate_q_7, _gate_q_2;
  y _gate_q_4;
  sdg _gate_q_5;
  rzx_5070294336(0.8606834282572026) _gate_q_0, _gate_q_6;
  sdg _gate_q_11;
  ry(2.8103244804022536) _gate_q_2;
  rx(6.14436323643291) _gate_q_1;
  ryy_5070296688(0.6603981882660602) _gate_q_3, _gate_q_9;
  r_5070294192(3.965068525544718, 5.329062994932051) _gate_q_7;
  cry(2.4908502812732007) _gate_q_8, _gate_q_10;
  sxdg _gate_q_12;
  x _gate_q_4;
  crz(0.8978447692514465) _gate_q_1, _gate_q_3;
  csx _gate_q_0, _gate_q_6;
  tdg _gate_q_5;
  h _gate_q_9;
  sx _gate_q_12;
  cu1_5070291744(0.8238752524283125) _gate_q_10, _gate_q_2;
  rz(0.9478937299924322) _gate_q_7;
  t _gate_q_11;
  dcx _gate_q_4, _gate_q_8;
  id _gate_q_5;
  cry(2.390789395742184) _gate_q_9, _gate_q_3;
  id _gate_q_0;
  ch _gate_q_12, _gate_q_10;
  ch _gate_q_6, _gate_q_11;
  cs _gate_q_8, _gate_q_4;
  crx(4.068290587515177) _gate_q_2, _gate_q_1;
  s _gate_q_7;
  csdg _gate_q_9, _gate_q_6;
  cry(0.2584556015210351) _gate_q_5, _gate_q_2;
  csdg _gate_q_1, _gate_q_10;
  rx(4.287429641226819) _gate_q_0;
  crx(4.993758844071896) _gate_q_7, _gate_q_12;
  h _gate_q_3;
  cx _gate_q_11, _gate_q_8;
  u3(2.3240466833469933, 5.218234939269746, 3.5968681793350608) _gate_q_4;
  t _gate_q_9;
  cry(5.381479162454694) _gate_q_8, _gate_q_0;
  rzx_5070298176(5.7933588022314515) _gate_q_2, _gate_q_7;
  sxdg _gate_q_5;
  sxdg _gate_q_1;
  u1(3.1341351837564573) _gate_q_11;
  cx _gate_q_12, _gate_q_3;
  swap _gate_q_10, _gate_q_6;
  U(1.6797072982134578, 0.3894368197383468, 1.4902336957842708) _gate_q_4;
  h _gate_q_11;
  x _gate_q_4;
  s _gate_q_12;
  swap _gate_q_8, _gate_q_0;
  x _gate_q_2;
  crx(0.5700427532137441) _gate_q_10, _gate_q_6;
  rxx_5070306480(2.890808825755383) _gate_q_5, _gate_q_3;
  cu1_5070293760(3.377140059893086) _gate_q_7, _gate_q_9;
  h _gate_q_1;
  csx _gate_q_9, _gate_q_0;
  cu3_5070299040(1.652243352416208, 0.7312232956144428, 3.592714576692907) _gate_q_11, _gate_q_12;
  z _gate_q_7;
  x _gate_q_5;
  ryy_5070293472(1.6288413485813804) _gate_q_2, _gate_q_1;
  r_5070297456(4.712372936283236, 1.5541579479071141) _gate_q_3;
  ecr _gate_q_10, _gate_q_8;
  y _gate_q_4;
  r_5070300768(3.286146265668571, 5.492775206682281) _gate_q_6;
}
gate cu3_5070307056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9002420810388512) _gate_q_0;
  u1(0.0727273687595682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.13074227800153473, 0, -0.9002420810388512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.13074227800153473, 0.827514712279283, 0) _gate_q_1;
}
gate rzz_5070306048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9801610176521959) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070295344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1654691202467846, 4.554182172670673, -4.554182172670673) _gate_q_0;
}
gate rxx_5070296832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4273111060613575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070305232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.934144756396063) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4342372699431363) _gate_q_0;
  ry(-1.4342372699431363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.934144756396063) _gate_q_1;
}
gate rzx_5070306720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3463121723513214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070303840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6520014273355931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070297936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.670941676851337) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070300288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.152025064765057) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7180512383955233) _gate_q_1;
  ry(-1.7180512383955233) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.152025064765057) _gate_q_0;
}
gate r_5070301104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3886732664483916, 0.008287816158905947, -0.008287816158905947) _gate_q_0;
}
gate r_5070298992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5498161178419312, 3.934438188031356, -3.934438188031356) _gate_q_0;
}
gate cu1_5070294096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5648906373452914) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5648906373452914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5648906373452914) _gate_q_1;
}
gate xx_minus_yy_5070293616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.55930003022286) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3400678023565865) _gate_q_0;
  ry(-0.3400678023565865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.55930003022286) _gate_q_1;
}
gate xx_plus_yy_5070305952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.068121064791588) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9203637955692495) _gate_q_1;
  ry(-0.9203637955692495) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.068121064791588) _gate_q_0;
}
gate rzx_5070298080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.691887534899245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070305856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.10499021285503135) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.10499021285503135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.10499021285503135) _gate_q_1;
}
gate r_5070293568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.683409757947483, 4.128748527788594, -4.128748527788594) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  U(1.6831549171346534, 5.832947254104245, 3.2232423381595576) _gate_q_4;
  cp(4.434478374573996) _gate_q_2, _gate_q_3;
  x _gate_q_6;
  cu3_5070307056(0.26148455600306947, 0.827514712279283, 0.9729694497984194) _gate_q_9, _gate_q_12;
  tdg _gate_q_7;
  csdg _gate_q_5, _gate_q_1;
  ecr _gate_q_8, _gate_q_11;
  rzz_5070306048(0.9801610176521959) _gate_q_10, _gate_q_0;
  x _gate_q_10;
  cs _gate_q_8, _gate_q_11;
  sxdg _gate_q_12;
  ch _gate_q_2, _gate_q_0;
  r_5070295344(1.1654691202467846, 6.12497849946557) _gate_q_6;
  sx _gate_q_9;
  dcx _gate_q_4, _gate_q_7;
  sdg _gate_q_1;
  rxx_5070296832(3.4273111060613575) _gate_q_3, _gate_q_5;
  u2(5.901229142104482, 5.746686269982641) _gate_q_8;
  csx _gate_q_9, _gate_q_3;
  csdg _gate_q_1, _gate_q_2;
  cp(3.8667420097978042) _gate_q_5, _gate_q_7;
  xx_minus_yy_5070305232(2.8684745398862725, 1.934144756396063) _gate_q_6, _gate_q_12;
  sx _gate_q_10;
  cx _gate_q_11, _gate_q_0;
  tdg _gate_q_4;
  rzx_5070306720(3.3463121723513214) _gate_q_1, _gate_q_11;
  rx(3.6818221658534376) _gate_q_12;
  id _gate_q_5;
  sx _gate_q_10;
  rxx_5070303840(0.6520014273355931) _gate_q_3, _gate_q_0;
  iswap _gate_q_6, _gate_q_9;
  rzz_5070297936(5.670941676851337) _gate_q_2, _gate_q_7;
  cx _gate_q_8, _gate_q_4;
  sx _gate_q_5;
  y _gate_q_1;
  id _gate_q_6;
  xx_plus_yy_5070300288(3.4361024767910466, 5.152025064765057) _gate_q_9, _gate_q_2;
  cry(0.5701985042168122) _gate_q_8, _gate_q_11;
  iswap _gate_q_12, _gate_q_3;
  dcx _gate_q_10, _gate_q_4;
  r_5070301104(1.3886732664483916, 1.5790841429538025) _gate_q_0;
  id _gate_q_7;
  u2(0.07022491007899662, 4.139401435541804) _gate_q_10;
  sx _gate_q_11;
  crz(2.1280532804916312) _gate_q_1, _gate_q_9;
  U(3.1797434804349067, 2.4639689442616124, 2.5593844479814605) _gate_q_2;
  r_5070298992(0.5498161178419312, 5.5052345148262525) _gate_q_3;
  y _gate_q_6;
  cu(2.324357309260602, 4.73687726999397, 0.019585216680985774, 2.2363220094131826) _gate_q_4, _gate_q_0;
  cu1_5070294096(1.1297812746905829) _gate_q_12, _gate_q_7;
  cx _gate_q_5, _gate_q_8;
  U(2.0017745357726766, 3.358896185790571, 1.879993867168485) _gate_q_10;
  ecr _gate_q_12, _gate_q_11;
  rx(0.4090764355197057) _gate_q_7;
  rx(2.2418868249510475) _gate_q_8;
  cu(2.0854669547683913, 0.7629156842115521, 4.939347268488939, 2.321324882795384) _gate_q_0, _gate_q_4;
  rz(1.0641981871063095) _gate_q_9;
  dcx _gate_q_3, _gate_q_1;
  xx_minus_yy_5070293616(0.680135604713173, 4.55930003022286) _gate_q_2, _gate_q_5;
  ry(1.0911191841368573) _gate_q_6;
  csx _gate_q_10, _gate_q_1;
  y _gate_q_9;
  u2(3.241890848725011, 5.929892018275303) _gate_q_11;
  ch _gate_q_5, _gate_q_6;
  sxdg _gate_q_2;
  u1(0.8351483645161801) _gate_q_3;
  sxdg _gate_q_12;
  u3(2.1584067134711162, 5.316775867424721, 2.7212684430423226) _gate_q_4;
  dcx _gate_q_7, _gate_q_0;
  id _gate_q_8;
  cu(3.209623539292251, 0.8820261398824051, 2.6120487194539486, 0.005760711922255125) _gate_q_6, _gate_q_7;
  xx_plus_yy_5070305952(1.840727591138499, 6.068121064791588) _gate_q_4, _gate_q_3;
  y _gate_q_2;
  rx(1.2224499088654743) _gate_q_5;
  cz _gate_q_0, _gate_q_8;
  cu(5.576573152590112, 0.43901412417663094, 0.7129753348535058, 4.820353200394037) _gate_q_9, _gate_q_12;
  sdg _gate_q_1;
  rzx_5070298080(0.691887534899245) _gate_q_10, _gate_q_11;
  u2(0.024646284485822206, 2.126136926015414) _gate_q_2;
  y _gate_q_10;
  csx _gate_q_4, _gate_q_1;
  rz(5.632326556637781) _gate_q_8;
  cu1_5070305856(0.2099804257100627) _gate_q_6, _gate_q_11;
  cx _gate_q_7, _gate_q_5;
  r_5070293568(5.683409757947483, 5.699544854583491) _gate_q_3;
  y _gate_q_12;
  x _gate_q_9;
  x _gate_q_0;
}