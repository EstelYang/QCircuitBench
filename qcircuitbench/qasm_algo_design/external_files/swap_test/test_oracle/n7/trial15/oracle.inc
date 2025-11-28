gate cu1_5072197040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7930372995622708) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7930372995622708) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7930372995622708) _gate_q_1;
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
gate r_5072196416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.034220441984095, 4.277782381678743, -4.277782381678743) _gate_q_0;
}
gate cu1_5072193392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9346801856210775) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9346801856210775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9346801856210775) _gate_q_1;
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
gate r_5072200256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1829982651254738, 4.319107247251394, -4.319107247251394) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  u3(0.4431026198440021, 2.3788500007465876, 3.0369284375324836) _gate_q_0;
  y _gate_q_3;
  sx _gate_q_2;
  u3(0.7152034085159534, 4.590311255568523, 3.8697166053937706) _gate_q_1;
  x _gate_q_4;
  crz(5.092501069981388) _gate_q_5, _gate_q_6;
  rz(1.4163162395365814) _gate_q_0;
  cu1_5072197040(3.5860745991245415) _gate_q_4, _gate_q_5;
  p(3.346769730495042) _gate_q_2;
  ecr _gate_q_3, _gate_q_6;
  h _gate_q_1;
  cp(3.323175815418714) _gate_q_1, _gate_q_4;
  s _gate_q_5;
  u2(1.6107222439058628, 4.17618424118402) _gate_q_3;
  r_5072196416(2.034220441984095, 5.84857870847364) _gate_q_6;
  y _gate_q_2;
  id _gate_q_0;
  cu1_5072193392(1.869360371242155) _gate_q_4, _gate_q_2;
  ecr _gate_q_0, _gate_q_5;
  y _gate_q_1;
  t _gate_q_3;
  ry(0.7036582942001882) _gate_q_6;
  crx(1.0916226571992058) _gate_q_5, _gate_q_2;
  cz _gate_q_1, _gate_q_0;
  csx _gate_q_3, _gate_q_6;
  r_5072200256(1.1829982651254738, 5.889903574046291) _gate_q_4;
  t _gate_q_3;
  tdg _gate_q_0;
  cp(5.589063888526266) _gate_q_4, _gate_q_1;
  x _gate_q_6;
  crx(1.5172324720695294) _gate_q_5, _gate_q_2;
  cy _gate_q_6, _gate_q_2;
  cx _gate_q_1, _gate_q_4;
  crx(3.0007466800266145) _gate_q_0, _gate_q_3;
  U(3.3892625899021884, 0.8815994841140281, 0.606188013954391) _gate_q_5;
}
gate cu3_5072455632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3781600267204386) _gate_q_0;
  u1(-2.20338725479954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.671722917832566, 0, -2.3781600267204386) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.671722917832566, 4.5815472815199785, 0) _gate_q_1;
}
gate cu1_5072455920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1649096151373852) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1649096151373852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1649096151373852) _gate_q_1;
}
gate r_5072456016(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.301711056441442, -1.5223514888153817, 1.5223514888153817) _gate_q_0;
}
gate rxx_5072455968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4288697595220559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072456208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6430927033582314) _gate_q_0;
  u1(-0.3752098983055374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0113965232484015, 0, -2.6430927033582314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0113965232484015, 3.018302601663769, 0) _gate_q_1;
}
gate rzx_5072453712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7278854501813347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5072453760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8149395285949645, 4.2158029147069165, -4.2158029147069165) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cy _gate_q_6, _gate_q_0;
  z _gate_q_3;
  cu3_5072455632(3.343445835665132, 4.5815472815199785, 0.17477277192089827) _gate_q_4, _gate_q_5;
  ry(4.143232767745325) _gate_q_2;
  rx(0.6529510784863786) _gate_q_1;
  cp(3.0030369326808177) _gate_q_5, _gate_q_4;
  z _gate_q_2;
  cu1_5072455920(4.3298192302747704) _gate_q_6, _gate_q_3;
  r_5072456016(5.301711056441442, 0.04844483797951485) _gate_q_0;
  p(4.619295386183577) _gate_q_1;
  rxx_5072455968(0.4288697595220559) _gate_q_1, _gate_q_6;
  h _gate_q_5;
  ry(2.5419117189593847) _gate_q_2;
  cu3_5072456208(4.022793046496803, 3.018302601663769, 2.267882805052694) _gate_q_4, _gate_q_3;
  sdg _gate_q_0;
  p(3.7045154933923627) _gate_q_6;
  rx(2.027170044954663) _gate_q_4;
  U(5.042506066993276, 2.736052529556636, 4.219467366997936) _gate_q_3;
  rz(4.357455838153349) _gate_q_0;
  ecr _gate_q_1, _gate_q_2;
  x _gate_q_5;
  cp(6.062258880491352) _gate_q_0, _gate_q_2;
  cy _gate_q_1, _gate_q_6;
  swap _gate_q_3, _gate_q_4;
  x _gate_q_5;
  rzx_5072453712(0.7278854501813347) _gate_q_5, _gate_q_6;
  ecr _gate_q_1, _gate_q_4;
  sxdg _gate_q_3;
  r_5072453760(3.8149395285949645, 5.786599241501813) _gate_q_0;
  sxdg _gate_q_2;
  rx(3.2954888611355226) _gate_q_2;
  cs _gate_q_5, _gate_q_3;
  rz(6.0007712679316585) _gate_q_6;
  csx _gate_q_4, _gate_q_0;
  u2(3.3811218614455667, 4.26068546067753) _gate_q_1;
}