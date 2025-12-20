gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5072773648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.551456951372588) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.471805697325956) _gate_q_1;
  ry(-2.471805697325956) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.551456951372588) _gate_q_0;
}
gate xx_minus_yy_5072781040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.409851776926766) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.346619648188825) _gate_q_0;
  ry(-0.346619648188825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.409851776926766) _gate_q_1;
}
gate rxx_5072773024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.178889646277694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072771584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8865878624121883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072773936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2684711250801284, 2.8864686680198473, -2.8864686680198473) _gate_q_0;
}
gate rzz_5072775136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.046237871918008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5072770576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.765677027275239) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072767456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.793335289894647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072775184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.20183033519663332) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.20183033519663332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.20183033519663332) _gate_q_1;
}
gate ryy_5072776816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8188404372009166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  iswap _gate_q_2, _gate_q_9;
  ry(3.5109497273832666) _gate_q_6;
  cz _gate_q_3, _gate_q_1;
  id _gate_q_7;
  cry(0.5601929134447597) _gate_q_8, _gate_q_0;
  csx _gate_q_4, _gate_q_5;
  z _gate_q_0;
  y _gate_q_8;
  crz(3.477474353140589) _gate_q_5, _gate_q_4;
  crx(3.5656924509606984) _gate_q_1, _gate_q_7;
  t _gate_q_6;
  iswap _gate_q_3, _gate_q_2;
  h _gate_q_9;
  xx_plus_yy_5072773648(4.943611394651912, 4.551456951372588) _gate_q_8, _gate_q_5;
  U(5.145304239208546, 1.0146108034246584, 5.455756277515391) _gate_q_9;
  ry(1.4758529919890673) _gate_q_1;
  xx_minus_yy_5072781040(0.69323929637765, 4.409851776926766) _gate_q_4, _gate_q_0;
  u1(0.4789192491509835) _gate_q_3;
  u2(4.052387657702009, 0.1427405231063608) _gate_q_6;
  u1(3.2968404471297834) _gate_q_2;
  u2(3.6556447796247977, 0.07013829059049662) _gate_q_7;
  sxdg _gate_q_9;
  swap _gate_q_0, _gate_q_1;
  ry(4.349050181294665) _gate_q_7;
  s _gate_q_3;
  iswap _gate_q_4, _gate_q_5;
  rxx_5072773024(6.178889646277694) _gate_q_6, _gate_q_2;
  z _gate_q_8;
  p(1.549480346536209) _gate_q_3;
  ryy_5072771584(0.8865878624121883) _gate_q_0, _gate_q_1;
  s _gate_q_8;
  r_5072773936(2.2684711250801284, 4.457264994814744) _gate_q_5;
  rzz_5072775136(4.046237871918008) _gate_q_4, _gate_q_6;
  dcx _gate_q_2, _gate_q_9;
  u3(1.7883624103378664, 2.6669193100776023, 3.1327429983612345) _gate_q_7;
  tdg _gate_q_4;
  dcx _gate_q_0, _gate_q_6;
  cz _gate_q_2, _gate_q_8;
  u3(0.962859162818737, 2.426870209910429, 3.9495467329852634) _gate_q_9;
  ryy_5072770576(4.765677027275239) _gate_q_3, _gate_q_5;
  rzz_5072767456(5.793335289894647) _gate_q_7, _gate_q_1;
  x _gate_q_1;
  sx _gate_q_9;
  cry(3.0135439098109935) _gate_q_0, _gate_q_3;
  cu1_5072775184(0.40366067039326664) _gate_q_2, _gate_q_6;
  crz(0.7394906869783016) _gate_q_8, _gate_q_4;
  p(2.844710175523171) _gate_q_7;
  sx _gate_q_5;
  z _gate_q_3;
  csx _gate_q_1, _gate_q_7;
  cx _gate_q_2, _gate_q_0;
  sx _gate_q_6;
  cp(0.5862265647439775) _gate_q_8, _gate_q_9;
  swap _gate_q_4, _gate_q_5;
  s _gate_q_0;
  u1(1.5500717401166153) _gate_q_5;
  u3(2.95092639864017, 1.981661028492362, 3.9802843059024124) _gate_q_9;
  id _gate_q_2;
  rz(2.9458188325032433) _gate_q_6;
  rz(2.183626864046052) _gate_q_8;
  h _gate_q_7;
  y _gate_q_1;
  cp(0.22572784193591944) _gate_q_4, _gate_q_3;
  z _gate_q_9;
  crx(2.3537491406390596) _gate_q_0, _gate_q_3;
  ryy_5072776816(3.8188404372009166) _gate_q_2, _gate_q_4;
  id _gate_q_1;
  rz(0.23997573632900784) _gate_q_6;
  h _gate_q_5;
  id _gate_q_8;
  sdg _gate_q_7;
}
gate rzx_5072838944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.678667240202118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072831936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.971646575533442, 2.8156054521485485, -2.8156054521485485) _gate_q_0;
}
gate xx_plus_yy_5072842640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3637892167513035) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.464859844150283) _gate_q_1;
  ry(-2.464859844150283) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3637892167513035) _gate_q_0;
}
gate cu1_5072838416(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.265033586945825) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.265033586945825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.265033586945825) _gate_q_1;
}
gate ryy_5072830832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.0036479481927865) _gate_q_1;
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
gate cu3_5072836784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.380594913462716) _gate_q_0;
  u1(0.49578388458499356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6201705075596617, 0, -5.380594913462716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6201705075596617, 4.884811028877722, 0) _gate_q_1;
}
gate cu1_5072834624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.34388383611757467) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.34388383611757467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.34388383611757467) _gate_q_1;
}
gate cu3_5072846720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2422720640770468) _gate_q_0;
  u1(1.0409106474517438) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4061510386533844, 0, -1.2422720640770468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4061510386533844, 0.20136141662530302, 0) _gate_q_1;
}
gate ryy_5072846672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.812240333967433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072843696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.592727137703456) _gate_q_0;
  u1(-0.32090317702126425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7616208558879063, 0, -4.592727137703456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7616208558879063, 4.91363031472472, 0) _gate_q_1;
}
gate cu1_5072844656(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5484877635532792) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5484877635532792) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5484877635532792) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  rzx_5072838944(5.678667240202118) _gate_q_3, _gate_q_1;
  sxdg _gate_q_2;
  cs _gate_q_8, _gate_q_4;
  id _gate_q_6;
  crz(2.8607471439018437) _gate_q_9, _gate_q_5;
  cz _gate_q_7, _gate_q_0;
  ry(2.7635099578530196) _gate_q_9;
  h _gate_q_6;
  cu(0.7784432152372928, 0.3193996590886761, 2.18163634151451, 5.617575221796206) _gate_q_0, _gate_q_4;
  cs _gate_q_7, _gate_q_1;
  r_5072831936(4.971646575533442, 4.386401778943445) _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  u2(5.9708469900800045, 1.3332367002976437) _gate_q_8;
  y _gate_q_3;
  tdg _gate_q_8;
  U(4.0315332681253855, 2.418109746470241, 2.6695383037805627) _gate_q_2;
  y _gate_q_6;
  csx _gate_q_9, _gate_q_7;
  xx_plus_yy_5072842640(4.929719688300566, 1.3637892167513035) _gate_q_4, _gate_q_0;
  ry(3.247213827605827) _gate_q_1;
  u1(5.5499968829226685) _gate_q_5;
  cu1_5072838416(2.53006717389165) _gate_q_2, _gate_q_1;
  iswap _gate_q_6, _gate_q_9;
  sx _gate_q_5;
  cry(4.770723199146334) _gate_q_8, _gate_q_7;
  u1(3.984478053124345) _gate_q_0;
  sx _gate_q_3;
  p(6.082164523914335) _gate_q_4;
  u2(4.784704489010206, 0.27283616996575416) _gate_q_7;
  u3(4.58654674469311, 2.1324348648512235, 2.795364470281388) _gate_q_4;
  rz(5.346936997459922) _gate_q_1;
  id _gate_q_9;
  ryy_5072830832(5.0036479481927865) _gate_q_3, _gate_q_8;
  z _gate_q_0;
  id _gate_q_2;
  tdg _gate_q_6;
  sxdg _gate_q_5;
  U(3.455393556948005, 5.407739268406639, 2.9948279874752406) _gate_q_0;
  ecr _gate_q_7, _gate_q_6;
  cu3_5072836784(3.2403410151193235, 4.884811028877722, 5.876378798047709) _gate_q_9, _gate_q_1;
  cu1_5072834624(0.6877676722351493) _gate_q_3, _gate_q_5;
  U(4.898272200970008, 1.5025567650995917, 2.2603891559349316) _gate_q_4;
  cu3_5072846720(2.812302077306769, 0.20136141662530302, 2.2831827115287906) _gate_q_2, _gate_q_8;
  ryy_5072846672(5.812240333967433) _gate_q_6, _gate_q_5;
  u2(1.1608731331952653, 4.062015538759375) _gate_q_4;
  s _gate_q_0;
  ecr _gate_q_2, _gate_q_7;
  sx _gate_q_8;
  h _gate_q_3;
  swap _gate_q_1, _gate_q_9;
  rz(1.6611261138321902) _gate_q_5;
  swap _gate_q_6, _gate_q_0;
  u2(5.6226216320792375, 0.3883667708012282) _gate_q_2;
  x _gate_q_4;
  sdg _gate_q_9;
  tdg _gate_q_1;
  cry(0.7729073632089015) _gate_q_7, _gate_q_3;
  rx(3.4953630403872538) _gate_q_8;
  ch _gate_q_8, _gate_q_7;
  z _gate_q_3;
  x _gate_q_5;
  id _gate_q_6;
  cs _gate_q_0, _gate_q_2;
  sxdg _gate_q_1;
  cu3_5072843696(3.5232417117758126, 4.91363031472472, 4.271823960682191) _gate_q_9, _gate_q_4;
  cu1_5072844656(1.0969755271065584) _gate_q_0, _gate_q_6;
  cry(3.6155969064116307) _gate_q_7, _gate_q_9;
  s _gate_q_5;
  cry(1.0505601814773304) _gate_q_3, _gate_q_8;
  s _gate_q_4;
  rx(1.577433127826945) _gate_q_2;
  u1(4.512954214006803) _gate_q_1;
}