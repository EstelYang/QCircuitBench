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
gate ryy_5105753968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.903123824946456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105759344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.001351050276592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105756896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4246852288554672) _gate_q_1;
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
gate r_5105746192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3350851354017756, 0.23972942348881388, -0.23972942348881388) _gate_q_0;
}
gate r_5105756416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8194872074739722, 2.075062617103502, -2.075062617103502) _gate_q_0;
}
gate r_5105760160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0554614176941373, -0.4030922501489158, 0.4030922501489158) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105747872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.514416139093053) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5766815886622254) _gate_q_1;
  ry(-2.5766815886622254) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.514416139093053) _gate_q_0;
}
gate xx_minus_yy_5105753920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.666218309600958) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5771254054248482) _gate_q_0;
  ry(-1.5771254054248482) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.666218309600958) _gate_q_1;
}
gate xx_minus_yy_5105506864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.425178531013307) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1371972262035908) _gate_q_0;
  ry(-1.1371972262035908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.425178531013307) _gate_q_1;
}
gate cu3_5105514736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.25157039477954) _gate_q_0;
  u1(0.0821821334834929) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1577164402259579, 0, -2.25157039477954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1577164402259579, 2.169388261296047, 0) _gate_q_1;
}
gate cu1_5105509744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.08256048139607595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.08256048139607595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.08256048139607595) _gate_q_1;
}
gate rzz_5105506240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.086549073242673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105502496(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7365242561794627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105511520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.786989767005885, -0.38507113054365183, 0.38507113054365183) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  y _gate_q_9;
  ch _gate_q_7, _gate_q_6;
  ecr _gate_q_4, _gate_q_3;
  cy _gate_q_5, _gate_q_1;
  cy _gate_q_2, _gate_q_0;
  swap _gate_q_8, _gate_q_10;
  ryy_5105753968(5.903123824946456) _gate_q_4, _gate_q_8;
  crx(5.563128996804887) _gate_q_0, _gate_q_1;
  sx _gate_q_5;
  rzz_5105759344(5.001351050276592) _gate_q_3, _gate_q_2;
  u2(2.626978814865342, 2.636336575827907) _gate_q_6;
  rz(3.9516868384144286) _gate_q_7;
  rxx_5105756896(1.4246852288554672) _gate_q_10, _gate_q_9;
  u3(6.104417458608164, 3.7285153685515193, 0.38660890099373857) _gate_q_4;
  tdg _gate_q_0;
  ry(2.392735949318309) _gate_q_2;
  cy _gate_q_7, _gate_q_3;
  ecr _gate_q_6, _gate_q_1;
  h _gate_q_9;
  cs _gate_q_5, _gate_q_8;
  u2(0.47442776080534077, 2.4924779919287126) _gate_q_10;
  cy _gate_q_10, _gate_q_7;
  ecr _gate_q_2, _gate_q_4;
  z _gate_q_3;
  r_5105746192(1.3350851354017756, 1.8105257502837104) _gate_q_6;
  r_5105756416(0.8194872074739722, 3.6458589438983986) _gate_q_5;
  U(0.23306418733993206, 4.8165945092569915, 3.6143429511307947) _gate_q_9;
  z _gate_q_8;
  r_5105760160(2.0554614176941373, 1.1677040766459807) _gate_q_1;
  u2(5.497107930398164, 5.678091518388583) _gate_q_0;
  crz(3.2924798285171155) _gate_q_8, _gate_q_3;
  dcx _gate_q_2, _gate_q_5;
  dcx _gate_q_0, _gate_q_9;
  dcx _gate_q_1, _gate_q_7;
  s _gate_q_6;
  cu(5.543243353775819, 1.4658118370499806, 0.0621083938194146, 5.711152306113278) _gate_q_10, _gate_q_4;
  s _gate_q_10;
  csx _gate_q_5, _gate_q_9;
  cp(5.267911909567139) _gate_q_1, _gate_q_4;
  rz(1.355779343161835) _gate_q_3;
  iswap _gate_q_7, _gate_q_0;
  u2(3.9543765046152615, 5.543069164014488) _gate_q_2;
  U(2.518969068167265, 0.5075909646897888, 0.6284057369789426) _gate_q_8;
  sxdg _gate_q_6;
  p(6.21482698862609) _gate_q_3;
  x _gate_q_9;
  ch _gate_q_10, _gate_q_6;
  xx_plus_yy_5105747872(5.153363177324451, 5.514416139093053) _gate_q_0, _gate_q_1;
  xx_minus_yy_5105753920(3.1542508108496965, 5.666218309600958) _gate_q_2, _gate_q_8;
  xx_minus_yy_5105506864(2.2743944524071815, 1.425178531013307) _gate_q_4, _gate_q_7;
  h _gate_q_5;
  tdg _gate_q_9;
  cu3_5105514736(2.3154328804519158, 2.169388261296047, 2.333752528263033) _gate_q_10, _gate_q_7;
  s _gate_q_2;
  u1(1.7444655604146007) _gate_q_3;
  cx _gate_q_4, _gate_q_5;
  cu1_5105509744(0.1651209627921519) _gate_q_6, _gate_q_8;
  s _gate_q_0;
  x _gate_q_1;
  rzz_5105506240(3.086549073242673) _gate_q_6, _gate_q_2;
  cz _gate_q_5, _gate_q_0;
  id _gate_q_3;
  cu(2.8258824851186612, 0.321429009445572, 2.4780669852685877, 5.7166086484748195) _gate_q_9, _gate_q_4;
  ecr _gate_q_8, _gate_q_7;
  h _gate_q_1;
  sdg _gate_q_10;
  sxdg _gate_q_6;
  rzz_5105502496(2.7365242561794627) _gate_q_9, _gate_q_10;
  u2(3.8132163740799823, 1.1909522278494895) _gate_q_1;
  x _gate_q_0;
  ch _gate_q_4, _gate_q_8;
  r_5105511520(4.786989767005885, 1.1857251962512447) _gate_q_3;
  csdg _gate_q_7, _gate_q_5;
  rz(2.480167380496672) _gate_q_2;
}
gate xx_plus_yy_5105632320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2534843520814618) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7094422276002066) _gate_q_1;
  ry(-1.7094422276002066) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2534843520814618) _gate_q_0;
}
gate rzx_5105636352(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6783891379849516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105638416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.474020094679056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105646192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2201738647202602) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6636627997467521) _gate_q_0;
  ry(-1.6636627997467521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2201738647202602) _gate_q_1;
}
gate cu3_5105639088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.423787891892141) _gate_q_0;
  u1(0.11128945740987328) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8806516160896578, 0, -4.423787891892141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8806516160896578, 4.3124984344822686, 0) _gate_q_1;
}
gate xx_plus_yy_5105641296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5519295354117486) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1533045500940946) _gate_q_1;
  ry(-2.1533045500940946) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5519295354117486) _gate_q_0;
}
gate ryy_5105646480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.336899158026703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105639568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5807802302530451) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5807802302530451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5807802302530451) _gate_q_1;
}
gate ryy_5105636064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0811719361708727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105634336(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3149455438396314, 0.43879579938918756, -0.43879579938918756) _gate_q_0;
}
gate r_5105647104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.240803735311644, 0.8750857560764613, -0.8750857560764613) _gate_q_0;
}
gate cu3_5105636544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5403949426064285) _gate_q_0;
  u1(2.3751139953773173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.134958703720995, 0, -2.5403949426064285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.134958703720995, 0.16528094722911113, 0) _gate_q_1;
}
gate xx_plus_yy_5105635536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3716120188184487) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.028871712411124) _gate_q_1;
  ry(-3.028871712411124) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3716120188184487) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  csdg _gate_q_5, _gate_q_10;
  iswap _gate_q_9, _gate_q_8;
  crz(1.4375775940843742) _gate_q_6, _gate_q_7;
  u1(3.3648784320206864) _gate_q_3;
  cz _gate_q_1, _gate_q_4;
  cp(3.293257633899295) _gate_q_2, _gate_q_0;
  ch _gate_q_10, _gate_q_1;
  xx_plus_yy_5105632320(3.418884455200413, 1.2534843520814618) _gate_q_4, _gate_q_9;
  rzx_5105636352(3.6783891379849516) _gate_q_0, _gate_q_7;
  rzz_5105638416(4.474020094679056) _gate_q_5, _gate_q_3;
  cu(5.594599886961848, 1.3132999275168415, 3.006447365638638, 2.2270874301647314) _gate_q_8, _gate_q_6;
  x _gate_q_2;
  xx_minus_yy_5105646192(3.3273255994935043, 2.2201738647202602) _gate_q_5, _gate_q_2;
  ecr _gate_q_1, _gate_q_10;
  s _gate_q_4;
  crx(4.536276237287788) _gate_q_7, _gate_q_3;
  cu3_5105639088(1.7613032321793156, 4.3124984344822686, 4.535077349302015) _gate_q_6, _gate_q_9;
  crx(5.365825322433003) _gate_q_8, _gate_q_0;
  rx(4.497698405377088) _gate_q_2;
  xx_plus_yy_5105641296(4.306609100188189, 2.5519295354117486) _gate_q_6, _gate_q_10;
  crx(3.3185522392773277) _gate_q_7, _gate_q_5;
  ch _gate_q_4, _gate_q_1;
  csdg _gate_q_9, _gate_q_0;
  rz(1.6802515360300923) _gate_q_8;
  U(2.2061989573477225, 2.0686570527908574, 5.020870472058967) _gate_q_3;
  ryy_5105646480(5.336899158026703) _gate_q_7, _gate_q_3;
  s _gate_q_0;
  sx _gate_q_9;
  swap _gate_q_1, _gate_q_2;
  cp(4.678162000809193) _gate_q_5, _gate_q_4;
  swap _gate_q_6, _gate_q_8;
  t _gate_q_10;
  cu1_5105639568(3.1615604605060903) _gate_q_6, _gate_q_4;
  ryy_5105636064(3.0811719361708727) _gate_q_9, _gate_q_8;
  cx _gate_q_10, _gate_q_7;
  sx _gate_q_1;
  cx _gate_q_5, _gate_q_2;
  ry(1.223750417484559) _gate_q_0;
  U(5.2313302924471765, 2.941731199852056, 1.3473952707373016) _gate_q_3;
  r_5105634336(3.3149455438396314, 2.009592126184084) _gate_q_3;
  u1(4.555885158540322) _gate_q_10;
  y _gate_q_0;
  cz _gate_q_4, _gate_q_8;
  rx(4.31301945395043) _gate_q_7;
  p(4.844429428276383) _gate_q_5;
  ecr _gate_q_6, _gate_q_9;
  sxdg _gate_q_2;
  rx(0.06946326258844422) _gate_q_1;
  cs _gate_q_7, _gate_q_3;
  u2(4.537753533205244, 3.7237640290832132) _gate_q_8;
  csx _gate_q_0, _gate_q_6;
  s _gate_q_1;
  p(2.3603546524596175) _gate_q_2;
  rx(5.818871371724176) _gate_q_5;
  z _gate_q_10;
  u3(0.7508888336846412, 2.454209938428315, 3.974941088763963) _gate_q_9;
  r_5105647104(4.240803735311644, 2.445882082871358) _gate_q_4;
  ecr _gate_q_8, _gate_q_7;
  u1(0.5547010609467978) _gate_q_0;
  cry(1.110397310847317) _gate_q_10, _gate_q_3;
  s _gate_q_4;
  tdg _gate_q_1;
  cz _gate_q_9, _gate_q_2;
  U(1.720876804669207, 1.1476892951873456, 0.06344045812991975) _gate_q_6;
  id _gate_q_5;
  crz(4.620339857873542) _gate_q_10, _gate_q_8;
  cu3_5105636544(2.26991740744199, 0.16528094722911113, 4.915508937983746) _gate_q_3, _gate_q_6;
  cy _gate_q_4, _gate_q_0;
  id _gate_q_1;
  u2(1.7184669958398022, 5.598542240953018) _gate_q_9;
  xx_plus_yy_5105635536(6.057743424822248, 0.3716120188184487) _gate_q_7, _gate_q_5;
  t _gate_q_2;
}