gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072458464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.092756731096977) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.092756731096977) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.092756731096977) _gate_q_1;
}
gate rzz_5072456736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.017649720987413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072459856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.9378273677097053, -0.5548576663320819, 0.5548576663320819) _gate_q_0;
}
gate ryy_5072462640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6627847228345924) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5072459424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8811125036509564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072461152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.319763198390597) _gate_q_0;
  u1(-1.0904071343194206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.12866319911708, 0, -4.319763198390597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.12866319911708, 5.410170332710018, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5072469840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7207397854894517) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072458320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.693401142654934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072460480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.88549046633998, 3.5394994193609115, -3.5394994193609115) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072455248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.973096198247967) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7184277524598448) _gate_q_1;
  ry(-0.7184277524598448) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.973096198247967) _gate_q_0;
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
gate xx_plus_yy_5072462208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7110889619733896) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.468276633549183) _gate_q_1;
  ry(-1.468276633549183) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7110889619733896) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5072454864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.81783092073457) _gate_q_0;
  u1(-1.390948504059552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.399543690341873, 0, -2.81783092073457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.399543690341873, 4.208779424794122, 0) _gate_q_1;
}
gate cu1_5072461680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7713396399345736) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7713396399345736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7713396399345736) _gate_q_1;
}
gate rzx_5072468256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.183587250158003) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5072467440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4649751853746978, 4.066830759854767, -4.066830759854767) _gate_q_0;
}
gate rxx_5072455728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.17417472477852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070858928(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.115213169528796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070855232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.03107263628364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070848176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.438758749424737) _gate_q_0;
  u1(0.7693454790708603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.98071639538991, 0, -4.438758749424737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.98071639538991, 3.6694132703538767, 0) _gate_q_1;
}
gate cu1_5070860944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2996918072086392) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2996918072086392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2996918072086392) _gate_q_1;
}
gate xx_minus_yy_5070859984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.191457235370149) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5874685452572882) _gate_q_0;
  ry(-0.5874685452572882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.191457235370149) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cx _gate_q_4, _gate_q_2;
  crx(3.6313974526226627) _gate_q_10, _gate_q_15;
  iswap _gate_q_0, _gate_q_9;
  cry(5.6143885999198435) _gate_q_8, _gate_q_13;
  tdg _gate_q_6;
  cu1_5072458464(6.185513462193954) _gate_q_1, _gate_q_11;
  U(4.476741515698463, 6.180324803732153, 2.800213485910998) _gate_q_16;
  crx(0.822923033608683) _gate_q_7, _gate_q_14;
  y _gate_q_18;
  u1(1.9208243595838195) _gate_q_17;
  u1(3.625384103126615) _gate_q_5;
  u3(0.20142414760820956, 1.2256818346597473, 4.8283811589888765) _gate_q_12;
  p(5.190019399377651) _gate_q_3;
  rzz_5072456736(1.017649720987413) _gate_q_15, _gate_q_2;
  r_5072459856(3.9378273677097053, 1.0159386604628147) _gate_q_6;
  ryy_5072462640(1.6627847228345924) _gate_q_12, _gate_q_9;
  u3(0.661462137039776, 0.9961873134074187, 5.060045924327308) _gate_q_10;
  t _gate_q_3;
  sx _gate_q_0;
  crz(2.3523354487761567) _gate_q_18, _gate_q_17;
  crx(4.588256404587759) _gate_q_16, _gate_q_13;
  tdg _gate_q_14;
  cz _gate_q_4, _gate_q_11;
  cz _gate_q_5, _gate_q_8;
  z _gate_q_1;
  U(0.988000456803668, 4.975693226796125, 4.252561833252825) _gate_q_7;
  csx _gate_q_11, _gate_q_15;
  ryy_5072459424(1.8811125036509564) _gate_q_17, _gate_q_3;
  u3(5.312972833992077, 3.7058090518248643, 6.150847997009984) _gate_q_5;
  u1(0.748084678297467) _gate_q_14;
  csx _gate_q_4, _gate_q_7;
  cu3_5072461152(2.25732639823416, 5.410170332710018, 3.2293560640711765) _gate_q_13, _gate_q_1;
  crz(2.4561334562657753) _gate_q_18, _gate_q_12;
  sxdg _gate_q_8;
  csx _gate_q_0, _gate_q_2;
  u3(0.35391202659990306, 4.379640836809501, 0.24853085876275066) _gate_q_9;
  U(4.703846961528689, 5.179526415960114, 4.675705148124092) _gate_q_16;
  cy _gate_q_6, _gate_q_10;
  iswap _gate_q_18, _gate_q_16;
  cu(4.575343439316064, 5.190212288906754, 4.583263080301898, 6.087603460023602) _gate_q_15, _gate_q_1;
  u1(5.079292341165898) _gate_q_10;
  rxx_5072469840(2.7207397854894517) _gate_q_12, _gate_q_7;
  rzx_5072458320(3.693401142654934) _gate_q_5, _gate_q_14;
  r_5072460480(3.88549046633998, 5.110295746155808) _gate_q_8;
  cp(5.369627044462402) _gate_q_0, _gate_q_4;
  dcx _gate_q_11, _gate_q_13;
  xx_plus_yy_5072455248(1.4368555049196896, 3.973096198247967) _gate_q_2, _gate_q_17;
  ecr _gate_q_6, _gate_q_3;
  s _gate_q_9;
  dcx _gate_q_17, _gate_q_6;
  xx_plus_yy_5072462208(2.936553267098366, 2.7110889619733896) _gate_q_4, _gate_q_15;
  csx _gate_q_14, _gate_q_8;
  swap _gate_q_12, _gate_q_1;
  cs _gate_q_7, _gate_q_9;
  cu(3.2755943038248665, 6.0480136446176775, 4.410824850978764, 1.529587376172006) _gate_q_16, _gate_q_5;
  cu3_5072454864(4.799087380683746, 4.208779424794122, 1.4268824166750185) _gate_q_10, _gate_q_11;
  t _gate_q_18;
  cu1_5072461680(5.542679279869147) _gate_q_2, _gate_q_0;
  swap _gate_q_13, _gate_q_3;
  ch _gate_q_0, _gate_q_10;
  z _gate_q_1;
  cs _gate_q_5, _gate_q_18;
  rzx_5072468256(5.183587250158003) _gate_q_11, _gate_q_9;
  sxdg _gate_q_17;
  ecr _gate_q_4, _gate_q_15;
  s _gate_q_3;
  u3(4.8940184022683, 4.566037845357515, 6.259819338615775) _gate_q_14;
  cs _gate_q_12, _gate_q_8;
  csdg _gate_q_6, _gate_q_2;
  r_5072467440(0.4649751853746978, 5.637627086649664) _gate_q_7;
  cp(5.289994491672088) _gate_q_16, _gate_q_13;
  u1(2.181383273573607) _gate_q_4;
  cp(0.8255197477055419) _gate_q_1, _gate_q_14;
  cy _gate_q_5, _gate_q_7;
  ch _gate_q_16, _gate_q_8;
  y _gate_q_15;
  id _gate_q_2;
  crz(1.7078241833877967) _gate_q_18, _gate_q_10;
  cy _gate_q_3, _gate_q_13;
  cp(2.92677672701545) _gate_q_12, _gate_q_17;
  h _gate_q_6;
  ecr _gate_q_9, _gate_q_0;
  id _gate_q_11;
  cx _gate_q_16, _gate_q_3;
  rxx_5072455728(6.17417472477852) _gate_q_15, _gate_q_11;
  sx _gate_q_7;
  ry(0.27166435832396363) _gate_q_18;
  t _gate_q_14;
  csx _gate_q_6, _gate_q_2;
  cp(6.040404181596576) _gate_q_8, _gate_q_17;
  csdg _gate_q_0, _gate_q_4;
  cp(4.161207914398385) _gate_q_9, _gate_q_1;
  csx _gate_q_5, _gate_q_12;
  p(3.859402073814965) _gate_q_13;
  rx(1.578754543809228) _gate_q_10;
  p(1.8186008651072427) _gate_q_7;
  crz(0.34373445820852655) _gate_q_14, _gate_q_12;
  tdg _gate_q_3;
  crz(3.353988329976627) _gate_q_6, _gate_q_11;
  u2(0.8993499757372255, 1.1392366785926542) _gate_q_2;
  rzz_5070858928(4.115213169528796) _gate_q_9, _gate_q_13;
  cry(2.409866482907115) _gate_q_18, _gate_q_0;
  ry(1.55739321489896) _gate_q_8;
  rzz_5070855232(5.03107263628364) _gate_q_1, _gate_q_15;
  z _gate_q_16;
  csdg _gate_q_4, _gate_q_10;
  cu3_5070848176(5.96143279077982, 3.6694132703538767, 5.208104228495597) _gate_q_17, _gate_q_5;
  u3(4.157124212913034, 4.984036405102801, 3.887025015595817) _gate_q_15;
  csdg _gate_q_8, _gate_q_0;
  swap _gate_q_2, _gate_q_16;
  cy _gate_q_1, _gate_q_6;
  cu1_5070860944(0.5993836144172784) _gate_q_12, _gate_q_11;
  xx_minus_yy_5070859984(1.1749370905145764, 5.191457235370149) _gate_q_9, _gate_q_3;
  p(0.5181011832716765) _gate_q_7;
  t _gate_q_5;
  t _gate_q_4;
  rx(1.0330566928725768) _gate_q_18;
  sx _gate_q_17;
  ry(0.24815231886241185) _gate_q_14;
  cz _gate_q_10, _gate_q_13;
}
gate ryy_5073915488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0390202290361343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5073912704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.29950184855188, 1.356827256848225, -1.356827256848225) _gate_q_0;
}
gate ryy_5073925328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.54994123943737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073914336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2715196416743106) _gate_q_0;
  u1(-0.7197404715792859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.548150425358035, 0, -3.2715196416743106) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.548150425358035, 3.9912601132535963, 0) _gate_q_1;
}
gate cu3_5073913904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.670049863165413) _gate_q_0;
  u1(1.5054104625588047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.24946630492862856, 0, -4.670049863165413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.24946630492862856, 3.164639400606608, 0) _gate_q_1;
}
gate rzz_5073925712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6030860590214089) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073921536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7277435841158494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5073922304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.717881728022587) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.659941474111616) _gate_q_0;
  ry(-1.659941474111616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.717881728022587) _gate_q_1;
}
gate xx_plus_yy_5073920432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.67137526459149) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0444817793480827) _gate_q_1;
  ry(-3.0444817793480827) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.67137526459149) _gate_q_0;
}
gate rzz_5073924080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.712453622763917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5073912896(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6100461349567818) _gate_q_0;
  u1(0.5122101863932064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.085194506478095, 0, -1.6100461349567818) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.085194506478095, 1.0978359485635754, 0) _gate_q_1;
}
gate rxx_5073917456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7255539031849665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5073916544(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8469127618823513, 1.5105027108342162, -1.5105027108342162) _gate_q_0;
}
gate rzz_5073917168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3182418544190195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073916160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1029701806011523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5073924752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.484218256659738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5073920720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6728866152879007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5073914432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.779703962729948, 3.980143392039187, -3.980143392039187) _gate_q_0;
}
gate ryy_5073912848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.370947248628091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5073920816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4158905595761058) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8281683685428436) _gate_q_0;
  ry(-1.8281683685428436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4158905595761058) _gate_q_1;
}
gate xx_plus_yy_5073922976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.435654842068811) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.309912219704734) _gate_q_1;
  ry(-2.309912219704734) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.435654842068811) _gate_q_0;
}
gate xx_plus_yy_5073920096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.883930551705643) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7617938913728606) _gate_q_1;
  ry(-1.7617938913728606) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.883930551705643) _gate_q_0;
}
gate rxx_5073918704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7715193061295385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5073922784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6878895335372093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5073919568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.84777349486284) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.353649665904521) _gate_q_1;
  ry(-1.353649665904521) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.84777349486284) _gate_q_0;
}
gate xx_plus_yy_5073916256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8761020205809182) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7617353456658575) _gate_q_1;
  ry(-1.7617353456658575) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8761020205809182) _gate_q_0;
}
gate cu3_5073915104(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7837667642335941) _gate_q_0;
  u1(0.012536058152516905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3814824902458695, 0, -1.7837667642335941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3814824902458695, 1.7712307060810772, 0) _gate_q_1;
}
gate xx_minus_yy_5073916640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.04759432659706473) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1434779698461406) _gate_q_0;
  ry(-2.1434779698461406) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.04759432659706473) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  cs _gate_q_4, _gate_q_13;
  ch _gate_q_6, _gate_q_2;
  ryy_5073915488(2.0390202290361343) _gate_q_5, _gate_q_15;
  z _gate_q_7;
  cu(3.276394972650496, 1.5302809384513143, 3.2564205836711078, 3.5393239595303796) _gate_q_3, _gate_q_0;
  cs _gate_q_11, _gate_q_10;
  u3(2.648456016694747, 2.2652368685669537, 2.4053217250110337) _gate_q_16;
  csdg _gate_q_14, _gate_q_1;
  u3(2.2468270360234848, 2.9662991501169316, 2.185317203643544) _gate_q_12;
  iswap _gate_q_8, _gate_q_9;
  u3(3.2330196006520198, 3.6786591173016405, 0.12791697827682866) _gate_q_17;
  sxdg _gate_q_18;
  y _gate_q_9;
  csdg _gate_q_4, _gate_q_15;
  tdg _gate_q_17;
  r_5073912704(4.29950184855188, 2.9276235836431215) _gate_q_2;
  ryy_5073925328(3.54994123943737) _gate_q_16, _gate_q_1;
  cu3_5073914336(5.09630085071607, 3.9912601132535963, 2.5517791700950245) _gate_q_6, _gate_q_13;
  cu3_5073913904(0.4989326098572571, 3.164639400606608, 6.1754603257242175) _gate_q_14, _gate_q_11;
  z _gate_q_10;
  id _gate_q_18;
  swap _gate_q_3, _gate_q_7;
  ch _gate_q_8, _gate_q_12;
  tdg _gate_q_5;
  rx(3.455573323170165) _gate_q_0;
  cry(4.521445958459311) _gate_q_16, _gate_q_11;
  rzz_5073925712(1.6030860590214089) _gate_q_6, _gate_q_17;
  s _gate_q_3;
  sx _gate_q_15;
  U(4.7992607637358615, 2.0644323174252315, 5.25455666093052) _gate_q_7;
  h _gate_q_8;
  ryy_5073921536(0.7277435841158494) _gate_q_9, _gate_q_4;
  ch _gate_q_13, _gate_q_0;
  cz _gate_q_5, _gate_q_18;
  cp(3.929577783912562) _gate_q_1, _gate_q_12;
  ecr _gate_q_10, _gate_q_14;
  p(4.778308144375425) _gate_q_2;
  xx_minus_yy_5073922304(3.319882948223232, 4.717881728022587) _gate_q_4, _gate_q_6;
  csx _gate_q_12, _gate_q_16;
  cs _gate_q_14, _gate_q_5;
  swap _gate_q_2, _gate_q_9;
  u2(1.2377528271292215, 3.500702798381441) _gate_q_3;
  csdg _gate_q_0, _gate_q_13;
  cp(0.27680303311080484) _gate_q_18, _gate_q_10;
  xx_plus_yy_5073920432(6.0889635586961655, 5.67137526459149) _gate_q_11, _gate_q_8;
  s _gate_q_7;
  crx(1.6897076795909847) _gate_q_17, _gate_q_15;
  U(2.991273180634013, 5.108573145530845, 1.3250743394721172) _gate_q_1;
  z _gate_q_14;
  iswap _gate_q_5, _gate_q_3;
  rzz_5073924080(5.712453622763917) _gate_q_17, _gate_q_10;
  t _gate_q_18;
  cs _gate_q_11, _gate_q_13;
  y _gate_q_12;
  cz _gate_q_0, _gate_q_4;
  u2(3.81939078591382, 5.273381031486327) _gate_q_16;
  id _gate_q_6;
  swap _gate_q_9, _gate_q_1;
  cu3_5073912896(4.17038901295619, 1.0978359485635754, 2.122256321349988) _gate_q_15, _gate_q_7;
  sdg _gate_q_2;
  id _gate_q_8;
  rxx_5073917456(4.7255539031849665) _gate_q_0, _gate_q_5;
  tdg _gate_q_18;
  r_5073916544(0.8469127618823513, 3.0812990376291127) _gate_q_8;
  crx(3.7746096893348504) _gate_q_12, _gate_q_2;
  u3(2.251832964132458, 4.76898273575685, 5.006958968858264) _gate_q_10;
  rzz_5073917168(1.3182418544190195) _gate_q_13, _gate_q_9;
  h _gate_q_3;
  ryy_5073916160(2.1029701806011523) _gate_q_14, _gate_q_7;
  rzx_5073924752(1.484218256659738) _gate_q_17, _gate_q_1;
  sx _gate_q_15;
  ryy_5073920720(0.6728866152879007) _gate_q_11, _gate_q_6;
  rx(6.074390547090811) _gate_q_16;
  r_5073914432(3.779703962729948, 5.550939718834083) _gate_q_4;
  h _gate_q_17;
  cu(4.359490331685749, 1.3387455000863109, 3.4818276579490277, 3.614522821743315) _gate_q_6, _gate_q_2;
  sx _gate_q_13;
  sdg _gate_q_10;
  cy _gate_q_9, _gate_q_8;
  y _gate_q_18;
  cy _gate_q_12, _gate_q_14;
  ryy_5073912848(5.370947248628091) _gate_q_1, _gate_q_5;
  tdg _gate_q_0;
  ry(0.0009833527556047021) _gate_q_3;
  tdg _gate_q_4;
  u3(1.5965602555022276, 1.6860230413090997, 6.242324005386424) _gate_q_7;
  xx_minus_yy_5073920816(3.656336737085687, 0.4158905595761058) _gate_q_16, _gate_q_15;
  u1(3.393178673431562) _gate_q_11;
  y _gate_q_6;
  xx_plus_yy_5073922976(4.619824439409468, 5.435654842068811) _gate_q_7, _gate_q_17;
  tdg _gate_q_12;
  xx_plus_yy_5073920096(3.523587782745721, 2.883930551705643) _gate_q_1, _gate_q_0;
  rxx_5073918704(1.7715193061295385) _gate_q_15, _gate_q_4;
  ch _gate_q_16, _gate_q_13;
  rzx_5073922784(3.6878895335372093) _gate_q_14, _gate_q_18;
  rz(1.8413741079100898) _gate_q_5;
  rz(1.700704377134434) _gate_q_3;
  csdg _gate_q_8, _gate_q_2;
  xx_plus_yy_5073919568(2.707299331809042, 5.84777349486284) _gate_q_10, _gate_q_11;
  u3(3.6759852350481315, 3.775036807752272, 1.9366651755394027) _gate_q_9;
  swap _gate_q_18, _gate_q_7;
  crz(4.123142784014409) _gate_q_5, _gate_q_17;
  csx _gate_q_13, _gate_q_8;
  xx_plus_yy_5073916256(3.523470691331715, 2.8761020205809182) _gate_q_10, _gate_q_14;
  cu3_5073915104(0.762964980491739, 1.7712307060810772, 1.796302822386111) _gate_q_6, _gate_q_11;
  rz(6.159418453433305) _gate_q_16;
  swap _gate_q_0, _gate_q_15;
  t _gate_q_4;
  y _gate_q_1;
  cz _gate_q_12, _gate_q_2;
  z _gate_q_3;
  z _gate_q_9;
  sdg _gate_q_9;
  cs _gate_q_6, _gate_q_12;
  cu(1.1153801794521978, 1.9931652824484847, 5.334452648796385, 2.4856883590794436) _gate_q_15, _gate_q_7;
  sx _gate_q_10;
  ry(0.46732506065603435) _gate_q_13;
  cz _gate_q_16, _gate_q_8;
  crx(0.7063446584153968) _gate_q_0, _gate_q_5;
  tdg _gate_q_4;
  xx_minus_yy_5073916640(4.286955939692281, 0.04759432659706473) _gate_q_14, _gate_q_1;
  iswap _gate_q_18, _gate_q_2;
  swap _gate_q_3, _gate_q_17;
  U(3.31541833349218, 3.4152705950213194, 3.952713869684124) _gate_q_11;
}