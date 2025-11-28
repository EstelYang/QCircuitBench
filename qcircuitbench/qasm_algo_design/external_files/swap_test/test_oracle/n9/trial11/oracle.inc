gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5072116128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.258048239169374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5072119824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8206826460076355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072125296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7072671752350134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072116176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.4596470017404912) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0754209835859263) _gate_q_1;
  ry(-3.0754209835859263) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.4596470017404912) _gate_q_0;
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
gate cu3_5072117040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6907465117937535) _gate_q_0;
  u1(1.44166232196967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6484524420161106, 0, -3.6907465117937535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6484524420161106, 2.2490841898240834, 0) _gate_q_1;
}
gate ryy_5072111712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.476726111916992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5072123712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.9138727212532842) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0360917705600508) _gate_q_1;
  ry(-3.0360917705600508) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.9138727212532842) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  s _gate_q_5;
  cp(5.351135040627436) _gate_q_6, _gate_q_8;
  iswap _gate_q_4, _gate_q_1;
  sdg _gate_q_7;
  cry(1.7419554419545158) _gate_q_0, _gate_q_3;
  t _gate_q_2;
  ecr _gate_q_8, _gate_q_5;
  sx _gate_q_7;
  rz(0.8925955464777858) _gate_q_3;
  cs _gate_q_0, _gate_q_6;
  id _gate_q_1;
  u1(0.03949878743930172) _gate_q_2;
  y _gate_q_4;
  x _gate_q_3;
  iswap _gate_q_8, _gate_q_7;
  x _gate_q_4;
  rz(0.3045259270991182) _gate_q_2;
  u1(4.747060006478487) _gate_q_6;
  ryy_5072116128(6.258048239169374) _gate_q_0, _gate_q_5;
  s _gate_q_1;
  crz(5.3880645391549615) _gate_q_3, _gate_q_1;
  cry(4.123243307225869) _gate_q_6, _gate_q_2;
  rxx_5072119824(4.8206826460076355) _gate_q_7, _gate_q_4;
  rzz_5072125296(0.7072671752350134) _gate_q_8, _gate_q_5;
  s _gate_q_0;
  cy _gate_q_7, _gate_q_4;
  csdg _gate_q_8, _gate_q_5;
  crz(5.8748012756224455) _gate_q_0, _gate_q_2;
  xx_plus_yy_5072116176(6.150841967171853, 2.4596470017404912) _gate_q_3, _gate_q_6;
  sx _gate_q_1;
  csx _gate_q_7, _gate_q_4;
  cry(4.37448037031298) _gate_q_6, _gate_q_1;
  U(0.03605329533729806, 2.8120254285817463, 3.8160919487323954) _gate_q_3;
  crx(0.6827890361606845) _gate_q_5, _gate_q_0;
  ry(2.944556165271998) _gate_q_2;
  x _gate_q_8;
  cu3_5072117040(5.296904884032221, 2.2490841898240834, 5.1324088337634235) _gate_q_3, _gate_q_2;
  y _gate_q_4;
  csdg _gate_q_7, _gate_q_6;
  sxdg _gate_q_5;
  x _gate_q_8;
  ch _gate_q_1, _gate_q_0;
  cu(2.595216479432743, 2.710328387173647, 3.4584465399382704, 2.3498217134409676) _gate_q_2, _gate_q_1;
  csdg _gate_q_6, _gate_q_8;
  h _gate_q_3;
  ryy_5072111712(2.476726111916992) _gate_q_7, _gate_q_0;
  cu(2.362492341064123, 4.54666604011521, 3.515993540663799, 6.147625954326192) _gate_q_4, _gate_q_5;
  sdg _gate_q_5;
  id _gate_q_1;
  ch _gate_q_6, _gate_q_4;
  h _gate_q_7;
  xx_plus_yy_5072123712(6.0721835411201015, 3.9138727212532842) _gate_q_8, _gate_q_3;
  u1(6.0817894768394964) _gate_q_2;
  u3(3.62172427761195, 0.8647059737940123, 3.707540525210338) _gate_q_0;
}
gate xx_minus_yy_5072113344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.639835391542713) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1950319320224698) _gate_q_0;
  ry(-1.1950319320224698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.639835391542713) _gate_q_1;
}
gate cu3_5072125152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.949251979768174) _gate_q_0;
  u1(-1.1446237117897815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9965372142013336, 0, -3.949251979768174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9965372142013336, 5.0938756915579555, 0) _gate_q_1;
}
gate cu1_5072118432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.27941360314721114) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.27941360314721114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.27941360314721114) _gate_q_1;
}
gate r_5072117376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.451146686069341, 3.6425077533564982, -3.6425077533564982) _gate_q_0;
}
gate xx_minus_yy_5072117232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8965533725182813) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7604110807938144) _gate_q_0;
  ry(-0.7604110807938144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8965533725182813) _gate_q_1;
}
gate rzx_5072117136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.647687288219203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072125632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8607968204114098, 3.202555552822707, -3.202555552822707) _gate_q_0;
}
gate rzz_5072115456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7531847182605255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072111376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.47951397938428, -0.14114293227086194, 0.14114293227086194) _gate_q_0;
}
gate rxx_5072121264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.114562233224513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  xx_minus_yy_5072113344(2.3900638640449396, 4.639835391542713) _gate_q_6, _gate_q_1;
  cu3_5072125152(1.9930744284026671, 5.0938756915579555, 2.8046282679783925) _gate_q_7, _gate_q_2;
  z _gate_q_3;
  h _gate_q_4;
  y _gate_q_8;
  ch _gate_q_0, _gate_q_5;
  cry(6.012689900523748) _gate_q_8, _gate_q_7;
  cu1_5072118432(0.5588272062944223) _gate_q_5, _gate_q_4;
  cy _gate_q_1, _gate_q_3;
  t _gate_q_0;
  crx(2.090512507100664) _gate_q_6, _gate_q_2;
  u2(3.2113326918695027, 0.36236276447611854) _gate_q_1;
  r_5072117376(4.451146686069341, 5.213304080151395) _gate_q_8;
  ch _gate_q_3, _gate_q_4;
  crx(2.442188610586369) _gate_q_6, _gate_q_2;
  xx_minus_yy_5072117232(1.5208221615876287, 1.8965533725182813) _gate_q_7, _gate_q_0;
  u2(6.269721565257786, 2.1857872290640827) _gate_q_5;
  x _gate_q_5;
  sx _gate_q_8;
  cp(5.851191853738907) _gate_q_0, _gate_q_7;
  id _gate_q_4;
  rzx_5072117136(4.647687288219203) _gate_q_1, _gate_q_2;
  cs _gate_q_6, _gate_q_3;
  swap _gate_q_4, _gate_q_8;
  u1(1.0013534927782244) _gate_q_5;
  x _gate_q_2;
  t _gate_q_0;
  sdg _gate_q_1;
  cp(2.8020071624515936) _gate_q_7, _gate_q_3;
  sx _gate_q_6;
  csx _gate_q_7, _gate_q_1;
  ch _gate_q_2, _gate_q_8;
  r_5072125632(0.8607968204114098, 4.7733518796176035) _gate_q_5;
  p(4.021886349249257) _gate_q_4;
  cp(4.386899037920498) _gate_q_6, _gate_q_0;
  y _gate_q_3;
  rzz_5072115456(0.7531847182605255) _gate_q_0, _gate_q_1;
  sx _gate_q_8;
  cx _gate_q_2, _gate_q_3;
  p(6.021160477655123) _gate_q_6;
  tdg _gate_q_5;
  tdg _gate_q_7;
  z _gate_q_4;
  tdg _gate_q_0;
  swap _gate_q_5, _gate_q_1;
  p(4.14132596408294) _gate_q_8;
  cx _gate_q_4, _gate_q_7;
  id _gate_q_6;
  sdg _gate_q_3;
  r_5072111376(1.47951397938428, 1.4296533945240346) _gate_q_2;
  rz(3.661917487662734) _gate_q_7;
  sdg _gate_q_8;
  y _gate_q_0;
  rxx_5072121264(6.114562233224513) _gate_q_2, _gate_q_6;
  tdg _gate_q_5;
  p(4.41693350297807) _gate_q_4;
  cu(2.5847469791100237, 3.943504055145907, 3.1171838583246783, 6.107747031487094) _gate_q_3, _gate_q_1;
}