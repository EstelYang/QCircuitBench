gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5072111328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.11249899800477356, 0.40176210683742064, -0.40176210683742064) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5072124720(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.123559004859531) _gate_q_0;
  u1(-0.34499255099529247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.1144595550137057, 0, -5.123559004859531) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.1144595550137057, 5.468551555854823, 0) _gate_q_1;
}
gate cu3_5072125536(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.800392893667713) _gate_q_0;
  u1(-1.471060460191854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.541255053159979, 0, -4.800392893667713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.541255053159979, 6.271453353859567, 0) _gate_q_1;
}
gate ryy_5072121216(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7575238954998285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5072111664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.1831904336999015) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8836367309072796) _gate_q_0;
  ry(-0.8836367309072796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.1831904336999015) _gate_q_1;
}
gate cu3_5072113440(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.540007800831966) _gate_q_0;
  u1(-0.5067852185550887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6848714845448561, 0, -1.540007800831966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6848714845448561, 2.0467930193870547, 0) _gate_q_1;
}
gate xx_plus_yy_5072113008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.536577935784763) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.217349798092934) _gate_q_1;
  ry(-2.217349798092934) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.536577935784763) _gate_q_0;
}
gate xx_minus_yy_5072114160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.062203245630259) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.454702679502488) _gate_q_0;
  ry(-0.454702679502488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.062203245630259) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5072125488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6435153025008935) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072113104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.0421088037598727, 0.3390051507491767, -0.3390051507491767) _gate_q_0;
}
gate ryy_5072122704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7374087820308883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072114736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.468278363729287) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate xx_plus_yy_5072124384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.941289529012323) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1772748943637834) _gate_q_1;
  ry(-1.1772748943637834) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.941289529012323) _gate_q_0;
}
gate rzx_5072111568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.490404931660534) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5072113056(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0898740661916175) _gate_q_0;
  u1(1.6548552735156408) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.116604805362051, 0, -2.0898740661916175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.116604805362051, 0.43501879267597665, 0) _gate_q_1;
}
gate cu1_5072124144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.960117693626322) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.960117693626322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.960117693626322) _gate_q_1;
}
gate xx_plus_yy_5072112432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.075274387717101) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0276414187513028) _gate_q_1;
  ry(-1.0276414187513028) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.075274387717101) _gate_q_0;
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
gate rzx_5072117328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9584390079693985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072119056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.0257282727432244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.0257282727432244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.0257282727432244) _gate_q_1;
}
gate cu1_5072115696(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0015792112737056) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0015792112737056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0015792112737056) _gate_q_1;
}
gate rzx_5072117952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.907406843347148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sdg _gate_q_0;
  ry(2.9998185912501527) _gate_q_5;
  sdg _gate_q_1;
  crx(3.2377653850716746) _gate_q_12, _gate_q_7;
  sxdg _gate_q_10;
  r_5072111328(0.11249899800477356, 1.9725584336323172) _gate_q_2;
  dcx _gate_q_3, _gate_q_4;
  cu3_5072124720(6.2289191100274115, 5.468551555854823, 4.778566453864238) _gate_q_6, _gate_q_9;
  cu3_5072125536(1.082510106319958, 6.271453353859567, 3.3293324334758587) _gate_q_11, _gate_q_8;
  sxdg _gate_q_13;
  u1(4.755986230027159) _gate_q_14;
  crx(5.066329460574448) _gate_q_10, _gate_q_7;
  p(3.8806635503061506) _gate_q_14;
  u3(2.3670069614638627, 0.2961146120178593, 0.5772986075430531) _gate_q_6;
  cu(5.492134126977904, 4.416392059617284, 0.8797523780285742, 2.035515135120478) _gate_q_0, _gate_q_4;
  cry(3.60482967114571) _gate_q_13, _gate_q_9;
  ryy_5072121216(3.7575238954998285) _gate_q_3, _gate_q_8;
  cs _gate_q_12, _gate_q_5;
  tdg _gate_q_2;
  cp(1.7305412640869358) _gate_q_11, _gate_q_1;
  cs _gate_q_11, _gate_q_4;
  csdg _gate_q_13, _gate_q_3;
  x _gate_q_14;
  sdg _gate_q_2;
  u2(0.7282767905105142, 2.1078203816454666) _gate_q_8;
  xx_minus_yy_5072111664(1.7672734618145591, 6.1831904336999015) _gate_q_7, _gate_q_1;
  cu3_5072113440(1.3697429690897123, 2.0467930193870547, 1.0332225822768772) _gate_q_6, _gate_q_12;
  xx_plus_yy_5072113008(4.434699596185868, 2.536577935784763) _gate_q_0, _gate_q_5;
  y _gate_q_9;
  sxdg _gate_q_10;
  rx(5.814789565890087) _gate_q_0;
  ch _gate_q_12, _gate_q_3;
  ry(3.1665272250026457) _gate_q_7;
  h _gate_q_6;
  xx_minus_yy_5072114160(0.909405359004976, 5.062203245630259) _gate_q_9, _gate_q_2;
  U(2.928649858930412, 3.005610211003559, 3.1225273799369813) _gate_q_14;
  U(4.8005378858022905, 5.565896043078348, 5.147937193787226) _gate_q_4;
  iswap _gate_q_8, _gate_q_1;
  tdg _gate_q_11;
  rzx_5072125488(1.6435153025008935) _gate_q_13, _gate_q_5;
  r_5072113104(2.0421088037598727, 1.9098014775440733) _gate_q_10;
  ryy_5072122704(3.7374087820308883) _gate_q_7, _gate_q_0;
  h _gate_q_8;
  iswap _gate_q_2, _gate_q_9;
  cz _gate_q_3, _gate_q_12;
  csdg _gate_q_4, _gate_q_10;
  rzx_5072114736(5.468278363729287) _gate_q_14, _gate_q_5;
  iswap _gate_q_11, _gate_q_1;
  csx _gate_q_13, _gate_q_6;
  ch _gate_q_12, _gate_q_3;
  ch _gate_q_13, _gate_q_14;
  cy _gate_q_4, _gate_q_7;
  tdg _gate_q_1;
  cz _gate_q_2, _gate_q_0;
  rz(4.210593192118071) _gate_q_9;
  sx _gate_q_6;
  xx_plus_yy_5072124384(2.354549788727567, 4.941289529012323) _gate_q_5, _gate_q_8;
  rzx_5072111568(5.490404931660534) _gate_q_11, _gate_q_10;
  iswap _gate_q_13, _gate_q_4;
  y _gate_q_2;
  cu3_5072113056(4.233209610724102, 0.43501879267597665, 3.7447293397072583) _gate_q_1, _gate_q_11;
  h _gate_q_5;
  cu1_5072124144(5.920235387252644) _gate_q_7, _gate_q_8;
  xx_plus_yy_5072112432(2.0552828375026055, 0.075274387717101) _gate_q_12, _gate_q_14;
  z _gate_q_0;
  s _gate_q_9;
  ry(2.7619192312721768) _gate_q_3;
  rz(0.1314745838074248) _gate_q_10;
  h _gate_q_6;
  ecr _gate_q_11, _gate_q_5;
  cp(4.96560528865844) _gate_q_14, _gate_q_1;
  rzx_5072117328(1.9584390079693985) _gate_q_9, _gate_q_2;
  cu1_5072119056(4.051456545486449) _gate_q_4, _gate_q_10;
  u3(4.528830478804752, 5.0879766838174465, 6.107786944782294) _gate_q_0;
  u2(3.5637756563317313, 1.2494325374966457) _gate_q_7;
  iswap _gate_q_6, _gate_q_3;
  cu1_5072115696(6.003158422547411) _gate_q_12, _gate_q_13;
  p(5.926745976603787) _gate_q_8;
  tdg _gate_q_7;
  cry(4.782598430828636) _gate_q_13, _gate_q_9;
  cz _gate_q_4, _gate_q_8;
  u1(0.8036478062673608) _gate_q_1;
  rz(4.182999681520497) _gate_q_6;
  rzx_5072117952(2.907406843347148) _gate_q_11, _gate_q_2;
  crx(4.3242784701633585) _gate_q_14, _gate_q_12;
  ry(5.208745758096215) _gate_q_5;
  u1(4.849876567683273) _gate_q_3;
  csdg _gate_q_0, _gate_q_10;
  u2(0.059563299110545226, 0.004038414036582032) _gate_q_0;
  cy _gate_q_14, _gate_q_12;
  tdg _gate_q_13;
  u3(4.268210535089269, 5.3770659601588475, 3.53693689045486) _gate_q_9;
  tdg _gate_q_11;
  x _gate_q_8;
  crz(1.3586520828515225) _gate_q_5, _gate_q_7;
  x _gate_q_6;
  dcx _gate_q_10, _gate_q_1;
  tdg _gate_q_3;
  cp(4.9853894370413725) _gate_q_2, _gate_q_4;
}
gate rzx_5073999136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.066698942956282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5073999328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.8511593314599022) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073997792(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5696168142118174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5074008640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.213539169984809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073997312(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.954533409098311) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073999664(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4987153946271112) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074002880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.240397642515862) _gate_q_0;
  u1(1.1445840121530355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.177219002725699, 0, -1.240397642515862) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.177219002725699, 0.09581363036282652, 0) _gate_q_1;
}
gate rzx_5073999616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7784526022240434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073999232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.702457905650875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073994624(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.462008506353078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5073994768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.594441927565099) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7004597650201596) _gate_q_1;
  ry(-2.7004597650201596) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.594441927565099) _gate_q_0;
}
gate rzx_5074007344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.24511136481286663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074009072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.256321336831802, 0.36918569867850537, -0.36918569867850537) _gate_q_0;
}
gate xx_minus_yy_5073997936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.251567973889456) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.17942834979239336) _gate_q_0;
  ry(-0.17942834979239336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.251567973889456) _gate_q_1;
}
gate cu1_5074006384(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0856470132284148) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0856470132284148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0856470132284148) _gate_q_1;
}
gate ryy_5074000000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.031882061443246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5074007104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.20658286714870405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074001200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.25490923401926224) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5073994912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.633273526763368) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  u2(2.051922566460919, 5.321803105064272) _gate_q_3;
  swap _gate_q_11, _gate_q_2;
  x _gate_q_0;
  swap _gate_q_4, _gate_q_10;
  ry(0.0260259628630086) _gate_q_1;
  sxdg _gate_q_9;
  y _gate_q_7;
  cx _gate_q_5, _gate_q_13;
  cp(4.51812269523747) _gate_q_8, _gate_q_6;
  cx _gate_q_12, _gate_q_14;
  t _gate_q_12;
  ecr _gate_q_4, _gate_q_10;
  x _gate_q_11;
  rzx_5073999136(2.066698942956282) _gate_q_7, _gate_q_14;
  rzz_5073999328(1.8511593314599022) _gate_q_3, _gate_q_2;
  cy _gate_q_8, _gate_q_6;
  s _gate_q_9;
  ecr _gate_q_13, _gate_q_5;
  sx _gate_q_0;
  h _gate_q_1;
  rz(1.9245724148894394) _gate_q_4;
  tdg _gate_q_9;
  ryy_5073997792(1.5696168142118174) _gate_q_0, _gate_q_12;
  csdg _gate_q_2, _gate_q_14;
  y _gate_q_10;
  u2(3.8561576785858036, 4.615756294553424) _gate_q_6;
  ecr _gate_q_3, _gate_q_11;
  rxx_5074008640(5.213539169984809) _gate_q_8, _gate_q_1;
  U(2.3598527419623903, 0.4530878135712537, 5.370667108730646) _gate_q_5;
  iswap _gate_q_7, _gate_q_13;
  cx _gate_q_2, _gate_q_7;
  crx(1.783445828332697) _gate_q_9, _gate_q_13;
  crx(4.133037507914785) _gate_q_6, _gate_q_3;
  z _gate_q_12;
  z _gate_q_14;
  tdg _gate_q_5;
  rzz_5073997312(5.954533409098311) _gate_q_1, _gate_q_4;
  rz(2.5509444040780873) _gate_q_8;
  ryy_5073999664(2.4987153946271112) _gate_q_10, _gate_q_11;
  id _gate_q_0;
  cu3_5074002880(4.354438005451398, 0.09581363036282652, 2.3849816546688976) _gate_q_1, _gate_q_3;
  x _gate_q_0;
  rzx_5073999616(0.7784526022240434) _gate_q_6, _gate_q_12;
  rzx_5073999232(5.702457905650875) _gate_q_5, _gate_q_8;
  csdg _gate_q_2, _gate_q_13;
  u2(5.222733934719517, 1.6710368803102624) _gate_q_14;
  rx(5.900694325429633) _gate_q_7;
  crx(4.602136320969022) _gate_q_4, _gate_q_10;
  csdg _gate_q_9, _gate_q_11;
  p(4.10750869336489) _gate_q_6;
  u3(3.7697361809718397, 3.5139782399267236, 1.7979733507798588) _gate_q_10;
  iswap _gate_q_1, _gate_q_8;
  rzx_5073994624(5.462008506353078) _gate_q_3, _gate_q_9;
  crx(4.855305967668339) _gate_q_13, _gate_q_14;
  cy _gate_q_2, _gate_q_7;
  cy _gate_q_0, _gate_q_11;
  cy _gate_q_4, _gate_q_5;
  x _gate_q_12;
  cz _gate_q_4, _gate_q_0;
  csdg _gate_q_14, _gate_q_11;
  u3(1.4844441051772095, 5.866053001385805, 3.342600356002416) _gate_q_2;
  u1(4.273586362041435) _gate_q_7;
  xx_plus_yy_5073994768(5.400919530040319, 2.594441927565099) _gate_q_6, _gate_q_5;
  rzx_5074007344(0.24511136481286663) _gate_q_3, _gate_q_9;
  y _gate_q_12;
  t _gate_q_8;
  cp(1.0453247846381502) _gate_q_13, _gate_q_10;
  s _gate_q_1;
  ecr _gate_q_9, _gate_q_14;
  ch _gate_q_5, _gate_q_12;
  cy _gate_q_13, _gate_q_7;
  z _gate_q_1;
  cx _gate_q_2, _gate_q_6;
  cp(5.469349567383) _gate_q_10, _gate_q_4;
  y _gate_q_11;
  cry(6.221389798185492) _gate_q_3, _gate_q_0;
  z _gate_q_8;
  csx _gate_q_13, _gate_q_4;
  r_5074009072(1.256321336831802, 1.939982025473402) _gate_q_5;
  xx_minus_yy_5073997936(0.3588566995847867, 3.251567973889456) _gate_q_7, _gate_q_8;
  z _gate_q_12;
  cu1_5074006384(2.1712940264568297) _gate_q_1, _gate_q_6;
  ryy_5074000000(3.031882061443246) _gate_q_2, _gate_q_10;
  ecr _gate_q_0, _gate_q_9;
  id _gate_q_3;
  id _gate_q_11;
  z _gate_q_14;
  s _gate_q_1;
  cs _gate_q_0, _gate_q_4;
  rzx_5074007104(0.20658286714870405) _gate_q_2, _gate_q_11;
  rzz_5074001200(0.25490923401926224) _gate_q_12, _gate_q_13;
  u1(2.6676865715864215) _gate_q_10;
  rzx_5073994912(1.633273526763368) _gate_q_5, _gate_q_9;
  crz(1.7839637252691116) _gate_q_6, _gate_q_7;
  cz _gate_q_3, _gate_q_8;
  ry(5.136409284278838) _gate_q_14;
}