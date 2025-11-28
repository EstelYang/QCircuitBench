gate cu1_5072314176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4283377860757109) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4283377860757109) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4283377860757109) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072314224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3954342549468234) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4334661236862656) _gate_q_0;
  ry(-1.4334661236862656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3954342549468234) _gate_q_1;
}
gate xx_plus_yy_5072316528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.018616463020777) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.007440982416954571) _gate_q_1;
  ry(-0.007440982416954571) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.018616463020777) _gate_q_0;
}
gate xx_plus_yy_5072317152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.683584175439764) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8421616257195483) _gate_q_1;
  ry(-1.8421616257195483) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.683584175439764) _gate_q_0;
}
gate r_5072306640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8512848444680614, -0.9029136370281181, 0.9029136370281181) _gate_q_0;
}
gate r_5072313792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0296206516530813, 2.2901634788093914, -2.2901634788093914) _gate_q_0;
}
gate cu1_5068985248(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.049875650446202) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.049875650446202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.049875650446202) _gate_q_1;
}
gate ryy_5074280544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.994619391585214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074277712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5362438791337865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rzx_5074277472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.078636444480696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5074279536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0024249390351465) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.509626685363946) _gate_q_1;
  ry(-2.509626685363946) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0024249390351465) _gate_q_0;
}
gate rzz_5074273632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.446149357142447) _gate_q_1;
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
gate cu1_5074276608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1834134844509347) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1834134844509347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1834134844509347) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5072308944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.646514047256647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate xx_plus_yy_5074273392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.748414727147075) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6211643029188245) _gate_q_1;
  ry(-2.6211643029188245) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.748414727147075) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rxx_5074273920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.008781835097522) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074279248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5442830867452364) _gate_q_0;
  u1(-1.6104967694636314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0909845495046642, 0, -2.5442830867452364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0909845495046642, 4.154779856208868, 0) _gate_q_1;
}
gate rxx_5074287792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0611299906935394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074286976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.342536096647883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074277616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8124393346063243) _gate_q_0;
  u1(-0.5337199762347431) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2349070200490706, 0, -3.8124393346063243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2349070200490706, 4.346159310841068, 0) _gate_q_1;
}
gate cu3_5074273440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.632001912185292) _gate_q_0;
  u1(1.877288257252609) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.32739374422017664, 0, -3.632001912185292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.32739374422017664, 1.7547136549326827, 0) _gate_q_1;
}
gate xx_minus_yy_5074281696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.0921630497059108) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9626217168644345) _gate_q_0;
  ry(-0.9626217168644345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.0921630497059108) _gate_q_1;
}
gate rxx_5074286352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8151892124138973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074287840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.940167119101979, 3.40694884793787, -3.40694884793787) _gate_q_0;
}
gate r_5074286400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2028897066160222, 2.7873231476296763, -2.7873231476296763) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  U(3.120431520923508, 2.4166977915550567, 3.643762394984973) _gate_q_16;
  cu1_5072314176(0.8566755721514218) _gate_q_11, _gate_q_18;
  cy _gate_q_3, _gate_q_12;
  xx_minus_yy_5072314224(2.866932247372531, 0.3954342549468234) _gate_q_1, _gate_q_17;
  xx_plus_yy_5072316528(0.014881964833909142, 6.018616463020777) _gate_q_2, _gate_q_9;
  crx(2.9848662750257757) _gate_q_5, _gate_q_8;
  xx_plus_yy_5072317152(3.6843232514390967, 2.683584175439764) _gate_q_7, _gate_q_6;
  cz _gate_q_14, _gate_q_15;
  tdg _gate_q_4;
  p(5.521162803307538) _gate_q_0;
  r_5072306640(3.8512848444680614, 0.6678826897667784) _gate_q_13;
  r_5072313792(2.0296206516530813, 3.860959805604288) _gate_q_10;
  rz(0.9131822178064787) _gate_q_10;
  cu1_5068985248(4.099751300892404) _gate_q_3, _gate_q_14;
  cp(0.7009694807526647) _gate_q_0, _gate_q_13;
  ryy_5074280544(3.994619391585214) _gate_q_4, _gate_q_6;
  z _gate_q_16;
  u3(1.9484636821573265, 1.3139884837695053, 5.591138923800456) _gate_q_18;
  sdg _gate_q_2;
  rzx_5074277712(3.5362438791337865) _gate_q_15, _gate_q_11;
  swap _gate_q_8, _gate_q_9;
  csx _gate_q_7, _gate_q_5;
  s _gate_q_1;
  sdg _gate_q_12;
  sxdg _gate_q_17;
  rzx_5074277472(3.078636444480696) _gate_q_4, _gate_q_2;
  x _gate_q_1;
  csdg _gate_q_18, _gate_q_17;
  xx_plus_yy_5074279536(5.019253370727892, 1.0024249390351465) _gate_q_16, _gate_q_14;
  z _gate_q_7;
  sxdg _gate_q_5;
  rx(4.831255802829508) _gate_q_8;
  x _gate_q_13;
  rzz_5074273632(4.446149357142447) _gate_q_15, _gate_q_3;
  h _gate_q_0;
  iswap _gate_q_12, _gate_q_10;
  cu1_5074276608(4.3668269689018695) _gate_q_9, _gate_q_11;
  ry(2.096616012001468) _gate_q_6;
  y _gate_q_4;
  z _gate_q_1;
  p(6.020538751852223) _gate_q_18;
  iswap _gate_q_15, _gate_q_5;
  h _gate_q_16;
  swap _gate_q_9, _gate_q_6;
  t _gate_q_12;
  cs _gate_q_7, _gate_q_2;
  crz(2.178193768666976) _gate_q_0, _gate_q_17;
  y _gate_q_3;
  u2(0.678519327324904, 4.07216230691759) _gate_q_11;
  s _gate_q_13;
  rxx_5072308944(2.646514047256647) _gate_q_10, _gate_q_14;
  rz(4.7342054603783525) _gate_q_8;
  cz _gate_q_3, _gate_q_2;
  x _gate_q_16;
  ecr _gate_q_11, _gate_q_8;
  x _gate_q_4;
  id _gate_q_18;
  crz(1.2136881754004734) _gate_q_7, _gate_q_12;
  ecr _gate_q_5, _gate_q_6;
  crx(2.2929524980764344) _gate_q_0, _gate_q_13;
  u2(5.9721046442162, 2.1687744094856627) _gate_q_14;
  t _gate_q_17;
  csdg _gate_q_9, _gate_q_10;
  sdg _gate_q_1;
  s _gate_q_15;
  U(1.7129667433260034, 2.7195413069708745, 0.32011102627599536) _gate_q_5;
  xx_plus_yy_5074273392(5.242328605837649, 2.748414727147075) _gate_q_12, _gate_q_13;
  sdg _gate_q_1;
  cp(3.891063171191796) _gate_q_16, _gate_q_10;
  rz(4.157910836018155) _gate_q_15;
  sdg _gate_q_2;
  dcx _gate_q_3, _gate_q_14;
  u1(5.298260494376525) _gate_q_7;
  cry(4.076876363203109) _gate_q_6, _gate_q_0;
  y _gate_q_17;
  crz(4.323681529931028) _gate_q_18, _gate_q_9;
  sxdg _gate_q_11;
  t _gate_q_8;
  h _gate_q_4;
  csdg _gate_q_4, _gate_q_10;
  u3(4.2135630092178, 3.7092643163422325, 0.2358774466860283) _gate_q_15;
  ecr _gate_q_12, _gate_q_6;
  csx _gate_q_0, _gate_q_13;
  y _gate_q_9;
  tdg _gate_q_2;
  p(5.679200372993124) _gate_q_14;
  csx _gate_q_11, _gate_q_1;
  p(2.274411063990797) _gate_q_16;
  p(2.0022379828247843) _gate_q_7;
  cry(2.057346871019737) _gate_q_17, _gate_q_18;
  s _gate_q_3;
  rxx_5074273920(4.008781835097522) _gate_q_5, _gate_q_8;
  csx _gate_q_12, _gate_q_15;
  cu3_5074279248(2.1819690990093283, 4.154779856208868, 0.9337863172816051) _gate_q_3, _gate_q_1;
  dcx _gate_q_4, _gate_q_18;
  sx _gate_q_8;
  dcx _gate_q_17, _gate_q_7;
  s _gate_q_10;
  rxx_5074287792(3.0611299906935394) _gate_q_6, _gate_q_5;
  csdg _gate_q_11, _gate_q_16;
  ryy_5074286976(4.342536096647883) _gate_q_13, _gate_q_14;
  sdg _gate_q_0;
  sx _gate_q_2;
  x _gate_q_9;
  csdg _gate_q_3, _gate_q_11;
  tdg _gate_q_7;
  cu3_5074277616(2.469814040098141, 4.346159310841068, 3.2787193583715815) _gate_q_10, _gate_q_16;
  cs _gate_q_5, _gate_q_17;
  ecr _gate_q_12, _gate_q_13;
  id _gate_q_14;
  cu3_5074273440(0.6547874884403533, 1.7547136549326827, 5.509290169437901) _gate_q_1, _gate_q_0;
  cy _gate_q_8, _gate_q_4;
  ry(0.09663107520268384) _gate_q_9;
  xx_minus_yy_5074281696(1.925243433728869, 0.0921630497059108) _gate_q_6, _gate_q_18;
  sdg _gate_q_15;
  x _gate_q_2;
  u3(4.171683243262384, 0.5722888407711499, 0.3025840888745396) _gate_q_16;
  rxx_5074286352(2.8151892124138973) _gate_q_7, _gate_q_8;
  cu(1.275370786013532, 2.1900327521157994, 4.226770650139247, 2.2433035180901246) _gate_q_14, _gate_q_4;
  r_5074287840(4.940167119101979, 4.977745174732767) _gate_q_5;
  y _gate_q_11;
  r_5074286400(1.2028897066160222, 4.358119474424573) _gate_q_9;
  rx(4.444200049187625) _gate_q_1;
  cy _gate_q_12, _gate_q_0;
  dcx _gate_q_6, _gate_q_3;
  sxdg _gate_q_17;
  id _gate_q_18;
  crx(4.6792463941766025) _gate_q_10, _gate_q_13;
  csdg _gate_q_15, _gate_q_2;
}
gate rzz_5074127664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0229026680487203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074128864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.047582674198025) _gate_q_0;
  u1(0.49003269400344895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0733200860671104, 0, -4.047582674198025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0733200860671104, 3.5575499801945756, 0) _gate_q_1;
}
gate rzz_5074139904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.014201863453518) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074131216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.41018042016654976, 4.396425619593532, -4.396425619593532) _gate_q_0;
}
gate ryy_5074134816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.664191722665965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074141152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.0604334066330559) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.0604334066330559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.0604334066330559) _gate_q_1;
}
gate xx_plus_yy_5074131984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.104299281570132) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1835388204376251) _gate_q_1;
  ry(-1.1835388204376251) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.104299281570132) _gate_q_0;
}
gate rzz_5074132944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7919031725014816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074125120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7704801203959946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074138368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.344208584470519) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.41777431775834417) _gate_q_0;
  ry(-0.41777431775834417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.344208584470519) _gate_q_1;
}
gate xx_minus_yy_5074127712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.669860347497874) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8884609965792079) _gate_q_0;
  ry(-1.8884609965792079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.669860347497874) _gate_q_1;
}
gate ryy_5074134672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1583797845917068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074127232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6058448257638167) _gate_q_0;
  u1(1.6391190566061828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.34861445364168514, 0, -3.6058448257638167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.34861445364168514, 1.9667257691576336, 0) _gate_q_1;
}
gate r_5074138800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.052149220222139, 3.863064136050247, -3.863064136050247) _gate_q_0;
}
gate r_5074139760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2463986874661512, -1.2787818718486934, 1.2787818718486934) _gate_q_0;
}
gate cu3_5074137264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.876495239383984) _gate_q_0;
  u1(1.4516993612215403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.774906047143297, 0, -1.876495239383984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.774906047143297, 0.4247958781624437, 0) _gate_q_1;
}
gate rzz_5074132272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.237120220409173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074140768(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9598508301507678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074125888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2897297094735203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074139616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7268306713932267) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7268306713932267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7268306713932267) _gate_q_1;
}
gate rzz_5074135776(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.078958958384463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  ry(3.714794508996463) _gate_q_1;
  x _gate_q_17;
  U(5.741908909445143, 0.5187554532552746, 5.940620625078731) _gate_q_5;
  x _gate_q_15;
  rzz_5074127664(1.0229026680487203) _gate_q_2, _gate_q_4;
  crx(0.9785172161651631) _gate_q_3, _gate_q_12;
  p(5.441044628305193) _gate_q_18;
  csx _gate_q_6, _gate_q_8;
  u3(3.391803132675971, 2.100701576196238, 5.776667827913136) _gate_q_11;
  cu3_5074128864(2.1466401721342208, 3.5575499801945756, 4.5376153682014735) _gate_q_0, _gate_q_16;
  u3(0.5131737502437456, 4.092241161785596, 3.5210124783341796) _gate_q_9;
  rzz_5074139904(5.014201863453518) _gate_q_13, _gate_q_7;
  x _gate_q_14;
  ry(2.2223062890521263) _gate_q_10;
  cp(4.091298094229224) _gate_q_18, _gate_q_5;
  sx _gate_q_4;
  sdg _gate_q_3;
  sdg _gate_q_17;
  cs _gate_q_10, _gate_q_6;
  csx _gate_q_16, _gate_q_15;
  dcx _gate_q_11, _gate_q_13;
  dcx _gate_q_7, _gate_q_12;
  cs _gate_q_14, _gate_q_2;
  crx(1.1772420093062614) _gate_q_9, _gate_q_0;
  crz(3.6044469879111602) _gate_q_1, _gate_q_8;
  z _gate_q_10;
  csx _gate_q_12, _gate_q_0;
  s _gate_q_8;
  r_5074131216(0.41018042016654976, 5.967221946388428) _gate_q_1;
  tdg _gate_q_4;
  iswap _gate_q_11, _gate_q_15;
  cp(6.19823191079613) _gate_q_2, _gate_q_17;
  cry(4.338694036041731) _gate_q_16, _gate_q_9;
  x _gate_q_6;
  tdg _gate_q_5;
  ryy_5074134816(5.664191722665965) _gate_q_13, _gate_q_18;
  cu1_5074141152(0.1208668132661118) _gate_q_7, _gate_q_14;
  t _gate_q_3;
  csx _gate_q_0, _gate_q_5;
  y _gate_q_4;
  cz _gate_q_8, _gate_q_11;
  xx_plus_yy_5074131984(2.3670776408752503, 5.104299281570132) _gate_q_10, _gate_q_18;
  h _gate_q_16;
  cs _gate_q_9, _gate_q_7;
  ecr _gate_q_2, _gate_q_1;
  U(0.8125241558538804, 0.9555301860835974, 4.616597549848598) _gate_q_3;
  u1(5.354498097837402) _gate_q_6;
  t _gate_q_12;
  rzz_5074132944(2.7919031725014816) _gate_q_17, _gate_q_15;
  cs _gate_q_14, _gate_q_13;
  swap _gate_q_14, _gate_q_12;
  sx _gate_q_0;
  rxx_5074125120(3.7704801203959946) _gate_q_16, _gate_q_15;
  swap _gate_q_9, _gate_q_18;
  z _gate_q_6;
  xx_minus_yy_5074138368(0.8355486355166883, 4.344208584470519) _gate_q_11, _gate_q_8;
  sx _gate_q_4;
  xx_minus_yy_5074127712(3.7769219931584157, 5.669860347497874) _gate_q_13, _gate_q_1;
  csdg _gate_q_2, _gate_q_7;
  p(3.0086450173860317) _gate_q_17;
  z _gate_q_5;
  swap _gate_q_10, _gate_q_3;
  cry(2.563753978908811) _gate_q_4, _gate_q_14;
  ryy_5074134672(1.1583797845917068) _gate_q_2, _gate_q_13;
  rz(1.9143559402243069) _gate_q_1;
  U(1.1371916353870093, 1.312600066755364, 4.103992367884378) _gate_q_15;
  ecr _gate_q_0, _gate_q_12;
  s _gate_q_3;
  csdg _gate_q_8, _gate_q_16;
  ch _gate_q_18, _gate_q_11;
  crx(0.4117932984821239) _gate_q_9, _gate_q_6;
  y _gate_q_10;
  h _gate_q_7;
  u1(5.3985662426186485) _gate_q_17;
  id _gate_q_5;
  u3(4.249593782504146, 2.953911350765816, 4.264699457465244) _gate_q_0;
  y _gate_q_17;
  cu3_5074127232(0.6972289072833703, 1.9667257691576336, 5.2449638823699996) _gate_q_1, _gate_q_6;
  y _gate_q_13;
  p(5.580563597732204) _gate_q_8;
  cx _gate_q_18, _gate_q_14;
  ch _gate_q_16, _gate_q_12;
  u1(4.284544828368873) _gate_q_11;
  cy _gate_q_4, _gate_q_7;
  dcx _gate_q_15, _gate_q_10;
  r_5074138800(5.052149220222139, 5.433860462845144) _gate_q_9;
  t _gate_q_5;
  y _gate_q_2;
  rz(1.036781664133093) _gate_q_3;
  p(0.7581434107937881) _gate_q_13;
  csdg _gate_q_3, _gate_q_4;
  u2(4.463848680459063, 1.625623191343169) _gate_q_11;
  u1(2.9902737134045343) _gate_q_2;
  ecr _gate_q_0, _gate_q_6;
  sx _gate_q_9;
  cx _gate_q_14, _gate_q_10;
  r_5074139760(1.2463986874661512, 0.29201445494620315) _gate_q_18;
  h _gate_q_12;
  dcx _gate_q_16, _gate_q_1;
  t _gate_q_17;
  dcx _gate_q_5, _gate_q_15;
  dcx _gate_q_7, _gate_q_8;
  cy _gate_q_15, _gate_q_1;
  sdg _gate_q_6;
  crz(4.958567956881207) _gate_q_18, _gate_q_11;
  z _gate_q_16;
  csx _gate_q_3, _gate_q_10;
  cu3_5074137264(5.549812094286594, 0.4247958781624437, 3.3281946006055243) _gate_q_2, _gate_q_0;
  t _gate_q_4;
  z _gate_q_12;
  rzz_5074132272(6.237120220409173) _gate_q_5, _gate_q_9;
  sdg _gate_q_8;
  cz _gate_q_13, _gate_q_17;
  x _gate_q_7;
  y _gate_q_14;
  csx _gate_q_2, _gate_q_4;
  rzz_5074140768(1.9598508301507678) _gate_q_0, _gate_q_18;
  csdg _gate_q_3, _gate_q_14;
  s _gate_q_17;
  rz(5.673432536736249) _gate_q_12;
  rxx_5074125888(3.2897297094735203) _gate_q_1, _gate_q_13;
  z _gate_q_9;
  sdg _gate_q_5;
  cu1_5074139616(3.4536613427864533) _gate_q_7, _gate_q_15;
  t _gate_q_11;
  cry(0.8760951381211504) _gate_q_16, _gate_q_10;
  rzz_5074135776(6.078958958384463) _gate_q_8, _gate_q_6;
}