gate cu1_5105757808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2458519182000742) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2458519182000742) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2458519182000742) _gate_q_1;
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
gate rxx_5105751280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6900502047935526) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105752432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4304994343732909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105747296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0112111394684007) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1534661206388206) _gate_q_0;
  ry(-2.1534661206388206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0112111394684007) _gate_q_1;
}
gate rzz_5105758336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6392361935086276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5106395920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.178200791361952, -0.7033869965459428, 0.7033869965459428) _gate_q_0;
}
gate rzx_5106395536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1980443403085994) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105635824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9102963372179507) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105644464(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.117713889484149) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105642112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1022099025004843, -0.2560354643938043, 0.2560354643938043) _gate_q_0;
}
gate ryy_5105646240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.8787368573160945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105636976(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.9215144447558397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105640240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.246166900581634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105645616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.974585845678121, 1.5056223756275728, -1.5056223756275728) _gate_q_0;
}
gate rzz_5105637888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.522648044429474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  cu1_5105757808(4.4917038364001485) _gate_q_5, _gate_q_1;
  cu(5.038143915532565, 1.9204676141428796, 1.7885237665351437, 5.793129396067421) _gate_q_6, _gate_q_8;
  tdg _gate_q_4;
  u1(5.410641160380358) _gate_q_2;
  cp(3.7068228805241517) _gate_q_9, _gate_q_3;
  ry(1.6178462779070066) _gate_q_0;
  cp(3.9691501469404398) _gate_q_7, _gate_q_10;
  p(3.377724830689328) _gate_q_0;
  rz(0.5449798712726276) _gate_q_2;
  s _gate_q_4;
  id _gate_q_5;
  ecr _gate_q_6, _gate_q_7;
  tdg _gate_q_9;
  csx _gate_q_1, _gate_q_8;
  z _gate_q_3;
  u3(1.1313688300873412, 5.101740241199099, 5.351262621502354) _gate_q_10;
  rxx_5105751280(3.6900502047935526) _gate_q_4, _gate_q_1;
  cy _gate_q_0, _gate_q_9;
  p(4.87562427152344) _gate_q_5;
  cp(3.1837381070774287) _gate_q_7, _gate_q_8;
  p(0.8454864503186953) _gate_q_3;
  s _gate_q_2;
  tdg _gate_q_10;
  u3(5.303415545306961, 5.394461637152587, 2.5335305524235694) _gate_q_6;
  cu(3.003318740463647, 3.073641316509962, 5.745777739921167, 0.7617109697083339) _gate_q_1, _gate_q_9;
  u1(3.360545086630673) _gate_q_4;
  rx(2.094534621399193) _gate_q_6;
  h _gate_q_5;
  rz(1.3697422705366429) _gate_q_3;
  U(4.257470463139066, 0.895158193942267, 4.313449256951321) _gate_q_8;
  rzx_5105752432(0.4304994343732909) _gate_q_7, _gate_q_10;
  xx_minus_yy_5105747296(4.306932241277641, 1.0112111394684007) _gate_q_2, _gate_q_0;
  rzz_5105758336(0.6392361935086276) _gate_q_0, _gate_q_2;
  dcx _gate_q_3, _gate_q_1;
  u3(4.021474012984184, 5.201817587742028, 1.746725481984103) _gate_q_9;
  r_5106395920(2.178200791361952, 0.8674093302489537) _gate_q_8;
  crx(4.492016563106468) _gate_q_4, _gate_q_6;
  p(3.3702976718671076) _gate_q_10;
  rzx_5106395536(3.1980443403085994) _gate_q_7, _gate_q_5;
  cx _gate_q_7, _gate_q_9;
  ryy_5105635824(2.9102963372179507) _gate_q_0, _gate_q_4;
  cx _gate_q_8, _gate_q_6;
  u1(0.23782179977538837) _gate_q_10;
  cu(4.77707842934331, 0.31240984842684366, 5.389097303915007, 4.7466668470691085) _gate_q_3, _gate_q_5;
  id _gate_q_2;
  sxdg _gate_q_1;
  ry(3.5031076288468235) _gate_q_0;
  ry(5.450610637897654) _gate_q_8;
  rzz_5105644464(1.117713889484149) _gate_q_7, _gate_q_9;
  r_5105642112(2.1022099025004843, 1.3147608624010922) _gate_q_2;
  U(4.798771029421752, 5.44622670138547, 4.322961107220276) _gate_q_5;
  ryy_5105646240(5.8787368573160945) _gate_q_6, _gate_q_4;
  u3(3.2101756181384644, 3.208870416727285, 3.119470526493064) _gate_q_10;
  p(0.9504522517422581) _gate_q_3;
  sdg _gate_q_1;
  x _gate_q_5;
  rzz_5105636976(1.9215144447558397) _gate_q_10, _gate_q_9;
  crx(5.386219033842417) _gate_q_3, _gate_q_4;
  ecr _gate_q_2, _gate_q_1;
  rzz_5105640240(6.246166900581634) _gate_q_8, _gate_q_0;
  h _gate_q_6;
  u3(2.442448298159861, 1.248659011267738, 2.935533588195964) _gate_q_7;
  crz(1.33840646208697) _gate_q_8, _gate_q_2;
  cs _gate_q_1, _gate_q_3;
  rx(5.176719992708529) _gate_q_6;
  r_5105645616(4.974585845678121, 3.0764187024224694) _gate_q_7;
  cu(6.1750496584457615, 4.538799356291712, 1.1240957975475845, 6.131262984196397) _gate_q_4, _gate_q_5;
  sdg _gate_q_0;
  rzz_5105637888(3.522648044429474) _gate_q_9, _gate_q_10;
  sx _gate_q_4;
  cry(3.717161485982719) _gate_q_8, _gate_q_6;
  t _gate_q_0;
  csx _gate_q_1, _gate_q_7;
  tdg _gate_q_2;
  cry(1.802319077799262) _gate_q_3, _gate_q_5;
  crx(1.6822983413924157) _gate_q_10, _gate_q_9;
}
gate rxx_5105642784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.453700172863339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5105644416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0814197321627383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5105632320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.0286657745383545) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.382749843747799) _gate_q_1;
  ry(-2.382749843747799) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.0286657745383545) _gate_q_0;
}
gate xx_minus_yy_5105641776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.276039962614246) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9163884130048945) _gate_q_0;
  ry(-0.9163884130048945) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.276039962614246) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5105638896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35519237556507416) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5105632128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.10539354409426) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5740920440886433) _gate_q_0;
  ry(-0.5740920440886433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.10539354409426) _gate_q_1;
}
gate cu3_5105645040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.632303146492572) _gate_q_0;
  u1(-0.531579120940501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7724110148169925, 0, -3.632303146492572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7724110148169925, 4.163882267433073, 0) _gate_q_1;
}
gate xx_minus_yy_5105640576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.244176655277659) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.34836385165661066) _gate_q_0;
  ry(-0.34836385165661066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.244176655277659) _gate_q_1;
}
gate rxx_5105644944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.016193093449537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105643744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.0234417833432445, -0.8906495133457011, 0.8906495133457011) _gate_q_0;
}
gate cu3_5104272640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.9557510697028047) _gate_q_0;
  u1(-1.4545163915808912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7292684274894742, 0, -3.9557510697028047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7292684274894742, 5.410267461283696, 0) _gate_q_1;
}
gate ryy_5104271968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.558916417490142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5104282480(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0104345617248276, 4.074674091056755, -4.074674091056755) _gate_q_0;
}
gate rzz_5104280416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.7192624509198278) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5104281088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5387372567611867) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5387372567611867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5387372567611867) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  ry(4.583567288359257) _gate_q_6;
  x _gate_q_2;
  rxx_5105642784(5.453700172863339) _gate_q_7, _gate_q_8;
  csdg _gate_q_10, _gate_q_3;
  sdg _gate_q_4;
  ecr _gate_q_0, _gate_q_1;
  rzz_5105644416(3.0814197321627383) _gate_q_5, _gate_q_9;
  xx_plus_yy_5105632320(4.765499687495598, 4.0286657745383545) _gate_q_3, _gate_q_8;
  id _gate_q_0;
  p(5.797657035257672) _gate_q_1;
  z _gate_q_2;
  xx_minus_yy_5105641776(1.832776826009789, 2.276039962614246) _gate_q_9, _gate_q_5;
  id _gate_q_10;
  iswap _gate_q_4, _gate_q_7;
  u3(2.7066554436080006, 1.9489639561855951, 2.7529587342612984) _gate_q_6;
  z _gate_q_10;
  cry(0.09692937058802) _gate_q_5, _gate_q_8;
  ryy_5105638896(0.35519237556507416) _gate_q_2, _gate_q_4;
  u1(6.04628415511812) _gate_q_1;
  crx(2.2170296129432625) _gate_q_7, _gate_q_3;
  xx_minus_yy_5105632128(1.1481840881772867, 6.10539354409426) _gate_q_0, _gate_q_6;
  sxdg _gate_q_9;
  t _gate_q_1;
  cu3_5105645040(3.544822029633985, 4.163882267433073, 3.100724025552071) _gate_q_5, _gate_q_6;
  u1(3.146993560253921) _gate_q_7;
  ry(1.6270677033209957) _gate_q_4;
  p(4.52625806569883) _gate_q_2;
  crz(4.743324415039847) _gate_q_8, _gate_q_0;
  csx _gate_q_9, _gate_q_3;
  sdg _gate_q_10;
  xx_minus_yy_5105640576(0.6967277033132213, 6.244176655277659) _gate_q_3, _gate_q_6;
  crz(5.10769920490925) _gate_q_0, _gate_q_9;
  id _gate_q_1;
  rxx_5105644944(4.016193093449537) _gate_q_7, _gate_q_8;
  r_5105643744(5.0234417833432445, 0.6801468134491955) _gate_q_2;
  ecr _gate_q_5, _gate_q_10;
  z _gate_q_4;
  crz(4.168493900369597) _gate_q_4, _gate_q_9;
  y _gate_q_5;
  cu3_5104272640(1.4585368549789484, 5.410267461283696, 2.5012346781219135) _gate_q_1, _gate_q_7;
  rx(4.553540580123279) _gate_q_3;
  ch _gate_q_0, _gate_q_6;
  cs _gate_q_8, _gate_q_10;
  U(5.379810252435233, 4.320248379544801, 2.845128670899412) _gate_q_2;
  sx _gate_q_4;
  ch _gate_q_6, _gate_q_7;
  rz(3.834778583049659) _gate_q_2;
  ryy_5104271968(0.558916417490142) _gate_q_5, _gate_q_3;
  crx(2.771971298847169) _gate_q_9, _gate_q_8;
  h _gate_q_1;
  ry(3.768594660771997) _gate_q_0;
  r_5104282480(3.0104345617248276, 5.6454704178516515) _gate_q_10;
  dcx _gate_q_0, _gate_q_5;
  rzz_5104280416(2.7192624509198278) _gate_q_10, _gate_q_4;
  sxdg _gate_q_1;
  cx _gate_q_3, _gate_q_6;
  y _gate_q_2;
  id _gate_q_7;
  sx _gate_q_9;
  sxdg _gate_q_8;
  h _gate_q_9;
  csx _gate_q_1, _gate_q_5;
  csdg _gate_q_8, _gate_q_6;
  u2(2.771122985517379, 4.298102543320275) _gate_q_2;
  ry(6.1839111838941125) _gate_q_7;
  tdg _gate_q_4;
  cu1_5104281088(1.0774745135223733) _gate_q_0, _gate_q_3;
  id _gate_q_10;
  id _gate_q_4;
  rz(0.9060718158170893) _gate_q_10;
  csdg _gate_q_2, _gate_q_1;
  crz(3.8018331125600513) _gate_q_0, _gate_q_8;
  swap _gate_q_3, _gate_q_5;
  csdg _gate_q_6, _gate_q_7;
  sx _gate_q_9;
}