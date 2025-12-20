gate rzx_5103927072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3753763587911982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5103924144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0789134813324481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5103924432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.447691500196027) _gate_q_0;
  u1(-2.0422806216927065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3108477958033604, 0, -2.447691500196027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3108477958033604, 4.489972121888734, 0) _gate_q_1;
}
gate xx_plus_yy_5103921312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0266647575646526) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3211920002913435) _gate_q_1;
  ry(-1.3211920002913435) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0266647575646526) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5103923856(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9384648272046574, 0.12416308406698606, -0.12416308406698606) _gate_q_0;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5103924480(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.604477451398958) _gate_q_0;
  u1(-1.7012250486234604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5520275567360673, 0, -2.604477451398958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5520275567360673, 4.305702500022418, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5103919536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2231088845389633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5103920976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4413446240707557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5103926976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9638392697506168) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8856721264648808) _gate_q_1;
  ry(-1.8856721264648808) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9638392697506168) _gate_q_0;
}
gate xx_minus_yy_5107781744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.95035355526555) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7361719906520926) _gate_q_0;
  ry(-0.7361719906520926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.95035355526555) _gate_q_1;
}
gate rzx_5107779776(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.489248000761691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  z _gate_q_0;
  rzx_5103927072(3.3753763587911982) _gate_q_10, _gate_q_4;
  rzz_5103924144(1.0789134813324481) _gate_q_2, _gate_q_3;
  sxdg _gate_q_5;
  u3(1.5531875422969303, 5.816295522079297, 2.721369820107527) _gate_q_7;
  u2(5.675459639971267, 1.9013574729803444) _gate_q_8;
  u2(2.9925870149009843, 4.368179910391933) _gate_q_9;
  sxdg _gate_q_6;
  t _gate_q_1;
  rz(5.737478067079076) _gate_q_11;
  dcx _gate_q_8, _gate_q_10;
  cu3_5103924432(4.621695591606721, 4.489972121888734, 0.40541087850332064) _gate_q_3, _gate_q_0;
  dcx _gate_q_5, _gate_q_1;
  xx_plus_yy_5103921312(2.642384000582687, 3.0266647575646526) _gate_q_7, _gate_q_4;
  iswap _gate_q_6, _gate_q_9;
  t _gate_q_11;
  r_5103923856(2.9384648272046574, 1.6949594108618826) _gate_q_2;
  ch _gate_q_2, _gate_q_7;
  t _gate_q_4;
  U(4.99972086352681, 4.603989188333791, 2.936052670275175) _gate_q_8;
  p(1.7000692104840098) _gate_q_0;
  h _gate_q_6;
  sx _gate_q_5;
  ecr _gate_q_1, _gate_q_10;
  csdg _gate_q_11, _gate_q_9;
  u3(0.12199328512317852, 2.6917576618910073, 4.6738415374513265) _gate_q_3;
  cu3_5103924480(5.104055113472135, 4.305702500022418, 0.9032524027754978) _gate_q_1, _gate_q_5;
  crz(4.656506059735561) _gate_q_7, _gate_q_9;
  cs _gate_q_11, _gate_q_4;
  cs _gate_q_3, _gate_q_2;
  rxx_5103919536(3.2231088845389633) _gate_q_10, _gate_q_6;
  U(4.4298270965878235, 6.1719826071293475, 4.5083743935433045) _gate_q_0;
  p(1.6861427153313413) _gate_q_8;
  sx _gate_q_1;
  t _gate_q_10;
  crx(1.6223478389736152) _gate_q_11, _gate_q_6;
  ryy_5103920976(1.4413446240707557) _gate_q_5, _gate_q_8;
  z _gate_q_0;
  iswap _gate_q_3, _gate_q_9;
  p(2.017132720307194) _gate_q_2;
  x _gate_q_4;
  z _gate_q_7;
  dcx _gate_q_6, _gate_q_2;
  csdg _gate_q_4, _gate_q_1;
  U(0.8055485156048339, 5.690528383549813, 2.073416831261965) _gate_q_5;
  swap _gate_q_0, _gate_q_10;
  h _gate_q_9;
  crz(5.423404848591557) _gate_q_11, _gate_q_7;
  s _gate_q_8;
  sdg _gate_q_3;
  ecr _gate_q_5, _gate_q_4;
  iswap _gate_q_9, _gate_q_3;
  p(0.3047893090290932) _gate_q_11;
  xx_plus_yy_5103926976(3.7713442529297616, 1.9638392697506168) _gate_q_7, _gate_q_10;
  u2(3.0687973414420444, 1.9951162324612695) _gate_q_1;
  crz(4.847502896038857) _gate_q_6, _gate_q_0;
  sdg _gate_q_8;
  t _gate_q_2;
  iswap _gate_q_4, _gate_q_3;
  ry(2.3227686043450295) _gate_q_9;
  t _gate_q_10;
  crx(1.5748960943874144) _gate_q_0, _gate_q_1;
  s _gate_q_5;
  z _gate_q_8;
  cz _gate_q_2, _gate_q_7;
  cs _gate_q_11, _gate_q_6;
  crx(3.6814602831291454) _gate_q_10, _gate_q_7;
  cz _gate_q_4, _gate_q_2;
  xx_minus_yy_5107781744(1.4723439813041852, 3.95035355526555) _gate_q_3, _gate_q_5;
  sx _gate_q_8;
  id _gate_q_9;
  crx(4.656908038980616) _gate_q_0, _gate_q_1;
  p(1.9024253525338288) _gate_q_6;
  ry(2.320606147124579) _gate_q_11;
  cp(3.5485094233807146) _gate_q_2, _gate_q_8;
  p(1.0754705784052199) _gate_q_3;
  t _gate_q_1;
  rzx_5107779776(3.489248000761691) _gate_q_6, _gate_q_9;
  sdg _gate_q_10;
  id _gate_q_4;
  y _gate_q_0;
  cu(3.154042728729465, 1.5886689966213015, 6.032480903089014, 2.208290992453623) _gate_q_11, _gate_q_7;
  t _gate_q_5;
}
gate rxx_5106328896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6916304025267594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106328608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2940991976919394) _gate_q_0;
  u1(-1.2940448875672783) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.007391263938358303, 0, -2.2940991976919394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.007391263938358303, 3.5881440852592177, 0) _gate_q_1;
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
gate xx_plus_yy_5106326640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.265385805944034) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.22834471245429278) _gate_q_1;
  ry(-0.22834471245429278) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.265385805944034) _gate_q_0;
}
gate r_5106327408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.018693128829328, 3.7292183762236295, -3.7292183762236295) _gate_q_0;
}
gate cu1_5106332400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2212950195073706) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2212950195073706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2212950195073706) _gate_q_1;
}
gate rzx_5106326112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6156877727157753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5106333072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6829680431268452, 3.353869699884582, -3.353869699884582) _gate_q_0;
}
gate rzz_5106324960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.07422900266742927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106332928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.963198536816757, -0.36529881345647675, 0.36529881345647675) _gate_q_0;
}
gate rzz_5106332832(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.377616282774768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106329904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9729447867625732) _gate_q_0;
  u1(0.28346219226253255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.580724218834261, 0, -0.9729447867625732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.580724218834261, 0.6894825945000407, 0) _gate_q_1;
}
gate rzz_5106324048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.653484824257283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5106328080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.836220535816521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106334224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6435001011990065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106327888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.764337735747009) _gate_q_0;
  u1(-0.6257785976972055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4668325375302116, 0, -4.764337735747009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4668325375302116, 5.390116333444215, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  rxx_5106328896(2.6916304025267594) _gate_q_6, _gate_q_9;
  s _gate_q_7;
  ry(0.3206822572188258) _gate_q_4;
  x _gate_q_0;
  cx _gate_q_10, _gate_q_5;
  cu3_5106328608(0.014782527876716606, 3.5881440852592177, 1.0000543101246608) _gate_q_11, _gate_q_3;
  z _gate_q_8;
  dcx _gate_q_1, _gate_q_2;
  id _gate_q_5;
  ch _gate_q_0, _gate_q_7;
  sxdg _gate_q_4;
  u3(4.997781997351207, 2.7175020409296997, 2.7601644055960413) _gate_q_3;
  csx _gate_q_8, _gate_q_10;
  cs _gate_q_2, _gate_q_9;
  xx_plus_yy_5106326640(0.45668942490858555, 1.265385805944034) _gate_q_6, _gate_q_11;
  r_5106327408(4.018693128829328, 5.300014703018526) _gate_q_1;
  cu1_5106332400(2.4425900390147413) _gate_q_3, _gate_q_11;
  sdg _gate_q_1;
  swap _gate_q_10, _gate_q_9;
  sx _gate_q_4;
  id _gate_q_0;
  cx _gate_q_5, _gate_q_6;
  rzx_5106326112(0.6156877727157753) _gate_q_2, _gate_q_8;
  r_5106333072(1.6829680431268452, 4.924666026679478) _gate_q_7;
  dcx _gate_q_5, _gate_q_10;
  rzz_5106324960(0.07422900266742927) _gate_q_7, _gate_q_8;
  r_5106332928(1.963198536816757, 1.2054975133384198) _gate_q_1;
  cy _gate_q_3, _gate_q_6;
  cs _gate_q_9, _gate_q_2;
  t _gate_q_0;
  rz(6.046484247231523) _gate_q_11;
  h _gate_q_4;
  rzz_5106332832(3.377616282774768) _gate_q_7, _gate_q_4;
  cu(3.592488669804919, 5.3717428270712295, 3.9790894398048136, 4.844340740628135) _gate_q_11, _gate_q_2;
  csdg _gate_q_3, _gate_q_10;
  tdg _gate_q_9;
  sxdg _gate_q_6;
  iswap _gate_q_5, _gate_q_8;
  sdg _gate_q_0;
  x _gate_q_1;
  cx _gate_q_1, _gate_q_4;
  cu3_5106329904(5.161448437668522, 0.6894825945000407, 1.2564069790251058) _gate_q_9, _gate_q_5;
  crx(5.898807611851694) _gate_q_3, _gate_q_11;
  ch _gate_q_8, _gate_q_6;
  id _gate_q_10;
  csx _gate_q_0, _gate_q_2;
  h _gate_q_7;
  rz(4.70989580866929) _gate_q_0;
  ry(1.3477672478159466) _gate_q_6;
  sdg _gate_q_7;
  u3(1.6604585346279763, 5.624976670715415, 0.6949512498858046) _gate_q_1;
  sx _gate_q_8;
  sxdg _gate_q_2;
  p(2.993415172382837) _gate_q_9;
  s _gate_q_11;
  ry(4.033537120235828) _gate_q_5;
  cz _gate_q_4, _gate_q_10;
  x _gate_q_3;
  cs _gate_q_11, _gate_q_6;
  cy _gate_q_7, _gate_q_0;
  x _gate_q_4;
  rz(0.21459596602530676) _gate_q_5;
  crz(3.5098130970534855) _gate_q_2, _gate_q_1;
  tdg _gate_q_3;
  rzz_5106324048(2.653484824257283) _gate_q_8, _gate_q_9;
  u2(4.979694710366284, 5.168453928702489) _gate_q_10;
  ryy_5106328080(4.836220535816521) _gate_q_2, _gate_q_8;
  sdg _gate_q_9;
  cs _gate_q_7, _gate_q_6;
  rxx_5106334224(3.6435001011990065) _gate_q_0, _gate_q_5;
  p(4.616856427465473) _gate_q_11;
  csx _gate_q_10, _gate_q_4;
  cs _gate_q_1, _gate_q_3;
  U(1.604216726042035, 0.4950701665596894, 4.661498703483034) _gate_q_10;
  cry(0.977789227447147) _gate_q_9, _gate_q_1;
  cu3_5106327888(4.933665075060423, 5.390116333444215, 4.138559138049804) _gate_q_11, _gate_q_3;
  h _gate_q_0;
  t _gate_q_6;
  tdg _gate_q_5;
  sdg _gate_q_7;
  cs _gate_q_2, _gate_q_8;
  rz(5.054383653935842) _gate_q_4;
}