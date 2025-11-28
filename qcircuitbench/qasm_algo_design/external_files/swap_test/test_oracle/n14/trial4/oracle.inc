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
gate ryy_5107718704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.865732877654554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107722688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.074883511232308) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107722736(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1540215351722094, 0.515706166086344, -0.515706166086344) _gate_q_0;
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
gate cu1_5107720576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.370000341686509) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.370000341686509) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.370000341686509) _gate_q_1;
}
gate rxx_5107723744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9576163519077743) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5107727152(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.59623061624072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107727824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.638966748299292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107723216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.753362872585681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107726672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.216935666843664) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107723120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.151065473331476, 4.110580040313602, -4.110580040313602) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107721824(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5930680845777894) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1389711258225209) _gate_q_0;
  ry(-0.1389711258225209) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5930680845777894) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5107722976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6769873839639957) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.22015637764649576) _gate_q_1;
  ry(-0.22015637764649576) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6769873839639957) _gate_q_0;
}
gate xx_plus_yy_5107718080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.500501950328746) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.097662475402497) _gate_q_1;
  ry(-1.097662475402497) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.500501950328746) _gate_q_0;
}
gate rxx_5107727632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.937003073516643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107727584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.216123338418798) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1623783868357642) _gate_q_0;
  ry(-1.1623783868357642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.216123338418798) _gate_q_1;
}
gate rzz_5107727968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.383126626272247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107717792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3631726867918585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107723408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5070499310305323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107718992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.569249788252118) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0844527202577425) _gate_q_0;
  ry(-3.0844527202577425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.569249788252118) _gate_q_1;
}
gate ryy_5107712128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.995324444456303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107726480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7181867502940499, 1.1420888443804391, -1.1420888443804391) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  h _gate_q_3;
  t _gate_q_6;
  swap _gate_q_11, _gate_q_2;
  x _gate_q_13;
  u2(5.15815526346455, 3.8610682853465836) _gate_q_7;
  csx _gate_q_4, _gate_q_1;
  u3(4.853559006469251, 0.252267093634981, 5.445314809578883) _gate_q_9;
  ryy_5107718704(0.865732877654554) _gate_q_12, _gate_q_0;
  cz _gate_q_5, _gate_q_8;
  u1(2.4852872396380663) _gate_q_10;
  swap _gate_q_13, _gate_q_4;
  rzx_5107722688(6.074883511232308) _gate_q_0, _gate_q_9;
  sdg _gate_q_12;
  id _gate_q_2;
  id _gate_q_11;
  r_5107722736(2.1540215351722094, 2.0865024928812406) _gate_q_3;
  rz(4.553373255951133) _gate_q_5;
  rx(5.287916472039219) _gate_q_10;
  ecr _gate_q_6, _gate_q_7;
  cu1_5107720576(2.740000683373018) _gate_q_1, _gate_q_8;
  rxx_5107723744(1.9576163519077743) _gate_q_9, _gate_q_11;
  iswap _gate_q_1, _gate_q_10;
  cp(5.250068387862296) _gate_q_5, _gate_q_8;
  rx(2.4228881936638174) _gate_q_13;
  ch _gate_q_12, _gate_q_7;
  cp(0.5285990019056147) _gate_q_0, _gate_q_4;
  rz(2.4169152172903945) _gate_q_2;
  swap _gate_q_6, _gate_q_3;
  cry(3.9208255236908913) _gate_q_2, _gate_q_9;
  cs _gate_q_5, _gate_q_0;
  cry(4.339896763281336) _gate_q_6, _gate_q_3;
  csdg _gate_q_1, _gate_q_7;
  rxx_5107727152(3.59623061624072) _gate_q_13, _gate_q_10;
  cx _gate_q_4, _gate_q_8;
  sx _gate_q_12;
  z _gate_q_11;
  rzz_5107727824(4.638966748299292) _gate_q_0, _gate_q_1;
  p(5.1966345160567045) _gate_q_3;
  tdg _gate_q_8;
  iswap _gate_q_10, _gate_q_12;
  id _gate_q_11;
  csx _gate_q_13, _gate_q_7;
  rzx_5107723216(3.753362872585681) _gate_q_5, _gate_q_9;
  z _gate_q_2;
  cy _gate_q_6, _gate_q_4;
  cu(0.7095427600631162, 0.5300498748373411, 3.515913847656603, 4.179851855650054) _gate_q_6, _gate_q_13;
  sx _gate_q_1;
  U(5.311769008049612, 5.348679011325158, 3.091905955864408) _gate_q_4;
  rzx_5107726672(3.216935666843664) _gate_q_11, _gate_q_5;
  r_5107723120(5.151065473331476, 5.6813763671084985) _gate_q_7;
  xx_minus_yy_5107721824(0.2779422516450418, 1.5930680845777894) _gate_q_3, _gate_q_9;
  tdg _gate_q_12;
  dcx _gate_q_2, _gate_q_10;
  s _gate_q_0;
  sdg _gate_q_8;
  xx_plus_yy_5107722976(0.4403127552929915, 2.6769873839639957) _gate_q_4, _gate_q_12;
  u3(4.6139107067767275, 3.5684544614986033, 0.1890571958487016) _gate_q_6;
  h _gate_q_0;
  swap _gate_q_13, _gate_q_1;
  cry(1.0604617734657042) _gate_q_5, _gate_q_9;
  xx_plus_yy_5107718080(2.195324950804994, 4.500501950328746) _gate_q_2, _gate_q_7;
  rxx_5107727632(5.937003073516643) _gate_q_11, _gate_q_8;
  s _gate_q_10;
  z _gate_q_3;
  xx_minus_yy_5107727584(2.3247567736715284, 2.216123338418798) _gate_q_11, _gate_q_4;
  ch _gate_q_1, _gate_q_7;
  sx _gate_q_6;
  cp(5.4571465804164525) _gate_q_8, _gate_q_5;
  ecr _gate_q_2, _gate_q_13;
  cy _gate_q_12, _gate_q_10;
  x _gate_q_9;
  rzz_5107727968(3.383126626272247) _gate_q_3, _gate_q_0;
  x _gate_q_9;
  z _gate_q_6;
  rxx_5107717792(2.3631726867918585) _gate_q_8, _gate_q_0;
  cy _gate_q_5, _gate_q_12;
  y _gate_q_2;
  cz _gate_q_3, _gate_q_4;
  ch _gate_q_11, _gate_q_1;
  p(1.694526160877018) _gate_q_10;
  dcx _gate_q_13, _gate_q_7;
  sx _gate_q_11;
  y _gate_q_10;
  cp(4.4316260989083) _gate_q_0, _gate_q_9;
  rzx_5107723408(0.5070499310305323) _gate_q_7, _gate_q_2;
  xx_minus_yy_5107718992(6.168905440515485, 2.569249788252118) _gate_q_4, _gate_q_8;
  t _gate_q_6;
  id _gate_q_1;
  ryy_5107712128(3.995324444456303) _gate_q_5, _gate_q_3;
  r_5107726480(0.7181867502940499, 2.7128851711753357) _gate_q_12;
  id _gate_q_13;
}
gate cu3_5107719808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1065636496869997) _gate_q_0;
  u1(-2.8044857520738224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1053717619783714, 0, -3.1065636496869997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1053717619783714, 5.911049401760822, 0) _gate_q_1;
}
gate r_5107715968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.70185004841806, -1.2566144238968495, 1.2566144238968495) _gate_q_0;
}
gate rxx_5107714288(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8934345240363644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107712608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6306966452644333) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107715872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7018319430361006) _gate_q_0;
  u1(-0.11714676385388545) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9884804214999052, 0, -3.7018319430361006) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9884804214999052, 3.818978706889986, 0) _gate_q_1;
}
gate r_5107713568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7136209972221943, 2.9291951255492785, -2.9291951255492785) _gate_q_0;
}
gate ryy_5107715824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5711662881253083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107716976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6290631658015347) _gate_q_0;
  u1(0.3032115987826587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11192171286919038, 0, -3.6290631658015347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11192171286919038, 3.325851567018876, 0) _gate_q_1;
}
gate r_5107715296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4830883108202433, 1.029476172183375, -1.029476172183375) _gate_q_0;
}
gate rzz_5107714864(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.031071108220161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107726096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.933774228958997) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107714000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2633034030601236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107718032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.94837083657481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107724512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5391574780751873) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8542231576095712) _gate_q_1;
  ry(-0.8542231576095712) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5391574780751873) _gate_q_0;
}
gate r_5107724704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3952437805066993, -0.9358391836209978, 0.9358391836209978) _gate_q_0;
}
gate rzx_5107725808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1028541994489216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107724128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.934118318928183) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.16827551605159452) _gate_q_1;
  ry(-0.16827551605159452) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.934118318928183) _gate_q_0;
}
gate rzz_5107724944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.865862105603415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107718944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.327974594038734) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.245839719804598) _gate_q_0;
  ry(-2.245839719804598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.327974594038734) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  id _gate_q_11;
  crx(0.29607114345572094) _gate_q_3, _gate_q_10;
  cu3_5107719808(4.210743523956743, 5.911049401760822, 0.30207789761317755) _gate_q_12, _gate_q_1;
  r_5107715968(2.70185004841806, 0.314181902898047) _gate_q_9;
  ch _gate_q_13, _gate_q_0;
  ecr _gate_q_5, _gate_q_4;
  rxx_5107714288(1.8934345240363644) _gate_q_6, _gate_q_2;
  csx _gate_q_7, _gate_q_8;
  z _gate_q_11;
  ryy_5107712608(0.6306966452644333) _gate_q_8, _gate_q_12;
  ecr _gate_q_3, _gate_q_1;
  cx _gate_q_7, _gate_q_4;
  dcx _gate_q_9, _gate_q_5;
  cu3_5107715872(5.9769608429998105, 3.818978706889986, 3.584685179182215) _gate_q_0, _gate_q_6;
  y _gate_q_2;
  r_5107713568(3.7136209972221943, 4.499991452344175) _gate_q_13;
  id _gate_q_10;
  cs _gate_q_7, _gate_q_13;
  ryy_5107715824(3.5711662881253083) _gate_q_5, _gate_q_4;
  tdg _gate_q_8;
  id _gate_q_2;
  x _gate_q_3;
  cz _gate_q_0, _gate_q_6;
  U(0.42192087922277405, 0.9022064729674963, 5.338401880617079) _gate_q_9;
  U(0.15413041817662068, 4.858489756674111, 4.883948344097571) _gate_q_11;
  tdg _gate_q_12;
  sx _gate_q_10;
  p(2.1850321337752208) _gate_q_1;
  ch _gate_q_11, _gate_q_10;
  iswap _gate_q_12, _gate_q_8;
  cu3_5107716976(0.22384342573838076, 3.325851567018876, 3.9322747645841933) _gate_q_7, _gate_q_13;
  z _gate_q_4;
  h _gate_q_6;
  swap _gate_q_9, _gate_q_5;
  r_5107715296(0.4830883108202433, 2.6002724989782715) _gate_q_0;
  tdg _gate_q_3;
  rz(2.937309490828662) _gate_q_2;
  x _gate_q_1;
  rzz_5107714864(6.031071108220161) _gate_q_7, _gate_q_5;
  csdg _gate_q_2, _gate_q_13;
  cs _gate_q_8, _gate_q_1;
  t _gate_q_6;
  cry(3.4978070865779367) _gate_q_0, _gate_q_3;
  cp(2.193463467492248) _gate_q_9, _gate_q_12;
  cp(4.755361867884694) _gate_q_11, _gate_q_4;
  t _gate_q_10;
  t _gate_q_11;
  rx(3.19038562910322) _gate_q_13;
  y _gate_q_10;
  rzx_5107726096(3.933774228958997) _gate_q_8, _gate_q_3;
  s _gate_q_12;
  p(2.1106379892189135) _gate_q_6;
  t _gate_q_0;
  p(3.2535065415521185) _gate_q_5;
  p(6.010409294906922) _gate_q_9;
  u1(5.484714860131753) _gate_q_2;
  y _gate_q_1;
  dcx _gate_q_7, _gate_q_4;
  crz(4.30680148991582) _gate_q_1, _gate_q_13;
  swap _gate_q_6, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  ryy_5107714000(1.2633034030601236) _gate_q_8, _gate_q_4;
  t _gate_q_9;
  dcx _gate_q_7, _gate_q_12;
  cu(1.198894605936566, 0.26143177180089044, 3.1761901628832643, 1.5419081451861643) _gate_q_11, _gate_q_0;
  u1(0.07463486811625819) _gate_q_10;
  id _gate_q_7;
  rxx_5107718032(3.94837083657481) _gate_q_4, _gate_q_10;
  crx(4.351639123168522) _gate_q_1, _gate_q_13;
  u1(0.75665811580195) _gate_q_0;
  U(1.6096793245201382, 4.288381445697029, 2.2836371291278734) _gate_q_2;
  cs _gate_q_11, _gate_q_6;
  cry(0.9609967461146371) _gate_q_8, _gate_q_5;
  crx(0.5526900785524093) _gate_q_9, _gate_q_3;
  u2(1.970854475731637, 5.213918090257031) _gate_q_12;
  t _gate_q_13;
  cx _gate_q_10, _gate_q_1;
  z _gate_q_8;
  x _gate_q_9;
  U(0.11056319385577108, 2.2801813419898855, 2.455051726423676) _gate_q_3;
  xx_plus_yy_5107724512(1.7084463152191425, 0.5391574780751873) _gate_q_5, _gate_q_0;
  r_5107724704(1.3952437805066993, 0.6349571431738987) _gate_q_11;
  rzx_5107725808(2.1028541994489216) _gate_q_6, _gate_q_7;
  cu(4.731602927104634, 5.564051538686674, 4.416571391445038, 2.477930842431468) _gate_q_4, _gate_q_12;
  sdg _gate_q_2;
  U(3.044826919730701, 6.263014097657751, 2.6291940824260833) _gate_q_5;
  xx_plus_yy_5107724128(0.33655103210318904, 2.934118318928183) _gate_q_10, _gate_q_13;
  rz(0.816986748412045) _gate_q_6;
  rzz_5107724944(3.865862105603415) _gate_q_11, _gate_q_2;
  xx_minus_yy_5107718944(4.491679439609196, 4.327974594038734) _gate_q_8, _gate_q_7;
  crx(5.86093401635938) _gate_q_9, _gate_q_4;
  p(4.523338606541381) _gate_q_0;
  crz(0.4583557509972011) _gate_q_12, _gate_q_1;
  tdg _gate_q_3;
}