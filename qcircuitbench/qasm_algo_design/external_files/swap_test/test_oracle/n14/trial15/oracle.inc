gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5074370528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.492484421426355, 4.3212668036307615, -4.3212668036307615) _gate_q_0;
}
gate rxx_5074364960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.296249064353782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074369136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9773889562215539) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9773889562215539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9773889562215539) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5074368272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.776389530792022) _gate_q_0;
  u1(-0.9197881155240535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.23458519794092614, 0, -4.776389530792022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.23458519794092614, 5.696177646316076, 0) _gate_q_1;
}
gate xx_plus_yy_5074354448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.725292040531631) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4386290851719736) _gate_q_1;
  ry(-2.4386290851719736) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.725292040531631) _gate_q_0;
}
gate rzx_5074362848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.074785512163447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074366448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0932759265649983) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0932759265649983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0932759265649983) _gate_q_1;
}
gate cu3_5074365872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9209711375282126) _gate_q_0;
  u1(1.6126355512037234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2304068664187855, 0, -2.9209711375282126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2304068664187855, 1.3083355863244894, 0) _gate_q_1;
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
gate xx_minus_yy_5074366304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.20701332678454934) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.663278641010729) _gate_q_0;
  ry(-1.663278641010729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.20701332678454934) _gate_q_1;
}
gate rxx_5074366496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2734441688155806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5074367264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2544991956154425, 2.2090648562299546, -2.2090648562299546) _gate_q_0;
}
gate rzx_5074366928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1680677576729528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074367168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.591312543714167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074366880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2198450141619044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074365728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.785590505762425) _gate_q_0;
  u1(1.1165091837390029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0256966055481715, 0, -4.785590505762425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0256966055481715, 3.6690813220234224, 0) _gate_q_1;
}
gate cu3_5074356656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7527063867331734) _gate_q_0;
  u1(-0.16505506284848104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7373958890153252, 0, -3.7527063867331734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7373958890153252, 3.9177614495816546, 0) _gate_q_1;
}
gate xx_minus_yy_5074360928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7665829554662587) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.757473160627056) _gate_q_0;
  ry(-1.757473160627056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7665829554662587) _gate_q_1;
}
gate cu1_5074360256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.950159765990895) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.950159765990895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.950159765990895) _gate_q_1;
}
gate xx_plus_yy_5074361072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.997603679910429) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2420914989649399) _gate_q_1;
  ry(-1.2420914989649399) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.997603679910429) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  t _gate_q_11;
  sxdg _gate_q_9;
  h _gate_q_0;
  sdg _gate_q_4;
  p(1.8176580372274527) _gate_q_3;
  r_5074370528(5.492484421426355, 5.892063130425658) _gate_q_5;
  cry(1.7270137295330934) _gate_q_7, _gate_q_12;
  rxx_5074364960(5.296249064353782) _gate_q_8, _gate_q_1;
  ry(2.2329472051540837) _gate_q_10;
  cu1_5074369136(3.9547779124431077) _gate_q_2, _gate_q_13;
  sdg _gate_q_6;
  cry(3.809280460295769) _gate_q_1, _gate_q_5;
  crz(0.6954073096309318) _gate_q_12, _gate_q_10;
  csdg _gate_q_0, _gate_q_13;
  u2(3.8470412300935553, 3.9771758962600443) _gate_q_8;
  cu(0.02927048778454265, 3.077164002637039, 3.8044774781615387, 4.611902538170393) _gate_q_2, _gate_q_11;
  cu3_5074368272(0.4691703958818523, 5.696177646316076, 3.856601415267969) _gate_q_9, _gate_q_7;
  sxdg _gate_q_6;
  crx(1.133895203679678) _gate_q_4, _gate_q_3;
  sxdg _gate_q_13;
  cu(6.019663389603618, 5.212355724170071, 5.677870178039491, 6.043522314087263) _gate_q_9, _gate_q_7;
  y _gate_q_0;
  xx_plus_yy_5074354448(4.877258170343947, 5.725292040531631) _gate_q_2, _gate_q_12;
  u1(4.471456039897358) _gate_q_6;
  x _gate_q_4;
  rzx_5074362848(6.074785512163447) _gate_q_11, _gate_q_3;
  swap _gate_q_1, _gate_q_8;
  s _gate_q_5;
  u1(6.1417061084535) _gate_q_10;
  cu1_5074366448(2.1865518531299966) _gate_q_2, _gate_q_4;
  cu3_5074365872(0.460813732837571, 1.3083355863244894, 4.533606688731936) _gate_q_11, _gate_q_5;
  cz _gate_q_3, _gate_q_10;
  ecr _gate_q_7, _gate_q_8;
  z _gate_q_13;
  csx _gate_q_6, _gate_q_12;
  cx _gate_q_9, _gate_q_1;
  u2(3.014614516527016, 1.5034568760693) _gate_q_0;
  rz(4.043459467898924) _gate_q_11;
  xx_minus_yy_5074366304(3.326557282021458, 0.20701332678454934) _gate_q_1, _gate_q_9;
  cx _gate_q_7, _gate_q_13;
  sxdg _gate_q_6;
  sx _gate_q_8;
  id _gate_q_0;
  swap _gate_q_5, _gate_q_4;
  rx(2.66806859070287) _gate_q_2;
  cp(5.36734001224722) _gate_q_10, _gate_q_3;
  sx _gate_q_12;
  cu(3.524729758494572, 1.4419750264224662, 1.7822279487914556, 5.949137527592278) _gate_q_7, _gate_q_0;
  ecr _gate_q_3, _gate_q_9;
  h _gate_q_12;
  x _gate_q_5;
  crx(4.759326365003438) _gate_q_6, _gate_q_4;
  csdg _gate_q_1, _gate_q_13;
  h _gate_q_10;
  sxdg _gate_q_8;
  rxx_5074366496(2.2734441688155806) _gate_q_2, _gate_q_11;
  cs _gate_q_3, _gate_q_11;
  sxdg _gate_q_8;
  r_5074367264(3.2544991956154425, 3.779861183024851) _gate_q_2;
  ry(1.4768435053913387) _gate_q_13;
  csdg _gate_q_0, _gate_q_6;
  x _gate_q_1;
  rzx_5074366928(1.1680677576729528) _gate_q_5, _gate_q_12;
  ry(1.5786435066003381) _gate_q_10;
  u3(2.4408365193557944, 3.9354243712091583, 3.1721384821638225) _gate_q_4;
  z _gate_q_7;
  sx _gate_q_9;
  rxx_5074367168(1.591312543714167) _gate_q_9, _gate_q_2;
  sxdg _gate_q_10;
  rxx_5074366880(3.2198450141619044) _gate_q_3, _gate_q_1;
  cu(0.9126942924504823, 4.342296656963045, 2.7165420874383246, 3.8214823850899244) _gate_q_13, _gate_q_8;
  p(0.20316428511033646) _gate_q_5;
  u3(1.2942621098076026, 3.5419771726080076, 6.2071547930026645) _gate_q_7;
  sxdg _gate_q_0;
  h _gate_q_4;
  ecr _gate_q_12, _gate_q_11;
  ry(5.346143505256879) _gate_q_6;
  tdg _gate_q_7;
  csdg _gate_q_12, _gate_q_1;
  swap _gate_q_9, _gate_q_0;
  cu3_5074365728(2.051393211096343, 3.6690813220234224, 5.902099689501428) _gate_q_5, _gate_q_4;
  cu3_5074356656(1.4747917780306503, 3.9177614495816546, 3.5876513238846925) _gate_q_3, _gate_q_8;
  xx_minus_yy_5074360928(3.514946321254112, 2.7665829554662587) _gate_q_13, _gate_q_10;
  cu1_5074360256(3.90031953198179) _gate_q_6, _gate_q_2;
  rx(5.356424435525755) _gate_q_11;
  cs _gate_q_11, _gate_q_10;
  csdg _gate_q_0, _gate_q_4;
  z _gate_q_9;
  crx(0.12803700555624295) _gate_q_7, _gate_q_3;
  xx_plus_yy_5074361072(2.4841829979298797, 4.997603679910429) _gate_q_6, _gate_q_2;
  p(1.533902883515142) _gate_q_5;
  iswap _gate_q_8, _gate_q_13;
  iswap _gate_q_1, _gate_q_12;
}
gate r_5074356800(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.127004894084963, 2.555830866442828, -2.555830866442828) _gate_q_0;
}
gate rzz_5074354832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.1316089748564995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074268096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.645155625479331) _gate_q_0;
  u1(2.4913053142569797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6857029677489682, 0, -2.645155625479331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6857029677489682, 0.15385031122235085, 0) _gate_q_1;
}
gate r_5074263296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.115997118693397, 0.159204820260187, -0.159204820260187) _gate_q_0;
}
gate cu1_5074262192(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.497690557605587) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.497690557605587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.497690557605587) _gate_q_1;
}
gate xx_minus_yy_5074257008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.91875658174631) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2158276088187523) _gate_q_0;
  ry(-2.2158276088187523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.91875658174631) _gate_q_1;
}
gate ryy_5074258544(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.313148227619836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074262288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.826932920628453) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074262624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.38724076144731123) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1430117414129835) _gate_q_0;
  ry(-2.1430117414129835) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.38724076144731123) _gate_q_1;
}
gate rzx_5074264352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.20988372212258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074262336(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4992208083512697) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4992208083512697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4992208083512697) _gate_q_1;
}
gate xx_minus_yy_5074266272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7566793407410772) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5560265530636124) _gate_q_0;
  ry(-2.5560265530636124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7566793407410772) _gate_q_1;
}
gate cu1_5074269152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.26268426211317064) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.26268426211317064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.26268426211317064) _gate_q_1;
}
gate xx_minus_yy_5074264208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.853941582587039) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7217521973485734) _gate_q_0;
  ry(-2.7217521973485734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.853941582587039) _gate_q_1;
}
gate cu1_5074261952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.171708386706269) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.171708386706269) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.171708386706269) _gate_q_1;
}
gate r_5074258160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.772037937925742, 0.49715813944260345, -0.49715813944260345) _gate_q_0;
}
gate rxx_5074261856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9256454790590329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074263056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7021512943150707, 0.603235631312292, -0.603235631312292) _gate_q_0;
}
gate ryy_5074264256(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.240366481836887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074265744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9401512513302146, 0.44579558608565417, -0.44579558608565417) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  r_5074356800(5.127004894084963, 4.1266271932377245) _gate_q_3;
  z _gate_q_10;
  rzz_5074354832(4.1316089748564995) _gate_q_1, _gate_q_5;
  u1(1.8257445079437908) _gate_q_12;
  swap _gate_q_13, _gate_q_9;
  h _gate_q_11;
  cx _gate_q_6, _gate_q_7;
  cry(3.8089647427707907) _gate_q_8, _gate_q_2;
  csx _gate_q_4, _gate_q_0;
  u3(0.31056374416798305, 0.5966066175284775, 4.840102184669415) _gate_q_6;
  cu3_5074268096(1.3714059354979364, 0.15385031122235085, 5.136460939736311) _gate_q_12, _gate_q_0;
  r_5074263296(6.115997118693397, 1.7300011470550836) _gate_q_10;
  cu1_5074262192(2.995381115211174) _gate_q_1, _gate_q_7;
  ecr _gate_q_11, _gate_q_9;
  ry(2.0522563023376743) _gate_q_8;
  cy _gate_q_5, _gate_q_3;
  csdg _gate_q_2, _gate_q_4;
  p(3.2369815272196956) _gate_q_13;
  rx(3.188767735290209) _gate_q_3;
  u1(3.306624663540868) _gate_q_8;
  id _gate_q_0;
  csx _gate_q_10, _gate_q_7;
  x _gate_q_13;
  xx_minus_yy_5074257008(4.431655217637505, 3.91875658174631) _gate_q_6, _gate_q_5;
  u1(5.058189042092813) _gate_q_1;
  ry(2.6547824905610042) _gate_q_9;
  sxdg _gate_q_2;
  rz(6.246985137728135) _gate_q_11;
  t _gate_q_4;
  z _gate_q_12;
  sxdg _gate_q_8;
  ryy_5074258544(4.313148227619836) _gate_q_2, _gate_q_11;
  crx(5.280136792598394) _gate_q_12, _gate_q_5;
  cy _gate_q_4, _gate_q_0;
  ecr _gate_q_10, _gate_q_7;
  y _gate_q_3;
  ecr _gate_q_9, _gate_q_6;
  ryy_5074262288(5.826932920628453) _gate_q_1, _gate_q_13;
  x _gate_q_11;
  sdg _gate_q_7;
  crz(4.664888689509715) _gate_q_6, _gate_q_8;
  u3(3.8038248636133085, 0.2627072825638195, 2.8086688544837632) _gate_q_2;
  xx_minus_yy_5074262624(4.286023482825967, 0.38724076144731123) _gate_q_10, _gate_q_12;
  cx _gate_q_9, _gate_q_3;
  rzx_5074264352(1.20988372212258) _gate_q_13, _gate_q_4;
  cu1_5074262336(2.9984416167025394) _gate_q_1, _gate_q_5;
  y _gate_q_0;
  xx_minus_yy_5074266272(5.112053106127225, 2.7566793407410772) _gate_q_10, _gate_q_9;
  U(0.4370361737221794, 4.914201050876555, 3.229359547710538) _gate_q_4;
  rx(2.6211870662641177) _gate_q_8;
  crz(4.657516785198079) _gate_q_12, _gate_q_1;
  cs _gate_q_11, _gate_q_2;
  U(5.016458242524951, 2.1617219419272797, 3.540916603372167) _gate_q_5;
  ecr _gate_q_13, _gate_q_7;
  cu1_5074269152(0.5253685242263413) _gate_q_6, _gate_q_0;
  id _gate_q_3;
  cp(1.3663494257444797) _gate_q_4, _gate_q_10;
  crz(3.867734866613806) _gate_q_11, _gate_q_3;
  ecr _gate_q_0, _gate_q_6;
  cy _gate_q_13, _gate_q_9;
  iswap _gate_q_8, _gate_q_2;
  cs _gate_q_7, _gate_q_1;
  u1(5.018848941522557) _gate_q_12;
  U(5.383124763225094, 6.122091090012431, 2.7677664404161804) _gate_q_5;
  sx _gate_q_13;
  ry(3.850168250525923) _gate_q_12;
  iswap _gate_q_9, _gate_q_10;
  id _gate_q_11;
  sx _gate_q_6;
  cy _gate_q_2, _gate_q_0;
  xx_minus_yy_5074264208(5.443504394697147, 5.853941582587039) _gate_q_7, _gate_q_4;
  cs _gate_q_3, _gate_q_5;
  cs _gate_q_8, _gate_q_1;
  id _gate_q_3;
  cu1_5074261952(4.343416773412538) _gate_q_13, _gate_q_7;
  cy _gate_q_6, _gate_q_4;
  cry(5.268317505524687) _gate_q_0, _gate_q_1;
  tdg _gate_q_11;
  r_5074258160(4.772037937925742, 2.0679544662375) _gate_q_5;
  rxx_5074261856(0.9256454790590329) _gate_q_2, _gate_q_12;
  cx _gate_q_8, _gate_q_10;
  rx(6.1460396769790755) _gate_q_9;
  rz(4.932806270346959) _gate_q_1;
  r_5074263056(2.7021512943150707, 2.1740319581071885) _gate_q_9;
  z _gate_q_7;
  t _gate_q_6;
  cp(5.185192534017877) _gate_q_2, _gate_q_3;
  sdg _gate_q_12;
  ryy_5074264256(2.240366481836887) _gate_q_4, _gate_q_10;
  cp(0.4279851254675139) _gate_q_11, _gate_q_0;
  t _gate_q_13;
  r_5074265744(3.9401512513302146, 2.0165919128805507) _gate_q_5;
  sdg _gate_q_8;
}