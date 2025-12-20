gate rxx_5070437120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0656529896283458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070428048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.057445410504979) _gate_q_1;
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
gate r_5070431312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2718878369197206, 3.7875376692299456, -3.7875376692299456) _gate_q_0;
}
gate ryy_5070425408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6899847922531483) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070428096(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.434722042845902) _gate_q_1;
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
gate rzx_5070432224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.368991416033882) _gate_q_1;
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
gate cu3_5070430208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.908791920612238) _gate_q_0;
  u1(2.6314734591159645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.286993724993524, 0, -2.908791920612238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.286993724993524, 0.27731846149627304, 0) _gate_q_1;
}
gate r_5070424448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.676962146918038, -0.6559258433297279, 0.6559258433297279) _gate_q_0;
}
gate rzz_5070422240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.5806432688084966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070424016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.2151768466978625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070437792(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.05648552164744) _gate_q_0;
  u1(1.4661598688314628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.410264299512496, 0, -4.05648552164744) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.410264299512496, 2.5903256528159777, 0) _gate_q_1;
}
gate rzz_5070426656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.22791583053701) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070428816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.1605137431953136) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8454642612590673) _gate_q_1;
  ry(-1.8454642612590673) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.1605137431953136) _gate_q_0;
}
gate xx_plus_yy_5070433232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9974763262515591) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.847920852607678) _gate_q_1;
  ry(-2.847920852607678) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9974763262515591) _gate_q_0;
}
gate xx_minus_yy_5070426128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3121290040416207) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3906551020105367) _gate_q_0;
  ry(-2.3906551020105367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3121290040416207) _gate_q_1;
}
gate r_5070437600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.976889242295016, -1.0194819139987805, 1.0194819139987805) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070422480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5814782625464292, -1.5590806317863752, 1.5590806317863752) _gate_q_0;
}
gate rzz_5070428528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8660500693750866) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cp(1.3983780648189836) _gate_q_3, _gate_q_1;
  rxx_5070437120(1.0656529896283458) _gate_q_0, _gate_q_7;
  p(5.2164363922627786) _gate_q_2;
  u2(5.916260569682846, 5.795023186588621) _gate_q_6;
  rzx_5070428048(2.057445410504979) _gate_q_10, _gate_q_4;
  y _gate_q_9;
  iswap _gate_q_8, _gate_q_5;
  r_5070431312(1.2718878369197206, 5.358333996024842) _gate_q_1;
  cry(3.0311293655335945) _gate_q_6, _gate_q_3;
  y _gate_q_5;
  ryy_5070425408(3.6899847922531483) _gate_q_4, _gate_q_2;
  dcx _gate_q_10, _gate_q_0;
  ryy_5070428096(4.434722042845902) _gate_q_8, _gate_q_9;
  u3(2.2441984041106435, 2.2254780363187714, 4.0021400433779535) _gate_q_7;
  cx _gate_q_10, _gate_q_1;
  ecr _gate_q_8, _gate_q_9;
  rzx_5070432224(5.368991416033882) _gate_q_7, _gate_q_6;
  u2(3.799873690698896, 0.3635098792526858) _gate_q_2;
  sdg _gate_q_4;
  cs _gate_q_3, _gate_q_5;
  tdg _gate_q_0;
  cu3_5070430208(2.573987449987048, 0.27731846149627304, 5.540265379728202) _gate_q_7, _gate_q_5;
  cp(2.400945879697638) _gate_q_6, _gate_q_1;
  id _gate_q_8;
  cy _gate_q_2, _gate_q_10;
  tdg _gate_q_0;
  cu(1.3242467377199678, 2.7530305677750184, 1.9088810924017652, 2.3169484997226917) _gate_q_3, _gate_q_4;
  t _gate_q_9;
  U(6.116084580250847, 0.14450569649887973, 4.8726801547927785) _gate_q_8;
  u1(2.0139328259456524) _gate_q_3;
  cu(1.0084551804401887, 1.3460440912728162, 2.772713321831036, 0.08405914867051445) _gate_q_0, _gate_q_7;
  iswap _gate_q_4, _gate_q_10;
  r_5070424448(4.676962146918038, 0.9148704834651686) _gate_q_5;
  rzz_5070422240(2.5806432688084966) _gate_q_9, _gate_q_6;
  cy _gate_q_1, _gate_q_2;
  id _gate_q_1;
  rzz_5070424016(4.2151768466978625) _gate_q_5, _gate_q_10;
  x _gate_q_4;
  id _gate_q_0;
  cu3_5070437792(2.820528599024992, 2.5903256528159777, 5.522645390478903) _gate_q_8, _gate_q_9;
  cx _gate_q_6, _gate_q_3;
  s _gate_q_2;
  t _gate_q_7;
  cs _gate_q_2, _gate_q_8;
  h _gate_q_0;
  rz(5.767367660941901) _gate_q_7;
  rzz_5070426656(6.22791583053701) _gate_q_3, _gate_q_10;
  ry(3.7959967297291315) _gate_q_5;
  u3(5.803298177651188, 6.014900519154659, 1.4422772711879104) _gate_q_6;
  s _gate_q_4;
  h _gate_q_1;
  u2(2.6858500944856645, 1.5250044416754351) _gate_q_9;
  xx_plus_yy_5070428816(3.6909285225181345, 1.1605137431953136) _gate_q_3, _gate_q_0;
  u1(2.0151710200157464) _gate_q_5;
  xx_plus_yy_5070433232(5.695841705215356, 1.9974763262515591) _gate_q_4, _gate_q_1;
  x _gate_q_9;
  xx_minus_yy_5070426128(4.781310204021073, 1.3121290040416207) _gate_q_10, _gate_q_7;
  cp(5.448322740437766) _gate_q_6, _gate_q_8;
  h _gate_q_2;
  r_5070437600(5.976889242295016, 0.551314412796116) _gate_q_8;
  tdg _gate_q_0;
  cy _gate_q_1, _gate_q_5;
  csdg _gate_q_4, _gate_q_7;
  cx _gate_q_2, _gate_q_3;
  h _gate_q_10;
  sx _gate_q_9;
  r_5070422480(1.5814782625464292, 0.01171569500852135) _gate_q_6;
  y _gate_q_6;
  ecr _gate_q_3, _gate_q_1;
  rzz_5070428528(1.8660500693750866) _gate_q_10, _gate_q_4;
  csx _gate_q_2, _gate_q_9;
  crx(2.2283908020622385) _gate_q_7, _gate_q_0;
  ecr _gate_q_5, _gate_q_8;
}
gate rzz_5070436448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.402277346495169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070430880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.215634195457688) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.48872149391632225) _gate_q_1;
  ry(-0.48872149391632225) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.215634195457688) _gate_q_0;
}
gate rzx_5070423920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9060465287484117) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070428384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.299907234936156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070431696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.130558540647713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070430976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4938836515007394) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0557091839543404) _gate_q_1;
  ry(-2.0557091839543404) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4938836515007394) _gate_q_0;
}
gate rxx_5070431600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.750518867984018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070437744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.511710288278181) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9402677337369171) _gate_q_1;
  ry(-0.9402677337369171) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.511710288278181) _gate_q_0;
}
gate rzz_5072467008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6992802487475231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072192144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7408833619774168) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7408833619774168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7408833619774168) _gate_q_1;
}
gate xx_minus_yy_5072465184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.25105674210313) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8100170086701293) _gate_q_0;
  ry(-1.8100170086701293) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.25105674210313) _gate_q_1;
}
gate xx_minus_yy_5072455104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.900381149534511) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.1400855922721576) _gate_q_0;
  ry(-3.1400855922721576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.900381149534511) _gate_q_1;
}
gate r_5072457936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5940856483061019, 0.4364181852102478, -0.4364181852102478) _gate_q_0;
}
gate xx_minus_yy_5072454096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8536374478327857) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6061877862684923) _gate_q_0;
  ry(-1.6061877862684923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8536374478327857) _gate_q_1;
}
gate cu1_5072469072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3901030507287078) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3901030507287078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3901030507287078) _gate_q_1;
}
gate rxx_5070306000(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.578026098387597) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  rx(1.0994775997713864) _gate_q_3;
  rzz_5070436448(5.402277346495169) _gate_q_7, _gate_q_10;
  crz(0.22214778775871244) _gate_q_0, _gate_q_6;
  cry(1.0587567820480697) _gate_q_1, _gate_q_8;
  xx_plus_yy_5070430880(0.9774429878326445, 6.215634195457688) _gate_q_5, _gate_q_9;
  id _gate_q_2;
  y _gate_q_4;
  csx _gate_q_6, _gate_q_10;
  rzx_5070423920(0.9060465287484117) _gate_q_2, _gate_q_4;
  tdg _gate_q_3;
  id _gate_q_0;
  rxx_5070428384(2.299907234936156) _gate_q_1, _gate_q_9;
  rxx_5070431696(1.130558540647713) _gate_q_7, _gate_q_8;
  id _gate_q_5;
  dcx _gate_q_9, _gate_q_3;
  ry(0.10336395288727464) _gate_q_10;
  t _gate_q_7;
  csdg _gate_q_4, _gate_q_8;
  swap _gate_q_2, _gate_q_0;
  z _gate_q_6;
  rx(2.6317797063133073) _gate_q_5;
  u1(0.6268980569810868) _gate_q_1;
  cu(0.5794329499037477, 4.29101896859613, 2.373027150254899, 0.19608158308894583) _gate_q_0, _gate_q_4;
  crx(1.6148924953800943) _gate_q_8, _gate_q_3;
  cu(2.433612419898332, 2.6271003188253443, 0.5024566780838238, 3.80418741004835) _gate_q_9, _gate_q_1;
  xx_plus_yy_5070430976(4.111418367908681, 3.4938836515007394) _gate_q_10, _gate_q_5;
  sx _gate_q_6;
  t _gate_q_7;
  s _gate_q_2;
  cry(4.705739762350192) _gate_q_9, _gate_q_7;
  rxx_5070431600(5.750518867984018) _gate_q_1, _gate_q_4;
  sx _gate_q_6;
  u3(3.1370030559190694, 4.472598018705374, 2.8601571150743674) _gate_q_10;
  crx(0.8979591782481154) _gate_q_2, _gate_q_3;
  xx_plus_yy_5070437744(1.8805354674738342, 4.511710288278181) _gate_q_0, _gate_q_5;
  h _gate_q_8;
  cu(4.462448905255061, 1.6130635821954569, 1.394999418125037, 6.027920759957905) _gate_q_2, _gate_q_3;
  cz _gate_q_9, _gate_q_4;
  rz(2.6981613656302152) _gate_q_7;
  rzz_5072467008(1.6992802487475231) _gate_q_1, _gate_q_8;
  cz _gate_q_5, _gate_q_10;
  u1(4.912249137780167) _gate_q_6;
  p(6.011833774569782) _gate_q_0;
  cu(2.258573086146499, 5.439389771014437, 5.590016092834939, 4.071196943723626) _gate_q_8, _gate_q_9;
  cu1_5072192144(1.4817667239548336) _gate_q_6, _gate_q_7;
  xx_minus_yy_5072465184(3.6200340173402585, 4.25105674210313) _gate_q_2, _gate_q_3;
  cry(1.2282626500606662) _gate_q_5, _gate_q_0;
  s _gate_q_10;
  y _gate_q_1;
  rz(3.6789956822650525) _gate_q_4;
  u1(0.25852583118884076) _gate_q_0;
  crz(3.3208130715416373) _gate_q_3, _gate_q_7;
  ecr _gate_q_8, _gate_q_4;
  xx_minus_yy_5072455104(6.280171184544315, 5.900381149534511) _gate_q_9, _gate_q_2;
  sdg _gate_q_6;
  cz _gate_q_5, _gate_q_1;
  r_5072457936(1.5940856483061019, 2.0072145120051443) _gate_q_10;
  sx _gate_q_9;
  p(3.687487121626201) _gate_q_5;
  id _gate_q_1;
  x _gate_q_4;
  u3(3.494666544086593, 1.0189279816934609, 5.1704360630678945) _gate_q_10;
  sx _gate_q_0;
  xx_minus_yy_5072454096(3.2123755725369847, 1.8536374478327857) _gate_q_7, _gate_q_2;
  cu1_5072469072(2.7802061014574155) _gate_q_3, _gate_q_8;
  rz(4.512752967106144) _gate_q_6;
  iswap _gate_q_1, _gate_q_2;
  cz _gate_q_5, _gate_q_9;
  id _gate_q_7;
  rz(1.2507788487320135) _gate_q_4;
  swap _gate_q_6, _gate_q_8;
  h _gate_q_10;
  rxx_5070306000(5.578026098387597) _gate_q_0, _gate_q_3;
}