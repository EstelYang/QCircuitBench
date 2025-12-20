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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5105511472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9938145231160753) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105516368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.902350044408826) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.077589399283647) _gate_q_1;
  ry(-1.077589399283647) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.902350044408826) _gate_q_0;
}
gate cu3_5105512912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.374114201981331) _gate_q_0;
  u1(-1.4850479656504225) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.624529922659516, 0, -4.374114201981331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.624529922659516, 5.859162167631753, 0) _gate_q_1;
}
gate cu3_5105507680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.913710230911427) _gate_q_0;
  u1(-2.220278977917615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8129314007846404, 0, -3.913710230911427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8129314007846404, 6.133989208829042, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105505232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1800965819911606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105501536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1338436054446717) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1338436054446717) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1338436054446717) _gate_q_1;
}
gate r_5106392032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.55884261157691, 3.738049491548775, -3.738049491548775) _gate_q_0;
}
gate cu3_5106390160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.1212333681582356) _gate_q_0;
  u1(1.8373680862553272) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.38882776007262676, 0, -3.1212333681582356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.38882776007262676, 1.2838652819029082, 0) _gate_q_1;
}
gate rxx_5106398800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.560349714810827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5106396496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.449891379161234) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.449891379161234) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.449891379161234) _gate_q_1;
}
gate rzz_5105756944(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9786240075751901) _gate_q_1;
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
gate rxx_5105752432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2355749673329735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105757472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.091353016687618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105761216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.726838833877681) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105753200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.91054201166315) _gate_q_0;
  u1(-0.3546971908635046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1726150878594361, 0, -2.91054201166315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1726150878594361, 3.265239202526655, 0) _gate_q_1;
}
gate xx_minus_yy_5105760688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.525692663935328) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.75072906124259) _gate_q_0;
  ry(-2.75072906124259) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.525692663935328) _gate_q_1;
}
gate ryy_5105750800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7980642026540121) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105756656(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.709361978253307) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  x _gate_q_5;
  u1(2.0596812275887566) _gate_q_18;
  ch _gate_q_16, _gate_q_1;
  csdg _gate_q_14, _gate_q_4;
  cu(2.6121462118153627, 2.0672591290700857, 2.6323905190984567, 4.888202941903226) _gate_q_7, _gate_q_17;
  cx _gate_q_19, _gate_q_0;
  csx _gate_q_8, _gate_q_12;
  cs _gate_q_2, _gate_q_3;
  id _gate_q_9;
  x _gate_q_11;
  t _gate_q_6;
  rxx_5105511472(2.9938145231160753) _gate_q_15, _gate_q_13;
  ry(5.1338196044758435) _gate_q_10;
  tdg _gate_q_13;
  U(3.5902562391084687, 3.801208612153484, 0.0896006415418375) _gate_q_8;
  dcx _gate_q_17, _gate_q_10;
  id _gate_q_11;
  xx_plus_yy_5105516368(2.155178798567294, 5.902350044408826) _gate_q_1, _gate_q_12;
  h _gate_q_3;
  cu3_5105512912(5.249059845319032, 5.859162167631753, 2.8890662363309083) _gate_q_6, _gate_q_18;
  s _gate_q_19;
  u2(4.555551117465321, 1.8007732208012848) _gate_q_9;
  cu3_5105507680(3.625862801569281, 6.133989208829042, 1.693431252993812) _gate_q_4, _gate_q_2;
  cs _gate_q_16, _gate_q_0;
  sx _gate_q_14;
  iswap _gate_q_5, _gate_q_7;
  sx _gate_q_15;
  swap _gate_q_18, _gate_q_0;
  ryy_5105505232(1.1800965819911606) _gate_q_8, _gate_q_3;
  cy _gate_q_6, _gate_q_14;
  crx(2.6183908851288358) _gate_q_17, _gate_q_11;
  crx(3.1073249914263084) _gate_q_12, _gate_q_16;
  rz(3.867142570127586) _gate_q_15;
  rx(5.6200184792859265) _gate_q_13;
  crz(1.0904975289384826) _gate_q_2, _gate_q_9;
  cu1_5105501536(2.2676872108893433) _gate_q_5, _gate_q_19;
  swap _gate_q_7, _gate_q_10;
  rz(0.9432591075110641) _gate_q_4;
  U(0.7549553810533873, 5.56533766188609, 4.975817682297534) _gate_q_1;
  y _gate_q_18;
  x _gate_q_15;
  csdg _gate_q_1, _gate_q_10;
  r_5106392032(5.55884261157691, 5.308845818343672) _gate_q_7;
  u3(2.506454107981601, 5.384229474944764, 0.410791113351716) _gate_q_9;
  cry(1.5358010979418686) _gate_q_11, _gate_q_14;
  sxdg _gate_q_8;
  csx _gate_q_3, _gate_q_12;
  cu3_5106390160(0.7776555201452535, 1.2838652819029082, 4.958601454413563) _gate_q_17, _gate_q_4;
  csx _gate_q_2, _gate_q_0;
  rxx_5106398800(5.560349714810827) _gate_q_19, _gate_q_13;
  tdg _gate_q_5;
  u1(1.1984558848518703) _gate_q_6;
  u1(2.0154318792431636) _gate_q_16;
  id _gate_q_7;
  cx _gate_q_9, _gate_q_1;
  cu1_5106396496(4.899782758322468) _gate_q_13, _gate_q_5;
  cx _gate_q_4, _gate_q_16;
  sx _gate_q_17;
  cx _gate_q_10, _gate_q_6;
  p(5.385971296635117) _gate_q_18;
  y _gate_q_19;
  rzz_5105756944(0.9786240075751901) _gate_q_8, _gate_q_14;
  u1(5.993846949539421) _gate_q_11;
  u1(3.575765481463295) _gate_q_2;
  csx _gate_q_15, _gate_q_0;
  u3(0.8542459492849119, 0.4909270772601249, 4.005650462003941) _gate_q_3;
  x _gate_q_12;
  ecr _gate_q_4, _gate_q_1;
  tdg _gate_q_9;
  rz(3.907776779062212) _gate_q_10;
  ecr _gate_q_3, _gate_q_18;
  cs _gate_q_19, _gate_q_14;
  sxdg _gate_q_16;
  rz(4.025754863903621) _gate_q_6;
  cry(4.19856406607808) _gate_q_5, _gate_q_17;
  rxx_5105752432(6.2355749673329735) _gate_q_7, _gate_q_8;
  s _gate_q_11;
  rx(3.6036930154478397) _gate_q_15;
  dcx _gate_q_0, _gate_q_13;
  ch _gate_q_12, _gate_q_2;
  u3(6.050702971738135, 5.045871266789099, 1.6146451524772172) _gate_q_17;
  rx(2.6184110537346195) _gate_q_12;
  u2(2.36500886714038, 5.838811615966396) _gate_q_19;
  tdg _gate_q_6;
  ry(5.721483301220734) _gate_q_10;
  t _gate_q_4;
  cx _gate_q_18, _gate_q_15;
  dcx _gate_q_2, _gate_q_11;
  x _gate_q_9;
  csx _gate_q_16, _gate_q_14;
  sxdg _gate_q_8;
  h _gate_q_0;
  p(6.001522361826709) _gate_q_13;
  swap _gate_q_3, _gate_q_1;
  y _gate_q_7;
  s _gate_q_5;
  U(4.608618518705123, 6.232323567821441, 4.44310945778835) _gate_q_2;
  p(2.3851081049893987) _gate_q_19;
  cp(2.574627959999051) _gate_q_11, _gate_q_16;
  rz(2.9727250113624635) _gate_q_5;
  ch _gate_q_13, _gate_q_15;
  ryy_5105757472(6.091353016687618) _gate_q_3, _gate_q_6;
  sdg _gate_q_12;
  t _gate_q_4;
  u3(6.141019428349799, 5.037470559101726, 2.980804651694879) _gate_q_8;
  h _gate_q_14;
  ryy_5105761216(0.726838833877681) _gate_q_9, _gate_q_0;
  id _gate_q_7;
  ecr _gate_q_1, _gate_q_17;
  cy _gate_q_18, _gate_q_10;
  cz _gate_q_16, _gate_q_9;
  swap _gate_q_3, _gate_q_13;
  id _gate_q_15;
  cu(0.6878293249642716, 1.8822552865073767, 3.767416823686976, 5.81654385327152) _gate_q_8, _gate_q_1;
  t _gate_q_5;
  p(1.6571866595204208) _gate_q_12;
  p(4.076222854611828) _gate_q_18;
  sdg _gate_q_10;
  cy _gate_q_17, _gate_q_2;
  cu3_5105753200(2.3452301757188723, 3.265239202526655, 2.5558448207996456) _gate_q_4, _gate_q_6;
  cy _gate_q_19, _gate_q_14;
  cp(0.22606015503127871) _gate_q_0, _gate_q_7;
  u2(0.11530751232916368, 0.9189716005761747) _gate_q_11;
  xx_minus_yy_5105760688(5.50145812248518, 5.525692663935328) _gate_q_10, _gate_q_8;
  ry(1.253085595995366) _gate_q_2;
  crz(5.685925698032008) _gate_q_0, _gate_q_7;
  x _gate_q_15;
  ryy_5105750800(1.7980642026540121) _gate_q_19, _gate_q_1;
  sdg _gate_q_12;
  crx(2.8688449007885675) _gate_q_6, _gate_q_16;
  crz(6.155951955009531) _gate_q_13, _gate_q_11;
  swap _gate_q_5, _gate_q_9;
  ryy_5105756656(4.709361978253307) _gate_q_4, _gate_q_14;
  cz _gate_q_3, _gate_q_18;
  s _gate_q_17;
}
gate rzx_5105760928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.15991861540894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105747008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.668275046068371) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105754064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.10514324992431) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105747248(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.896444486152103) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5105758672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.085175857334327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105750848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2442427211489182) _gate_q_0;
  u1(-0.6638760209439891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.30082135127381765, 0, -1.2442427211489182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.30082135127381765, 1.9081187420929073, 0) _gate_q_1;
}
gate cu1_5105752144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.416672924572484) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.416672924572484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.416672924572484) _gate_q_1;
}
gate ryy_5105751424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3101500007562985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105752336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.056281543209334) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6328623765841794) _gate_q_0;
  ry(-1.6328623765841794) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.056281543209334) _gate_q_1;
}
gate rxx_5105750080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.37354975921017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105746912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5555361645135535) _gate_q_0;
  u1(2.37549135507902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.843419840807461, 0, -2.5555361645135535) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.843419840807461, 0.18004480943453366, 0) _gate_q_1;
}
gate cu1_5105752864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.283300704175249) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.283300704175249) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.283300704175249) _gate_q_1;
}
gate xx_minus_yy_5105751040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.228486101187998) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.817858688375465) _gate_q_0;
  ry(-0.817858688375465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.228486101187998) _gate_q_1;
}
gate xx_plus_yy_5105754304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.912479130133601) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4393977415862773) _gate_q_1;
  ry(-2.4393977415862773) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.912479130133601) _gate_q_0;
}
gate rxx_5105761936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3166859141722953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105757376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2711008753574693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105755936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.090690136886509) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.794071390924732) _gate_q_1;
  ry(-2.794071390924732) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.090690136886509) _gate_q_0;
}
gate xx_minus_yy_5105760880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5300063952391023) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.851825046022976) _gate_q_0;
  ry(-1.851825046022976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5300063952391023) _gate_q_1;
}
gate ryy_5105757088(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.148968800129879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105749168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4442158644435889) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.15411442988056) _gate_q_0;
  ry(-2.15411442988056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4442158644435889) _gate_q_1;
}
gate rzz_5105754352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.356255064827065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105750656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.689038219440077) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105761264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7211569517976802) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7211569517976802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7211569517976802) _gate_q_1;
}
gate rzz_5105756368(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.043988989173032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105750272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.192429515592402) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105750512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8361810722005576) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8361810722005576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8361810722005576) _gate_q_1;
}
gate rzz_5105753584(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.1432435812384014) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105749600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.672481240629941) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105751760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8139944017919127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105749504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.14470579724264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105759968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.103430151335745, 1.5790023068905508, -1.5790023068905508) _gate_q_0;
}
gate rzz_5105758480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.735767634512381) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105746144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.166358106040169) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6846085535239654) _gate_q_1;
  ry(-0.6846085535239654) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.166358106040169) _gate_q_0;
}
gate xx_plus_yy_5105750032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.13319710106122612) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8813355778069176) _gate_q_1;
  ry(-1.8813355778069176) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.13319710106122612) _gate_q_0;
}
gate xx_minus_yy_5105757760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.42021685452617463) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.38923076127611) _gate_q_0;
  ry(-1.38923076127611) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.42021685452617463) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  h _gate_q_11;
  U(1.599265933173771, 0.866478990239104, 0.8905268498483708) _gate_q_10;
  id _gate_q_1;
  p(2.9261170992310213) _gate_q_17;
  cz _gate_q_18, _gate_q_7;
  cry(6.278005355105387) _gate_q_2, _gate_q_5;
  cz _gate_q_16, _gate_q_15;
  rzx_5105760928(6.15991861540894) _gate_q_14, _gate_q_13;
  u2(1.3321294290099177, 5.2465438851025485) _gate_q_9;
  s _gate_q_12;
  U(3.0352730070539535, 4.086723905324602, 2.6357637973413715) _gate_q_19;
  csx _gate_q_6, _gate_q_4;
  rz(4.619643793448596) _gate_q_8;
  id _gate_q_3;
  sxdg _gate_q_0;
  cp(4.330577920105901) _gate_q_8, _gate_q_15;
  csdg _gate_q_11, _gate_q_18;
  ecr _gate_q_14, _gate_q_4;
  sdg _gate_q_6;
  sdg _gate_q_0;
  cx _gate_q_17, _gate_q_19;
  cx _gate_q_9, _gate_q_3;
  rzx_5105747008(3.668275046068371) _gate_q_12, _gate_q_5;
  ryy_5105754064(2.10514324992431) _gate_q_1, _gate_q_16;
  rx(3.994603955126901) _gate_q_2;
  cu(3.9168029456447093, 6.254344773839782, 2.1830883618049715, 1.5193441406648187) _gate_q_10, _gate_q_7;
  h _gate_q_13;
  u3(5.688324125931853, 2.8449922324354264, 5.140828133426961) _gate_q_12;
  tdg _gate_q_11;
  h _gate_q_9;
  rzz_5105747248(4.896444486152103) _gate_q_1, _gate_q_6;
  csx _gate_q_4, _gate_q_7;
  rzx_5105758672(6.085175857334327) _gate_q_0, _gate_q_16;
  cu3_5105750848(0.6016427025476353, 1.9081187420929073, 0.5803667002049292) _gate_q_18, _gate_q_2;
  cu(4.786958342797343, 3.307795758221735, 0.26026885960482754, 4.210732629729291) _gate_q_15, _gate_q_19;
  ch _gate_q_13, _gate_q_8;
  cu1_5105752144(0.833345849144968) _gate_q_17, _gate_q_14;
  ryy_5105751424(1.3101500007562985) _gate_q_5, _gate_q_10;
  rz(2.8806133555382063) _gate_q_3;
  xx_minus_yy_5105752336(3.265724753168359, 6.056281543209334) _gate_q_5, _gate_q_14;
  u3(5.162575234415742, 1.83713729782805, 1.3121736565324515) _gate_q_19;
  swap _gate_q_2, _gate_q_9;
  rxx_5105750080(4.37354975921017) _gate_q_7, _gate_q_4;
  crx(5.044596904148347) _gate_q_3, _gate_q_1;
  h _gate_q_6;
  ecr _gate_q_10, _gate_q_11;
  cu3_5105746912(5.686839681614922, 0.18004480943453366, 4.931027519592574) _gate_q_18, _gate_q_15;
  z _gate_q_8;
  swap _gate_q_12, _gate_q_13;
  cu1_5105752864(4.566601408350498) _gate_q_17, _gate_q_0;
  tdg _gate_q_16;
  id _gate_q_3;
  p(3.4485353719350575) _gate_q_10;
  xx_minus_yy_5105751040(1.63571737675093, 6.228486101187998) _gate_q_9, _gate_q_16;
  h _gate_q_5;
  cp(5.160417170433773) _gate_q_11, _gate_q_18;
  cry(1.9461448587103631) _gate_q_6, _gate_q_0;
  crx(5.8666322578491314) _gate_q_7, _gate_q_14;
  sxdg _gate_q_19;
  cz _gate_q_13, _gate_q_17;
  h _gate_q_12;
  rz(0.42866919666331565) _gate_q_8;
  x _gate_q_2;
  sx _gate_q_15;
  iswap _gate_q_1, _gate_q_4;
  p(6.152176164508873) _gate_q_4;
  cy _gate_q_15, _gate_q_7;
  xx_plus_yy_5105754304(4.878795483172555, 4.912479130133601) _gate_q_3, _gate_q_10;
  rxx_5105761936(2.3166859141722953) _gate_q_6, _gate_q_1;
  cry(3.5868647126480977) _gate_q_5, _gate_q_11;
  cx _gate_q_19, _gate_q_9;
  ryy_5105757376(3.2711008753574693) _gate_q_14, _gate_q_18;
  xx_plus_yy_5105755936(5.588142781849464, 5.090690136886509) _gate_q_17, _gate_q_13;
  csdg _gate_q_16, _gate_q_2;
  rz(0.6221025854613025) _gate_q_0;
  ecr _gate_q_12, _gate_q_8;
  xx_minus_yy_5105760880(3.703650092045952, 1.5300063952391023) _gate_q_14, _gate_q_15;
  id _gate_q_10;
  y _gate_q_3;
  p(0.8541748279118262) _gate_q_9;
  csdg _gate_q_13, _gate_q_17;
  cy _gate_q_2, _gate_q_19;
  ryy_5105757088(4.148968800129879) _gate_q_0, _gate_q_12;
  xx_minus_yy_5105749168(4.30822885976112, 0.4442158644435889) _gate_q_1, _gate_q_8;
  u2(2.3832765218761156, 1.5217952844778997) _gate_q_6;
  ry(3.236504988642776) _gate_q_18;
  id _gate_q_4;
  iswap _gate_q_7, _gate_q_11;
  sxdg _gate_q_5;
  U(3.226180831426408, 5.865244746623237, 0.33566447479501804) _gate_q_16;
  rzz_5105754352(4.356255064827065) _gate_q_4, _gate_q_12;
  u2(5.932131994521781, 5.40451135017232) _gate_q_8;
  y _gate_q_11;
  cx _gate_q_13, _gate_q_18;
  rxx_5105750656(4.689038219440077) _gate_q_3, _gate_q_9;
  iswap _gate_q_6, _gate_q_16;
  cu1_5105761264(1.4423139035953605) _gate_q_1, _gate_q_2;
  sx _gate_q_19;
  x _gate_q_10;
  rzz_5105756368(5.043988989173032) _gate_q_5, _gate_q_14;
  rxx_5105750272(5.192429515592402) _gate_q_7, _gate_q_17;
  u1(5.625007374958595) _gate_q_0;
  h _gate_q_15;
  p(3.685715938694228) _gate_q_6;
  sx _gate_q_19;
  cx _gate_q_10, _gate_q_7;
  ch _gate_q_12, _gate_q_3;
  h _gate_q_5;
  cu1_5105750512(3.672362144401115) _gate_q_4, _gate_q_13;
  rzz_5105753584(2.1432435812384014) _gate_q_9, _gate_q_1;
  ry(5.08286674281126) _gate_q_16;
  tdg _gate_q_0;
  sdg _gate_q_17;
  z _gate_q_2;
  rxx_5105749600(1.672481240629941) _gate_q_14, _gate_q_18;
  h _gate_q_15;
  crx(6.245579350195878) _gate_q_11, _gate_q_8;
  rzx_5105751760(2.8139944017919127) _gate_q_16, _gate_q_15;
  cu(4.094232786948004, 5.967233895696022, 2.4895426702984738, 5.087229503010053) _gate_q_11, _gate_q_1;
  ryy_5105749504(6.14470579724264) _gate_q_2, _gate_q_7;
  r_5105759968(6.103430151335745, 3.1497986336854473) _gate_q_9;
  rzz_5105758480(4.735767634512381) _gate_q_18, _gate_q_13;
  xx_plus_yy_5105746144(1.3692171070479309, 6.166358106040169) _gate_q_19, _gate_q_0;
  xx_plus_yy_5105750032(3.7626711556138352, 0.13319710106122612) _gate_q_3, _gate_q_8;
  cy _gate_q_14, _gate_q_6;
  z _gate_q_10;
  t _gate_q_17;
  xx_minus_yy_5105757760(2.77846152255222, 0.42021685452617463) _gate_q_12, _gate_q_5;
  h _gate_q_4;
}