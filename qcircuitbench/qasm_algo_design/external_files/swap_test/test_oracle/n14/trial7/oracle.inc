gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
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
gate xx_plus_yy_5105585664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7722437503358263) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9199179046233907) _gate_q_1;
  ry(-2.9199179046233907) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7722437503358263) _gate_q_0;
}
gate xx_minus_yy_5105590752(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.495604905965946) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4979528630715915) _gate_q_0;
  ry(-1.4979528630715915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.495604905965946) _gate_q_1;
}
gate rxx_5105587344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.999034771805706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105592192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.947125403943493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_4371195392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_4948473424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ecr _gate_q_0, _gate_q_1 {
  rzx_4371195392(pi/4) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  rzx_4948473424(-pi/4) _gate_q_0, _gate_q_1;
}
gate rzz_5105590416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8957458992840791) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105589552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.707103164987463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105597040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.407646037198042) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.539934410502913) _gate_q_0;
  ry(-2.539934410502913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.407646037198042) _gate_q_1;
}
gate cu1_4948306656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_4948306656(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105587680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.803120534120313) _gate_q_0;
  u1(1.9413175948600108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.006858856186804278, 0, -2.803120534120313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.006858856186804278, 0.8618029392603025, 0) _gate_q_1;
}
gate xx_plus_yy_5105588112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1445407278578816) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.133945281798406) _gate_q_1;
  ry(-1.133945281798406) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1445407278578816) _gate_q_0;
}
gate xx_plus_yy_5105584128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.647704555528245) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5868733873895555) _gate_q_1;
  ry(-1.5868733873895555) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.647704555528245) _gate_q_0;
}
gate cu3_5105587632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.079846018447051) _gate_q_0;
  u1(-0.02290059189085536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8265058226663884, 0, -2.079846018447051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8265058226663884, 2.102746610337906, 0) _gate_q_1;
}
gate xx_minus_yy_5105592768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7033949334030645) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.002462894204777) _gate_q_0;
  ry(-1.002462894204777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7033949334030645) _gate_q_1;
}
gate ryy_5105590320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.479492546156508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105588208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.764090340275527) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.479932685567329) _gate_q_1;
  ry(-1.479932685567329) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.764090340275527) _gate_q_0;
}
gate cu3_5105592864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6539509441054934) _gate_q_0;
  u1(1.9216301283953365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2414574785885395, 0, -2.6539509441054934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2414574785885395, 0.7323208157101568, 0) _gate_q_1;
}
gate xx_plus_yy_5105591520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.83492693949118) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9145286603588465) _gate_q_1;
  ry(-1.9145286603588465) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.83492693949118) _gate_q_0;
}
gate rzz_5105583792(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.14836482186644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  csdg _gate_q_2, _gate_q_0;
  crx(2.1671212765950747) _gate_q_12, _gate_q_8;
  cu(1.013510086301936, 2.1988466981489037, 1.553800039817389, 0.3193734702315593) _gate_q_7, _gate_q_13;
  u1(5.959696430007984) _gate_q_1;
  x _gate_q_6;
  rz(5.701696914454019) _gate_q_10;
  cy _gate_q_4, _gate_q_9;
  t _gate_q_5;
  cs _gate_q_11, _gate_q_3;
  cu(3.2325995687835065, 4.248338241506251, 1.9022639024217392, 4.199131602267306) _gate_q_8, _gate_q_0;
  xx_plus_yy_5105585664(5.8398358092467815, 0.7722437503358263) _gate_q_10, _gate_q_9;
  u3(4.767976164223977, 1.6597456311863794, 2.984541319437046) _gate_q_12;
  cry(1.6176278698820956) _gate_q_3, _gate_q_1;
  rz(0.8283768303441175) _gate_q_13;
  crz(2.945762607085227) _gate_q_6, _gate_q_4;
  t _gate_q_11;
  h _gate_q_2;
  xx_minus_yy_5105590752(2.995905726143183, 5.495604905965946) _gate_q_5, _gate_q_7;
  y _gate_q_11;
  rxx_5105587344(4.999034771805706) _gate_q_3, _gate_q_0;
  rz(6.0282698502629355) _gate_q_4;
  h _gate_q_2;
  z _gate_q_6;
  sdg _gate_q_1;
  ryy_5105592192(5.947125403943493) _gate_q_9, _gate_q_5;
  u1(2.4316050785009082) _gate_q_10;
  tdg _gate_q_12;
  u3(1.122504043971928, 4.5331792463161635, 3.1074500865288526) _gate_q_8;
  ry(2.8213669768772305) _gate_q_7;
  sxdg _gate_q_13;
  tdg _gate_q_10;
  id _gate_q_2;
  swap _gate_q_6, _gate_q_3;
  u3(5.526890973082414, 2.3573426281249668, 6.181411939552934) _gate_q_12;
  swap _gate_q_13, _gate_q_5;
  sdg _gate_q_1;
  cry(1.9523416258838173) _gate_q_8, _gate_q_0;
  cz _gate_q_9, _gate_q_4;
  ry(4.264713303473243) _gate_q_7;
  u1(0.9961476201345361) _gate_q_11;
  rz(6.179898514237055) _gate_q_3;
  ch _gate_q_12, _gate_q_13;
  ecr _gate_q_6, _gate_q_5;
  u2(0.9158967286456606, 1.2664333793171676) _gate_q_9;
  rzz_5105590416(0.8957458992840791) _gate_q_1, _gate_q_8;
  cy _gate_q_7, _gate_q_11;
  cu(2.689391243372398, 1.1648143013204582, 2.7413509351685224, 1.2802933658459248) _gate_q_2, _gate_q_10;
  rzx_5105589552(2.707103164987463) _gate_q_0, _gate_q_4;
  rx(1.0936285834082136) _gate_q_7;
  ecr _gate_q_0, _gate_q_9;
  crz(0.9113920618191561) _gate_q_12, _gate_q_2;
  xx_minus_yy_5105597040(5.079868821005826, 5.407646037198042) _gate_q_6, _gate_q_4;
  s _gate_q_1;
  u2(1.0426457025974738, 4.225562932059751) _gate_q_13;
  csx _gate_q_3, _gate_q_10;
  csdg _gate_q_5, _gate_q_11;
  h _gate_q_8;
  cu3_5105587680(0.013717712373608556, 0.8618029392603025, 4.744438128980324) _gate_q_10, _gate_q_9;
  sx _gate_q_2;
  cs _gate_q_6, _gate_q_0;
  xx_plus_yy_5105588112(2.267890563596812, 2.1445407278578816) _gate_q_11, _gate_q_8;
  xx_plus_yy_5105584128(3.173746774779111, 4.647704555528245) _gate_q_12, _gate_q_5;
  cry(2.9948878507751657) _gate_q_13, _gate_q_7;
  u2(0.5852166003921399, 1.274202289327947) _gate_q_4;
  cz _gate_q_1, _gate_q_3;
  u3(3.6627097772654422, 0.1417895062612103, 2.6081565753896934) _gate_q_1;
  cu3_5105587632(5.653011645332777, 2.102746610337906, 2.0569454265561955) _gate_q_10, _gate_q_3;
  rz(0.26264130164347316) _gate_q_0;
  xx_minus_yy_5105592768(2.004925788409554, 2.7033949334030645) _gate_q_9, _gate_q_13;
  ecr _gate_q_2, _gate_q_8;
  z _gate_q_5;
  rz(0.9159437521115699) _gate_q_4;
  ryy_5105590320(5.479492546156508) _gate_q_12, _gate_q_11;
  cp(6.015873158964163) _gate_q_6, _gate_q_7;
  cy _gate_q_8, _gate_q_10;
  cy _gate_q_5, _gate_q_13;
  xx_plus_yy_5105588208(2.959865371134658, 3.764090340275527) _gate_q_7, _gate_q_4;
  cs _gate_q_6, _gate_q_12;
  cu3_5105592864(4.482914957177079, 0.7323208157101568, 4.57558107250083) _gate_q_11, _gate_q_2;
  cry(3.477835035637653) _gate_q_0, _gate_q_9;
  t _gate_q_3;
  tdg _gate_q_1;
  xx_plus_yy_5105591520(3.829057320717693, 4.83492693949118) _gate_q_1, _gate_q_2;
  rzz_5105583792(6.14836482186644) _gate_q_9, _gate_q_13;
  u1(4.724300707417891) _gate_q_8;
  cu(5.366991766201982, 2.5111037095327937, 5.291669223327314, 1.817909672215702) _gate_q_0, _gate_q_10;
  t _gate_q_5;
  sxdg _gate_q_12;
  u1(1.8115805473340598) _gate_q_6;
  sx _gate_q_4;
  ecr _gate_q_7, _gate_q_3;
  h _gate_q_11;
}
gate rzx_5105592480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.897980709169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105592528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.149787688720422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105598048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1077871978894835) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1077871978894835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1077871978894835) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5105588352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.579304941646034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105584320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5704266966017237) _gate_q_0;
  u1(2.0240036221907993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.607301653155744, 0, -2.5704266966017237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.607301653155744, 0.5464230744109241, 0) _gate_q_1;
}
gate rxx_5105593536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.50161433424668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105588976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2706166267431902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105586720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.097168767517884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105596224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.148037123996509) _gate_q_0;
  u1(-1.881838765341126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9088009719510851, 0, -4.148037123996509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9088009719510851, 6.029875889337634, 0) _gate_q_1;
}
gate cu1_5105587536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8033245128353417) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8033245128353417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8033245128353417) _gate_q_1;
}
gate rxx_5105588016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.593787866219854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105587728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.925465118573933) _gate_q_0;
  u1(0.8583440521017545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.532222037082934, 0, -3.925465118573933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.532222037082934, 3.0671210664721786, 0) _gate_q_1;
}
gate ryy_5105598336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.517904648020031) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  t _gate_q_1;
  cx _gate_q_8, _gate_q_2;
  sx _gate_q_0;
  sx _gate_q_11;
  rz(4.398921157953348) _gate_q_12;
  rzx_5105592480(3.897980709169) _gate_q_6, _gate_q_7;
  s _gate_q_3;
  y _gate_q_13;
  x _gate_q_10;
  cs _gate_q_4, _gate_q_9;
  u3(1.945263335679747, 3.9028865335713188, 1.360209278818827) _gate_q_5;
  t _gate_q_13;
  tdg _gate_q_8;
  swap _gate_q_4, _gate_q_9;
  rx(1.3548525720577436) _gate_q_5;
  tdg _gate_q_6;
  crz(4.860743256159004) _gate_q_7, _gate_q_11;
  csdg _gate_q_12, _gate_q_0;
  cu(3.9451212015809887, 0.7308802340066689, 5.64817401538504, 3.594300332545171) _gate_q_2, _gate_q_3;
  cx _gate_q_1, _gate_q_10;
  cz _gate_q_11, _gate_q_9;
  u1(1.1432917129576905) _gate_q_1;
  t _gate_q_13;
  p(3.727598479345934) _gate_q_3;
  rzx_5105592528(4.149787688720422) _gate_q_12, _gate_q_2;
  h _gate_q_7;
  csdg _gate_q_5, _gate_q_6;
  u3(1.4488688901643851, 5.0048169713238275, 4.239350728106726) _gate_q_4;
  ry(2.7723687318263477) _gate_q_10;
  z _gate_q_8;
  y _gate_q_0;
  rx(5.770317961662028) _gate_q_8;
  cu1_5105598048(2.215574395778967) _gate_q_0, _gate_q_3;
  dcx _gate_q_5, _gate_q_13;
  crx(5.7271007042597954) _gate_q_10, _gate_q_11;
  u3(1.7720936807773096, 4.816178723803354, 3.296772196469633) _gate_q_2;
  sxdg _gate_q_12;
  u1(2.547545634903477) _gate_q_4;
  rzz_5105588352(4.579304941646034) _gate_q_7, _gate_q_1;
  id _gate_q_9;
  rx(6.114238021248357) _gate_q_6;
  cu3_5105584320(3.214603306311488, 0.5464230744109241, 4.594430318792523) _gate_q_3, _gate_q_11;
  rz(0.9218669813973364) _gate_q_13;
  crx(2.251465530867638) _gate_q_0, _gate_q_4;
  ry(1.3173802124358984) _gate_q_6;
  sxdg _gate_q_5;
  rxx_5105593536(4.50161433424668) _gate_q_8, _gate_q_2;
  sx _gate_q_7;
  sx _gate_q_1;
  rzx_5105588976(1.2706166267431902) _gate_q_9, _gate_q_10;
  h _gate_q_12;
  sxdg _gate_q_11;
  csx _gate_q_8, _gate_q_1;
  tdg _gate_q_12;
  rz(1.314503079264501) _gate_q_4;
  dcx _gate_q_7, _gate_q_0;
  sx _gate_q_13;
  ch _gate_q_3, _gate_q_2;
  x _gate_q_6;
  cp(1.0593069627950558) _gate_q_5, _gate_q_10;
  s _gate_q_9;
  ryy_5105586720(4.097168767517884) _gate_q_4, _gate_q_7;
  tdg _gate_q_13;
  U(3.3953829750807043, 6.028586743556041, 0.6904123304632102) _gate_q_9;
  crz(0.44004059309037025) _gate_q_3, _gate_q_12;
  h _gate_q_8;
  cu3_5105596224(1.8176019439021702, 6.029875889337634, 2.2661983586553824) _gate_q_6, _gate_q_1;
  U(1.7305755083538144, 0.7279753586367811, 4.429984576589575) _gate_q_0;
  cu1_5105587536(5.606649025670683) _gate_q_5, _gate_q_11;
  rxx_5105588016(4.593787866219854) _gate_q_2, _gate_q_10;
  ch _gate_q_4, _gate_q_3;
  cz _gate_q_0, _gate_q_8;
  z _gate_q_1;
  csdg _gate_q_7, _gate_q_13;
  cu3_5105587728(5.064444074165868, 3.0671210664721786, 4.783809170675688) _gate_q_6, _gate_q_2;
  swap _gate_q_10, _gate_q_11;
  s _gate_q_5;
  z _gate_q_12;
  sdg _gate_q_9;
  t _gate_q_13;
  U(6.2082419642048965, 2.622178507925608, 4.659922679970757) _gate_q_1;
  U(1.1567110103118432, 5.771209373446789, 3.280754246852928) _gate_q_10;
  z _gate_q_9;
  sdg _gate_q_11;
  ry(5.385491092198929) _gate_q_3;
  cs _gate_q_8, _gate_q_2;
  sxdg _gate_q_5;
  rz(1.1246892362262417) _gate_q_0;
  ryy_5105598336(3.517904648020031) _gate_q_7, _gate_q_4;
  u1(1.2297964349768336) _gate_q_6;
  ry(3.151654524282343) _gate_q_12;
  csdg _gate_q_10, _gate_q_13;
  csdg _gate_q_9, _gate_q_2;
  ry(2.474629531252155) _gate_q_12;
  cz _gate_q_11, _gate_q_7;
  cs _gate_q_8, _gate_q_3;
  csdg _gate_q_4, _gate_q_0;
  csdg _gate_q_5, _gate_q_6;
  u3(1.8970496912172774, 5.098902547424218, 0.9413617712718285) _gate_q_1;
}