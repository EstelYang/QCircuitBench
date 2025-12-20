gate cu1_5108218720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.46555514671599) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.46555514671599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.46555514671599) _gate_q_1;
}
gate r_5108217232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.072195370077308, 4.61195574360419, -4.61195574360419) _gate_q_0;
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
gate rzz_5108219344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.12434812578534564) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_4669146848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3690754063786799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_4669147952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.450751352359336) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1624931103840255) _gate_q_0;
  ry(-1.1624931103840255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.450751352359336) _gate_q_1;
}
gate rxx_5108205712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2203708328203895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_4669147568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.6878052859433166) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6748217188632447) _gate_q_0;
  ry(-0.6748217188632447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.6878052859433166) _gate_q_1;
}
gate rxx_4669148192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.604611490409984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116263888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.07524652249552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116261248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.682532979407679) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5116261296(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4350469467972471) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4350469467972471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4350469467972471) _gate_q_1;
}
gate cu1_5116260960(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6272323732355904) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6272323732355904) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6272323732355904) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5116261056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.726632392540965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5116261824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0162533871820092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  u2(1.8342847009920047, 2.8370293607202437) _gate_q_8;
  U(5.907255977211273, 2.568509009211409, 4.124392914289773) _gate_q_11;
  rx(1.5811578543929206) _gate_q_5;
  rx(0.3452215083119047) _gate_q_4;
  t _gate_q_0;
  cu1_5108218720(2.93111029343198) _gate_q_10, _gate_q_7;
  crz(2.9967907897075645) _gate_q_2, _gate_q_6;
  cry(4.778761450031216) _gate_q_1, _gate_q_3;
  x _gate_q_9;
  sdg _gate_q_7;
  ch _gate_q_11, _gate_q_10;
  x _gate_q_8;
  u3(1.2025681116681743, 1.0687098073272019, 4.543368430146641) _gate_q_1;
  r_5108217232(2.072195370077308, 6.182752070399086) _gate_q_3;
  id _gate_q_0;
  ecr _gate_q_2, _gate_q_4;
  rzz_5108219344(0.12434812578534564) _gate_q_6, _gate_q_5;
  sdg _gate_q_9;
  id _gate_q_5;
  tdg _gate_q_4;
  cry(6.193013478247392) _gate_q_7, _gate_q_3;
  U(4.5355548865750395, 5.192361010007988, 5.604558436903975) _gate_q_9;
  ecr _gate_q_10, _gate_q_8;
  cu(3.5562567880658653, 0.619949186860439, 2.4156880045879627, 1.2577709062672306) _gate_q_0, _gate_q_1;
  sdg _gate_q_6;
  cry(2.2032783782190495) _gate_q_11, _gate_q_2;
  u2(5.248252023612808, 2.1832601678505306) _gate_q_9;
  tdg _gate_q_2;
  ecr _gate_q_3, _gate_q_4;
  ryy_4669146848(1.3690754063786799) _gate_q_8, _gate_q_10;
  cx _gate_q_0, _gate_q_5;
  csx _gate_q_11, _gate_q_6;
  cs _gate_q_1, _gate_q_7;
  sdg _gate_q_0;
  rz(0.9078195692002659) _gate_q_8;
  xx_minus_yy_4669147952(2.324986220768051, 5.450751352359336) _gate_q_9, _gate_q_11;
  sxdg _gate_q_6;
  x _gate_q_7;
  rxx_5108205712(4.2203708328203895) _gate_q_4, _gate_q_1;
  xx_minus_yy_4669147568(1.3496434377264894, 2.6878052859433166) _gate_q_5, _gate_q_10;
  swap _gate_q_2, _gate_q_3;
  y _gate_q_5;
  rxx_4669148192(5.604611490409984) _gate_q_7, _gate_q_10;
  ch _gate_q_11, _gate_q_2;
  u2(6.047847826832942, 1.1920923364697489) _gate_q_8;
  csx _gate_q_3, _gate_q_9;
  sdg _gate_q_0;
  p(5.775862957840373) _gate_q_4;
  rzx_5116263888(6.07524652249552) _gate_q_1, _gate_q_6;
  rzz_5116261248(0.682532979407679) _gate_q_5, _gate_q_7;
  cu(3.024029952036904, 0.808142072384103, 3.5799452884277776, 5.285186357015467) _gate_q_2, _gate_q_8;
  id _gate_q_6;
  id _gate_q_1;
  u2(4.300375731929941, 2.237341756788138) _gate_q_4;
  u3(2.2279461430442953, 5.054863717492928, 2.369450180954249) _gate_q_11;
  u3(0.5503425119567706, 3.337937526670207, 4.827329383251296) _gate_q_9;
  y _gate_q_3;
  crx(3.9368477428533173) _gate_q_10, _gate_q_0;
  cu1_5116261296(0.8700938935944942) _gate_q_7, _gate_q_4;
  x _gate_q_8;
  id _gate_q_5;
  cy _gate_q_2, _gate_q_0;
  p(0.44343404508929923) _gate_q_3;
  cz _gate_q_10, _gate_q_6;
  sxdg _gate_q_9;
  crx(2.2853040829067433) _gate_q_11, _gate_q_1;
  sx _gate_q_9;
  cu1_5116260960(3.254464746471181) _gate_q_5, _gate_q_7;
  y _gate_q_1;
  cy _gate_q_3, _gate_q_2;
  dcx _gate_q_4, _gate_q_10;
  rzz_5116261056(2.726632392540965) _gate_q_8, _gate_q_6;
  p(3.870781386165187) _gate_q_11;
  h _gate_q_0;
  rz(5.006124040321626) _gate_q_8;
  z _gate_q_3;
  tdg _gate_q_2;
  ryy_5116261824(1.0162533871820092) _gate_q_4, _gate_q_6;
  swap _gate_q_1, _gate_q_5;
  rz(5.220183312851282) _gate_q_11;
  y _gate_q_10;
  dcx _gate_q_7, _gate_q_0;
  rz(2.7928491361710006) _gate_q_9;
}
gate rxx_5116253376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4687299060025873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116262832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.405621641135071) _gate_q_0;
  u1(1.2998335468366513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.780578926546737, 0, -4.405621641135071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.780578926546737, 3.1057880942984197, 0) _gate_q_1;
}
gate rzz_5116251264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.301549470107081) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116252368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.804275645736304) _gate_q_0;
  u1(-0.02390727396172876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.894271804131533, 0, -5.804275645736304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.894271804131533, 5.828182919698032, 0) _gate_q_1;
}
gate rzz_5116250976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.955184232732942) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116251456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.658324347054231) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5116251552(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.158664015429466) _gate_q_0;
  u1(2.0220202697804344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.137611551117118, 0, -2.158664015429466) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.137611551117118, 0.1366437456490319, 0) _gate_q_1;
}
gate ryy_5116252272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4357879117115555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116252992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5793822612643493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116251504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.22418762323686883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116253088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.803214759118854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116251936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.8445839780277655) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7284305624751073) _gate_q_0;
  ry(-1.7284305624751073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.8445839780277655) _gate_q_1;
}
gate ryy_5116252128(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.197036678273892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5116251888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.321877918801296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5116248768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.475932874776559) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5693180396909785) _gate_q_0;
  ry(-2.5693180396909785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.475932874776559) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  sdg _gate_q_1;
  rxx_5116253376(2.4687299060025873) _gate_q_2, _gate_q_11;
  sdg _gate_q_8;
  cu3_5116262832(5.561157853093474, 3.1057880942984197, 5.705455187971722) _gate_q_10, _gate_q_6;
  p(4.268989553352142) _gate_q_4;
  cs _gate_q_5, _gate_q_9;
  cp(1.0669326843200235) _gate_q_3, _gate_q_7;
  ry(0.6050244059620652) _gate_q_0;
  u1(0.14123465103530164) _gate_q_11;
  rzz_5116251264(5.301549470107081) _gate_q_2, _gate_q_3;
  x _gate_q_1;
  tdg _gate_q_4;
  crx(4.819364276760953) _gate_q_10, _gate_q_6;
  ch _gate_q_8, _gate_q_5;
  cp(1.3601127188455502) _gate_q_9, _gate_q_7;
  s _gate_q_0;
  sx _gate_q_11;
  crz(3.431049562098994) _gate_q_7, _gate_q_8;
  csx _gate_q_1, _gate_q_4;
  u3(4.905705923470154, 3.6474059622607395, 0.5224649778358411) _gate_q_6;
  cu3_5116252368(3.788543608263066, 5.828182919698032, 5.780368371774575) _gate_q_2, _gate_q_5;
  sx _gate_q_10;
  dcx _gate_q_3, _gate_q_9;
  u3(4.37286173351687, 4.806628808821098, 1.0285543726701132) _gate_q_0;
  rzz_5116250976(4.955184232732942) _gate_q_0, _gate_q_4;
  sdg _gate_q_6;
  rxx_5116251456(4.658324347054231) _gate_q_1, _gate_q_8;
  cu3_5116251552(4.275223102234236, 0.1366437456490319, 4.1806842852099) _gate_q_9, _gate_q_7;
  u2(1.3044266872626946, 2.4467879960586423) _gate_q_5;
  crz(4.199538743152659) _gate_q_11, _gate_q_10;
  swap _gate_q_2, _gate_q_3;
  x _gate_q_0;
  u3(6.2365801698869126, 1.4880479712222556, 2.768109297582537) _gate_q_8;
  cp(2.4412050377280576) _gate_q_4, _gate_q_5;
  ryy_5116252272(3.4357879117115555) _gate_q_1, _gate_q_7;
  rzx_5116252992(1.5793822612643493) _gate_q_10, _gate_q_9;
  cu(1.4921764809901332, 2.745790597726275, 2.983629074877731, 3.7936504615652598) _gate_q_3, _gate_q_11;
  rx(5.055692640712471) _gate_q_6;
  id _gate_q_2;
  rzz_5116251504(0.22418762323686883) _gate_q_1, _gate_q_10;
  rxx_5116253088(5.803214759118854) _gate_q_9, _gate_q_8;
  t _gate_q_2;
  xx_minus_yy_5116251936(3.4568611249502146, 4.8445839780277655) _gate_q_11, _gate_q_6;
  cu(3.5245344107728487, 3.716178391314282, 4.5213545844234675, 0.06386928333336726) _gate_q_5, _gate_q_7;
  ryy_5116252128(4.197036678273892) _gate_q_4, _gate_q_0;
  id _gate_q_3;
  crx(4.740267589306601) _gate_q_6, _gate_q_2;
  csx _gate_q_11, _gate_q_5;
  cu(6.2668555747386945, 1.5255390385771253, 3.861972161211656, 4.550369287587519) _gate_q_8, _gate_q_0;
  s _gate_q_3;
  h _gate_q_1;
  tdg _gate_q_9;
  u1(4.571253938467712) _gate_q_7;
  rx(0.07561122610692377) _gate_q_4;
  id _gate_q_10;
  id _gate_q_3;
  ch _gate_q_5, _gate_q_6;
  ecr _gate_q_9, _gate_q_1;
  tdg _gate_q_7;
  z _gate_q_4;
  rzx_5116251888(4.321877918801296) _gate_q_10, _gate_q_0;
  s _gate_q_11;
  h _gate_q_8;
  sdg _gate_q_2;
  u3(1.1754784981264506, 6.0442583809229005, 3.108292785948071) _gate_q_8;
  csx _gate_q_4, _gate_q_3;
  sdg _gate_q_9;
  crz(1.266154804220001) _gate_q_10, _gate_q_7;
  x _gate_q_0;
  sdg _gate_q_2;
  id _gate_q_6;
  swap _gate_q_11, _gate_q_1;
  s _gate_q_5;
  sx _gate_q_6;
  U(2.17317328447495, 0.7763686922734842, 1.679559474707149) _gate_q_3;
  cs _gate_q_10, _gate_q_8;
  xx_minus_yy_5116248768(5.138636079381957, 4.475932874776559) _gate_q_11, _gate_q_7;
  csdg _gate_q_5, _gate_q_9;
  cy _gate_q_2, _gate_q_4;
  u3(3.4927112009708914, 1.7352080286955796, 6.263842749612896) _gate_q_0;
  rz(3.945637157609906) _gate_q_1;
}