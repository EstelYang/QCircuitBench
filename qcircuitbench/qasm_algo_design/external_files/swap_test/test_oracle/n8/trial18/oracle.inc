gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5072708640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0861557854209158) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0861557854209158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0861557854209158) _gate_q_1;
}
gate ryy_5072704656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.15709614407503) _gate_q_1;
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
gate rzz_5072710320(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.69024593954099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072710656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4053440388586733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072712720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.114325475780843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate ryy_5072705664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5755007195481132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5072711520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.67053606685486) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1604311099542635) _gate_q_0;
  ry(-1.1604311099542635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.67053606685486) _gate_q_1;
}
gate cu3_5072713872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.419888091422102) _gate_q_0;
  u1(1.6548057322453646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.656939669742527, 0, -4.419888091422102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.656939669742527, 2.7650823591767373, 0) _gate_q_1;
}
gate rzx_5072711904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.263542910355584) _gate_q_1;
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
gate ryy_5072710944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3071795916950983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072715312(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9805643887936806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  sxdg _gate_q_5;
  cu1_5072708640(2.1723115708418317) _gate_q_6, _gate_q_2;
  rz(1.574545866724756) _gate_q_1;
  ryy_5072704656(5.15709614407503) _gate_q_4, _gate_q_7;
  p(4.1685420537922) _gate_q_0;
  U(4.128913635079376, 4.396306853548982, 3.967663968791097) _gate_q_3;
  ry(0.9096535005996269) _gate_q_5;
  iswap _gate_q_1, _gate_q_0;
  rzz_5072710320(4.69024593954099) _gate_q_2, _gate_q_6;
  id _gate_q_4;
  rxx_5072710656(0.4053440388586733) _gate_q_3, _gate_q_7;
  u3(2.64259365377378, 2.183975358589775, 4.706460544957575) _gate_q_6;
  U(2.337145481142238, 0.25155503170759724, 2.1354928037991234) _gate_q_7;
  rzz_5072712720(5.114325475780843) _gate_q_3, _gate_q_0;
  ecr _gate_q_2, _gate_q_1;
  csdg _gate_q_4, _gate_q_5;
  crx(4.711047037456251) _gate_q_0, _gate_q_5;
  u1(5.575690361175327) _gate_q_2;
  ryy_5072705664(1.5755007195481132) _gate_q_3, _gate_q_1;
  rz(0.3918860779721878) _gate_q_6;
  ch _gate_q_4, _gate_q_7;
  x _gate_q_7;
  dcx _gate_q_5, _gate_q_6;
  rz(0.9732074295582022) _gate_q_3;
  cry(0.0006450286384650514) _gate_q_4, _gate_q_0;
  xx_minus_yy_5072711520(2.320862219908527, 4.67053606685486) _gate_q_1, _gate_q_2;
  cu3_5072713872(3.313879339485054, 2.7650823591767373, 6.074693823667467) _gate_q_1, _gate_q_7;
  rzx_5072711904(4.263542910355584) _gate_q_2, _gate_q_0;
  cs _gate_q_4, _gate_q_3;
  cu(6.183548032774185, 1.345867433901052, 3.709534265181487, 1.4050550005455296) _gate_q_6, _gate_q_5;
  swap _gate_q_4, _gate_q_5;
  cry(4.030187604631369) _gate_q_1, _gate_q_2;
  iswap _gate_q_7, _gate_q_6;
  ryy_5072710944(0.3071795916950983) _gate_q_3, _gate_q_0;
  swap _gate_q_6, _gate_q_0;
  p(5.050537382574523) _gate_q_1;
  cs _gate_q_5, _gate_q_2;
  sxdg _gate_q_3;
  ryy_5072715312(2.9805643887936806) _gate_q_4, _gate_q_7;
}
gate xx_plus_yy_5072701728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5125851250663328) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.523441577961106) _gate_q_1;
  ry(-0.523441577961106) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5125851250663328) _gate_q_0;
}
gate cu3_5072705472(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.255853621789944) _gate_q_0;
  u1(-2.062805879236148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.079157550898464, 0, -2.255853621789944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.079157550898464, 4.318659501026092, 0) _gate_q_1;
}
gate cu3_5072715072(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8484328402948473) _gate_q_0;
  u1(-2.4787103351684983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5315312485239598, 0, -2.8484328402948473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5315312485239598, 5.327143175463346, 0) _gate_q_1;
}
gate rxx_5072705808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.917664896249762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072712000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7431548963074546) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7431548963074546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7431548963074546) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  xx_plus_yy_5072701728(1.046883155922212, 0.5125851250663328) _gate_q_7, _gate_q_4;
  h _gate_q_2;
  ch _gate_q_1, _gate_q_6;
  ecr _gate_q_3, _gate_q_0;
  u2(4.497509397265549, 6.20618400362549) _gate_q_5;
  rz(2.2853174321951655) _gate_q_7;
  tdg _gate_q_1;
  dcx _gate_q_2, _gate_q_6;
  u2(5.018981529376143, 3.8757257896208825) _gate_q_3;
  cu3_5072705472(2.158315101796928, 4.318659501026092, 0.19304774255379645) _gate_q_0, _gate_q_4;
  u3(3.5262433120218226, 4.265778321710675, 5.5647234905956315) _gate_q_5;
  u2(3.5737472718186787, 4.960402555479546) _gate_q_0;
  cu3_5072715072(1.0630624970479197, 5.327143175463346, 0.36972250512634885) _gate_q_7, _gate_q_5;
  rxx_5072705808(3.917664896249762) _gate_q_6, _gate_q_1;
  csdg _gate_q_4, _gate_q_3;
  x _gate_q_2;
  csdg _gate_q_5, _gate_q_4;
  u1(6.271033384591444) _gate_q_7;
  rx(0.018950032747597784) _gate_q_6;
  u1(4.072761284696205) _gate_q_3;
  cp(5.365723526000724) _gate_q_2, _gate_q_1;
  tdg _gate_q_0;
  t _gate_q_2;
  U(3.629654754610557, 3.245054293393726, 1.9362628165703542) _gate_q_3;
  id _gate_q_6;
  ry(2.3382682445689964) _gate_q_4;
  cy _gate_q_0, _gate_q_1;
  iswap _gate_q_5, _gate_q_7;
  ch _gate_q_3, _gate_q_1;
  sx _gate_q_6;
  crz(3.6366360608479575) _gate_q_5, _gate_q_2;
  id _gate_q_7;
  cu1_5072712000(3.486309792614909) _gate_q_4, _gate_q_0;
  dcx _gate_q_6, _gate_q_5;
  cu(3.7356138454674586, 4.837055526780413, 2.9333524918542175, 3.755360095010873) _gate_q_7, _gate_q_2;
  z _gate_q_4;
  cy _gate_q_1, _gate_q_3;
  rx(6.058293123872453) _gate_q_0;
  cx _gate_q_6, _gate_q_2;
  s _gate_q_7;
  cu(0.16135573686387622, 6.241952601924484, 1.170425792424102, 2.6321162374273284) _gate_q_1, _gate_q_5;
  h _gate_q_4;
  ecr _gate_q_0, _gate_q_3;
}