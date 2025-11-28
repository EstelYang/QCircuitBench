gate ryy_5074205824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8326730810201695) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5074203136(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.434818776485665) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.434818776485665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.434818776485665) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5074204144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.18624722711105912, -0.6034960264611773, 0.6034960264611773) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5070863248(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16563707490828772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070855856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.033469880572431) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.095499553826671) _gate_q_1;
  ry(-1.095499553826671) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.033469880572431) _gate_q_0;
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
gate xx_minus_yy_5070855184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.310924933005461) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.478673570774586) _gate_q_0;
  ry(-0.478673570774586) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.310924933005461) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070855616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.516629902546254, 3.0613443923344112, -3.0613443923344112) _gate_q_0;
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
gate xx_plus_yy_5070859216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9074354110701974) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.244991490936129) _gate_q_1;
  ry(-1.244991490936129) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9074354110701974) _gate_q_0;
}
gate cu1_5070851584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4919782233474927) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4919782233474927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4919782233474927) _gate_q_1;
}
gate rxx_5070853600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5918657166453993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  t _gate_q_2;
  ryy_5074205824(0.8326730810201695) _gate_q_3, _gate_q_8;
  sdg _gate_q_9;
  s _gate_q_4;
  u2(4.503960432098665, 4.219837317210721) _gate_q_6;
  cy _gate_q_1, _gate_q_10;
  tdg _gate_q_0;
  sxdg _gate_q_7;
  sdg _gate_q_5;
  cz _gate_q_3, _gate_q_8;
  cx _gate_q_2, _gate_q_9;
  cu1_5074203136(2.86963755297133) _gate_q_10, _gate_q_0;
  u3(0.8121807923832537, 1.1318126786658598, 2.7028450628976066) _gate_q_7;
  u3(3.0488948167384704, 6.048672478987745, 5.930213331030552) _gate_q_4;
  dcx _gate_q_1, _gate_q_5;
  r_5074204144(0.18624722711105912, 0.9673003003337193) _gate_q_6;
  crz(0.8484855549807334) _gate_q_4, _gate_q_1;
  cs _gate_q_7, _gate_q_9;
  u2(1.0554166398389555, 5.475056725449315) _gate_q_8;
  iswap _gate_q_5, _gate_q_10;
  sxdg _gate_q_2;
  id _gate_q_6;
  ryy_5070863248(0.16563707490828772) _gate_q_0, _gate_q_3;
  id _gate_q_3;
  xx_plus_yy_5070855856(2.190999107653342, 4.033469880572431) _gate_q_7, _gate_q_2;
  id _gate_q_10;
  t _gate_q_0;
  swap _gate_q_6, _gate_q_5;
  ch _gate_q_9, _gate_q_1;
  sdg _gate_q_4;
  u3(1.0862941609258034, 1.4931741975643966, 1.5114839935400042) _gate_q_8;
  cu(3.5506633562878083, 3.5020907350586725, 1.1317833328873164, 1.332831151989897) _gate_q_6, _gate_q_4;
  y _gate_q_1;
  p(4.761487777657305) _gate_q_3;
  iswap _gate_q_0, _gate_q_10;
  rz(4.685540940272933) _gate_q_7;
  cx _gate_q_9, _gate_q_8;
  cx _gate_q_2, _gate_q_5;
  z _gate_q_9;
  csx _gate_q_6, _gate_q_5;
  xx_minus_yy_5070855184(0.957347141549172, 5.310924933005461) _gate_q_0, _gate_q_3;
  csx _gate_q_7, _gate_q_4;
  csdg _gate_q_2, _gate_q_8;
  x _gate_q_1;
  z _gate_q_10;
  dcx _gate_q_10, _gate_q_4;
  x _gate_q_9;
  crx(4.196368761107252) _gate_q_3, _gate_q_7;
  cp(3.3206427208787197) _gate_q_1, _gate_q_6;
  cs _gate_q_2, _gate_q_5;
  sx _gate_q_8;
  r_5070855616(3.516629902546254, 4.632140719129308) _gate_q_0;
  dcx _gate_q_4, _gate_q_5;
  iswap _gate_q_3, _gate_q_1;
  ecr _gate_q_0, _gate_q_9;
  cu(1.2571034021021958, 0.40308286366440427, 0.2180199574553407, 2.163812040664932) _gate_q_10, _gate_q_8;
  swap _gate_q_2, _gate_q_6;
  sx _gate_q_7;
  z _gate_q_3;
  xx_plus_yy_5070859216(2.489982981872258, 2.9074354110701974) _gate_q_7, _gate_q_4;
  swap _gate_q_8, _gate_q_6;
  cx _gate_q_2, _gate_q_5;
  cu1_5070851584(2.9839564466949855) _gate_q_9, _gate_q_1;
  csdg _gate_q_0, _gate_q_10;
  cp(4.829743576686745) _gate_q_3, _gate_q_5;
  u3(2.3668196495474456, 4.191621565981429, 2.025587264316551) _gate_q_7;
  cp(3.5001521926260057) _gate_q_0, _gate_q_1;
  h _gate_q_8;
  dcx _gate_q_10, _gate_q_4;
  rxx_5070853600(2.5918657166453993) _gate_q_2, _gate_q_9;
  id _gate_q_6;
}
gate rxx_5070862432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.872172783243619) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070857920(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7918178794812731) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7918178794812731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7918178794812731) _gate_q_1;
}
gate cu1_5070860368(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.11781574766856988) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.11781574766856988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.11781574766856988) _gate_q_1;
}
gate ryy_5070858352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6639239669523485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070860656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3583969871905546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070856768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7964425873514402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070853408(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.554503386865603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070859360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.424219920520605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070853504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9634773262512863) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.111887287773075) _gate_q_1;
  ry(-2.111887287773075) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9634773262512863) _gate_q_0;
}
gate rzz_5070861424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.958134673097542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070864208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.729277124386338, 4.037411177667823, -4.037411177667823) _gate_q_0;
}
gate ryy_5070851488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.947405596917864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070857104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6026361024434235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070849760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.285401503181559, 0.5261807171897108, -0.5261807171897108) _gate_q_0;
}
gate r_5070864352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.773972634299846, 2.4564060826954117, -2.4564060826954117) _gate_q_0;
}
gate xx_plus_yy_5070848608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.64234700056204) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.5370313972822622) _gate_q_1;
  ry(-1.5370313972822622) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.64234700056204) _gate_q_0;
}
gate cu1_5070851968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.066008362528387) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.066008362528387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.066008362528387) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  rxx_5070862432(4.872172783243619) _gate_q_3, _gate_q_7;
  cu1_5070857920(3.5836357589625463) _gate_q_10, _gate_q_2;
  swap _gate_q_4, _gate_q_9;
  p(2.309756864622373) _gate_q_0;
  cu1_5070860368(0.23563149533713976) _gate_q_1, _gate_q_6;
  ryy_5070858352(2.6639239669523485) _gate_q_8, _gate_q_5;
  ryy_5070860656(2.3583969871905546) _gate_q_4, _gate_q_3;
  p(4.07646632867506) _gate_q_1;
  rxx_5070856768(3.7964425873514402) _gate_q_6, _gate_q_9;
  iswap _gate_q_0, _gate_q_10;
  cu(1.7574047905196009, 0.12023276499566, 1.0133323407988513, 1.53719949241878) _gate_q_7, _gate_q_2;
  dcx _gate_q_5, _gate_q_8;
  ecr _gate_q_5, _gate_q_7;
  s _gate_q_8;
  rzz_5070853408(2.554503386865603) _gate_q_10, _gate_q_0;
  rxx_5070859360(2.424219920520605) _gate_q_9, _gate_q_2;
  cs _gate_q_6, _gate_q_3;
  cu(0.9777767590092528, 3.1540337035088846, 6.1114732996670815, 4.239798907527219) _gate_q_4, _gate_q_1;
  y _gate_q_8;
  t _gate_q_3;
  u3(4.302095941758239, 4.693497092454219, 6.190780651935018) _gate_q_2;
  sx _gate_q_7;
  ch _gate_q_4, _gate_q_0;
  z _gate_q_9;
  cz _gate_q_10, _gate_q_1;
  sx _gate_q_5;
  u3(2.39605887728493, 0.07929227831475785, 4.407893381111404) _gate_q_6;
  x _gate_q_3;
  rx(5.2764207802194) _gate_q_0;
  xx_plus_yy_5070853504(4.22377457554615, 1.9634773262512863) _gate_q_7, _gate_q_10;
  rzz_5070861424(3.958134673097542) _gate_q_4, _gate_q_1;
  t _gate_q_8;
  cp(3.091363766595698) _gate_q_2, _gate_q_9;
  csdg _gate_q_6, _gate_q_5;
  ry(0.4338387504799826) _gate_q_8;
  rz(0.22190658382549694) _gate_q_2;
  r_5070864208(4.729277124386338, 5.60820750446272) _gate_q_5;
  s _gate_q_6;
  y _gate_q_9;
  s _gate_q_10;
  id _gate_q_3;
  t _gate_q_4;
  cp(4.903478522197889) _gate_q_1, _gate_q_7;
  sdg _gate_q_0;
  U(4.918208642232071, 2.734570968462944, 3.763115152563283) _gate_q_7;
  rx(1.079194922633544) _gate_q_10;
  dcx _gate_q_9, _gate_q_3;
  ryy_5070851488(5.947405596917864) _gate_q_5, _gate_q_8;
  cy _gate_q_0, _gate_q_6;
  ryy_5070857104(0.6026361024434235) _gate_q_4, _gate_q_1;
  r_5070849760(3.285401503181559, 2.0969770439846074) _gate_q_2;
  csdg _gate_q_2, _gate_q_10;
  U(4.630815870095717, 0.5697302906475933, 0.5993090507017038) _gate_q_9;
  rz(1.6660277151710934) _gate_q_5;
  crx(5.306992203868118) _gate_q_0, _gate_q_4;
  csx _gate_q_8, _gate_q_1;
  cp(3.7216876756386643) _gate_q_6, _gate_q_7;
  r_5070864352(5.773972634299846, 4.027202409490308) _gate_q_3;
  cs _gate_q_4, _gate_q_6;
  csx _gate_q_8, _gate_q_9;
  sxdg _gate_q_3;
  id _gate_q_0;
  csdg _gate_q_10, _gate_q_1;
  h _gate_q_2;
  u1(2.6030184857277203) _gate_q_7;
  x _gate_q_5;
  xx_plus_yy_5070848608(3.0740627945645245, 4.64234700056204) _gate_q_0, _gate_q_10;
  cs _gate_q_5, _gate_q_4;
  cu1_5070851968(2.132016725056774) _gate_q_1, _gate_q_6;
  ecr _gate_q_8, _gate_q_7;
  ry(0.7867354165171134) _gate_q_3;
  ch _gate_q_9, _gate_q_2;
}