gate r_5105788128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.493331045214008, 0.5283475463908385, -0.5283475463908385) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5105793264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0242557386567435, 1.9268942585323305, -1.9268942585323305) _gate_q_0;
}
gate r_5105794272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1650093749123571, -0.7448568366389654, 0.7448568366389654) _gate_q_0;
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
gate r_5105785440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8221950238371654, -1.1670889068652497, 1.1670889068652497) _gate_q_0;
}
gate rzz_5105794704(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.798357801880646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5105794080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9129530210808519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105790816(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4558129641358333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105791392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.510044537247267, -0.45298013791508196, 0.45298013791508196) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  id _gate_q_8;
  sdg _gate_q_6;
  r_5105788128(2.493331045214008, 2.099143873185735) _gate_q_0;
  s _gate_q_1;
  rx(2.24224837259789) _gate_q_2;
  h _gate_q_5;
  U(2.1328688644861855, 0.7732886053469444, 5.954653262514437) _gate_q_3;
  csdg _gate_q_7, _gate_q_4;
  r_5105793264(2.0242557386567435, 3.497690585327227) _gate_q_3;
  U(5.127428018431365, 5.508906072060433, 5.486933655339849) _gate_q_5;
  rz(5.65145559959327) _gate_q_2;
  rz(3.894825257461576) _gate_q_7;
  cx _gate_q_4, _gate_q_1;
  r_5105794272(1.1650093749123571, 0.8259394901559312) _gate_q_0;
  ecr _gate_q_6, _gate_q_8;
  h _gate_q_6;
  cz _gate_q_4, _gate_q_8;
  r_5105785440(2.8221950238371654, 0.4037074199296468) _gate_q_3;
  crz(2.7699851632295314) _gate_q_0, _gate_q_1;
  sdg _gate_q_2;
  id _gate_q_7;
  rz(5.635514212390178) _gate_q_5;
  crx(1.1128033271894504) _gate_q_3, _gate_q_8;
  y _gate_q_4;
  id _gate_q_1;
  y _gate_q_7;
  u3(1.375557797357534, 2.830899477023476, 4.255290711046602) _gate_q_6;
  rz(0.4927219292497373) _gate_q_0;
  rzz_5105794704(5.798357801880646) _gate_q_2, _gate_q_5;
  ch _gate_q_6, _gate_q_2;
  rz(2.7703316929985817) _gate_q_0;
  z _gate_q_3;
  U(1.3767700218915837, 0.15208386973404328, 2.991559053269778) _gate_q_5;
  h _gate_q_4;
  csdg _gate_q_1, _gate_q_8;
  sx _gate_q_7;
  ry(1.2337152556251423) _gate_q_1;
  csdg _gate_q_7, _gate_q_8;
  id _gate_q_0;
  cry(3.05317821679878) _gate_q_5, _gate_q_4;
  csx _gate_q_2, _gate_q_3;
  p(5.527745443655533) _gate_q_6;
  z _gate_q_6;
  x _gate_q_8;
  rz(0.15636449897789173) _gate_q_4;
  x _gate_q_7;
  rxx_5105794080(1.9129530210808519) _gate_q_3, _gate_q_5;
  cry(1.185115271502621) _gate_q_2, _gate_q_1;
  rx(1.1612182244657678) _gate_q_0;
  z _gate_q_6;
  sx _gate_q_8;
  rzz_5105790816(3.4558129641358333) _gate_q_4, _gate_q_7;
  t _gate_q_0;
  r_5105791392(2.510044537247267, 1.1178161888798146) _gate_q_2;
  U(1.4901059909119778, 1.0521934434864733, 4.248156617702411) _gate_q_5;
  id _gate_q_1;
  U(1.7425380245985098, 0.3861946917160687, 0.38701999920663105) _gate_q_3;
  cy _gate_q_1, _gate_q_0;
  s _gate_q_6;
  u3(4.849995372975127, 4.084743695067117, 4.255239717365533) _gate_q_3;
  cp(2.9262168232088412) _gate_q_8, _gate_q_5;
  crx(1.5556381696121107) _gate_q_4, _gate_q_2;
  rz(2.269489121365316) _gate_q_7;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5105784624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7441269189533257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105793744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.800931144754764, 0.02523058637529485, -0.02523058637529485) _gate_q_0;
}
gate ryy_5105783472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.098443654402544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_4965971056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3146538627757884) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3146538627757884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3146538627757884) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105870000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0892997217571465) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0318971909194152) _gate_q_0;
  ry(-3.0318971909194152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0892997217571465) _gate_q_1;
}
gate ryy_5105867600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.340756224334278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cx _gate_q_5, _gate_q_6;
  sxdg _gate_q_8;
  dcx _gate_q_4, _gate_q_0;
  rzz_5105784624(1.7441269189533257) _gate_q_2, _gate_q_7;
  y _gate_q_3;
  u2(2.8469164830293634, 0.5449314833477996) _gate_q_1;
  swap _gate_q_6, _gate_q_0;
  p(2.659190888688597) _gate_q_3;
  tdg _gate_q_7;
  id _gate_q_2;
  rx(5.436566737116132) _gate_q_8;
  tdg _gate_q_5;
  cy _gate_q_1, _gate_q_4;
  sxdg _gate_q_8;
  csdg _gate_q_7, _gate_q_0;
  id _gate_q_4;
  y _gate_q_3;
  r_5105793744(4.800931144754764, 1.5960269131701914) _gate_q_1;
  tdg _gate_q_2;
  rx(1.6613888387423166) _gate_q_6;
  z _gate_q_5;
  cz _gate_q_7, _gate_q_8;
  ryy_5105783472(5.098443654402544) _gate_q_3, _gate_q_0;
  tdg _gate_q_2;
  u2(1.6167495766248505, 6.242989285088768) _gate_q_1;
  crx(3.0734702070121953) _gate_q_4, _gate_q_5;
  u2(4.525983736156958, 2.676863781671175) _gate_q_6;
  y _gate_q_7;
  crz(5.191742186451133) _gate_q_3, _gate_q_5;
  cy _gate_q_0, _gate_q_1;
  cu1_4965971056(2.629307725551577) _gate_q_2, _gate_q_6;
  cu(3.589491312457092, 4.445512332671287, 3.0937994565188265, 2.376779454938059) _gate_q_4, _gate_q_8;
  U(5.608330734243385, 4.851798029614511, 5.602685296023373) _gate_q_2;
  u2(5.471944759080334, 0.6429279309972503) _gate_q_5;
  cu(1.600102169568054, 5.414993574526939, 2.956113364477462, 0.28595504562117285) _gate_q_8, _gate_q_0;
  p(2.5738985190176216) _gate_q_1;
  sdg _gate_q_6;
  U(1.0836663287064037, 4.154254562066147, 0.8560110340255225) _gate_q_3;
  ch _gate_q_4, _gate_q_7;
  rx(5.4699785579945335) _gate_q_8;
  u1(0.987462541396269) _gate_q_4;
  iswap _gate_q_7, _gate_q_5;
  sxdg _gate_q_2;
  csx _gate_q_6, _gate_q_1;
  dcx _gate_q_3, _gate_q_0;
  cs _gate_q_3, _gate_q_1;
  xx_minus_yy_5105870000(6.0637943818388305, 2.0892997217571465) _gate_q_6, _gate_q_2;
  u2(3.5760043721575365, 0.7917391166205321) _gate_q_5;
  dcx _gate_q_0, _gate_q_7;
  cs _gate_q_8, _gate_q_4;
  rz(4.689799772827509) _gate_q_5;
  rz(2.5684146687748575) _gate_q_3;
  cx _gate_q_8, _gate_q_2;
  s _gate_q_0;
  ryy_5105867600(4.340756224334278) _gate_q_1, _gate_q_6;
  swap _gate_q_7, _gate_q_4;
}