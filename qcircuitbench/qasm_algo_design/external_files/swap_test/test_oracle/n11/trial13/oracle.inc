gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5072116800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4779645037242943, 3.7699540327195784, -3.7699540327195784) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072111904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5767221971486741) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.296688747563595) _gate_q_1;
  ry(-2.296688747563595) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5767221971486741) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5072118432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5994184513837764) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5994184513837764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5994184513837764) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072120112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5799704198829523) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5799704198829523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5799704198829523) _gate_q_1;
}
gate ryy_5072123520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.533893425637425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072110800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.874535528762715, -0.20867912619775564, 0.20867912619775564) _gate_q_0;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072116896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6469316101661344) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7989636592904117) _gate_q_1;
  ry(-2.7989636592904117) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6469316101661344) _gate_q_0;
}
gate cu3_5072114544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6439553670857525) _gate_q_0;
  u1(-0.8029534290078727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1412419205648003, 0, -1.6439553670857525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1412419205648003, 2.4469087960936253, 0) _gate_q_1;
}
gate rxx_5072111328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.538426034414589) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072124720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0676064291157683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_minus_yy_5072110176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.050701057249562) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.276471366783926) _gate_q_0;
  ry(-1.276471366783926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.050701057249562) _gate_q_1;
}
gate rzz_5072117232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8563129655316664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072113632(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4121527871642805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072110608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0843066211884893) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0843066211884893) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0843066211884893) _gate_q_1;
}
gate rxx_5072120208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9326401945243554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072120160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.913553721063646) _gate_q_0;
  u1(-1.2970603813616752) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.24608187905078, 0, -3.913553721063646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.24608187905078, 5.210614102425321, 0) _gate_q_1;
}
gate r_5072118240(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.35445626431514, 3.503413666692288, -3.503413666692288) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  s _gate_q_3;
  z _gate_q_5;
  x _gate_q_10;
  id _gate_q_2;
  csdg _gate_q_8, _gate_q_4;
  r_5072116800(0.4779645037242943, 5.340750359514475) _gate_q_9;
  u3(3.679495960439848, 3.7984501541659896, 0.9105012435285992) _gate_q_1;
  sdg _gate_q_6;
  xx_plus_yy_5072111904(4.59337749512719, 0.5767221971486741) _gate_q_0, _gate_q_7;
  p(3.708277549425061) _gate_q_5;
  p(1.8170425915480029) _gate_q_2;
  cs _gate_q_0, _gate_q_9;
  t _gate_q_4;
  cx _gate_q_3, _gate_q_7;
  cu1_5072118432(3.1988369027675527) _gate_q_10, _gate_q_8;
  x _gate_q_6;
  U(3.2328637825119904, 4.877350629295498, 1.4161796541013751) _gate_q_1;
  crx(2.256265615754374) _gate_q_0, _gate_q_8;
  iswap _gate_q_5, _gate_q_3;
  rz(1.075523132695108) _gate_q_7;
  cx _gate_q_10, _gate_q_2;
  cu1_5072120112(5.159940839765905) _gate_q_1, _gate_q_9;
  ryy_5072123520(5.533893425637425) _gate_q_6, _gate_q_4;
  cy _gate_q_6, _gate_q_4;
  r_5072110800(2.874535528762715, 1.362117200597141) _gate_q_9;
  csdg _gate_q_2, _gate_q_3;
  ecr _gate_q_8, _gate_q_7;
  tdg _gate_q_0;
  dcx _gate_q_10, _gate_q_1;
  h _gate_q_5;
  crx(3.7233116995665636) _gate_q_5, _gate_q_7;
  cry(1.2221870438490887) _gate_q_8, _gate_q_1;
  cs _gate_q_4, _gate_q_3;
  ecr _gate_q_6, _gate_q_10;
  csdg _gate_q_9, _gate_q_0;
  u1(4.748224431756259) _gate_q_2;
  xx_plus_yy_5072116896(5.597927318580823, 3.6469316101661344) _gate_q_9, _gate_q_2;
  cu3_5072114544(6.282483841129601, 2.4469087960936253, 0.8410019380778799) _gate_q_7, _gate_q_10;
  tdg _gate_q_0;
  rxx_5072111328(5.538426034414589) _gate_q_8, _gate_q_1;
  csdg _gate_q_6, _gate_q_3;
  cs _gate_q_4, _gate_q_5;
  h _gate_q_6;
  t _gate_q_7;
  rzz_5072124720(2.0676064291157683) _gate_q_5, _gate_q_4;
  cu(3.6964379885389467, 3.488609993984402, 6.095433741158303, 6.233348958998396) _gate_q_1, _gate_q_9;
  u3(5.08259461074245, 5.10051428181716, 4.104017390963712) _gate_q_2;
  tdg _gate_q_8;
  csx _gate_q_0, _gate_q_3;
  ry(6.111575391465351) _gate_q_10;
  cp(1.5092768971446238) _gate_q_4, _gate_q_3;
  t _gate_q_9;
  dcx _gate_q_2, _gate_q_1;
  xx_minus_yy_5072110176(2.552942733567852, 5.050701057249562) _gate_q_8, _gate_q_7;
  u1(1.260235493471017) _gate_q_10;
  rzz_5072117232(1.8563129655316664) _gate_q_5, _gate_q_0;
  u2(2.3511301456874416, 4.753638039886884) _gate_q_6;
  ecr _gate_q_0, _gate_q_1;
  ryy_5072113632(1.4121527871642805) _gate_q_7, _gate_q_2;
  rz(1.4350204054517415) _gate_q_4;
  cu1_5072110608(6.168613242376979) _gate_q_10, _gate_q_5;
  ry(3.1599579204032766) _gate_q_3;
  csdg _gate_q_9, _gate_q_8;
  u3(1.8696536167147062, 6.023950582730334, 0.8396664799154883) _gate_q_6;
  s _gate_q_0;
  rxx_5072120208(0.9326401945243554) _gate_q_9, _gate_q_8;
  csdg _gate_q_4, _gate_q_3;
  cu3_5072120160(2.49216375810156, 5.210614102425321, 2.6164933397019707) _gate_q_2, _gate_q_1;
  cz _gate_q_7, _gate_q_10;
  id _gate_q_6;
  r_5072118240(4.35445626431514, 5.074209993487185) _gate_q_5;
}
gate xx_plus_yy_5072125200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4536181851614973) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8075559323033469) _gate_q_1;
  ry(-0.8075559323033469) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4536181851614973) _gate_q_0;
}
gate rzz_5072125104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.849303765509914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072119728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0377260841068012) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2366751276586666) _gate_q_1;
  ry(-0.2366751276586666) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0377260841068012) _gate_q_0;
}
gate rxx_5072118336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.651491600387812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072123088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5653948712068515) _gate_q_0;
  u1(2.421829995729754) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.31684348346937, 0, -2.5653948712068515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.31684348346937, 0.1435648754770974, 0) _gate_q_1;
}
gate rzz_5072121888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.683874310719877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070813280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.756658635834139) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9737492360213258) _gate_q_0;
  ry(-1.9737492360213258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.756658635834139) _gate_q_1;
}
gate rzx_5070806608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1080813402844993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070810016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.351473908040999) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070804976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.450707007489049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ecr _gate_q_6, _gate_q_2;
  ry(6.0680031015716525) _gate_q_1;
  cry(1.550717069031929) _gate_q_3, _gate_q_4;
  crx(1.6455919416299065) _gate_q_0, _gate_q_7;
  crz(1.1055928127536212) _gate_q_9, _gate_q_5;
  h _gate_q_10;
  id _gate_q_8;
  iswap _gate_q_0, _gate_q_8;
  sxdg _gate_q_6;
  U(4.357770881693281, 5.469545545363723, 1.9109667470441762) _gate_q_1;
  rx(3.73543248290689) _gate_q_2;
  cp(2.0953300465106097) _gate_q_5, _gate_q_4;
  xx_plus_yy_5072125200(1.6151118646066938, 2.4536181851614973) _gate_q_7, _gate_q_9;
  id _gate_q_3;
  U(3.073805046828955, 3.4358314227638385, 4.391491946853707) _gate_q_10;
  dcx _gate_q_5, _gate_q_2;
  s _gate_q_10;
  iswap _gate_q_6, _gate_q_9;
  U(1.6394049176996377, 1.524055781544688, 0.14245083850977946) _gate_q_1;
  rzz_5072125104(5.849303765509914) _gate_q_0, _gate_q_8;
  xx_plus_yy_5072119728(0.4733502553173332, 2.0377260841068012) _gate_q_4, _gate_q_7;
  u2(0.9975983997939992, 5.2122881281952855) _gate_q_3;
  crz(4.850512911874457) _gate_q_6, _gate_q_4;
  u2(0.0022778864546360994, 1.3192837585814223) _gate_q_1;
  cx _gate_q_9, _gate_q_10;
  x _gate_q_0;
  s _gate_q_7;
  crz(1.6488206602584154) _gate_q_3, _gate_q_2;
  u2(2.3063221349297693, 1.0316665503700604) _gate_q_8;
  y _gate_q_5;
  cz _gate_q_4, _gate_q_2;
  h _gate_q_6;
  cx _gate_q_8, _gate_q_0;
  u3(1.2434058468836393, 5.206735177960405, 2.646976934842037) _gate_q_7;
  p(0.0383648907432299) _gate_q_9;
  x _gate_q_10;
  rxx_5072118336(5.651491600387812) _gate_q_3, _gate_q_1;
  rx(5.8717308607234875) _gate_q_5;
  ch _gate_q_0, _gate_q_1;
  cu3_5072123088(2.63368696693874, 0.1435648754770974, 4.9872248669366055) _gate_q_3, _gate_q_10;
  cp(1.1819646475505907) _gate_q_6, _gate_q_7;
  rzz_5072121888(2.683874310719877) _gate_q_5, _gate_q_2;
  t _gate_q_8;
  u2(1.1031922067379747, 5.679865771072987) _gate_q_4;
  sx _gate_q_9;
  crx(1.6837186991228816) _gate_q_2, _gate_q_6;
  crx(4.935512406270785) _gate_q_10, _gate_q_3;
  iswap _gate_q_4, _gate_q_5;
  cp(2.79461355945819) _gate_q_8, _gate_q_0;
  csx _gate_q_1, _gate_q_7;
  ry(0.9198688797267256) _gate_q_9;
  cu(4.012400227214968, 1.9551896502869692, 6.014220947677108, 3.5813114064113987) _gate_q_7, _gate_q_4;
  cp(4.091144287266363) _gate_q_8, _gate_q_5;
  swap _gate_q_0, _gate_q_1;
  z _gate_q_3;
  ch _gate_q_6, _gate_q_10;
  y _gate_q_9;
  t _gate_q_2;
  u1(2.178595713142641) _gate_q_5;
  u1(3.8886723542183392) _gate_q_3;
  csx _gate_q_7, _gate_q_2;
  h _gate_q_0;
  sxdg _gate_q_10;
  xx_minus_yy_5070813280(3.9474984720426516, 1.756658635834139) _gate_q_9, _gate_q_1;
  u3(0.432443330239597, 1.57339523917129, 5.78666242648482) _gate_q_8;
  rzx_5070806608(1.1080813402844993) _gate_q_6, _gate_q_4;
  iswap _gate_q_6, _gate_q_7;
  rzx_5070810016(5.351473908040999) _gate_q_5, _gate_q_8;
  ry(3.567576371325956) _gate_q_1;
  ecr _gate_q_2, _gate_q_9;
  sx _gate_q_3;
  rxx_5070804976(5.450707007489049) _gate_q_10, _gate_q_4;
  h _gate_q_0;
}