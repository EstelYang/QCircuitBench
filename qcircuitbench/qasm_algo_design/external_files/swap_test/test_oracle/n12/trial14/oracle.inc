gate cu1_5074512224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0578004222560693) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0578004222560693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0578004222560693) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu3_5074512704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.279497821451513) _gate_q_0;
  u1(-0.9688546518642183) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1208408150184903, 0, -4.279497821451513) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1208408150184903, 5.248352473315731, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5074512896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6240527393420083) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0342328396607625) _gate_q_0;
  ry(-3.0342328396607625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6240527393420083) _gate_q_1;
}
gate cu3_5074512512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.344183950595723) _gate_q_0;
  u1(1.6915213406038936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.6042193729198657, 0, -4.344183950595723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.6042193729198657, 2.6526626099918293, 0) _gate_q_1;
}
gate rzz_5074512752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.483267424499604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074513088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.357897456829524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5074512992(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.12379161646353738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074513280(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8944917132992356) _gate_q_0;
  u1(1.7240190093597572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.11734377469079568, 0, -1.8944917132992356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.11734377469079568, 0.17047270393947866, 0) _gate_q_1;
}
gate r_5074510640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7934209415358751, 4.258389411765004, -4.258389411765004) _gate_q_0;
}
gate rzz_5074510352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9691151524438415) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074510400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.544519967516748, 2.37226163227376, -2.37226163227376) _gate_q_0;
}
gate ryy_5074514000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9165193561539042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074513952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.044508937882613, 2.4669942572883254, -2.4669942572883254) _gate_q_0;
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
gate ryy_5074513856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8214604686260865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074514048(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9171073702003296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074514192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.114106365082782, 2.094624275057565, -2.094624275057565) _gate_q_0;
}
gate r_5074513568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5388561395311933, -0.20743084664686018, 0.20743084664686018) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5074513616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.763593321291367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074513376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4465520820012086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  cu1_5074512224(2.1156008445121386) _gate_q_5, _gate_q_0;
  crz(5.567309605963666) _gate_q_4, _gate_q_8;
  cry(3.528858789582923) _gate_q_3, _gate_q_6;
  u3(1.318004960987138, 4.121787646100545, 1.635496240465542) _gate_q_10;
  cu(5.435331415784096, 2.2406303647622288, 4.857636686510455, 4.582283450608253) _gate_q_7, _gate_q_1;
  h _gate_q_11;
  u3(0.9351947258271506, 5.381665959174091, 4.444362729813058) _gate_q_2;
  sxdg _gate_q_9;
  cu3_5074512704(2.2416816300369806, 5.248352473315731, 3.3106431695872947) _gate_q_7, _gate_q_10;
  iswap _gate_q_3, _gate_q_6;
  xx_minus_yy_5074512896(6.068465679321525, 3.6240527393420083) _gate_q_9, _gate_q_8;
  cu3_5074512512(3.2084387458397314, 2.6526626099918293, 6.0357052911996165) _gate_q_4, _gate_q_1;
  rzz_5074512752(2.483267424499604) _gate_q_2, _gate_q_11;
  crz(3.809058728619371) _gate_q_5, _gate_q_0;
  ryy_5074513088(4.357897456829524) _gate_q_1, _gate_q_8;
  ecr _gate_q_0, _gate_q_7;
  ryy_5074512992(0.12379161646353738) _gate_q_10, _gate_q_5;
  cu3_5074513280(0.23468754938159136, 0.17047270393947866, 3.6185107226589928) _gate_q_6, _gate_q_11;
  rx(5.029463545328097) _gate_q_4;
  cry(4.71242858833417) _gate_q_3, _gate_q_2;
  sxdg _gate_q_9;
  cu(5.7120383930207606, 5.656629403095707, 5.583233978802847, 5.5508676816497635) _gate_q_0, _gate_q_4;
  r_5074510640(0.7934209415358751, 5.8291857385599) _gate_q_10;
  rzz_5074510352(2.9691151524438415) _gate_q_11, _gate_q_9;
  rz(2.6186110943011625) _gate_q_5;
  r_5074510400(5.544519967516748, 3.9430579590686565) _gate_q_8;
  crz(2.3846573396668) _gate_q_7, _gate_q_6;
  cry(5.588715226786547) _gate_q_1, _gate_q_3;
  s _gate_q_2;
  crz(1.417863798434695) _gate_q_2, _gate_q_5;
  U(0.3057110733987517, 0.7617477138404503, 0.5465244070062174) _gate_q_0;
  ryy_5074514000(2.9165193561539042) _gate_q_10, _gate_q_11;
  cy _gate_q_8, _gate_q_9;
  r_5074513952(5.044508937882613, 4.037790584083222) _gate_q_1;
  csx _gate_q_3, _gate_q_6;
  cx _gate_q_7, _gate_q_4;
  sx _gate_q_4;
  z _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  u1(5.67453892392253) _gate_q_8;
  ecr _gate_q_9, _gate_q_10;
  ecr _gate_q_2, _gate_q_0;
  ryy_5074513856(2.8214604686260865) _gate_q_11, _gate_q_7;
  rz(5.012256053486105) _gate_q_6;
  cu(6.269900909905888, 4.7376741219827, 1.8094876316820816, 2.924538107981559) _gate_q_5, _gate_q_9;
  csx _gate_q_11, _gate_q_0;
  rzz_5074514048(2.9171073702003296) _gate_q_3, _gate_q_10;
  cz _gate_q_6, _gate_q_4;
  cx _gate_q_1, _gate_q_7;
  crz(1.3866721505926178) _gate_q_8, _gate_q_2;
  r_5074514192(5.114106365082782, 3.6654206018524618) _gate_q_3;
  cp(2.228899849127938) _gate_q_7, _gate_q_9;
  u2(6.279978001493057, 1.8099012842192241) _gate_q_11;
  s _gate_q_0;
  u2(0.8839841810383768, 1.822575890668828) _gate_q_2;
  r_5074513568(2.5388561395311933, 1.3633654801480364) _gate_q_5;
  sdg _gate_q_4;
  cs _gate_q_10, _gate_q_8;
  rxx_5074513616(4.763593321291367) _gate_q_6, _gate_q_1;
  rzz_5074513376(3.4465520820012086) _gate_q_6, _gate_q_2;
  id _gate_q_1;
  p(1.435655448962796) _gate_q_4;
  u1(2.7787516330975413) _gate_q_9;
  ecr _gate_q_7, _gate_q_8;
  u3(4.122399916390745, 0.5756835001698084, 5.4879270450793785) _gate_q_0;
  sx _gate_q_11;
  t _gate_q_5;
  t _gate_q_3;
  rx(3.450750779850866) _gate_q_10;
  rx(4.460426039168779) _gate_q_0;
  cs _gate_q_2, _gate_q_7;
  u3(3.6574213141864114, 3.740634505554252, 5.886911821107162) _gate_q_11;
  cz _gate_q_10, _gate_q_1;
  id _gate_q_6;
  rz(1.7374226129628303) _gate_q_9;
  cu(3.444797215341651, 2.0868398650418727, 0.7948763345082552, 1.52121726288841) _gate_q_3, _gate_q_4;
  csx _gate_q_5, _gate_q_8;
}
gate ryy_5074517456(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.373832968704394) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074517744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5918694256087935, -0.20650078948588213, 0.20650078948588213) _gate_q_0;
}
gate cu3_5074517696(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.154281236063049) _gate_q_0;
  u1(-0.043186602254833506) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2099867970447535, 0, -5.154281236063049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2099867970447535, 5.197467838317882, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5074517888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.189849193532971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074517984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.91756968145462) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9887217668388856) _gate_q_1;
  ry(-0.9887217668388856) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.91756968145462) _gate_q_0;
}
gate r_5074517792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.054945405458227, -1.0568588484404748, 1.0568588484404748) _gate_q_0;
}
gate rzz_5074517072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.158298814216888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074287792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9770168779020505) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.04401070989316902) _gate_q_1;
  ry(-0.04401070989316902) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9770168779020505) _gate_q_0;
}
gate rzx_5074275552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2359714759972114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074960656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.854565558301748, 0.9013446330130548, -0.9013446330130548) _gate_q_0;
}
gate r_5074960704(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9183774633751018, 3.9705723682794085, -3.9705723682794085) _gate_q_0;
}
gate cu3_5074961136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0775324110228173) _gate_q_0;
  u1(-0.21304749567399894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.705893517521877, 0, -3.0775324110228173) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.705893517521877, 3.290579906696816, 0) _gate_q_1;
}
gate cu1_5074961472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2564836979352538) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2564836979352538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2564836979352538) _gate_q_1;
}
gate r_5074961568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7776765656301796, 2.670735433451137, -2.670735433451137) _gate_q_0;
}
gate rxx_5074961664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.016806977146992) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5074961808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2391981500467284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  ryy_5074517456(5.373832968704394) _gate_q_4, _gate_q_11;
  cry(5.415901424996946) _gate_q_9, _gate_q_1;
  sx _gate_q_7;
  u3(0.8174126730248973, 3.06753883856933, 4.86451175838377) _gate_q_8;
  ecr _gate_q_6, _gate_q_2;
  s _gate_q_5;
  r_5074517744(0.5918694256087935, 1.3642955373090144) _gate_q_10;
  iswap _gate_q_3, _gate_q_0;
  cu3_5074517696(2.419973594089507, 5.197467838317882, 5.111094633808215) _gate_q_11, _gate_q_2;
  csdg _gate_q_7, _gate_q_0;
  rxx_5074517888(5.189849193532971) _gate_q_3, _gate_q_10;
  xx_plus_yy_5074517984(1.9774435336777711, 4.91756968145462) _gate_q_1, _gate_q_6;
  t _gate_q_5;
  U(4.5743167715465365, 1.1661321424035584, 5.131404010626975) _gate_q_4;
  r_5074517792(6.054945405458227, 0.5139374783544218) _gate_q_8;
  sxdg _gate_q_9;
  rzz_5074517072(3.158298814216888) _gate_q_1, _gate_q_7;
  tdg _gate_q_11;
  h _gate_q_9;
  u3(0.9538447388564107, 4.265482324833639, 4.559356105006341) _gate_q_10;
  cu(1.5055801372676014, 3.5282800684899436, 1.0351054346705482, 5.039814515892403) _gate_q_0, _gate_q_6;
  cy _gate_q_4, _gate_q_3;
  rz(4.981960060420726) _gate_q_8;
  cx _gate_q_5, _gate_q_2;
  iswap _gate_q_3, _gate_q_1;
  cp(6.033095118170205) _gate_q_2, _gate_q_9;
  cy _gate_q_8, _gate_q_5;
  ry(2.5528434884474347) _gate_q_0;
  cu(3.040363480015761, 1.5537695054928171, 5.920853102810653, 4.71122532112759) _gate_q_6, _gate_q_4;
  sxdg _gate_q_11;
  ecr _gate_q_10, _gate_q_7;
  y _gate_q_8;
  xx_plus_yy_5074287792(0.08802141978633804, 2.9770168779020505) _gate_q_10, _gate_q_6;
  rzx_5074275552(1.2359714759972114) _gate_q_5, _gate_q_3;
  iswap _gate_q_9, _gate_q_0;
  u2(5.397835075577791, 0.6727683178019037) _gate_q_4;
  ry(4.174768837384598) _gate_q_2;
  sxdg _gate_q_1;
  csx _gate_q_11, _gate_q_7;
  u3(3.4153803638291427, 6.279274960279482, 0.608028456109901) _gate_q_7;
  u1(5.8176582194704) _gate_q_8;
  r_5074960656(2.854565558301748, 2.4721409598079513) _gate_q_1;
  swap _gate_q_6, _gate_q_5;
  id _gate_q_10;
  r_5074960704(1.9183774633751018, 5.541368695074305) _gate_q_4;
  u2(2.456539277421559, 4.542493023860974) _gate_q_2;
  tdg _gate_q_3;
  cy _gate_q_0, _gate_q_9;
  s _gate_q_11;
  x _gate_q_11;
  cu(0.8317660660100727, 2.7628289748916064, 3.0940682167622966, 0.04102391894945484) _gate_q_8, _gate_q_3;
  iswap _gate_q_1, _gate_q_4;
  p(1.508609791489435) _gate_q_10;
  csx _gate_q_9, _gate_q_7;
  sxdg _gate_q_6;
  csdg _gate_q_2, _gate_q_5;
  z _gate_q_0;
  cy _gate_q_6, _gate_q_4;
  sxdg _gate_q_2;
  cry(5.037788306945858) _gate_q_3, _gate_q_5;
  crx(2.680781516644589) _gate_q_11, _gate_q_1;
  cu3_5074961136(1.411787035043754, 3.290579906696816, 2.864484915348818) _gate_q_9, _gate_q_10;
  csdg _gate_q_8, _gate_q_7;
  y _gate_q_0;
  rz(4.461817973187382) _gate_q_5;
  p(3.454517461649608) _gate_q_1;
  rz(3.187506662259061) _gate_q_9;
  cu(5.432141383386256, 0.7693846258542714, 4.303041503502795, 2.6680236511158366) _gate_q_11, _gate_q_7;
  y _gate_q_6;
  cx _gate_q_0, _gate_q_10;
  cu1_5074961472(2.5129673958705077) _gate_q_3, _gate_q_8;
  r_5074961568(3.7776765656301796, 4.241531760246033) _gate_q_2;
  rz(3.797289435091085) _gate_q_4;
  rxx_5074961664(1.016806977146992) _gate_q_6, _gate_q_11;
  U(0.22778088521727233, 4.333270291110071, 2.6831147564514994) _gate_q_5;
  s _gate_q_3;
  u1(0.5477153043166731) _gate_q_4;
  dcx _gate_q_0, _gate_q_8;
  rzx_5074961808(3.2391981500467284) _gate_q_2, _gate_q_10;
  cz _gate_q_9, _gate_q_7;
  sxdg _gate_q_1;
}