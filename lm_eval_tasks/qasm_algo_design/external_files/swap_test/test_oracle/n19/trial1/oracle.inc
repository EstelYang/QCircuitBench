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
gate xx_plus_yy_5116638464(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.684534558027492) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1163264049421375) _gate_q_1;
  ry(-1.1163264049421375) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.684534558027492) _gate_q_0;
}
gate r_5116640240(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4580329417313605, -0.7493775761011987, 0.7493775761011987) _gate_q_0;
}
gate cu3_5116641008(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0580907370541266) _gate_q_0;
  u1(-1.9855203084876598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.403542226636414, 0, -2.0580907370541266) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.403542226636414, 4.043611045541787, 0) _gate_q_1;
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
gate xx_minus_yy_5116630736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9056627965931083) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7797578859483414) _gate_q_0;
  ry(-2.7797578859483414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9056627965931083) _gate_q_1;
}
gate cu1_5116630640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8938162974464534) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8938162974464534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8938162974464534) _gate_q_1;
}
gate ryy_5116631024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1584409170814007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116631936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6250604508464894) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6250604508464894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6250604508464894) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5116635776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.40210667142114914, 3.559213932933603, -3.559213932933603) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5116631264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.816977008118786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116634384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5339507970020867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116627904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.106526267554123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116632464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.035710631775639) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.035710631775639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.035710631775639) _gate_q_1;
}
gate cu3_5116635872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.513297321895407) _gate_q_0;
  u1(-0.5757162257936237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1281069180109413, 0, -4.513297321895407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1281069180109413, 5.089013547689031, 0) _gate_q_1;
}
gate r_5116631216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5088188722759517, 3.0836212013790574, -3.0836212013790574) _gate_q_0;
}
gate ryy_5116631120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.27949668270261485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116630688(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6492703860184372, 0.506265836669995, -0.506265836669995) _gate_q_0;
}
gate rxx_5116631456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.379931935952655) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116637792(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.327636067963432) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116625216(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1634344355101662) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1634344355101662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1634344355101662) _gate_q_1;
}
gate ryy_5116625408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2983451010025122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116637120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4590648156461237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  csx _gate_q_11, _gate_q_14;
  rx(1.5551379167340973) _gate_q_7;
  cp(2.370918201857239) _gate_q_5, _gate_q_4;
  xx_plus_yy_5116638464(2.232652809884275, 2.684534558027492) _gate_q_17, _gate_q_10;
  y _gate_q_1;
  x _gate_q_16;
  r_5116640240(0.4580329417313605, 0.8214187506936979) _gate_q_3;
  tdg _gate_q_9;
  csx _gate_q_8, _gate_q_6;
  y _gate_q_18;
  cu3_5116641008(4.807084453272828, 4.043611045541787, 0.07257042856646682) _gate_q_2, _gate_q_15;
  ecr _gate_q_12, _gate_q_13;
  t _gate_q_0;
  crx(0.674368987571378) _gate_q_11, _gate_q_18;
  csx _gate_q_12, _gate_q_3;
  cu(6.258983894001972, 2.248185775840846, 5.051329372136038, 2.3559394153641398) _gate_q_10, _gate_q_8;
  csdg _gate_q_6, _gate_q_14;
  cry(4.334210066268269) _gate_q_17, _gate_q_1;
  xx_minus_yy_5116630736(5.559515771896683, 1.9056627965931083) _gate_q_9, _gate_q_7;
  u2(4.051050488741861, 4.255914835186279) _gate_q_13;
  cu1_5116630640(1.7876325948929068) _gate_q_16, _gate_q_5;
  ryy_5116631024(3.1584409170814007) _gate_q_4, _gate_q_2;
  sdg _gate_q_15;
  sx _gate_q_0;
  u1(1.5276115050647292) _gate_q_14;
  ecr _gate_q_10, _gate_q_15;
  cu1_5116631936(3.250120901692979) _gate_q_12, _gate_q_0;
  tdg _gate_q_17;
  rz(5.584509120455301) _gate_q_4;
  csdg _gate_q_5, _gate_q_8;
  crx(5.32629223267533) _gate_q_16, _gate_q_9;
  iswap _gate_q_11, _gate_q_13;
  ecr _gate_q_6, _gate_q_1;
  swap _gate_q_7, _gate_q_3;
  crx(6.01477694237947) _gate_q_18, _gate_q_2;
  s _gate_q_6;
  crx(6.083603385716513) _gate_q_0, _gate_q_17;
  swap _gate_q_11, _gate_q_15;
  rx(2.9629090877661883) _gate_q_2;
  id _gate_q_12;
  h _gate_q_18;
  s _gate_q_14;
  cp(2.214613358420117) _gate_q_3, _gate_q_8;
  ch _gate_q_9, _gate_q_10;
  r_5116635776(0.40210667142114914, 5.1300102597284996) _gate_q_16;
  crz(4.409021243479369) _gate_q_7, _gate_q_5;
  crz(5.2265934905720375) _gate_q_1, _gate_q_13;
  U(2.845685967142272, 1.9043961930288715, 5.111757863609089) _gate_q_4;
  cs _gate_q_6, _gate_q_17;
  cs _gate_q_3, _gate_q_10;
  h _gate_q_18;
  rxx_5116631264(4.816977008118786) _gate_q_12, _gate_q_14;
  rxx_5116634384(0.5339507970020867) _gate_q_15, _gate_q_9;
  u2(2.437673754074783, 4.387246837160355) _gate_q_7;
  rzz_5116627904(4.106526267554123) _gate_q_11, _gate_q_2;
  cu1_5116632464(2.071421263551278) _gate_q_8, _gate_q_4;
  x _gate_q_1;
  iswap _gate_q_13, _gate_q_0;
  cs _gate_q_16, _gate_q_5;
  cs _gate_q_14, _gate_q_0;
  rz(5.4515572062166875) _gate_q_3;
  cy _gate_q_17, _gate_q_13;
  rx(1.643474621629093) _gate_q_8;
  cry(2.728629203036532) _gate_q_16, _gate_q_18;
  sxdg _gate_q_9;
  u2(5.3991446404815875, 3.4311650790028887) _gate_q_1;
  sdg _gate_q_15;
  csx _gate_q_11, _gate_q_7;
  cu3_5116635872(6.256213836021883, 5.089013547689031, 3.937581096101783) _gate_q_4, _gate_q_6;
  ry(4.415825836856968) _gate_q_10;
  x _gate_q_12;
  r_5116631216(3.5088188722759517, 4.654417528173954) _gate_q_2;
  sxdg _gate_q_5;
  ry(6.214491190199473) _gate_q_1;
  crz(2.5648400489056544) _gate_q_2, _gate_q_18;
  U(3.0805463136304914, 5.823510099009237, 1.7491115252873666) _gate_q_9;
  ecr _gate_q_13, _gate_q_11;
  u1(3.4262678647307854) _gate_q_17;
  cry(1.000314384330562) _gate_q_16, _gate_q_8;
  crx(3.9767944232799293) _gate_q_5, _gate_q_4;
  cu(0.9670173727411404, 0.380981568986781, 5.772414443909463, 0.11413753032043181) _gate_q_10, _gate_q_15;
  cp(4.534220743902621) _gate_q_7, _gate_q_3;
  sxdg _gate_q_6;
  ryy_5116631120(0.27949668270261485) _gate_q_0, _gate_q_14;
  sx _gate_q_12;
  ch _gate_q_18, _gate_q_1;
  cs _gate_q_9, _gate_q_7;
  cz _gate_q_2, _gate_q_16;
  u1(1.6123220850714048) _gate_q_4;
  r_5116630688(2.6492703860184372, 2.0770621634648916) _gate_q_3;
  id _gate_q_11;
  sx _gate_q_13;
  p(0.9757455205511374) _gate_q_8;
  cx _gate_q_10, _gate_q_14;
  u2(0.5711172659565352, 0.1976227558091415) _gate_q_17;
  iswap _gate_q_12, _gate_q_15;
  crx(0.382781612786927) _gate_q_5, _gate_q_0;
  sxdg _gate_q_6;
  csx _gate_q_6, _gate_q_8;
  ch _gate_q_2, _gate_q_5;
  rxx_5116631456(5.379931935952655) _gate_q_9, _gate_q_4;
  rzz_5116637792(4.327636067963432) _gate_q_14, _gate_q_16;
  ecr _gate_q_15, _gate_q_3;
  cs _gate_q_10, _gate_q_11;
  crx(4.540846108105525) _gate_q_0, _gate_q_18;
  s _gate_q_13;
  cry(5.638854820472598) _gate_q_17, _gate_q_1;
  swap _gate_q_12, _gate_q_7;
  ch _gate_q_6, _gate_q_14;
  crx(5.476043521161472) _gate_q_12, _gate_q_4;
  rz(2.8825094075805664) _gate_q_0;
  u2(5.399828551789157, 2.6545131553734933) _gate_q_16;
  sxdg _gate_q_11;
  u3(4.331040090853941, 2.7189941699025972, 1.0708142529053595) _gate_q_1;
  cu1_5116625216(4.3268688710203325) _gate_q_15, _gate_q_3;
  u3(1.2343538842557993, 0.19773175283998543, 3.798756997308791) _gate_q_13;
  cs _gate_q_17, _gate_q_8;
  iswap _gate_q_18, _gate_q_7;
  ryy_5116625408(1.2983451010025122) _gate_q_2, _gate_q_9;
  rzx_5116637120(3.4590648156461237) _gate_q_10, _gate_q_5;
}
gate rxx_5116635056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8868797830987268) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116636448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.249369251207516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu1_5116633280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.086902899476252) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.086902899476252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.086902899476252) _gate_q_1;
}
gate rxx_5116632512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4311687817810008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5116635392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.021583630570188) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.021583630570188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.021583630570188) _gate_q_1;
}
gate rzz_5116633472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.866182083713359) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116629584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.779040045205345) _gate_q_0;
  u1(0.48165856859013134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1107300764997023, 0, -5.779040045205345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1107300764997023, 5.2973814766152145, 0) _gate_q_1;
}
gate cu1_5116634240(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.684285168853548) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.684285168853548) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.684285168853548) _gate_q_1;
}
gate xx_minus_yy_5116634144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6190689124814774) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.830358133730728) _gate_q_0;
  ry(-2.830358133730728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6190689124814774) _gate_q_1;
}
gate rzz_5116640336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.952347328850767) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116636016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.107646704002837) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.107646704002837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.107646704002837) _gate_q_1;
}
gate cu1_5116638512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.011840503969422) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.011840503969422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.011840503969422) _gate_q_1;
}
gate xx_minus_yy_5116639712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.94699251675869) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8862144501110742) _gate_q_0;
  ry(-1.8862144501110742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.94699251675869) _gate_q_1;
}
gate xx_plus_yy_5116640432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0094476692728571) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.15201236352934153) _gate_q_1;
  ry(-0.15201236352934153) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0094476692728571) _gate_q_0;
}
gate cu3_5116638752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.399848483900827) _gate_q_0;
  u1(1.4136861805759895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1032376258923646, 0, -4.399848483900827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1032376258923646, 2.9861623033248375, 0) _gate_q_1;
}
gate ryy_5116635968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.93284545618537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5116641200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.5400644110886175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116625648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4014857384709123) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4014857384709123) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4014857384709123) _gate_q_1;
}
gate xx_minus_yy_5116626032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.8597624864368063) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.08266474997010996) _gate_q_0;
  ry(-0.08266474997010996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.8597624864368063) _gate_q_1;
}
gate cu3_5116636976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5360738101384035) _gate_q_0;
  u1(-1.1623905757637634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.936730678672087, 0, -3.5360738101384035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.936730678672087, 4.698464385902167, 0) _gate_q_1;
}
gate rzz_5116629632(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.219544900505471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116639136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.47016237637839187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116631408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.769643249104951) _gate_q_0;
  u1(-0.046173060481333295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.088813856948133, 0, -4.769643249104951) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.088813856948133, 4.8158163095862845, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  rxx_5116635056(0.8868797830987268) _gate_q_9, _gate_q_6;
  rzx_5116636448(4.249369251207516) _gate_q_14, _gate_q_0;
  u1(2.376587814346404) _gate_q_17;
  s _gate_q_1;
  sdg _gate_q_18;
  csdg _gate_q_4, _gate_q_15;
  p(5.890806034274792) _gate_q_7;
  dcx _gate_q_16, _gate_q_10;
  cu1_5116633280(4.173805798952504) _gate_q_2, _gate_q_11;
  ecr _gate_q_13, _gate_q_5;
  h _gate_q_3;
  ry(0.09500752219514941) _gate_q_12;
  rz(0.4793928185860664) _gate_q_8;
  cy _gate_q_10, _gate_q_13;
  cz _gate_q_3, _gate_q_7;
  x _gate_q_5;
  rxx_5116632512(1.4311687817810008) _gate_q_18, _gate_q_6;
  cy _gate_q_4, _gate_q_0;
  sxdg _gate_q_11;
  ry(4.608690266213538) _gate_q_1;
  sx _gate_q_16;
  cu1_5116635392(4.043167261140376) _gate_q_2, _gate_q_12;
  rzz_5116633472(5.866182083713359) _gate_q_14, _gate_q_17;
  ry(4.87257855326457) _gate_q_15;
  U(2.7853884750551914, 6.1471974955692925, 2.0407251068343824) _gate_q_9;
  y _gate_q_8;
  swap _gate_q_16, _gate_q_8;
  cs _gate_q_7, _gate_q_18;
  s _gate_q_2;
  h _gate_q_6;
  cu3_5116629584(6.221460152999405, 5.2973814766152145, 6.260698613795477) _gate_q_10, _gate_q_4;
  tdg _gate_q_0;
  id _gate_q_3;
  csx _gate_q_17, _gate_q_13;
  z _gate_q_14;
  cu1_5116634240(5.368570337707096) _gate_q_5, _gate_q_9;
  cry(1.291985302655693) _gate_q_15, _gate_q_11;
  t _gate_q_1;
  rz(1.0334798828985183) _gate_q_12;
  t _gate_q_6;
  cry(2.3402257170608496) _gate_q_10, _gate_q_3;
  ecr _gate_q_4, _gate_q_0;
  xx_minus_yy_5116634144(5.660716267461456, 1.6190689124814774) _gate_q_13, _gate_q_9;
  crx(5.448548786162362) _gate_q_5, _gate_q_15;
  csdg _gate_q_12, _gate_q_14;
  dcx _gate_q_2, _gate_q_11;
  rzz_5116640336(1.952347328850767) _gate_q_16, _gate_q_17;
  iswap _gate_q_8, _gate_q_7;
  sx _gate_q_1;
  x _gate_q_18;
  iswap _gate_q_10, _gate_q_6;
  cu(1.008445538454703, 0.7151772289637324, 6.010087495362278, 5.819058432038986) _gate_q_12, _gate_q_16;
  cs _gate_q_11, _gate_q_1;
  x _gate_q_13;
  cx _gate_q_3, _gate_q_0;
  h _gate_q_5;
  swap _gate_q_8, _gate_q_17;
  cu1_5116636016(4.215293408005674) _gate_q_2, _gate_q_18;
  ecr _gate_q_15, _gate_q_4;
  s _gate_q_9;
  p(3.1910312281354813) _gate_q_14;
  p(3.053582206659607) _gate_q_7;
  cu1_5116638512(4.023681007938844) _gate_q_2, _gate_q_12;
  ecr _gate_q_7, _gate_q_1;
  crx(5.743806173347683) _gate_q_13, _gate_q_6;
  sdg _gate_q_5;
  cp(1.0754212042423923) _gate_q_9, _gate_q_11;
  t _gate_q_3;
  cu(1.0988541689290245, 2.2968743556042197, 0.1264483112300959, 0.4351492202849736) _gate_q_4, _gate_q_15;
  U(5.446615088352154, 4.2272235665487194, 2.6604586000558657) _gate_q_14;
  u2(1.1733285963516953, 5.75566150944342) _gate_q_0;
  cs _gate_q_17, _gate_q_16;
  xx_minus_yy_5116639712(3.7724289002221485, 3.94699251675869) _gate_q_18, _gate_q_10;
  id _gate_q_8;
  cx _gate_q_12, _gate_q_10;
  crx(4.157404012514962) _gate_q_17, _gate_q_11;
  u1(4.844979546847371) _gate_q_15;
  id _gate_q_6;
  cx _gate_q_0, _gate_q_3;
  cry(3.5078592515355087) _gate_q_2, _gate_q_14;
  xx_plus_yy_5116640432(0.30402472705868305, 1.0094476692728571) _gate_q_1, _gate_q_9;
  sx _gate_q_5;
  p(1.1172545959115108) _gate_q_8;
  t _gate_q_13;
  u3(6.198535831266155, 3.946999064057159, 4.455874241640876) _gate_q_16;
  y _gate_q_7;
  sxdg _gate_q_4;
  rz(0.8934614788763415) _gate_q_18;
  crx(1.3655889707006916) _gate_q_18, _gate_q_17;
  ch _gate_q_2, _gate_q_3;
  x _gate_q_14;
  z _gate_q_11;
  sx _gate_q_1;
  cu3_5116638752(6.206475251784729, 2.9861623033248375, 5.813534664476816) _gate_q_9, _gate_q_13;
  U(1.360993227344036, 2.824471097539159, 4.2534188373821715) _gate_q_7;
  csx _gate_q_10, _gate_q_12;
  ecr _gate_q_0, _gate_q_5;
  ryy_5116635968(4.93284545618537) _gate_q_6, _gate_q_8;
  rzz_5116641200(5.5400644110886175) _gate_q_4, _gate_q_15;
  sdg _gate_q_16;
  h _gate_q_7;
  t _gate_q_17;
  cu1_5116625648(2.8029714769418246) _gate_q_18, _gate_q_15;
  xx_minus_yy_5116626032(0.16532949994021992, 3.8597624864368063) _gate_q_4, _gate_q_3;
  p(5.4101534317911995) _gate_q_0;
  cz _gate_q_13, _gate_q_2;
  u3(0.31170784587063405, 0.17562892350582313, 1.877282136784189) _gate_q_6;
  rz(3.796656983067756) _gate_q_1;
  cx _gate_q_8, _gate_q_12;
  swap _gate_q_16, _gate_q_14;
  crx(1.0138193944368594) _gate_q_10, _gate_q_5;
  ecr _gate_q_11, _gate_q_9;
  y _gate_q_11;
  y _gate_q_15;
  x _gate_q_1;
  cz _gate_q_4, _gate_q_5;
  cu3_5116636976(5.873461357344174, 4.698464385902167, 2.37368323437464) _gate_q_17, _gate_q_2;
  ry(1.697412386777691) _gate_q_0;
  u2(3.577079156757098, 4.122476812484381) _gate_q_7;
  rzz_5116629632(1.219544900505471) _gate_q_13, _gate_q_14;
  sx _gate_q_18;
  u2(3.161831176343685, 2.4309711462217174) _gate_q_10;
  rxx_5116639136(0.47016237637839187) _gate_q_16, _gate_q_3;
  cu3_5116631408(6.177627713896266, 4.8158163095862845, 4.723470188623618) _gate_q_8, _gate_q_9;
  ecr _gate_q_12, _gate_q_6;
}