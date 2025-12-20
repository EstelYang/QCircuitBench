gate ryy_5106335424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7494217853130423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5106331728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.067017145276631, -0.202691006162929, 0.202691006162929) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106324576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.05934045400316) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.871293856228036) _gate_q_1;
  ry(-2.871293856228036) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.05934045400316) _gate_q_0;
}
gate xx_plus_yy_5106326064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2297347194807116) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.658853787406828) _gate_q_1;
  ry(-2.658853787406828) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2297347194807116) _gate_q_0;
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
gate rzx_5106329904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.264332287458525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5106326640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.3396636713413805) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6730576942752592) _gate_q_0;
  ry(-0.6730576942752592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.3396636713413805) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5106331344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7729099929796783, 2.34232240764796, -2.34232240764796) _gate_q_0;
}
gate rzz_5106323328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.1518264498979836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107322176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6723155664251403) _gate_q_0;
  u1(-1.7481850089458404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2533574368721014, 0, -2.6723155664251403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2533574368721014, 4.420500575370981, 0) _gate_q_1;
}
gate xx_plus_yy_5106319536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.421026624753478) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.17357133522426477) _gate_q_1;
  ry(-0.17357133522426477) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.421026624753478) _gate_q_0;
}
gate rzz_5116252512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8336068497799394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_4965240272(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.29155095962681) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.29155095962681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.29155095962681) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  ryy_5106335424(1.7494217853130423) _gate_q_10, _gate_q_5;
  ry(3.0581892638006276) _gate_q_9;
  crx(3.6854529393014444) _gate_q_2, _gate_q_3;
  cs _gate_q_8, _gate_q_0;
  r_5106331728(5.067017145276631, 1.3681053206319675) _gate_q_1;
  csdg _gate_q_11, _gate_q_6;
  z _gate_q_12;
  ry(0.9682279997007506) _gate_q_7;
  tdg _gate_q_4;
  xx_plus_yy_5106324576(5.742587712456072, 3.05934045400316) _gate_q_12, _gate_q_4;
  xx_plus_yy_5106326064(5.317707574813656, 3.2297347194807116) _gate_q_3, _gate_q_5;
  u1(4.44200896792943) _gate_q_2;
  U(2.2426708356486946, 4.432447546882576, 4.69613208782827) _gate_q_11;
  cp(4.632105105700215) _gate_q_0, _gate_q_8;
  u3(1.6262627925260364, 5.729716469677359, 4.973392163907575) _gate_q_1;
  rz(4.835644570502985) _gate_q_6;
  tdg _gate_q_9;
  ecr _gate_q_7, _gate_q_10;
  crz(0.6008338016935068) _gate_q_5, _gate_q_1;
  rzx_5106329904(3.264332287458525) _gate_q_6, _gate_q_7;
  y _gate_q_2;
  cu(0.7755301623100803, 2.8894714967356334, 1.5426137692006014, 1.3241250536645626) _gate_q_11, _gate_q_0;
  xx_minus_yy_5106326640(1.3461153885505184, 5.3396636713413805) _gate_q_9, _gate_q_4;
  iswap _gate_q_12, _gate_q_8;
  ry(2.03692973381428) _gate_q_10;
  rz(1.3188706037704911) _gate_q_3;
  cp(3.5409247830872332) _gate_q_7, _gate_q_10;
  id _gate_q_2;
  cry(2.1536134658855066) _gate_q_3, _gate_q_5;
  dcx _gate_q_4, _gate_q_11;
  r_5106331344(2.7729099929796783, 3.9131187344428566) _gate_q_8;
  cy _gate_q_12, _gate_q_0;
  p(1.9174436550561715) _gate_q_9;
  ry(0.19555161962322012) _gate_q_1;
  sdg _gate_q_6;
  x _gate_q_8;
  sxdg _gate_q_1;
  cz _gate_q_6, _gate_q_5;
  sdg _gate_q_7;
  sdg _gate_q_4;
  z _gate_q_0;
  cp(0.09379470646247282) _gate_q_11, _gate_q_3;
  rzz_5106323328(5.1518264498979836) _gate_q_9, _gate_q_2;
  x _gate_q_10;
  U(4.985415178973648, 3.141930694189685, 2.754788649430596) _gate_q_12;
  tdg _gate_q_6;
  y _gate_q_10;
  U(5.181578075423431, 1.8594160913042699, 5.206732423962676) _gate_q_5;
  cu3_5107322176(4.506714873744203, 4.420500575370981, 0.9241305574792997) _gate_q_4, _gate_q_0;
  cs _gate_q_7, _gate_q_9;
  s _gate_q_12;
  swap _gate_q_3, _gate_q_2;
  sxdg _gate_q_11;
  rz(1.7437313931434137) _gate_q_1;
  t _gate_q_8;
  ch _gate_q_1, _gate_q_8;
  u3(4.517921496224328, 5.81882540638182, 5.94092932801091) _gate_q_0;
  xx_plus_yy_5106319536(0.34714267044852953, 2.421026624753478) _gate_q_9, _gate_q_3;
  ch _gate_q_11, _gate_q_10;
  s _gate_q_12;
  crx(4.640071518293006) _gate_q_2, _gate_q_4;
  h _gate_q_7;
  swap _gate_q_5, _gate_q_6;
  rzz_5116252512(2.8336068497799394) _gate_q_5, _gate_q_6;
  tdg _gate_q_8;
  swap _gate_q_11, _gate_q_3;
  cs _gate_q_9, _gate_q_7;
  cz _gate_q_10, _gate_q_0;
  csdg _gate_q_12, _gate_q_2;
  tdg _gate_q_4;
  t _gate_q_1;
  ch _gate_q_7, _gate_q_12;
  cu1_4965240272(4.58310191925362) _gate_q_0, _gate_q_8;
  s _gate_q_5;
  cp(5.8572084030280696) _gate_q_9, _gate_q_1;
  u3(0.4388409434786943, 0.5308614032659857, 5.15318258671331) _gate_q_4;
  rz(3.6808837698904564) _gate_q_2;
  iswap _gate_q_10, _gate_q_6;
  h _gate_q_3;
  y _gate_q_11;
  crz(4.344560950396633) _gate_q_10, _gate_q_6;
  cy _gate_q_9, _gate_q_11;
  dcx _gate_q_2, _gate_q_4;
  y _gate_q_0;
  iswap _gate_q_1, _gate_q_12;
  iswap _gate_q_5, _gate_q_7;
  iswap _gate_q_3, _gate_q_8;
}
gate xx_minus_yy_5105145888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8219681755988675) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4115152868200087) _gate_q_0;
  ry(-2.4115152868200087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8219681755988675) _gate_q_1;
}
gate rzz_5105144016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3916684930996321) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105143728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.726008663438612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105149296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.22590672948070004, 2.753225965816008, -2.753225965816008) _gate_q_0;
}
gate ryy_5105144544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.365409022599172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105148528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.517035507067025) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.22550814334151426) _gate_q_1;
  ry(-0.22550814334151426) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.517035507067025) _gate_q_0;
}
gate r_5105145504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.529033386403273, 2.422770388639183, -2.422770388639183) _gate_q_0;
}
gate ryy_5105150160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29215706668174063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105144448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.846382951148315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105145216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7087584103550357) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7087584103550357) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7087584103550357) _gate_q_1;
}
gate xx_minus_yy_5105152320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.057835156500437) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3707919835972997) _gate_q_0;
  ry(-2.3707919835972997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.057835156500437) _gate_q_1;
}
gate xx_minus_yy_5105153904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.602192799524625) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7269648888548342) _gate_q_0;
  ry(-0.7269648888548342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.602192799524625) _gate_q_1;
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
gate ryy_5105152752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.232232402118275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105152656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4925497468243582) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4925497468243582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4925497468243582) _gate_q_1;
}
gate rxx_5105141040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2240507632026887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105148192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.3834150861644305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105140272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.536450256313549) _gate_q_0;
  u1(-2.231832450748851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4827523062088575, 0, -2.536450256313549) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4827523062088575, 4.7682827070624, 0) _gate_q_1;
}
gate r_5105151696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9607945965248783, 2.253865792779072, -2.253865792779072) _gate_q_0;
}
gate rzx_5105143152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.106735531907414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  rx(3.7736469619306767) _gate_q_5;
  sx _gate_q_2;
  iswap _gate_q_7, _gate_q_1;
  u3(1.3755179486643234, 2.0286378527540876, 0.22501066450979193) _gate_q_11;
  y _gate_q_9;
  xx_minus_yy_5105145888(4.823030573640017, 3.8219681755988675) _gate_q_6, _gate_q_4;
  rzz_5105144016(1.3916684930996321) _gate_q_3, _gate_q_10;
  csdg _gate_q_12, _gate_q_0;
  u2(1.6695538818815219, 0.5748619194008099) _gate_q_8;
  ch _gate_q_11, _gate_q_5;
  y _gate_q_8;
  swap _gate_q_1, _gate_q_0;
  cp(4.818808080749522) _gate_q_7, _gate_q_6;
  rzx_5105143728(3.726008663438612) _gate_q_10, _gate_q_4;
  id _gate_q_9;
  u3(5.769564776186562, 3.4725003276632833, 5.360640154389162) _gate_q_2;
  dcx _gate_q_3, _gate_q_12;
  cz _gate_q_2, _gate_q_6;
  sdg _gate_q_4;
  r_5105149296(0.22590672948070004, 4.324022292610905) _gate_q_12;
  s _gate_q_5;
  ryy_5105144544(5.365409022599172) _gate_q_9, _gate_q_7;
  xx_plus_yy_5105148528(0.4510162866830285, 4.517035507067025) _gate_q_0, _gate_q_10;
  t _gate_q_8;
  csdg _gate_q_3, _gate_q_1;
  ry(2.8632982774898634) _gate_q_11;
  ry(4.234116679749252) _gate_q_0;
  r_5105145504(5.529033386403273, 3.9935667154340795) _gate_q_4;
  ch _gate_q_2, _gate_q_6;
  tdg _gate_q_3;
  tdg _gate_q_10;
  ryy_5105150160(0.29215706668174063) _gate_q_8, _gate_q_7;
  ry(3.5811023775408968) _gate_q_5;
  rzz_5105144448(2.846382951148315) _gate_q_1, _gate_q_9;
  u3(4.542056108535231, 5.708447948007448, 3.203061747847141) _gate_q_11;
  z _gate_q_12;
  sxdg _gate_q_10;
  rx(1.325209345788161) _gate_q_9;
  p(5.5818831576943) _gate_q_0;
  cs _gate_q_12, _gate_q_8;
  U(3.8492284334348725, 5.412578709675003, 5.25821472235021) _gate_q_6;
  cu1_5105145216(5.4175168207100715) _gate_q_5, _gate_q_11;
  t _gate_q_7;
  ecr _gate_q_1, _gate_q_3;
  crz(0.42150846714646667) _gate_q_2, _gate_q_4;
  cy _gate_q_4, _gate_q_11;
  xx_minus_yy_5105152320(4.741583967194599, 4.057835156500437) _gate_q_12, _gate_q_7;
  cry(0.8424260888795875) _gate_q_3, _gate_q_8;
  cy _gate_q_1, _gate_q_6;
  swap _gate_q_2, _gate_q_10;
  y _gate_q_9;
  xx_minus_yy_5105153904(1.4539297777096685, 5.602192799524625) _gate_q_0, _gate_q_5;
  csx _gate_q_1, _gate_q_5;
  iswap _gate_q_2, _gate_q_11;
  ryy_5105152752(6.232232402118275) _gate_q_7, _gate_q_10;
  swap _gate_q_12, _gate_q_0;
  U(3.047485103299452, 2.711175846947554, 1.471505796401078) _gate_q_9;
  cu1_5105152656(0.9850994936487164) _gate_q_6, _gate_q_3;
  rx(2.56984449941121) _gate_q_8;
  sdg _gate_q_4;
  rxx_5105141040(3.2240507632026887) _gate_q_9, _gate_q_1;
  s _gate_q_11;
  crx(1.6926875125419625) _gate_q_2, _gate_q_12;
  rzz_5105148192(5.3834150861644305) _gate_q_4, _gate_q_7;
  U(5.629524722282446, 4.05210737931243, 4.373786478791147) _gate_q_3;
  p(0.5469804725169475) _gate_q_10;
  iswap _gate_q_5, _gate_q_6;
  sdg _gate_q_8;
  p(2.401503975190744) _gate_q_0;
  iswap _gate_q_11, _gate_q_4;
  p(4.7080891778576435) _gate_q_10;
  tdg _gate_q_0;
  rx(0.16260647708759587) _gate_q_7;
  iswap _gate_q_3, _gate_q_12;
  u1(3.526849391140245) _gate_q_2;
  t _gate_q_5;
  cu3_5105140272(4.965504612417715, 4.7682827070624, 0.30461780556469814) _gate_q_8, _gate_q_6;
  s _gate_q_1;
  u2(0.5103425696460254, 1.2919579536195602) _gate_q_9;
  ch _gate_q_1, _gate_q_4;
  t _gate_q_8;
  s _gate_q_2;
  rz(4.252174946516248) _gate_q_3;
  tdg _gate_q_5;
  r_5105151696(3.9607945965248783, 3.8246621195739685) _gate_q_7;
  cz _gate_q_11, _gate_q_0;
  rzx_5105143152(5.106735531907414) _gate_q_12, _gate_q_6;
  iswap _gate_q_9, _gate_q_10;
}