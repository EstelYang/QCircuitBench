gate cu1_5072021088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8283902201302848) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8283902201302848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8283902201302848) _gate_q_1;
}
gate rzx_5072014848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.702960162165573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072027088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.869366243023277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072015616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.015513393009491743) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.015513393009491743) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.015513393009491743) _gate_q_1;
}
gate cu1_5072019072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1267019688092152) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1267019688092152) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1267019688092152) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072023680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.361376293877152) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9490043592401327) _gate_q_0;
  ry(-2.9490043592401327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.361376293877152) _gate_q_1;
}
gate xx_minus_yy_5072025984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.480114015375518) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5155998760637555) _gate_q_0;
  ry(-1.5155998760637555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.480114015375518) _gate_q_1;
}
gate rxx_5072024640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.222242383456833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072016624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.831134887692663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate rxx_5072022816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0817655553012249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072027232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2472957189744365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5072019456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.034418319811271) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.221862067051165) _gate_q_0;
  ry(-2.221862067051165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.034418319811271) _gate_q_1;
}
gate ryy_5072015232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.595189295222105) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072012928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3882152657667455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072020752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.944990290315745, 3.2753251678769395, -3.2753251678769395) _gate_q_0;
}
gate cu1_5072013792(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.966176121033823) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.966176121033823) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.966176121033823) _gate_q_1;
}
gate cu3_5072016336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.4615790522779553) _gate_q_0;
  u1(1.604362235530131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9925713495133516, 0, -3.4615790522779553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9925713495133516, 1.8572168167478242, 0) _gate_q_1;
}
gate xx_plus_yy_5072023392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8371044549646924) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9551654709343325) _gate_q_1;
  ry(-1.9551654709343325) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8371044549646924) _gate_q_0;
}
gate rxx_5072018112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.026637169355275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072021712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4230837310942794) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8702418712613733) _gate_q_1;
  ry(-2.8702418712613733) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4230837310942794) _gate_q_0;
}
gate r_5072017248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0096963055649033, 4.381225185881422, -4.381225185881422) _gate_q_0;
}
gate r_5072026944(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.313502348106953, 3.6400599960151085, -3.6400599960151085) _gate_q_0;
}
gate rxx_5072016432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.14299092421450868) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072017104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.996506361633495) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.996506361633495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.996506361633495) _gate_q_1;
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
gate rxx_5072019216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8714465365866553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cu1_5072021088(3.6567804402605697) _gate_q_10, _gate_q_8;
  rzx_5072014848(3.702960162165573) _gate_q_12, _gate_q_2;
  rxx_5072027088(5.869366243023277) _gate_q_5, _gate_q_0;
  y _gate_q_9;
  cu1_5072015616(0.031026786018983486) _gate_q_7, _gate_q_4;
  cu1_5072019072(6.2534039376184305) _gate_q_3, _gate_q_6;
  x _gate_q_14;
  rz(6.193780535193816) _gate_q_11;
  xx_minus_yy_5072023680(5.898008718480265, 5.361376293877152) _gate_q_1, _gate_q_13;
  ry(3.1906977681911544) _gate_q_3;
  sxdg _gate_q_1;
  xx_minus_yy_5072025984(3.031199752127511, 3.480114015375518) _gate_q_7, _gate_q_13;
  rxx_5072024640(4.222242383456833) _gate_q_9, _gate_q_0;
  sxdg _gate_q_4;
  rxx_5072016624(1.831134887692663) _gate_q_2, _gate_q_8;
  t _gate_q_12;
  dcx _gate_q_10, _gate_q_14;
  y _gate_q_6;
  swap _gate_q_5, _gate_q_11;
  cu(5.683292629261521, 0.31987839667826334, 4.254614556693627, 3.396231479505277) _gate_q_5, _gate_q_8;
  rx(1.8410869674091908) _gate_q_12;
  ecr _gate_q_4, _gate_q_13;
  rxx_5072022816(1.0817655553012249) _gate_q_14, _gate_q_9;
  rz(5.344320984881391) _gate_q_7;
  rzx_5072027232(1.2472957189744365) _gate_q_10, _gate_q_6;
  ry(4.122953567316457) _gate_q_11;
  csdg _gate_q_0, _gate_q_1;
  t _gate_q_2;
  s _gate_q_3;
  sx _gate_q_7;
  ecr _gate_q_1, _gate_q_6;
  x _gate_q_8;
  sxdg _gate_q_13;
  xx_minus_yy_5072019456(4.44372413410233, 6.034418319811271) _gate_q_0, _gate_q_4;
  cy _gate_q_14, _gate_q_2;
  crx(4.006776669618048) _gate_q_12, _gate_q_3;
  ryy_5072015232(1.595189295222105) _gate_q_5, _gate_q_11;
  rzx_5072012928(1.3882152657667455) _gate_q_10, _gate_q_9;
  sdg _gate_q_1;
  r_5072020752(4.944990290315745, 4.846121494671836) _gate_q_7;
  cu1_5072013792(5.932352242067646) _gate_q_0, _gate_q_2;
  ch _gate_q_4, _gate_q_8;
  cx _gate_q_13, _gate_q_11;
  swap _gate_q_3, _gate_q_10;
  y _gate_q_9;
  u1(6.004482799639878) _gate_q_5;
  tdg _gate_q_14;
  cry(6.026871294579658) _gate_q_12, _gate_q_6;
  tdg _gate_q_9;
  rz(3.152061004366071) _gate_q_2;
  rx(5.2447555324540795) _gate_q_13;
  cy _gate_q_0, _gate_q_10;
  cu3_5072016336(1.9851426990267032, 1.8572168167478242, 5.065941287808086) _gate_q_11, _gate_q_8;
  cx _gate_q_4, _gate_q_6;
  xx_plus_yy_5072023392(3.910330941868665, 0.8371044549646924) _gate_q_3, _gate_q_7;
  swap _gate_q_5, _gate_q_14;
  sxdg _gate_q_1;
  p(5.993510615289708) _gate_q_12;
  rxx_5072018112(2.026637169355275) _gate_q_8, _gate_q_9;
  y _gate_q_7;
  cry(3.88297172355561) _gate_q_13, _gate_q_12;
  id _gate_q_2;
  dcx _gate_q_14, _gate_q_1;
  sx _gate_q_6;
  u3(4.389107858478271, 4.552471128423834, 2.759555819621346) _gate_q_3;
  ecr _gate_q_0, _gate_q_4;
  sxdg _gate_q_11;
  swap _gate_q_5, _gate_q_10;
  sxdg _gate_q_5;
  t _gate_q_9;
  xx_plus_yy_5072021712(5.740483742522747, 3.4230837310942794) _gate_q_11, _gate_q_13;
  s _gate_q_10;
  dcx _gate_q_8, _gate_q_1;
  swap _gate_q_12, _gate_q_2;
  crz(2.053297576022538) _gate_q_14, _gate_q_0;
  swap _gate_q_6, _gate_q_3;
  z _gate_q_4;
  r_5072017248(1.0096963055649033, 5.9520215126763185) _gate_q_7;
  cy _gate_q_11, _gate_q_4;
  r_5072026944(0.313502348106953, 5.210856322810005) _gate_q_1;
  rxx_5072016432(0.14299092421450868) _gate_q_7, _gate_q_13;
  sdg _gate_q_3;
  u3(5.858054837195656, 1.8790162674656452, 5.583870605222927) _gate_q_2;
  u3(1.2916220829330776, 4.228527382442589, 0.27465049290336147) _gate_q_9;
  cu1_5072017104(5.99301272326699) _gate_q_0, _gate_q_5;
  id _gate_q_14;
  iswap _gate_q_6, _gate_q_8;
  cu(0.5793749893840946, 5.120896639326069, 0.4179554589682992, 4.368787916768327) _gate_q_12, _gate_q_10;
  dcx _gate_q_6, _gate_q_9;
  csx _gate_q_8, _gate_q_5;
  sx _gate_q_3;
  csdg _gate_q_7, _gate_q_12;
  u2(5.127780603449084, 0.8845578304882041) _gate_q_14;
  sxdg _gate_q_10;
  swap _gate_q_2, _gate_q_1;
  rxx_5072019216(3.8714465365866553) _gate_q_0, _gate_q_13;
  y _gate_q_11;
  u3(0.8233243895967918, 3.9074656294532564, 0.8590634425753542) _gate_q_4;
}
gate xx_plus_yy_5072011824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7808135595552237) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7227847445519325) _gate_q_1;
  ry(-0.7227847445519325) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7808135595552237) _gate_q_0;
}
gate rzx_5072019120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1592171371954765) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5072022336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.48855567701219477) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9713232713669249) _gate_q_0;
  ry(-0.9713232713669249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.48855567701219477) _gate_q_1;
}
gate rzz_5072024976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8602174257045574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072017632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0351207140638246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072026080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.088441816583217) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072016960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1389736359648497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072023728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6799287453499936) _gate_q_1;
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
gate rzx_5072025168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.624824848686378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072019936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.512800692986205, 1.1045023518155048, -1.1045023518155048) _gate_q_0;
}
gate cu1_5072027520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.788446362024904) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.788446362024904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.788446362024904) _gate_q_1;
}
gate rzz_5072024544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8300108969428948) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072017680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.008132859950987) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0153659336393783) _gate_q_1;
  ry(-1.0153659336393783) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.008132859950987) _gate_q_0;
}
gate xx_plus_yy_5072022768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.418899798712055) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47975661503271544) _gate_q_1;
  ry(-0.47975661503271544) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.418899798712055) _gate_q_0;
}
gate rxx_5072018496(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.931532488659211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072021664(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9394979750689654) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9394979750689654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9394979750689654) _gate_q_1;
}
gate rxx_5072015952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8776064836904376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  u3(1.642930841590249, 4.010384739952969, 4.363461952495534) _gate_q_14;
  U(5.944580672850321, 5.456432055940106, 0.4108863825679149) _gate_q_6;
  s _gate_q_2;
  u1(4.786093459473007) _gate_q_9;
  crx(1.857826728232393) _gate_q_3, _gate_q_11;
  ch _gate_q_1, _gate_q_12;
  cx _gate_q_13, _gate_q_0;
  cy _gate_q_10, _gate_q_5;
  dcx _gate_q_8, _gate_q_7;
  U(4.374450261004359, 5.7768957828623435, 3.145199422267912) _gate_q_4;
  csx _gate_q_9, _gate_q_6;
  sx _gate_q_14;
  ry(1.2318157094290714) _gate_q_2;
  xx_plus_yy_5072011824(1.445569489103865, 1.7808135595552237) _gate_q_1, _gate_q_12;
  csdg _gate_q_8, _gate_q_7;
  rzx_5072019120(0.1592171371954765) _gate_q_13, _gate_q_10;
  csx _gate_q_4, _gate_q_5;
  rx(5.742297909479342) _gate_q_11;
  ry(4.987053987585221) _gate_q_3;
  U(4.9982181390224305, 4.448697564415761, 1.9599620744292636) _gate_q_0;
  sdg _gate_q_3;
  u1(5.382435557706527) _gate_q_8;
  u1(3.846993114883976) _gate_q_11;
  u1(4.986418600101462) _gate_q_9;
  sdg _gate_q_4;
  t _gate_q_14;
  iswap _gate_q_7, _gate_q_5;
  cy _gate_q_13, _gate_q_6;
  ecr _gate_q_2, _gate_q_12;
  crx(5.03641511061638) _gate_q_0, _gate_q_10;
  z _gate_q_1;
  u2(6.020629888026988, 0.8087980238470738) _gate_q_5;
  u1(3.320741685309184) _gate_q_2;
  xx_minus_yy_5072022336(1.9426465427338497, 0.48855567701219477) _gate_q_11, _gate_q_4;
  rzz_5072024976(3.8602174257045574) _gate_q_0, _gate_q_12;
  rxx_5072017632(1.0351207140638246) _gate_q_9, _gate_q_8;
  crx(4.212072526197874) _gate_q_1, _gate_q_6;
  t _gate_q_10;
  h _gate_q_13;
  p(5.9325326424104565) _gate_q_14;
  csdg _gate_q_7, _gate_q_3;
  h _gate_q_8;
  U(3.747577968260619, 2.9108528800825675, 1.1143303732372354) _gate_q_0;
  cp(4.481810669119871) _gate_q_3, _gate_q_4;
  crz(3.447417712085748) _gate_q_6, _gate_q_13;
  U(6.213928037691485, 4.99634257723675, 3.4989018735769273) _gate_q_14;
  rxx_5072026080(2.088441816583217) _gate_q_7, _gate_q_11;
  iswap _gate_q_5, _gate_q_2;
  rxx_5072016960(1.1389736359648497) _gate_q_9, _gate_q_10;
  z _gate_q_12;
  sx _gate_q_1;
  cy _gate_q_5, _gate_q_11;
  ch _gate_q_2, _gate_q_0;
  u2(0.5227808172966208, 0.5259789316261881) _gate_q_7;
  rxx_5072023728(3.6799287453499936) _gate_q_9, _gate_q_13;
  rz(3.602452828455454) _gate_q_10;
  u3(1.0877881436169334, 6.122447680854161, 1.5142348749939407) _gate_q_14;
  cx _gate_q_1, _gate_q_12;
  ry(0.8847195626954406) _gate_q_3;
  crz(3.119365408494781) _gate_q_8, _gate_q_6;
  ry(3.2539042312725304) _gate_q_4;
  cs _gate_q_12, _gate_q_13;
  swap _gate_q_8, _gate_q_3;
  cx _gate_q_11, _gate_q_10;
  rz(1.4399036353738264) _gate_q_6;
  rzx_5072025168(5.624824848686378) _gate_q_5, _gate_q_0;
  h _gate_q_1;
  cz _gate_q_2, _gate_q_9;
  cp(3.236780136363483) _gate_q_4, _gate_q_14;
  r_5072019936(4.512800692986205, 2.6752986786104014) _gate_q_7;
  z _gate_q_3;
  csx _gate_q_12, _gate_q_1;
  cu1_5072027520(5.576892724049808) _gate_q_14, _gate_q_13;
  rzz_5072024544(3.8300108969428948) _gate_q_8, _gate_q_10;
  cx _gate_q_9, _gate_q_11;
  xx_plus_yy_5072017680(2.0307318672787567, 3.008132859950987) _gate_q_6, _gate_q_5;
  U(5.681712219607839, 3.630788413280709, 4.754876628843726) _gate_q_0;
  xx_plus_yy_5072022768(0.9595132300654309, 2.418899798712055) _gate_q_2, _gate_q_4;
  z _gate_q_7;
  y _gate_q_10;
  iswap _gate_q_12, _gate_q_3;
  sdg _gate_q_5;
  rxx_5072018496(4.931532488659211) _gate_q_2, _gate_q_7;
  dcx _gate_q_6, _gate_q_9;
  csx _gate_q_14, _gate_q_13;
  sdg _gate_q_1;
  rz(1.3246594447434417) _gate_q_8;
  crx(1.4040601858319617) _gate_q_0, _gate_q_11;
  x _gate_q_4;
  u1(0.7858811548356832) _gate_q_12;
  s _gate_q_8;
  cu1_5072021664(3.8789959501379307) _gate_q_3, _gate_q_14;
  rxx_5072015952(2.8776064836904376) _gate_q_1, _gate_q_4;
  s _gate_q_9;
  x _gate_q_10;
  iswap _gate_q_0, _gate_q_13;
  rx(2.983240253257055) _gate_q_6;
  cu(2.2697522306448072, 1.6895038125591513, 2.4460590834412224, 0.6627014982025373) _gate_q_2, _gate_q_5;
  u1(2.9910748640340596) _gate_q_11;
  u2(0.12909094099809823, 5.391808045629354) _gate_q_7;
}