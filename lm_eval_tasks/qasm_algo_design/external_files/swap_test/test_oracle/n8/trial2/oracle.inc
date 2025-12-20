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
gate xx_plus_yy_5105789472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.331423043333873) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2262298642158957) _gate_q_1;
  ry(-2.2262298642158957) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.331423043333873) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5105786880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.960771648384535) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.960771648384535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.960771648384535) _gate_q_1;
}
gate rxx_5105873936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1553204214821684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105869520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8513461856721773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5105863760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6976104802523544) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.21390527123505557) _gate_q_1;
  ry(-0.21390527123505557) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6976104802523544) _gate_q_0;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  cp(1.4358980348086252) _gate_q_5, _gate_q_2;
  ch _gate_q_1, _gate_q_3;
  csdg _gate_q_4, _gate_q_0;
  sxdg _gate_q_6;
  u2(0.6459174809327598, 3.685135787061211) _gate_q_7;
  y _gate_q_1;
  sdg _gate_q_3;
  xx_plus_yy_5105789472(4.4524597284317915, 5.331423043333873) _gate_q_5, _gate_q_2;
  cu(2.9857336719786627, 4.199087982430043, 0.009463564144607282, 3.7667944684976753) _gate_q_6, _gate_q_0;
  u3(0.8780996839547391, 3.138319060848429, 4.308892631959674) _gate_q_4;
  rz(0.3534922132162397) _gate_q_7;
  cu(1.6559841632790466, 5.850187729173604, 0.9543647825975917, 2.564291431289483) _gate_q_5, _gate_q_0;
  swap _gate_q_6, _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  cu1_5105786880(3.92154329676907) _gate_q_7, _gate_q_4;
  cp(4.920795532245144) _gate_q_4, _gate_q_5;
  tdg _gate_q_0;
  id _gate_q_6;
  ry(3.6832020584322165) _gate_q_2;
  rz(4.6033015917728495) _gate_q_7;
  p(1.8310874538387478) _gate_q_3;
  sx _gate_q_1;
  u3(4.224379116279686, 4.309179496310987, 6.239106108893929) _gate_q_1;
  rxx_5105873936(3.1553204214821684) _gate_q_5, _gate_q_2;
  cry(5.089928668099504) _gate_q_0, _gate_q_6;
  rxx_5105869520(1.8513461856721773) _gate_q_7, _gate_q_3;
  x _gate_q_4;
  cry(5.498261502961313) _gate_q_6, _gate_q_0;
  dcx _gate_q_1, _gate_q_4;
  u3(1.8646514488281252, 3.040766144005215, 4.6322863894654445) _gate_q_2;
  cry(2.9759892674467574) _gate_q_3, _gate_q_5;
  sxdg _gate_q_7;
  ch _gate_q_4, _gate_q_2;
  cy _gate_q_3, _gate_q_1;
  xx_plus_yy_5105863760(0.42781054247011113, 3.6976104802523544) _gate_q_6, _gate_q_0;
  csx _gate_q_7, _gate_q_5;
  ecr _gate_q_2, _gate_q_6;
  csdg _gate_q_3, _gate_q_1;
  p(4.666497873914619) _gate_q_0;
  u2(1.9195872785160715, 2.184249566159217) _gate_q_4;
  cs _gate_q_5, _gate_q_7;
}
gate ryy_5105872544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8329220607592065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5105861312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3544493600349403) _gate_q_0;
  u1(2.1483473693969932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.371938567751606, 0, -2.3544493600349403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.371938567751606, 0.206101990637947, 0) _gate_q_1;
}
gate rzx_5105875904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.632405261164504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105874320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9112472206624145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105869904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.04723910089794737, -0.06319065567195215, 0.06319065567195215) _gate_q_0;
}
gate xx_minus_yy_5105876672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.387733339565095) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.21031764961817354) _gate_q_0;
  ry(-0.21031764961817354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.387733339565095) _gate_q_1;
}
gate ryy_5105862800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9984782530543994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  x _gate_q_0;
  ryy_5105872544(3.8329220607592065) _gate_q_5, _gate_q_2;
  p(3.9953937056639166) _gate_q_7;
  ecr _gate_q_3, _gate_q_1;
  sxdg _gate_q_6;
  x _gate_q_4;
  iswap _gate_q_6, _gate_q_4;
  csx _gate_q_3, _gate_q_5;
  iswap _gate_q_7, _gate_q_1;
  csx _gate_q_2, _gate_q_0;
  ecr _gate_q_3, _gate_q_1;
  id _gate_q_5;
  cu3_5105861312(2.743877135503212, 0.206101990637947, 4.5027967294319335) _gate_q_6, _gate_q_0;
  id _gate_q_7;
  cp(1.730204104043447) _gate_q_2, _gate_q_4;
  ch _gate_q_5, _gate_q_7;
  ecr _gate_q_6, _gate_q_0;
  rzx_5105875904(3.632405261164504) _gate_q_4, _gate_q_3;
  s _gate_q_1;
  ry(1.4022177841882004) _gate_q_2;
  sx _gate_q_0;
  cy _gate_q_1, _gate_q_6;
  ryy_5105874320(0.9112472206624145) _gate_q_5, _gate_q_4;
  cry(1.7914245341781636) _gate_q_2, _gate_q_7;
  h _gate_q_3;
  ecr _gate_q_0, _gate_q_5;
  s _gate_q_2;
  rx(3.9082681146193656) _gate_q_4;
  dcx _gate_q_6, _gate_q_3;
  x _gate_q_1;
  r_5105869904(0.04723910089794737, 1.5076056711229444) _gate_q_7;
  cx _gate_q_1, _gate_q_4;
  cp(4.198149763964513) _gate_q_5, _gate_q_3;
  csx _gate_q_2, _gate_q_7;
  cu(5.434786600670869, 5.406101271369266, 4.754190512171442, 0.858566782142764) _gate_q_6, _gate_q_0;
  ry(4.0152277892569375) _gate_q_3;
  xx_minus_yy_5105876672(0.42063529923634707, 4.387733339565095) _gate_q_0, _gate_q_4;
  ryy_5105862800(1.9984782530543994) _gate_q_6, _gate_q_2;
  cs _gate_q_7, _gate_q_5;
  y _gate_q_1;
}