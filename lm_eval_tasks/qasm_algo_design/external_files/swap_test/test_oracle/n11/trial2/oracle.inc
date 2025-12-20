gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105792784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0937043969639948, -0.6046597607939841, 0.6046597607939841) _gate_q_0;
}
gate cu3_5105793744(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.758116300084603) _gate_q_0;
  u1(0.07724217415587864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2889034831540487, 0, -3.758116300084603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2889034831540487, 3.6808741259287245, 0) _gate_q_1;
}
gate rzz_5105787552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.379756782811103) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105782368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3438748373897624) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.814317261058653) _gate_q_0;
  ry(-2.814317261058653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3438748373897624) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5105791968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9183460191295039, 2.6347016774150473, -2.6347016774150473) _gate_q_0;
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
gate xx_minus_yy_5105779824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.901400216110205) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9571734879173688) _gate_q_0;
  ry(-1.9571734879173688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.901400216110205) _gate_q_1;
}
gate cu1_5105787216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0750919058886648) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0750919058886648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0750919058886648) _gate_q_1;
}
gate xx_minus_yy_5105789616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6233765473179131) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2165654363235825) _gate_q_0;
  ry(-0.2165654363235825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6233765473179131) _gate_q_1;
}
gate rzz_5105785824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.4850200201096152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105782560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.999962948126216) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7670404488832194) _gate_q_0;
  ry(-1.7670404488832194) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.999962948126216) _gate_q_1;
}
gate rzz_5105794656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.994049425639967) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105787024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.990699177434936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105794704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.374017446023274) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105790384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3084488891917795) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3084488891917795) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3084488891917795) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cp(2.57419823857874) _gate_q_1, _gate_q_4;
  ch _gate_q_6, _gate_q_8;
  U(4.911138457548707, 0.25135043565585413, 6.201691720328472) _gate_q_3;
  cz _gate_q_0, _gate_q_10;
  u3(3.8330133506533866, 1.0259583032625614, 3.3807824357909757) _gate_q_5;
  rx(2.5632399422499668) _gate_q_7;
  dcx _gate_q_9, _gate_q_2;
  U(0.8684405874676188, 6.120719969282725, 1.609154376628286) _gate_q_2;
  u2(1.8239652700259894, 0.45892818184983614) _gate_q_4;
  r_5105792784(1.0937043969639948, 0.9661365660009125) _gate_q_5;
  cu3_5105793744(0.5778069663080974, 3.6808741259287245, 3.835358474240482) _gate_q_10, _gate_q_7;
  rzz_5105787552(3.379756782811103) _gate_q_6, _gate_q_3;
  u1(2.5717873514137093) _gate_q_9;
  tdg _gate_q_8;
  rz(1.2847588255108806) _gate_q_0;
  u3(0.36634376675010116, 2.674882677833847, 5.819535858908777) _gate_q_1;
  crz(3.814551819794323) _gate_q_5, _gate_q_3;
  crz(6.117225220842095) _gate_q_2, _gate_q_6;
  u1(2.7004803085596842) _gate_q_7;
  ecr _gate_q_0, _gate_q_10;
  h _gate_q_8;
  tdg _gate_q_9;
  xx_minus_yy_5105782368(5.628634522117306, 2.3438748373897624) _gate_q_1, _gate_q_4;
  p(5.139042619469577) _gate_q_1;
  ry(2.2841072802088807) _gate_q_10;
  tdg _gate_q_7;
  s _gate_q_8;
  cx _gate_q_4, _gate_q_6;
  iswap _gate_q_9, _gate_q_5;
  csdg _gate_q_2, _gate_q_0;
  x _gate_q_3;
  r_5105791968(1.9183460191295039, 4.205498004209944) _gate_q_0;
  csx _gate_q_4, _gate_q_2;
  cy _gate_q_6, _gate_q_1;
  cu(0.7172605699926535, 5.903438910536094, 0.578030724848794, 0.328924294123513) _gate_q_3, _gate_q_7;
  sx _gate_q_8;
  xx_minus_yy_5105779824(3.9143469758347376, 4.901400216110205) _gate_q_5, _gate_q_9;
  s _gate_q_10;
  cu1_5105787216(2.1501838117773295) _gate_q_9, _gate_q_3;
  cx _gate_q_2, _gate_q_6;
  y _gate_q_4;
  xx_minus_yy_5105789616(0.433130872647165, 1.6233765473179131) _gate_q_1, _gate_q_5;
  cry(4.9560607078583745) _gate_q_8, _gate_q_0;
  cx _gate_q_10, _gate_q_7;
  dcx _gate_q_6, _gate_q_7;
  t _gate_q_4;
  cry(1.737076595156042) _gate_q_9, _gate_q_2;
  t _gate_q_5;
  rzz_5105785824(0.4850200201096152) _gate_q_1, _gate_q_10;
  y _gate_q_3;
  dcx _gate_q_0, _gate_q_8;
  s _gate_q_1;
  u2(2.6129282205341333, 4.1481467293577285) _gate_q_9;
  x _gate_q_0;
  s _gate_q_5;
  h _gate_q_8;
  xx_minus_yy_5105782560(3.534080897766439, 2.999962948126216) _gate_q_4, _gate_q_6;
  u2(3.3635391426643717, 2.469324494345484) _gate_q_2;
  ecr _gate_q_10, _gate_q_7;
  sxdg _gate_q_3;
  u1(5.2017238858916945) _gate_q_3;
  rzz_5105794656(2.994049425639967) _gate_q_0, _gate_q_9;
  rzz_5105787024(4.990699177434936) _gate_q_1, _gate_q_8;
  u1(6.064030897746972) _gate_q_10;
  U(4.534900585712739, 0.7862953250576289, 5.829027717256976) _gate_q_4;
  sdg _gate_q_2;
  sdg _gate_q_6;
  csdg _gate_q_5, _gate_q_7;
  cy _gate_q_9, _gate_q_0;
  rxx_5105794704(2.374017446023274) _gate_q_8, _gate_q_4;
  rz(4.642940109365849) _gate_q_6;
  s _gate_q_2;
  z _gate_q_7;
  cu1_5105790384(0.616897778383559) _gate_q_10, _gate_q_1;
  y _gate_q_5;
  h _gate_q_3;
}
gate rxx_5105782080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3801906029104245) _gate_q_1;
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
gate r_5105785056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.892140195860401, 1.1751998114553524, -1.1751998114553524) _gate_q_0;
}
gate r_5105793072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.690057252889673, 4.312713198039313, -4.312713198039313) _gate_q_0;
}
gate cu1_5105781360(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.408640870991508) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.408640870991508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.408640870991508) _gate_q_1;
}
gate r_5105779200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.5842536414257795, -0.12907574484522355, 0.12907574484522355) _gate_q_0;
}
gate cu3_5105779056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.462352454545991) _gate_q_0;
  u1(0.4960720171144515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9787460839238573, 0, -5.462352454545991) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9787460839238573, 4.966280437431539, 0) _gate_q_1;
}
gate rxx_5105780496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.11107187700524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5103921024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5573623073253686) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0824060641275692) _gate_q_1;
  ry(-2.0824060641275692) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5573623073253686) _gate_q_0;
}
gate rzx_5103925392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4327434138830694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5103924960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7600339610428488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5103926928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9142540732085327) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9142540732085327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9142540732085327) _gate_q_1;
}
gate cu1_5103920160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5170801457203831) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5170801457203831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5170801457203831) _gate_q_1;
}
gate rzz_5103926400(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.736396087749904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5103916800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8821406237866173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cp(6.0509115236260005) _gate_q_3, _gate_q_5;
  crz(3.8828982316481984) _gate_q_8, _gate_q_10;
  csx _gate_q_1, _gate_q_6;
  ecr _gate_q_7, _gate_q_2;
  rxx_5105782080(1.3801906029104245) _gate_q_9, _gate_q_4;
  p(6.2365551072876135) _gate_q_0;
  x _gate_q_7;
  cs _gate_q_8, _gate_q_0;
  cp(5.988718964768902) _gate_q_2, _gate_q_6;
  csdg _gate_q_9, _gate_q_1;
  r_5105785056(4.892140195860401, 2.745996138250249) _gate_q_4;
  crz(5.11638075856693) _gate_q_5, _gate_q_3;
  u3(3.2871200788830475, 1.3278613628875762, 0.03198893637146485) _gate_q_10;
  p(1.8295339420258148) _gate_q_2;
  cy _gate_q_6, _gate_q_7;
  r_5105793072(2.690057252889673, 5.88350952483421) _gate_q_10;
  x _gate_q_1;
  cu1_5105781360(2.817281741983016) _gate_q_0, _gate_q_4;
  u3(2.16007088537429, 5.383133190646622, 4.731233745684673) _gate_q_8;
  r_5105779200(4.5842536414257795, 1.441720581949673) _gate_q_3;
  rx(0.9410321119272966) _gate_q_5;
  ry(4.333768214296305) _gate_q_9;
  crx(5.108167765933111) _gate_q_0, _gate_q_7;
  sx _gate_q_5;
  cy _gate_q_1, _gate_q_10;
  y _gate_q_4;
  id _gate_q_6;
  cx _gate_q_8, _gate_q_2;
  cs _gate_q_9, _gate_q_3;
  cy _gate_q_8, _gate_q_1;
  swap _gate_q_3, _gate_q_5;
  swap _gate_q_10, _gate_q_9;
  rx(4.94320262011949) _gate_q_0;
  cu3_5105779056(3.9574921678477146, 4.966280437431539, 5.958424471660442) _gate_q_6, _gate_q_7;
  cx _gate_q_2, _gate_q_4;
  t _gate_q_1;
  rxx_5105780496(6.11107187700524) _gate_q_7, _gate_q_10;
  cz _gate_q_2, _gate_q_5;
  u3(3.4343652378145832, 3.1446996649280603, 6.092299719216842) _gate_q_9;
  id _gate_q_6;
  swap _gate_q_3, _gate_q_4;
  ry(0.5809425802918086) _gate_q_8;
  ry(1.6141838984894372) _gate_q_0;
  crz(2.54326301748559) _gate_q_0, _gate_q_10;
  cry(2.824791590124423) _gate_q_8, _gate_q_1;
  u1(2.8424153797576874) _gate_q_6;
  sxdg _gate_q_3;
  rx(0.09174305171451175) _gate_q_4;
  xx_plus_yy_5103921024(4.1648121282551385, 1.5573623073253686) _gate_q_7, _gate_q_5;
  csx _gate_q_9, _gate_q_2;
  rx(5.34060085525705) _gate_q_6;
  rzx_5103925392(0.4327434138830694) _gate_q_10, _gate_q_3;
  h _gate_q_5;
  cs _gate_q_9, _gate_q_0;
  tdg _gate_q_2;
  rxx_5103924960(0.7600339610428488) _gate_q_4, _gate_q_8;
  dcx _gate_q_7, _gate_q_1;
  cu1_5103926928(5.828508146417065) _gate_q_1, _gate_q_5;
  sxdg _gate_q_8;
  iswap _gate_q_0, _gate_q_10;
  cu1_5103920160(1.0341602914407662) _gate_q_2, _gate_q_7;
  cs _gate_q_3, _gate_q_6;
  cry(1.6374724155672478) _gate_q_9, _gate_q_4;
  rzz_5103926400(4.736396087749904) _gate_q_7, _gate_q_0;
  crz(5.820614151345674) _gate_q_9, _gate_q_10;
  p(1.2356299185655633) _gate_q_5;
  u3(5.839332765981134, 4.164594017483664, 5.07594760534899) _gate_q_2;
  rzz_5103916800(0.8821406237866173) _gate_q_3, _gate_q_6;
  p(3.1920164799688733) _gate_q_8;
  u1(2.1064748436046354) _gate_q_1;
  rz(0.10277529125692751) _gate_q_4;
}