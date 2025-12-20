gate cu3_5074193152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0456677774935788) _gate_q_0;
  u1(-0.6554583764980348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.00850811264474, 0, -3.0456677774935788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.00850811264474, 3.7011261539916136, 0) _gate_q_1;
}
gate ryy_5074197472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.558476703096926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5074193104(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2600992633707513) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6607395772478317) _gate_q_1;
  ry(-1.6607395772478317) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2600992633707513) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate xx_minus_yy_5074206352(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.2888931459191058) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.615654681780348) _gate_q_0;
  ry(-2.615654681780348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.2888931459191058) _gate_q_1;
}
gate xx_plus_yy_5074198912(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5630833832869757) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2628514267169076) _gate_q_1;
  ry(-0.2628514267169076) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5630833832869757) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5074201168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.640909717935507) _gate_q_1;
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
gate cu1_5074201888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.829372870030532) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.829372870030532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.829372870030532) _gate_q_1;
}
gate ryy_5074205968(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.551682964287322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074203520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.942901856405654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074200256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.95815533623711, -0.22784490379786937, 0.22784490379786937) _gate_q_0;
}
gate xx_minus_yy_5074194016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3127624231610811) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9237641852977662) _gate_q_0;
  ry(-0.9237641852977662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3127624231610811) _gate_q_1;
}
gate xx_minus_yy_5074193488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5903572094757206) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9444137525824723) _gate_q_0;
  ry(-1.9444137525824723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5903572094757206) _gate_q_1;
}
gate ryy_5074205104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.339368465436298) _gate_q_1;
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
gate rzz_5074204384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.116586638509887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074195120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.6967178470466417, 3.49213545764296, -3.49213545764296) _gate_q_0;
}
gate cu3_5074203088(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.5950700617083555) _gate_q_0;
  u1(-1.4045954776869658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5719594088123993, 0, -3.5950700617083555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5719594088123993, 4.9996655393953215, 0) _gate_q_1;
}
gate cu3_5074199296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.051592627781998) _gate_q_0;
  u1(-0.5407695957546631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.12522542438706, 0, -2.051592627781998) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.12522542438706, 2.592362223536661, 0) _gate_q_1;
}
gate rzz_5074195888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.2689570767490094) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074198624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.899565043923013, 3.84966580148358, -3.84966580148358) _gate_q_0;
}
gate r_5074203808(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3767644297097703, 2.2024647942505164, -2.2024647942505164) _gate_q_0;
}
gate xx_minus_yy_5074196608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.267119598946678) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3678739997523093) _gate_q_0;
  ry(-0.3678739997523093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.267119598946678) _gate_q_1;
}
gate rzx_5074197424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6554900297374637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cu3_5074193152(4.01701622528948, 3.7011261539916136, 2.390209400995544) _gate_q_2, _gate_q_8;
  h _gate_q_12;
  ch _gate_q_17, _gate_q_1;
  z _gate_q_0;
  ryy_5074197472(5.558476703096926) _gate_q_10, _gate_q_7;
  ry(3.8808763067885477) _gate_q_3;
  sxdg _gate_q_13;
  rz(2.918880950849966) _gate_q_16;
  u1(2.8537010847939777) _gate_q_11;
  sdg _gate_q_9;
  iswap _gate_q_5, _gate_q_15;
  xx_plus_yy_5074193104(3.3214791544956634, 2.2600992633707513) _gate_q_4, _gate_q_14;
  u1(3.8831963697824783) _gate_q_6;
  ry(4.308353519385725) _gate_q_16;
  dcx _gate_q_10, _gate_q_0;
  cu(4.764718114720949, 4.274994569040873, 4.9221633905670314, 2.027066820859618) _gate_q_15, _gate_q_2;
  swap _gate_q_8, _gate_q_17;
  csx _gate_q_6, _gate_q_12;
  sx _gate_q_5;
  p(6.253909775579444) _gate_q_13;
  h _gate_q_11;
  rz(2.780322875520483) _gate_q_1;
  xx_minus_yy_5074206352(5.231309363560696, 1.2888931459191058) _gate_q_3, _gate_q_7;
  xx_plus_yy_5074198912(0.5257028534338152, 1.5630833832869757) _gate_q_9, _gate_q_14;
  tdg _gate_q_4;
  t _gate_q_6;
  y _gate_q_8;
  csdg _gate_q_16, _gate_q_9;
  ryy_5074201168(4.640909717935507) _gate_q_5, _gate_q_1;
  ry(3.4558449545294883) _gate_q_13;
  cs _gate_q_4, _gate_q_10;
  cu(1.1036464532598054, 1.9475011510839788, 0.5274140267473008, 1.826815766759817) _gate_q_2, _gate_q_17;
  u1(4.138602738814839) _gate_q_11;
  cp(1.626952200402118) _gate_q_0, _gate_q_14;
  U(3.3933359927139635, 1.4137483138527203, 4.099456819031968) _gate_q_3;
  cu1_5074201888(5.658745740061064) _gate_q_7, _gate_q_15;
  p(3.8831412328374117) _gate_q_12;
  ryy_5074205968(0.551682964287322) _gate_q_5, _gate_q_12;
  cu(2.845480201047497, 0.012067697199933365, 1.8563611451140736, 1.8643249943816607) _gate_q_11, _gate_q_6;
  cu(5.71507311248182, 5.529989645656887, 0.21231029574486382, 0.9874866254227174) _gate_q_16, _gate_q_10;
  ryy_5074203520(3.942901856405654) _gate_q_14, _gate_q_1;
  csx _gate_q_0, _gate_q_7;
  csx _gate_q_3, _gate_q_15;
  csdg _gate_q_4, _gate_q_8;
  cu(1.16513566080494, 5.550723718280142, 3.916781243989519, 1.784169410188827) _gate_q_9, _gate_q_17;
  r_5074200256(1.95815533623711, 1.3429514229970272) _gate_q_13;
  rx(4.745849427750215) _gate_q_2;
  xx_minus_yy_5074194016(1.8475283705955323, 0.3127624231610811) _gate_q_1, _gate_q_11;
  cy _gate_q_6, _gate_q_0;
  xx_minus_yy_5074193488(3.8888275051649446, 0.5903572094757206) _gate_q_10, _gate_q_12;
  ryy_5074205104(2.339368465436298) _gate_q_17, _gate_q_16;
  rx(5.435032057530031) _gate_q_15;
  ecr _gate_q_2, _gate_q_14;
  sx _gate_q_9;
  dcx _gate_q_8, _gate_q_5;
  swap _gate_q_3, _gate_q_7;
  u2(3.628595379911287, 5.99465264139187) _gate_q_13;
  id _gate_q_4;
  rzz_5074204384(6.116586638509887) _gate_q_7, _gate_q_2;
  z _gate_q_14;
  sxdg _gate_q_6;
  cx _gate_q_0, _gate_q_11;
  ry(3.626454051004259) _gate_q_4;
  ry(3.2741863165766603) _gate_q_1;
  s _gate_q_16;
  sxdg _gate_q_13;
  cu(5.559886653077113, 0.5483219741085276, 5.472060847980768, 0.661924932231927) _gate_q_3, _gate_q_17;
  r_5074195120(2.6967178470466417, 5.062931784437857) _gate_q_15;
  tdg _gate_q_8;
  dcx _gate_q_5, _gate_q_10;
  crz(5.551934779995672) _gate_q_12, _gate_q_9;
  csx _gate_q_7, _gate_q_3;
  x _gate_q_0;
  y _gate_q_2;
  tdg _gate_q_4;
  sx _gate_q_5;
  sxdg _gate_q_1;
  cp(4.840350712369388) _gate_q_14, _gate_q_15;
  cx _gate_q_8, _gate_q_11;
  cs _gate_q_6, _gate_q_17;
  cs _gate_q_12, _gate_q_9;
  csx _gate_q_16, _gate_q_13;
  rz(3.989247974090587) _gate_q_10;
  rz(5.690199343053048) _gate_q_0;
  cu3_5074203088(1.1439188176247985, 4.9996655393953215, 2.19047458402139) _gate_q_12, _gate_q_2;
  dcx _gate_q_17, _gate_q_1;
  rz(0.8523005317736941) _gate_q_10;
  csdg _gate_q_11, _gate_q_7;
  cz _gate_q_16, _gate_q_15;
  sx _gate_q_3;
  p(6.044812032616243) _gate_q_6;
  u1(5.568876052381401) _gate_q_8;
  u3(3.381818195648616, 4.866694000753152, 4.207283108829497) _gate_q_9;
  cu3_5074199296(6.25045084877412, 2.592362223536661, 1.5108230320273346) _gate_q_5, _gate_q_14;
  rzz_5074195888(0.2689570767490094) _gate_q_13, _gate_q_4;
  y _gate_q_17;
  cy _gate_q_10, _gate_q_0;
  x _gate_q_13;
  u3(0.8604254351744032, 0.12864630940925634, 3.3636228665443717) _gate_q_12;
  r_5074198624(2.899565043923013, 5.420462128278476) _gate_q_7;
  s _gate_q_9;
  ch _gate_q_11, _gate_q_8;
  sxdg _gate_q_3;
  crx(1.2505207000360847) _gate_q_5, _gate_q_4;
  swap _gate_q_16, _gate_q_6;
  ecr _gate_q_15, _gate_q_1;
  r_5074203808(0.3767644297097703, 3.773261121045413) _gate_q_2;
  sxdg _gate_q_14;
  iswap _gate_q_6, _gate_q_5;
  sdg _gate_q_7;
  cz _gate_q_15, _gate_q_8;
  csdg _gate_q_13, _gate_q_3;
  s _gate_q_4;
  crx(0.17540018037456717) _gate_q_9, _gate_q_10;
  csx _gate_q_1, _gate_q_11;
  id _gate_q_17;
  xx_minus_yy_5074196608(0.7357479995046186, 3.267119598946678) _gate_q_2, _gate_q_12;
  u2(4.786240616829045, 4.720987000214288) _gate_q_16;
  rzx_5074197424(1.6554900297374637) _gate_q_14, _gate_q_0;
}
gate rxx_5074205056(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.248452119112786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074206064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1769479914762675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074199872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5557949309423298) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4987692819766585) _gate_q_1;
  ry(-1.4987692819766585) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5557949309423298) _gate_q_0;
}
gate rzx_5074195024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.771908689602409) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074197664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9022716688844131) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7078990521214346) _gate_q_1;
  ry(-2.7078990521214346) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9022716688844131) _gate_q_0;
}
gate cu1_5074199680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3753228344579434) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3753228344579434) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3753228344579434) _gate_q_1;
}
gate rzx_5074194592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6428030923116037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074196752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.900528851033641) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074194304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6711631419521074, -0.6432458168665447, 0.6432458168665447) _gate_q_0;
}
gate r_5074194640(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.378420377063349, 2.7546514868712153, -2.7546514868712153) _gate_q_0;
}
gate r_5074197760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7471819020916073, -1.250516981319073, 1.250516981319073) _gate_q_0;
}
gate rxx_5074195456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6850734135653316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074205776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5120960736210642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074192384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3382020383048514, 3.3281702556408055, -3.3281702556408055) _gate_q_0;
}
gate r_5074194256(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.902997800118018, -0.5992041920409746, 0.5992041920409746) _gate_q_0;
}
gate cu3_5074202560(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.332528576152653) _gate_q_0;
  u1(0.3573403575603895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.24755018213997, 0, -5.332528576152653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.24755018213997, 4.975188218592264, 0) _gate_q_1;
}
gate r_5074199104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.005885697393054, 2.359835555559411, -2.359835555559411) _gate_q_0;
}
gate rzz_5074190560(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.07400177162379) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074205392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.599156728482568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074204864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.913755461142287, 2.4219078362427875, -2.4219078362427875) _gate_q_0;
}
gate xx_minus_yy_5074204624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6814942486961058) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0493469156648774) _gate_q_0;
  ry(-1.0493469156648774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6814942486961058) _gate_q_1;
}
gate rzz_5074198672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.812260799288128) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074190464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7996559217491304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074198240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.2858318214115245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074202368(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8581921816969347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5069621584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.86153837079147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  swap _gate_q_10, _gate_q_17;
  s _gate_q_4;
  rxx_5074205056(5.248452119112786) _gate_q_5, _gate_q_15;
  rx(0.07239332294220499) _gate_q_3;
  crz(1.349299899132925) _gate_q_1, _gate_q_9;
  ry(3.6911188233722525) _gate_q_8;
  rxx_5074206064(4.1769479914762675) _gate_q_12, _gate_q_11;
  ry(6.227408312827526) _gate_q_7;
  tdg _gate_q_0;
  ch _gate_q_6, _gate_q_2;
  cp(2.7704390913464585) _gate_q_13, _gate_q_14;
  id _gate_q_16;
  x _gate_q_15;
  s _gate_q_12;
  cs _gate_q_3, _gate_q_6;
  xx_plus_yy_5074199872(2.997538563953317, 1.5557949309423298) _gate_q_5, _gate_q_1;
  cs _gate_q_2, _gate_q_9;
  x _gate_q_10;
  iswap _gate_q_17, _gate_q_16;
  t _gate_q_4;
  s _gate_q_0;
  s _gate_q_14;
  rzx_5074195024(3.771908689602409) _gate_q_8, _gate_q_13;
  sxdg _gate_q_7;
  sx _gate_q_11;
  cry(3.250388684759501) _gate_q_11, _gate_q_10;
  xx_plus_yy_5074197664(5.415798104242869, 0.9022716688844131) _gate_q_6, _gate_q_3;
  cu1_5074199680(0.7506456689158868) _gate_q_5, _gate_q_9;
  u1(3.30990087107397) _gate_q_8;
  rzx_5074194592(1.6428030923116037) _gate_q_17, _gate_q_1;
  s _gate_q_12;
  z _gate_q_13;
  h _gate_q_4;
  rzx_5074196752(5.900528851033641) _gate_q_14, _gate_q_16;
  p(2.75961533857675) _gate_q_2;
  U(4.014726670197779, 4.543712478902441, 2.784142139416347) _gate_q_7;
  r_5074194304(3.6711631419521074, 0.9275505099283519) _gate_q_0;
  sx _gate_q_15;
  x _gate_q_4;
  r_5074194640(5.378420377063349, 4.325447813666112) _gate_q_1;
  u2(2.733118780504528, 0.725346936650836) _gate_q_5;
  x _gate_q_17;
  r_5074197760(0.7471819020916073, 0.32027934547582354) _gate_q_10;
  dcx _gate_q_11, _gate_q_6;
  y _gate_q_7;
  y _gate_q_0;
  u2(3.976810865132056, 4.788864536779315) _gate_q_12;
  swap _gate_q_16, _gate_q_13;
  rxx_5074195456(1.6850734135653316) _gate_q_14, _gate_q_2;
  u3(4.385165152356715, 0.761127723466997, 0.28712028746556895) _gate_q_3;
  ryy_5074205776(0.5120960736210642) _gate_q_15, _gate_q_9;
  z _gate_q_8;
  csdg _gate_q_10, _gate_q_11;
  sdg _gate_q_12;
  u3(5.224127508790428, 2.9688870844643076, 3.3954310199132647) _gate_q_4;
  r_5074192384(0.3382020383048514, 4.898966582435702) _gate_q_7;
  tdg _gate_q_13;
  r_5074194256(2.902997800118018, 0.9715921347539219) _gate_q_3;
  cy _gate_q_2, _gate_q_1;
  cs _gate_q_5, _gate_q_0;
  u2(5.897249026598299, 5.858055153434471) _gate_q_6;
  u1(6.2773190964542485) _gate_q_15;
  t _gate_q_17;
  u2(1.9248137263140688, 5.046265582044006) _gate_q_9;
  ry(4.790444967733175) _gate_q_8;
  ch _gate_q_14, _gate_q_16;
  cx _gate_q_15, _gate_q_2;
  cu3_5074202560(2.49510036427994, 4.975188218592264, 5.689868933713043) _gate_q_3, _gate_q_1;
  t _gate_q_13;
  crx(2.8529530515220496) _gate_q_16, _gate_q_7;
  r_5074199104(6.005885697393054, 3.9306318823543074) _gate_q_4;
  dcx _gate_q_9, _gate_q_10;
  p(1.5854356163858117) _gate_q_8;
  x _gate_q_6;
  U(5.316657160061863, 1.6544805567468213, 6.220156015958048) _gate_q_11;
  y _gate_q_0;
  cx _gate_q_12, _gate_q_5;
  rzz_5074190560(6.07400177162379) _gate_q_17, _gate_q_14;
  ry(1.9708373002169501) _gate_q_13;
  t _gate_q_9;
  ryy_5074205392(5.599156728482568) _gate_q_1, _gate_q_6;
  r_5074204864(5.913755461142287, 3.992704163037684) _gate_q_8;
  y _gate_q_5;
  u3(0.6528858253552176, 2.720054135226187, 4.197353472223384) _gate_q_10;
  dcx _gate_q_7, _gate_q_3;
  cry(2.6886555876843876) _gate_q_16, _gate_q_11;
  rx(1.9515399255791568) _gate_q_14;
  s _gate_q_2;
  u1(4.631114180195516) _gate_q_4;
  crx(4.380254280736534) _gate_q_12, _gate_q_17;
  tdg _gate_q_0;
  sxdg _gate_q_15;
  y _gate_q_4;
  csx _gate_q_10, _gate_q_2;
  id _gate_q_17;
  s _gate_q_5;
  xx_minus_yy_5074204624(2.0986938313297547, 0.6814942486961058) _gate_q_3, _gate_q_6;
  swap _gate_q_15, _gate_q_13;
  crx(2.1556306868951522) _gate_q_11, _gate_q_12;
  y _gate_q_9;
  p(4.808302931787587) _gate_q_7;
  U(4.222231986127427, 5.8877343398268644, 0.9439462147844488) _gate_q_14;
  t _gate_q_16;
  U(0.24971239282787083, 0.7438222236785386, 1.4870603831208953) _gate_q_1;
  u1(2.6317858941743077) _gate_q_8;
  sxdg _gate_q_0;
  rzz_5074198672(4.812260799288128) _gate_q_0, _gate_q_6;
  dcx _gate_q_2, _gate_q_9;
  p(4.958006574626159) _gate_q_12;
  rzx_5074190464(3.7996559217491304) _gate_q_5, _gate_q_3;
  y _gate_q_10;
  rzx_5074198240(4.2858318214115245) _gate_q_17, _gate_q_1;
  rz(3.3002044633613385) _gate_q_15;
  ch _gate_q_13, _gate_q_14;
  sdg _gate_q_11;
  cp(3.872832931587633) _gate_q_16, _gate_q_4;
  p(4.065201338021553) _gate_q_8;
  s _gate_q_7;
  sdg _gate_q_8;
  ryy_5074202368(2.8581921816969347) _gate_q_16, _gate_q_13;
  t _gate_q_1;
  csdg _gate_q_0, _gate_q_5;
  ry(3.4768091982914235) _gate_q_4;
  u3(3.1470134456119814, 1.2797347139745812, 5.017035506116413) _gate_q_10;
  ryy_5069621584(4.86153837079147) _gate_q_15, _gate_q_7;
  x _gate_q_11;
  ch _gate_q_3, _gate_q_14;
  x _gate_q_12;
  csdg _gate_q_17, _gate_q_6;
  csx _gate_q_9, _gate_q_2;
}