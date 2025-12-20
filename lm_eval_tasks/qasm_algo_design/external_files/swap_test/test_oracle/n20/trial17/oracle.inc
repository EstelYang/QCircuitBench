gate cu3_5073923504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8796634221460042) _gate_q_0;
  u1(1.365081001336973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4643358011677499, 0, -3.8796634221460042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4643358011677499, 2.5145824208090315, 0) _gate_q_1;
}
gate rzx_5073921200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1012421605837637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5073926192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.791038314243981) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073917744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.10800993686541) _gate_q_0;
  u1(1.8555697209308193) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9006674136674466, 0, -2.10800993686541) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9006674136674466, 0.25244021593459093, 0) _gate_q_1;
}
gate rzx_5073913808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.281796225844989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5073924560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.382719060877157, 4.357234513106324, -4.357234513106324) _gate_q_0;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5073912416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.042480640524038354) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3228043039089144) _gate_q_1;
  ry(-0.3228043039089144) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.042480640524038354) _gate_q_0;
}
gate r_5073925760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.892418237952887, 0.8876716613921918, -0.8876716613921918) _gate_q_0;
}
gate xx_plus_yy_5073923744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6875390780433234) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09970453579009333) _gate_q_1;
  ry(-0.09970453579009333) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6875390780433234) _gate_q_0;
}
gate r_5073912752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.741996481486526, 3.846057772269578, -3.846057772269578) _gate_q_0;
}
gate ryy_5073926048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0036996612901743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5073927488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7272770990907, 2.6807759888574836, -2.6807759888574836) _gate_q_0;
}
gate r_5073926864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7781309174618842, 2.9389475976377293, -2.9389475976377293) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5073922448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.07744030385588) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.32088031060435207) _gate_q_1;
  ry(-0.32088031060435207) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.07744030385588) _gate_q_0;
}
gate cu3_5073915104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6016772873919374) _gate_q_0;
  u1(2.122800553415245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3631847963060033, 0, -3.6016772873919374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3631847963060033, 1.4788767339766924, 0) _gate_q_1;
}
gate rxx_5073923648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8913738765220092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073917072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5138890955667192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073918704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1305380957009277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5073920096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9415580040049684) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9415580040049684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9415580040049684) _gate_q_1;
}
gate cu3_5073922784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9064479663399028) _gate_q_0;
  u1(-2.6668917763499196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6331304007928776, 0, -2.9064479663399028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6331304007928776, 5.573339742689822, 0) _gate_q_1;
}
gate xx_plus_yy_5073922016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2176135107477393) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.69468019627521) _gate_q_1;
  ry(-2.69468019627521) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2176135107477393) _gate_q_0;
}
gate rzz_5073924944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.383666685185457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073922976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5809394956717376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5073920480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2942806839080057) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5073915392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8440866342744576, -0.8039722211397436, 0.8039722211397436) _gate_q_0;
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
gate r_5073914432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.2123267594640604, 3.992689885067504, -3.992689885067504) _gate_q_0;
}
gate xx_plus_yy_5073921440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0229550662131677) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4933564940895705) _gate_q_1;
  ry(-2.4933564940895705) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0229550662131677) _gate_q_0;
}
gate xx_plus_yy_5073913040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2854282063180678) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2462610725173713) _gate_q_1;
  ry(-2.2462610725173713) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2854282063180678) _gate_q_0;
}
gate ryy_5073912848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.141972865608459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5073920720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.692190620618903) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.692190620618903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.692190620618903) _gate_q_1;
}
gate r_5073917312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.82815586782681, -1.0822449658010032, 1.0822449658010032) _gate_q_0;
}
gate cu3_5073917504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.6574859707709475) _gate_q_0;
  u1(0.1857476437847656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0460265845563477, 0, -5.6574859707709475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0460265845563477, 5.4717383269861815, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cu3_5073923504(2.9286716023354997, 2.5145824208090315, 5.244744423482977) _gate_q_2, _gate_q_6;
  id _gate_q_14;
  cp(4.726526764197671) _gate_q_10, _gate_q_0;
  rzx_5073921200(1.1012421605837637) _gate_q_15, _gate_q_11;
  cp(4.135634932226414) _gate_q_19, _gate_q_9;
  z _gate_q_8;
  ryy_5073926192(5.791038314243981) _gate_q_4, _gate_q_12;
  u1(3.5121672279852625) _gate_q_1;
  cu3_5073917744(3.8013348273348933, 0.25244021593459093, 3.9635796577962297) _gate_q_5, _gate_q_17;
  rx(0.8040650509707882) _gate_q_18;
  crz(0.1962439624995269) _gate_q_16, _gate_q_7;
  cz _gate_q_3, _gate_q_13;
  cry(2.9800249898663114) _gate_q_6, _gate_q_7;
  u2(4.050579075077907, 6.2279046111222085) _gate_q_10;
  rzx_5073913808(5.281796225844989) _gate_q_12, _gate_q_2;
  r_5073924560(4.382719060877157, 5.92803083990122) _gate_q_19;
  cy _gate_q_13, _gate_q_5;
  h _gate_q_8;
  csdg _gate_q_15, _gate_q_11;
  crx(4.984508547736593) _gate_q_1, _gate_q_17;
  u3(2.1181968334374597, 0.16917238297588488, 4.388281431199935) _gate_q_16;
  sxdg _gate_q_18;
  rz(5.685393172294381) _gate_q_3;
  crx(4.553183174692283) _gate_q_9, _gate_q_14;
  ry(6.274948094586847) _gate_q_4;
  s _gate_q_0;
  dcx _gate_q_9, _gate_q_15;
  xx_plus_yy_5073912416(0.6456086078178288, 0.042480640524038354) _gate_q_10, _gate_q_4;
  r_5073925760(3.892418237952887, 2.4584679881870883) _gate_q_17;
  swap _gate_q_19, _gate_q_7;
  t _gate_q_2;
  U(0.27288476204295936, 0.15720586191197594, 2.7570897672089925) _gate_q_12;
  cp(2.9045432273583707) _gate_q_8, _gate_q_14;
  x _gate_q_3;
  xx_plus_yy_5073923744(0.19940907158018667, 0.6875390780433234) _gate_q_1, _gate_q_5;
  t _gate_q_18;
  z _gate_q_16;
  sxdg _gate_q_13;
  sdg _gate_q_0;
  id _gate_q_6;
  tdg _gate_q_11;
  crz(2.343555629845762) _gate_q_6, _gate_q_9;
  ch _gate_q_10, _gate_q_15;
  r_5073912752(4.741996481486526, 5.416854099064475) _gate_q_7;
  ryy_5073926048(3.0036996612901743) _gate_q_17, _gate_q_0;
  cx _gate_q_3, _gate_q_4;
  rz(3.169677299727805) _gate_q_19;
  r_5073927488(2.7272770990907, 4.25157231565238) _gate_q_13;
  r_5073926864(2.7781309174618842, 4.509743924432626) _gate_q_16;
  cs _gate_q_5, _gate_q_12;
  cu(5.492484082836271, 4.524932249659918, 5.659749966834067, 5.566424062168609) _gate_q_2, _gate_q_14;
  swap _gate_q_1, _gate_q_11;
  swap _gate_q_8, _gate_q_18;
  cx _gate_q_14, _gate_q_13;
  x _gate_q_2;
  ecr _gate_q_9, _gate_q_6;
  iswap _gate_q_8, _gate_q_12;
  x _gate_q_18;
  xx_plus_yy_5073922448(0.6417606212087041, 1.07744030385588) _gate_q_17, _gate_q_15;
  ry(0.7441015685120717) _gate_q_19;
  s _gate_q_10;
  ch _gate_q_0, _gate_q_11;
  cry(3.6431403907651676) _gate_q_3, _gate_q_1;
  swap _gate_q_4, _gate_q_16;
  t _gate_q_5;
  tdg _gate_q_7;
  z _gate_q_7;
  sdg _gate_q_1;
  sxdg _gate_q_5;
  y _gate_q_14;
  h _gate_q_18;
  cu(3.909479030156174, 2.0377830322042336, 4.96196057801468, 2.090437554310744) _gate_q_11, _gate_q_10;
  ecr _gate_q_17, _gate_q_4;
  cu3_5073915104(4.726369592612007, 1.4788767339766924, 5.724477840807182) _gate_q_2, _gate_q_0;
  rxx_5073923648(1.8913738765220092) _gate_q_6, _gate_q_9;
  rzz_5073917072(3.5138890955667192) _gate_q_15, _gate_q_16;
  crz(3.0980630973640784) _gate_q_19, _gate_q_12;
  cx _gate_q_8, _gate_q_3;
  U(5.362490453507132, 5.6125390260652095, 5.105785203503773) _gate_q_13;
  rx(3.2931981724832506) _gate_q_4;
  cy _gate_q_8, _gate_q_18;
  u1(5.825085068865929) _gate_q_6;
  ryy_5073918704(0.1305380957009277) _gate_q_17, _gate_q_10;
  cu1_5073920096(1.8831160080099367) _gate_q_19, _gate_q_11;
  id _gate_q_13;
  tdg _gate_q_1;
  cu3_5073922784(1.2662608015857553, 5.573339742689822, 0.2395561899899829) _gate_q_14, _gate_q_15;
  t _gate_q_9;
  crx(4.84236036032686) _gate_q_2, _gate_q_0;
  u3(4.123126038017132, 1.039999129513186, 1.7731915231798419) _gate_q_3;
  U(6.066058038110837, 0.848298555190158, 1.171059898680265) _gate_q_7;
  rx(4.804097024146122) _gate_q_16;
  xx_plus_yy_5073922016(5.38936039255042, 3.2176135107477393) _gate_q_12, _gate_q_5;
  cs _gate_q_12, _gate_q_13;
  swap _gate_q_11, _gate_q_18;
  ch _gate_q_7, _gate_q_17;
  rzz_5073924944(5.383666685185457) _gate_q_14, _gate_q_16;
  ryy_5073922976(0.5809394956717376) _gate_q_4, _gate_q_1;
  cx _gate_q_2, _gate_q_15;
  rzx_5073920480(1.2942806839080057) _gate_q_5, _gate_q_3;
  t _gate_q_8;
  h _gate_q_19;
  csdg _gate_q_0, _gate_q_9;
  u1(5.413144775351848) _gate_q_6;
  r_5073915392(0.8440866342744576, 0.7668241056551529) _gate_q_10;
  cz _gate_q_8, _gate_q_13;
  sx _gate_q_17;
  x _gate_q_2;
  csx _gate_q_5, _gate_q_4;
  r_5073914432(0.2123267594640604, 5.563486211862401) _gate_q_11;
  h _gate_q_0;
  xx_plus_yy_5073921440(4.986712988179141, 1.0229550662131677) _gate_q_14, _gate_q_19;
  z _gate_q_12;
  y _gate_q_1;
  cy _gate_q_6, _gate_q_15;
  xx_plus_yy_5073913040(4.492522145034743, 0.2854282063180678) _gate_q_16, _gate_q_9;
  ryy_5073912848(3.141972865608459) _gate_q_7, _gate_q_10;
  cz _gate_q_18, _gate_q_3;
  cu1_5073920720(1.384381241237806) _gate_q_8, _gate_q_19;
  cs _gate_q_5, _gate_q_18;
  cx _gate_q_6, _gate_q_14;
  sdg _gate_q_15;
  ch _gate_q_0, _gate_q_9;
  r_5073917312(3.82815586782681, 0.48855136099389335) _gate_q_4;
  tdg _gate_q_16;
  cu3_5073917504(2.0920531691126953, 5.4717383269861815, 5.843233614555713) _gate_q_11, _gate_q_3;
  dcx _gate_q_2, _gate_q_17;
  crz(2.335400045398704) _gate_q_1, _gate_q_7;
  p(5.380215652120409) _gate_q_13;
  tdg _gate_q_12;
  id _gate_q_10;
}
gate r_5073927104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3644008887516215, -0.1984721399958398, 0.1984721399958398) _gate_q_0;
}
gate rxx_5073920288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.404854009286212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5073919088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.120625268130868, 0.05305745621019997, -0.05305745621019997) _gate_q_0;
}
gate rxx_5073916304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.146609130936073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073924464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0515191749318271) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6001711812901243) _gate_q_1;
  ry(-0.6001711812901243) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0515191749318271) _gate_q_0;
}
gate xx_minus_yy_5073912032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.867305663203389) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9981603405133104) _gate_q_0;
  ry(-2.9981603405133104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.867305663203389) _gate_q_1;
}
gate cu3_5073919952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1931140141785876) _gate_q_0;
  u1(-1.1562667940141749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7962210090340138, 0, -2.1931140141785876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7962210090340138, 3.3493808081927625, 0) _gate_q_1;
}
gate rzx_5073927872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0279692810525782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073925232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.401267849174986) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073919232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.727451530509795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5073915728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.380340975947917) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.380340975947917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.380340975947917) _gate_q_1;
}
gate xx_plus_yy_5073928016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0901855243470657) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6552345709293896) _gate_q_1;
  ry(-2.6552345709293896) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0901855243470657) _gate_q_0;
}
gate rzx_5073920864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.301331383371134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5073920192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0307234209134053) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7723248726223046) _gate_q_1;
  ry(-1.7723248726223046) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0307234209134053) _gate_q_0;
}
gate xx_plus_yy_5073914912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.405490003089558) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4423356371447202) _gate_q_1;
  ry(-1.4423356371447202) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.405490003089558) _gate_q_0;
}
gate cu1_5073921008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1135562231217078) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1135562231217078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1135562231217078) _gate_q_1;
}
gate rxx_5073915536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.150223884508047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5073915056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4118544590029816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5073919760(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2901592349014017) _gate_q_0;
  u1(-0.7001789718775155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.33264628707505484, 0, -1.2901592349014017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.33264628707505484, 1.9903382067789173, 0) _gate_q_1;
}
gate r_5073925664(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.540477752584902, 4.579834725814505, -4.579834725814505) _gate_q_0;
}
gate cu1_5073916496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8677995298184108) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8677995298184108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8677995298184108) _gate_q_1;
}
gate xx_minus_yy_5073917264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.005460460497571) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4497934870125141) _gate_q_0;
  ry(-0.4497934870125141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.005460460497571) _gate_q_1;
}
gate xx_plus_yy_5073913136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.250954235959814) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.574254191916496) _gate_q_1;
  ry(-2.574254191916496) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.250954235959814) _gate_q_0;
}
gate xx_minus_yy_5073916736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.184922595363265) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9722109976185462) _gate_q_0;
  ry(-1.9722109976185462) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.184922595363265) _gate_q_1;
}
gate r_5073917552(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.79679120701244, 2.9718931727773006, -2.9718931727773006) _gate_q_0;
}
gate cu3_5069812512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.521098267998429) _gate_q_0;
  u1(1.5946229465868496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0060305061912547, 0, -4.521098267998429) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0060305061912547, 2.926475321411579, 0) _gate_q_1;
}
gate rxx_5069812080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5510163909987859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5069815728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8033310386683208) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5069814096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.545465599639595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5069814528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.6535952947149415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5069815584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5159077193380942) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5159077193380942) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5159077193380942) _gate_q_1;
}
gate xx_minus_yy_5069811504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7626472755596234) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0867033122683851) _gate_q_0;
  ry(-1.0867033122683851) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7626472755596234) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  csx _gate_q_4, _gate_q_5;
  u2(5.663834739181688, 5.541845674222998) _gate_q_18;
  sx _gate_q_8;
  id _gate_q_3;
  dcx _gate_q_15, _gate_q_7;
  U(3.567015044350269, 5.299232501578585, 3.06968636284207) _gate_q_11;
  r_5073927104(3.3644008887516215, 1.3723241867990568) _gate_q_12;
  csx _gate_q_13, _gate_q_2;
  rxx_5073920288(4.404854009286212) _gate_q_14, _gate_q_1;
  r_5073919088(5.120625268130868, 1.6238537830050965) _gate_q_9;
  x _gate_q_19;
  u3(1.8805827521928034, 2.538586926929522, 6.165835671450454) _gate_q_16;
  sxdg _gate_q_0;
  rxx_5073916304(1.146609130936073) _gate_q_6, _gate_q_10;
  sx _gate_q_17;
  csdg _gate_q_18, _gate_q_4;
  u2(0.8226400731969984, 1.583800319916192) _gate_q_13;
  cry(3.724247599894992) _gate_q_5, _gate_q_0;
  sx _gate_q_3;
  h _gate_q_1;
  sdg _gate_q_15;
  sx _gate_q_7;
  s _gate_q_9;
  xx_plus_yy_5073924464(1.2003423625802485, 1.0515191749318271) _gate_q_19, _gate_q_10;
  u3(6.195780759554392, 3.299787006946022, 3.2832955202682106) _gate_q_11;
  rx(4.903989914061979) _gate_q_12;
  cs _gate_q_14, _gate_q_8;
  rx(3.0607524402445456) _gate_q_2;
  u1(0.4211431381155835) _gate_q_6;
  u3(2.427474589882705, 5.302488009633381, 4.792626078732118) _gate_q_16;
  p(3.538158097706375) _gate_q_17;
  xx_minus_yy_5073912032(5.996320681026621, 2.867305663203389) _gate_q_17, _gate_q_0;
  h _gate_q_19;
  u1(0.5946543567876101) _gate_q_1;
  t _gate_q_4;
  t _gate_q_5;
  cu3_5073919952(1.5924420180680277, 3.3493808081927625, 1.0368472201644128) _gate_q_11, _gate_q_15;
  id _gate_q_10;
  ch _gate_q_2, _gate_q_3;
  rzx_5073927872(2.0279692810525782) _gate_q_14, _gate_q_18;
  h _gate_q_7;
  ch _gate_q_9, _gate_q_16;
  y _gate_q_13;
  ch _gate_q_6, _gate_q_8;
  x _gate_q_12;
  u2(1.0944528077033773, 1.589563207971776) _gate_q_0;
  rzx_5073925232(4.401267849174986) _gate_q_13, _gate_q_15;
  csdg _gate_q_1, _gate_q_5;
  p(2.2335514885669263) _gate_q_3;
  iswap _gate_q_4, _gate_q_2;
  cy _gate_q_12, _gate_q_6;
  csx _gate_q_18, _gate_q_17;
  p(0.12418437332453716) _gate_q_9;
  x _gate_q_11;
  rzx_5073919232(4.727451530509795) _gate_q_8, _gate_q_16;
  t _gate_q_19;
  csdg _gate_q_14, _gate_q_10;
  rz(1.3878814298794437) _gate_q_7;
  cu1_5073915728(4.760681951895834) _gate_q_8, _gate_q_9;
  xx_plus_yy_5073928016(5.310469141858779, 3.0901855243470657) _gate_q_2, _gate_q_17;
  cy _gate_q_12, _gate_q_5;
  dcx _gate_q_0, _gate_q_14;
  csx _gate_q_4, _gate_q_3;
  s _gate_q_15;
  rzx_5073920864(2.301331383371134) _gate_q_7, _gate_q_13;
  rx(5.298718859387695) _gate_q_11;
  xx_plus_yy_5073920192(3.5446497452446093, 1.0307234209134053) _gate_q_18, _gate_q_19;
  u2(0.8946124734244296, 1.7765311631469818) _gate_q_6;
  swap _gate_q_16, _gate_q_10;
  sxdg _gate_q_1;
  xx_plus_yy_5073914912(2.8846712742894405, 4.405490003089558) _gate_q_9, _gate_q_18;
  z _gate_q_14;
  cs _gate_q_4, _gate_q_1;
  y _gate_q_5;
  s _gate_q_6;
  id _gate_q_8;
  cu1_5073921008(6.2271124462434155) _gate_q_7, _gate_q_15;
  rxx_5073915536(6.150223884508047) _gate_q_0, _gate_q_19;
  cy _gate_q_3, _gate_q_12;
  ry(3.7251548523402858) _gate_q_17;
  sx _gate_q_10;
  csx _gate_q_16, _gate_q_2;
  rzx_5073915056(1.4118544590029816) _gate_q_13, _gate_q_11;
  cs _gate_q_7, _gate_q_18;
  cy _gate_q_8, _gate_q_3;
  cz _gate_q_1, _gate_q_4;
  swap _gate_q_14, _gate_q_5;
  cu3_5073919760(0.6652925741501097, 1.9903382067789173, 0.5899802630238863) _gate_q_11, _gate_q_15;
  rx(4.88226125587703) _gate_q_16;
  y _gate_q_10;
  id _gate_q_19;
  r_5073925664(3.540477752584902, 6.150631052609402) _gate_q_0;
  iswap _gate_q_13, _gate_q_2;
  cu1_5073916496(1.7355990596368216) _gate_q_6, _gate_q_12;
  xx_minus_yy_5073917264(0.8995869740250282, 5.005460460497571) _gate_q_17, _gate_q_9;
  rz(1.3960947380745043) _gate_q_0;
  cs _gate_q_16, _gate_q_10;
  crx(3.377008266339306) _gate_q_14, _gate_q_9;
  ry(4.470251661629196) _gate_q_17;
  crz(2.504059577768517) _gate_q_4, _gate_q_2;
  xx_plus_yy_5073913136(5.148508383832992, 2.250954235959814) _gate_q_3, _gate_q_11;
  xx_minus_yy_5073916736(3.9444219952370925, 6.184922595363265) _gate_q_15, _gate_q_8;
  tdg _gate_q_5;
  cx _gate_q_18, _gate_q_1;
  crx(5.609773049417235) _gate_q_13, _gate_q_6;
  z _gate_q_12;
  ry(4.23272896095482) _gate_q_7;
  U(6.137470815114095, 0.7531968488540374, 0.9736180529347205) _gate_q_19;
  ry(0.19562808906882687) _gate_q_17;
  cz _gate_q_6, _gate_q_10;
  r_5073917552(2.79679120701244, 4.542689499572197) _gate_q_1;
  p(4.006475748936971) _gate_q_0;
  csx _gate_q_16, _gate_q_18;
  crx(1.7750430289579169) _gate_q_15, _gate_q_9;
  U(0.6363913184529113, 3.274245863558487, 5.083759961850647) _gate_q_14;
  cu3_5069812512(4.012061012382509, 2.926475321411579, 6.115721214585278) _gate_q_13, _gate_q_8;
  p(2.2651198647514597) _gate_q_3;
  u2(4.223476125826792, 3.6805897485450063) _gate_q_2;
  cu(4.036752893168735, 4.898065345958194, 0.9707306343213642, 3.2590267329785414) _gate_q_7, _gate_q_11;
  cx _gate_q_4, _gate_q_12;
  s _gate_q_5;
  sx _gate_q_19;
  rxx_5069812080(0.5510163909987859) _gate_q_3, _gate_q_17;
  rxx_5069815728(0.8033310386683208) _gate_q_12, _gate_q_6;
  rxx_5069814096(5.545465599639595) _gate_q_11, _gate_q_14;
  ryy_5069814528(5.6535952947149415) _gate_q_1, _gate_q_10;
  x _gate_q_9;
  iswap _gate_q_0, _gate_q_15;
  h _gate_q_19;
  u3(0.8214900158976791, 5.414322525136615, 5.245264179643455) _gate_q_18;
  csx _gate_q_4, _gate_q_16;
  cu1_5069815584(1.0318154386761884) _gate_q_8, _gate_q_13;
  ry(3.681573593478196) _gate_q_5;
  xx_minus_yy_5069811504(2.1734066245367702, 2.7626472755596234) _gate_q_7, _gate_q_2;
}