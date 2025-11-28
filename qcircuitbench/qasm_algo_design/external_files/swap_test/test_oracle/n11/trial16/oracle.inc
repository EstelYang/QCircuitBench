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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070131168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.977413288288729) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8467758762400843) _gate_q_1;
  ry(-1.8467758762400843) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.977413288288729) _gate_q_0;
}
gate cu1_5070128624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.588207183414682) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.588207183414682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.588207183414682) _gate_q_1;
}
gate rzz_5070132656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.21261203363762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_minus_yy_5070129728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.04927739696712) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.618092300101078) _gate_q_0;
  ry(-2.618092300101078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.04927739696712) _gate_q_1;
}
gate r_5070140720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6413666910667253, 1.855790176475057, -1.855790176475057) _gate_q_0;
}
gate cu1_5070129584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.226367463491517) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.226367463491517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.226367463491517) _gate_q_1;
}
gate xx_minus_yy_5070141776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.521928358067877) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.036432729413698) _gate_q_0;
  ry(-3.036432729413698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.521928358067877) _gate_q_1;
}
gate xx_plus_yy_5070135680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.177250562462932) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.989919895398654) _gate_q_1;
  ry(-1.989919895398654) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.177250562462932) _gate_q_0;
}
gate rzx_5070134960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6227829809724503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070137072(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.645021642086338) _gate_q_0;
  u1(0.1283977178072866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3115291409068015, 0, -5.645021642086338) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3115291409068015, 5.516623924279052, 0) _gate_q_1;
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
gate rzz_5070130352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.1137249049566185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070139760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7424082115529178) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7424082115529178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7424082115529178) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cry(1.8118605100159215) _gate_q_1, _gate_q_9;
  cy _gate_q_5, _gate_q_3;
  iswap _gate_q_6, _gate_q_8;
  swap _gate_q_2, _gate_q_7;
  U(2.5116674186407635, 2.3800980119489434, 3.0145817504078427) _gate_q_4;
  cx _gate_q_10, _gate_q_0;
  cs _gate_q_9, _gate_q_0;
  t _gate_q_1;
  xx_plus_yy_5070131168(3.6935517524801686, 3.977413288288729) _gate_q_4, _gate_q_2;
  crz(2.528250698427587) _gate_q_7, _gate_q_3;
  cu1_5070128624(3.176414366829364) _gate_q_10, _gate_q_6;
  rzz_5070132656(6.21261203363762) _gate_q_5, _gate_q_8;
  dcx _gate_q_4, _gate_q_6;
  crz(5.547508975343012) _gate_q_7, _gate_q_3;
  sx _gate_q_2;
  cp(3.625326107793786) _gate_q_9, _gate_q_10;
  y _gate_q_0;
  u1(4.666354134741405) _gate_q_8;
  U(2.8974126275072614, 2.807096756795927, 0.08831759670912019) _gate_q_1;
  u3(2.932322586805287, 3.367993089535393, 0.5871364043710229) _gate_q_5;
  cry(5.411724892897958) _gate_q_9, _gate_q_8;
  ecr _gate_q_5, _gate_q_10;
  t _gate_q_0;
  xx_minus_yy_5070129728(5.236184600202156, 4.04927739696712) _gate_q_1, _gate_q_7;
  t _gate_q_6;
  sxdg _gate_q_2;
  r_5070140720(1.6413666910667253, 3.4265865032699536) _gate_q_3;
  sxdg _gate_q_4;
  rz(0.4466501908819827) _gate_q_5;
  cz _gate_q_1, _gate_q_9;
  cry(5.832470820379057) _gate_q_4, _gate_q_7;
  ecr _gate_q_10, _gate_q_2;
  cu(1.1406284564846507, 1.15254345227034, 5.894061015542073, 1.5143113079130057) _gate_q_6, _gate_q_8;
  s _gate_q_0;
  p(5.088125682573573) _gate_q_3;
  U(4.719749533067119, 5.766246358956608, 2.3961631462277597) _gate_q_1;
  cu1_5070129584(4.452734926983034) _gate_q_3, _gate_q_10;
  xx_minus_yy_5070141776(6.072865458827396, 5.521928358067877) _gate_q_2, _gate_q_5;
  ry(3.532981022652196) _gate_q_4;
  t _gate_q_7;
  xx_plus_yy_5070135680(3.979839790797308, 4.177250562462932) _gate_q_9, _gate_q_8;
  sxdg _gate_q_6;
  ry(5.958618728369665) _gate_q_0;
  iswap _gate_q_0, _gate_q_8;
  ry(4.2565416286195275) _gate_q_6;
  ry(4.3946295142750325) _gate_q_5;
  u3(6.13396893777034, 0.9193417133292634, 5.776197491287946) _gate_q_3;
  p(1.109594883551367) _gate_q_10;
  id _gate_q_4;
  p(2.2027056173322137) _gate_q_2;
  cu(0.7290783960941877, 1.1723658984561345, 5.1133708026183475, 0.799565864025554) _gate_q_1, _gate_q_7;
  u3(2.325202064990442, 0.6744446361843367, 4.955743368034995) _gate_q_9;
  p(1.1618207754639513) _gate_q_10;
  rzx_5070134960(1.6227829809724503) _gate_q_8, _gate_q_3;
  cu3_5070137072(4.623058281813603, 5.516623924279052, 5.773419359893625) _gate_q_2, _gate_q_9;
  iswap _gate_q_7, _gate_q_6;
  tdg _gate_q_0;
  x _gate_q_5;
  cp(5.338347902676487) _gate_q_4, _gate_q_1;
  y _gate_q_0;
  u3(5.2558962009768315, 2.5443167156318642, 5.202784065909951) _gate_q_4;
  swap _gate_q_2, _gate_q_1;
  csx _gate_q_9, _gate_q_8;
  sxdg _gate_q_6;
  sxdg _gate_q_7;
  rzz_5070130352(5.1137249049566185) _gate_q_3, _gate_q_10;
  rx(2.3631070290923133) _gate_q_5;
  p(4.7754772424871055) _gate_q_4;
  id _gate_q_8;
  cp(5.523209055572607) _gate_q_6, _gate_q_0;
  cu1_5070139760(1.4848164231058356) _gate_q_9, _gate_q_10;
  dcx _gate_q_1, _gate_q_5;
  ch _gate_q_7, _gate_q_3;
  sdg _gate_q_2;
}
gate cu3_5070127280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5069004329862867) _gate_q_0;
  u1(-2.08694454586091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0676151798169133, 0, -3.5069004329862867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0676151798169133, 5.593844978847197, 0) _gate_q_1;
}
gate rzx_5070129152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7925067326613275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070131072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.681657592440602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070142064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.106479117115528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5070129056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.429879085648102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070137456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.37324990876409564) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.37324990876409564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.37324990876409564) _gate_q_1;
}
gate ryy_5070136208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7098234832461496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070127856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6274793408134298) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070135392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.456525010226436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070134816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.21770290836186) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070128432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.886710761263789) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1712222141220021) _gate_q_1;
  ry(-1.1712222141220021) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.886710761263789) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5070132224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.623963153069749) _gate_q_0;
  u1(-1.5234195999864553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9803417769880722, 0, -3.623963153069749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9803417769880722, 5.147382753056204, 0) _gate_q_1;
}
gate r_5070142160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8817876727388962, 3.133538529851724, -3.133538529851724) _gate_q_0;
}
gate r_5070141920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.9214789107486245, -1.023134564227777, 1.023134564227777) _gate_q_0;
}
gate xx_plus_yy_5070141008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8961636972213536) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0953487524227015) _gate_q_1;
  ry(-1.0953487524227015) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8961636972213536) _gate_q_0;
}
gate r_5070136448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5636981351941825, -0.8326515337461595, 0.8326515337461595) _gate_q_0;
}
gate xx_plus_yy_5070137312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.585497003854713) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4676812340395982) _gate_q_1;
  ry(-1.4676812340395982) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.585497003854713) _gate_q_0;
}
gate ryy_5070136784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.6662408653736875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  y _gate_q_3;
  crx(0.92970173681064) _gate_q_10, _gate_q_1;
  cs _gate_q_8, _gate_q_6;
  sdg _gate_q_5;
  cs _gate_q_4, _gate_q_0;
  cy _gate_q_7, _gate_q_2;
  t _gate_q_9;
  y _gate_q_4;
  rz(2.8335104996684652) _gate_q_0;
  cu3_5070127280(6.135230359633827, 5.593844978847197, 1.4199558871253768) _gate_q_3, _gate_q_1;
  tdg _gate_q_8;
  rzx_5070129152(2.7925067326613275) _gate_q_7, _gate_q_10;
  rz(5.546121103376079) _gate_q_9;
  rzx_5070131072(4.681657592440602) _gate_q_2, _gate_q_6;
  tdg _gate_q_5;
  csx _gate_q_8, _gate_q_7;
  rx(5.223322254733023) _gate_q_9;
  rzx_5070142064(3.106479117115528) _gate_q_6, _gate_q_4;
  u1(4.077155930455844) _gate_q_10;
  cs _gate_q_5, _gate_q_2;
  cx _gate_q_3, _gate_q_0;
  rx(5.799638362759872) _gate_q_1;
  rzz_5070129056(5.429879085648102) _gate_q_7, _gate_q_1;
  ry(1.5010936142491234) _gate_q_5;
  cz _gate_q_4, _gate_q_6;
  sx _gate_q_0;
  ch _gate_q_8, _gate_q_10;
  cu1_5070137456(0.7464998175281913) _gate_q_3, _gate_q_2;
  s _gate_q_9;
  id _gate_q_7;
  ryy_5070136208(1.7098234832461496) _gate_q_6, _gate_q_2;
  h _gate_q_10;
  rzz_5070127856(0.6274793408134298) _gate_q_9, _gate_q_8;
  cx _gate_q_5, _gate_q_1;
  s _gate_q_4;
  cx _gate_q_0, _gate_q_3;
  rzx_5070135392(4.456525010226436) _gate_q_6, _gate_q_2;
  tdg _gate_q_1;
  cu(4.91317951548218, 4.095744284072525, 1.9456064674381808, 1.8040917085650736) _gate_q_10, _gate_q_5;
  ry(3.319354053428503) _gate_q_8;
  ryy_5070134816(4.21770290836186) _gate_q_4, _gate_q_9;
  y _gate_q_7;
  cy _gate_q_3, _gate_q_0;
  iswap _gate_q_0, _gate_q_10;
  crz(3.325076335872124) _gate_q_5, _gate_q_4;
  tdg _gate_q_8;
  xx_plus_yy_5070128432(2.3424444282440042, 5.886710761263789) _gate_q_3, _gate_q_1;
  tdg _gate_q_9;
  ecr _gate_q_7, _gate_q_6;
  rx(6.06846623542818) _gate_q_2;
  csdg _gate_q_5, _gate_q_6;
  cu3_5070132224(1.9606835539761445, 5.147382753056204, 2.100543553083294) _gate_q_2, _gate_q_9;
  r_5070142160(2.8817876727388962, 4.7043348566466205) _gate_q_0;
  r_5070141920(4.9214789107486245, 0.5476617625671196) _gate_q_7;
  p(5.2238610338298015) _gate_q_4;
  crx(0.7531937940415732) _gate_q_3, _gate_q_8;
  cry(0.03363700297017035) _gate_q_1, _gate_q_10;
  xx_plus_yy_5070141008(2.190697504845403, 3.8961636972213536) _gate_q_10, _gate_q_2;
  rz(1.9591969214753027) _gate_q_3;
  y _gate_q_0;
  id _gate_q_5;
  U(4.900118845015185, 6.100344705860521, 0.7563858706728626) _gate_q_8;
  cu(0.6233767852508959, 3.9330188067956, 5.517037388442314, 2.7943435805925683) _gate_q_9, _gate_q_4;
  t _gate_q_6;
  r_5070136448(4.5636981351941825, 0.738144793048737) _gate_q_1;
  u3(1.062084566905, 1.6012114461064915, 0.6017806672712328) _gate_q_7;
  swap _gate_q_3, _gate_q_10;
  u2(1.4666952682722039, 4.584400359134403) _gate_q_0;
  sdg _gate_q_7;
  cx _gate_q_4, _gate_q_5;
  ry(0.2195702250346346) _gate_q_9;
  xx_plus_yy_5070137312(2.9353624680791963, 2.585497003854713) _gate_q_2, _gate_q_8;
  ryy_5070136784(5.6662408653736875) _gate_q_1, _gate_q_6;
}