gate r_5107059120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3917822325395015, 1.2433265191880905, -1.2433265191880905) _gate_q_0;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5107063008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.2213226982936603) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3449464568637171) _gate_q_0;
  ry(-0.3449464568637171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.2213226982936603) _gate_q_1;
}
gate rzz_5107060560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2457104593749018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5107059408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4088340798162335) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4088340798162335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4088340798162335) _gate_q_1;
}
gate rzx_5106110240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1092540313854886) _gate_q_1;
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
gate xx_minus_yy_5107062288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.006932755670171) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0571668093266502) _gate_q_0;
  ry(-1.0571668093266502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.006932755670171) _gate_q_1;
}
gate rzz_5107065600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.704085625311111) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107072128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.943003850442788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107056816(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.160484208561096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107070640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16385335187827002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107071984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.668185063308052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107066992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.114391255007337) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107065216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.824238650996161) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107064592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.582943182480586) _gate_q_1;
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
gate cu3_5107062000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.8788536247607202) _gate_q_0;
  u1(-0.2527897336885796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.30673378941207513, 0, -0.8788536247607202) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.30673378941207513, 1.1316433584492998, 0) _gate_q_1;
}
gate rzx_5107071216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3358156840695834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107062384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8753166878127125) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5107057728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9707163263976659) _gate_q_0;
  u1(-0.32825102360460573) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.16192332044481778, 0, -0.9707163263976659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.16192332044481778, 1.2989673500022716, 0) _gate_q_1;
}
gate ryy_5107068288(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6411690283861016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107069872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3239873070696935) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3239873070696935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3239873070696935) _gate_q_1;
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
gate xx_plus_yy_5107071696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4343669109518773) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1477584566343824) _gate_q_1;
  ry(-2.1477584566343824) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4343669109518773) _gate_q_0;
}
gate xx_minus_yy_5107060512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.823968709099931) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.29903144635084) _gate_q_0;
  ry(-1.29903144635084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.823968709099931) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5107061376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.275557985181283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107063248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.115550647243568) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6114201097337437) _gate_q_0;
  ry(-1.6114201097337437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.115550647243568) _gate_q_1;
}
gate rzz_5107063056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.831525277954405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107066032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.827927095344012, 4.06362239078371, -4.06362239078371) _gate_q_0;
}
gate xx_minus_yy_5107059888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.894841431264818) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5790178503051724) _gate_q_0;
  ry(-2.5790178503051724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.894841431264818) _gate_q_1;
}
gate rzz_5107071600(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.646417713804368) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107060224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9652512909768647, 3.037222965580548, -3.037222965580548) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  cx _gate_q_16, _gate_q_2;
  r_5107059120(1.3917822325395015, 2.814122845982987) _gate_q_10;
  sdg _gate_q_11;
  swap _gate_q_14, _gate_q_13;
  csx _gate_q_0, _gate_q_19;
  U(0.29540288686511046, 3.2579027749569223, 0.8987526390491226) _gate_q_12;
  cy _gate_q_6, _gate_q_8;
  cp(0.382474174609428) _gate_q_15, _gate_q_4;
  xx_minus_yy_5107063008(0.6898929137274342, 0.2213226982936603) _gate_q_9, _gate_q_3;
  ry(2.1412687145386164) _gate_q_17;
  rx(3.0955996854332692) _gate_q_18;
  rzz_5107060560(1.2457104593749018) _gate_q_1, _gate_q_5;
  sdg _gate_q_7;
  x _gate_q_16;
  cx _gate_q_17, _gate_q_14;
  id _gate_q_4;
  sxdg _gate_q_11;
  cu(4.910291453074424, 0.44428048583884505, 1.7191358583945464, 2.112958731526503) _gate_q_10, _gate_q_19;
  cx _gate_q_3, _gate_q_13;
  id _gate_q_12;
  p(3.5191005122455516) _gate_q_18;
  h _gate_q_1;
  cu1_5107059408(2.817668159632467) _gate_q_15, _gate_q_7;
  crz(1.453893861984466) _gate_q_0, _gate_q_6;
  ch _gate_q_8, _gate_q_2;
  sdg _gate_q_9;
  U(3.468160018139756, 3.2469974271792807, 0.9888113489827445) _gate_q_5;
  rzx_5106110240(1.1092540313854886) _gate_q_3, _gate_q_14;
  id _gate_q_18;
  cs _gate_q_9, _gate_q_11;
  x _gate_q_16;
  dcx _gate_q_7, _gate_q_15;
  xx_minus_yy_5107062288(2.1143336186533004, 6.006932755670171) _gate_q_13, _gate_q_6;
  id _gate_q_0;
  z _gate_q_17;
  s _gate_q_12;
  rzz_5107065600(3.704085625311111) _gate_q_2, _gate_q_19;
  u2(2.7847842379030214, 3.5014473929140846) _gate_q_5;
  u2(4.5725469069086975, 3.48406606977132) _gate_q_10;
  y _gate_q_1;
  cz _gate_q_4, _gate_q_8;
  cz _gate_q_0, _gate_q_3;
  ryy_5107072128(4.943003850442788) _gate_q_14, _gate_q_19;
  cry(2.1154315769468983) _gate_q_16, _gate_q_4;
  rzz_5107056816(1.160484208561096) _gate_q_11, _gate_q_12;
  ryy_5107070640(0.16385335187827002) _gate_q_13, _gate_q_15;
  cs _gate_q_10, _gate_q_17;
  y _gate_q_8;
  t _gate_q_7;
  swap _gate_q_18, _gate_q_5;
  ry(3.1224210550401) _gate_q_2;
  u1(3.711678283418133) _gate_q_1;
  cry(4.460796804769582) _gate_q_9, _gate_q_6;
  crx(5.964988816081591) _gate_q_7, _gate_q_16;
  crz(4.8423321341745265) _gate_q_14, _gate_q_10;
  csx _gate_q_9, _gate_q_3;
  rxx_5107071984(4.668185063308052) _gate_q_12, _gate_q_17;
  cy _gate_q_11, _gate_q_18;
  swap _gate_q_19, _gate_q_13;
  cx _gate_q_1, _gate_q_15;
  dcx _gate_q_2, _gate_q_5;
  rzz_5107066992(4.114391255007337) _gate_q_4, _gate_q_0;
  rzx_5107065216(5.824238650996161) _gate_q_6, _gate_q_8;
  rxx_5107064592(5.582943182480586) _gate_q_7, _gate_q_11;
  cry(4.987011856662832) _gate_q_4, _gate_q_3;
  iswap _gate_q_12, _gate_q_2;
  rz(2.237180067634511) _gate_q_15;
  cu3_5107062000(0.6134675788241503, 1.1316433584492998, 0.6260638910721406) _gate_q_17, _gate_q_16;
  u1(2.589156428810114) _gate_q_0;
  u2(3.9808891438382767, 1.8515014464258395) _gate_q_1;
  csx _gate_q_19, _gate_q_10;
  tdg _gate_q_13;
  rzx_5107071216(3.3358156840695834) _gate_q_5, _gate_q_14;
  cp(1.8538109510055867) _gate_q_8, _gate_q_18;
  sx _gate_q_6;
  rz(1.7963351320411183) _gate_q_9;
  x _gate_q_1;
  rzx_5107062384(0.8753166878127125) _gate_q_7, _gate_q_0;
  cp(6.035515743620876) _gate_q_17, _gate_q_2;
  dcx _gate_q_12, _gate_q_19;
  sx _gate_q_5;
  x _gate_q_9;
  u3(0.7035930842480816, 1.600935979361808, 0.6026762137115897) _gate_q_18;
  cu3_5107057728(0.32384664088963555, 1.2989673500022716, 0.6424653027930601) _gate_q_3, _gate_q_16;
  cs _gate_q_15, _gate_q_10;
  z _gate_q_13;
  ryy_5107068288(2.6411690283861016) _gate_q_4, _gate_q_8;
  cu1_5107069872(4.647974614139387) _gate_q_14, _gate_q_6;
  sxdg _gate_q_11;
  ecr _gate_q_1, _gate_q_12;
  cry(3.2557693003368167) _gate_q_8, _gate_q_14;
  t _gate_q_3;
  sdg _gate_q_9;
  u2(1.970335083093447, 4.625656886418963) _gate_q_11;
  ch _gate_q_17, _gate_q_19;
  xx_plus_yy_5107071696(4.295516913268765, 0.4343669109518773) _gate_q_16, _gate_q_5;
  p(4.8856964986241875) _gate_q_7;
  xx_minus_yy_5107060512(2.59806289270168, 4.823968709099931) _gate_q_15, _gate_q_13;
  csdg _gate_q_4, _gate_q_0;
  dcx _gate_q_10, _gate_q_2;
  sx _gate_q_6;
  u3(1.4744616346151875, 2.082354598334009, 4.597563346167365) _gate_q_18;
  ch _gate_q_6, _gate_q_18;
  dcx _gate_q_8, _gate_q_9;
  iswap _gate_q_7, _gate_q_0;
  h _gate_q_19;
  rz(3.5519252331253273) _gate_q_3;
  h _gate_q_12;
  rzx_5107061376(2.275557985181283) _gate_q_10, _gate_q_13;
  swap _gate_q_5, _gate_q_4;
  xx_minus_yy_5107063248(3.2228402194674874, 6.115550647243568) _gate_q_11, _gate_q_14;
  sdg _gate_q_15;
  ecr _gate_q_1, _gate_q_2;
  rzz_5107063056(3.831525277954405) _gate_q_17, _gate_q_16;
  ch _gate_q_17, _gate_q_9;
  r_5107066032(4.827927095344012, 5.6344187175786065) _gate_q_3;
  iswap _gate_q_13, _gate_q_14;
  xx_minus_yy_5107059888(5.158035700610345, 4.894841431264818) _gate_q_4, _gate_q_8;
  h _gate_q_2;
  ry(3.1356135855320684) _gate_q_12;
  cry(3.6013346420767953) _gate_q_0, _gate_q_15;
  x _gate_q_16;
  p(0.8824392146721877) _gate_q_5;
  rzz_5107071600(2.646417713804368) _gate_q_19, _gate_q_1;
  id _gate_q_7;
  dcx _gate_q_11, _gate_q_10;
  y _gate_q_18;
  r_5107060224(1.9652512909768647, 4.608019292375444) _gate_q_6;
}
gate xx_minus_yy_5107322080(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.120903932415351) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8267367876599733) _gate_q_0;
  ry(-0.8267367876599733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.120903932415351) _gate_q_1;
}
gate ryy_5107322368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.26549164968928124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107330384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.508551451943868) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0014265188598348) _gate_q_0;
  ry(-1.0014265188598348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.508551451943868) _gate_q_1;
}
gate cu3_5107326784(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1959687112178425) _gate_q_0;
  u1(-1.490979787777767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.627006392604118, 0, -3.1959687112178425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.627006392604118, 4.686948498995609, 0) _gate_q_1;
}
gate rxx_5107333120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.562499407493645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5107334560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.157802578019647) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.157802578019647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.157802578019647) _gate_q_1;
}
gate rzz_5107330336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.539519732608833) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5107319248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.36735146422727655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107333600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6040041337117557) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9161632457164022) _gate_q_0;
  ry(-1.9161632457164022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6040041337117557) _gate_q_1;
}
gate rzz_5107331872(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6580640756894838) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5107319824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.142553242786137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5107322320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2910735095803325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5107324240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.620657153954829) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8826606393721512) _gate_q_1;
  ry(-1.8826606393721512) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.620657153954829) _gate_q_0;
}
gate xx_plus_yy_5107323520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.125132161383915) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3026922716019496) _gate_q_1;
  ry(-0.3026922716019496) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.125132161383915) _gate_q_0;
}
gate ryy_5107329568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.667191906581499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107332016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.656457410613984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107325584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.714877651302766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5107334464(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2460470499600445, 0.6857025098966214, -0.6857025098966214) _gate_q_0;
}
gate rzz_5107328032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.27435332780339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107324720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.919581870169527) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6383933949172658) _gate_q_0;
  ry(-2.6383933949172658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.919581870169527) _gate_q_1;
}
gate rzz_5107320208(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.018674682821204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107326544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3483185970862674) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9930314770695885) _gate_q_1;
  ry(-2.9930314770695885) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3483185970862674) _gate_q_0;
}
gate rzz_5107333840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.351840640579388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107329232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.322410331487736) _gate_q_0;
  u1(-2.873654822666601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.422400292159431, 0, -3.322410331487736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.422400292159431, 6.196065154154337, 0) _gate_q_1;
}
gate xx_plus_yy_5107328800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.054606928271076) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11619329651742187) _gate_q_1;
  ry(-0.11619329651742187) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.054606928271076) _gate_q_0;
}
gate cu1_5107325488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8179958272649515) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8179958272649515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8179958272649515) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  rx(6.060220334285752) _gate_q_7;
  z _gate_q_11;
  u3(3.8320292175855206, 2.201007128692663, 1.539578927935586) _gate_q_1;
  crz(4.842711432642126) _gate_q_13, _gate_q_14;
  rz(4.442910652386152) _gate_q_5;
  xx_minus_yy_5107322080(1.6534735753199465, 4.120903932415351) _gate_q_12, _gate_q_4;
  ryy_5107322368(0.26549164968928124) _gate_q_18, _gate_q_3;
  x _gate_q_8;
  xx_minus_yy_5107330384(2.0028530377196696, 2.508551451943868) _gate_q_16, _gate_q_2;
  crx(3.6724810802524077) _gate_q_10, _gate_q_6;
  cz _gate_q_19, _gate_q_17;
  y _gate_q_9;
  cu3_5107326784(5.254012785208236, 4.686948498995609, 1.7049889234400752) _gate_q_15, _gate_q_0;
  cy _gate_q_4, _gate_q_14;
  rxx_5107333120(5.562499407493645) _gate_q_7, _gate_q_8;
  iswap _gate_q_9, _gate_q_12;
  crx(0.502131190096108) _gate_q_18, _gate_q_19;
  t _gate_q_16;
  ecr _gate_q_2, _gate_q_10;
  crx(4.6067321776098185) _gate_q_11, _gate_q_0;
  sx _gate_q_3;
  dcx _gate_q_15, _gate_q_5;
  cu1_5107334560(4.315605156039294) _gate_q_17, _gate_q_1;
  ch _gate_q_6, _gate_q_13;
  sx _gate_q_15;
  id _gate_q_7;
  s _gate_q_4;
  rzz_5107330336(5.539519732608833) _gate_q_9, _gate_q_19;
  cz _gate_q_17, _gate_q_3;
  tdg _gate_q_1;
  u2(1.1330527946444986, 0.1653281199910612) _gate_q_10;
  u3(0.9752312740449891, 5.769045509704546, 1.4681506658846037) _gate_q_14;
  sdg _gate_q_16;
  crx(2.525798244025822) _gate_q_5, _gate_q_12;
  rzz_5107319248(0.36735146422727655) _gate_q_13, _gate_q_18;
  t _gate_q_11;
  u2(2.033461702650398, 4.458107514572577) _gate_q_6;
  cy _gate_q_8, _gate_q_2;
  ry(3.851155753022265) _gate_q_0;
  rx(0.8518153785130558) _gate_q_3;
  xx_minus_yy_5107333600(3.8323264914328043, 3.6040041337117557) _gate_q_12, _gate_q_14;
  crx(3.7131824266529745) _gate_q_13, _gate_q_7;
  rz(4.827620581667513) _gate_q_11;
  U(0.17131874745445, 1.2506104888563607, 4.791064298048714) _gate_q_17;
  rzz_5107331872(0.6580640756894838) _gate_q_10, _gate_q_19;
  rxx_5107319824(3.142553242786137) _gate_q_4, _gate_q_8;
  ch _gate_q_6, _gate_q_1;
  ryy_5107322320(2.2910735095803325) _gate_q_16, _gate_q_2;
  iswap _gate_q_9, _gate_q_0;
  cu(5.518501077706521, 1.623750451064226, 3.8211589308014737, 1.9321999714995395) _gate_q_18, _gate_q_5;
  h _gate_q_15;
  sdg _gate_q_0;
  cry(1.971035114352791) _gate_q_18, _gate_q_12;
  xx_plus_yy_5107324240(3.7653212787443024, 4.620657153954829) _gate_q_8, _gate_q_7;
  swap _gate_q_4, _gate_q_3;
  cx _gate_q_17, _gate_q_13;
  U(2.372695228195368, 2.817717672417812, 3.377607418352989) _gate_q_15;
  xx_plus_yy_5107323520(0.6053845432038992, 2.125132161383915) _gate_q_19, _gate_q_6;
  ryy_5107329568(4.667191906581499) _gate_q_5, _gate_q_2;
  t _gate_q_14;
  rxx_5107332016(4.656457410613984) _gate_q_16, _gate_q_11;
  cp(4.748021894533668) _gate_q_9, _gate_q_10;
  id _gate_q_1;
  rx(1.3814510710355465) _gate_q_7;
  cy _gate_q_4, _gate_q_1;
  sxdg _gate_q_8;
  z _gate_q_14;
  ecr _gate_q_16, _gate_q_18;
  u3(5.006082271386144, 4.033744997685469, 5.630982530052455) _gate_q_3;
  csdg _gate_q_6, _gate_q_10;
  rxx_5107325584(4.714877651302766) _gate_q_12, _gate_q_0;
  U(6.245520468541012, 3.7272044404223537, 0.15151719234581268) _gate_q_19;
  y _gate_q_13;
  sdg _gate_q_5;
  crx(2.9537647289894413) _gate_q_17, _gate_q_9;
  cry(1.1757039623568262) _gate_q_11, _gate_q_15;
  sxdg _gate_q_2;
  r_5107334464(2.2460470499600445, 2.256498836691518) _gate_q_17;
  U(4.668966200240437, 0.040702454820608636, 4.426694959997169) _gate_q_0;
  u1(0.8337476845883997) _gate_q_10;
  sx _gate_q_3;
  ch _gate_q_6, _gate_q_14;
  rx(4.062011772897452) _gate_q_15;
  rzz_5107328032(2.27435332780339) _gate_q_9, _gate_q_13;
  csx _gate_q_4, _gate_q_12;
  xx_minus_yy_5107324720(5.2767867898345315, 5.919581870169527) _gate_q_11, _gate_q_8;
  ch _gate_q_16, _gate_q_2;
  t _gate_q_5;
  rzz_5107320208(5.018674682821204) _gate_q_18, _gate_q_7;
  cry(2.846282505594148) _gate_q_1, _gate_q_19;
  sxdg _gate_q_12;
  cx _gate_q_8, _gate_q_19;
  cy _gate_q_5, _gate_q_15;
  xx_plus_yy_5107326544(5.986062954139177, 2.3483185970862674) _gate_q_14, _gate_q_1;
  tdg _gate_q_17;
  x _gate_q_9;
  U(2.8396413140143517, 4.365456128574627, 1.6323962377223011) _gate_q_6;
  y _gate_q_2;
  cu(0.7292108655439511, 4.0853884271472145, 3.3618512047127522, 4.7303917044023205) _gate_q_18, _gate_q_7;
  ch _gate_q_11, _gate_q_0;
  rz(2.3439443096888724) _gate_q_13;
  cu(1.8215783455482935, 4.6956371638692085, 6.08313025709966, 4.95824472310415) _gate_q_16, _gate_q_3;
  rzz_5107333840(4.351840640579388) _gate_q_10, _gate_q_4;
  sx _gate_q_3;
  dcx _gate_q_8, _gate_q_15;
  cx _gate_q_18, _gate_q_0;
  cu3_5107329232(2.844800584318862, 6.196065154154337, 0.44875550882113513) _gate_q_19, _gate_q_2;
  tdg _gate_q_4;
  cp(3.066584980879916) _gate_q_13, _gate_q_9;
  cz _gate_q_16, _gate_q_11;
  h _gate_q_1;
  u1(2.1493110141372163) _gate_q_7;
  rx(4.727490466096116) _gate_q_10;
  xx_plus_yy_5107328800(0.23238659303484374, 3.054606928271076) _gate_q_12, _gate_q_5;
  id _gate_q_14;
  u1(1.7699916528833417) _gate_q_6;
  id _gate_q_17;
  crz(2.881681548535201) _gate_q_10, _gate_q_19;
  cu1_5107325488(5.635991654529903) _gate_q_11, _gate_q_6;
  u2(0.4257571589501928, 3.9050994083937116) _gate_q_13;
  id _gate_q_1;
  crx(3.4773153198447178) _gate_q_2, _gate_q_8;
  U(3.420224009222117, 2.312144680235268, 4.165143040942845) _gate_q_12;
  swap _gate_q_5, _gate_q_3;
  s _gate_q_7;
  p(4.521001782672968) _gate_q_16;
  rx(3.020489309842586) _gate_q_14;
  u1(5.853338410135336) _gate_q_4;
  x _gate_q_9;
  tdg _gate_q_15;
  iswap _gate_q_17, _gate_q_18;
  tdg _gate_q_0;
}