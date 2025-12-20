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
gate cu1_5070139904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9632307464503398) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9632307464503398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9632307464503398) _gate_q_1;
}
gate r_5070143072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.985930370877348, 1.5108011682256088, -1.5108011682256088) _gate_q_0;
}
gate rxx_5070129200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0496679698306828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070130400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.006461061114634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5070139856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.285442435429756) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate xx_plus_yy_5070137984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.212618180223034) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.816542473048688) _gate_q_1;
  ry(-0.816542473048688) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.212618180223034) _gate_q_0;
}
gate rzz_5070139712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.189767552989882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070131360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1528633180189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070141152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.633807429584582) _gate_q_0;
  u1(-0.43744351992672126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6611676351068216, 0, -4.633807429584582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6611676351068216, 5.071250949511303, 0) _gate_q_1;
}
gate rzz_5070139232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.223941464607112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070135968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.185411127385869) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070133376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.122178267849553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5070130352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5224397365843494) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5224397365843494) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5224397365843494) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5070128336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.191665450093232) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070139376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.48063485983050297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070131024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.610169451336292) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.610169451336292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.610169451336292) _gate_q_1;
}
gate rxx_5070139568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5800164052339016) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070129152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.090865661316661) _gate_q_0;
  u1(0.0610708149717234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9467857361869694, 0, -6.090865661316661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9467857361869694, 6.029794846344938, 0) _gate_q_1;
}
gate xx_plus_yy_5070134720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.5498859284308164) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.931315888622844) _gate_q_1;
  ry(-0.931315888622844) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.5498859284308164) _gate_q_0;
}
gate ryy_5070131504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9778663610090023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070131072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.3621243289863494) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0033712023751535) _gate_q_0;
  ry(-3.0033712023751535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.3621243289863494) _gate_q_1;
}
gate cu3_5070139952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.33190353611525) _gate_q_0;
  u1(1.793582611479248) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.122634209492414, 0, -3.33190353611525) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.122634209492414, 1.5383209246360021, 0) _gate_q_1;
}
gate cu3_5070141200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2946633993906502) _gate_q_0;
  u1(2.369626141701027) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.004052077231256, 0, -3.2946633993906502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.004052077231256, 0.9250372576896235, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  tdg _gate_q_11;
  ch _gate_q_9, _gate_q_14;
  cy _gate_q_5, _gate_q_2;
  crz(0.2493721362919974) _gate_q_10, _gate_q_4;
  t _gate_q_0;
  ecr _gate_q_7, _gate_q_12;
  ecr _gate_q_16, _gate_q_8;
  p(3.005461361536982) _gate_q_15;
  cu1_5070139904(3.9264614929006796) _gate_q_13, _gate_q_6;
  r_5070143072(2.985930370877348, 3.0815974950205054) _gate_q_1;
  sdg _gate_q_3;
  p(4.610734869992815) _gate_q_0;
  crz(1.6140066729583133) _gate_q_4, _gate_q_6;
  rxx_5070129200(1.0496679698306828) _gate_q_1, _gate_q_12;
  z _gate_q_14;
  u1(0.42209339778095784) _gate_q_9;
  ryy_5070130400(4.006461061114634) _gate_q_3, _gate_q_7;
  ry(1.0128068257314722) _gate_q_13;
  U(5.954617472159762, 4.410284860396737, 2.299293703231329) _gate_q_16;
  sx _gate_q_11;
  t _gate_q_15;
  sx _gate_q_2;
  rzx_5070139856(4.285442435429756) _gate_q_10, _gate_q_5;
  tdg _gate_q_8;
  sxdg _gate_q_12;
  sxdg _gate_q_7;
  csx _gate_q_16, _gate_q_10;
  s _gate_q_11;
  cry(2.295094446566981) _gate_q_4, _gate_q_9;
  xx_plus_yy_5070137984(1.633084946097376, 5.212618180223034) _gate_q_1, _gate_q_2;
  rzz_5070139712(2.189767552989882) _gate_q_13, _gate_q_14;
  rzx_5070131360(4.1528633180189) _gate_q_0, _gate_q_15;
  dcx _gate_q_8, _gate_q_6;
  cu3_5070141152(3.3223352702136433, 5.071250949511303, 4.196363909657861) _gate_q_3, _gate_q_5;
  u2(4.151023473469784, 6.278364573675141) _gate_q_14;
  cz _gate_q_7, _gate_q_11;
  dcx _gate_q_2, _gate_q_5;
  ch _gate_q_16, _gate_q_6;
  x _gate_q_0;
  sx _gate_q_15;
  csx _gate_q_3, _gate_q_4;
  cx _gate_q_10, _gate_q_12;
  crz(3.099212693708111) _gate_q_13, _gate_q_9;
  U(3.8617247625048936, 4.068753590542327, 2.350707432223099) _gate_q_8;
  t _gate_q_1;
  rzz_5070139232(5.223941464607112) _gate_q_14, _gate_q_15;
  x _gate_q_9;
  y _gate_q_2;
  ryy_5070135968(4.185411127385869) _gate_q_7, _gate_q_10;
  rxx_5070133376(1.122178267849553) _gate_q_12, _gate_q_5;
  z _gate_q_3;
  cs _gate_q_8, _gate_q_16;
  U(3.472034731875943, 5.382652409219564, 2.464917790443772) _gate_q_13;
  dcx _gate_q_0, _gate_q_1;
  cu1_5070130352(5.044879473168699) _gate_q_6, _gate_q_11;
  z _gate_q_4;
  x _gate_q_2;
  U(1.4542896172225546, 3.806992657320046, 0.2703643437910469) _gate_q_12;
  crz(0.7095313502398072) _gate_q_5, _gate_q_10;
  u1(1.2566378229550244) _gate_q_15;
  csx _gate_q_0, _gate_q_8;
  csdg _gate_q_6, _gate_q_11;
  ry(3.507296546452726) _gate_q_4;
  swap _gate_q_1, _gate_q_9;
  cu(3.9037975095131037, 0.017930610024246754, 0.7875889820257896, 1.720106314993229) _gate_q_14, _gate_q_7;
  iswap _gate_q_16, _gate_q_13;
  u1(0.5551471881033003) _gate_q_3;
  ch _gate_q_3, _gate_q_10;
  ryy_5070128336(3.191665450093232) _gate_q_15, _gate_q_16;
  h _gate_q_9;
  p(1.5558409703948604) _gate_q_2;
  u3(0.24306820642895552, 1.0523776163897431, 0.9688389444025722) _gate_q_4;
  U(1.0311463469543223, 0.14995247871310574, 5.280479034884052) _gate_q_1;
  ryy_5070139376(0.48063485983050297) _gate_q_12, _gate_q_6;
  u3(5.33005903332023, 5.8624584477163015, 4.164579744131439) _gate_q_11;
  u2(4.950418959343609, 0.5172705372665044) _gate_q_7;
  ch _gate_q_8, _gate_q_5;
  cu1_5070131024(3.220338902672584) _gate_q_14, _gate_q_13;
  sdg _gate_q_0;
  crz(3.2069604862723167) _gate_q_0, _gate_q_16;
  cs _gate_q_11, _gate_q_4;
  cz _gate_q_13, _gate_q_12;
  rxx_5070139568(1.5800164052339016) _gate_q_9, _gate_q_15;
  cu(1.973607867929004, 0.6487136723753292, 6.060507347960895, 0.8045329536919056) _gate_q_14, _gate_q_6;
  cu3_5070129152(1.8935714723739387, 6.029794846344938, 6.151936476288385) _gate_q_8, _gate_q_2;
  z _gate_q_5;
  xx_plus_yy_5070134720(1.862631777245688, 3.5498859284308164) _gate_q_7, _gate_q_10;
  tdg _gate_q_3;
  p(1.3392471213274637) _gate_q_1;
  u2(2.7505267580109236, 2.1156242830466674) _gate_q_12;
  crz(3.476494192166238) _gate_q_8, _gate_q_3;
  ryy_5070131504(0.9778663610090023) _gate_q_15, _gate_q_13;
  cy _gate_q_0, _gate_q_7;
  rz(6.260298379030072) _gate_q_16;
  cz _gate_q_4, _gate_q_1;
  sdg _gate_q_11;
  csx _gate_q_5, _gate_q_6;
  rx(1.3255945721122282) _gate_q_9;
  cx _gate_q_10, _gate_q_14;
  u2(4.9264063230346204, 5.246829550923063) _gate_q_2;
  xx_minus_yy_5070131072(6.006742404750307, 2.3621243289863494) _gate_q_10, _gate_q_16;
  rx(1.5632816227221482) _gate_q_15;
  cu3_5070139952(6.245268418984828, 1.5383209246360021, 5.125486147594498) _gate_q_4, _gate_q_5;
  ch _gate_q_1, _gate_q_13;
  crx(5.394955916039357) _gate_q_9, _gate_q_2;
  csx _gate_q_6, _gate_q_14;
  id _gate_q_7;
  u1(1.2692177824178228) _gate_q_8;
  sx _gate_q_0;
  u2(5.754076805927612, 0.033577572542377004) _gate_q_12;
  cu3_5070141200(4.008104154462512, 0.9250372576896235, 5.664289541091677) _gate_q_3, _gate_q_11;
}
gate ryy_5074203664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7025716391673119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074194304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.511139196614278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074192336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0163806714973065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074195024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.18978857368293603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074205632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7391786886982046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074197952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6778213836161812) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.0373402835886555) _gate_q_1;
  ry(-0.0373402835886555) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6778213836161812) _gate_q_0;
}
gate r_5074197520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7710589325246804, 1.4802103437580612, -1.4802103437580612) _gate_q_0;
}
gate rzz_5074200064(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8243062141386238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074205248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.9008817388687325) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6011362372418958) _gate_q_1;
  ry(-0.6011362372418958) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.9008817388687325) _gate_q_0;
}
gate rxx_5074206640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8168825944959051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074200592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5844471558307307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074203280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8370394782234365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5074197040(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7953376780755793) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7953376780755793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7953376780755793) _gate_q_1;
}
gate r_5074198480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8019647769415201, 3.0937169592634914, -3.0937169592634914) _gate_q_0;
}
gate r_5074196128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.17579706123729238, 1.0761782568033702, -1.0761782568033702) _gate_q_0;
}
gate xx_minus_yy_5074206160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.160040746097982) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.2963726730816987) _gate_q_0;
  ry(-0.2963726730816987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.160040746097982) _gate_q_1;
}
gate cu3_5074202176(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.668176004305996) _gate_q_0;
  u1(-1.3948256464251272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8571150635112508, 0, -4.668176004305996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8571150635112508, 6.063001650731123, 0) _gate_q_1;
}
gate rxx_5073920240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4143954838956643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073926384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7090517691145329) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6893261880983257) _gate_q_1;
  ry(-2.6893261880983257) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7090517691145329) _gate_q_0;
}
gate xx_minus_yy_5072243792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9118371103308502) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5129846142590555) _gate_q_0;
  ry(-2.5129846142590555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9118371103308502) _gate_q_1;
}
gate r_5072251040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.147693238043175, 0.0030274278651138964, -0.0030274278651138964) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  rz(5.566773085901909) _gate_q_4;
  cp(3.320004869527373) _gate_q_9, _gate_q_11;
  id _gate_q_16;
  t _gate_q_12;
  h _gate_q_15;
  rx(3.4623062258475676) _gate_q_14;
  tdg _gate_q_6;
  u3(2.7277884724124726, 0.12473957274678074, 5.93923564450356) _gate_q_2;
  iswap _gate_q_8, _gate_q_1;
  cu(4.045446987830604, 3.4943801886740724, 4.258301404698808, 1.28251838780629) _gate_q_10, _gate_q_0;
  cz _gate_q_3, _gate_q_13;
  cz _gate_q_5, _gate_q_7;
  z _gate_q_15;
  ryy_5074203664(0.7025716391673119) _gate_q_2, _gate_q_10;
  rzx_5074194304(4.511139196614278) _gate_q_0, _gate_q_5;
  csx _gate_q_4, _gate_q_7;
  crx(3.7346749904876666) _gate_q_14, _gate_q_12;
  crx(0.05940930281224872) _gate_q_1, _gate_q_8;
  rxx_5074192336(3.0163806714973065) _gate_q_9, _gate_q_3;
  crz(0.8491608998025472) _gate_q_11, _gate_q_6;
  cu(0.9088350270965909, 6.136028899800718, 0.9504336401936648, 1.8643413788120355) _gate_q_13, _gate_q_16;
  cs _gate_q_16, _gate_q_10;
  crx(3.72010597504189) _gate_q_1, _gate_q_7;
  u3(1.3015430060088626, 6.134723071737214, 1.5404776498775792) _gate_q_2;
  h _gate_q_5;
  ry(0.5428314671993542) _gate_q_3;
  rzx_5074195024(0.18978857368293603) _gate_q_12, _gate_q_13;
  u2(2.567076377570718, 5.620075126694613) _gate_q_9;
  z _gate_q_0;
  s _gate_q_4;
  ry(1.877690108248331) _gate_q_14;
  t _gate_q_8;
  s _gate_q_15;
  sdg _gate_q_11;
  x _gate_q_6;
  rzx_5074205632(0.7391786886982046) _gate_q_15, _gate_q_9;
  xx_plus_yy_5074197952(0.074680567177311, 0.6778213836161812) _gate_q_13, _gate_q_16;
  iswap _gate_q_2, _gate_q_11;
  u3(0.24930515042046747, 3.200603671077302, 4.345058479108522) _gate_q_5;
  id _gate_q_0;
  sdg _gate_q_1;
  crz(4.690276972751486) _gate_q_8, _gate_q_3;
  cry(0.31558513326137) _gate_q_4, _gate_q_7;
  U(0.2534133685190913, 0.9698095937587065, 2.0358409216172895) _gate_q_12;
  r_5074197520(1.7710589325246804, 3.0510066705529577) _gate_q_6;
  cz _gate_q_10, _gate_q_14;
  cu(3.4285799476324854, 5.938923869606043, 4.193644370233614, 0.8109420650265735) _gate_q_3, _gate_q_15;
  sdg _gate_q_13;
  ry(5.366484700879974) _gate_q_8;
  h _gate_q_6;
  rzz_5074200064(0.8243062141386238) _gate_q_0, _gate_q_14;
  cx _gate_q_7, _gate_q_16;
  xx_plus_yy_5074205248(1.2022724744837916, 4.9008817388687325) _gate_q_10, _gate_q_5;
  cp(0.8011863329858517) _gate_q_9, _gate_q_2;
  rxx_5074206640(0.8168825944959051) _gate_q_1, _gate_q_4;
  crx(2.962853434612524) _gate_q_12, _gate_q_11;
  rzx_5074200592(1.5844471558307307) _gate_q_12, _gate_q_7;
  U(3.104194651796997, 1.0611267273946552, 1.75423081035846) _gate_q_8;
  id _gate_q_6;
  iswap _gate_q_16, _gate_q_5;
  rxx_5074203280(1.8370394782234365) _gate_q_9, _gate_q_2;
  s _gate_q_14;
  csdg _gate_q_13, _gate_q_0;
  x _gate_q_10;
  cs _gate_q_4, _gate_q_1;
  rx(5.339014646755073) _gate_q_11;
  p(1.4448944621163464) _gate_q_3;
  h _gate_q_15;
  cx _gate_q_2, _gate_q_12;
  cu1_5074197040(1.5906753561511586) _gate_q_4, _gate_q_13;
  x _gate_q_16;
  cp(5.06689423630128) _gate_q_3, _gate_q_6;
  cry(0.7737627667443531) _gate_q_0, _gate_q_7;
  x _gate_q_14;
  ch _gate_q_1, _gate_q_8;
  z _gate_q_5;
  u1(1.9833872476531618) _gate_q_11;
  y _gate_q_9;
  r_5074198480(1.8019647769415201, 4.664513286058388) _gate_q_15;
  s _gate_q_10;
  u3(5.709826935872407, 2.000045068332645, 3.9881706749469106) _gate_q_13;
  sdg _gate_q_1;
  z _gate_q_11;
  r_5074196128(0.17579706123729238, 2.6469745835982668) _gate_q_7;
  u3(5.571483607969112, 5.809718756119859, 4.812221550374825) _gate_q_9;
  cz _gate_q_5, _gate_q_6;
  id _gate_q_3;
  cry(0.41361530749681724) _gate_q_0, _gate_q_16;
  crx(2.5365938148185183) _gate_q_10, _gate_q_12;
  sxdg _gate_q_8;
  z _gate_q_4;
  iswap _gate_q_14, _gate_q_2;
  sdg _gate_q_15;
  xx_minus_yy_5074206160(0.5927453461633974, 6.160040746097982) _gate_q_2, _gate_q_5;
  cu3_5074202176(5.7142301270225015, 6.063001650731123, 3.2733503578808687) _gate_q_9, _gate_q_3;
  rxx_5073920240(2.4143954838956643) _gate_q_7, _gate_q_4;
  xx_plus_yy_5073926384(5.378652376196651, 0.7090517691145329) _gate_q_12, _gate_q_6;
  y _gate_q_15;
  id _gate_q_11;
  cu(0.49913134969577144, 1.3920184662712394, 4.374016111430955, 6.028188298606229) _gate_q_8, _gate_q_1;
  xx_minus_yy_5072243792(5.025969228518111, 1.9118371103308502) _gate_q_10, _gate_q_0;
  cs _gate_q_14, _gate_q_16;
  r_5072251040(4.147693238043175, 1.5738237546600105) _gate_q_13;
  u1(5.38268872668757) _gate_q_16;
  ry(4.4615458052534755) _gate_q_6;
  sdg _gate_q_14;
  tdg _gate_q_2;
  dcx _gate_q_11, _gate_q_1;
  ecr _gate_q_9, _gate_q_0;
  cz _gate_q_8, _gate_q_5;
  crx(2.9253344775917838) _gate_q_3, _gate_q_7;
  x _gate_q_12;
  sxdg _gate_q_10;
  crz(3.299762169295276) _gate_q_4, _gate_q_13;
  y _gate_q_15;
}