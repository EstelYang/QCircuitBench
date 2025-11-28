gate r_5072612208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.543656448491843, 0.5400265394688413, -0.5400265394688413) _gate_q_0;
}
gate cu1_5072607792(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8109235546726269) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8109235546726269) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8109235546726269) _gate_q_1;
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
gate cu3_5072614224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.3658836421271765) _gate_q_0;
  u1(0.2678019998848593) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1327190147452904, 0, -5.3658836421271765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1327190147452904, 5.098081642242318, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072610912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.13294823007029205) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.13294823007029205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.13294823007029205) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072610528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.06089505967927093) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.165816990703103) _gate_q_1;
  ry(-1.165816990703103) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.06089505967927093) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5072609040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.434538829750678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072604432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.714777961065943) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2431933519703988) _gate_q_1;
  ry(-1.2431933519703988) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.714777961065943) _gate_q_0;
}
gate rxx_5072609328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.967747192897036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072608176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.31616728282965795) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.938462234553105) _gate_q_1;
  ry(-1.938462234553105) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.31616728282965795) _gate_q_0;
}
gate rxx_5072606352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13085281799758164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5072617248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4302327609049237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072615664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.373956027155522) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2697794223956282) _gate_q_0;
  ry(-1.2697794223956282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.373956027155522) _gate_q_1;
}
gate cu3_5072608848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.531277745432526) _gate_q_0;
  u1(-0.09730869554780419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9316385410703865, 0, -4.531277745432526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9316385410703865, 4.62858644098033, 0) _gate_q_1;
}
gate r_5072611776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.970873478596262, -0.06087774988543315, 0.06087774988543315) _gate_q_0;
}
gate rxx_5072610144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.706796908075374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072608656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0739230790514585) _gate_q_0;
  u1(-1.2347615417276536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2777750217654757, 0, -3.0739230790514585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2777750217654757, 4.308684620779112, 0) _gate_q_1;
}
gate rxx_5072604912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.224713989594259) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cp(6.244016209989908) _gate_q_7, _gate_q_9;
  u3(1.9311370709826665, 2.1141440794004467, 2.023565431572608) _gate_q_8;
  r_5072612208(3.543656448491843, 2.110822866263738) _gate_q_4;
  cu1_5072607792(1.6218471093452538) _gate_q_3, _gate_q_1;
  cp(3.386581221317232) _gate_q_2, _gate_q_5;
  p(0.7639996530294676) _gate_q_6;
  rz(1.317591109263935) _gate_q_0;
  ecr _gate_q_2, _gate_q_8;
  u1(3.7403920822821215) _gate_q_3;
  cu3_5072614224(2.2654380294905807, 5.098081642242318, 5.633685642012036) _gate_q_9, _gate_q_1;
  u1(6.034087921230427) _gate_q_4;
  rx(2.467133831115271) _gate_q_6;
  cry(3.5248809046873313) _gate_q_7, _gate_q_5;
  u2(3.2224555386103857, 1.2836779574140917) _gate_q_0;
  sdg _gate_q_0;
  iswap _gate_q_8, _gate_q_1;
  cp(0.6585861655627561) _gate_q_4, _gate_q_7;
  cu1_5072610912(0.2658964601405841) _gate_q_6, _gate_q_5;
  xx_plus_yy_5072610528(2.331633981406206, 0.06089505967927093) _gate_q_9, _gate_q_3;
  rz(1.3959712057210716) _gate_q_2;
  csdg _gate_q_0, _gate_q_5;
  cy _gate_q_9, _gate_q_3;
  rz(1.0205247206677062) _gate_q_1;
  z _gate_q_4;
  cx _gate_q_6, _gate_q_7;
  rxx_5072609040(5.434538829750678) _gate_q_8, _gate_q_2;
  xx_plus_yy_5072604432(2.4863867039407976, 4.714777961065943) _gate_q_6, _gate_q_7;
  sx _gate_q_9;
  sx _gate_q_8;
  rxx_5072609328(2.967747192897036) _gate_q_5, _gate_q_3;
  tdg _gate_q_2;
  xx_plus_yy_5072608176(3.87692446910621, 0.31616728282965795) _gate_q_4, _gate_q_0;
  tdg _gate_q_1;
  rxx_5072606352(0.13085281799758164) _gate_q_6, _gate_q_4;
  dcx _gate_q_5, _gate_q_7;
  tdg _gate_q_2;
  rzz_5072617248(3.4302327609049237) _gate_q_3, _gate_q_8;
  id _gate_q_9;
  cu(4.0424396606999755, 3.5196613123180263, 5.152911229892565, 5.270846433777827) _gate_q_0, _gate_q_1;
  cu(3.4666635200245257, 3.168548050281046, 6.171263695435779, 4.946038392233859) _gate_q_2, _gate_q_7;
  iswap _gate_q_5, _gate_q_9;
  crz(5.415811184687346) _gate_q_4, _gate_q_8;
  t _gate_q_3;
  u3(2.5479219175914936, 0.1510121047108062, 2.1010411606338675) _gate_q_0;
  cu(5.900190991749986, 0.4683736972393312, 2.5692741307653666, 4.674320766152157) _gate_q_1, _gate_q_6;
  rx(2.133664511715211) _gate_q_9;
  x _gate_q_6;
  ch _gate_q_5, _gate_q_4;
  z _gate_q_1;
  ry(2.280699619910696) _gate_q_3;
  cry(5.455154723168694) _gate_q_8, _gate_q_7;
  xx_minus_yy_5072615664(2.5395588447912565, 5.373956027155522) _gate_q_2, _gate_q_0;
  crx(4.92463544023956) _gate_q_1, _gate_q_5;
  cry(2.001203167772112) _gate_q_3, _gate_q_8;
  u1(2.366415889925279) _gate_q_0;
  swap _gate_q_2, _gate_q_9;
  cu3_5072608848(3.863277082140773, 4.62858644098033, 4.4339690498847215) _gate_q_7, _gate_q_6;
  r_5072611776(4.970873478596262, 1.5099185769094634) _gate_q_4;
  rxx_5072610144(4.706796908075374) _gate_q_7, _gate_q_2;
  cu3_5072608656(2.5555500435309515, 4.308684620779112, 1.8391615373238046) _gate_q_4, _gate_q_9;
  rz(4.450502953626849) _gate_q_5;
  rxx_5072604912(6.224713989594259) _gate_q_1, _gate_q_8;
  cs _gate_q_0, _gate_q_3;
  u1(3.9819403915278895) _gate_q_6;
}
gate xx_minus_yy_5069814192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.975786086320869) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.09975369410492198) _gate_q_0;
  ry(-0.09975369410492198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.975786086320869) _gate_q_1;
}
gate rxx_5072710704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7396475751637706) _gate_q_1;
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
gate r_5072606880(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.919867447418885, 0.9639483877380153, -0.9639483877380153) _gate_q_0;
}
gate rzx_5072711280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0328323406991755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072711136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.015786845113661, 4.133000178308705, -4.133000178308705) _gate_q_0;
}
gate ryy_5072705184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.441360604175195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072712240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.085996382221723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072712384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.072187842273407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072699856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6341265101115003, -0.145703480836318, 0.145703480836318) _gate_q_0;
}
gate cu3_5072714832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1540759785796926) _gate_q_0;
  u1(-1.244822743581398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5879756587213922, 0, -3.1540759785796926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5879756587213922, 4.398898722161091, 0) _gate_q_1;
}
gate cu3_5072699664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.429721226320645) _gate_q_0;
  u1(-0.472612333423887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.623374296960834, 0, -5.429721226320645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.623374296960834, 5.902333559744532, 0) _gate_q_1;
}
gate cu1_5072711232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.594477244246302) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.594477244246302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.594477244246302) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  csdg _gate_q_9, _gate_q_6;
  y _gate_q_4;
  csdg _gate_q_1, _gate_q_0;
  u3(2.9772332033386237, 2.7886855028702917, 3.98057199402836) _gate_q_2;
  t _gate_q_5;
  cy _gate_q_8, _gate_q_3;
  s _gate_q_7;
  sdg _gate_q_3;
  rx(5.673193121371992) _gate_q_7;
  y _gate_q_4;
  xx_minus_yy_5069814192(0.19950738820984396, 5.975786086320869) _gate_q_2, _gate_q_1;
  tdg _gate_q_8;
  U(4.723453903368601, 4.411815339185481, 3.567946248424726) _gate_q_6;
  dcx _gate_q_0, _gate_q_5;
  p(1.9475413390045568) _gate_q_9;
  U(5.48852798388338, 0.15052535536395714, 5.884799467508388) _gate_q_4;
  rxx_5072710704(0.7396475751637706) _gate_q_3, _gate_q_6;
  ecr _gate_q_2, _gate_q_5;
  crz(3.7051471692898152) _gate_q_7, _gate_q_0;
  t _gate_q_8;
  cs _gate_q_9, _gate_q_1;
  ch _gate_q_5, _gate_q_2;
  u2(5.619392704571034, 5.568670187527783) _gate_q_7;
  y _gate_q_6;
  csx _gate_q_0, _gate_q_1;
  u2(0.6211864828197168, 0.14839445323188896) _gate_q_8;
  iswap _gate_q_4, _gate_q_9;
  r_5072606880(2.919867447418885, 2.534744714532912) _gate_q_3;
  rzx_5072711280(4.0328323406991755) _gate_q_2, _gate_q_7;
  u3(2.371938116175632, 3.2800024334925997, 1.9290532601212558) _gate_q_3;
  crx(2.272861441484794) _gate_q_4, _gate_q_8;
  h _gate_q_9;
  cry(3.5019823078986954) _gate_q_1, _gate_q_5;
  r_5072711136(1.015786845113661, 5.703796505103601) _gate_q_0;
  p(1.2680514481769023) _gate_q_6;
  cp(2.1537753302938074) _gate_q_0, _gate_q_3;
  cu(0.18317655800333416, 2.945265446480878, 4.405853269257751, 4.161939397463494) _gate_q_7, _gate_q_9;
  ryy_5072705184(5.441360604175195) _gate_q_8, _gate_q_6;
  y _gate_q_2;
  tdg _gate_q_4;
  s _gate_q_1;
  u1(5.75678914224073) _gate_q_5;
  rzz_5072712240(2.085996382221723) _gate_q_8, _gate_q_6;
  s _gate_q_4;
  cry(0.7268740497823668) _gate_q_9, _gate_q_1;
  rxx_5072712384(6.072187842273407) _gate_q_0, _gate_q_7;
  ry(0.7750150773004358) _gate_q_3;
  sxdg _gate_q_2;
  rx(1.5898357758795005) _gate_q_5;
  r_5072699856(2.6341265101115003, 1.4250928459585785) _gate_q_8;
  sx _gate_q_3;
  cu3_5072714832(1.1759513174427845, 4.398898722161091, 1.9092532349982947) _gate_q_5, _gate_q_2;
  cy _gate_q_7, _gate_q_0;
  sx _gate_q_4;
  cs _gate_q_6, _gate_q_1;
  ry(4.977600560127042) _gate_q_9;
  sx _gate_q_4;
  rz(1.4744799317130257) _gate_q_7;
  cu3_5072699664(5.246748593921668, 5.902333559744532, 4.957108892896758) _gate_q_9, _gate_q_1;
  u1(4.091428791879059) _gate_q_0;
  cs _gate_q_6, _gate_q_5;
  sx _gate_q_8;
  cu1_5072711232(1.188954488492604) _gate_q_2, _gate_q_3;
  cx _gate_q_5, _gate_q_1;
  u1(5.2631150309091) _gate_q_0;
  z _gate_q_6;
  sxdg _gate_q_3;
  csx _gate_q_8, _gate_q_2;
  crx(3.4723518597613596) _gate_q_4, _gate_q_7;
  z _gate_q_9;
}