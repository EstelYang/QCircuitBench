gate r_5107448912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.230163904365056, 2.611872795375117, -2.611872795375117) _gate_q_0;
}
gate rxx_5107435952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.675699105295846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107436096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8731996565653901) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1649255169725117) _gate_q_1;
  ry(-2.1649255169725117) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8731996565653901) _gate_q_0;
}
gate xx_minus_yy_5107436576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.887403279654877) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.092965270347793) _gate_q_0;
  ry(-2.092965270347793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.887403279654877) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5107447136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8009425489541755, 0.8449227016883194, -0.8449227016883194) _gate_q_0;
}
gate cu3_5107436000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.660265660002352) _gate_q_0;
  u1(-0.8661519386450955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2114433796508002, 0, -2.660265660002352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2114433796508002, 3.526417598647448, 0) _gate_q_1;
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
gate xx_minus_yy_5107447472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.92144054048496) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8003829278931129) _gate_q_0;
  ry(-0.8003829278931129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.92144054048496) _gate_q_1;
}
gate ryy_5107437296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.365463142026623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rxx_5107447520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9874749700979079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107447088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.501448352825139) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107446992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8639401001454132) _gate_q_0;
  u1(1.7709340595779859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5634365418987284, 0, -3.8639401001454132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5634365418987284, 2.093006040567427, 0) _gate_q_1;
}
gate xx_plus_yy_5107445312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.760447334419242) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8698672392100755) _gate_q_1;
  ry(-2.8698672392100755) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.760447334419242) _gate_q_0;
}
gate xx_minus_yy_5107446032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2928856528045576) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6305503780780364) _gate_q_0;
  ry(-2.6305503780780364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2928856528045576) _gate_q_1;
}
gate rxx_5107442816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.066245284697815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107445408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.939902439043165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107436960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.164616117712507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cu(3.325327615213531, 4.719147547698784, 3.7861124715788192, 4.505217952072508) _gate_q_4, _gate_q_3;
  r_5107448912(1.230163904365056, 4.182669122170013) _gate_q_8;
  s _gate_q_2;
  sdg _gate_q_10;
  cx _gate_q_5, _gate_q_7;
  rxx_5107435952(4.675699105295846) _gate_q_9, _gate_q_0;
  h _gate_q_6;
  cy _gate_q_1, _gate_q_11;
  ry(0.9982142276816652) _gate_q_4;
  xx_plus_yy_5107436096(4.329851033945023, 0.8731996565653901) _gate_q_0, _gate_q_8;
  ch _gate_q_11, _gate_q_1;
  xx_minus_yy_5107436576(4.185930540695586, 5.887403279654877) _gate_q_10, _gate_q_3;
  rx(5.578460283539439) _gate_q_6;
  y _gate_q_5;
  cs _gate_q_2, _gate_q_9;
  r_5107447136(2.8009425489541755, 2.415719028483216) _gate_q_7;
  cx _gate_q_5, _gate_q_2;
  ry(1.6459650636132321) _gate_q_10;
  cy _gate_q_9, _gate_q_7;
  cu3_5107436000(2.4228867593016004, 3.526417598647448, 1.7941137213572569) _gate_q_4, _gate_q_0;
  cy _gate_q_6, _gate_q_11;
  id _gate_q_3;
  u1(0.66990959624753) _gate_q_8;
  u1(1.0384893544936236) _gate_q_1;
  crx(0.7604563240814775) _gate_q_3, _gate_q_8;
  ecr _gate_q_4, _gate_q_5;
  u1(3.251299592853871) _gate_q_10;
  cy _gate_q_6, _gate_q_11;
  cry(2.0675828558390004) _gate_q_2, _gate_q_9;
  xx_minus_yy_5107447472(1.6007658557862259, 3.92144054048496) _gate_q_7, _gate_q_1;
  y _gate_q_0;
  cry(3.65960886937243) _gate_q_4, _gate_q_6;
  swap _gate_q_0, _gate_q_7;
  cry(0.8834892462310155) _gate_q_5, _gate_q_10;
  s _gate_q_9;
  ryy_5107437296(5.365463142026623) _gate_q_11, _gate_q_8;
  csdg _gate_q_2, _gate_q_1;
  ry(1.1640369135538304) _gate_q_3;
  u2(2.066132668454083, 2.8754362127349724) _gate_q_7;
  iswap _gate_q_4, _gate_q_5;
  sxdg _gate_q_6;
  rxx_5107447520(0.9874749700979079) _gate_q_9, _gate_q_2;
  ecr _gate_q_0, _gate_q_11;
  swap _gate_q_8, _gate_q_1;
  ryy_5107447088(1.501448352825139) _gate_q_10, _gate_q_3;
  cs _gate_q_2, _gate_q_0;
  iswap _gate_q_9, _gate_q_4;
  cu3_5107446992(5.126873083797457, 2.093006040567427, 5.634874159723399) _gate_q_8, _gate_q_3;
  u1(4.851212716548859) _gate_q_11;
  tdg _gate_q_5;
  id _gate_q_10;
  tdg _gate_q_6;
  h _gate_q_1;
  sxdg _gate_q_7;
  crx(4.382616300643356) _gate_q_7, _gate_q_6;
  t _gate_q_3;
  x _gate_q_0;
  cu(3.4718047963739944, 2.230620400461975, 2.8441993257432987, 0.3831907218017033) _gate_q_1, _gate_q_2;
  xx_plus_yy_5107445312(5.739734478420151, 4.760447334419242) _gate_q_5, _gate_q_4;
  t _gate_q_10;
  cp(3.7643362771991487) _gate_q_11, _gate_q_9;
  id _gate_q_8;
  rz(4.518711040037392) _gate_q_5;
  ch _gate_q_6, _gate_q_9;
  cz _gate_q_7, _gate_q_10;
  xx_minus_yy_5107446032(5.261100756156073, 2.2928856528045576) _gate_q_3, _gate_q_4;
  rz(4.098515870586481) _gate_q_11;
  id _gate_q_2;
  id _gate_q_0;
  rxx_5107442816(3.066245284697815) _gate_q_8, _gate_q_1;
  rxx_5107445408(5.939902439043165) _gate_q_4, _gate_q_1;
  x _gate_q_9;
  cu(5.297389663257465, 4.842634640944398, 5.649720842269349, 1.2811770296844835) _gate_q_2, _gate_q_10;
  rz(0.9589834100502752) _gate_q_5;
  ry(3.0325043949106476) _gate_q_0;
  iswap _gate_q_7, _gate_q_6;
  rzx_5107436960(3.164616117712507) _gate_q_3, _gate_q_11;
  U(5.317191117504842, 3.3457713208242015, 4.638041384356564) _gate_q_8;
}
gate rxx_5107441760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.24261458157006002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107440272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5204639367986563) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate xx_plus_yy_5107442672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.866276099044902) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2212198657846607) _gate_q_1;
  ry(-1.2212198657846607) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.866276099044902) _gate_q_0;
}
gate rxx_5107440704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2954880717525157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107441952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7090731217928847) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0594091029427846) _gate_q_0;
  ry(-2.0594091029427846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7090731217928847) _gate_q_1;
}
gate xx_plus_yy_5107434704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.27949799721375346) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.917031844651711) _gate_q_1;
  ry(-1.917031844651711) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.27949799721375346) _gate_q_0;
}
gate rzz_5107434896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.842448855394265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107444784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3776160198884095) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3776160198884095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3776160198884095) _gate_q_1;
}
gate r_5107445024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6844984026772427, 0.12436061277618071, -0.12436061277618071) _gate_q_0;
}
gate xx_minus_yy_5107444400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.120737081581753) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6374176354291011) _gate_q_0;
  ry(-0.6374176354291011) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.120737081581753) _gate_q_1;
}
gate rzz_5107434512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.4607518320807156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107444544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.249255706386122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107434080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.642051246419158) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.572943680274596) _gate_q_1;
  ry(-2.572943680274596) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.642051246419158) _gate_q_0;
}
gate r_5107434176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5208897354650865, -0.5258957737018028, 0.5258957737018028) _gate_q_0;
}
gate xx_plus_yy_5107433792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.290357006820817) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7276337971791298) _gate_q_1;
  ry(-0.7276337971791298) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.290357006820817) _gate_q_0;
}
gate xx_plus_yy_5107433696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.168595986708553) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.21734016931409492) _gate_q_1;
  ry(-0.21734016931409492) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.168595986708553) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  swap _gate_q_10, _gate_q_9;
  U(3.075036280616139, 3.443093920216433, 3.455072929248843) _gate_q_11;
  cu(0.9191447598060303, 5.312149531420371, 1.0454774941993117, 0.8287102019603911) _gate_q_1, _gate_q_4;
  swap _gate_q_3, _gate_q_2;
  rxx_5107441760(0.24261458157006002) _gate_q_7, _gate_q_5;
  cx _gate_q_8, _gate_q_0;
  p(5.582500227436025) _gate_q_6;
  h _gate_q_5;
  sdg _gate_q_11;
  ecr _gate_q_4, _gate_q_0;
  ryy_5107440272(1.5204639367986563) _gate_q_2, _gate_q_3;
  csdg _gate_q_6, _gate_q_9;
  csdg _gate_q_10, _gate_q_1;
  t _gate_q_8;
  rz(0.5649267602020506) _gate_q_7;
  sx _gate_q_3;
  csx _gate_q_5, _gate_q_11;
  xx_plus_yy_5107442672(2.4424397315693214, 5.866276099044902) _gate_q_8, _gate_q_4;
  sdg _gate_q_10;
  iswap _gate_q_1, _gate_q_6;
  cp(1.4710129666490404) _gate_q_2, _gate_q_9;
  z _gate_q_0;
  s _gate_q_7;
  cry(4.078590682458745) _gate_q_10, _gate_q_3;
  sdg _gate_q_9;
  u2(0.010395506378700207, 5.80357123312448) _gate_q_2;
  u1(3.302051042906396) _gate_q_0;
  rz(2.9407554963908833) _gate_q_5;
  p(1.482111268217641) _gate_q_4;
  rz(6.012478661165032) _gate_q_6;
  rxx_5107440704(3.2954880717525157) _gate_q_7, _gate_q_1;
  p(3.7082740756942485) _gate_q_11;
  u3(3.757310928982402, 3.4266241674807048, 1.2716319906217453) _gate_q_8;
  z _gate_q_1;
  cp(2.413373757461747) _gate_q_7, _gate_q_11;
  y _gate_q_3;
  xx_minus_yy_5107441952(4.118818205885569, 3.7090731217928847) _gate_q_2, _gate_q_0;
  u3(3.123068792841342, 1.2707284307369007, 1.8099325164418612) _gate_q_8;
  rz(5.46181522714757) _gate_q_9;
  id _gate_q_6;
  xx_plus_yy_5107434704(3.834063689303422, 0.27949799721375346) _gate_q_10, _gate_q_4;
  t _gate_q_5;
  crx(3.837097666544559) _gate_q_3, _gate_q_6;
  u2(3.4500999707910176, 2.005231433088205) _gate_q_0;
  sxdg _gate_q_11;
  rzz_5107434896(5.842448855394265) _gate_q_2, _gate_q_1;
  sx _gate_q_8;
  iswap _gate_q_4, _gate_q_10;
  crx(6.041620714006139) _gate_q_5, _gate_q_7;
  sdg _gate_q_9;
  ry(5.721839505264859) _gate_q_2;
  cu1_5107444784(2.755232039776819) _gate_q_8, _gate_q_11;
  r_5107445024(3.6844984026772427, 1.6951569395710773) _gate_q_9;
  xx_minus_yy_5107444400(1.2748352708582023, 5.120737081581753) _gate_q_3, _gate_q_4;
  u1(0.7795036262771793) _gate_q_1;
  cry(1.1953560964336283) _gate_q_10, _gate_q_7;
  U(2.7748367581058986, 6.03788719422366, 5.6166137824484625) _gate_q_0;
  ry(3.5650399164435242) _gate_q_5;
  u3(2.9910211100905837, 1.4520726143234524, 2.2396324699249512) _gate_q_6;
  swap _gate_q_5, _gate_q_8;
  rzz_5107434512(2.4607518320807156) _gate_q_6, _gate_q_10;
  ryy_5107444544(6.249255706386122) _gate_q_3, _gate_q_0;
  xx_plus_yy_5107434080(5.145887360549192, 4.642051246419158) _gate_q_11, _gate_q_9;
  r_5107434176(2.5208897354650865, 1.0449005530930937) _gate_q_2;
  id _gate_q_4;
  p(3.809754018851668) _gate_q_7;
  p(4.255033414457262) _gate_q_1;
  sxdg _gate_q_8;
  swap _gate_q_5, _gate_q_6;
  u3(4.268214551521106, 2.959917619141362, 4.298030543890208) _gate_q_2;
  x _gate_q_9;
  cry(4.703460360826084) _gate_q_7, _gate_q_4;
  xx_plus_yy_5107433792(1.4552675943582596, 5.290357006820817) _gate_q_3, _gate_q_0;
  csx _gate_q_10, _gate_q_11;
  s _gate_q_1;
  xx_plus_yy_5107433696(0.43468033862818983, 6.168595986708553) _gate_q_6, _gate_q_3;
  rz(2.4326734867124955) _gate_q_0;
  crx(2.3518830309868206) _gate_q_9, _gate_q_4;
  sxdg _gate_q_1;
  csx _gate_q_2, _gate_q_7;
  ch _gate_q_5, _gate_q_10;
  cp(2.3400076439356368) _gate_q_8, _gate_q_11;
}