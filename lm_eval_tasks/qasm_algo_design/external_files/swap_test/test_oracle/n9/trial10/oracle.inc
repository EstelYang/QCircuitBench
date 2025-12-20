gate rxx_5106335376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2946102209996546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5106322608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.109395045591557) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.39630086162059214) _gate_q_1;
  ry(-0.39630086162059214) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.109395045591557) _gate_q_0;
}
gate cu1_5106322752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.690612430398996) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.690612430398996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.690612430398996) _gate_q_1;
}
gate cu3_5106326832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.546253774240805) _gate_q_0;
  u1(1.6427771757786944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7166041571162347, 0, -3.546253774240805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7166041571162347, 1.9034765984621107, 0) _gate_q_1;
}
gate xx_plus_yy_5106327840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.570200446504051) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.014258764631651757) _gate_q_1;
  ry(-0.014258764631651757) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.570200446504051) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5106329856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.032738754825222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106330624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.973348279759578, 1.1036765175860448, -1.1036765175860448) _gate_q_0;
}
gate rzz_5106333792(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.825553044484049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106323616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.586412302863142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106322992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3002356695098864) _gate_q_0;
  u1(-1.4420067725571617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2722405668165429, 0, -3.3002356695098864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2722405668165429, 4.742242442067048, 0) _gate_q_1;
}
gate cu3_5106323712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.635299483893899) _gate_q_0;
  u1(-0.0020422513906335205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.09088746832702761, 0, -2.635299483893899) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.09088746832702761, 2.6373417352845325, 0) _gate_q_1;
}
gate rzx_5106327120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0723960382030417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_plus_yy_5106112496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2709611170453592) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5164957028750352) _gate_q_1;
  ry(-0.5164957028750352) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2709611170453592) _gate_q_0;
}
gate ryy_5106115040(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.013911472581643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cp(5.352202138595325) _gate_q_3, _gate_q_2;
  rxx_5106335376(3.2946102209996546) _gate_q_5, _gate_q_7;
  xx_plus_yy_5106322608(0.7926017232411843, 4.109395045591557) _gate_q_8, _gate_q_1;
  ry(1.1535800312215887) _gate_q_6;
  cu1_5106322752(5.381224860797992) _gate_q_4, _gate_q_0;
  rx(3.9358728945221855) _gate_q_6;
  sdg _gate_q_4;
  h _gate_q_7;
  cu3_5106326832(3.4332083142324694, 1.9034765984621107, 5.189030950019499) _gate_q_2, _gate_q_5;
  crz(1.478521020755602) _gate_q_1, _gate_q_0;
  tdg _gate_q_3;
  sdg _gate_q_8;
  crz(2.390537463918918) _gate_q_0, _gate_q_6;
  xx_plus_yy_5106327840(0.028517529263303514, 2.570200446504051) _gate_q_5, _gate_q_1;
  sxdg _gate_q_8;
  t _gate_q_7;
  dcx _gate_q_3, _gate_q_2;
  y _gate_q_4;
  u2(5.303895331060081, 3.844402602167158) _gate_q_7;
  iswap _gate_q_5, _gate_q_4;
  iswap _gate_q_0, _gate_q_2;
  cp(5.395156178723079) _gate_q_8, _gate_q_3;
  rxx_5106329856(2.032738754825222) _gate_q_6, _gate_q_1;
  swap _gate_q_2, _gate_q_6;
  r_5106330624(3.973348279759578, 2.6744728443809413) _gate_q_1;
  x _gate_q_3;
  id _gate_q_7;
  rzz_5106333792(4.825553044484049) _gate_q_5, _gate_q_4;
  ryy_5106323616(1.586412302863142) _gate_q_0, _gate_q_8;
  cry(2.752397378555558) _gate_q_1, _gate_q_7;
  rx(0.0025291869253548814) _gate_q_3;
  swap _gate_q_4, _gate_q_8;
  crx(3.863740021129704) _gate_q_2, _gate_q_6;
  cu3_5106322992(2.5444811336330857, 4.742242442067048, 1.8582288969527245) _gate_q_5, _gate_q_0;
  sxdg _gate_q_5;
  cu3_5106323712(0.18177493665405522, 2.6373417352845325, 2.6332572325032655) _gate_q_3, _gate_q_6;
  crx(4.497567587788438) _gate_q_0, _gate_q_8;
  ch _gate_q_2, _gate_q_1;
  u1(2.2376603537304733) _gate_q_4;
  h _gate_q_7;
  rzx_5106327120(1.0723960382030417) _gate_q_0, _gate_q_3;
  sdg _gate_q_8;
  csx _gate_q_7, _gate_q_5;
  cy _gate_q_6, _gate_q_1;
  ecr _gate_q_4, _gate_q_2;
  xx_plus_yy_5106112496(1.0329914057500704, 1.2709611170453592) _gate_q_4, _gate_q_6;
  cy _gate_q_3, _gate_q_7;
  sdg _gate_q_2;
  ryy_5106115040(2.013911472581643) _gate_q_8, _gate_q_5;
  ecr _gate_q_1, _gate_q_0;
}
gate r_5105585856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.608580317365149, 4.173396560597794, -4.173396560597794) _gate_q_0;
}
gate r_5105595168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2654548452606684, 2.9347967099203807, -2.9347967099203807) _gate_q_0;
}
gate xx_plus_yy_5105594736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.503681999066982) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.06977640476806901) _gate_q_1;
  ry(-0.06977640476806901) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.503681999066982) _gate_q_0;
}
gate rzx_5105590176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8291493362723713) _gate_q_1;
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
gate ryy_5105587488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6041521328328394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105593104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.450212307157936) _gate_q_0;
  u1(-2.024306043330821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5743398563028568, 0, -2.450212307157936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5743398563028568, 4.474518350488757, 0) _gate_q_1;
}
gate rzx_5105594064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5174884070561827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105594304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.329894375003667) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2878707649170082) _gate_q_0;
  ry(-2.2878707649170082) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.329894375003667) _gate_q_1;
}
gate xx_plus_yy_5105592720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.189613480476201) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9236373054196765) _gate_q_1;
  ry(-2.9236373054196765) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.189613480476201) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  sx _gate_q_0;
  r_5105585856(4.608580317365149, 5.744192887392691) _gate_q_5;
  cx _gate_q_7, _gate_q_2;
  crz(0.6630044935700576) _gate_q_3, _gate_q_8;
  ch _gate_q_4, _gate_q_6;
  r_5105595168(1.2654548452606684, 4.505593036715277) _gate_q_1;
  xx_plus_yy_5105594736(0.13955280953613802, 4.503681999066982) _gate_q_7, _gate_q_0;
  sx _gate_q_4;
  u1(3.594216836607307) _gate_q_2;
  sdg _gate_q_5;
  cx _gate_q_6, _gate_q_1;
  crz(3.0184550053695998) _gate_q_3, _gate_q_8;
  rzx_5105590176(0.8291493362723713) _gate_q_1, _gate_q_5;
  csdg _gate_q_4, _gate_q_3;
  iswap _gate_q_7, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  x _gate_q_8;
  ry(2.2297440145791585) _gate_q_3;
  sdg _gate_q_4;
  p(1.1500996273812276) _gate_q_2;
  sx _gate_q_6;
  sx _gate_q_0;
  ry(5.971469846676213) _gate_q_7;
  cy _gate_q_8, _gate_q_1;
  h _gate_q_5;
  ryy_5105587488(1.6041521328328394) _gate_q_1, _gate_q_0;
  u2(1.6110171567355998, 5.274089682472283) _gate_q_4;
  ecr _gate_q_6, _gate_q_2;
  sdg _gate_q_7;
  cu3_5105593104(5.1486797126057136, 4.474518350488757, 0.425906263827115) _gate_q_5, _gate_q_3;
  rx(1.15099644238346) _gate_q_8;
  swap _gate_q_6, _gate_q_3;
  cry(1.9336201200945613) _gate_q_0, _gate_q_2;
  iswap _gate_q_7, _gate_q_1;
  rz(2.1718417429257864) _gate_q_5;
  id _gate_q_4;
  sxdg _gate_q_8;
  crz(0.8406206346333297) _gate_q_1, _gate_q_6;
  u1(6.238582010459622) _gate_q_3;
  U(4.204780017753824, 2.5087503093071577, 0.2577378417396645) _gate_q_8;
  t _gate_q_0;
  sxdg _gate_q_4;
  rzx_5105594064(3.5174884070561827) _gate_q_2, _gate_q_5;
  rz(1.1838241390543383) _gate_q_7;
  sdg _gate_q_8;
  xx_minus_yy_5105594304(4.5757415298340165, 4.329894375003667) _gate_q_2, _gate_q_1;
  x _gate_q_7;
  y _gate_q_0;
  t _gate_q_4;
  u2(5.222416424032818, 5.242469623034755) _gate_q_5;
  xx_plus_yy_5105592720(5.847274610839353, 5.189613480476201) _gate_q_6, _gate_q_3;
  dcx _gate_q_4, _gate_q_7;
  cy _gate_q_2, _gate_q_5;
  crz(2.2606770877694946) _gate_q_3, _gate_q_8;
  rz(2.2145525405283415) _gate_q_1;
  crx(0.5273884209182759) _gate_q_0, _gate_q_6;
}