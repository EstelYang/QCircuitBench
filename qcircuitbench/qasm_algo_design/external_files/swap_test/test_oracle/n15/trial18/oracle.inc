gate ryy_5072203232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.899095449090001) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cu3_5072197616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.712230647233348) _gate_q_0;
  u1(1.23398491084875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0851625211202323, 0, -4.712230647233348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0851625211202323, 3.4782457363845976, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5072201984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.086602196813043) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072201120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.36702096720267) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.10653418821967417) _gate_q_0;
  ry(-0.10653418821967417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.36702096720267) _gate_q_1;
}
gate ryy_5072205440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.1275478722052314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072203952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.567527518734839, 4.052339040263802, -4.052339040263802) _gate_q_0;
}
gate ryy_5072195408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5115104120615304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072204000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.14525011575477087, 0.37437855827130107, -0.37437855827130107) _gate_q_0;
}
gate rzz_5072194112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5755092678142015) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072206640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.615936119212239) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072202176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.121854015903552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072206976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7727295663216758) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1714058085029837) _gate_q_0;
  ry(-2.1714058085029837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7727295663216758) _gate_q_1;
}
gate cu1_5072198432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4160402800277763) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4160402800277763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4160402800277763) _gate_q_1;
}
gate ryy_5072205296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4018238421530604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072205968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2002355600450683, 1.1708314595704041, -1.1708314595704041) _gate_q_0;
}
gate rzx_5072196800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7698087479257689) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate rzz_5072203136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9230746764724195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072192336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8483454008444333) _gate_q_0;
  u1(-1.8640259678690665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3188500512271357, 0, -2.8483454008444333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3188500512271357, 4.7123713687135, 0) _gate_q_1;
}
gate ryy_5072191712(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1782321086816636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072199008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1328726179093112) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1328726179093112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1328726179093112) _gate_q_1;
}
gate r_5072197232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.651034242315662, 3.9553895206889216, -3.9553895206889216) _gate_q_0;
}
gate xx_minus_yy_5072197280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.677676052380456) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.738951588074155) _gate_q_0;
  ry(-2.738951588074155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.677676052380456) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  ryy_5072203232(4.899095449090001) _gate_q_12, _gate_q_3;
  id _gate_q_0;
  swap _gate_q_13, _gate_q_11;
  y _gate_q_10;
  ecr _gate_q_6, _gate_q_8;
  U(6.200177636856384, 3.7032981570367856, 0.09209806336051651) _gate_q_5;
  tdg _gate_q_2;
  cu3_5072197616(6.1703250422404645, 3.4782457363845976, 5.9462155580820975) _gate_q_14, _gate_q_7;
  dcx _gate_q_9, _gate_q_1;
  rx(6.0142103532496325) _gate_q_4;
  crx(3.05175614413818) _gate_q_9, _gate_q_3;
  rzx_5072201984(4.086602196813043) _gate_q_11, _gate_q_12;
  p(5.650140481747918) _gate_q_7;
  rz(1.8775445512624405) _gate_q_4;
  rx(5.399288822620963) _gate_q_2;
  iswap _gate_q_1, _gate_q_8;
  xx_minus_yy_5072201120(0.21306837643934834, 4.36702096720267) _gate_q_0, _gate_q_5;
  cry(2.1412458811708186) _gate_q_10, _gate_q_14;
  sdg _gate_q_13;
  y _gate_q_6;
  swap _gate_q_5, _gate_q_12;
  id _gate_q_3;
  sdg _gate_q_7;
  cry(6.013485727204202) _gate_q_4, _gate_q_0;
  u3(3.358633798150933, 0.32125673515019465, 5.1122551905269304) _gate_q_11;
  ryy_5072205440(5.1275478722052314) _gate_q_1, _gate_q_13;
  s _gate_q_14;
  r_5072203952(2.567527518734839, 5.6231353670586985) _gate_q_9;
  rx(5.816090210493738) _gate_q_10;
  id _gate_q_6;
  swap _gate_q_8, _gate_q_2;
  u2(5.29830046245355, 2.6291967679313113) _gate_q_10;
  tdg _gate_q_11;
  ryy_5072195408(1.5115104120615304) _gate_q_1, _gate_q_12;
  r_5072204000(0.14525011575477087, 1.9451748850661976) _gate_q_5;
  u3(3.5296861848638272, 1.4883160241322086, 3.798673537324757) _gate_q_7;
  tdg _gate_q_13;
  s _gate_q_9;
  rx(5.829640606174749) _gate_q_4;
  rzz_5072194112(0.5755092678142015) _gate_q_6, _gate_q_8;
  cu(5.082100207457609, 0.9471639996902518, 0.34943872215206306, 1.1573397074141576) _gate_q_0, _gate_q_3;
  rz(5.082016301456152) _gate_q_14;
  t _gate_q_2;
  u2(2.1143566200886914, 5.64479579919787) _gate_q_0;
  rxx_5072206640(4.615936119212239) _gate_q_3, _gate_q_14;
  cy _gate_q_4, _gate_q_13;
  sdg _gate_q_7;
  u2(4.558384292486226, 4.903774076565569) _gate_q_8;
  cx _gate_q_6, _gate_q_2;
  dcx _gate_q_11, _gate_q_12;
  rzz_5072202176(5.121854015903552) _gate_q_5, _gate_q_9;
  xx_minus_yy_5072206976(4.342811617005967, 2.7727295663216758) _gate_q_1, _gate_q_10;
  cp(3.5309936194171536) _gate_q_11, _gate_q_13;
  cu1_5072198432(0.8320805600555526) _gate_q_8, _gate_q_3;
  ryy_5072205296(2.4018238421530604) _gate_q_0, _gate_q_10;
  s _gate_q_9;
  U(4.216363524764579, 1.4142788682261254, 3.1109103089518175) _gate_q_4;
  tdg _gate_q_12;
  u1(5.915061878515719) _gate_q_6;
  cp(6.271417832358842) _gate_q_1, _gate_q_14;
  r_5072205968(3.2002355600450683, 2.7416277863653007) _gate_q_2;
  h _gate_q_5;
  x _gate_q_7;
  sx _gate_q_2;
  sxdg _gate_q_0;
  cx _gate_q_14, _gate_q_1;
  rzx_5072196800(0.7698087479257689) _gate_q_4, _gate_q_6;
  cz _gate_q_3, _gate_q_11;
  csx _gate_q_13, _gate_q_7;
  rz(2.1166882171497394) _gate_q_5;
  rzz_5072203136(0.9230746764724195) _gate_q_8, _gate_q_10;
  sdg _gate_q_9;
  id _gate_q_12;
  cy _gate_q_2, _gate_q_1;
  u2(6.065556610851785, 5.106455175857538) _gate_q_5;
  cu3_5072192336(2.6377001024542714, 4.7123713687135, 0.984319432975367) _gate_q_12, _gate_q_14;
  u2(3.8012729681974844, 4.528131695186867) _gate_q_7;
  ryy_5072191712(1.1782321086816636) _gate_q_9, _gate_q_3;
  U(5.2613235388953985, 2.770002204987944, 3.7203987853640674) _gate_q_13;
  cu1_5072199008(2.2657452358186223) _gate_q_8, _gate_q_11;
  p(5.878065303141094) _gate_q_4;
  ry(4.124751772173159) _gate_q_10;
  u3(3.5354823152192, 5.363285730688018, 5.93302619867849) _gate_q_6;
  r_5072197232(1.651034242315662, 5.526185847483818) _gate_q_0;
  u2(1.650446642124118, 0.781129514806337) _gate_q_3;
  p(1.6931537194738797) _gate_q_14;
  id _gate_q_1;
  xx_minus_yy_5072197280(5.47790317614831, 1.677676052380456) _gate_q_7, _gate_q_2;
  cs _gate_q_8, _gate_q_11;
  csdg _gate_q_12, _gate_q_10;
  swap _gate_q_4, _gate_q_13;
  crx(5.404068496953684) _gate_q_6, _gate_q_0;
  h _gate_q_9;
  x _gate_q_5;
  swap _gate_q_11, _gate_q_0;
  cx _gate_q_7, _gate_q_9;
  crx(3.3451360965310486) _gate_q_12, _gate_q_10;
  h _gate_q_1;
  swap _gate_q_2, _gate_q_5;
  cs _gate_q_13, _gate_q_14;
  ecr _gate_q_6, _gate_q_8;
  p(5.07832744247199) _gate_q_3;
  u2(5.853097179764037, 0.8166886927228979) _gate_q_4;
}
gate rxx_5043620656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7845069879746895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5068162160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.444981852973452) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5068166624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.8822296912821095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5069432320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.406348344888427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5069426848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2378150402787904) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2378150402787904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2378150402787904) _gate_q_1;
}
gate rzz_5069431648(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9647893209519428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5069432608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29594149470838405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5061636608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.195428608919536) _gate_q_0;
  u1(-1.2541480761340613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0990946860548423, 0, -3.195428608919536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0990946860548423, 4.449576685053597, 0) _gate_q_1;
}
gate xx_plus_yy_5062968096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7426264517759699) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7863716417187239) _gate_q_1;
  ry(-0.7863716417187239) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7426264517759699) _gate_q_0;
}
gate xx_minus_yy_5064324160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7622339860421117) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6328130753628114) _gate_q_0;
  ry(-1.6328130753628114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7622339860421117) _gate_q_1;
}
gate rzz_5064320656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.490889653410398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5062728768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7996757115495732) _gate_q_0;
  u1(0.17050626984581174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7618913337553674, 0, -1.7996757115495732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7618913337553674, 1.6291694417037614, 0) _gate_q_1;
}
gate rzx_5066817952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.105961750277163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5066822416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1304140762631316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5066822464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.983087079996702) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.983087079996702) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.983087079996702) _gate_q_1;
}
gate rzz_5072969968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.790780916276909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072977216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.802018579981056, -0.5659757167773078, 0.5659757167773078) _gate_q_0;
}
gate cu3_5072975632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1118878791199105) _gate_q_0;
  u1(2.900649798429451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0259053158344, 0, -3.1118878791199105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0259053158344, 0.2112380806904593, 0) _gate_q_1;
}
gate rxx_5072972224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8340844890064822) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072974048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.410064985978795) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6440533369375863) _gate_q_0;
  ry(-1.6440533369375863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.410064985978795) _gate_q_1;
}
gate xx_plus_yy_5072966464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1561914230077508) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0760344042810805) _gate_q_1;
  ry(-2.0760344042810805) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1561914230077508) _gate_q_0;
}
gate ryy_5072977408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.222159781272417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072973424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.697899655975962) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0904982028596868) _gate_q_0;
  ry(-1.0904982028596868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.697899655975962) _gate_q_1;
}
gate cu3_5072973184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5197436184435267) _gate_q_0;
  u1(0.6775722034203502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.030055844744428, 0, -2.5197436184435267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.030055844744428, 1.8421714150231767, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sx _gate_q_3;
  p(5.364800869243642) _gate_q_7;
  rz(5.658962230599246) _gate_q_2;
  tdg _gate_q_6;
  crx(4.343581288549183) _gate_q_0, _gate_q_13;
  cp(2.7307008734263323) _gate_q_1, _gate_q_11;
  rx(1.4689586693031418) _gate_q_8;
  u3(2.994926928853627, 3.1941922432538776, 2.6662396169856386) _gate_q_9;
  rz(2.3402291563297903) _gate_q_10;
  rxx_5043620656(3.7845069879746895) _gate_q_4, _gate_q_5;
  rxx_5068162160(5.444981852973452) _gate_q_14, _gate_q_12;
  t _gate_q_2;
  s _gate_q_9;
  id _gate_q_7;
  p(1.4505750725182125) _gate_q_13;
  iswap _gate_q_1, _gate_q_3;
  csx _gate_q_5, _gate_q_11;
  u2(4.307267136033612, 2.871139252754749) _gate_q_4;
  cp(0.9101303568703348) _gate_q_6, _gate_q_14;
  rzx_5068166624(5.8822296912821095) _gate_q_12, _gate_q_10;
  rxx_5069432320(4.406348344888427) _gate_q_8, _gate_q_0;
  u3(1.3459846657540295, 4.836687425292466, 4.427717852115183) _gate_q_8;
  ry(2.1218123151660744) _gate_q_7;
  csx _gate_q_13, _gate_q_6;
  cu1_5069426848(2.475630080557581) _gate_q_5, _gate_q_11;
  rzz_5069431648(0.9647893209519428) _gate_q_10, _gate_q_14;
  ryy_5069432608(0.29594149470838405) _gate_q_1, _gate_q_9;
  id _gate_q_12;
  s _gate_q_4;
  csdg _gate_q_3, _gate_q_2;
  U(5.436178012655034, 1.0724849072042044, 0.6181764183053499) _gate_q_0;
  sxdg _gate_q_4;
  cu3_5061636608(6.198189372109685, 4.449576685053597, 1.9412805327854747) _gate_q_0, _gate_q_5;
  z _gate_q_7;
  crx(2.8761524240696055) _gate_q_10, _gate_q_9;
  cy _gate_q_2, _gate_q_14;
  xx_plus_yy_5062968096(1.5727432834374477, 0.7426264517759699) _gate_q_13, _gate_q_11;
  csx _gate_q_8, _gate_q_3;
  s _gate_q_6;
  h _gate_q_12;
  y _gate_q_1;
  xx_minus_yy_5064324160(3.265626150725623, 3.7622339860421117) _gate_q_5, _gate_q_4;
  dcx _gate_q_1, _gate_q_10;
  rzz_5064320656(5.490889653410398) _gate_q_0, _gate_q_6;
  cu3_5062728768(3.523782667510735, 1.6291694417037614, 1.970181981395385) _gate_q_7, _gate_q_2;
  cs _gate_q_3, _gate_q_11;
  h _gate_q_9;
  rzx_5066817952(6.105961750277163) _gate_q_8, _gate_q_14;
  id _gate_q_12;
  sx _gate_q_13;
  rzx_5066822416(1.1304140762631316) _gate_q_12, _gate_q_5;
  cu1_5066822464(1.966174159993404) _gate_q_6, _gate_q_1;
  x _gate_q_7;
  rzz_5072969968(5.790780916276909) _gate_q_4, _gate_q_10;
  rz(0.7093326988941516) _gate_q_2;
  x _gate_q_13;
  sdg _gate_q_11;
  crz(2.0200849506379672) _gate_q_0, _gate_q_8;
  swap _gate_q_9, _gate_q_14;
  y _gate_q_3;
  ch _gate_q_0, _gate_q_8;
  t _gate_q_4;
  p(0.5572509878013038) _gate_q_3;
  swap _gate_q_1, _gate_q_11;
  rz(4.876759073847377) _gate_q_9;
  tdg _gate_q_7;
  u1(3.900397049074553) _gate_q_2;
  crx(5.720345264463945) _gate_q_6, _gate_q_5;
  p(2.3540634238972493) _gate_q_13;
  cx _gate_q_12, _gate_q_10;
  r_5072977216(3.802018579981056, 1.0048206100175887) _gate_q_14;
  ecr _gate_q_10, _gate_q_0;
  cx _gate_q_13, _gate_q_2;
  cu(3.109242350817515, 5.200030490659302, 2.858588210441159, 0.8726933092635719) _gate_q_12, _gate_q_1;
  dcx _gate_q_8, _gate_q_14;
  s _gate_q_3;
  u2(4.8147205603929075, 3.1641388200062344) _gate_q_7;
  cp(3.557093952216659) _gate_q_6, _gate_q_4;
  cu3_5072975632(6.0518106316688, 0.2112380806904593, 6.0125376775493615) _gate_q_11, _gate_q_5;
  z _gate_q_9;
  rxx_5072972224(3.8340844890064822) _gate_q_0, _gate_q_13;
  xx_minus_yy_5072974048(3.2881066738751725, 5.410064985978795) _gate_q_1, _gate_q_11;
  u1(3.8548836771423387) _gate_q_12;
  p(4.491434769246896) _gate_q_5;
  cs _gate_q_4, _gate_q_6;
  h _gate_q_9;
  swap _gate_q_10, _gate_q_14;
  z _gate_q_7;
  xx_plus_yy_5072966464(4.152068808562161, 1.1561914230077508) _gate_q_2, _gate_q_8;
  ry(3.8545892015527934) _gate_q_3;
  ryy_5072977408(2.222159781272417) _gate_q_3, _gate_q_4;
  csx _gate_q_2, _gate_q_0;
  xx_minus_yy_5072973424(2.1809964057193736, 5.697899655975962) _gate_q_10, _gate_q_8;
  cy _gate_q_7, _gate_q_6;
  p(5.198117518133044) _gate_q_13;
  p(3.7264196534689478) _gate_q_9;
  crx(4.134724357232604) _gate_q_14, _gate_q_12;
  rx(1.2832506438170894) _gate_q_1;
  cu3_5072973184(6.060111689488856, 1.8421714150231767, 3.197315821863877) _gate_q_5, _gate_q_11;
}