gate cu3_5106572544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8065731092587436) _gate_q_0;
  u1(-1.8059596494192023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9924389682706471, 0, -2.8065731092587436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9924389682706471, 4.612532758677946, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5106581232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7287705201028107) _gate_q_0;
  u1(-1.4357393443395658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.115761262600986, 0, -1.7287705201028107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.115761262600986, 3.1645098644423766, 0) _gate_q_1;
}
gate xx_plus_yy_5106579744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.269603240587453) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5188785910845537) _gate_q_1;
  ry(-2.5188785910845537) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.269603240587453) _gate_q_0;
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
gate ryy_5106580848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1418151552662628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5106570720(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.36346399253206957, 2.7978135584780475, -2.7978135584780475) _gate_q_0;
}
gate ryy_5106579312(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.104111267139034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5106572592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.17212251048358573) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.17212251048358573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.17212251048358573) _gate_q_1;
}
gate rzx_5106578400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.255961207394387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106578784(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5144065377569723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5106580128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9325847490173526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106579840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1489170459222562, -0.5332378338109967, 0.5332378338109967) _gate_q_0;
}
gate cu1_5106575856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.285317609554145) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.285317609554145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.285317609554145) _gate_q_1;
}
gate rxx_5106565440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.196620313545426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106581280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8914458164202035) _gate_q_0;
  u1(-0.13111922819486788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8083847306273426, 0, -4.8914458164202035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8083847306273426, 5.022565044615072, 0) _gate_q_1;
}
gate rzx_5106579264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8721850307545088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5106574608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.468744682236796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106575376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1456840639429702) _gate_q_0;
  u1(0.1702678328752275) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9687347760251107, 0, -1.1456840639429702) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9687347760251107, 0.9754162310677428, 0) _gate_q_1;
}
gate cu1_5106565296(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9951177928851485) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9951177928851485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9951177928851485) _gate_q_1;
}
gate r_5106573840(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.990331418853164, 0.6063681670960608, -0.6063681670960608) _gate_q_0;
}
gate rzz_5106574176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9691282884730088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  s _gate_q_5;
  p(1.8623063326815916) _gate_q_10;
  s _gate_q_1;
  cu3_5106572544(1.9848779365412943, 4.612532758677946, 1.0006134598395415) _gate_q_11, _gate_q_4;
  h _gate_q_9;
  sxdg _gate_q_2;
  cu3_5106581232(6.231522525201972, 3.1645098644423766, 0.293031175763245) _gate_q_6, _gate_q_0;
  xx_plus_yy_5106579744(5.037757182169107, 2.269603240587453) _gate_q_3, _gate_q_7;
  ecr _gate_q_12, _gate_q_8;
  ryy_5106580848(2.1418151552662628) _gate_q_2, _gate_q_0;
  p(3.1008841717281292) _gate_q_10;
  cp(4.279188817333278) _gate_q_3, _gate_q_5;
  iswap _gate_q_4, _gate_q_11;
  u2(2.437182822195764, 5.982558052576706) _gate_q_6;
  crz(1.581602269812108) _gate_q_8, _gate_q_7;
  r_5106570720(0.36346399253206957, 4.368609885272944) _gate_q_12;
  rz(6.208905767566098) _gate_q_1;
  U(3.5043858944416924, 3.1551737212947137, 5.03758854071697) _gate_q_9;
  ch _gate_q_0, _gate_q_10;
  h _gate_q_5;
  rx(0.16288126103086847) _gate_q_6;
  ecr _gate_q_4, _gate_q_2;
  cry(2.130229047522083) _gate_q_7, _gate_q_9;
  swap _gate_q_11, _gate_q_8;
  ryy_5106579312(4.104111267139034) _gate_q_3, _gate_q_12;
  sxdg _gate_q_1;
  csdg _gate_q_12, _gate_q_1;
  sxdg _gate_q_7;
  cy _gate_q_8, _gate_q_5;
  U(2.6874472144219106, 4.011183872397855, 4.097993171908574) _gate_q_9;
  cu(5.161485680688707, 1.4018949042508475, 5.839483345836291, 5.399142523098565) _gate_q_11, _gate_q_4;
  ch _gate_q_6, _gate_q_10;
  swap _gate_q_0, _gate_q_2;
  z _gate_q_3;
  p(1.5487250744869565) _gate_q_0;
  cu1_5106572592(0.34424502096717147) _gate_q_1, _gate_q_9;
  rzx_5106578400(4.255961207394387) _gate_q_4, _gate_q_10;
  csdg _gate_q_6, _gate_q_5;
  id _gate_q_8;
  y _gate_q_7;
  ryy_5106578784(0.5144065377569723) _gate_q_12, _gate_q_3;
  z _gate_q_11;
  t _gate_q_2;
  ch _gate_q_8, _gate_q_1;
  cp(2.597679565735057) _gate_q_4, _gate_q_7;
  cy _gate_q_2, _gate_q_9;
  u1(5.049523724314067) _gate_q_5;
  x _gate_q_6;
  cp(6.221188996636993) _gate_q_12, _gate_q_3;
  rzz_5106580128(0.9325847490173526) _gate_q_11, _gate_q_10;
  z _gate_q_0;
  r_5106579840(1.1489170459222562, 1.0375584929839) _gate_q_1;
  x _gate_q_9;
  u3(1.5109645317187153, 1.350297532820087, 0.7467234875889796) _gate_q_8;
  cu1_5106575856(2.57063521910829) _gate_q_6, _gate_q_11;
  u3(0.3945851451153162, 5.999743858285202, 0.23413282245556374) _gate_q_2;
  ry(4.394264592462856) _gate_q_12;
  swap _gate_q_10, _gate_q_0;
  p(3.9123753298130386) _gate_q_3;
  rxx_5106565440(6.196620313545426) _gate_q_7, _gate_q_4;
  s _gate_q_5;
  ch _gate_q_0, _gate_q_5;
  sx _gate_q_12;
  cu3_5106581280(3.6167694612546852, 5.022565044615072, 4.760326588225336) _gate_q_1, _gate_q_11;
  rzx_5106579264(0.8721850307545088) _gate_q_9, _gate_q_6;
  rxx_5106574608(5.468744682236796) _gate_q_4, _gate_q_8;
  iswap _gate_q_7, _gate_q_3;
  cu3_5106575376(1.9374695520502214, 0.9754162310677428, 1.3159518968181978) _gate_q_10, _gate_q_2;
  ecr _gate_q_2, _gate_q_12;
  cu1_5106565296(3.990235585770297) _gate_q_1, _gate_q_7;
  cu(2.18343705562035, 0.5216268451246785, 0.9663014969735744, 4.476526172109455) _gate_q_3, _gate_q_0;
  cp(0.6962886503645521) _gate_q_4, _gate_q_11;
  ecr _gate_q_10, _gate_q_5;
  cry(5.75421454486365) _gate_q_9, _gate_q_6;
  u1(5.243851902102945) _gate_q_8;
  r_5106573840(4.990331418853164, 2.1771644938909573) _gate_q_3;
  ch _gate_q_0, _gate_q_4;
  id _gate_q_2;
  swap _gate_q_9, _gate_q_5;
  rz(3.278156579437434) _gate_q_8;
  rz(3.526179195728367) _gate_q_6;
  rzz_5106574176(1.9691282884730088) _gate_q_7, _gate_q_11;
  cry(2.9060272358764863) _gate_q_1, _gate_q_12;
  u2(3.7256531535220727, 2.2445561489101014) _gate_q_10;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5106994208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.8668852159888627, 2.4021603853630076, -2.4021603853630076) _gate_q_0;
}
gate cu3_5107002656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8867624232611995) _gate_q_0;
  u1(0.6072431440266244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5888360085463837, 0, -4.8867624232611995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5888360085463837, 4.2795192792345755, 0) _gate_q_1;
}
gate r_5107004000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.173403485269008, 2.4042543506272804, -2.4042543506272804) _gate_q_0;
}
gate rzx_5106998144(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3807559138414895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu1_5106385648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9931608842581325) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9931608842581325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9931608842581325) _gate_q_1;
}
gate xx_plus_yy_5106389344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.880328010619277) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.20804890991974093) _gate_q_1;
  ry(-0.20804890991974093) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.880328010619277) _gate_q_0;
}
gate cu3_5106392512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5518474151722748) _gate_q_0;
  u1(0.19277233721402243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.916808848735353, 0, -2.5518474151722748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.916808848735353, 2.3590750779582526, 0) _gate_q_1;
}
gate rzx_5106397504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.072788550530519) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106389536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.946048770628235, 2.461020055664169, -2.461020055664169) _gate_q_0;
}
gate xx_minus_yy_5106397360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.071974033629581) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1683947416874023) _gate_q_0;
  ry(-2.1683947416874023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.071974033629581) _gate_q_1;
}
gate xx_minus_yy_5106395392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.019596316278823) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6927708314803303) _gate_q_0;
  ry(-2.6927708314803303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.019596316278823) _gate_q_1;
}
gate rzx_5106387136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.787664566274913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5106400384(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.899315695617415) _gate_q_0;
  u1(0.38312689431997904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0911263896561874, 0, -2.899315695617415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0911263896561874, 2.5161888012974356, 0) _gate_q_1;
}
gate r_5106393424(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.6169005895679405, -1.115310205282042, 1.115310205282042) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  iswap _gate_q_8, _gate_q_12;
  U(4.790397001896829, 5.919842495070115, 5.395457831814817) _gate_q_2;
  u3(4.843646753997708, 4.776473787404423, 4.883907123176653) _gate_q_1;
  u3(0.26617650478610966, 4.580994626936448, 1.7271696488151633) _gate_q_0;
  sx _gate_q_4;
  ecr _gate_q_3, _gate_q_10;
  t _gate_q_11;
  dcx _gate_q_6, _gate_q_9;
  iswap _gate_q_7, _gate_q_5;
  cy _gate_q_10, _gate_q_2;
  ry(2.827300034704173) _gate_q_3;
  u2(0.42895267130711406, 1.087031887140566) _gate_q_1;
  r_5106994208(2.8668852159888627, 3.972956712157904) _gate_q_12;
  sxdg _gate_q_11;
  cu3_5107002656(3.1776720170927675, 4.2795192792345755, 5.494005567287824) _gate_q_6, _gate_q_0;
  z _gate_q_7;
  sdg _gate_q_5;
  crx(3.451284468058078) _gate_q_8, _gate_q_9;
  r_5107004000(6.173403485269008, 3.975050677422177) _gate_q_4;
  rx(0.0824962803499505) _gate_q_7;
  iswap _gate_q_4, _gate_q_11;
  rzx_5106998144(0.3807559138414895) _gate_q_6, _gate_q_12;
  rx(3.8097514267577943) _gate_q_0;
  csx _gate_q_10, _gate_q_8;
  crz(6.255119004812958) _gate_q_2, _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  x _gate_q_9;
  cu(3.9846786970620407, 6.02114305805753, 5.756174717417944, 0.5659741133607527) _gate_q_9, _gate_q_5;
  sx _gate_q_10;
  U(1.6145675031622153, 5.416301496039259, 1.5803296684244843) _gate_q_3;
  u2(3.941046323798115, 1.0978907893939556) _gate_q_2;
  cu1_5106385648(3.986321768516265) _gate_q_4, _gate_q_12;
  u2(6.099485925271737, 0.32720417693365994) _gate_q_6;
  x _gate_q_0;
  sx _gate_q_1;
  h _gate_q_11;
  tdg _gate_q_8;
  rx(1.5877015572813347) _gate_q_7;
  u3(5.7491630586457045, 4.584084072509805, 3.7412745305709674) _gate_q_7;
  cx _gate_q_8, _gate_q_6;
  xx_plus_yy_5106389344(0.41609781983948185, 5.880328010619277) _gate_q_1, _gate_q_4;
  crz(2.439358238942956) _gate_q_5, _gate_q_9;
  z _gate_q_12;
  cu3_5106392512(1.833617697470706, 2.3590750779582526, 2.7446197523862974) _gate_q_0, _gate_q_3;
  rzx_5106397504(5.072788550530519) _gate_q_2, _gate_q_11;
  y _gate_q_10;
  cu(2.623297119641392, 4.8208670943753855, 0.06529419901122832, 1.438844077223712) _gate_q_6, _gate_q_2;
  r_5106389536(2.946048770628235, 4.031816382459065) _gate_q_11;
  t _gate_q_0;
  csdg _gate_q_8, _gate_q_4;
  U(1.583325826982517, 5.820213069004974, 1.8583946736189334) _gate_q_10;
  cp(3.0441652888325734) _gate_q_9, _gate_q_7;
  cry(1.4627708079631596) _gate_q_1, _gate_q_5;
  sdg _gate_q_12;
  u2(4.831711692959262, 2.518288888012592) _gate_q_3;
  x _gate_q_10;
  xx_minus_yy_5106397360(4.336789483374805, 6.071974033629581) _gate_q_5, _gate_q_9;
  t _gate_q_4;
  xx_minus_yy_5106395392(5.3855416629606605, 6.019596316278823) _gate_q_3, _gate_q_6;
  U(0.49098789986903524, 5.628325196054485, 0.5263275526086635) _gate_q_7;
  sx _gate_q_0;
  z _gate_q_11;
  u3(4.4796342531668945, 4.721101496125229, 4.485395016328758) _gate_q_12;
  crz(3.8347369346168967) _gate_q_8, _gate_q_1;
  u1(0.44003323539119865) _gate_q_2;
  cy _gate_q_9, _gate_q_3;
  cry(2.6076535647367183) _gate_q_2, _gate_q_8;
  u3(1.0976456411669158, 3.369417751416862, 4.8754968625975295) _gate_q_5;
  z _gate_q_11;
  crz(4.39027541362913) _gate_q_7, _gate_q_12;
  t _gate_q_6;
  cu(0.7971720581626589, 0.521339634984949, 5.836161113137619, 1.8600898592065398) _gate_q_1, _gate_q_4;
  u1(1.2945414088677258) _gate_q_10;
  sxdg _gate_q_0;
  iswap _gate_q_8, _gate_q_10;
  ecr _gate_q_11, _gate_q_9;
  crx(5.370463012788353) _gate_q_5, _gate_q_1;
  tdg _gate_q_6;
  x _gate_q_12;
  rzx_5106387136(1.787664566274913) _gate_q_2, _gate_q_3;
  y _gate_q_4;
  id _gate_q_7;
  u2(0.876909297992244, 4.447226954571324) _gate_q_0;
  id _gate_q_7;
  cp(0.6249575439236829) _gate_q_3, _gate_q_9;
  cx _gate_q_8, _gate_q_6;
  crx(2.028243232235116) _gate_q_4, _gate_q_11;
  crz(1.968919591269959) _gate_q_12, _gate_q_1;
  y _gate_q_0;
  cu3_5106400384(6.182252779312375, 2.5161888012974356, 3.2824425899373937) _gate_q_10, _gate_q_5;
  r_5106393424(4.6169005895679405, 0.45548612151285445) _gate_q_2;
}