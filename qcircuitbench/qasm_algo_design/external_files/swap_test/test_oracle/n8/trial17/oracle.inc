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
gate cu3_5072769904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8677858942731722) _gate_q_0;
  u1(0.3679339564537052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.05242477635978, 0, -1.8677858942731722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.05242477635978, 1.499851937819467, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5072765488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.685584904581528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072770240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.222056174455581) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2738390841262897) _gate_q_0;
  ry(-2.2738390841262897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.222056174455581) _gate_q_1;
}
gate ryy_5072768752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8027722099676091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072765680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4765348966009113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072768320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2176765299657815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  dcx _gate_q_0, _gate_q_1;
  dcx _gate_q_7, _gate_q_3;
  iswap _gate_q_4, _gate_q_2;
  cry(5.387011117799285) _gate_q_5, _gate_q_6;
  cu3_5072769904(2.10484955271956, 1.499851937819467, 2.2357198507268774) _gate_q_4, _gate_q_0;
  ch _gate_q_2, _gate_q_5;
  swap _gate_q_7, _gate_q_3;
  cu(3.1943278725919444, 0.8436221703140862, 2.531566935395703, 4.7859842999739755) _gate_q_1, _gate_q_6;
  U(2.3910490937574456, 2.833128499266171, 5.401005377011396) _gate_q_4;
  cs _gate_q_0, _gate_q_1;
  iswap _gate_q_6, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  u3(1.3130585941275, 3.4606486494470277, 2.953650662889535) _gate_q_7;
  x _gate_q_7;
  cu(4.5720440901488635, 3.12453558613629, 4.835920129499461, 1.4875762578455984) _gate_q_3, _gate_q_1;
  ch _gate_q_2, _gate_q_4;
  crz(3.5546835446589458) _gate_q_0, _gate_q_5;
  u2(1.4715604423906505, 1.3472895813590895) _gate_q_6;
  sx _gate_q_3;
  rxx_5072765488(4.685584904581528) _gate_q_1, _gate_q_5;
  cp(5.38500488017666) _gate_q_2, _gate_q_4;
  U(1.5193356858654108, 0.26600167188228374, 1.1011659046534616) _gate_q_0;
  cx _gate_q_6, _gate_q_7;
  xx_minus_yy_5072770240(4.547678168252579, 6.222056174455581) _gate_q_4, _gate_q_2;
  ryy_5072768752(1.8027722099676091) _gate_q_7, _gate_q_6;
  ryy_5072765680(1.4765348966009113) _gate_q_1, _gate_q_5;
  ch _gate_q_0, _gate_q_3;
  t _gate_q_2;
  sx _gate_q_7;
  dcx _gate_q_3, _gate_q_4;
  sxdg _gate_q_0;
  rz(5.9678675307327484) _gate_q_1;
  cs _gate_q_6, _gate_q_5;
  rx(5.180260305017072) _gate_q_4;
  rxx_5072768320(6.2176765299657815) _gate_q_7, _gate_q_6;
  csdg _gate_q_0, _gate_q_2;
  crz(3.785001007556548) _gate_q_5, _gate_q_1;
  u2(2.503061741697696, 2.1527358019246705) _gate_q_3;
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
gate r_5072776048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.725672181597392, 0.8835101734565942, -0.8835101734565942) _gate_q_0;
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
gate r_5072781136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1437610920711545, 3.7569393502555197, -3.7569393502555197) _gate_q_0;
}
gate rzz_5072776912(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.018521929944723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072775232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5464968732030364, 1.2202217457670645, -1.2202217457670645) _gate_q_0;
}
gate r_5072770672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.565279676878864, -1.444011157008614, 1.444011157008614) _gate_q_0;
}
gate rxx_5072778352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.676201521038724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072768416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9954883445749347, 1.0829880659033915, -1.0829880659033915) _gate_q_0;
}
gate rzx_5072772352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.733645844766054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072768176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9214976585293344) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9214976585293344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9214976585293344) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  ecr _gate_q_1, _gate_q_5;
  r_5072776048(5.725672181597392, 2.4543065002514908) _gate_q_0;
  y _gate_q_4;
  csx _gate_q_6, _gate_q_3;
  r_5072781136(1.1437610920711545, 5.327735677050416) _gate_q_7;
  z _gate_q_2;
  y _gate_q_2;
  rzz_5072776912(4.018521929944723) _gate_q_5, _gate_q_4;
  rz(4.741817757787136) _gate_q_3;
  iswap _gate_q_6, _gate_q_1;
  ch _gate_q_0, _gate_q_7;
  r_5072775232(3.5464968732030364, 2.791018072561961) _gate_q_4;
  sxdg _gate_q_0;
  r_5072770672(3.565279676878864, 0.12678516978628251) _gate_q_3;
  crx(2.1176975254668533) _gate_q_6, _gate_q_1;
  ecr _gate_q_2, _gate_q_7;
  ry(2.4330348291657575) _gate_q_5;
  id _gate_q_5;
  cy _gate_q_7, _gate_q_6;
  rz(2.9196689221564713) _gate_q_2;
  t _gate_q_1;
  rz(1.3698362486375775) _gate_q_4;
  ry(3.1337738826904205) _gate_q_3;
  z _gate_q_0;
  rxx_5072778352(3.676201521038724) _gate_q_0, _gate_q_5;
  z _gate_q_2;
  ry(0.03523534442243) _gate_q_1;
  cp(3.213118844547845) _gate_q_3, _gate_q_4;
  rz(3.296777802909933) _gate_q_7;
  rz(4.433289906082005) _gate_q_6;
  r_5072768416(3.9954883445749347, 2.653784392698288) _gate_q_2;
  cs _gate_q_3, _gate_q_1;
  ecr _gate_q_7, _gate_q_0;
  cu(2.521958672686433, 4.225990043825821, 1.7946267852959956, 5.167196394310718) _gate_q_4, _gate_q_5;
  x _gate_q_6;
  tdg _gate_q_0;
  cp(1.334017654698224) _gate_q_6, _gate_q_3;
  rzx_5072772352(3.733645844766054) _gate_q_2, _gate_q_4;
  p(0.7682220154923317) _gate_q_7;
  iswap _gate_q_5, _gate_q_1;
  cu1_5072768176(3.842995317058669) _gate_q_3, _gate_q_5;
  h _gate_q_7;
  ecr _gate_q_4, _gate_q_1;
  iswap _gate_q_0, _gate_q_6;
  sx _gate_q_2;
}