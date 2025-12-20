gate rzx_5070305760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.3315134063128555) _gate_q_1;
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
gate rzz_5070307152(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9624372348413472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5070306528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6811077475987641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070292176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.936993523440385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070291648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.644869295038418) _gate_q_0;
  u1(-2.4577889751041675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3216595132511142, 0, -2.644869295038418) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3216595132511142, 5.1026582701425856, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070304656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.965744835715751) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6751056335857272) _gate_q_1;
  ry(-0.6751056335857272) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.965744835715751) _gate_q_0;
}
gate rzx_5070292656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1287120601223264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070301776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.1740270904471055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5070307104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4794247007704807) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4794247007704807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4794247007704807) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5070304608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.707711491000884) _gate_q_0;
  u1(1.423897902934411) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7647737597728009, 0, -3.707711491000884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7647737597728009, 2.283813588066473, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  t _gate_q_7;
  tdg _gate_q_2;
  u1(4.0512893621099195) _gate_q_6;
  u3(5.082684642642195, 0.9847644560497213, 1.4479781201313782) _gate_q_4;
  tdg _gate_q_8;
  rzx_5070305760(5.3315134063128555) _gate_q_5, _gate_q_0;
  cu(0.2055858830273832, 1.1065382281812628, 1.1114399312165553, 1.3223915584266126) _gate_q_1, _gate_q_3;
  ecr _gate_q_7, _gate_q_8;
  crz(4.296135970709596) _gate_q_2, _gate_q_0;
  rzz_5070307152(1.9624372348413472) _gate_q_4, _gate_q_3;
  cs _gate_q_5, _gate_q_6;
  u2(2.701885858455349, 5.430524260242564) _gate_q_1;
  y _gate_q_0;
  ryy_5070306528(1.6811077475987641) _gate_q_1, _gate_q_5;
  rxx_5070292176(5.936993523440385) _gate_q_8, _gate_q_4;
  U(5.041403786578416, 6.145420062491143, 3.90420446236108) _gate_q_2;
  cu3_5070291648(2.6433190265022284, 5.1026582701425856, 0.18708031993425026) _gate_q_6, _gate_q_7;
  y _gate_q_3;
  xx_plus_yy_5070304656(1.3502112671714543, 4.965744835715751) _gate_q_0, _gate_q_1;
  U(0.9197373644707784, 0.9478447585874559, 4.741519400822493) _gate_q_5;
  rzx_5070292656(3.1287120601223264) _gate_q_2, _gate_q_7;
  rxx_5070301776(6.1740270904471055) _gate_q_3, _gate_q_4;
  cry(1.1579326442213245) _gate_q_6, _gate_q_8;
  p(4.5641002198498875) _gate_q_7;
  rz(3.5664885314458257) _gate_q_8;
  x _gate_q_1;
  crz(5.206252704207372) _gate_q_5, _gate_q_4;
  iswap _gate_q_6, _gate_q_0;
  sx _gate_q_2;
  t _gate_q_3;
  cu1_5070307104(0.9588494015409614) _gate_q_2, _gate_q_0;
  u1(2.5306632121455723) _gate_q_8;
  h _gate_q_4;
  csx _gate_q_3, _gate_q_7;
  cu(0.8162475587107625, 4.06060013062836, 5.533280537661765, 2.550945368913195) _gate_q_1, _gate_q_6;
  y _gate_q_5;
  p(5.032043997057546) _gate_q_2;
  u3(3.496419829917362, 2.278638964639943, 0.947796102012283) _gate_q_0;
  dcx _gate_q_5, _gate_q_3;
  cx _gate_q_8, _gate_q_4;
  csdg _gate_q_6, _gate_q_7;
  sxdg _gate_q_1;
  cu3_5070304608(1.5295475195456019, 2.283813588066473, 5.131609393935295) _gate_q_4, _gate_q_2;
  cz _gate_q_0, _gate_q_5;
  p(6.1420651081941315) _gate_q_3;
  iswap _gate_q_1, _gate_q_7;
  cs _gate_q_6, _gate_q_8;
  csdg _gate_q_6, _gate_q_2;
  tdg _gate_q_8;
  U(5.80472916373273, 0.7834860502519055, 5.54730144907511) _gate_q_7;
  crz(1.9813403110210275) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_4;
  id _gate_q_0;
}
gate xx_plus_yy_5070291840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6569816105658315) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3772917653353509) _gate_q_1;
  ry(-0.3772917653353509) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6569816105658315) _gate_q_0;
}
gate ryy_5070303888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8285029035587865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070297600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.938547076936333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070305328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7106063644184877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070305712(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.61459247105707) _gate_q_0;
  u1(0.9486790408655141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.48682617628618297, 0, -1.61459247105707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.48682617628618297, 0.6659134301915558, 0) _gate_q_1;
}
gate ryy_5070296688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2431924431962993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070295056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2598596577224024) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8633677043724622) _gate_q_1;
  ry(-0.8633677043724622) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2598596577224024) _gate_q_0;
}
gate rzx_5070299088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.825041014647065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070294768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4334422388346055) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.120081462256789) _gate_q_1;
  ry(-3.120081462256789) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4334422388346055) _gate_q_0;
}
gate ryy_5070299808(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.655450321164144) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  xx_plus_yy_5070291840(0.7545835306707018, 1.6569816105658315) _gate_q_8, _gate_q_6;
  iswap _gate_q_1, _gate_q_4;
  p(4.096175240668751) _gate_q_0;
  ryy_5070303888(0.8285029035587865) _gate_q_7, _gate_q_3;
  cz _gate_q_5, _gate_q_2;
  rx(5.142489754379678) _gate_q_6;
  ry(2.5609394095291202) _gate_q_2;
  sxdg _gate_q_8;
  u1(1.2140457938935667) _gate_q_1;
  x _gate_q_5;
  y _gate_q_0;
  rzz_5070297600(3.938547076936333) _gate_q_3, _gate_q_4;
  ry(5.549924496793473) _gate_q_7;
  p(0.3544297786900242) _gate_q_0;
  dcx _gate_q_3, _gate_q_6;
  x _gate_q_5;
  sx _gate_q_7;
  rz(4.727592424038411) _gate_q_1;
  ryy_5070305328(3.7106063644184877) _gate_q_8, _gate_q_2;
  id _gate_q_4;
  z _gate_q_0;
  tdg _gate_q_1;
  csx _gate_q_7, _gate_q_3;
  tdg _gate_q_8;
  swap _gate_q_2, _gate_q_4;
  cz _gate_q_6, _gate_q_5;
  ry(1.4530466567383813) _gate_q_2;
  u3(3.50117675448251, 4.229988782900195, 3.584532624969071) _gate_q_5;
  cu3_5070305712(0.9736523525723659, 0.6659134301915558, 2.563271511922584) _gate_q_6, _gate_q_0;
  sxdg _gate_q_7;
  ryy_5070296688(2.2431924431962993) _gate_q_1, _gate_q_8;
  swap _gate_q_3, _gate_q_4;
  y _gate_q_6;
  crx(5.8906336388408675) _gate_q_2, _gate_q_4;
  cy _gate_q_7, _gate_q_8;
  crz(1.824563877037907) _gate_q_3, _gate_q_1;
  cz _gate_q_0, _gate_q_5;
  csdg _gate_q_2, _gate_q_3;
  u1(5.413774497353193) _gate_q_6;
  sdg _gate_q_4;
  y _gate_q_5;
  h _gate_q_7;
  xx_plus_yy_5070295056(1.7267354087449245, 2.2598596577224024) _gate_q_8, _gate_q_1;
  h _gate_q_0;
  sxdg _gate_q_8;
  tdg _gate_q_3;
  rzx_5070299088(4.825041014647065) _gate_q_5, _gate_q_0;
  rz(3.5068224837419586) _gate_q_6;
  sdg _gate_q_2;
  t _gate_q_4;
  ecr _gate_q_1, _gate_q_7;
  rz(1.397462169082742) _gate_q_0;
  crx(0.5495908812821942) _gate_q_7, _gate_q_1;
  xx_plus_yy_5070294768(6.240162924513578, 1.4334422388346055) _gate_q_5, _gate_q_6;
  u2(5.232810189791083, 4.607604541741306) _gate_q_8;
  ryy_5070299808(5.655450321164144) _gate_q_3, _gate_q_2;
  x _gate_q_4;
}