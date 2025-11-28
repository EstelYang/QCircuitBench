gate ryy_5105594880(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5508785101353286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105595120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.0718587111902814, -0.5005726300321263, 0.5005726300321263) _gate_q_0;
}
gate rxx_5105594544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.468273324995833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105586048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0301548072326272) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8756064520268659) _gate_q_1;
  ry(-0.8756064520268659) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0301548072326272) _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5105592240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3285198945222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5105584368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.558753200580931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105598384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2325430393666863) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2325430393666863) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2325430393666863) _gate_q_1;
}
gate r_5105587008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.046100676663889, -0.14582278268539461, 0.14582278268539461) _gate_q_0;
}
gate rzz_5105582544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.171778181519815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5105590560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.298632470322328) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105598144(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.385805266578285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105593056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.274847203510231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105588064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.192801098283564) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6985792477026576) _gate_q_0;
  ry(-1.6985792477026576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.192801098283564) _gate_q_1;
}
gate rzz_5105586144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.8005072459951257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105596464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8363138527331735) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.08606287104613) _gate_q_0;
  ry(-3.08606287104613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8363138527331735) _gate_q_1;
}
gate xx_plus_yy_5105588928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.0081685043460435) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7324935214088435) _gate_q_1;
  ry(-2.7324935214088435) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.0081685043460435) _gate_q_0;
}
gate xx_plus_yy_5105584320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4611495254131313) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.195157478940597) _gate_q_1;
  ry(-2.195157478940597) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4611495254131313) _gate_q_0;
}
gate rxx_5105588304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0954302812954528) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105593296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.038340450930179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105593920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.84923596586991, -0.30480320687899254, 0.30480320687899254) _gate_q_0;
}
gate rxx_5105596896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7353453250762176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105596320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.730110952272654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105583360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.459441213058127, 4.494820585918767, -4.494820585918767) _gate_q_0;
}
gate cu1_5105590128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5662998275580777) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5662998275580777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5662998275580777) _gate_q_1;
}
gate rxx_5105583888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.044048028825362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105587920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3713877325312205, 0.7986826593115675, -0.7986826593115675) _gate_q_0;
}
gate rzz_5105582832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.326417778230021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105589024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.33076409501150933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  t _gate_q_5;
  crz(0.5544206759376012) _gate_q_3, _gate_q_12;
  ryy_5105594880(1.5508785101353286) _gate_q_16, _gate_q_7;
  ry(2.9405390978115262) _gate_q_14;
  sx _gate_q_6;
  cu(3.2023693348467233, 3.4327553689148242, 0.02313645284635599, 0.8110053840933001) _gate_q_13, _gate_q_2;
  r_5105595120(0.0718587111902814, 1.0702236967627703) _gate_q_0;
  s _gate_q_15;
  z _gate_q_8;
  t _gate_q_11;
  rxx_5105594544(1.468273324995833) _gate_q_1, _gate_q_4;
  xx_plus_yy_5105586048(1.7512129040537319, 1.0301548072326272) _gate_q_10, _gate_q_9;
  cu(4.6412621014105016, 1.4629362984819496, 0.11898082626033434, 3.899155045138903) _gate_q_11, _gate_q_3;
  sxdg _gate_q_0;
  csx _gate_q_16, _gate_q_12;
  t _gate_q_5;
  U(5.532285170211656, 0.090833637752672, 3.938813536754139) _gate_q_7;
  ry(2.6782241537109726) _gate_q_1;
  cs _gate_q_2, _gate_q_14;
  sx _gate_q_15;
  id _gate_q_9;
  tdg _gate_q_6;
  ryy_5105592240(5.3285198945222) _gate_q_13, _gate_q_8;
  u1(1.9595664401549049) _gate_q_10;
  s _gate_q_4;
  dcx _gate_q_8, _gate_q_7;
  crz(1.9046410459101943) _gate_q_13, _gate_q_4;
  dcx _gate_q_0, _gate_q_11;
  iswap _gate_q_9, _gate_q_5;
  rxx_5105584368(5.558753200580931) _gate_q_10, _gate_q_1;
  dcx _gate_q_12, _gate_q_14;
  u3(1.3862580749309426, 1.233636034304715, 4.874360226594353) _gate_q_2;
  sxdg _gate_q_3;
  u2(3.813760637730329, 4.858727270425509) _gate_q_16;
  iswap _gate_q_15, _gate_q_6;
  cu1_5105598384(2.4650860787333726) _gate_q_16, _gate_q_4;
  csx _gate_q_12, _gate_q_6;
  cp(1.310519512093639) _gate_q_5, _gate_q_1;
  cp(0.2760461223365882) _gate_q_2, _gate_q_9;
  r_5105587008(6.046100676663889, 1.424973544109502) _gate_q_7;
  cs _gate_q_14, _gate_q_11;
  rx(4.37770100029809) _gate_q_10;
  u3(4.4701567223557115, 4.355601927982262, 4.673812955096383) _gate_q_13;
  sxdg _gate_q_3;
  h _gate_q_8;
  cs _gate_q_0, _gate_q_15;
  crz(6.256607420126309) _gate_q_0, _gate_q_1;
  u1(2.863159938251219) _gate_q_7;
  rzz_5105582544(4.171778181519815) _gate_q_6, _gate_q_2;
  ecr _gate_q_3, _gate_q_12;
  t _gate_q_10;
  csdg _gate_q_13, _gate_q_9;
  rx(4.517656077143259) _gate_q_4;
  u3(0.6997449133852692, 1.154082373608439, 1.4294532877704496) _gate_q_5;
  h _gate_q_14;
  rxx_5105590560(4.298632470322328) _gate_q_8, _gate_q_16;
  sdg _gate_q_11;
  u3(5.459045378449864, 1.6345305133388246, 4.12588009852275) _gate_q_15;
  ryy_5105598144(2.385805266578285) _gate_q_0, _gate_q_11;
  cp(2.7844497606821044) _gate_q_15, _gate_q_13;
  cz _gate_q_9, _gate_q_3;
  s _gate_q_10;
  u1(2.436362955149373) _gate_q_2;
  rzx_5105593056(6.274847203510231) _gate_q_1, _gate_q_12;
  xx_minus_yy_5105588064(3.397158495405315, 5.192801098283564) _gate_q_6, _gate_q_7;
  cy _gate_q_4, _gate_q_14;
  rzz_5105586144(2.8005072459951257) _gate_q_8, _gate_q_5;
  u2(0.8558543125940871, 1.7619088306873922) _gate_q_16;
  ecr _gate_q_1, _gate_q_4;
  y _gate_q_9;
  dcx _gate_q_6, _gate_q_7;
  xx_minus_yy_5105596464(6.17212574209226, 2.8363138527331735) _gate_q_14, _gate_q_13;
  xx_plus_yy_5105588928(5.464987042817687, 2.0081685043460435) _gate_q_5, _gate_q_12;
  y _gate_q_10;
  crz(1.13160420412545) _gate_q_11, _gate_q_16;
  sdg _gate_q_2;
  ry(0.31250189329206546) _gate_q_15;
  xx_plus_yy_5105584320(4.390314957881194, 1.4611495254131313) _gate_q_8, _gate_q_3;
  u2(0.2642064190781089, 5.24465295036726) _gate_q_0;
  U(5.083699621306106, 4.1893723294752725, 2.766819425096412) _gate_q_6;
  rxx_5105588304(1.0954302812954528) _gate_q_15, _gate_q_12;
  p(5.084308388263841) _gate_q_13;
  rxx_5105593296(5.038340450930179) _gate_q_16, _gate_q_0;
  r_5105593920(2.84923596586991, 1.265993119915904) _gate_q_14;
  rxx_5105596896(1.7353453250762176) _gate_q_11, _gate_q_7;
  ecr _gate_q_4, _gate_q_2;
  id _gate_q_3;
  ch _gate_q_10, _gate_q_9;
  ryy_5105596320(5.730110952272654) _gate_q_1, _gate_q_8;
  rz(2.1312231719956727) _gate_q_5;
  s _gate_q_10;
  x _gate_q_5;
  r_5105583360(5.459441213058127, 6.065616912713663) _gate_q_0;
  cu1_5105590128(1.1325996551161555) _gate_q_4, _gate_q_11;
  csdg _gate_q_13, _gate_q_14;
  rxx_5105583888(3.044048028825362) _gate_q_7, _gate_q_3;
  cx _gate_q_12, _gate_q_15;
  u3(5.220173259833151, 1.6192902915738328, 2.8994057772063564) _gate_q_16;
  rz(2.094722317598146) _gate_q_8;
  z _gate_q_6;
  ecr _gate_q_2, _gate_q_9;
  r_5105587920(3.3713877325312205, 2.369478986106464) _gate_q_1;
  cry(6.23984378264243) _gate_q_2, _gate_q_10;
  rx(3.136454685159334) _gate_q_11;
  rzz_5105582832(3.326417778230021) _gate_q_0, _gate_q_3;
  csx _gate_q_13, _gate_q_4;
  sdg _gate_q_14;
  cp(3.179118629489147) _gate_q_16, _gate_q_15;
  rxx_5105589024(0.33076409501150933) _gate_q_12, _gate_q_1;
  csx _gate_q_9, _gate_q_7;
  p(2.3901564605052252) _gate_q_8;
  csdg _gate_q_5, _gate_q_6;
}
gate rzx_5104274848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6572699385736933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5104284592(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.740700905004954, 4.295706432657757, -4.295706432657757) _gate_q_0;
}
gate rzz_5104276096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.494889317198195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5104271920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8767469786432347) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0782932611660354) _gate_q_1;
  ry(-3.0782932611660354) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8767469786432347) _gate_q_0;
}
gate xx_minus_yy_5104273840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3270861760761994) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.727242938456529) _gate_q_0;
  ry(-2.727242938456529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3270861760761994) _gate_q_1;
}
gate rzx_5104287568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3960375858623886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5104278160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4263029710015624) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4263029710015624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4263029710015624) _gate_q_1;
}
gate cu3_5104275568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1006700062171766) _gate_q_0;
  u1(0.6171971679465251) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.114539369126936, 0, -3.1006700062171766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.114539369126936, 2.4834728382706515, 0) _gate_q_1;
}
gate rzz_5104287424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.126805646039318) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5104279264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.559654430202337) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0050265647818817) _gate_q_1;
  ry(-2.0050265647818817) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.559654430202337) _gate_q_0;
}
gate rzx_5104287232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7821599560391346) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5104279984(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.183607932777006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5104287616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.227985894615323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5104275472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.337900864500496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  ch _gate_q_7, _gate_q_4;
  rzx_5104274848(0.6572699385736933) _gate_q_16, _gate_q_13;
  U(0.33166489740257993, 1.6930502707596895, 2.650972550308172) _gate_q_12;
  swap _gate_q_6, _gate_q_1;
  cx _gate_q_11, _gate_q_0;
  r_5104284592(5.740700905004954, 5.866502759452653) _gate_q_9;
  t _gate_q_2;
  ch _gate_q_3, _gate_q_5;
  cy _gate_q_8, _gate_q_15;
  swap _gate_q_10, _gate_q_14;
  tdg _gate_q_9;
  cx _gate_q_12, _gate_q_11;
  id _gate_q_16;
  h _gate_q_14;
  z _gate_q_2;
  rzz_5104276096(5.494889317198195) _gate_q_1, _gate_q_0;
  csdg _gate_q_5, _gate_q_3;
  crx(2.9555982882923826) _gate_q_8, _gate_q_4;
  cx _gate_q_7, _gate_q_13;
  cry(1.944696897902794) _gate_q_10, _gate_q_6;
  sdg _gate_q_15;
  csdg _gate_q_12, _gate_q_0;
  csdg _gate_q_14, _gate_q_5;
  cx _gate_q_13, _gate_q_7;
  cry(1.2466270847111685) _gate_q_9, _gate_q_2;
  dcx _gate_q_1, _gate_q_10;
  id _gate_q_4;
  csdg _gate_q_11, _gate_q_8;
  sdg _gate_q_15;
  rz(0.4190283696955618) _gate_q_3;
  iswap _gate_q_6, _gate_q_16;
  s _gate_q_12;
  ch _gate_q_14, _gate_q_9;
  y _gate_q_1;
  swap _gate_q_0, _gate_q_2;
  ry(0.512710393115006) _gate_q_8;
  csdg _gate_q_16, _gate_q_4;
  swap _gate_q_5, _gate_q_11;
  u1(3.8773669082754227) _gate_q_10;
  sx _gate_q_15;
  U(5.9371490099326145, 2.7424826490584597, 3.0696989418127556) _gate_q_6;
  xx_plus_yy_5104271920(6.156586522332071, 2.8767469786432347) _gate_q_3, _gate_q_13;
  u1(4.112759997909329) _gate_q_7;
  xx_minus_yy_5104273840(5.454485876913058, 3.3270861760761994) _gate_q_8, _gate_q_0;
  crx(5.366142167498891) _gate_q_7, _gate_q_14;
  sx _gate_q_5;
  cry(3.455421166654622) _gate_q_12, _gate_q_15;
  dcx _gate_q_2, _gate_q_13;
  rzx_5104287568(2.3960375858623886) _gate_q_10, _gate_q_11;
  y _gate_q_6;
  sx _gate_q_3;
  crz(0.5249519991217203) _gate_q_1, _gate_q_16;
  cy _gate_q_9, _gate_q_4;
  cu1_5104278160(2.852605942003125) _gate_q_11, _gate_q_4;
  cu3_5104275568(4.229078738253872, 2.4834728382706515, 3.7178671741637017) _gate_q_10, _gate_q_5;
  rzz_5104287424(4.126805646039318) _gate_q_12, _gate_q_15;
  csx _gate_q_8, _gate_q_6;
  u3(6.061628418048302, 0.4165672191813275, 4.888842307698808) _gate_q_14;
  cp(1.1240668937682032) _gate_q_16, _gate_q_13;
  rz(2.3340778157931172) _gate_q_0;
  id _gate_q_1;
  cy _gate_q_9, _gate_q_3;
  sdg _gate_q_7;
  id _gate_q_2;
  cry(0.2444824206159268) _gate_q_11, _gate_q_1;
  cp(2.3035077007812403) _gate_q_8, _gate_q_12;
  xx_plus_yy_5104279264(4.010053129563763, 5.559654430202337) _gate_q_13, _gate_q_16;
  u1(4.6992980568986065) _gate_q_15;
  swap _gate_q_3, _gate_q_0;
  cry(4.976474576087529) _gate_q_5, _gate_q_9;
  id _gate_q_2;
  cry(0.13180107170533586) _gate_q_14, _gate_q_4;
  rzx_5104287232(1.7821599560391346) _gate_q_7, _gate_q_6;
  sx _gate_q_10;
  cx _gate_q_1, _gate_q_8;
  csx _gate_q_6, _gate_q_7;
  cp(1.964439340735595) _gate_q_12, _gate_q_3;
  cy _gate_q_9, _gate_q_14;
  u3(3.2892792001054705, 0.42397310596891524, 2.375431435374994) _gate_q_11;
  h _gate_q_10;
  cu(4.928979331084335, 2.520756366705245, 0.7486196962016098, 3.0556718920680996) _gate_q_2, _gate_q_16;
  ry(0.9753227147081748) _gate_q_15;
  cs _gate_q_13, _gate_q_4;
  ecr _gate_q_0, _gate_q_5;
  p(4.874040802515108) _gate_q_7;
  csx _gate_q_12, _gate_q_4;
  cs _gate_q_3, _gate_q_6;
  csdg _gate_q_2, _gate_q_5;
  rzz_5104279984(4.183607932777006) _gate_q_15, _gate_q_1;
  ryy_5104287616(5.227985894615323) _gate_q_0, _gate_q_16;
  cs _gate_q_8, _gate_q_9;
  cu(1.5190231628777917, 4.418096928269522, 2.7762633499009794, 3.464623593477436) _gate_q_13, _gate_q_10;
  iswap _gate_q_14, _gate_q_11;
  cu(0.1971267342474716, 0.2128671078458835, 2.5736993050722243, 5.748956056329736) _gate_q_12, _gate_q_11;
  ryy_5104275472(2.337900864500496) _gate_q_8, _gate_q_14;
  id _gate_q_13;
  sx _gate_q_3;
  sdg _gate_q_0;
  iswap _gate_q_1, _gate_q_16;
  h _gate_q_9;
  sx _gate_q_10;
  cu(1.7448676067262179, 2.7472632611793295, 2.334606761622421, 3.5189528991792445) _gate_q_5, _gate_q_6;
  cu(3.5948431470604145, 1.6873637773958088, 5.998415788103215, 1.618911699787485) _gate_q_7, _gate_q_2;
  ch _gate_q_15, _gate_q_4;
}