gate cu1_5072118624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8659004538535586) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8659004538535586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8659004538535586) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5072113488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.338637967965046, 3.2984306727843027, -3.2984306727843027) _gate_q_0;
}
gate r_5072118384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9233124850726577, 0.2647880554979798, -0.2647880554979798) _gate_q_0;
}
gate rxx_5072121456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.631005286601931) _gate_q_1;
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
gate r_5072114064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.313467491526782, -0.6704515600746179, 0.6704515600746179) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072122464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0663128632097307) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2079212321605339) _gate_q_0;
  ry(-0.2079212321605339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0663128632097307) _gate_q_1;
}
gate cu1_5072116080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5417954829517285) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5417954829517285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5417954829517285) _gate_q_1;
}
gate r_5072113008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.090691731333545, 4.10920886957018, -4.10920886957018) _gate_q_0;
}
gate cu1_5070804112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.353263997512436) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.353263997512436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.353263997512436) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5070813760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.08158054726792975) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9742452661116443) _gate_q_0;
  ry(-1.9742452661116443) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.08158054726792975) _gate_q_1;
}
gate xx_minus_yy_5070802624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.14647299251463) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1938879758295196) _gate_q_0;
  ry(-2.1938879758295196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.14647299251463) _gate_q_1;
}
gate rzz_5070814192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.528334372965092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  cu1_5072118624(5.731800907707117) _gate_q_7, _gate_q_0;
  y _gate_q_8;
  x _gate_q_2;
  tdg _gate_q_6;
  x _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  h _gate_q_4;
  id _gate_q_6;
  dcx _gate_q_2, _gate_q_5;
  z _gate_q_1;
  z _gate_q_4;
  x _gate_q_3;
  r_5072113488(5.338637967965046, 4.869226999579199) _gate_q_0;
  u2(0.24580364195407547, 2.1309629818949993) _gate_q_8;
  sdg _gate_q_7;
  cry(4.286680152449598) _gate_q_6, _gate_q_7;
  cy _gate_q_5, _gate_q_1;
  r_5072118384(2.9233124850726577, 1.8355843822928763) _gate_q_2;
  rxx_5072121456(5.631005286601931) _gate_q_8, _gate_q_0;
  csx _gate_q_3, _gate_q_4;
  u2(1.9851828958191748, 5.389953740211251) _gate_q_8;
  rz(5.953133121952032) _gate_q_1;
  r_5072114064(5.313467491526782, 0.9003447667202786) _gate_q_7;
  u2(3.785006359758079, 0.9046207331709606) _gate_q_6;
  cry(5.198541002702349) _gate_q_4, _gate_q_2;
  id _gate_q_5;
  xx_minus_yy_5072122464(0.4158424643210678, 2.0663128632097307) _gate_q_0, _gate_q_3;
  cu1_5072116080(1.083590965903457) _gate_q_5, _gate_q_3;
  s _gate_q_7;
  r_5072113008(6.090691731333545, 5.680005196365077) _gate_q_6;
  cu1_5070804112(2.706527995024872) _gate_q_8, _gate_q_4;
  t _gate_q_1;
  h _gate_q_2;
  U(2.063662672169731, 5.2638614163905695, 6.042025387694679) _gate_q_0;
  iswap _gate_q_8, _gate_q_0;
  ch _gate_q_5, _gate_q_7;
  cy _gate_q_6, _gate_q_1;
  xx_minus_yy_5070813760(3.9484905322232886, 0.08158054726792975) _gate_q_3, _gate_q_2;
  x _gate_q_4;
  csx _gate_q_3, _gate_q_1;
  y _gate_q_8;
  cry(3.2920197892288927) _gate_q_2, _gate_q_6;
  U(0.3783311042407832, 5.671298778494155, 4.508946741583727) _gate_q_0;
  p(4.632770601688818) _gate_q_5;
  crz(4.029576672679236) _gate_q_4, _gate_q_7;
  u1(2.670203766908558) _gate_q_4;
  xx_minus_yy_5070802624(4.387775951659039, 5.14647299251463) _gate_q_2, _gate_q_1;
  rzz_5070814192(5.528334372965092) _gate_q_6, _gate_q_0;
  ecr _gate_q_5, _gate_q_8;
  t _gate_q_7;
  rz(3.7343213882798407) _gate_q_3;
  cz _gate_q_8, _gate_q_1;
  dcx _gate_q_0, _gate_q_4;
  ecr _gate_q_7, _gate_q_2;
  y _gate_q_3;
  p(2.813812062678041) _gate_q_5;
  tdg _gate_q_6;
}
gate r_5070799120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.184504387328014, 1.1174933806929985, -1.1174933806929985) _gate_q_0;
}
gate rxx_5070809488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.355889769455048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072113440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.090377251762452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070810736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.37079187375879424) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.37079187375879424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.37079187375879424) _gate_q_1;
}
gate ryy_5070802048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.284456568131773) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5070813184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10384006811790629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070801376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2844913613523439) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.032968620917887) _gate_q_0;
  ry(-3.032968620917887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2844913613523439) _gate_q_1;
}
gate r_5070803536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8011737750699184, 3.2120844670685127, -3.2120844670685127) _gate_q_0;
}
gate cu3_5070799408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1620075166795063) _gate_q_0;
  u1(0.514732142905308) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5499275888567603, 0, -2.1620075166795063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5499275888567603, 1.6472753737741983, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5070803200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2386897459315673) _gate_q_0;
  u1(-1.1309687657488723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7835004572637962, 0, -1.2386897459315673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7835004572637962, 2.3696585116804396, 0) _gate_q_1;
}
gate xx_plus_yy_5070810064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.0229310053218015) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.20228923637210372) _gate_q_1;
  ry(-0.20228923637210372) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.0229310053218015) _gate_q_0;
}
gate r_5070800272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.162841721665055, -0.9804562785301986, 0.9804562785301986) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  r_5070799120(3.184504387328014, 2.688289707487895) _gate_q_2;
  y _gate_q_5;
  u3(3.9607606411827816, 3.849617742952821, 5.303439914231147) _gate_q_6;
  rxx_5070809488(4.355889769455048) _gate_q_8, _gate_q_4;
  iswap _gate_q_3, _gate_q_0;
  u1(1.022296152527842) _gate_q_7;
  tdg _gate_q_1;
  rzx_5072113440(6.090377251762452) _gate_q_5, _gate_q_8;
  cu(1.9056905493400695, 5.126583934390727, 5.485183113614134, 1.6037775308154096) _gate_q_2, _gate_q_6;
  cu1_5070810736(0.7415837475175885) _gate_q_7, _gate_q_4;
  ryy_5070802048(5.284456568131773) _gate_q_0, _gate_q_3;
  x _gate_q_1;
  rzx_5070813184(0.10384006811790629) _gate_q_1, _gate_q_4;
  cp(5.043248959420422) _gate_q_6, _gate_q_0;
  sxdg _gate_q_5;
  sx _gate_q_3;
  xx_minus_yy_5070801376(6.065937241835774, 1.2844913613523439) _gate_q_8, _gate_q_7;
  u3(1.747254683417531, 0.6973872850874874, 5.94587921347753) _gate_q_2;
  csx _gate_q_8, _gate_q_6;
  r_5070803536(2.8011737750699184, 4.782880793863409) _gate_q_2;
  sx _gate_q_0;
  u1(3.8888495870627207) _gate_q_4;
  U(3.062500015736252, 2.085205334043651, 5.599504481484456) _gate_q_7;
  cu3_5070799408(3.0998551777135206, 1.6472753737741983, 2.6767396595848143) _gate_q_5, _gate_q_1;
  p(3.3644838347297146) _gate_q_3;
  cry(3.502296888465155) _gate_q_2, _gate_q_5;
  csdg _gate_q_6, _gate_q_4;
  tdg _gate_q_3;
  id _gate_q_7;
  crx(4.4171295309215255) _gate_q_8, _gate_q_0;
  h _gate_q_1;
  cz _gate_q_8, _gate_q_6;
  u1(6.1921497050466074) _gate_q_3;
  cp(1.5849209164977929) _gate_q_0, _gate_q_2;
  y _gate_q_5;
  crx(2.440337736649187) _gate_q_1, _gate_q_4;
  x _gate_q_7;
  cu3_5070803200(1.5670009145275925, 2.3696585116804396, 0.10772098018269503) _gate_q_3, _gate_q_2;
  z _gate_q_7;
  iswap _gate_q_6, _gate_q_5;
  cu(0.8574051933606693, 2.9438191914499603, 1.9272954818279666, 6.182731411055147) _gate_q_0, _gate_q_4;
  crz(3.849022366231083) _gate_q_1, _gate_q_8;
  cy _gate_q_2, _gate_q_8;
  U(0.7492507924692056, 6.258888972233254, 5.325080403775425) _gate_q_4;
  xx_plus_yy_5070810064(0.40457847274420744, 4.0229310053218015) _gate_q_0, _gate_q_3;
  iswap _gate_q_1, _gate_q_6;
  cx _gate_q_7, _gate_q_5;
  crx(4.7856325212451685) _gate_q_1, _gate_q_3;
  crx(3.6231457063170383) _gate_q_0, _gate_q_4;
  sdg _gate_q_8;
  cz _gate_q_5, _gate_q_7;
  U(4.755568153472354, 5.197707774896469, 4.843015068578015) _gate_q_2;
  r_5070800272(4.162841721665055, 0.590340048264698) _gate_q_6;
}