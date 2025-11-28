gate r_5085476480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.21244261660143657, 4.565530231764882, -4.565530231764882) _gate_q_0;
}
gate rxx_5085475040(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.828995692570878) _gate_q_1;
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
gate rxx_5085476336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0233756903533457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5085471152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8208514676940926) _gate_q_0;
  u1(-0.34151793983291157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7369402037867593, 0, -1.8208514676940926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7369402037867593, 2.162369407527004, 0) _gate_q_1;
}
gate rzx_5085474512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.266733182242552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5085469664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7304883004580709) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3724774641756876) _gate_q_1;
  ry(-0.3724774641756876) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7304883004580709) _gate_q_0;
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
gate cu1_5085470432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1024660862799163) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1024660862799163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1024660862799163) _gate_q_1;
}
gate rzx_5085470528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.007271035297104) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5085471104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.409449813939566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5085471392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3390941276640054, 4.104102563191452, -4.104102563191452) _gate_q_0;
}
gate rzx_5085470864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.13542499083411516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5085470336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.219729098767568) _gate_q_0;
  u1(-2.4755053090173242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9930283132458122, 0, -3.219729098767568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9930283132458122, 5.695234407784892, 0) _gate_q_1;
}
gate cu1_5073917456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.931588656705155) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.931588656705155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.931588656705155) _gate_q_1;
}
gate xx_minus_yy_5073925904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.13930906025272577) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1258794731795698) _gate_q_0;
  ry(-0.1258794731795698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.13930906025272577) _gate_q_1;
}
gate cu3_5073917024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6245751785631364) _gate_q_0;
  u1(-0.7398750601214412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.768599412909154, 0, -1.6245751785631364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.768599412909154, 2.3644502386845776, 0) _gate_q_1;
}
gate xx_plus_yy_5073927392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9522754713245036) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8871831804030512) _gate_q_1;
  ry(-0.8871831804030512) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9522754713245036) _gate_q_0;
}
gate ryy_5073915440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.292160474635969) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5073924896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.44313381211553154) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.738936399998513) _gate_q_0;
  ry(-2.738936399998513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.44313381211553154) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  r_5085476480(0.21244261660143657, 6.136326558559778) _gate_q_0;
  rxx_5085475040(3.828995692570878) _gate_q_7, _gate_q_1;
  cs _gate_q_10, _gate_q_12;
  rz(0.1950044022901095) _gate_q_3;
  cz _gate_q_14, _gate_q_4;
  crz(1.8620497661020248) _gate_q_18, _gate_q_6;
  p(2.185797431115177) _gate_q_8;
  id _gate_q_19;
  rx(4.1139291990703) _gate_q_17;
  crx(0.6028498471810124) _gate_q_13, _gate_q_9;
  t _gate_q_15;
  ecr _gate_q_16, _gate_q_11;
  cx _gate_q_2, _gate_q_5;
  cz _gate_q_16, _gate_q_3;
  h _gate_q_1;
  csx _gate_q_14, _gate_q_10;
  rxx_5085476336(2.0233756903533457) _gate_q_17, _gate_q_6;
  crx(0.7762407729167227) _gate_q_13, _gate_q_0;
  p(0.2384367585989435) _gate_q_5;
  ry(3.2494424470718863) _gate_q_19;
  rx(0.25341202123629675) _gate_q_11;
  rx(1.0679419621786281) _gate_q_9;
  h _gate_q_4;
  cu3_5085471152(1.4738804075735186, 2.162369407527004, 1.479333527861181) _gate_q_15, _gate_q_12;
  p(3.7418298994883554) _gate_q_8;
  u1(5.598951954129829) _gate_q_7;
  cs _gate_q_2, _gate_q_18;
  rzx_5085474512(6.266733182242552) _gate_q_18, _gate_q_1;
  csx _gate_q_5, _gate_q_9;
  cu(2.91527890896847, 4.982820575326728, 3.0324288843118787, 2.962541306270725) _gate_q_17, _gate_q_8;
  sdg _gate_q_11;
  U(0.2924626008664059, 5.563330927179225, 1.47232197569538) _gate_q_15;
  sxdg _gate_q_0;
  t _gate_q_10;
  y _gate_q_19;
  sdg _gate_q_4;
  cz _gate_q_14, _gate_q_16;
  p(3.2557787037207033) _gate_q_6;
  xx_plus_yy_5085469664(0.7449549283513752, 0.7304883004580709) _gate_q_12, _gate_q_3;
  cry(3.620420543026512) _gate_q_2, _gate_q_13;
  p(5.984691653392613) _gate_q_7;
  U(3.393997730175675, 1.1083354595060249, 4.056293327019257) _gate_q_14;
  swap _gate_q_6, _gate_q_8;
  crz(2.2417649527282055) _gate_q_3, _gate_q_4;
  cz _gate_q_2, _gate_q_9;
  t _gate_q_19;
  rz(5.592956909615794) _gate_q_13;
  iswap _gate_q_16, _gate_q_7;
  csdg _gate_q_11, _gate_q_12;
  y _gate_q_0;
  swap _gate_q_5, _gate_q_15;
  U(1.6359874384230613, 3.214644998896608, 0.5862776702175791) _gate_q_1;
  sdg _gate_q_18;
  cz _gate_q_17, _gate_q_10;
  swap _gate_q_8, _gate_q_16;
  cy _gate_q_1, _gate_q_11;
  u1(2.894147779091244) _gate_q_3;
  cy _gate_q_7, _gate_q_2;
  csdg _gate_q_18, _gate_q_19;
  x _gate_q_5;
  iswap _gate_q_0, _gate_q_6;
  U(4.945804493280677, 4.730769635580908, 4.620557364746499) _gate_q_10;
  ry(3.8320797863814886) _gate_q_13;
  iswap _gate_q_15, _gate_q_14;
  cu1_5085470432(4.2049321725598325) _gate_q_4, _gate_q_12;
  rx(4.311634016663286) _gate_q_9;
  t _gate_q_17;
  rzx_5085470528(4.007271035297104) _gate_q_10, _gate_q_12;
  tdg _gate_q_2;
  cp(5.2901783282606525) _gate_q_16, _gate_q_8;
  U(1.0030828517222719, 3.352365394700245, 4.621302068038582) _gate_q_11;
  cs _gate_q_5, _gate_q_4;
  rxx_5085471104(3.409449813939566) _gate_q_9, _gate_q_7;
  r_5085471392(2.3390941276640054, 5.674898889986348) _gate_q_15;
  cx _gate_q_6, _gate_q_13;
  cz _gate_q_0, _gate_q_1;
  swap _gate_q_3, _gate_q_19;
  rzx_5085470864(0.13542499083411516) _gate_q_17, _gate_q_14;
  rx(2.6724180620997005) _gate_q_18;
  cu(4.748673746223007, 0.45980383467367025, 4.707736411581224, 2.2130785162600026) _gate_q_9, _gate_q_4;
  iswap _gate_q_12, _gate_q_14;
  s _gate_q_13;
  csx _gate_q_5, _gate_q_7;
  crz(1.4282274942862474) _gate_q_1, _gate_q_15;
  rx(2.7438613570850423) _gate_q_2;
  cs _gate_q_10, _gate_q_8;
  crx(5.450243629403998) _gate_q_11, _gate_q_6;
  u3(2.410686225208129, 3.7605645509669117, 0.20643064028658167) _gate_q_19;
  U(0.45310517739114, 1.1443604592132648, 1.5231686315025124) _gate_q_17;
  rz(5.762758583774106) _gate_q_16;
  cy _gate_q_3, _gate_q_18;
  u1(2.5585331736867474) _gate_q_0;
  swap _gate_q_10, _gate_q_15;
  U(3.983225432417555, 6.008901561941705, 0.0759522426346241) _gate_q_8;
  cu3_5085470336(1.9860566264916244, 5.695234407784892, 0.7442237897502434) _gate_q_5, _gate_q_4;
  z _gate_q_14;
  tdg _gate_q_3;
  cy _gate_q_6, _gate_q_18;
  sxdg _gate_q_2;
  cu1_5073917456(1.86317731341031) _gate_q_1, _gate_q_13;
  cp(2.032292777397484) _gate_q_7, _gate_q_17;
  s _gate_q_11;
  p(2.048621514098814) _gate_q_9;
  rz(4.4774932387459) _gate_q_19;
  rx(3.9486007698009007) _gate_q_16;
  y _gate_q_12;
  sdg _gate_q_0;
  s _gate_q_12;
  crz(0.8820525732068519) _gate_q_16, _gate_q_8;
  xx_minus_yy_5073925904(0.2517589463591396, 0.13930906025272577) _gate_q_10, _gate_q_6;
  ry(3.519446706316948) _gate_q_14;
  cry(1.8234261328485972) _gate_q_15, _gate_q_17;
  x _gate_q_7;
  tdg _gate_q_13;
  cs _gate_q_5, _gate_q_18;
  cu3_5073917024(3.537198825818308, 2.3644502386845776, 0.8847001184416952) _gate_q_4, _gate_q_3;
  ry(5.0642561217339255) _gate_q_1;
  rz(4.232882110854023) _gate_q_9;
  tdg _gate_q_2;
  swap _gate_q_11, _gate_q_0;
  z _gate_q_19;
  xx_plus_yy_5073927392(1.7743663608061024, 2.9522754713245036) _gate_q_5, _gate_q_17;
  iswap _gate_q_7, _gate_q_10;
  ryy_5073915440(5.292160474635969) _gate_q_19, _gate_q_0;
  swap _gate_q_1, _gate_q_11;
  iswap _gate_q_6, _gate_q_4;
  cy _gate_q_12, _gate_q_13;
  csdg _gate_q_18, _gate_q_14;
  x _gate_q_16;
  s _gate_q_9;
  y _gate_q_15;
  xx_minus_yy_5073924896(5.477872799997026, 0.44313381211553154) _gate_q_3, _gate_q_8;
  s _gate_q_2;
}
gate cu3_5073916736(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.051111106395486) _gate_q_0;
  u1(1.3355579917353342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7746077247954468, 0, -4.051111106395486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7746077247954468, 2.715553114660152, 0) _gate_q_1;
}
gate rzz_5073923408(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.959541441205745) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5073926912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.960689510699607) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.172581978745148) _gate_q_0;
  ry(-2.172581978745148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.960689510699607) _gate_q_1;
}
gate r_5073914864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.9844219346706778, -0.8548522857959063, 0.8548522857959063) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5073914624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.262909964788338) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5073922496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.006121984678565) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.01568570203962687) _gate_q_0;
  ry(-0.01568570203962687) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.006121984678565) _gate_q_1;
}
gate rxx_5073915056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5386072829371886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073916496(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.841422212952705) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.25577219977242255) _gate_q_1;
  ry(-0.25577219977242255) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.841422212952705) _gate_q_0;
}
gate ryy_5073914192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.863079725696961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5073917792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.248115455725639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5073921104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.333255809860728, 4.308593814522739, -4.308593814522739) _gate_q_0;
}
gate cu3_5073920864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.012671896127886) _gate_q_0;
  u1(1.2505501992386772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.286143683483188, 0, -5.012671896127886) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.286143683483188, 3.762121696889208, 0) _gate_q_1;
}
gate cu3_5073914912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4218676421683) _gate_q_0;
  u1(1.686842352415265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11507291074459078, 0, -2.4218676421683) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11507291074459078, 0.7350252897530349, 0) _gate_q_1;
}
gate rzz_5073913760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.097208142174551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5073919520(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9403467625809407) _gate_q_0;
  u1(0.7208110155560934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6890905270716349, 0, -0.9403467625809407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6890905270716349, 0.21953574702484732, 0) _gate_q_1;
}
gate rzz_5073919184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9164316240047756) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073916112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3007031875733004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5073912032(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.053913953642728) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.053913953642728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.053913953642728) _gate_q_1;
}
gate rxx_5073918464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.664409894694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5073925952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1756579586570333, 3.495725085403331, -3.495725085403331) _gate_q_0;
}
gate rzz_5073916304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.30028953861882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073914672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3260137801284803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5073911936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.643549031896928) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8062607278364506) _gate_q_1;
  ry(-2.8062607278364506) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.643549031896928) _gate_q_0;
}
gate r_5073916160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.9761066640583085, 3.588381986176831, -3.588381986176831) _gate_q_0;
}
gate xx_minus_yy_5073917312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0698570156181197) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.05178473593164499) _gate_q_0;
  ry(-0.05178473593164499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0698570156181197) _gate_q_1;
}
gate xx_minus_yy_5073912848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.9198421323934289) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6508943045093107) _gate_q_0;
  ry(-2.6508943045093107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.9198421323934289) _gate_q_1;
}
gate cu3_5073915392(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.008009750799375) _gate_q_0;
  u1(0.598584085715842) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.189125412590345, 0, -2.008009750799375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.189125412590345, 1.4094256650835328, 0) _gate_q_1;
}
gate r_5073921440(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7089580124432526, 4.008383815202507, -4.008383815202507) _gate_q_0;
}
gate cu3_5073919280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5860106357589405) _gate_q_0;
  u1(1.4757234255705038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9040652011562633, 0, -2.5860106357589405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9040652011562633, 1.1102872101884365, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  swap _gate_q_14, _gate_q_19;
  ecr _gate_q_15, _gate_q_5;
  iswap _gate_q_1, _gate_q_12;
  ecr _gate_q_2, _gate_q_10;
  cu3_5073916736(3.5492154495908936, 2.715553114660152, 5.38666909813082) _gate_q_13, _gate_q_8;
  rzz_5073923408(4.959541441205745) _gate_q_4, _gate_q_16;
  xx_minus_yy_5073926912(4.345163957490296, 5.960689510699607) _gate_q_6, _gate_q_17;
  crx(3.719224437821877) _gate_q_0, _gate_q_18;
  cs _gate_q_7, _gate_q_3;
  z _gate_q_11;
  s _gate_q_9;
  r_5073914864(0.9844219346706778, 0.7159440409989902) _gate_q_12;
  rz(4.8485519363551655) _gate_q_0;
  t _gate_q_10;
  t _gate_q_6;
  x _gate_q_5;
  swap _gate_q_11, _gate_q_7;
  cp(3.847771009242739) _gate_q_1, _gate_q_9;
  t _gate_q_18;
  z _gate_q_2;
  dcx _gate_q_15, _gate_q_3;
  s _gate_q_8;
  rzx_5073914624(4.262909964788338) _gate_q_13, _gate_q_16;
  h _gate_q_19;
  t _gate_q_4;
  csx _gate_q_17, _gate_q_14;
  swap _gate_q_13, _gate_q_12;
  xx_minus_yy_5073922496(0.03137140407925374, 4.006121984678565) _gate_q_8, _gate_q_9;
  rxx_5073915056(2.5386072829371886) _gate_q_14, _gate_q_2;
  u2(3.6767114328945683, 5.5960440974784795) _gate_q_3;
  csdg _gate_q_19, _gate_q_0;
  csdg _gate_q_6, _gate_q_16;
  y _gate_q_11;
  xx_plus_yy_5073916496(0.5115443995448451, 5.841422212952705) _gate_q_17, _gate_q_4;
  h _gate_q_5;
  cs _gate_q_18, _gate_q_10;
  u3(3.341588334799545, 3.4096641355272976, 4.095611200511528) _gate_q_15;
  swap _gate_q_1, _gate_q_7;
  t _gate_q_4;
  ryy_5073914192(5.863079725696961) _gate_q_0, _gate_q_11;
  sx _gate_q_16;
  csx _gate_q_5, _gate_q_6;
  id _gate_q_3;
  rx(5.702135927571754) _gate_q_9;
  iswap _gate_q_12, _gate_q_8;
  rzx_5073917792(2.248115455725639) _gate_q_7, _gate_q_10;
  u3(3.412575262265749, 2.8947012884817287, 2.698731804873177) _gate_q_14;
  r_5073921104(4.333255809860728, 5.879390141317636) _gate_q_2;
  dcx _gate_q_18, _gate_q_19;
  sx _gate_q_17;
  cy _gate_q_13, _gate_q_15;
  z _gate_q_1;
  y _gate_q_7;
  cu3_5073920864(4.572287366966376, 3.762121696889208, 6.2632220953665625) _gate_q_4, _gate_q_8;
  crz(4.2596376861045995) _gate_q_12, _gate_q_0;
  cu3_5073914912(0.23014582148918156, 0.7350252897530349, 4.108709994583565) _gate_q_18, _gate_q_5;
  cs _gate_q_10, _gate_q_17;
  y _gate_q_9;
  swap _gate_q_1, _gate_q_11;
  cx _gate_q_2, _gate_q_14;
  rzz_5073913760(5.097208142174551) _gate_q_19, _gate_q_13;
  ecr _gate_q_3, _gate_q_6;
  rx(5.304924248548156) _gate_q_15;
  u3(0.5767448480701711, 5.439811885102457, 2.272562979195761) _gate_q_16;
  cu3_5073919520(1.3781810541432697, 0.21953574702484732, 1.6611577781370341) _gate_q_16, _gate_q_3;
  cry(1.1367115350678856) _gate_q_0, _gate_q_6;
  sx _gate_q_14;
  cs _gate_q_5, _gate_q_18;
  rzz_5073919184(3.9164316240047756) _gate_q_9, _gate_q_2;
  crx(5.125363077692607) _gate_q_17, _gate_q_15;
  id _gate_q_11;
  ryy_5073916112(2.3007031875733004) _gate_q_4, _gate_q_19;
  cu1_5073912032(4.107827907285456) _gate_q_12, _gate_q_8;
  cy _gate_q_10, _gate_q_7;
  csdg _gate_q_13, _gate_q_1;
  U(5.803432439581322, 1.7925491195157863, 3.9598284217498465) _gate_q_5;
  rxx_5073918464(4.664409894694) _gate_q_4, _gate_q_15;
  u1(2.4742311363966722) _gate_q_3;
  sxdg _gate_q_6;
  csx _gate_q_10, _gate_q_13;
  cz _gate_q_2, _gate_q_19;
  u1(4.801259492655702) _gate_q_0;
  crz(1.6129805310010497) _gate_q_11, _gate_q_7;
  h _gate_q_1;
  z _gate_q_12;
  r_5073925952(1.1756579586570333, 5.066521412198227) _gate_q_14;
  cs _gate_q_17, _gate_q_8;
  iswap _gate_q_16, _gate_q_18;
  p(1.1751165730789348) _gate_q_9;
  sdg _gate_q_17;
  csdg _gate_q_2, _gate_q_15;
  z _gate_q_0;
  p(5.589881680268623) _gate_q_1;
  csdg _gate_q_19, _gate_q_18;
  z _gate_q_13;
  rzz_5073916304(3.30028953861882) _gate_q_16, _gate_q_4;
  csx _gate_q_12, _gate_q_7;
  cs _gate_q_3, _gate_q_6;
  id _gate_q_8;
  cx _gate_q_11, _gate_q_9;
  ryy_5073914672(0.3260137801284803) _gate_q_10, _gate_q_14;
  ry(1.0699985460947241) _gate_q_5;
  sx _gate_q_14;
  sx _gate_q_19;
  crz(5.959912167555069) _gate_q_8, _gate_q_9;
  tdg _gate_q_10;
  u1(0.36150940191431175) _gate_q_4;
  sxdg _gate_q_5;
  u3(5.383153353429293, 3.3385589083491176, 5.1910708468187705) _gate_q_3;
  cu(3.6485770735725644, 1.967835436942147, 3.0195255149153315, 5.207744171451537) _gate_q_2, _gate_q_12;
  xx_plus_yy_5073911936(5.612521455672901, 2.643549031896928) _gate_q_11, _gate_q_13;
  z _gate_q_18;
  rx(3.9615953667654584) _gate_q_6;
  s _gate_q_0;
  r_5073916160(4.9761066640583085, 5.1591783129717275) _gate_q_7;
  cs _gate_q_1, _gate_q_15;
  xx_minus_yy_5073917312(0.10356947186328998, 1.0698570156181197) _gate_q_16, _gate_q_17;
  xx_minus_yy_5073912848(5.3017886090186215, 0.9198421323934289) _gate_q_10, _gate_q_7;
  ry(2.4614607910428847) _gate_q_11;
  swap _gate_q_12, _gate_q_13;
  cu3_5073915392(4.37825082518069, 1.4094256650835328, 2.606593836515217) _gate_q_18, _gate_q_2;
  r_5073921440(1.7089580124432526, 5.579180141997403) _gate_q_15;
  sdg _gate_q_8;
  h _gate_q_17;
  p(5.047187566072917) _gate_q_9;
  p(3.5256412908252917) _gate_q_5;
  cu3_5073919280(5.808130402312527, 1.1102872101884365, 4.061734061329444) _gate_q_1, _gate_q_6;
  cu(3.760808954127584, 2.4046605969253068, 4.564298683391998, 6.101680456466333) _gate_q_3, _gate_q_19;
  x _gate_q_4;
  csdg _gate_q_16, _gate_q_14;
  t _gate_q_0;
}