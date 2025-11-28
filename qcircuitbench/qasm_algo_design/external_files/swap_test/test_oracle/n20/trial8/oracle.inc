gate cu1_5107070928(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3327130564288465) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3327130564288465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3327130564288465) _gate_q_1;
}
gate rzz_5107060080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.010013140834108) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5107071552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.870008633969054) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.14939840286889872) _gate_q_1;
  ry(-0.14939840286889872) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.870008633969054) _gate_q_0;
}
gate cu3_5107058400(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.248078129771178) _gate_q_0;
  u1(-0.06694215653155666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2937601751468137, 0, -5.248078129771178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2937601751468137, 5.315020286302735, 0) _gate_q_1;
}
gate xx_plus_yy_5107064736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.1464726690054014) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5222019220573073) _gate_q_1;
  ry(-2.5222019220573073) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.1464726690054014) _gate_q_0;
}
gate r_5107067136(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.228959012284643, 1.8868567858668044, -1.8868567858668044) _gate_q_0;
}
gate xx_plus_yy_5107066512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.582825582074477) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.955585152400362) _gate_q_1;
  ry(-0.955585152400362) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.582825582074477) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate xx_plus_yy_5107063776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.806718825182884) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6529728795863805) _gate_q_1;
  ry(-1.6529728795863805) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.806718825182884) _gate_q_0;
}
gate xx_minus_yy_5107059792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.290892300437547) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6106621095437762) _gate_q_0;
  ry(-0.6106621095437762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.290892300437547) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5107057104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.355236324057477) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107066896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9302549814385812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107069968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8879710888740218, 2.6462740756556817, -2.6462740756556817) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5107058784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.164917578353649) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107059744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.522925904874322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107071120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1399113226211925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5107071888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9884641473039172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107068528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.453672019635672) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9020489711239215) _gate_q_0;
  ry(-2.9020489711239215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.453672019635672) _gate_q_1;
}
gate ryy_5107065696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9069232708468156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107058448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.389335858682757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107070736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.878757882863737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107069728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.438884827058669) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107072080(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.859714592666101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107066608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.286921578925951) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5771926927589839) _gate_q_0;
  ry(-1.5771926927589839) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.286921578925951) _gate_q_1;
}
gate rzx_5107061328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8160411990606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107064496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.485380648671418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cu1_5107070928(2.665426112857693) _gate_q_19, _gate_q_5;
  id _gate_q_17;
  rzz_5107060080(6.010013140834108) _gate_q_12, _gate_q_0;
  xx_plus_yy_5107071552(0.29879680573779743, 0.870008633969054) _gate_q_10, _gate_q_15;
  cz _gate_q_11, _gate_q_1;
  crz(1.8838589669790677) _gate_q_18, _gate_q_4;
  cu3_5107058400(4.5875203502936275, 5.315020286302735, 5.181135973239622) _gate_q_7, _gate_q_6;
  u2(3.8983854269867706, 4.417783413327439) _gate_q_8;
  U(2.86780483279316, 2.679092083079108, 3.038751654135093) _gate_q_16;
  xx_plus_yy_5107064736(5.044403844114615, 0.1464726690054014) _gate_q_13, _gate_q_14;
  cz _gate_q_9, _gate_q_3;
  r_5107067136(5.228959012284643, 3.457653112661701) _gate_q_2;
  xx_plus_yy_5107066512(1.911170304800724, 5.582825582074477) _gate_q_4, _gate_q_0;
  cs _gate_q_11, _gate_q_18;
  sdg _gate_q_6;
  swap _gate_q_5, _gate_q_15;
  swap _gate_q_2, _gate_q_3;
  ecr _gate_q_16, _gate_q_10;
  xx_plus_yy_5107063776(3.305945759172761, 2.806718825182884) _gate_q_12, _gate_q_9;
  xx_minus_yy_5107059792(1.2213242190875524, 2.290892300437547) _gate_q_19, _gate_q_14;
  p(1.521954698400061) _gate_q_7;
  sx _gate_q_17;
  rz(5.410876948549822) _gate_q_1;
  iswap _gate_q_13, _gate_q_8;
  sxdg _gate_q_17;
  dcx _gate_q_7, _gate_q_9;
  rzz_5107057104(3.355236324057477) _gate_q_4, _gate_q_18;
  ecr _gate_q_19, _gate_q_6;
  u2(0.5043339735366201, 0.08650303874827249) _gate_q_0;
  z _gate_q_3;
  ryy_5107066896(0.9302549814385812) _gate_q_16, _gate_q_2;
  z _gate_q_14;
  iswap _gate_q_10, _gate_q_8;
  ecr _gate_q_15, _gate_q_11;
  y _gate_q_1;
  cu(5.532898935317088, 1.1444115532471963, 2.6614877580566416, 4.1202231628494) _gate_q_5, _gate_q_12;
  t _gate_q_13;
  cry(0.5308342520812164) _gate_q_8, _gate_q_4;
  cp(2.888948101575335) _gate_q_2, _gate_q_0;
  ry(1.5587050059121328) _gate_q_12;
  cx _gate_q_7, _gate_q_15;
  crx(1.9118089453149103) _gate_q_18, _gate_q_6;
  ecr _gate_q_9, _gate_q_5;
  r_5107069968(2.8879710888740218, 4.217070402450578) _gate_q_10;
  u3(3.5326109380261266, 5.675913061568746, 2.521554089769538) _gate_q_17;
  cs _gate_q_19, _gate_q_11;
  u1(4.573861755175356) _gate_q_14;
  csdg _gate_q_1, _gate_q_3;
  tdg _gate_q_13;
  h _gate_q_16;
  id _gate_q_7;
  y _gate_q_1;
  t _gate_q_3;
  s _gate_q_16;
  s _gate_q_0;
  u3(1.17300909055838, 3.1506814393307003, 5.173640942424978) _gate_q_14;
  x _gate_q_10;
  tdg _gate_q_15;
  rzx_5107058784(6.164917578353649) _gate_q_2, _gate_q_17;
  rz(4.363670679936365) _gate_q_4;
  csdg _gate_q_11, _gate_q_8;
  rzx_5107059744(4.522925904874322) _gate_q_18, _gate_q_9;
  swap _gate_q_12, _gate_q_19;
  rx(0.881111748370046) _gate_q_13;
  ryy_5107071120(2.1399113226211925) _gate_q_6, _gate_q_5;
  ryy_5107071888(0.9884641473039172) _gate_q_3, _gate_q_15;
  p(0.7785043856649692) _gate_q_9;
  cs _gate_q_2, _gate_q_14;
  h _gate_q_8;
  cu(2.3729210129845324, 3.399250290212312, 3.273938089205254, 2.0091180828871535) _gate_q_4, _gate_q_11;
  swap _gate_q_17, _gate_q_13;
  z _gate_q_18;
  s _gate_q_1;
  u1(2.0758309767327705) _gate_q_16;
  xx_minus_yy_5107068528(5.804097942247843, 5.453672019635672) _gate_q_0, _gate_q_6;
  sx _gate_q_7;
  cz _gate_q_10, _gate_q_5;
  cry(3.697685131141185) _gate_q_12, _gate_q_19;
  sdg _gate_q_17;
  crz(4.519154446751255) _gate_q_5, _gate_q_15;
  ryy_5107065696(0.9069232708468156) _gate_q_11, _gate_q_8;
  sx _gate_q_1;
  id _gate_q_6;
  h _gate_q_0;
  t _gate_q_19;
  rx(4.9523498731774245) _gate_q_9;
  rz(1.9347011466573516) _gate_q_10;
  cry(5.40456638289303) _gate_q_14, _gate_q_2;
  rx(0.25804313843288396) _gate_q_16;
  u1(3.177437696664225) _gate_q_13;
  rxx_5107058448(5.389335858682757) _gate_q_3, _gate_q_4;
  sxdg _gate_q_18;
  u1(3.0022899806383663) _gate_q_7;
  sxdg _gate_q_12;
  p(4.3584575877087275) _gate_q_9;
  rz(0.7216810193059716) _gate_q_3;
  z _gate_q_6;
  rz(5.701592979592046) _gate_q_11;
  rxx_5107070736(4.878757882863737) _gate_q_15, _gate_q_1;
  s _gate_q_12;
  u3(2.0863942774898203, 6.110471290754506, 5.743402499187133) _gate_q_10;
  cy _gate_q_8, _gate_q_0;
  rxx_5107069728(4.438884827058669) _gate_q_4, _gate_q_14;
  ecr _gate_q_5, _gate_q_7;
  id _gate_q_18;
  dcx _gate_q_19, _gate_q_2;
  rx(6.261255078854042) _gate_q_16;
  p(3.545246661523282) _gate_q_13;
  u3(0.2604875377109963, 6.21101703846837, 6.0396838975897005) _gate_q_17;
  rx(3.1636794129618218) _gate_q_11;
  crz(4.428360622265794) _gate_q_2, _gate_q_7;
  crx(5.895759556728438) _gate_q_15, _gate_q_10;
  csdg _gate_q_1, _gate_q_4;
  csdg _gate_q_12, _gate_q_6;
  ry(4.52886975948307) _gate_q_18;
  U(2.833647503562876, 0.057586848500232525, 2.79520001770904) _gate_q_3;
  sdg _gate_q_9;
  swap _gate_q_17, _gate_q_8;
  csdg _gate_q_0, _gate_q_19;
  rzz_5107072080(1.859714592666101) _gate_q_13, _gate_q_5;
  dcx _gate_q_16, _gate_q_14;
  cz _gate_q_15, _gate_q_11;
  h _gate_q_16;
  ch _gate_q_18, _gate_q_12;
  p(1.204943622814973) _gate_q_0;
  xx_minus_yy_5107066608(3.1543853855179678, 5.286921578925951) _gate_q_1, _gate_q_9;
  ry(1.2071163894232126) _gate_q_19;
  cx _gate_q_7, _gate_q_10;
  rzx_5107061328(4.8160411990606) _gate_q_8, _gate_q_4;
  ry(4.56988325844931) _gate_q_5;
  tdg _gate_q_17;
  rzx_5107064496(5.485380648671418) _gate_q_13, _gate_q_14;
  id _gate_q_6;
  s _gate_q_2;
  t _gate_q_3;
}
gate rzx_5107063728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.18785213694717712) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107066944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.531309305804757) _gate_q_0;
  u1(-2.0323386020720893) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0612613437733747, 0, -3.531309305804757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0612613437733747, 5.563647907876846, 0) _gate_q_1;
}
gate rzx_5107064832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8143259207052296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107057008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.691535179866782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107066224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2591629145546372) _gate_q_0;
  u1(-0.7522994245131911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0460289208709874, 0, -1.2591629145546372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0460289208709874, 2.0114623390678283, 0) _gate_q_1;
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
gate ryy_5107067808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.0198268124076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107072176(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.7922946914731672) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.7922946914731672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.7922946914731672) _gate_q_1;
}
gate rxx_5107070544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.19236458904243367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107068144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.118950770970838) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9802773058676075) _gate_q_1;
  ry(-1.9802773058676075) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.118950770970838) _gate_q_0;
}
gate rxx_5107068864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.013704331233133245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107070496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.134876127673685, -0.7413009708183597, 0.7413009708183597) _gate_q_0;
}
gate xx_minus_yy_5107062720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.700188525929433) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1030863021707733) _gate_q_0;
  ry(-1.1030863021707733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.700188525929433) _gate_q_1;
}
gate rxx_5107068768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0716493949853265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107060944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.441481456236303, 4.513932882973569, -4.513932882973569) _gate_q_0;
}
gate r_5107065264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.539267285580177, -1.5093802787096986, 1.5093802787096986) _gate_q_0;
}
gate rzx_5107067616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4388062120297502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107062528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.028905423045738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107061040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4440100790561661) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4440100790561661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4440100790561661) _gate_q_1;
}
gate r_5107064304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.344130084776587, 4.455827975046136, -4.455827975046136) _gate_q_0;
}
gate ryy_5107059552(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.667881583520048) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107069104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.266049683357797) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3514323320417807) _gate_q_1;
  ry(-2.3514323320417807) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.266049683357797) _gate_q_0;
}
gate r_5107059696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.815494359974716, -0.41446756266206974, 0.41446756266206974) _gate_q_0;
}
gate rxx_5107064880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.816857475174652) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107065312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.141300984132018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107062960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.512338377376435) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0024698546795943) _gate_q_1;
  ry(-2.0024698546795943) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.512338377376435) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  rx(4.641818881889865) _gate_q_11;
  sx _gate_q_15;
  sdg _gate_q_9;
  rzx_5107063728(0.18785213694717712) _gate_q_19, _gate_q_1;
  sx _gate_q_0;
  csdg _gate_q_18, _gate_q_12;
  sdg _gate_q_6;
  cu3_5107066944(6.122522687546749, 5.563647907876846, 1.4989707037326676) _gate_q_3, _gate_q_17;
  cx _gate_q_8, _gate_q_10;
  dcx _gate_q_16, _gate_q_5;
  rzx_5107064832(3.8143259207052296) _gate_q_2, _gate_q_13;
  t _gate_q_7;
  rzx_5107057008(3.691535179866782) _gate_q_4, _gate_q_14;
  swap _gate_q_19, _gate_q_10;
  u2(4.745583818783444, 2.419273145691771) _gate_q_1;
  t _gate_q_2;
  cu3_5107066224(2.092057841741975, 2.0114623390678283, 0.5068634900414463) _gate_q_12, _gate_q_9;
  csx _gate_q_17, _gate_q_16;
  t _gate_q_15;
  iswap _gate_q_11, _gate_q_3;
  ryy_5107067808(4.0198268124076) _gate_q_5, _gate_q_4;
  rx(3.1282694077625233) _gate_q_6;
  csdg _gate_q_14, _gate_q_18;
  dcx _gate_q_13, _gate_q_7;
  cp(4.960558891059421) _gate_q_0, _gate_q_8;
  ecr _gate_q_0, _gate_q_16;
  cu1_5107072176(5.5845893829463344) _gate_q_1, _gate_q_2;
  h _gate_q_15;
  csx _gate_q_8, _gate_q_11;
  crx(4.733793284486787) _gate_q_3, _gate_q_9;
  cy _gate_q_5, _gate_q_17;
  t _gate_q_18;
  cz _gate_q_4, _gate_q_6;
  sdg _gate_q_14;
  rxx_5107070544(0.19236458904243367) _gate_q_13, _gate_q_10;
  U(1.8408975653646338, 0.5168039561093187, 3.4996896783767575) _gate_q_19;
  xx_plus_yy_5107068144(3.960554611735215, 4.118950770970838) _gate_q_7, _gate_q_12;
  cz _gate_q_2, _gate_q_17;
  cz _gate_q_19, _gate_q_10;
  cz _gate_q_16, _gate_q_0;
  s _gate_q_14;
  u2(4.694841740310589, 1.7543375492006885) _gate_q_3;
  iswap _gate_q_12, _gate_q_13;
  cry(4.28927511349412) _gate_q_9, _gate_q_1;
  rxx_5107068864(0.013704331233133245) _gate_q_6, _gate_q_11;
  y _gate_q_15;
  tdg _gate_q_4;
  csx _gate_q_7, _gate_q_5;
  cry(5.417186032454711) _gate_q_18, _gate_q_8;
  sxdg _gate_q_10;
  r_5107070496(3.134876127673685, 0.8294953559765369) _gate_q_1;
  xx_minus_yy_5107062720(2.2061726043415466, 0.700188525929433) _gate_q_16, _gate_q_3;
  cs _gate_q_8, _gate_q_7;
  rxx_5107068768(3.0716493949853265) _gate_q_12, _gate_q_18;
  r_5107060944(5.441481456236303, 6.084729209768466) _gate_q_4;
  y _gate_q_9;
  u2(4.8150996176650285, 1.8430254188544752) _gate_q_6;
  cz _gate_q_13, _gate_q_15;
  ch _gate_q_11, _gate_q_14;
  cu(3.8190810920325786, 2.459056638677126, 5.4711678709258615, 5.8055657069005) _gate_q_0, _gate_q_5;
  z _gate_q_17;
  sdg _gate_q_2;
  x _gate_q_19;
  U(5.767749094097642, 1.5656941626982863, 0.7120924994322421) _gate_q_6;
  iswap _gate_q_0, _gate_q_7;
  r_5107065264(2.539267285580177, 0.061416048085197905) _gate_q_14;
  sxdg _gate_q_5;
  cu(3.1299251711424354, 4.443794259383247, 3.146148753617625, 4.964005476355956) _gate_q_8, _gate_q_12;
  sxdg _gate_q_9;
  cry(2.377769132359533) _gate_q_11, _gate_q_15;
  cz _gate_q_16, _gate_q_19;
  crx(4.226459430999085) _gate_q_2, _gate_q_10;
  cy _gate_q_4, _gate_q_13;
  cp(4.023217850569568) _gate_q_18, _gate_q_1;
  cy _gate_q_3, _gate_q_17;
  u2(4.6298051021564826, 4.176165750659947) _gate_q_19;
  csdg _gate_q_5, _gate_q_16;
  rzx_5107067616(0.4388062120297502) _gate_q_14, _gate_q_13;
  crx(4.183743169470931) _gate_q_4, _gate_q_1;
  sxdg _gate_q_15;
  cy _gate_q_6, _gate_q_2;
  rzx_5107062528(2.028905423045738) _gate_q_11, _gate_q_17;
  y _gate_q_9;
  swap _gate_q_7, _gate_q_8;
  iswap _gate_q_10, _gate_q_3;
  p(0.43736474786125973) _gate_q_0;
  u1(3.463880002887487) _gate_q_18;
  y _gate_q_12;
  y _gate_q_15;
  cu1_5107061040(0.8880201581123321) _gate_q_13, _gate_q_0;
  sdg _gate_q_2;
  y _gate_q_4;
  rx(1.667961670638169) _gate_q_16;
  h _gate_q_14;
  r_5107064304(5.344130084776587, 6.026624301841032) _gate_q_19;
  csdg _gate_q_8, _gate_q_7;
  U(0.720491609534018, 4.573251847067525, 2.1259735468154273) _gate_q_10;
  sx _gate_q_6;
  cs _gate_q_17, _gate_q_3;
  ryy_5107059552(5.667881583520048) _gate_q_5, _gate_q_1;
  csdg _gate_q_11, _gate_q_9;
  xx_plus_yy_5107069104(4.702864664083561, 6.266049683357797) _gate_q_12, _gate_q_18;
  csdg _gate_q_13, _gate_q_1;
  cz _gate_q_5, _gate_q_4;
  cy _gate_q_17, _gate_q_14;
  crx(2.0900489431304656) _gate_q_19, _gate_q_8;
  cs _gate_q_0, _gate_q_2;
  t _gate_q_18;
  r_5107059696(5.815494359974716, 1.1563287641328268) _gate_q_9;
  rxx_5107064880(4.816857475174652) _gate_q_6, _gate_q_7;
  cu(0.21432225715322284, 0.3100052682648008, 3.1108416946863096, 2.9006541118334144) _gate_q_15, _gate_q_3;
  csx _gate_q_12, _gate_q_16;
  u3(3.417123652098487, 2.0033741761128647, 1.041440629782256) _gate_q_11;
  sdg _gate_q_10;
  h _gate_q_13;
  swap _gate_q_6, _gate_q_18;
  cz _gate_q_11, _gate_q_3;
  rzx_5107065312(2.141300984132018) _gate_q_15, _gate_q_4;
  u1(4.485449369615235) _gate_q_2;
  sx _gate_q_12;
  h _gate_q_14;
  y _gate_q_1;
  cy _gate_q_17, _gate_q_8;
  u3(4.201669705891407, 2.666692073006851, 5.158066688700511) _gate_q_16;
  sdg _gate_q_19;
  crx(4.89986189190819) _gate_q_7, _gate_q_10;
  xx_plus_yy_5107062960(4.0049397093591885, 3.512338377376435) _gate_q_0, _gate_q_9;
  ry(3.731045260676649) _gate_q_5;
}