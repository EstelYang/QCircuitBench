gate cu3_5105150160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.764430923438413) _gate_q_0;
  u1(0.1890023590673704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5815686018785335, 0, -4.764430923438413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5815686018785335, 4.575428564371043, 0) _gate_q_1;
}
gate r_5105151024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.217290276896085, 0.43920770220822325, -0.43920770220822325) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105149728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.475534119203366) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4418605930782455) _gate_q_1;
  ry(-0.4418605930782455) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.475534119203366) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5105153376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.769327886697464) _gate_q_0;
  u1(-0.5550762357629856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0878027543489672, 0, -1.769327886697464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0878027543489672, 2.3244041224604497, 0) _gate_q_1;
}
gate r_5105151696(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.457371282153508, 4.013665221096896, -4.013665221096896) _gate_q_0;
}
gate cu3_5105143152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2061385863445464) _gate_q_0;
  u1(-0.7102583662938097) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0953350442468404, 0, -1.2061385863445464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0953350442468404, 1.9163969526383562, 0) _gate_q_1;
}
gate r_5105147856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.855753227595198, -0.9883300018289436, 0.9883300018289436) _gate_q_0;
}
gate cu1_5105151936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.167789998535807) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.167789998535807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.167789998535807) _gate_q_1;
}
gate rzx_5105141664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9185301401853662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105144064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8439349359878454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105144400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.883919147906318, 4.218835169778781, -4.218835169778781) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5105152032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.453260452342808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105150304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.706489245704076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105154576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.282843110107854) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6495182779474087) _gate_q_1;
  ry(-2.6495182779474087) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.282843110107854) _gate_q_0;
}
gate rzz_5105147088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.763690953285682) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cu3_5105150160(5.163137203757067, 4.575428564371043, 4.953433282505784) _gate_q_9, _gate_q_3;
  cx _gate_q_4, _gate_q_7;
  ch _gate_q_0, _gate_q_1;
  cp(1.0354447494636048) _gate_q_8, _gate_q_10;
  cz _gate_q_2, _gate_q_5;
  r_5105151024(1.217290276896085, 2.01000402900312) _gate_q_6;
  xx_plus_yy_5105149728(0.883721186156491, 4.475534119203366) _gate_q_10, _gate_q_5;
  u1(3.4195440167361646) _gate_q_1;
  swap _gate_q_8, _gate_q_9;
  sdg _gate_q_7;
  iswap _gate_q_3, _gate_q_0;
  cu3_5105153376(2.1756055086979345, 2.3244041224604497, 1.2142516509344785) _gate_q_6, _gate_q_4;
  ry(1.185735607229077) _gate_q_2;
  iswap _gate_q_8, _gate_q_10;
  r_5105151696(2.457371282153508, 5.5844615478917925) _gate_q_6;
  x _gate_q_2;
  y _gate_q_0;
  cu3_5105143152(6.190670088493681, 1.9163969526383562, 0.49588022005073684) _gate_q_1, _gate_q_4;
  cry(1.904714352710448) _gate_q_3, _gate_q_9;
  r_5105147856(5.855753227595198, 0.582466324965953) _gate_q_7;
  p(4.3654479982426535) _gate_q_5;
  cx _gate_q_2, _gate_q_3;
  u3(0.31040423704755915, 2.081849729602576, 3.153312173204253) _gate_q_7;
  ry(4.722144330660937) _gate_q_9;
  rx(0.713145289250424) _gate_q_5;
  cz _gate_q_10, _gate_q_6;
  cry(5.713358845805457) _gate_q_1, _gate_q_4;
  crz(5.961277873172943) _gate_q_0, _gate_q_8;
  cu1_5105151936(2.335579997071614) _gate_q_3, _gate_q_2;
  iswap _gate_q_0, _gate_q_1;
  crz(0.9067453929417845) _gate_q_6, _gate_q_10;
  ry(3.2246534852947804) _gate_q_7;
  crx(3.5812116304145074) _gate_q_8, _gate_q_4;
  cz _gate_q_9, _gate_q_5;
  rzx_5105141664(0.9185301401853662) _gate_q_1, _gate_q_5;
  sx _gate_q_8;
  ry(3.7716729722508036) _gate_q_9;
  p(0.5426320728063478) _gate_q_0;
  swap _gate_q_4, _gate_q_10;
  u2(5.814465932220227, 4.968850675509445) _gate_q_7;
  ryy_5105144064(2.8439349359878454) _gate_q_3, _gate_q_2;
  u2(3.925639652406719, 1.9258901733404608) _gate_q_6;
  swap _gate_q_3, _gate_q_4;
  r_5105144400(4.883919147906318, 5.789631496573677) _gate_q_9;
  cy _gate_q_2, _gate_q_0;
  u1(3.2981785467695026) _gate_q_10;
  rz(3.481613806609655) _gate_q_6;
  u1(1.4852401349716318) _gate_q_5;
  cp(2.265059508641215) _gate_q_7, _gate_q_1;
  x _gate_q_8;
  h _gate_q_1;
  cry(1.7286770482188794) _gate_q_5, _gate_q_9;
  cs _gate_q_3, _gate_q_10;
  u1(3.415700734351577) _gate_q_8;
  ch _gate_q_6, _gate_q_0;
  id _gate_q_7;
  rxx_5105152032(5.453260452342808) _gate_q_2, _gate_q_4;
  rx(5.2888424808755135) _gate_q_6;
  rxx_5105150304(2.706489245704076) _gate_q_2, _gate_q_4;
  h _gate_q_9;
  cs _gate_q_10, _gate_q_0;
  y _gate_q_7;
  cs _gate_q_5, _gate_q_3;
  s _gate_q_1;
  sxdg _gate_q_8;
  iswap _gate_q_8, _gate_q_5;
  u2(1.2670377347669124, 2.7754803804880814) _gate_q_9;
  xx_plus_yy_5105154576(5.299036555894817, 4.282843110107854) _gate_q_2, _gate_q_7;
  rzz_5105147088(3.763690953285682) _gate_q_1, _gate_q_4;
  s _gate_q_10;
  cu(0.9804708486343369, 3.2840774993323274, 3.850471670233751, 0.8094658726350664) _gate_q_0, _gate_q_3;
  sx _gate_q_6;
}
gate rzz_5105142432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.716267075747792) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105151264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5025498595505968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105141520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5128881353916936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105142144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4636215311946352) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4636215311946352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4636215311946352) _gate_q_1;
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
gate cu1_5106112160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0697313362815946) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0697313362815946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0697313362815946) _gate_q_1;
}
gate rxx_5106118448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.780589659610083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106113888(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.05666667445389, 1.0278504186782818, -1.0278504186782818) _gate_q_0;
}
gate cu1_5106117248(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.038123054805628) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.038123054805628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.038123054805628) _gate_q_1;
}
gate rzz_5106115424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9263036544504115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5106113312(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.767168394627651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106108992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4800406086688023) _gate_q_0;
  u1(0.1719401980423163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.08693045493587308, 0, -2.4800406086688023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.08693045493587308, 2.3081004106264857, 0) _gate_q_1;
}
gate rzz_5106109664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.31568199851382495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  rzz_5105142432(1.716267075747792) _gate_q_2, _gate_q_4;
  rzz_5105151264(1.5025498595505968) _gate_q_3, _gate_q_5;
  u3(4.457021828352861, 3.968499747873335, 5.0142397080966505) _gate_q_8;
  tdg _gate_q_7;
  ryy_5105141520(2.5128881353916936) _gate_q_1, _gate_q_10;
  iswap _gate_q_9, _gate_q_6;
  u1(1.029046812186519) _gate_q_0;
  p(0.52805132707975) _gate_q_7;
  s _gate_q_0;
  cu1_5105142144(4.9272430623892705) _gate_q_1, _gate_q_6;
  cy _gate_q_2, _gate_q_8;
  y _gate_q_5;
  dcx _gate_q_10, _gate_q_4;
  cu(3.917327579165362, 5.597406613575139, 3.687704500287152, 2.318714309865555) _gate_q_3, _gate_q_9;
  cx _gate_q_9, _gate_q_3;
  crz(4.223021132665786) _gate_q_4, _gate_q_5;
  iswap _gate_q_8, _gate_q_10;
  id _gate_q_0;
  cp(3.4621705953375637) _gate_q_2, _gate_q_7;
  csdg _gate_q_1, _gate_q_6;
  crx(2.05283055113997) _gate_q_6, _gate_q_10;
  cs _gate_q_7, _gate_q_1;
  cry(0.96052769125353) _gate_q_8, _gate_q_9;
  sdg _gate_q_4;
  csx _gate_q_5, _gate_q_0;
  z _gate_q_2;
  U(1.6721430807370896, 4.2676639781629, 3.135854204937933) _gate_q_3;
  csx _gate_q_1, _gate_q_9;
  sdg _gate_q_0;
  csx _gate_q_2, _gate_q_7;
  cu1_5106112160(2.139462672563189) _gate_q_8, _gate_q_4;
  s _gate_q_3;
  u3(4.64535176037505, 3.7120557604699407, 1.0214473899954206) _gate_q_6;
  rxx_5106118448(1.780589659610083) _gate_q_5, _gate_q_10;
  cx _gate_q_1, _gate_q_2;
  crz(0.18055050676031426) _gate_q_7, _gate_q_8;
  r_5106113888(5.05666667445389, 2.5986467454731783) _gate_q_0;
  cu1_5106117248(6.076246109611256) _gate_q_3, _gate_q_4;
  id _gate_q_6;
  s _gate_q_5;
  u1(4.8834658710122065) _gate_q_9;
  tdg _gate_q_10;
  u1(2.1375079155680616) _gate_q_4;
  rzz_5106115424(0.9263036544504115) _gate_q_6, _gate_q_2;
  U(2.8965210579073717, 2.47219007341203, 4.525215682613214) _gate_q_5;
  ecr _gate_q_1, _gate_q_3;
  rx(0.2671493393396179) _gate_q_0;
  id _gate_q_7;
  cp(1.7477296110339853) _gate_q_9, _gate_q_8;
  s _gate_q_10;
  cp(3.5414833060515423) _gate_q_5, _gate_q_3;
  csdg _gate_q_0, _gate_q_4;
  ry(4.67703610505927) _gate_q_7;
  iswap _gate_q_10, _gate_q_8;
  U(0.1295882850109103, 2.576577020190692, 2.1800700116701135) _gate_q_6;
  tdg _gate_q_2;
  u3(6.049338756111192, 1.2999769851182923, 5.17198562776155) _gate_q_1;
  u1(0.5468369258767916) _gate_q_9;
  u1(2.2156488926606244) _gate_q_1;
  cu(2.861814906608592, 3.0224976542972875, 3.0564681097598387, 0.4241834800298743) _gate_q_4, _gate_q_9;
  U(4.4799840353879645, 0.15745090702027761, 5.218071671096317) _gate_q_5;
  U(2.715201763883934, 3.739391591867443, 6.192495507213102) _gate_q_8;
  rxx_5106113312(5.767168394627651) _gate_q_10, _gate_q_2;
  cu3_5106108992(0.17386090987174616, 2.3081004106264857, 2.6519808067111184) _gate_q_0, _gate_q_6;
  rx(1.5291256500591743) _gate_q_7;
  x _gate_q_3;
  csx _gate_q_9, _gate_q_6;
  rzz_5106109664(0.31568199851382495) _gate_q_7, _gate_q_5;
  y _gate_q_10;
  tdg _gate_q_3;
  u1(3.1123394400595665) _gate_q_2;
  p(1.0772160372968103) _gate_q_0;
  y _gate_q_8;
  u2(3.7961947832771674, 3.1598376158670036) _gate_q_1;
  s _gate_q_4;
}