gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5072612736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.033274301849444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072612784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.33610844251425, 3.2957492823485346, -3.2957492823485346) _gate_q_0;
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
gate rzz_5072615712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.526523547471011) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072605104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0155722903697746) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0155722903697746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0155722903697746) _gate_q_1;
}
gate xx_minus_yy_5072612880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5159544134371286) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6186139332934726) _gate_q_0;
  ry(-1.6186139332934726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5159544134371286) _gate_q_1;
}
gate cu1_5072617056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6871764700717424) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6871764700717424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6871764700717424) _gate_q_1;
}
gate rxx_5072614848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.709183582030904) _gate_q_1;
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
gate rxx_5072609952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.918318075741255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5072612592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.634513911222181) _gate_q_1;
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
gate xx_plus_yy_5072603376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.097394239339965) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3753813348447135) _gate_q_1;
  ry(-1.3753813348447135) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.097394239339965) _gate_q_0;
}
gate r_5072606256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.360136936821359, 2.886427483540846, -2.886427483540846) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  id _gate_q_8;
  U(2.558242487020171, 5.187605273115375, 1.6085430109992387) _gate_q_7;
  z _gate_q_6;
  u2(5.761915418432719, 4.71082474638144) _gate_q_0;
  crx(4.139198532778374) _gate_q_3, _gate_q_2;
  u2(4.7278390494599964, 4.366965043309976) _gate_q_4;
  U(5.829553089520972, 5.282664549022205, 1.1948708711444176) _gate_q_5;
  rz(4.416047088124663) _gate_q_1;
  cx _gate_q_1, _gate_q_5;
  sxdg _gate_q_7;
  rxx_5072612736(2.033274301849444) _gate_q_6, _gate_q_2;
  u2(0.48207733833892963, 4.72146876374806) _gate_q_3;
  sxdg _gate_q_4;
  u3(6.041643036293752, 4.5221169181839205, 0.09240180137535928) _gate_q_8;
  t _gate_q_0;
  r_5072612784(5.33610844251425, 4.866545609143431) _gate_q_2;
  crx(3.756334577223079) _gate_q_5, _gate_q_1;
  csx _gate_q_3, _gate_q_8;
  sxdg _gate_q_7;
  u1(6.157828436965184) _gate_q_4;
  u1(3.2916198118859246) _gate_q_0;
  x _gate_q_6;
  sx _gate_q_0;
  ry(0.7581279657141152) _gate_q_4;
  sxdg _gate_q_7;
  rzz_5072615712(5.526523547471011) _gate_q_6, _gate_q_3;
  cu1_5072605104(2.031144580739549) _gate_q_2, _gate_q_5;
  crz(4.879691694756182) _gate_q_1, _gate_q_8;
  z _gate_q_5;
  U(2.097064989168653, 3.7096079656816303, 2.630993724640741) _gate_q_1;
  cz _gate_q_7, _gate_q_8;
  xx_minus_yy_5072612880(3.237227866586945, 0.5159544134371286) _gate_q_3, _gate_q_6;
  z _gate_q_0;
  crz(4.924242990211799) _gate_q_4, _gate_q_2;
  cu1_5072617056(1.3743529401434849) _gate_q_2, _gate_q_5;
  cp(5.287276523258918) _gate_q_1, _gate_q_3;
  rxx_5072614848(2.709183582030904) _gate_q_6, _gate_q_8;
  p(3.075342962568318) _gate_q_7;
  z _gate_q_4;
  sx _gate_q_0;
  cs _gate_q_0, _gate_q_6;
  crz(5.800362456140768) _gate_q_1, _gate_q_7;
  s _gate_q_4;
  y _gate_q_3;
  rxx_5072609952(4.918318075741255) _gate_q_5, _gate_q_8;
  rx(5.206660200661726) _gate_q_2;
  rxx_5072612592(2.634513911222181) _gate_q_5, _gate_q_3;
  cy _gate_q_8, _gate_q_1;
  cu(5.1194739233231745, 5.664025077540153, 2.4967135879403024, 1.6532163768648505) _gate_q_7, _gate_q_4;
  iswap _gate_q_6, _gate_q_2;
  tdg _gate_q_0;
  xx_plus_yy_5072603376(2.750762669689427, 1.097394239339965) _gate_q_7, _gate_q_5;
  r_5072606256(2.360136936821359, 4.457223810335742) _gate_q_0;
  crx(2.3650036448895433) _gate_q_8, _gate_q_2;
  csdg _gate_q_1, _gate_q_4;
  id _gate_q_3;
  rx(2.6801692965247583) _gate_q_6;
}
gate xx_plus_yy_5070733184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4828218682734557) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.982456865495643) _gate_q_1;
  ry(-2.982456865495643) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4828218682734557) _gate_q_0;
}
gate rzx_5070720656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4580602407517653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070723152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2722837139320538) _gate_q_0;
  u1(0.07134865951188263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6633480355120306, 0, -2.2722837139320538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6633480355120306, 2.200935054420171, 0) _gate_q_1;
}
gate ryy_5070717728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.611820268553498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5070719168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6320177141229637, 4.2664327865503715, -4.2664327865503715) _gate_q_0;
}
gate rzx_5070721424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.325861199501456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070717104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9586046212788082) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5070721664(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.223256374323594) _gate_q_0;
  u1(0.8144474340228185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.38410877065152194, 0, -3.223256374323594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.38410877065152194, 2.4088089403007755, 0) _gate_q_1;
}
gate rzz_5070733088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.7139612724577304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070730640(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.240681216232454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070719936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4095668572405076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070727808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.4757204052076843) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8753175579663462) _gate_q_1;
  ry(-0.8753175579663462) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.4757204052076843) _gate_q_0;
}
gate cu1_5070731168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.901603818501013) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.901603818501013) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.901603818501013) _gate_q_1;
}
gate rxx_5070718928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.408566267046055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5072242544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5686200136557844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070431936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2344808408875532) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2344808408875532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2344808408875532) _gate_q_1;
}
gate ryy_5072026608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5696845059896223) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  p(5.077816501131995) _gate_q_0;
  xx_plus_yy_5070733184(5.964913730991286, 3.4828218682734557) _gate_q_8, _gate_q_1;
  rzx_5070720656(0.4580602407517653) _gate_q_5, _gate_q_7;
  s _gate_q_6;
  cu3_5070723152(1.3266960710240612, 2.200935054420171, 2.343632373443936) _gate_q_4, _gate_q_3;
  sdg _gate_q_2;
  csx _gate_q_5, _gate_q_7;
  iswap _gate_q_4, _gate_q_3;
  cry(0.34633696874471687) _gate_q_0, _gate_q_2;
  ryy_5070717728(5.611820268553498) _gate_q_1, _gate_q_6;
  rx(4.472788454518471) _gate_q_8;
  r_5070719168(2.6320177141229637, 5.837229113345268) _gate_q_3;
  rzx_5070721424(5.325861199501456) _gate_q_8, _gate_q_1;
  id _gate_q_2;
  p(5.728241940912844) _gate_q_4;
  rxx_5070717104(0.9586046212788082) _gate_q_5, _gate_q_6;
  cu3_5070721664(0.7682175413030439, 2.4088089403007755, 4.0377038083464125) _gate_q_7, _gate_q_0;
  t _gate_q_4;
  cs _gate_q_0, _gate_q_5;
  y _gate_q_3;
  tdg _gate_q_6;
  rzz_5070733088(4.7139612724577304) _gate_q_8, _gate_q_2;
  crx(4.476093243405163) _gate_q_7, _gate_q_1;
  rzx_5070730640(5.240681216232454) _gate_q_3, _gate_q_4;
  rxx_5070719936(1.4095668572405076) _gate_q_2, _gate_q_8;
  xx_plus_yy_5070727808(1.7506351159326925, 0.4757204052076843) _gate_q_1, _gate_q_6;
  u1(4.035312425942643) _gate_q_0;
  ry(3.250537624534063) _gate_q_7;
  p(0.8021985765076386) _gate_q_5;
  u2(0.760171451856577, 6.245249298017045) _gate_q_5;
  rx(4.304140517855559) _gate_q_3;
  sdg _gate_q_4;
  cry(2.7976666404836354) _gate_q_6, _gate_q_7;
  cu1_5070731168(3.803207637002026) _gate_q_2, _gate_q_0;
  rxx_5070718928(5.408566267046055) _gate_q_8, _gate_q_1;
  u3(1.6504674496051384, 6.236531298549257, 4.250780711410084) _gate_q_2;
  s _gate_q_0;
  sxdg _gate_q_4;
  cy _gate_q_5, _gate_q_8;
  rzx_5072242544(1.5686200136557844) _gate_q_1, _gate_q_7;
  p(0.4978279342557712) _gate_q_6;
  rz(0.15642498128770263) _gate_q_3;
  cx _gate_q_5, _gate_q_4;
  u2(3.2350990620884414, 4.300807788569082) _gate_q_6;
  cz _gate_q_3, _gate_q_1;
  cu1_5070431936(2.4689616817751063) _gate_q_0, _gate_q_8;
  p(1.4681653036511968) _gate_q_2;
  id _gate_q_7;
  sx _gate_q_1;
  cx _gate_q_8, _gate_q_5;
  cp(0.3031733094659361) _gate_q_7, _gate_q_2;
  cry(1.5042981445912902) _gate_q_3, _gate_q_4;
  ryy_5072026608(2.5696845059896223) _gate_q_0, _gate_q_6;
}