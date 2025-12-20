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
gate rzx_5072765872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.384287427134247) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5072767840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3501626483943454) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3501626483943454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3501626483943454) _gate_q_1;
}
gate cu1_5072776864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5400893925306147) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5400893925306147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5400893925306147) _gate_q_1;
}
gate xx_minus_yy_5072767168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.998317256500886) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9335103865584217) _gate_q_0;
  ry(-0.9335103865584217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.998317256500886) _gate_q_1;
}
gate ryy_5072770240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.344752789734311) _gate_q_1;
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
gate rzz_5072770336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2980282203433715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072768992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.6534994851836675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072769328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.288721733767361) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072772688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.12034826965629146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5072777488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.192387540275583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072777008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.792945875315205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5072773120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.61356621075097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072778640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4769148976080384) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4769148976080384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4769148976080384) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  tdg _gate_q_9;
  cz _gate_q_0, _gate_q_8;
  csx _gate_q_5, _gate_q_2;
  cz _gate_q_3, _gate_q_1;
  cu(3.4731401460083973, 3.637913016330757, 1.7743539193874462, 3.6882955609884935) _gate_q_12, _gate_q_7;
  rzx_5072765872(5.384287427134247) _gate_q_6, _gate_q_11;
  u1(2.6083183213607293) _gate_q_10;
  cz _gate_q_4, _gate_q_13;
  cs _gate_q_4, _gate_q_1;
  U(2.3554291337277222, 1.1433046609114563, 0.23048259290609116) _gate_q_3;
  U(5.401801012153993, 1.4524591300554677, 5.05445484654641) _gate_q_5;
  x _gate_q_12;
  dcx _gate_q_13, _gate_q_0;
  cry(1.0021338107079627) _gate_q_9, _gate_q_7;
  y _gate_q_11;
  U(4.857940002315969, 2.4017280326620516, 5.693357744718273) _gate_q_6;
  h _gate_q_2;
  h _gate_q_8;
  sxdg _gate_q_10;
  cp(4.666536820004611) _gate_q_5, _gate_q_12;
  u1(2.767812499548663) _gate_q_6;
  cx _gate_q_10, _gate_q_0;
  cry(1.4661503821583255) _gate_q_8, _gate_q_1;
  id _gate_q_3;
  cx _gate_q_11, _gate_q_7;
  sx _gate_q_9;
  t _gate_q_13;
  p(2.1109575933737528) _gate_q_2;
  z _gate_q_4;
  cu1_5072767840(4.700325296788691) _gate_q_4, _gate_q_3;
  cy _gate_q_0, _gate_q_2;
  cry(3.6378743132192217) _gate_q_10, _gate_q_1;
  cu1_5072776864(5.080178785061229) _gate_q_6, _gate_q_11;
  xx_minus_yy_5072767168(1.8670207731168433, 4.998317256500886) _gate_q_7, _gate_q_5;
  s _gate_q_13;
  z _gate_q_9;
  ryy_5072770240(3.344752789734311) _gate_q_12, _gate_q_8;
  id _gate_q_1;
  sxdg _gate_q_5;
  t _gate_q_6;
  id _gate_q_3;
  cy _gate_q_9, _gate_q_11;
  ecr _gate_q_7, _gate_q_2;
  rzz_5072770336(1.2980282203433715) _gate_q_12, _gate_q_10;
  u2(4.29725711315456, 3.5527861105608682) _gate_q_8;
  cry(4.2959921930910285) _gate_q_13, _gate_q_0;
  sxdg _gate_q_4;
  tdg _gate_q_7;
  tdg _gate_q_1;
  ecr _gate_q_13, _gate_q_4;
  rxx_5072768992(5.6534994851836675) _gate_q_8, _gate_q_6;
  ecr _gate_q_12, _gate_q_10;
  sdg _gate_q_2;
  cu(0.09386938903221274, 3.57918852530683, 6.274947950513601, 6.053513810931086) _gate_q_11, _gate_q_0;
  rx(4.575103888534561) _gate_q_3;
  x _gate_q_9;
  id _gate_q_5;
  rzx_5072769328(3.288721733767361) _gate_q_2, _gate_q_13;
  sxdg _gate_q_10;
  crx(0.6225645499633784) _gate_q_4, _gate_q_0;
  x _gate_q_1;
  u3(5.282343250485667, 5.173815410766165, 5.765750032645517) _gate_q_12;
  ch _gate_q_7, _gate_q_11;
  ryy_5072772688(0.12034826965629146) _gate_q_9, _gate_q_5;
  sx _gate_q_6;
  id _gate_q_3;
  y _gate_q_8;
  u1(1.2905799906836362) _gate_q_2;
  csdg _gate_q_1, _gate_q_3;
  rz(5.979675313550132) _gate_q_5;
  rz(4.5601865773420736) _gate_q_9;
  cp(2.2946337671224373) _gate_q_11, _gate_q_13;
  rzx_5072777488(5.192387540275583) _gate_q_6, _gate_q_10;
  swap _gate_q_4, _gate_q_0;
  crx(0.6321071781429636) _gate_q_8, _gate_q_12;
  rx(1.4342868774897481) _gate_q_7;
  crx(5.107980913379421) _gate_q_0, _gate_q_10;
  rzz_5072777008(4.792945875315205) _gate_q_12, _gate_q_1;
  tdg _gate_q_8;
  rzx_5072773120(4.61356621075097) _gate_q_3, _gate_q_5;
  cry(4.34460346972184) _gate_q_9, _gate_q_11;
  cu1_5072778640(4.953829795216077) _gate_q_13, _gate_q_2;
  dcx _gate_q_6, _gate_q_7;
  rz(3.3605340648550355) _gate_q_4;
  cz _gate_q_10, _gate_q_3;
  u1(5.675163497994365) _gate_q_4;
  cu(1.1542314877681465, 1.6191428601279145, 1.7808143425236718, 2.0441909732280648) _gate_q_8, _gate_q_1;
  crz(5.309434078292228) _gate_q_11, _gate_q_12;
  crz(2.1404338010192805) _gate_q_5, _gate_q_6;
  x _gate_q_0;
  z _gate_q_2;
  tdg _gate_q_7;
  cry(3.0385806278696226) _gate_q_13, _gate_q_9;
}
gate rxx_5072012688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8025053673955651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072021952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8253122716306533) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.45857934549792345) _gate_q_1;
  ry(-0.45857934549792345) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8253122716306533) _gate_q_0;
}
gate rzx_5072013120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.816917869562255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072023104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.424889630632863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072014320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.15757581956442) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072024592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.285072339947887) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.515042682483009) _gate_q_0;
  ry(-2.515042682483009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.285072339947887) _gate_q_1;
}
gate rzx_5072024256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3229444185477284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5072015328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.317005613123171) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.29635036204026965) _gate_q_1;
  ry(-0.29635036204026965) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.317005613123171) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072013648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.10885751558110755) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.10885751558110755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.10885751558110755) _gate_q_1;
}
gate rxx_5072025792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5220607900673409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5072018448(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3335973165875408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072013552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.892040455074474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072023248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5115362786969793, 4.601521351621305, -4.601521351621305) _gate_q_0;
}
gate cu3_5072022960(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2191929214498085) _gate_q_0;
  u1(-2.03121142632084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.015754035789367835, 0, -2.2191929214498085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.015754035789367835, 4.250404347770648, 0) _gate_q_1;
}
gate rzx_5072026416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.236127103519142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cz _gate_q_0, _gate_q_13;
  dcx _gate_q_9, _gate_q_5;
  sxdg _gate_q_3;
  cs _gate_q_8, _gate_q_7;
  t _gate_q_4;
  csx _gate_q_6, _gate_q_12;
  u1(1.2650228448760235) _gate_q_11;
  ry(0.2815155400869815) _gate_q_1;
  u3(6.131058750138628, 1.9200302706529022, 0.41581253420945685) _gate_q_2;
  t _gate_q_10;
  rxx_5072012688(0.8025053673955651) _gate_q_11, _gate_q_12;
  xx_plus_yy_5072021952(0.9171586909958469, 0.8253122716306533) _gate_q_1, _gate_q_4;
  cz _gate_q_7, _gate_q_9;
  p(1.7959474335274777) _gate_q_8;
  tdg _gate_q_0;
  dcx _gate_q_5, _gate_q_10;
  rzx_5072013120(5.816917869562255) _gate_q_6, _gate_q_3;
  cz _gate_q_2, _gate_q_13;
  ch _gate_q_1, _gate_q_11;
  ecr _gate_q_0, _gate_q_13;
  rxx_5072023104(4.424889630632863) _gate_q_9, _gate_q_3;
  cry(3.8270147148843403) _gate_q_12, _gate_q_7;
  z _gate_q_2;
  sx _gate_q_5;
  rxx_5072014320(4.15757581956442) _gate_q_4, _gate_q_10;
  ry(4.164912704657798) _gate_q_6;
  sx _gate_q_8;
  xx_minus_yy_5072024592(5.030085364966018, 4.285072339947887) _gate_q_4, _gate_q_13;
  crz(5.816496786767032) _gate_q_8, _gate_q_7;
  rzx_5072024256(1.3229444185477284) _gate_q_12, _gate_q_9;
  cs _gate_q_3, _gate_q_0;
  xx_plus_yy_5072015328(0.5927007240805393, 2.317005613123171) _gate_q_5, _gate_q_2;
  ry(3.6435951977563783) _gate_q_6;
  sxdg _gate_q_1;
  sdg _gate_q_11;
  rz(0.04351888353884541) _gate_q_10;
  s _gate_q_9;
  dcx _gate_q_13, _gate_q_0;
  y _gate_q_7;
  ecr _gate_q_6, _gate_q_10;
  dcx _gate_q_3, _gate_q_2;
  iswap _gate_q_8, _gate_q_11;
  cu1_5072013648(0.2177150311622151) _gate_q_5, _gate_q_12;
  rxx_5072025792(1.5220607900673409) _gate_q_4, _gate_q_1;
  crx(5.722472629680389) _gate_q_9, _gate_q_3;
  crx(5.143123316077517) _gate_q_12, _gate_q_11;
  ryy_5072018448(2.3335973165875408) _gate_q_13, _gate_q_1;
  ryy_5072013552(3.892040455074474) _gate_q_0, _gate_q_4;
  csx _gate_q_8, _gate_q_2;
  iswap _gate_q_5, _gate_q_6;
  r_5072023248(3.5115362786969793, 6.172317678416202) _gate_q_7;
  t _gate_q_10;
  cu(2.1768595162030566, 1.17398724589102, 0.8359955145144097, 2.920953840270484) _gate_q_3, _gate_q_9;
  cu3_5072022960(0.03150807157873567, 4.250404347770648, 0.18798149512896836) _gate_q_7, _gate_q_10;
  ry(4.412105478495027) _gate_q_13;
  ry(2.8586209973069203) _gate_q_8;
  csdg _gate_q_5, _gate_q_11;
  cy _gate_q_12, _gate_q_0;
  x _gate_q_2;
  sx _gate_q_6;
  sx _gate_q_4;
  x _gate_q_1;
  ch _gate_q_2, _gate_q_11;
  rx(1.8881707353775008) _gate_q_5;
  t _gate_q_1;
  cz _gate_q_0, _gate_q_8;
  h _gate_q_9;
  crx(3.7392350099640375) _gate_q_10, _gate_q_3;
  cry(3.3655786586364687) _gate_q_13, _gate_q_7;
  cs _gate_q_6, _gate_q_12;
  id _gate_q_4;
  cp(1.1219971063015113) _gate_q_8, _gate_q_11;
  t _gate_q_5;
  t _gate_q_2;
  rzx_5072026416(5.236127103519142) _gate_q_13, _gate_q_3;
  ch _gate_q_4, _gate_q_9;
  z _gate_q_12;
  sxdg _gate_q_7;
  sx _gate_q_10;
  s _gate_q_6;
  h _gate_q_0;
  h _gate_q_1;
  iswap _gate_q_8, _gate_q_0;
  ry(3.332076346802052) _gate_q_4;
  iswap _gate_q_3, _gate_q_7;
  cu(2.2381170165061137, 1.1336680563385826, 1.8612199759016768, 5.5933126469001175) _gate_q_11, _gate_q_9;
  cu(0.7206048698675496, 1.2455562272620777, 4.928119098609151, 5.789590962320108) _gate_q_5, _gate_q_12;
  t _gate_q_6;
  t _gate_q_1;
  csdg _gate_q_13, _gate_q_10;
  h _gate_q_2;
}