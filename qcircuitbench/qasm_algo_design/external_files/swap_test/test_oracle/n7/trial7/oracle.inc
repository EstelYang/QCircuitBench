gate rzx_5106016784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.82314132764906) _gate_q_1;
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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5106018176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.095848123905859) _gate_q_0;
  u1(-0.8795181797353544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.01117437604772584, 0, -4.095848123905859) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.01117437604772584, 4.975366303641214, 0) _gate_q_1;
}
gate r_5106016640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.178735370196206, 3.3483872235061245, -3.3483872235061245) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106016064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9507700488539936) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5315153691742984) _gate_q_0;
  ry(-2.5315153691742984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9507700488539936) _gate_q_1;
}
gate cu3_5106015920(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.924644856928543) _gate_q_0;
  u1(0.32236171106805145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.477146916075882, 0, -3.924644856928543) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.477146916075882, 3.6022831458604916, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  t _gate_q_4;
  rzx_5106016784(5.82314132764906) _gate_q_6, _gate_q_1;
  U(2.574800538544856, 4.47225490004469, 5.922153058187502) _gate_q_5;
  crz(5.438381957540081) _gate_q_2, _gate_q_3;
  U(1.7673902010909406, 4.824086092569741, 5.892622923604019) _gate_q_0;
  ry(3.460658505519538) _gate_q_2;
  p(4.668742890481087) _gate_q_0;
  p(4.182511367591888) _gate_q_6;
  cs _gate_q_4, _gate_q_1;
  dcx _gate_q_3, _gate_q_5;
  U(0.6194581400737773, 0.7909425264640562, 5.315460247140791) _gate_q_2;
  z _gate_q_4;
  swap _gate_q_1, _gate_q_3;
  iswap _gate_q_6, _gate_q_5;
  rx(2.313402405056096) _gate_q_0;
  z _gate_q_0;
  ch _gate_q_1, _gate_q_5;
  crz(0.48718228418023685) _gate_q_3, _gate_q_6;
  rx(0.0024197581582412553) _gate_q_2;
  s _gate_q_4;
  cu3_5106018176(0.02234875209545168, 4.975366303641214, 3.216329944170505) _gate_q_4, _gate_q_0;
  rz(1.6453276767608733) _gate_q_1;
  dcx _gate_q_6, _gate_q_5;
  rx(5.571688768437172) _gate_q_3;
  rz(3.1586807190343613) _gate_q_2;
  r_5106016640(4.178735370196206, 4.919183550301021) _gate_q_0;
  tdg _gate_q_3;
  s _gate_q_6;
  tdg _gate_q_5;
  sdg _gate_q_4;
  xx_minus_yy_5106016064(5.063030738348597, 2.9507700488539936) _gate_q_2, _gate_q_1;
  cx _gate_q_3, _gate_q_0;
  cu3_5106015920(0.954293832151764, 3.6022831458604916, 4.2470065679965945) _gate_q_6, _gate_q_4;
  cz _gate_q_5, _gate_q_2;
  sdg _gate_q_1;
}
gate ryy_5106013472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7485953074210676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5106013232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.4960665853811514) _gate_q_0;
  u1(0.8962549502292605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8464833305255758, 0, -1.4960665853811514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8464833305255758, 0.5998116351518908, 0) _gate_q_1;
}
gate rzz_5106013376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.513954930618454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106013280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9035846680051501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106012992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8092014996818211) _gate_q_0;
  u1(0.2676904725305537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.30583442083371964, 0, -0.8092014996818211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.30583442083371964, 0.5415110271512674, 0) _gate_q_1;
}
gate cu1_5106012608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.904269319683212) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.904269319683212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.904269319683212) _gate_q_1;
}
gate rxx_5106012752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.237900447356853) _gate_q_1;
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
gate rzx_5106010832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3891623108737931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5106010880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8584033133534866) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8584033133534866) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8584033133534866) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cs _gate_q_6, _gate_q_4;
  sx _gate_q_0;
  ryy_5106013472(1.7485953074210676) _gate_q_3, _gate_q_2;
  crz(0.511701598024035) _gate_q_1, _gate_q_5;
  rx(5.94208277376872) _gate_q_2;
  cu3_5106013232(1.6929666610511516, 0.5998116351518908, 2.392321535610412) _gate_q_6, _gate_q_0;
  ch _gate_q_3, _gate_q_4;
  cx _gate_q_1, _gate_q_5;
  rzz_5106013376(5.513954930618454) _gate_q_1, _gate_q_0;
  crx(2.2280967495017) _gate_q_6, _gate_q_2;
  rxx_5106013280(0.9035846680051501) _gate_q_3, _gate_q_5;
  rz(3.015143605719431) _gate_q_4;
  crx(4.766433860567014) _gate_q_3, _gate_q_4;
  cu3_5106012992(0.6116688416674393, 0.5415110271512674, 1.0768919722123749) _gate_q_1, _gate_q_6;
  crx(5.094875661104643) _gate_q_0, _gate_q_5;
  rx(2.8384502613841467) _gate_q_2;
  cu1_5106012608(5.808538639366424) _gate_q_3, _gate_q_4;
  s _gate_q_6;
  rxx_5106012752(2.237900447356853) _gate_q_0, _gate_q_5;
  z _gate_q_1;
  rx(4.183462649584835) _gate_q_2;
  csx _gate_q_3, _gate_q_1;
  p(1.553923447897418) _gate_q_4;
  sdg _gate_q_5;
  rzx_5106010832(0.3891623108737931) _gate_q_2, _gate_q_6;
  U(6.043978883927579, 4.70574872260737, 0.2733565003221321) _gate_q_0;
  cz _gate_q_3, _gate_q_5;
  u2(1.3049292599008893, 1.0446107698713774) _gate_q_1;
  cu1_5106010880(1.7168066267069733) _gate_q_6, _gate_q_0;
  t _gate_q_4;
  u1(0.990482833104704) _gate_q_2;
}