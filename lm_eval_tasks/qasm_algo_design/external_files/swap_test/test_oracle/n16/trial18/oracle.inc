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
gate xx_plus_yy_5072709696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7011085335824305) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.41734615645993556) _gate_q_1;
  ry(-0.41734615645993556) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7011085335824305) _gate_q_0;
}
gate cu1_5072699808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.84911206594077) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.84911206594077) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.84911206594077) _gate_q_1;
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
gate r_5072705808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.431713658815643, 2.15884873421062, -2.15884873421062) _gate_q_0;
}
gate rxx_5072714688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.09021398282394259) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072708544(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.01347082376674462) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.01347082376674462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.01347082376674462) _gate_q_1;
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
gate rzz_5072702160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3575535389497735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072704320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.252848317182829) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8697970740876143) _gate_q_0;
  ry(-0.8697970740876143) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.252848317182829) _gate_q_1;
}
gate xx_plus_yy_5072713968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6014612663846999) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.07171528170900325) _gate_q_1;
  ry(-0.07171528170900325) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6014612663846999) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzz_5072711664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.438166772597253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072712000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3406557339349265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072706480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3994313413613133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072710128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.8158552790968665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072708064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.064794127145917) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3479359324259845) _gate_q_1;
  ry(-1.3479359324259845) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.064794127145917) _gate_q_0;
}
gate cu1_5072705040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9344042879806567) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9344042879806567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9344042879806567) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072702496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8694402829029586) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1197127657985524) _gate_q_1;
  ry(-1.1197127657985524) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8694402829029586) _gate_q_0;
}
gate cu1_5072714880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7274496468331675) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7274496468331675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7274496468331675) _gate_q_1;
}
gate cu1_5072703744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4752597320601488) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4752597320601488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4752597320601488) _gate_q_1;
}
gate cu1_5072713008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5237246239756108) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5237246239756108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5237246239756108) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5072704896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6939842516347726, 1.0699600859138387, -1.0699600859138387) _gate_q_0;
}
gate xx_plus_yy_5072705664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.508462359644281) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.319417508690351) _gate_q_1;
  ry(-1.319417508690351) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.508462359644281) _gate_q_0;
}
gate rzx_5072701488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7213360788951364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072708976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1584722891356414) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.206188811865605) _gate_q_1;
  ry(-2.206188811865605) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1584722891356414) _gate_q_0;
}
gate xx_minus_yy_5072704128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0707900752672748) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.446979128444148) _gate_q_0;
  ry(-2.446979128444148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0707900752672748) _gate_q_1;
}
gate rxx_5072714160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0233491735979925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072701440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2815371734369316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072705904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.28464704112458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  rx(2.1577022664100567) _gate_q_6;
  cs _gate_q_2, _gate_q_15;
  rx(3.6674571750249987) _gate_q_10;
  cy _gate_q_8, _gate_q_3;
  sxdg _gate_q_13;
  xx_plus_yy_5072709696(0.8346923129198711, 1.7011085335824305) _gate_q_1, _gate_q_4;
  cu1_5072699808(5.69822413188154) _gate_q_7, _gate_q_11;
  sdg _gate_q_0;
  csx _gate_q_5, _gate_q_12;
  u1(6.232273005438312) _gate_q_9;
  r_5072705808(1.431713658815643, 3.7296450610055167) _gate_q_14;
  rxx_5072714688(0.09021398282394259) _gate_q_10, _gate_q_1;
  U(6.0269674588407955, 3.463158598084919, 2.583051780067684) _gate_q_2;
  crz(1.7640019299334389) _gate_q_4, _gate_q_5;
  cu1_5072708544(0.02694164753348924) _gate_q_11, _gate_q_13;
  ecr _gate_q_8, _gate_q_0;
  csx _gate_q_6, _gate_q_14;
  rzz_5072702160(3.3575535389497735) _gate_q_3, _gate_q_9;
  p(3.9118946446471394) _gate_q_15;
  x _gate_q_12;
  u3(3.865600396540192, 5.511155770541566, 5.5222569733069085) _gate_q_7;
  sx _gate_q_4;
  cs _gate_q_9, _gate_q_2;
  cy _gate_q_10, _gate_q_13;
  ecr _gate_q_1, _gate_q_6;
  xx_minus_yy_5072704320(1.7395941481752286, 2.252848317182829) _gate_q_11, _gate_q_5;
  cu(2.2551943355264474, 5.715486535674304, 3.830183881885869, 5.893093056209467) _gate_q_15, _gate_q_3;
  cu(5.557930289632727, 3.7804694019507297, 2.4106382618214623, 6.178126172027231) _gate_q_7, _gate_q_0;
  xx_plus_yy_5072713968(0.1434305634180065, 1.6014612663846999) _gate_q_8, _gate_q_12;
  u1(3.8199809723308897) _gate_q_14;
  cry(4.26036704774983) _gate_q_14, _gate_q_8;
  iswap _gate_q_12, _gate_q_1;
  cy _gate_q_15, _gate_q_6;
  U(1.5148411715534746, 2.969795225471139, 3.439686095808936) _gate_q_2;
  s _gate_q_10;
  u2(2.097292811516677, 6.075042374599766) _gate_q_4;
  id _gate_q_11;
  y _gate_q_7;
  rzz_5072711664(5.438166772597253) _gate_q_9, _gate_q_13;
  ryy_5072712000(1.3406557339349265) _gate_q_3, _gate_q_0;
  rx(5.435691406811671) _gate_q_5;
  z _gate_q_5;
  ryy_5072706480(3.3994313413613133) _gate_q_10, _gate_q_2;
  rzx_5072710128(5.8158552790968665) _gate_q_11, _gate_q_14;
  s _gate_q_9;
  swap _gate_q_15, _gate_q_6;
  ecr _gate_q_4, _gate_q_3;
  u1(5.1909593502056115) _gate_q_0;
  U(2.2745664778341115, 3.859320815431151, 5.903642983634106) _gate_q_1;
  ch _gate_q_12, _gate_q_7;
  crx(3.9450694153919597) _gate_q_8, _gate_q_13;
  cs _gate_q_11, _gate_q_9;
  cx _gate_q_4, _gate_q_2;
  cs _gate_q_3, _gate_q_14;
  U(6.253215987788524, 1.934457375655977, 3.8810238269665893) _gate_q_12;
  xx_plus_yy_5072708064(2.695871864851969, 4.064794127145917) _gate_q_7, _gate_q_0;
  p(4.7213956705932105) _gate_q_13;
  z _gate_q_1;
  cu1_5072705040(3.8688085759613133) _gate_q_15, _gate_q_10;
  sx _gate_q_5;
  dcx _gate_q_6, _gate_q_8;
  xx_plus_yy_5072702496(2.239425531597105, 0.8694402829029586) _gate_q_2, _gate_q_10;
  z _gate_q_3;
  x _gate_q_13;
  id _gate_q_1;
  rz(3.084401756778899) _gate_q_8;
  cz _gate_q_11, _gate_q_4;
  csx _gate_q_12, _gate_q_0;
  cu1_5072714880(5.454899293666335) _gate_q_6, _gate_q_14;
  cs _gate_q_7, _gate_q_15;
  cu1_5072703744(2.9505194641202976) _gate_q_5, _gate_q_9;
  cu1_5072713008(3.0474492479512216) _gate_q_1, _gate_q_0;
  sxdg _gate_q_5;
  csdg _gate_q_4, _gate_q_14;
  csdg _gate_q_11, _gate_q_7;
  r_5072704896(0.6939842516347726, 2.6407564127087353) _gate_q_3;
  xx_plus_yy_5072705664(2.638835017380702, 5.508462359644281) _gate_q_13, _gate_q_9;
  crx(1.1549836420380108) _gate_q_2, _gate_q_6;
  rx(5.745364182527669) _gate_q_15;
  rzx_5072701488(1.7213360788951364) _gate_q_8, _gate_q_12;
  sx _gate_q_10;
  xx_plus_yy_5072708976(4.41237762373121, 3.1584722891356414) _gate_q_2, _gate_q_14;
  ch _gate_q_10, _gate_q_11;
  xx_minus_yy_5072704128(4.893958256888296, 2.0707900752672748) _gate_q_7, _gate_q_1;
  iswap _gate_q_9, _gate_q_8;
  sx _gate_q_5;
  z _gate_q_4;
  cp(5.5768177142272535) _gate_q_15, _gate_q_12;
  h _gate_q_3;
  rxx_5072714160(5.0233491735979925) _gate_q_13, _gate_q_6;
  u2(4.399346507115134, 5.454539013117567) _gate_q_0;
  crx(0.015550661753075214) _gate_q_3, _gate_q_4;
  t _gate_q_8;
  cz _gate_q_15, _gate_q_7;
  u2(2.4127074718146755, 3.720327657868534) _gate_q_9;
  cry(5.24501098501608) _gate_q_2, _gate_q_13;
  U(3.0837668006397334, 4.745928524484077, 3.2338489997504243) _gate_q_11;
  p(0.8404685636863946) _gate_q_0;
  rxx_5072701440(2.2815371734369316) _gate_q_12, _gate_q_14;
  cy _gate_q_10, _gate_q_1;
  rzz_5072705904(3.28464704112458) _gate_q_5, _gate_q_6;
}
gate r_5074970976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.667097062145867, 1.9164873661531039, -1.9164873661531039) _gate_q_0;
}
gate rzx_5074969968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.177889183639128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074972608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.111827667809378) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.665453000312199) _gate_q_1;
  ry(-1.665453000312199) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.111827667809378) _gate_q_0;
}
gate r_5074972896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.579448476126019, -1.5564475717254787, 1.5564475717254787) _gate_q_0;
}
gate cu1_5074976688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6406427297516877) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6406427297516877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6406427297516877) _gate_q_1;
}
gate cu3_5074505024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2863233990723506) _gate_q_0;
  u1(1.5600858110773883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.582130656917415, 0, -3.2863233990723506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.582130656917415, 1.7262375879949623, 0) _gate_q_1;
}
gate rxx_5072774128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.213855137728152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074201600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.334812309154282, 4.300872298733629, -4.300872298733629) _gate_q_0;
}
gate r_5074197088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.14941131981991068, 0.8686057137944845, -0.8686057137944845) _gate_q_0;
}
gate cu3_5074200928(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4575779676979623) _gate_q_0;
  u1(0.808350398818924) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.876016319668759, 0, -1.4575779676979623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.876016319668759, 0.6492275688790384, 0) _gate_q_1;
}
gate cu3_5074201120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9024809255744626) _gate_q_0;
  u1(2.3406910759413146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.361827616628586, 0, -2.9024809255744626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.361827616628586, 0.5617898496331476, 0) _gate_q_1;
}
gate r_5074190608(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.870682998746099, 0.6443535021575846, -0.6443535021575846) _gate_q_0;
}
gate ryy_5074192144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3562403335911197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074195840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.831609917866897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074195456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.39384673353928334) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074195024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8688538123602827) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8976701240903995) _gate_q_0;
  ry(-1.8976701240903995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8688538123602827) _gate_q_1;
}
gate xx_plus_yy_5074204048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.929486055923112) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4617256047673621) _gate_q_1;
  ry(-0.4617256047673621) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.929486055923112) _gate_q_0;
}
gate rzx_5074195744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5485531491501654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074206640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3936145266117383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csdg _gate_q_15, _gate_q_10;
  r_5074970976(1.667097062145867, 3.4872836929480004) _gate_q_0;
  x _gate_q_11;
  cz _gate_q_13, _gate_q_4;
  id _gate_q_7;
  cp(5.952010700686638) _gate_q_1, _gate_q_12;
  rx(0.30544989255933236) _gate_q_3;
  tdg _gate_q_5;
  cy _gate_q_14, _gate_q_2;
  sxdg _gate_q_6;
  p(4.173089890712957) _gate_q_8;
  rz(3.770272105178087) _gate_q_9;
  sdg _gate_q_13;
  U(2.04008566824318, 0.9608208486154858, 1.2687823219045924) _gate_q_11;
  ch _gate_q_12, _gate_q_4;
  ecr _gate_q_8, _gate_q_6;
  cy _gate_q_7, _gate_q_3;
  ecr _gate_q_15, _gate_q_2;
  dcx _gate_q_10, _gate_q_14;
  h _gate_q_1;
  rzx_5074969968(3.177889183639128) _gate_q_5, _gate_q_0;
  id _gate_q_9;
  cp(0.39443159844067094) _gate_q_15, _gate_q_10;
  tdg _gate_q_7;
  csx _gate_q_8, _gate_q_2;
  xx_plus_yy_5074972608(3.330906000624398, 4.111827667809378) _gate_q_12, _gate_q_5;
  iswap _gate_q_1, _gate_q_11;
  sxdg _gate_q_6;
  tdg _gate_q_4;
  cs _gate_q_13, _gate_q_0;
  swap _gate_q_9, _gate_q_14;
  z _gate_q_3;
  r_5074972896(5.579448476126019, 0.014348755069417856) _gate_q_1;
  dcx _gate_q_0, _gate_q_4;
  ch _gate_q_2, _gate_q_7;
  cu1_5074976688(5.281285459503375) _gate_q_3, _gate_q_12;
  ecr _gate_q_13, _gate_q_6;
  cu3_5074505024(3.16426131383483, 1.7262375879949623, 4.846409210149739) _gate_q_15, _gate_q_10;
  rz(5.889431965781331) _gate_q_14;
  rx(0.8455319584120202) _gate_q_9;
  sx _gate_q_8;
  cs _gate_q_11, _gate_q_5;
  h _gate_q_3;
  rxx_5072774128(5.213855137728152) _gate_q_10, _gate_q_7;
  r_5074201600(5.334812309154282, 5.8716686255285255) _gate_q_8;
  csdg _gate_q_11, _gate_q_12;
  u2(0.6526897320150509, 0.8911417398390414) _gate_q_2;
  r_5074197088(0.14941131981991068, 2.439402040589381) _gate_q_1;
  s _gate_q_13;
  swap _gate_q_15, _gate_q_5;
  x _gate_q_0;
  cs _gate_q_4, _gate_q_6;
  z _gate_q_9;
  u1(2.5739043906140973) _gate_q_14;
  cu(2.4365980033702135, 6.024612287686305, 5.847234442045424, 5.686372297832242) _gate_q_4, _gate_q_2;
  y _gate_q_3;
  cu3_5074200928(3.752032639337518, 0.6492275688790384, 2.2659283665168863) _gate_q_0, _gate_q_9;
  sdg _gate_q_13;
  cu3_5074201120(4.723655233257172, 0.5617898496331476, 5.243172001515777) _gate_q_12, _gate_q_6;
  r_5074190608(3.870682998746099, 2.215149828952481) _gate_q_10;
  u1(2.216016584097736) _gate_q_7;
  cy _gate_q_15, _gate_q_1;
  ryy_5074192144(2.3562403335911197) _gate_q_14, _gate_q_5;
  id _gate_q_11;
  x _gate_q_8;
  ecr _gate_q_14, _gate_q_11;
  rx(5.628327192696238) _gate_q_1;
  dcx _gate_q_0, _gate_q_13;
  ecr _gate_q_5, _gate_q_15;
  cs _gate_q_8, _gate_q_9;
  cp(3.78599686356429) _gate_q_6, _gate_q_10;
  sx _gate_q_2;
  cz _gate_q_4, _gate_q_3;
  y _gate_q_7;
  u1(0.9342854321550933) _gate_q_12;
  rzz_5074195840(5.831609917866897) _gate_q_4, _gate_q_3;
  crz(1.5674001041613805) _gate_q_14, _gate_q_9;
  t _gate_q_7;
  rxx_5074195456(0.39384673353928334) _gate_q_13, _gate_q_15;
  s _gate_q_11;
  xx_minus_yy_5074195024(3.795340248180799, 1.8688538123602827) _gate_q_5, _gate_q_12;
  s _gate_q_8;
  cu(0.9800887244498894, 0.5480122641702699, 2.9988732181731383, 0.1047315090403867) _gate_q_10, _gate_q_0;
  dcx _gate_q_6, _gate_q_1;
  rz(5.31653124076167) _gate_q_2;
  csdg _gate_q_0, _gate_q_3;
  h _gate_q_11;
  sx _gate_q_9;
  xx_plus_yy_5074204048(0.9234512095347241, 4.929486055923112) _gate_q_15, _gate_q_12;
  tdg _gate_q_14;
  t _gate_q_8;
  rz(1.1132237706563013) _gate_q_13;
  ecr _gate_q_7, _gate_q_1;
  sdg _gate_q_4;
  h _gate_q_5;
  sdg _gate_q_10;
  u2(5.08326384682452, 5.395531919531507) _gate_q_2;
  sdg _gate_q_6;
  rzx_5074195744(1.5485531491501654) _gate_q_1, _gate_q_11;
  ecr _gate_q_0, _gate_q_8;
  p(5.201304943662665) _gate_q_13;
  cu(3.6447867884830596, 5.089184696259254, 2.3220608780219165, 1.9094100443065147) _gate_q_10, _gate_q_15;
  swap _gate_q_3, _gate_q_2;
  cp(1.4414170828750188) _gate_q_12, _gate_q_6;
  ch _gate_q_5, _gate_q_9;
  rxx_5074206640(1.3936145266117383) _gate_q_14, _gate_q_7;
  tdg _gate_q_4;
}