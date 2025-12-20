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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5074001152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.41511665062948255) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9462171728646975) _gate_q_1;
  ry(-1.9462171728646975) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.41511665062948255) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5074004416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4073918374408287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074006528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0187057389902616) _gate_q_0;
  u1(-0.11442875833724064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8806291352699946, 0, -2.0187057389902616) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8806291352699946, 2.1331344973275024, 0) _gate_q_1;
}
gate r_5073995920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8756308989596873, 3.4610146526443115, -3.4610146526443115) _gate_q_0;
}
gate cu3_5074000432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.10662194000437) _gate_q_0;
  u1(1.6986795260796572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.538707378000533, 0, -4.10662194000437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.538707378000533, 2.407942413924713, 0) _gate_q_1;
}
gate ryy_5074000480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.665156820786398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074000768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.01745152011852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074001008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.20973774425511) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.791026820368975) _gate_q_0;
  ry(-2.791026820368975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.20973774425511) _gate_q_1;
}
gate ryy_5074004656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.524136209559163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074005856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.9486977286695213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074000576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.028412090918598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074005568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.064262876892584, 1.90472196535679, -1.90472196535679) _gate_q_0;
}
gate rxx_5074009936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1372062661452064) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074002784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.798571166775707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5074006048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7725992416646545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074005616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6167988871072598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  crz(2.7665264133267367) _gate_q_4, _gate_q_2;
  cz _gate_q_8, _gate_q_10;
  cs _gate_q_12, _gate_q_7;
  rz(1.6321861371456627) _gate_q_11;
  rz(0.4298101938718885) _gate_q_1;
  ecr _gate_q_3, _gate_q_6;
  crz(4.054288170741814) _gate_q_0, _gate_q_5;
  sxdg _gate_q_9;
  xx_plus_yy_5074001152(3.892434345729395, 0.41511665062948255) _gate_q_2, _gate_q_12;
  id _gate_q_4;
  iswap _gate_q_8, _gate_q_6;
  cy _gate_q_0, _gate_q_1;
  crx(2.1597734356404508) _gate_q_7, _gate_q_5;
  u1(2.5930437936705832) _gate_q_9;
  sx _gate_q_11;
  sdg _gate_q_3;
  id _gate_q_10;
  crx(5.139058279801893) _gate_q_4, _gate_q_5;
  u3(3.4880448758075975, 5.609081257308597, 3.1347180712618385) _gate_q_8;
  u3(5.9705606266147155, 6.0311454456210045, 2.320950031480649) _gate_q_11;
  u3(3.286790805802532, 5.117069079447826, 3.9153237178510256) _gate_q_12;
  ryy_5074004416(2.4073918374408287) _gate_q_7, _gate_q_0;
  id _gate_q_2;
  cu3_5074006528(5.761258270539989, 2.1331344973275024, 1.904276980653021) _gate_q_9, _gate_q_1;
  sx _gate_q_6;
  sxdg _gate_q_10;
  h _gate_q_3;
  swap _gate_q_0, _gate_q_6;
  cs _gate_q_10, _gate_q_2;
  r_5073995920(1.8756308989596873, 5.031810979439208) _gate_q_5;
  cu3_5074000432(1.077414756001066, 2.407942413924713, 5.805301466084027) _gate_q_1, _gate_q_3;
  sxdg _gate_q_4;
  ry(1.5065897089102087) _gate_q_11;
  cz _gate_q_9, _gate_q_7;
  ryy_5074000480(4.665156820786398) _gate_q_8, _gate_q_12;
  id _gate_q_5;
  rzx_5074000768(3.01745152011852) _gate_q_11, _gate_q_6;
  cu(1.9926449923411844, 5.3650139193078745, 5.978959314499876, 4.588438094046647) _gate_q_7, _gate_q_3;
  cx _gate_q_10, _gate_q_9;
  x _gate_q_1;
  cs _gate_q_2, _gate_q_8;
  z _gate_q_0;
  xx_minus_yy_5074001008(5.58205364073795, 3.20973774425511) _gate_q_4, _gate_q_12;
  u1(4.032112274396542) _gate_q_2;
  cry(4.4617969339334955) _gate_q_0, _gate_q_10;
  u2(3.1047795729476486, 2.350589985325727) _gate_q_4;
  cp(3.1731071725179896) _gate_q_12, _gate_q_1;
  cry(1.1335326629348268) _gate_q_3, _gate_q_8;
  ryy_5074004656(0.524136209559163) _gate_q_7, _gate_q_5;
  h _gate_q_11;
  sxdg _gate_q_6;
  sxdg _gate_q_9;
  cs _gate_q_9, _gate_q_4;
  sxdg _gate_q_6;
  y _gate_q_12;
  y _gate_q_10;
  u2(4.400377963509485, 3.9505459235719074) _gate_q_7;
  cx _gate_q_1, _gate_q_2;
  crx(2.7370971784644764) _gate_q_3, _gate_q_5;
  rxx_5074005856(3.9486977286695213) _gate_q_0, _gate_q_8;
  h _gate_q_11;
  ryy_5074000576(5.028412090918598) _gate_q_4, _gate_q_9;
  h _gate_q_11;
  ecr _gate_q_8, _gate_q_2;
  u1(2.581344345248059) _gate_q_0;
  u1(2.868630701554719) _gate_q_3;
  sx _gate_q_6;
  r_5074005568(5.064262876892584, 3.4755182921516865) _gate_q_5;
  ch _gate_q_10, _gate_q_12;
  cry(5.048185578064877) _gate_q_7, _gate_q_1;
  cx _gate_q_2, _gate_q_5;
  ecr _gate_q_1, _gate_q_11;
  rxx_5074009936(0.1372062661452064) _gate_q_9, _gate_q_10;
  rzz_5074002784(0.798571166775707) _gate_q_0, _gate_q_8;
  csx _gate_q_4, _gate_q_7;
  rxx_5074006048(2.7725992416646545) _gate_q_3, _gate_q_6;
  sxdg _gate_q_12;
  cp(3.2282164287788624) _gate_q_1, _gate_q_3;
  sx _gate_q_7;
  cy _gate_q_4, _gate_q_6;
  x _gate_q_10;
  rzx_5074005616(1.6167988871072598) _gate_q_8, _gate_q_9;
  U(6.043120270308952, 1.055427014904282, 3.6198364296057624) _gate_q_0;
  swap _gate_q_12, _gate_q_11;
  U(2.8114536700178485, 4.054878231749032, 0.8659645842824762) _gate_q_2;
  sx _gate_q_5;
}
gate rzz_5073996832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.874069897233725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073999520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.293849727308732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5074001824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.994454893095303) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.994454893095303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.994454893095303) _gate_q_1;
}
gate cu1_5073994384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.716516795075786) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.716516795075786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.716516795075786) _gate_q_1;
}
gate rzz_5073998656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6285121779124352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5073999904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8817579709748715) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.868790670475543) _gate_q_0;
  ry(-2.868790670475543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8817579709748715) _gate_q_1;
}
gate xx_plus_yy_5073994240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.8513995685499793) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9519395939672153) _gate_q_1;
  ry(-2.9519395939672153) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.8513995685499793) _gate_q_0;
}
gate xx_plus_yy_4315967808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4301217953922858) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7909411499769012) _gate_q_1;
  ry(-0.7909411499769012) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4301217953922858) _gate_q_0;
}
gate rzx_5062728768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.434165656135118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5062722912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.213912704050117) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6674762520881212) _gate_q_1;
  ry(-0.6674762520881212) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.213912704050117) _gate_q_0;
}
gate r_5074272624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.184271581491818, 4.098998120054753, -4.098998120054753) _gate_q_0;
}
gate rxx_5074278768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6417623048216584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074283568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6113213325760225, 2.2048207359433207, -2.2048207359433207) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5074282416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9117362948365861) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074273392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5187478789797575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074279632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4483724517157865) _gate_q_0;
  u1(-1.230452468681968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.585455094311543, 0, -1.4483724517157865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.585455094311543, 2.6788249203977545, 0) _gate_q_1;
}
gate rxx_5074279104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9880709740600246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074233408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.030511702035484478) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.030511702035484478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.030511702035484478) _gate_q_1;
}
gate rzz_5074225008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.4893129564371041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074234224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2728207412853414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  t _gate_q_3;
  rzz_5073996832(4.874069897233725) _gate_q_6, _gate_q_11;
  iswap _gate_q_2, _gate_q_10;
  u1(2.6829057624037724) _gate_q_4;
  ry(0.07915910783536119) _gate_q_0;
  ryy_5073999520(5.293849727308732) _gate_q_8, _gate_q_1;
  dcx _gate_q_5, _gate_q_7;
  ecr _gate_q_9, _gate_q_12;
  cx _gate_q_9, _gate_q_10;
  cu1_5074001824(5.988909786190606) _gate_q_0, _gate_q_5;
  p(3.54729306209225) _gate_q_8;
  cu1_5073994384(5.433033590151572) _gate_q_12, _gate_q_6;
  t _gate_q_2;
  rzz_5073998656(0.6285121779124352) _gate_q_4, _gate_q_11;
  sx _gate_q_1;
  cx _gate_q_3, _gate_q_7;
  ch _gate_q_2, _gate_q_3;
  rz(1.3753618745421865) _gate_q_11;
  cy _gate_q_12, _gate_q_6;
  xx_minus_yy_5073999904(5.737581340951086, 2.8817579709748715) _gate_q_5, _gate_q_0;
  cp(3.8877686845216726) _gate_q_10, _gate_q_4;
  h _gate_q_9;
  rx(4.8319498820546665) _gate_q_8;
  h _gate_q_7;
  p(5.244775617993684) _gate_q_1;
  crz(0.5265306641890727) _gate_q_6, _gate_q_1;
  iswap _gate_q_0, _gate_q_4;
  swap _gate_q_8, _gate_q_7;
  p(3.8546076186251015) _gate_q_10;
  u2(0.2375456705427783, 0.3240262762051537) _gate_q_12;
  xx_plus_yy_5073994240(5.903879187934431, 1.8513995685499793) _gate_q_11, _gate_q_2;
  iswap _gate_q_5, _gate_q_3;
  rx(0.18642811416059688) _gate_q_9;
  iswap _gate_q_7, _gate_q_12;
  x _gate_q_4;
  U(6.063790676118519, 0.37437001083678184, 2.439329703336138) _gate_q_8;
  p(2.221945532460716) _gate_q_0;
  cu(2.1679188288835762, 0.8819819474605118, 3.2908587754136724, 1.637234699579158) _gate_q_10, _gate_q_6;
  h _gate_q_1;
  u3(4.357650951173524, 0.9345158094805026, 5.635452923128835) _gate_q_2;
  swap _gate_q_9, _gate_q_5;
  xx_plus_yy_4315967808(1.5818822999538025, 1.4301217953922858) _gate_q_3, _gate_q_11;
  cz _gate_q_11, _gate_q_1;
  rzx_5062728768(5.434165656135118) _gate_q_10, _gate_q_5;
  csx _gate_q_2, _gate_q_4;
  sxdg _gate_q_6;
  xx_plus_yy_5062722912(1.3349525041762424, 2.213912704050117) _gate_q_7, _gate_q_0;
  crz(5.905460413761209) _gate_q_12, _gate_q_8;
  cy _gate_q_3, _gate_q_9;
  p(3.455345349149672) _gate_q_10;
  ry(0.37002829369483925) _gate_q_2;
  r_5074272624(5.184271581491818, 5.669794446849649) _gate_q_9;
  crx(2.1976176377516112) _gate_q_4, _gate_q_3;
  sdg _gate_q_5;
  cp(4.8429958774076995) _gate_q_7, _gate_q_8;
  dcx _gate_q_0, _gate_q_11;
  p(5.376729435790369) _gate_q_1;
  cp(2.9620055237935237) _gate_q_12, _gate_q_6;
  cry(1.2831642897418416) _gate_q_12, _gate_q_3;
  rxx_5074278768(0.6417623048216584) _gate_q_8, _gate_q_9;
  r_5074283568(3.6113213325760225, 3.7756170627382173) _gate_q_1;
  csdg _gate_q_5, _gate_q_0;
  cx _gate_q_2, _gate_q_10;
  rxx_5074282416(1.9117362948365861) _gate_q_6, _gate_q_11;
  rz(2.5222902658984445) _gate_q_7;
  tdg _gate_q_4;
  iswap _gate_q_7, _gate_q_0;
  t _gate_q_4;
  ecr _gate_q_2, _gate_q_10;
  rzz_5074273392(0.5187478789797575) _gate_q_5, _gate_q_11;
  x _gate_q_3;
  iswap _gate_q_6, _gate_q_9;
  cu3_5074279632(3.170910188623086, 2.6788249203977545, 0.21791998303381865) _gate_q_1, _gate_q_12;
  u2(4.437888331853583, 1.0092413568568408) _gate_q_8;
  tdg _gate_q_7;
  rxx_5074279104(2.9880709740600246) _gate_q_9, _gate_q_10;
  cu1_5074233408(0.061023404070968956) _gate_q_8, _gate_q_4;
  rzz_5074225008(0.4893129564371041) _gate_q_11, _gate_q_1;
  t _gate_q_6;
  u3(5.051429362451442, 0.38652990485679334, 5.760514580191567) _gate_q_0;
  sx _gate_q_2;
  rxx_5074234224(3.2728207412853414) _gate_q_3, _gate_q_12;
  s _gate_q_5;
}