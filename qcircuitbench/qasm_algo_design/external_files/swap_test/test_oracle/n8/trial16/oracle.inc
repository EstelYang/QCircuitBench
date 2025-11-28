gate rzz_5072965744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.160202084283124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072965792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.44648604343458054) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2031437864963315) _gate_q_0;
  ry(-1.2031437864963315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.44648604343458054) _gate_q_1;
}
gate rzx_5072965840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.291215408870403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5072965936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9647036305578967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3122720433455912) _gate_q_0;
  ry(-1.3122720433455912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9647036305578967) _gate_q_1;
}
gate rxx_5072966224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6253993931044244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072966416(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6609017276153857) _gate_q_0;
  u1(0.8592386068010224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6474836957621533, 0, -2.6609017276153857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6474836957621533, 1.8016631208143632, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072963968(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3335656668446451) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2963847546155494) _gate_q_1;
  ry(-2.2963847546155494) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3335656668446451) _gate_q_0;
}
gate xx_minus_yy_5072966800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.195019172475957) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0331675373476699) _gate_q_0;
  ry(-1.0331675373476699) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.195019172475957) _gate_q_1;
}
gate xx_plus_yy_5072966992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.838830184633931) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2422495677043464) _gate_q_1;
  ry(-1.2422495677043464) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.838830184633931) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  rx(3.3962312644907913) _gate_q_7;
  rzz_5072965744(6.160202084283124) _gate_q_2, _gate_q_5;
  swap _gate_q_4, _gate_q_1;
  id _gate_q_6;
  ch _gate_q_3, _gate_q_0;
  xx_minus_yy_5072965792(2.406287572992663, 0.44648604343458054) _gate_q_3, _gate_q_1;
  rzx_5072965840(4.291215408870403) _gate_q_7, _gate_q_4;
  ecr _gate_q_0, _gate_q_5;
  csdg _gate_q_2, _gate_q_6;
  u1(4.94525517376789) _gate_q_0;
  xx_minus_yy_5072965936(2.6245440866911824, 3.9647036305578967) _gate_q_6, _gate_q_7;
  cu(2.7528597204916627, 4.794564340328105, 3.8252713222641246, 2.0700622834000932) _gate_q_1, _gate_q_2;
  crx(2.3250568306615023) _gate_q_5, _gate_q_3;
  u1(5.942761087948604) _gate_q_4;
  rxx_5072966224(1.6253993931044244) _gate_q_7, _gate_q_5;
  ry(3.0431821116738416) _gate_q_2;
  cx _gate_q_0, _gate_q_1;
  tdg _gate_q_6;
  cz _gate_q_4, _gate_q_3;
  u2(3.64710494045159, 1.5912766637713598) _gate_q_1;
  rz(5.731831897795323) _gate_q_0;
  cu3_5072966416(1.2949673915243065, 1.8016631208143632, 3.520140334416408) _gate_q_3, _gate_q_5;
  dcx _gate_q_7, _gate_q_4;
  u3(3.3482404221148143, 3.343216189272784, 2.514818480273877) _gate_q_2;
  tdg _gate_q_6;
  u2(2.3875394271732526, 2.5564166828363053) _gate_q_1;
  s _gate_q_5;
  dcx _gate_q_6, _gate_q_4;
  swap _gate_q_3, _gate_q_2;
  cry(5.7422059238554475) _gate_q_0, _gate_q_7;
  id _gate_q_2;
  t _gate_q_1;
  cu(5.037729198755192, 3.654566053926371, 5.779957026789616, 0.6897021567879367) _gate_q_5, _gate_q_7;
  xx_plus_yy_5072963968(4.592769509231099, 0.3335656668446451) _gate_q_0, _gate_q_3;
  xx_minus_yy_5072966800(2.0663350746953397, 5.195019172475957) _gate_q_4, _gate_q_6;
  u2(1.6568078825160126, 1.0916519961556088) _gate_q_3;
  cy _gate_q_6, _gate_q_2;
  cry(5.476672264762529) _gate_q_0, _gate_q_4;
  xx_plus_yy_5072966992(2.4844991354086927, 2.838830184633931) _gate_q_5, _gate_q_1;
  s _gate_q_7;
}
gate ryy_5072969008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.070398025733806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5072969152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9935344623853344) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9935344623853344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9935344623853344) _gate_q_1;
}
gate xx_minus_yy_5072969296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.5127607475891565) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8826656113782984) _gate_q_0;
  ry(-0.8826656113782984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.5127607475891565) _gate_q_1;
}
gate rxx_5072969344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.820625583534787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072969392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.894959789881332) _gate_q_0;
  u1(1.8028894089269256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.871643738059616, 0, -2.894959789881332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.871643738059616, 1.0920703809544061, 0) _gate_q_1;
}
gate rzz_5072969536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.6207615175225139) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5072969872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.746077246385338) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6373738025142033) _gate_q_1;
  ry(-0.6373738025142033) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.746077246385338) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  crx(2.2464486308312823) _gate_q_5, _gate_q_3;
  u3(1.7696917264473306, 3.861116929865171, 2.2125610987717876) _gate_q_1;
  csdg _gate_q_7, _gate_q_2;
  cu(4.0901239657172015, 0.15983822173537257, 5.542951319444273, 0.5059408651582764) _gate_q_4, _gate_q_6;
  tdg _gate_q_0;
  u2(5.412280525207639, 2.454507357876135) _gate_q_3;
  cry(0.8942700500587301) _gate_q_0, _gate_q_4;
  u3(4.196450462034346, 1.1545535199471422, 6.043474917344898) _gate_q_5;
  crz(3.7532780496951723) _gate_q_6, _gate_q_7;
  ryy_5072969008(5.070398025733806) _gate_q_1, _gate_q_2;
  u1(4.15379924465726) _gate_q_3;
  sx _gate_q_4;
  cs _gate_q_7, _gate_q_0;
  U(0.33628334675300786, 4.7752636978218606, 3.063253356422737) _gate_q_1;
  cu1_5072969152(3.9870689247706688) _gate_q_2, _gate_q_6;
  u1(3.602282464706503) _gate_q_5;
  xx_minus_yy_5072969296(1.7653312227565967, 3.5127607475891565) _gate_q_5, _gate_q_2;
  rxx_5072969344(5.820625583534787) _gate_q_4, _gate_q_0;
  cy _gate_q_7, _gate_q_6;
  cu3_5072969392(3.743287476119232, 1.0920703809544061, 4.697849198808258) _gate_q_3, _gate_q_1;
  u3(1.3366087915814207, 0.7232234950542209, 5.279555708353361) _gate_q_5;
  rzz_5072969536(1.6207615175225139) _gate_q_6, _gate_q_7;
  cs _gate_q_4, _gate_q_1;
  tdg _gate_q_0;
  z _gate_q_3;
  id _gate_q_2;
  crz(5.132855907417609) _gate_q_1, _gate_q_4;
  iswap _gate_q_5, _gate_q_7;
  csdg _gate_q_6, _gate_q_0;
  sx _gate_q_2;
  u3(5.415893330106163, 4.729761300756334, 3.9465359514431486) _gate_q_3;
  sdg _gate_q_1;
  y _gate_q_2;
  t _gate_q_0;
  ch _gate_q_4, _gate_q_3;
  id _gate_q_5;
  rz(0.7995709552397635) _gate_q_6;
  U(0.23827688680754974, 3.3848193346326565, 2.0274867384098245) _gate_q_7;
  id _gate_q_3;
  p(3.078853453533504) _gate_q_0;
  xx_plus_yy_5072969872(1.2747476050284066, 5.746077246385338) _gate_q_4, _gate_q_6;
  cry(3.994952059667827) _gate_q_2, _gate_q_5;
  u1(3.1629357831848868) _gate_q_7;
  x _gate_q_1;
}