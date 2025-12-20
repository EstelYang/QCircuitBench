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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5074264256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.318031533431848) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.318031533431848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.318031533431848) _gate_q_1;
}
gate ryy_5074263872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.660948670876708) _gate_q_1;
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
gate cu1_5074264496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.42193117956459636) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.42193117956459636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.42193117956459636) _gate_q_1;
}
gate rzx_5074261952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.231397855296154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074263488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2782508506642802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074257008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.9013560317214795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074262624(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.690399375960674) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074257296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2080530950779154) _gate_q_0;
  u1(0.5040259372631688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.175512236288268, 0, -3.2080530950779154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.175512236288268, 2.7040271578147466, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074259456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.18993143785948252) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5561808184076986) _gate_q_1;
  ry(-0.5561808184076986) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.18993143785948252) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5074266128(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2688599807579326) _gate_q_0;
  u1(-0.7781160606966473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.23763980064743476, 0, -3.2688599807579326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.23763980064743476, 4.04697604145458, 0) _gate_q_1;
}
gate xx_plus_yy_5074258640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.271583537687685) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2884614674262247) _gate_q_1;
  ry(-2.2884614674262247) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.271583537687685) _gate_q_0;
}
gate r_5074256000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3864411921291884, 4.356191774847476, -4.356191774847476) _gate_q_0;
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
gate cu3_5074256192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1185044445973666) _gate_q_0;
  u1(-0.18089706865607247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.628018849378297, 0, -3.1185044445973666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.628018849378297, 3.299401513253439, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  csx _gate_q_6, _gate_q_3;
  id _gate_q_9;
  rx(0.2794998704811366) _gate_q_5;
  csdg _gate_q_1, _gate_q_11;
  csx _gate_q_0, _gate_q_2;
  cx _gate_q_8, _gate_q_4;
  cry(1.524132352640126) _gate_q_10, _gate_q_7;
  t _gate_q_5;
  swap _gate_q_2, _gate_q_1;
  cu1_5074264256(4.636063066863696) _gate_q_3, _gate_q_0;
  h _gate_q_7;
  ryy_5074263872(5.660948670876708) _gate_q_9, _gate_q_10;
  tdg _gate_q_8;
  x _gate_q_11;
  swap _gate_q_4, _gate_q_6;
  u3(2.001392349251433, 3.2734375805537987, 4.243554262952343) _gate_q_9;
  crx(2.7611797497042145) _gate_q_3, _gate_q_5;
  sdg _gate_q_4;
  cx _gate_q_8, _gate_q_2;
  cy _gate_q_0, _gate_q_11;
  U(1.0077600170818293, 5.09418590161351, 4.908115841772621) _gate_q_10;
  cs _gate_q_1, _gate_q_7;
  id _gate_q_6;
  crz(5.063121198162797) _gate_q_3, _gate_q_4;
  U(3.2143123403661575, 5.521046703199189, 2.8787222749868806) _gate_q_1;
  cx _gate_q_5, _gate_q_0;
  cu1_5074264496(0.8438623591291927) _gate_q_7, _gate_q_11;
  rzx_5074261952(5.231397855296154) _gate_q_6, _gate_q_8;
  cu(3.9136904623411404, 2.08830702884698, 0.47100004625076786, 0.08482757301166043) _gate_q_2, _gate_q_10;
  tdg _gate_q_9;
  u2(5.045436078689211, 1.597058515108913) _gate_q_7;
  sdg _gate_q_8;
  h _gate_q_5;
  ch _gate_q_1, _gate_q_4;
  rzz_5074263488(2.2782508506642802) _gate_q_6, _gate_q_10;
  rxx_5074257008(4.9013560317214795) _gate_q_3, _gate_q_2;
  ryy_5074262624(5.690399375960674) _gate_q_0, _gate_q_11;
  ry(0.8616559271902778) _gate_q_9;
  rz(3.1906237654614453) _gate_q_11;
  t _gate_q_0;
  cs _gate_q_4, _gate_q_9;
  cu3_5074257296(4.351024472576536, 2.7040271578147466, 3.712079032341084) _gate_q_3, _gate_q_2;
  crx(4.3915745389894365) _gate_q_6, _gate_q_1;
  xx_plus_yy_5074259456(1.1123616368153972, 0.18993143785948252) _gate_q_7, _gate_q_8;
  y _gate_q_10;
  t _gate_q_5;
  t _gate_q_10;
  crz(4.899523631917848) _gate_q_8, _gate_q_0;
  crx(3.0485851411589584) _gate_q_5, _gate_q_2;
  u3(2.339308082702005, 1.4787528376968002, 0.3882173447878497) _gate_q_11;
  dcx _gate_q_3, _gate_q_4;
  swap _gate_q_9, _gate_q_1;
  swap _gate_q_6, _gate_q_7;
  cu3_5074266128(0.4752796012948695, 4.04697604145458, 2.4907439200612855) _gate_q_0, _gate_q_9;
  xx_plus_yy_5074258640(4.576922934852449, 6.271583537687685) _gate_q_6, _gate_q_1;
  crx(1.1083885065127124) _gate_q_11, _gate_q_5;
  u2(2.0913240725839337, 2.9045820181963005) _gate_q_7;
  tdg _gate_q_2;
  ry(2.7037047566160175) _gate_q_8;
  r_5074256000(1.3864411921291884, 5.926988101642372) _gate_q_4;
  cs _gate_q_3, _gate_q_10;
  tdg _gate_q_8;
  u2(1.9081169864385041, 0.717493967947252) _gate_q_0;
  rx(2.613944900200327) _gate_q_10;
  t _gate_q_1;
  csdg _gate_q_7, _gate_q_11;
  ecr _gate_q_6, _gate_q_5;
  cu3_5074256192(3.256037698756594, 3.299401513253439, 2.937607375941294) _gate_q_4, _gate_q_3;
  rz(3.614756258533962) _gate_q_2;
  sdg _gate_q_9;
  csx _gate_q_8, _gate_q_0;
  cp(2.2854697569213296) _gate_q_7, _gate_q_5;
  sxdg _gate_q_1;
  u2(3.3045366400120813, 4.355711613688895) _gate_q_11;
  id _gate_q_4;
  y _gate_q_9;
  cs _gate_q_2, _gate_q_3;
  swap _gate_q_6, _gate_q_10;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5074233984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.559565548233431) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.18068694074328392) _gate_q_1;
  ry(-0.18068694074328392) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.559565548233431) _gate_q_0;
}
gate cu1_5074229184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9045128574128045) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9045128574128045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9045128574128045) _gate_q_1;
}
gate xx_plus_yy_5074228176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.13111558774016) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.46183521938550887) _gate_q_1;
  ry(-0.46183521938550887) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.13111558774016) _gate_q_0;
}
gate ryy_5074234992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.43995125130482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074234128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.164125259552804) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.61123001794213) _gate_q_0;
  ry(-2.61123001794213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.164125259552804) _gate_q_1;
}
gate rzz_5074235472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.363482202370603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074238112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.52046918174031) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074236000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7133941532237045, 3.3318357954641655, -3.3318357954641655) _gate_q_0;
}
gate cu1_5074237728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.13329573391068117) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.13329573391068117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.13329573391068117) _gate_q_1;
}
gate r_5074237824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0053155161141756, 2.0216716147348195, -2.0216716147348195) _gate_q_0;
}
gate xx_minus_yy_5074238160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.367338702761572) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3260499888408555) _gate_q_0;
  ry(-1.3260499888408555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.367338702761572) _gate_q_1;
}
gate r_5074234560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.99104816703836, 1.9546319689626812, -1.9546319689626812) _gate_q_0;
}
gate xx_minus_yy_5074238544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.177020807561483) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0052523240310385) _gate_q_0;
  ry(-3.0052523240310385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.177020807561483) _gate_q_1;
}
gate rzx_5074232976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.978091716119781) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074228800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.984856621224477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cy _gate_q_4, _gate_q_6;
  h _gate_q_2;
  s _gate_q_9;
  csdg _gate_q_11, _gate_q_1;
  sdg _gate_q_0;
  ecr _gate_q_7, _gate_q_3;
  t _gate_q_8;
  iswap _gate_q_5, _gate_q_10;
  rz(1.7282885440166256) _gate_q_1;
  x _gate_q_4;
  ry(4.601992714104636) _gate_q_6;
  crx(2.8288868248343735) _gate_q_0, _gate_q_8;
  xx_plus_yy_5074233984(0.36137388148656785, 5.559565548233431) _gate_q_11, _gate_q_2;
  crz(5.1085339886289995) _gate_q_3, _gate_q_9;
  cu1_5074229184(3.809025714825609) _gate_q_7, _gate_q_5;
  ry(4.169846539782691) _gate_q_10;
  xx_plus_yy_5074228176(0.9236704387710177, 6.13111558774016) _gate_q_0, _gate_q_7;
  cz _gate_q_9, _gate_q_2;
  x _gate_q_8;
  x _gate_q_10;
  ryy_5074234992(3.43995125130482) _gate_q_3, _gate_q_11;
  s _gate_q_6;
  cp(2.279587622305308) _gate_q_5, _gate_q_4;
  U(0.6790290361349052, 1.9221130717444765, 0.29340899018717265) _gate_q_1;
  ecr _gate_q_2, _gate_q_1;
  cu(0.5741145617802039, 5.309754588861223, 3.1758060860090995, 2.683383251695436) _gate_q_9, _gate_q_10;
  sxdg _gate_q_11;
  u1(4.453723722732437) _gate_q_0;
  u1(4.928117916859032) _gate_q_8;
  U(1.57949914462347, 2.1212147096155007, 5.369499433686917) _gate_q_5;
  swap _gate_q_6, _gate_q_3;
  xx_minus_yy_5074234128(5.22246003588426, 1.164125259552804) _gate_q_4, _gate_q_7;
  cx _gate_q_8, _gate_q_10;
  rzz_5074235472(5.363482202370603) _gate_q_3, _gate_q_0;
  rxx_5074238112(4.52046918174031) _gate_q_5, _gate_q_9;
  cy _gate_q_7, _gate_q_2;
  swap _gate_q_1, _gate_q_11;
  rx(5.8514622661297615) _gate_q_4;
  s _gate_q_6;
  ecr _gate_q_3, _gate_q_2;
  r_5074236000(2.7133941532237045, 4.902632122259062) _gate_q_8;
  cu1_5074237728(0.26659146782136234) _gate_q_6, _gate_q_4;
  sdg _gate_q_7;
  U(0.5557311997546328, 5.188653241004948, 3.4013744006761653) _gate_q_9;
  r_5074237824(1.0053155161141756, 3.592467941529716) _gate_q_1;
  s _gate_q_11;
  iswap _gate_q_0, _gate_q_10;
  u3(1.5653304069509717, 0.3480691174502969, 1.933761350363118) _gate_q_5;
  xx_minus_yy_5074238160(2.652099977681711, 5.367338702761572) _gate_q_0, _gate_q_8;
  iswap _gate_q_10, _gate_q_7;
  swap _gate_q_6, _gate_q_3;
  sx _gate_q_2;
  y _gate_q_5;
  swap _gate_q_1, _gate_q_9;
  cy _gate_q_4, _gate_q_11;
  cp(1.5784758661487532) _gate_q_11, _gate_q_6;
  z _gate_q_1;
  p(3.0669921782523817) _gate_q_10;
  y _gate_q_5;
  z _gate_q_3;
  u3(2.7660652338471605, 1.7954719340962704, 4.46497648722019) _gate_q_8;
  r_5074234560(2.99104816703836, 3.5254282957575778) _gate_q_7;
  xx_minus_yy_5074238544(6.010504648062077, 6.177020807561483) _gate_q_4, _gate_q_2;
  crz(5.3924350109051) _gate_q_0, _gate_q_9;
  ch _gate_q_9, _gate_q_3;
  u1(2.0980226515455818) _gate_q_2;
  sdg _gate_q_1;
  cp(2.0116292619530665) _gate_q_0, _gate_q_7;
  ry(1.846117439233346) _gate_q_4;
  rx(5.682953778317791) _gate_q_8;
  rzx_5074232976(4.978091716119781) _gate_q_11, _gate_q_10;
  cz _gate_q_5, _gate_q_6;
  iswap _gate_q_2, _gate_q_8;
  u1(1.7480214165020798) _gate_q_0;
  dcx _gate_q_3, _gate_q_4;
  u2(5.619993294825364, 5.169664887978112) _gate_q_10;
  dcx _gate_q_9, _gate_q_11;
  csdg _gate_q_6, _gate_q_7;
  rzz_5074228800(4.984856621224477) _gate_q_1, _gate_q_5;
}