gate rzx_5106576768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7605414427758639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106580608(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.21892226793704603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106567984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.663324570850392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5106577536(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.182028457847097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106580224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.829767072671811) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.176817932144126) _gate_q_0;
  ry(-2.176817932144126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.829767072671811) _gate_q_1;
}
gate r_5106579504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.44247438953755275, -0.5580084764530637, 0.5580084764530637) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5106569712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.250071753596135, 0.8196419106579178, -0.8196419106579178) _gate_q_0;
}
gate cu1_5106571728(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1120647712811103) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1120647712811103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1120647712811103) _gate_q_1;
}
gate rzz_5106577200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5909943993268875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106566832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1430020488086647) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8077208080711575) _gate_q_0;
  ry(-1.8077208080711575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1430020488086647) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5106574992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.845159041525964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106579648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0391223695485754, 4.251857812016631, -4.251857812016631) _gate_q_0;
}
gate ryy_5106578976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.921531172766532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5106567456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.204662083879332) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.204662083879332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.204662083879332) _gate_q_1;
}
gate cu1_5106578304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5724790472543704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5724790472543704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5724790472543704) _gate_q_1;
}
gate rzz_5106573264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.626386605174636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106575760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.5067040993756, -0.9048747437116064, 0.9048747437116064) _gate_q_0;
}
gate rxx_5106576096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.908882370456315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu3_5106580944(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.130211290891592) _gate_q_0;
  u1(-0.09108935719747357) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6725926630515245, 0, -4.130211290891592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6725926630515245, 4.221300648089065, 0) _gate_q_1;
}
gate cu1_5106572448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8843154311521445) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8843154311521445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8843154311521445) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  y _gate_q_1;
  rzx_5106576768(0.7605414427758639) _gate_q_3, _gate_q_4;
  u2(2.611558827929778, 6.074468198514834) _gate_q_11;
  z _gate_q_5;
  rzz_5106580608(0.21892226793704603) _gate_q_9, _gate_q_8;
  cy _gate_q_10, _gate_q_6;
  ryy_5106567984(1.663324570850392) _gate_q_12, _gate_q_0;
  sx _gate_q_2;
  rx(3.522385785346199) _gate_q_7;
  ecr _gate_q_3, _gate_q_5;
  u2(1.6905368779055776, 4.91190238624916) _gate_q_6;
  ryy_5106577536(5.182028457847097) _gate_q_1, _gate_q_0;
  cu(2.1630977699373934, 3.8026500191089467, 5.945488657853824, 5.755376587270406) _gate_q_12, _gate_q_9;
  z _gate_q_8;
  sx _gate_q_11;
  xx_minus_yy_5106580224(4.353635864288252, 4.829767072671811) _gate_q_4, _gate_q_2;
  r_5106579504(0.44247438953755275, 1.0127878503418328) _gate_q_10;
  id _gate_q_7;
  sxdg _gate_q_0;
  iswap _gate_q_5, _gate_q_9;
  r_5106569712(1.250071753596135, 2.3904382374528144) _gate_q_12;
  cu1_5106571728(4.2241295425622205) _gate_q_6, _gate_q_7;
  y _gate_q_10;
  tdg _gate_q_8;
  rzz_5106577200(0.5909943993268875) _gate_q_4, _gate_q_11;
  y _gate_q_2;
  xx_minus_yy_5106566832(3.615441616142315, 2.1430020488086647) _gate_q_3, _gate_q_1;
  sxdg _gate_q_9;
  ecr _gate_q_1, _gate_q_8;
  cs _gate_q_5, _gate_q_11;
  swap _gate_q_7, _gate_q_10;
  ch _gate_q_3, _gate_q_2;
  sx _gate_q_6;
  swap _gate_q_0, _gate_q_12;
  s _gate_q_4;
  swap _gate_q_7, _gate_q_3;
  sxdg _gate_q_11;
  sdg _gate_q_4;
  rzx_5106574992(2.845159041525964) _gate_q_12, _gate_q_5;
  sdg _gate_q_0;
  u3(4.134871081286179, 0.4220562474921131, 3.911797259081173) _gate_q_8;
  sdg _gate_q_2;
  cs _gate_q_10, _gate_q_6;
  cp(0.15963002934740111) _gate_q_1, _gate_q_9;
  ch _gate_q_8, _gate_q_7;
  sdg _gate_q_2;
  h _gate_q_5;
  r_5106579648(1.0391223695485754, 5.822654138811528) _gate_q_3;
  ryy_5106578976(4.921531172766532) _gate_q_4, _gate_q_0;
  cs _gate_q_6, _gate_q_11;
  crx(2.4985795161141713) _gate_q_12, _gate_q_9;
  cu1_5106567456(4.409324167758664) _gate_q_10, _gate_q_1;
  cx _gate_q_2, _gate_q_3;
  cy _gate_q_10, _gate_q_7;
  sxdg _gate_q_4;
  cs _gate_q_0, _gate_q_9;
  cry(4.984533173824761) _gate_q_11, _gate_q_6;
  cz _gate_q_5, _gate_q_1;
  u3(6.207608667933684, 3.3016836491953296, 5.571836356081933) _gate_q_8;
  sdg _gate_q_12;
  cu1_5106578304(3.1449580945087408) _gate_q_1, _gate_q_4;
  x _gate_q_7;
  rzz_5106573264(5.626386605174636) _gate_q_6, _gate_q_10;
  s _gate_q_8;
  sdg _gate_q_12;
  cp(3.9709827561466207) _gate_q_5, _gate_q_9;
  cz _gate_q_11, _gate_q_0;
  t _gate_q_3;
  r_5106575760(5.5067040993756, 0.6659215830832902) _gate_q_2;
  crx(4.413391994016305) _gate_q_9, _gate_q_6;
  cry(2.4979894653396153) _gate_q_2, _gate_q_11;
  rxx_5106576096(4.908882370456315) _gate_q_5, _gate_q_4;
  csx _gate_q_8, _gate_q_12;
  h _gate_q_1;
  cu3_5106580944(1.345185326103049, 4.221300648089065, 4.039121933694118) _gate_q_3, _gate_q_7;
  rx(0.5404853791131593) _gate_q_10;
  sxdg _gate_q_0;
  cu1_5106572448(1.768630862304289) _gate_q_4, _gate_q_2;
  u1(1.5922249618006288) _gate_q_0;
  tdg _gate_q_5;
  id _gate_q_11;
  U(1.4768741158143663, 1.313914858680245, 5.027543181252206) _gate_q_10;
  s _gate_q_1;
  iswap _gate_q_6, _gate_q_8;
  ch _gate_q_3, _gate_q_12;
  iswap _gate_q_9, _gate_q_7;
}
gate cu1_5108057968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6679901946168103) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6679901946168103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6679901946168103) _gate_q_1;
}
gate rxx_5108059216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3109653874681175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5108059360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1324982877500414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108058832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.21999283391692293, 0.15623428006599815, -0.15623428006599815) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5108064832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5738735696016115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108057536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3190898456341307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5108057776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.071529380214633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5108067280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1384928030033823) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.002967416266531) _gate_q_0;
  ry(-2.002967416266531) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1384928030033823) _gate_q_1;
}
gate cu3_5108063440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.390289183318297) _gate_q_0;
  u1(0.44699161054032444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6721699809803279, 0, -4.390289183318297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6721699809803279, 3.9432975727779724, 0) _gate_q_1;
}
gate cu1_5108059264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.6377576649737535) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.6377576649737535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.6377576649737535) _gate_q_1;
}
gate cu1_5108063344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.856224436809037) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.856224436809037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.856224436809037) _gate_q_1;
}
gate rzz_5108059024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7717223628518698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5108072224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.16376431788152726) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5162542505310914) _gate_q_1;
  ry(-2.5162542505310914) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.16376431788152726) _gate_q_0;
}
gate ryy_5108063056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4391166793825634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108063536(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8089073847082915, 2.6750397549662033, -2.6750397549662033) _gate_q_0;
}
gate cu3_5108063488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.690736134955724) _gate_q_0;
  u1(2.2265346909911425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6420635555376153, 0, -3.690736134955724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6420635555376153, 1.4642014439645816, 0) _gate_q_1;
}
gate r_5108072416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1525528237107725, -0.03282071096799011, 0.03282071096799011) _gate_q_0;
}
gate xx_plus_yy_5108059744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0902553013579332) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.044903259101608) _gate_q_1;
  ry(-1.044903259101608) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0902553013579332) _gate_q_0;
}
gate rzx_5108072320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.511351709918303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5108056720(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3071677276531264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5108067904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.272979594127727) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5108071792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9007997086950117, 2.6316338716950733, -2.6316338716950733) _gate_q_0;
}
gate cu3_5108071936(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.7234128613778296) _gate_q_0;
  u1(0.6164853463960264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11162749088027174, 0, -0.7234128613778296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11162749088027174, 0.1069275149818031, 0) _gate_q_1;
}
gate cu1_5108071648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2424027076223774) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2424027076223774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2424027076223774) _gate_q_1;
}
gate rzz_5108060272(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.074929224584135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5108057056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2100910320602996) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2662091695684065) _gate_q_1;
  ry(-0.2662091695684065) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2100910320602996) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cu1_5108057968(3.3359803892336206) _gate_q_11, _gate_q_7;
  rxx_5108059216(3.3109653874681175) _gate_q_2, _gate_q_4;
  p(1.0355422815233701) _gate_q_8;
  u3(0.47861615090136167, 2.7667259892531297, 5.645670846644207) _gate_q_3;
  rxx_5108059360(1.1324982877500414) _gate_q_1, _gate_q_5;
  sx _gate_q_9;
  r_5108058832(0.21999283391692293, 1.7270306068608947) _gate_q_6;
  id _gate_q_12;
  csdg _gate_q_0, _gate_q_10;
  p(2.274697012393285) _gate_q_2;
  crz(0.632510351177695) _gate_q_7, _gate_q_0;
  p(3.432362339887946) _gate_q_1;
  cs _gate_q_4, _gate_q_6;
  ry(3.6988588348110416) _gate_q_9;
  crx(2.624887622367358) _gate_q_10, _gate_q_8;
  ry(2.4655753962523956) _gate_q_11;
  rxx_5108064832(3.5738735696016115) _gate_q_3, _gate_q_12;
  U(5.307375724176662, 0.4961152885029176, 1.0812044328319537) _gate_q_5;
  cz _gate_q_0, _gate_q_6;
  U(4.462876640325961, 2.0710617481408997, 1.587153524014982) _gate_q_3;
  sx _gate_q_1;
  csdg _gate_q_11, _gate_q_12;
  rzx_5108057536(2.3190898456341307) _gate_q_8, _gate_q_4;
  h _gate_q_2;
  sxdg _gate_q_5;
  ryy_5108057776(2.071529380214633) _gate_q_7, _gate_q_10;
  sdg _gate_q_9;
  xx_minus_yy_5108067280(4.005934832533062, 2.1384928030033823) _gate_q_10, _gate_q_8;
  u1(6.094696296851436) _gate_q_3;
  x _gate_q_0;
  t _gate_q_12;
  rx(6.0052276895661345) _gate_q_5;
  cz _gate_q_2, _gate_q_6;
  sxdg _gate_q_11;
  sdg _gate_q_1;
  t _gate_q_4;
  rz(1.2661024017500682) _gate_q_7;
  id _gate_q_9;
  csx _gate_q_11, _gate_q_3;
  id _gate_q_6;
  sx _gate_q_5;
  u1(5.888504843118527) _gate_q_4;
  u1(0.9956747210703811) _gate_q_9;
  tdg _gate_q_10;
  sxdg _gate_q_12;
  cp(3.077898928506698) _gate_q_1, _gate_q_0;
  cu3_5108063440(1.3443399619606557, 3.9432975727779724, 4.837280793858621) _gate_q_7, _gate_q_2;
  t _gate_q_8;
  swap _gate_q_11, _gate_q_0;
  cu1_5108059264(5.275515329947507) _gate_q_10, _gate_q_4;
  rz(0.9591254324285954) _gate_q_7;
  cu1_5108063344(5.712448873618074) _gate_q_5, _gate_q_2;
  cx _gate_q_3, _gate_q_8;
  y _gate_q_1;
  rzz_5108059024(0.7717223628518698) _gate_q_9, _gate_q_12;
  x _gate_q_6;
  xx_plus_yy_5108072224(5.032508501062183, 0.16376431788152726) _gate_q_9, _gate_q_11;
  ryy_5108063056(2.4391166793825634) _gate_q_8, _gate_q_5;
  r_5108063536(3.8089073847082915, 4.2458360817611) _gate_q_10;
  cu3_5108063488(5.284127111075231, 1.4642014439645816, 5.917270825946867) _gate_q_0, _gate_q_12;
  r_5108072416(5.1525528237107725, 1.5379756158269065) _gate_q_4;
  U(0.14091903813096018, 0.5151240614662314, 3.6154256660289583) _gate_q_2;
  id _gate_q_3;
  xx_plus_yy_5108059744(2.089806518203216, 3.0902553013579332) _gate_q_1, _gate_q_6;
  sxdg _gate_q_7;
  ecr _gate_q_6, _gate_q_5;
  cry(4.573657276875226) _gate_q_10, _gate_q_2;
  iswap _gate_q_11, _gate_q_7;
  rx(2.936284849208177) _gate_q_8;
  rzx_5108072320(4.511351709918303) _gate_q_4, _gate_q_0;
  z _gate_q_9;
  rxx_5108056720(3.3071677276531264) _gate_q_12, _gate_q_3;
  h _gate_q_1;
  cs _gate_q_1, _gate_q_7;
  u3(0.5318109630525407, 3.7543706643402466, 2.809878502326209) _gate_q_0;
  t _gate_q_4;
  csdg _gate_q_12, _gate_q_3;
  id _gate_q_6;
  rzz_5108067904(6.272979594127727) _gate_q_2, _gate_q_5;
  sxdg _gate_q_9;
  x _gate_q_11;
  r_5108071792(2.9007997086950117, 4.20243019848997) _gate_q_10;
  sdg _gate_q_8;
  cu3_5108071936(0.22325498176054348, 0.1069275149818031, 1.339898207773856) _gate_q_9, _gate_q_7;
  p(0.0060850154203413494) _gate_q_11;
  sdg _gate_q_12;
  cu1_5108071648(2.4848054152447547) _gate_q_6, _gate_q_3;
  rzz_5108060272(5.074929224584135) _gate_q_8, _gate_q_2;
  u2(5.017958313047264, 4.246228512980299) _gate_q_0;
  rx(2.494744446030894) _gate_q_5;
  xx_plus_yy_5108057056(0.532418339136813, 3.2100910320602996) _gate_q_4, _gate_q_10;
  u1(0.30133587368863524) _gate_q_1;
}