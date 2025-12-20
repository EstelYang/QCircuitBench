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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate ryy_5070592272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1325618828577808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070590400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.596530362497997, 3.787119919129803, -3.787119919129803) _gate_q_0;
}
gate xx_minus_yy_5070593904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.746617922960742) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.789109988292245) _gate_q_0;
  ry(-1.789109988292245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.746617922960742) _gate_q_1;
}
gate xx_plus_yy_5070592656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.275813314853565) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3604747609258554) _gate_q_1;
  ry(-1.3604747609258554) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.275813314853565) _gate_q_0;
}
gate rzx_5070589872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0270090603178403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5070595392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.173018902358245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070594864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3265611556353414) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.559777631865226) _gate_q_1;
  ry(-2.559777631865226) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3265611556353414) _gate_q_0;
}
gate rzx_5070587568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.570594205535998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5070601056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.958611863681058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  u2(4.239977203385178, 1.7207095373110248) _gate_q_1;
  crz(0.4423627975108448) _gate_q_3, _gate_q_0;
  cs _gate_q_7, _gate_q_2;
  rx(4.9608177985300514) _gate_q_8;
  sdg _gate_q_6;
  U(0.6837096009239321, 1.4357227221982873, 4.693382157826528) _gate_q_5;
  ry(4.42750143213595) _gate_q_4;
  ch _gate_q_0, _gate_q_3;
  sxdg _gate_q_5;
  t _gate_q_4;
  cx _gate_q_1, _gate_q_8;
  csdg _gate_q_7, _gate_q_2;
  h _gate_q_6;
  y _gate_q_0;
  sxdg _gate_q_8;
  s _gate_q_3;
  cz _gate_q_6, _gate_q_2;
  u1(2.3040764250254977) _gate_q_5;
  x _gate_q_7;
  cu(5.246485905892619, 5.312278700091617, 2.528688222369725, 2.5536424767243697) _gate_q_4, _gate_q_1;
  crz(2.605452220509893) _gate_q_6, _gate_q_5;
  rz(2.572766016892174) _gate_q_7;
  cp(2.7957343443335407) _gate_q_4, _gate_q_8;
  id _gate_q_1;
  cs _gate_q_3, _gate_q_0;
  t _gate_q_2;
  csx _gate_q_6, _gate_q_4;
  crx(3.997785792848125) _gate_q_7, _gate_q_3;
  u3(5.849303725381242, 1.195719741912008, 0.34102546677477175) _gate_q_8;
  ryy_5070592272(1.1325618828577808) _gate_q_1, _gate_q_5;
  cs _gate_q_2, _gate_q_0;
  r_5070590400(5.596530362497997, 5.3579162459247) _gate_q_1;
  xx_minus_yy_5070593904(3.57821997658449, 0.746617922960742) _gate_q_4, _gate_q_6;
  y _gate_q_2;
  h _gate_q_8;
  U(5.745791907939405, 5.717182594955155, 3.7719571834378094) _gate_q_0;
  cp(2.014858136230704) _gate_q_5, _gate_q_3;
  s _gate_q_7;
  xx_plus_yy_5070592656(2.720949521851711, 2.275813314853565) _gate_q_2, _gate_q_1;
  rz(1.2044408281172267) _gate_q_4;
  rzx_5070589872(1.0270090603178403) _gate_q_7, _gate_q_5;
  id _gate_q_6;
  rzz_5070595392(5.173018902358245) _gate_q_0, _gate_q_8;
  sxdg _gate_q_3;
  sxdg _gate_q_7;
  xx_plus_yy_5070594864(5.119555263730452, 2.3265611556353414) _gate_q_0, _gate_q_8;
  crx(1.137349017800637) _gate_q_4, _gate_q_2;
  y _gate_q_6;
  rzx_5070587568(4.570594205535998) _gate_q_1, _gate_q_5;
  x _gate_q_3;
  ch _gate_q_2, _gate_q_8;
  u2(1.4269261398659523, 1.3771407097327062) _gate_q_4;
  u3(2.1059257804368006, 3.7708812472791835, 5.614223946102656) _gate_q_0;
  rzz_5070601056(5.958611863681058) _gate_q_5, _gate_q_3;
  ch _gate_q_6, _gate_q_7;
  sdg _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070586272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.3497318795651925) _gate_q_0;
  u1(-0.7639572590559354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8935338787300596, 0, -5.3497318795651925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8935338787300596, 6.113689138621128, 0) _gate_q_1;
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
gate xx_plus_yy_5070593088(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.490679398848759) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.023484202218533614) _gate_q_1;
  ry(-0.023484202218533614) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.490679398848759) _gate_q_0;
}
gate xx_minus_yy_5070593328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.400894693689709) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.14253636052517202) _gate_q_0;
  ry(-0.14253636052517202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.400894693689709) _gate_q_1;
}
gate cu3_5070587520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.035832640385793) _gate_q_0;
  u1(1.2070472583244036) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3963661347643135, 0, -5.035832640385793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3963661347643135, 3.82878538206139, 0) _gate_q_1;
}
gate r_5070601728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.289346730743999, 2.6994175767916877, -2.6994175767916877) _gate_q_0;
}
gate xx_minus_yy_5070587184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8017508563038596) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.501735283280927) _gate_q_0;
  ry(-0.501735283280927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8017508563038596) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070589776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.784918944072669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070600096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.78351496504475, 4.550400104442302, -4.550400104442302) _gate_q_0;
}
gate rzz_5070587136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6763667765765502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070599472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5393631687407225, 1.0270793453350535, -1.0270793453350535) _gate_q_0;
}
gate ryy_5070600672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8806593871904367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070587472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9450236367381568) _gate_q_0;
  u1(-0.8032262088747162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5876831973886556, 0, -1.9450236367381568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5876831973886556, 2.748249845612873, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  iswap _gate_q_0, _gate_q_2;
  cu3_5070586272(1.7870677574601193, 6.113689138621128, 4.585774620509257) _gate_q_4, _gate_q_3;
  csx _gate_q_1, _gate_q_6;
  ecr _gate_q_5, _gate_q_7;
  sx _gate_q_8;
  cs _gate_q_1, _gate_q_0;
  t _gate_q_7;
  h _gate_q_5;
  xx_plus_yy_5070593088(0.04696840443706723, 1.490679398848759) _gate_q_3, _gate_q_8;
  ry(3.621511234565672) _gate_q_4;
  x _gate_q_6;
  rz(1.150682412112019) _gate_q_2;
  id _gate_q_4;
  cz _gate_q_1, _gate_q_8;
  xx_minus_yy_5070593328(0.28507272105034404, 3.400894693689709) _gate_q_2, _gate_q_3;
  crx(1.9344944395240713) _gate_q_0, _gate_q_6;
  ecr _gate_q_7, _gate_q_5;
  y _gate_q_2;
  ecr _gate_q_6, _gate_q_1;
  cu3_5070587520(2.792732269528627, 3.82878538206139, 6.242879898710197) _gate_q_8, _gate_q_0;
  swap _gate_q_7, _gate_q_3;
  p(2.5974154762163755) _gate_q_4;
  tdg _gate_q_5;
  tdg _gate_q_0;
  s _gate_q_7;
  t _gate_q_4;
  r_5070601728(2.289346730743999, 4.270213903586584) _gate_q_3;
  u3(5.077213495900465, 2.367201525423193, 1.4469301044470204) _gate_q_5;
  rz(3.441892659305518) _gate_q_1;
  cx _gate_q_6, _gate_q_2;
  p(5.469510875069259) _gate_q_8;
  ecr _gate_q_8, _gate_q_3;
  y _gate_q_6;
  swap _gate_q_4, _gate_q_2;
  xx_minus_yy_5070587184(1.003470566561854, 2.8017508563038596) _gate_q_5, _gate_q_0;
  dcx _gate_q_1, _gate_q_7;
  sxdg _gate_q_5;
  ryy_5070589776(3.784918944072669) _gate_q_1, _gate_q_0;
  x _gate_q_3;
  cp(2.8350433157510637) _gate_q_4, _gate_q_7;
  csdg _gate_q_8, _gate_q_6;
  r_5070600096(5.78351496504475, 6.121196431237198) _gate_q_2;
  t _gate_q_3;
  rzz_5070587136(1.6763667765765502) _gate_q_7, _gate_q_0;
  csx _gate_q_1, _gate_q_8;
  u1(1.6173993572531613) _gate_q_5;
  u1(4.873395041854997) _gate_q_4;
  sx _gate_q_2;
  t _gate_q_6;
  r_5070599472(4.5393631687407225, 2.59787567212995) _gate_q_2;
  ryy_5070600672(3.8806593871904367) _gate_q_7, _gate_q_3;
  cu3_5070587472(1.1753663947773112, 2.748249845612873, 1.1417974278634406) _gate_q_5, _gate_q_0;
  rx(1.8892180395631006) _gate_q_4;
  cz _gate_q_6, _gate_q_1;
  x _gate_q_8;
}