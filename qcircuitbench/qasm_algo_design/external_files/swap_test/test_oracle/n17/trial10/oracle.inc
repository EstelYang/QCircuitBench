gate ryy_5107938992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.715250952985903) _gate_q_1;
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
gate rzx_5107936352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4261526660158054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107925504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.369442246909659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107938512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.519436123428907) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107941200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5315427577776326) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6232430755226637) _gate_q_0;
  ry(-2.6232430755226637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5315427577776326) _gate_q_1;
}
gate xx_plus_yy_5107934000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8613324469750994) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3840245236489108) _gate_q_1;
  ry(-1.3840245236489108) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8613324469750994) _gate_q_0;
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
gate r_5107936448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.07171212088911069, 0.019850448767337214, -0.019850448767337214) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5107936832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.207866145477486) _gate_q_0;
  u1(-0.02111969034532013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.839114905339305, 0, -5.207866145477486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.839114905339305, 5.228985835822806, 0) _gate_q_1;
}
gate xx_minus_yy_5107936736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.22998587921554878) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3279584475577782) _gate_q_0;
  ry(-0.3279584475577782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.22998587921554878) _gate_q_1;
}
gate rzx_5107933136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.640779736136236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107933040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.746403066855152) _gate_q_0;
  u1(2.08064454334623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5395719577422393, 0, -3.746403066855152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5395719577422393, 1.6657585235089216, 0) _gate_q_1;
}
gate cu1_5107933280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.48920388965001) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.48920388965001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.48920388965001) _gate_q_1;
}
gate ryy_5107931408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7085858737537696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107933760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.19349380283219295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5107941152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.38428695446777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107938080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.4536162521866265) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.29951560644168) _gate_q_1;
  ry(-1.29951560644168) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.4536162521866265) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5107936400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.742428679087535) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.742428679087535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.742428679087535) _gate_q_1;
}
gate r_5107932368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1991654248765449, 3.580472381394123, -3.580472381394123) _gate_q_0;
}
gate rzx_5107939328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.743499406932664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107931984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.15703307875572822, -0.8303275274183026, 0.8303275274183026) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  tdg _gate_q_7;
  ryy_5107938992(4.715250952985903) _gate_q_8, _gate_q_6;
  csx _gate_q_15, _gate_q_0;
  p(5.98475133216769) _gate_q_14;
  cy _gate_q_4, _gate_q_1;
  rzx_5107936352(0.4261526660158054) _gate_q_9, _gate_q_16;
  rzz_5107925504(5.369442246909659) _gate_q_3, _gate_q_2;
  sdg _gate_q_10;
  cz _gate_q_11, _gate_q_13;
  rzx_5107938512(4.519436123428907) _gate_q_5, _gate_q_12;
  cx _gate_q_1, _gate_q_4;
  h _gate_q_7;
  sx _gate_q_3;
  cz _gate_q_2, _gate_q_14;
  id _gate_q_9;
  xx_minus_yy_5107941200(5.246486151045327, 3.5315427577776326) _gate_q_8, _gate_q_10;
  p(3.777824615449874) _gate_q_6;
  xx_plus_yy_5107934000(2.7680490472978216, 0.8613324469750994) _gate_q_16, _gate_q_0;
  cp(2.664243907253741) _gate_q_15, _gate_q_13;
  ch _gate_q_12, _gate_q_5;
  ry(1.4570489848597041) _gate_q_11;
  z _gate_q_11;
  csx _gate_q_14, _gate_q_1;
  swap _gate_q_13, _gate_q_4;
  ecr _gate_q_6, _gate_q_8;
  ch _gate_q_7, _gate_q_12;
  r_5107936448(0.07171212088911069, 1.5906467755622338) _gate_q_15;
  ry(0.06232511409188753) _gate_q_5;
  h _gate_q_16;
  u3(0.7045746109308848, 1.944484692066312, 0.45442690635721283) _gate_q_3;
  ch _gate_q_0, _gate_q_2;
  cz _gate_q_10, _gate_q_9;
  rz(0.2569216536685015) _gate_q_7;
  cs _gate_q_3, _gate_q_15;
  s _gate_q_1;
  t _gate_q_14;
  cy _gate_q_5, _gate_q_2;
  rz(0.8333796332896568) _gate_q_9;
  sdg _gate_q_0;
  cz _gate_q_8, _gate_q_16;
  cu3_5107936832(5.67822981067861, 5.228985835822806, 5.186746455132166) _gate_q_10, _gate_q_13;
  h _gate_q_4;
  ch _gate_q_12, _gate_q_6;
  tdg _gate_q_11;
  xx_minus_yy_5107936736(0.6559168951155564, 0.22998587921554878) _gate_q_7, _gate_q_15;
  csx _gate_q_16, _gate_q_0;
  cx _gate_q_9, _gate_q_5;
  rzx_5107933136(1.640779736136236) _gate_q_12, _gate_q_4;
  rx(4.07656558361202) _gate_q_10;
  u3(1.5925180479127634, 4.282401430718536, 4.043194798696844) _gate_q_1;
  cu3_5107933040(5.079143915484479, 1.6657585235089216, 5.827047610201382) _gate_q_11, _gate_q_14;
  u2(4.888731333412387, 0.4674667242276371) _gate_q_8;
  cs _gate_q_13, _gate_q_2;
  z _gate_q_3;
  tdg _gate_q_6;
  x _gate_q_14;
  ry(0.8792633374671204) _gate_q_6;
  crz(1.6168693419772286) _gate_q_5, _gate_q_10;
  cu1_5107933280(4.97840777930002) _gate_q_9, _gate_q_13;
  ryy_5107931408(3.7085858737537696) _gate_q_11, _gate_q_0;
  cry(3.714844808361642) _gate_q_4, _gate_q_2;
  rzx_5107933760(0.19349380283219295) _gate_q_15, _gate_q_12;
  rz(2.1396825046272143) _gate_q_1;
  iswap _gate_q_16, _gate_q_7;
  csx _gate_q_8, _gate_q_3;
  rzx_5107941152(2.38428695446777) _gate_q_3, _gate_q_12;
  rx(2.5439059075244543) _gate_q_0;
  ecr _gate_q_10, _gate_q_13;
  cs _gate_q_7, _gate_q_14;
  ecr _gate_q_11, _gate_q_2;
  cp(5.312354040214404) _gate_q_15, _gate_q_5;
  sdg _gate_q_6;
  z _gate_q_1;
  id _gate_q_16;
  t _gate_q_9;
  cz _gate_q_4, _gate_q_8;
  ch _gate_q_16, _gate_q_8;
  U(3.1464136741554305, 3.735230011713089, 2.6977017785258455) _gate_q_0;
  iswap _gate_q_7, _gate_q_12;
  xx_plus_yy_5107938080(2.59903121288336, 4.4536162521866265) _gate_q_14, _gate_q_5;
  cx _gate_q_3, _gate_q_10;
  sx _gate_q_9;
  u1(1.3086990352294496) _gate_q_13;
  csx _gate_q_1, _gate_q_15;
  sdg _gate_q_6;
  sx _gate_q_11;
  z _gate_q_4;
  sx _gate_q_2;
  crx(2.4329080408026558) _gate_q_5, _gate_q_4;
  cy _gate_q_13, _gate_q_12;
  csdg _gate_q_11, _gate_q_3;
  cz _gate_q_0, _gate_q_14;
  cu1_5107936400(5.48485735817507) _gate_q_1, _gate_q_6;
  r_5107932368(1.1991654248765449, 5.151268708189019) _gate_q_10;
  cp(3.9320774152822913) _gate_q_16, _gate_q_2;
  z _gate_q_7;
  cu(1.2866680862176274, 4.535350923443478, 3.8876032416470294, 0.39569668089295645) _gate_q_15, _gate_q_9;
  u2(3.2489499989255988, 2.0808699573362617) _gate_q_8;
  p(0.7144661227305342) _gate_q_0;
  cry(1.9990765347583637) _gate_q_13, _gate_q_16;
  ecr _gate_q_8, _gate_q_11;
  rzx_5107939328(5.743499406932664) _gate_q_6, _gate_q_4;
  r_5107931984(0.15703307875572822, 0.7404687993765939) _gate_q_14;
  ry(3.902375675917384) _gate_q_3;
  u2(1.0835963925934318, 4.4687412917040765) _gate_q_12;
  csx _gate_q_1, _gate_q_7;
  p(1.6771379863481417) _gate_q_15;
  p(5.621111614740587) _gate_q_10;
  u2(1.1564558757198513, 0.31827688460614656) _gate_q_5;
  rz(1.5782727486115613) _gate_q_9;
  u2(5.067482155725404, 3.8898178717697416) _gate_q_2;
}
gate cu3_5105141136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.59232551358898) _gate_q_0;
  u1(-0.8815291437520909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.203435944716559, 0, -3.59232551358898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.203435944716559, 4.473854657341071, 0) _gate_q_1;
}
gate ryy_5105154048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.174660067677211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105143920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5058052508832627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105145264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0540244752149481) _gate_q_0;
  u1(-1.0189220275035085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.309418402137801, 0, -1.0540244752149481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.309418402137801, 2.0729465027184566, 0) _gate_q_1;
}
gate ryy_5105152512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7981582625588449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105142048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2739097644049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5105153760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5466587541129955) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3573308597625604) _gate_q_0;
  ry(-2.3573308597625604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5466587541129955) _gate_q_1;
}
gate xx_plus_yy_5105143776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5241842427616785) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8199504128265764) _gate_q_1;
  ry(-1.8199504128265764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5241842427616785) _gate_q_0;
}
gate rzx_5105150928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8997473614874888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105147808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.6749990804868995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105145168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8511315487143696) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105144688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.752983434668713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105141280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9857268534321952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5104440992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7430456013665462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5104439696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8166284733605131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5104450400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.666038910417544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104448576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8420146801198032, 1.3941368624072785, -1.3941368624072785) _gate_q_0;
}
gate ryy_5104444208(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8083749889319707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104442384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.488595301586867, -1.2510478218237422, 1.2510478218237422) _gate_q_0;
}
gate ryy_4965970096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.306725816368701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105792832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.057951304390549, 4.166642029337188, -4.166642029337188) _gate_q_0;
}
gate ryy_5107722736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.056155940398513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107714384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4464139933864084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107723504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.879585197381079) _gate_q_0;
  u1(0.7525688090060376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1250062168467196, 0, -3.879585197381079) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1250062168467196, 3.1270163883750413, 0) _gate_q_1;
}
gate xx_plus_yy_5107718704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8119203882195385) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9986061940250965) _gate_q_1;
  ry(-1.9986061940250965) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8119203882195385) _gate_q_0;
}
gate r_5107723984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2284607642108396, 1.7744871373486308, -1.7744871373486308) _gate_q_0;
}
gate rzx_5107726720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.886083076600878) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107727392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7327834721637364) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7327834721637364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7327834721637364) _gate_q_1;
}
gate xx_minus_yy_5107725856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.281742680637874) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1469883395899143) _gate_q_0;
  ry(-0.1469883395899143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.281742680637874) _gate_q_1;
}
gate cu1_5107720864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.363854675407) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.363854675407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.363854675407) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  tdg _gate_q_12;
  cz _gate_q_0, _gate_q_14;
  y _gate_q_8;
  cu(3.5696326503594062, 2.7797831930503722, 2.8119197646032434, 3.1191955821747275) _gate_q_3, _gate_q_2;
  cu3_5105141136(4.406871889433118, 4.473854657341071, 2.710796369836889) _gate_q_16, _gate_q_10;
  ry(2.164583055690665) _gate_q_15;
  sdg _gate_q_4;
  ryy_5105154048(6.174660067677211) _gate_q_11, _gate_q_7;
  cry(4.97660567997377) _gate_q_13, _gate_q_6;
  rzx_5105143920(0.5058052508832627) _gate_q_1, _gate_q_5;
  x _gate_q_9;
  cu3_5105145264(4.618836804275602, 2.0729465027184566, 0.03510244771143955) _gate_q_13, _gate_q_9;
  cp(1.600969502185334) _gate_q_8, _gate_q_10;
  cry(2.378218972996386) _gate_q_15, _gate_q_1;
  ryy_5105152512(0.7981582625588449) _gate_q_14, _gate_q_16;
  cy _gate_q_6, _gate_q_5;
  rxx_5105142048(6.2739097644049) _gate_q_12, _gate_q_0;
  dcx _gate_q_3, _gate_q_2;
  cu(2.9928680764372824, 5.59378404462671, 0.4500585059170404, 0.5622512418808351) _gate_q_7, _gate_q_11;
  z _gate_q_4;
  u1(0.4959489628008922) _gate_q_10;
  t _gate_q_5;
  swap _gate_q_15, _gate_q_16;
  xx_minus_yy_5105153760(4.714661719525121, 1.5466587541129955) _gate_q_8, _gate_q_4;
  xx_plus_yy_5105143776(3.639900825653153, 1.5241842427616785) _gate_q_14, _gate_q_13;
  rzx_5105150928(0.8997473614874888) _gate_q_2, _gate_q_12;
  rx(2.7882246924431096) _gate_q_7;
  crx(0.4096379026507128) _gate_q_1, _gate_q_6;
  u2(0.10118449325617293, 1.4904375971409465) _gate_q_11;
  ecr _gate_q_0, _gate_q_9;
  rz(3.8137752667125606) _gate_q_3;
  U(2.2025507496035908, 5.855798413877111, 5.555051836712065) _gate_q_2;
  cy _gate_q_7, _gate_q_6;
  crz(4.811794950887179) _gate_q_8, _gate_q_9;
  sxdg _gate_q_1;
  cu(2.062800773729553, 1.6476161444682065, 5.922453264288663, 2.8924315608905546) _gate_q_12, _gate_q_13;
  ryy_5105147808(4.6749990804868995) _gate_q_11, _gate_q_3;
  t _gate_q_16;
  rzx_5105145168(2.8511315487143696) _gate_q_14, _gate_q_10;
  sx _gate_q_5;
  ry(4.976464895272548) _gate_q_4;
  ecr _gate_q_15, _gate_q_0;
  swap _gate_q_2, _gate_q_5;
  cu(4.860903492007922, 4.102727622065252, 3.0271558012973805, 1.6692064136154539) _gate_q_16, _gate_q_6;
  rxx_5105144688(1.752983434668713) _gate_q_13, _gate_q_0;
  rxx_5105141280(2.9857268534321952) _gate_q_8, _gate_q_14;
  cz _gate_q_10, _gate_q_15;
  sdg _gate_q_1;
  p(0.12595714718077555) _gate_q_3;
  s _gate_q_4;
  cry(3.237640450449829) _gate_q_9, _gate_q_7;
  u3(3.5341616513553684, 5.64007948023576, 3.7352347473321337) _gate_q_12;
  sdg _gate_q_11;
  rzx_5104440992(0.7430456013665462) _gate_q_7, _gate_q_9;
  rxx_5104439696(1.8166284733605131) _gate_q_5, _gate_q_13;
  ecr _gate_q_4, _gate_q_11;
  swap _gate_q_0, _gate_q_15;
  x _gate_q_1;
  rzx_5104450400(5.666038910417544) _gate_q_3, _gate_q_14;
  r_5104448576(1.8420146801198032, 2.964933189202175) _gate_q_10;
  crz(2.6606283856682613) _gate_q_2, _gate_q_16;
  csdg _gate_q_12, _gate_q_6;
  ry(2.7361015313195165) _gate_q_8;
  u1(6.138841132734269) _gate_q_4;
  swap _gate_q_15, _gate_q_10;
  rx(1.8617365185745745) _gate_q_9;
  z _gate_q_5;
  ryy_5104444208(2.8083749889319707) _gate_q_1, _gate_q_12;
  sdg _gate_q_2;
  r_5104442384(4.488595301586867, 0.31974850497115426) _gate_q_13;
  h _gate_q_14;
  cp(0.6943816858609417) _gate_q_8, _gate_q_16;
  crz(5.279359125245558) _gate_q_7, _gate_q_6;
  sxdg _gate_q_11;
  ecr _gate_q_3, _gate_q_0;
  cz _gate_q_16, _gate_q_3;
  cx _gate_q_13, _gate_q_2;
  cry(5.019352623514902) _gate_q_5, _gate_q_12;
  cs _gate_q_10, _gate_q_9;
  ryy_4965970096(5.306725816368701) _gate_q_11, _gate_q_15;
  r_5105792832(4.057951304390549, 5.737438356132085) _gate_q_14;
  z _gate_q_1;
  ryy_5107722736(1.056155940398513) _gate_q_7, _gate_q_4;
  h _gate_q_6;
  rzz_5107714384(3.4464139933864084) _gate_q_8, _gate_q_0;
  cx _gate_q_1, _gate_q_9;
  cu3_5107723504(6.250012433693439, 3.1270163883750413, 4.6321540063871165) _gate_q_13, _gate_q_2;
  cx _gate_q_11, _gate_q_4;
  xx_plus_yy_5107718704(3.997212388050193, 3.8119203882195385) _gate_q_6, _gate_q_14;
  ecr _gate_q_15, _gate_q_8;
  p(3.9374878970329172) _gate_q_16;
  r_5107723984(3.2284607642108396, 3.3452834641435274) _gate_q_5;
  rzx_5107726720(3.886083076600878) _gate_q_7, _gate_q_10;
  sxdg _gate_q_0;
  ch _gate_q_12, _gate_q_3;
  u3(5.886032230997718, 4.5981979456397175, 6.082387628925434) _gate_q_6;
  cy _gate_q_1, _gate_q_7;
  csdg _gate_q_16, _gate_q_11;
  y _gate_q_14;
  ry(0.47379735721862226) _gate_q_10;
  z _gate_q_0;
  cu1_5107727392(1.4655669443274728) _gate_q_8, _gate_q_13;
  xx_minus_yy_5107725856(0.2939766791798286, 2.281742680637874) _gate_q_15, _gate_q_12;
  u2(1.3534938745373366, 3.503024831101263) _gate_q_5;
  cu1_5107720864(0.727709350814) _gate_q_9, _gate_q_3;
  cx _gate_q_4, _gate_q_2;
}