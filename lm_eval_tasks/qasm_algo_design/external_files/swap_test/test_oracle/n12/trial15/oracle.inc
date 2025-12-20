gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074773072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.408359981809481) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074777344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.267477213323582) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8802821187437487) _gate_q_0;
  ry(-0.8802821187437487) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.267477213323582) _gate_q_1;
}
gate ryy_5074777440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.599466741609035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074777632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.026132879343335) _gate_q_1;
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
gate r_5074777728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.14761385093840707, -0.5702260074795562, 0.5702260074795562) _gate_q_0;
}
gate rzx_5074777536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.38955774824962164) _gate_q_1;
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
gate cu3_5074777824(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.838576081256315) _gate_q_0;
  u1(0.8153465223931025) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.77347156403967, 0, -4.838576081256315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.77347156403967, 4.023229558863212, 0) _gate_q_1;
}
gate xx_plus_yy_5074778160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.424136822113521) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11075790238375594) _gate_q_1;
  ry(-0.11075790238375594) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.424136822113521) _gate_q_0;
}
gate ryy_5074778976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.547313210304359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  s _gate_q_10;
  p(4.695397071047031) _gate_q_0;
  y _gate_q_8;
  csdg _gate_q_4, _gate_q_6;
  rzx_5074773072(1.408359981809481) _gate_q_7, _gate_q_1;
  s _gate_q_5;
  u1(4.589966347103425) _gate_q_11;
  iswap _gate_q_3, _gate_q_9;
  sdg _gate_q_2;
  u1(2.373696178440746) _gate_q_0;
  csx _gate_q_9, _gate_q_7;
  u1(1.3253239113212567) _gate_q_1;
  u1(0.3570692827977954) _gate_q_6;
  sdg _gate_q_10;
  cx _gate_q_8, _gate_q_5;
  tdg _gate_q_4;
  dcx _gate_q_11, _gate_q_3;
  rz(4.515495922611605) _gate_q_2;
  ry(0.6075633457504007) _gate_q_4;
  cry(3.4159900413816877) _gate_q_8, _gate_q_10;
  xx_minus_yy_5074777344(1.7605642374874975, 5.267477213323582) _gate_q_7, _gate_q_6;
  crx(6.25064861237695) _gate_q_5, _gate_q_1;
  csx _gate_q_2, _gate_q_9;
  sxdg _gate_q_11;
  u1(6.186611030666903) _gate_q_0;
  rx(5.757206882565795) _gate_q_3;
  u1(0.3473814515637609) _gate_q_0;
  cy _gate_q_2, _gate_q_5;
  sxdg _gate_q_3;
  cy _gate_q_10, _gate_q_4;
  U(0.8743294458024276, 1.5768799111322676, 2.4304281001262638) _gate_q_11;
  ryy_5074777440(5.599466741609035) _gate_q_1, _gate_q_8;
  rxx_5074777632(5.026132879343335) _gate_q_9, _gate_q_7;
  ry(5.109485678862067) _gate_q_6;
  sx _gate_q_9;
  cs _gate_q_4, _gate_q_8;
  u2(3.0555573696325586, 0.17140259547252457) _gate_q_10;
  rx(4.849357963820442) _gate_q_7;
  r_5074777728(0.14761385093840707, 1.0005703193153404) _gate_q_6;
  id _gate_q_0;
  rzx_5074777536(0.38955774824962164) _gate_q_2, _gate_q_1;
  sdg _gate_q_11;
  cx _gate_q_5, _gate_q_3;
  cry(3.434444769696554) _gate_q_1, _gate_q_0;
  ecr _gate_q_2, _gate_q_8;
  cu3_5074777824(5.54694312807934, 4.023229558863212, 5.653922603649417) _gate_q_4, _gate_q_10;
  cp(2.0394007841255437) _gate_q_7, _gate_q_5;
  cs _gate_q_3, _gate_q_11;
  ch _gate_q_9, _gate_q_6;
  cry(5.498162543542421) _gate_q_8, _gate_q_7;
  cp(3.362427267921726) _gate_q_11, _gate_q_4;
  swap _gate_q_6, _gate_q_1;
  cu(5.570777662690292, 2.4096673459407145, 1.2278315937162316, 1.629317021115281) _gate_q_5, _gate_q_9;
  sxdg _gate_q_0;
  ry(4.086276769723334) _gate_q_3;
  cy _gate_q_2, _gate_q_10;
  dcx _gate_q_0, _gate_q_1;
  ry(3.152626194811138) _gate_q_2;
  y _gate_q_6;
  U(0.4757240120063895, 0.8413804830341353, 3.3197549436910583) _gate_q_10;
  cry(4.736903390563444) _gate_q_5, _gate_q_3;
  h _gate_q_11;
  ecr _gate_q_7, _gate_q_4;
  z _gate_q_8;
  u2(1.6257338306835796, 3.2933277205606006) _gate_q_9;
  ry(5.0916124573425305) _gate_q_8;
  sx _gate_q_11;
  u1(0.0654118503574295) _gate_q_2;
  xx_plus_yy_5074778160(0.22151580476751187, 4.424136822113521) _gate_q_6, _gate_q_10;
  csdg _gate_q_9, _gate_q_7;
  id _gate_q_0;
  x _gate_q_5;
  crz(1.561545281830537) _gate_q_3, _gate_q_4;
  p(4.743189869492022) _gate_q_1;
  csx _gate_q_11, _gate_q_1;
  cp(2.8888586169666484) _gate_q_0, _gate_q_8;
  ecr _gate_q_10, _gate_q_4;
  cs _gate_q_2, _gate_q_3;
  ryy_5074778976(5.547313210304359) _gate_q_6, _gate_q_9;
  rx(3.096154864789101) _gate_q_5;
  id _gate_q_7;
}
gate rzz_5074510784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.10231589462043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074510160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.701446816685836) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.09181741547542688) _gate_q_1;
  ry(-0.09181741547542688) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.701446816685836) _gate_q_0;
}
gate rzz_5074510016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0746473384478614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074510064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.101750889478956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074510304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9521360735019774) _gate_q_0;
  u1(0.14397484522033877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7307128860497222, 0, -0.9521360735019774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7307128860497222, 0.8081612282816386, 0) _gate_q_1;
}
gate rzx_5074509776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.52510491408802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074509872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0581664576622631) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.484241492669519) _gate_q_0;
  ry(-2.484241492669519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0581664576622631) _gate_q_1;
}
gate rzz_5074509344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0329693499685775) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074509152(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.241966887333042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074508384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.755431543829118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5074508048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8518239058926536) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8518239058926536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8518239058926536) _gate_q_1;
}
gate cu3_5074511888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3481398415083814) _gate_q_0;
  u1(-1.1391851733531273) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0597105967872573, 0, -2.3481398415083814) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0597105967872573, 3.4873250148615087, 0) _gate_q_1;
}
gate cu3_5074507472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.284968485050364) _gate_q_0;
  u1(0.28153007656846096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3904351360793363, 0, -2.284968485050364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3904351360793363, 2.003438408481903, 0) _gate_q_1;
}
gate xx_minus_yy_5074510208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0648195770467497) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.820081044373248) _gate_q_0;
  ry(-0.820081044373248) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0648195770467497) _gate_q_1;
}
gate cu1_5074507520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8332693631419197) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8332693631419197) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8332693631419197) _gate_q_1;
}
gate cu3_5074508288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5149918331457126) _gate_q_0;
  u1(1.3919395497490177) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.733875994951047, 0, -3.5149918331457126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.733875994951047, 2.123052283396695, 0) _gate_q_1;
}
gate xx_plus_yy_5074508144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6320691770356373) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5879759425037501) _gate_q_1;
  ry(-0.5879759425037501) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6320691770356373) _gate_q_0;
}
gate r_5074506416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.207292482250585, 3.931293212287253, -3.931293212287253) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  csdg _gate_q_7, _gate_q_4;
  sxdg _gate_q_10;
  crx(2.6428824956457433) _gate_q_6, _gate_q_5;
  u1(4.6389126670446466) _gate_q_8;
  rzz_5074510784(2.10231589462043) _gate_q_0, _gate_q_1;
  id _gate_q_2;
  u3(4.76817344905779, 1.9804459548727629, 5.6168684647568305) _gate_q_11;
  xx_plus_yy_5074510160(0.18363483095085376, 4.701446816685836) _gate_q_9, _gate_q_3;
  rzz_5074510016(3.0746473384478614) _gate_q_4, _gate_q_2;
  u2(1.874410644294394, 3.808387169850721) _gate_q_8;
  rzx_5074510064(4.101750889478956) _gate_q_10, _gate_q_9;
  y _gate_q_11;
  cu3_5074510304(1.4614257720994444, 0.8081612282816386, 1.0961109187223161) _gate_q_1, _gate_q_7;
  crx(6.119459694889353) _gate_q_3, _gate_q_6;
  csdg _gate_q_0, _gate_q_5;
  u2(2.782936331272125, 0.8649955452704938) _gate_q_11;
  dcx _gate_q_5, _gate_q_6;
  sx _gate_q_0;
  tdg _gate_q_7;
  cs _gate_q_9, _gate_q_10;
  cry(6.133904735300812) _gate_q_3, _gate_q_1;
  rzx_5074509776(4.52510491408802) _gate_q_2, _gate_q_4;
  sxdg _gate_q_8;
  ry(4.682981834744695) _gate_q_2;
  rz(0.9876538454376836) _gate_q_5;
  swap _gate_q_9, _gate_q_1;
  id _gate_q_11;
  y _gate_q_0;
  cp(4.161440419762501) _gate_q_8, _gate_q_3;
  rz(5.391384378702061) _gate_q_7;
  rz(0.23204262854103613) _gate_q_4;
  z _gate_q_6;
  p(1.504054289340202) _gate_q_10;
  ecr _gate_q_1, _gate_q_8;
  xx_minus_yy_5074509872(4.968482985339038, 1.0581664576622631) _gate_q_6, _gate_q_7;
  u3(0.29844751746996484, 3.1183690861787894, 1.9684201540507036) _gate_q_5;
  rzz_5074509344(1.0329693499685775) _gate_q_3, _gate_q_10;
  rx(0.03938143824690368) _gate_q_11;
  csdg _gate_q_0, _gate_q_9;
  rx(3.91821948257912) _gate_q_4;
  U(5.897758099407598, 2.407646296649615, 2.9425039349981423) _gate_q_2;
  h _gate_q_11;
  ecr _gate_q_9, _gate_q_0;
  ryy_5074509152(1.241966887333042) _gate_q_7, _gate_q_3;
  rzz_5074508384(5.755431543829118) _gate_q_8, _gate_q_1;
  x _gate_q_4;
  swap _gate_q_2, _gate_q_6;
  csx _gate_q_10, _gate_q_5;
  cu1_5074508048(3.703647811785307) _gate_q_3, _gate_q_1;
  cu(3.1650013312596923, 3.2170700160263896, 2.8421898077988486, 3.2794036590248976) _gate_q_7, _gate_q_2;
  cz _gate_q_9, _gate_q_11;
  y _gate_q_5;
  cu3_5074511888(6.119421193574515, 3.4873250148615087, 1.2089546681552543) _gate_q_0, _gate_q_4;
  h _gate_q_8;
  U(3.921430505199942, 4.0454515889266345, 3.410561840749507) _gate_q_6;
  u1(0.8224027370465957) _gate_q_10;
  y _gate_q_4;
  cs _gate_q_3, _gate_q_9;
  cu3_5074507472(4.780870272158673, 2.003438408481903, 2.566498561618825) _gate_q_6, _gate_q_1;
  sxdg _gate_q_7;
  crx(0.6401346153187915) _gate_q_5, _gate_q_0;
  sxdg _gate_q_11;
  xx_minus_yy_5074510208(1.640162088746496, 1.0648195770467497) _gate_q_10, _gate_q_8;
  t _gate_q_2;
  cu1_5074507520(5.666538726283839) _gate_q_5, _gate_q_3;
  ecr _gate_q_8, _gate_q_7;
  ch _gate_q_6, _gate_q_4;
  csx _gate_q_10, _gate_q_0;
  cu3_5074508288(3.467751989902094, 2.123052283396695, 4.90693138289473) _gate_q_2, _gate_q_1;
  s _gate_q_9;
  y _gate_q_11;
  xx_plus_yy_5074508144(1.1759518850075001, 2.6320691770356373) _gate_q_3, _gate_q_4;
  cx _gate_q_10, _gate_q_8;
  iswap _gate_q_2, _gate_q_6;
  ecr _gate_q_11, _gate_q_0;
  y _gate_q_9;
  cu(5.121059429448872, 3.1015625437634284, 4.71990820391975, 1.0106722079234502) _gate_q_1, _gate_q_7;
  r_5074506416(6.207292482250585, 5.502089539082149) _gate_q_5;
}