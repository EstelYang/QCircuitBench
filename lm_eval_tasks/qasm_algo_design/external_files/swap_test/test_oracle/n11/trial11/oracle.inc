gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072971840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6101755133584787) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.671287235987715) _gate_q_0;
  ry(-2.671287235987715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6101755133584787) _gate_q_1;
}
gate xx_plus_yy_5072968144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.581153845230388) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4590127600556084) _gate_q_1;
  ry(-1.4590127600556084) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.581153845230388) _gate_q_0;
}
gate r_5072965744(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.936841791430834, 1.781948311953168, -1.781948311953168) _gate_q_0;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5072309568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.942044371105439) _gate_q_0;
  u1(-1.3333008100337713) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.701170789336906, 0, -4.942044371105439) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.701170789336906, 6.27534518113921, 0) _gate_q_1;
}
gate rzz_5072968576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.536692904959813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072969968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.769280894705729, 1.1476928118806597, -1.1476928118806597) _gate_q_0;
}
gate ryy_5072969728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.04064844145050756) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5072975248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9851962286077078) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.666714903459391) _gate_q_1;
  ry(-1.666714903459391) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9851962286077078) _gate_q_0;
}
gate rzz_5072969920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.117030781464222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5072968528(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4588427309586796) _gate_q_0;
  u1(-1.711023912743228) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7130420022046184, 0, -2.4588427309586796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7130420022046184, 4.169866643701908, 0) _gate_q_1;
}
gate ryy_5072241680(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7265415745008914) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  z _gate_q_8;
  cx _gate_q_4, _gate_q_7;
  u2(2.271730823177639, 2.074719451594484) _gate_q_6;
  rx(1.943815470497375) _gate_q_9;
  tdg _gate_q_0;
  u3(2.818150494943471, 0.3592836240912312, 5.019829197816165) _gate_q_10;
  ry(2.633998549026017) _gate_q_1;
  xx_minus_yy_5072971840(5.34257447197543, 1.6101755133584787) _gate_q_5, _gate_q_2;
  u2(5.7900675893686095, 6.1633638771465495) _gate_q_3;
  cu(1.5178570562803857, 0.853262464855846, 0.17203047896665113, 2.722809172964736) _gate_q_8, _gate_q_6;
  xx_plus_yy_5072968144(2.918025520111217, 5.581153845230388) _gate_q_5, _gate_q_7;
  rz(5.96821280440845) _gate_q_2;
  cp(2.22514825075182) _gate_q_0, _gate_q_1;
  r_5072965744(3.936841791430834, 3.3527446387480646) _gate_q_10;
  cry(3.176156061833772) _gate_q_4, _gate_q_9;
  t _gate_q_3;
  ch _gate_q_2, _gate_q_0;
  cx _gate_q_6, _gate_q_9;
  swap _gate_q_3, _gate_q_4;
  ch _gate_q_8, _gate_q_1;
  csx _gate_q_7, _gate_q_10;
  sdg _gate_q_5;
  ch _gate_q_6, _gate_q_2;
  rz(6.226773132148086) _gate_q_5;
  swap _gate_q_3, _gate_q_7;
  sxdg _gate_q_4;
  t _gate_q_9;
  csdg _gate_q_0, _gate_q_8;
  cp(4.757634383339011) _gate_q_1, _gate_q_10;
  cp(1.9865613391572556) _gate_q_6, _gate_q_7;
  u3(6.175095077991438, 1.4167226470080108, 0.4497485584024742) _gate_q_2;
  ecr _gate_q_5, _gate_q_3;
  cs _gate_q_10, _gate_q_1;
  crz(4.8725147641711395) _gate_q_8, _gate_q_4;
  crx(4.225423931243667) _gate_q_9, _gate_q_0;
  csx _gate_q_3, _gate_q_1;
  t _gate_q_0;
  crx(2.880175031227874) _gate_q_2, _gate_q_7;
  cu3_5072309568(5.402341578673812, 6.27534518113921, 3.6087435610716674) _gate_q_5, _gate_q_4;
  rzz_5072968576(4.536692904959813) _gate_q_8, _gate_q_6;
  rx(2.930529372730822) _gate_q_10;
  tdg _gate_q_9;
  y _gate_q_9;
  sx _gate_q_4;
  tdg _gate_q_0;
  r_5072969968(1.769280894705729, 2.7184891386755563) _gate_q_10;
  swap _gate_q_3, _gate_q_5;
  h _gate_q_8;
  sdg _gate_q_2;
  sdg _gate_q_6;
  id _gate_q_1;
  sx _gate_q_7;
  ryy_5072969728(0.04064844145050756) _gate_q_4, _gate_q_1;
  dcx _gate_q_9, _gate_q_10;
  p(1.244415119577079) _gate_q_7;
  u3(1.427458184525345, 1.7121288923709843, 1.8471397399607925) _gate_q_6;
  xx_plus_yy_5072975248(3.333429806918782, 1.9851962286077078) _gate_q_0, _gate_q_3;
  swap _gate_q_8, _gate_q_5;
  u3(5.771539056654882, 0.811210799798701, 1.2531318133792018) _gate_q_2;
  cz _gate_q_2, _gate_q_6;
  rzz_5072969920(5.117030781464222) _gate_q_7, _gate_q_4;
  ry(6.234980355844758) _gate_q_1;
  iswap _gate_q_0, _gate_q_3;
  u2(5.7662288553564, 4.778583116859203) _gate_q_8;
  p(3.61047420847834) _gate_q_9;
  cu3_5072968528(5.426084004409237, 4.169866643701908, 0.7478188182154515) _gate_q_10, _gate_q_5;
  cry(4.083908662020799) _gate_q_7, _gate_q_10;
  ryy_5072241680(3.7265415745008914) _gate_q_1, _gate_q_5;
  ch _gate_q_9, _gate_q_2;
  sdg _gate_q_0;
  u1(0.24243690241697954) _gate_q_3;
  t _gate_q_8;
  crz(1.5025815683997514) _gate_q_4, _gate_q_6;
}
gate r_5072243264(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.372813198767077, -0.8758308134441655, 0.8758308134441655) _gate_q_0;
}
gate xx_plus_yy_5072241488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.0693293540725876) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8014243998895212) _gate_q_1;
  ry(-1.8014243998895212) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.0693293540725876) _gate_q_0;
}
gate xx_plus_yy_5072251520(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.026094852277697) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0125706689563483) _gate_q_1;
  ry(-2.0125706689563483) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.026094852277697) _gate_q_0;
}
gate cu1_5072249456(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.48362126754020185) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.48362126754020185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.48362126754020185) _gate_q_1;
}
gate cu1_5072251424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.964949542447559) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.964949542447559) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.964949542447559) _gate_q_1;
}
gate cu1_5072242352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.108114984390601) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.108114984390601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.108114984390601) _gate_q_1;
}
gate rxx_5072243936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4035761407007263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5072245808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.643236821911902) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5160527702382451) _gate_q_0;
  ry(-1.5160527702382451) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.643236821911902) _gate_q_1;
}
gate xx_minus_yy_5072248976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.027539362210087365) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8927473247057932) _gate_q_0;
  ry(-0.8927473247057932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.027539362210087365) _gate_q_1;
}
gate r_5072249600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.70529017634335, 1.60039849493275, -1.60039849493275) _gate_q_0;
}
gate rzx_5072242208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4991665550277746) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072251616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.4559267075801112, 1.972198174580511, -1.972198174580511) _gate_q_0;
}
gate rxx_5072253248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.17530548531384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072251328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.432544050252946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  z _gate_q_3;
  r_5072243264(5.372813198767077, 0.6949655133507311) _gate_q_10;
  z _gate_q_4;
  y _gate_q_1;
  cs _gate_q_8, _gate_q_5;
  p(0.8390907640511197) _gate_q_6;
  xx_plus_yy_5072241488(3.6028487997790424, 0.0693293540725876) _gate_q_0, _gate_q_2;
  cz _gate_q_7, _gate_q_9;
  cry(1.4106833158159247) _gate_q_4, _gate_q_5;
  x _gate_q_6;
  csx _gate_q_1, _gate_q_10;
  ry(0.0012172037320712934) _gate_q_9;
  cz _gate_q_7, _gate_q_8;
  s _gate_q_0;
  xx_plus_yy_5072251520(4.025141337912697, 1.026094852277697) _gate_q_3, _gate_q_2;
  cu1_5072249456(0.9672425350804037) _gate_q_5, _gate_q_4;
  id _gate_q_7;
  sdg _gate_q_1;
  sdg _gate_q_2;
  crx(1.4600941546251747) _gate_q_6, _gate_q_0;
  t _gate_q_10;
  cu1_5072251424(5.929899084895118) _gate_q_8, _gate_q_3;
  u1(3.342556975231634) _gate_q_9;
  cu1_5072242352(2.216229968781202) _gate_q_4, _gate_q_6;
  rxx_5072243936(2.4035761407007263) _gate_q_10, _gate_q_8;
  ch _gate_q_9, _gate_q_7;
  rx(2.408495080038407) _gate_q_3;
  U(4.414800376431149, 2.8242951912183845, 5.7445031899733685) _gate_q_2;
  rx(5.554119736328921) _gate_q_1;
  U(6.157807457096788, 4.120360279148604, 2.6758564302997914) _gate_q_5;
  sx _gate_q_0;
  y _gate_q_3;
  xx_minus_yy_5072245808(3.0321055404764903, 2.643236821911902) _gate_q_0, _gate_q_10;
  s _gate_q_9;
  crz(2.9859591262648313) _gate_q_8, _gate_q_5;
  crz(5.543727128467234) _gate_q_6, _gate_q_1;
  t _gate_q_2;
  U(6.145291454744, 6.259260448208329, 4.5902675392238965) _gate_q_7;
  u3(1.1916650159720992, 0.16515098833759784, 0.7484879213147202) _gate_q_4;
  xx_minus_yy_5072248976(1.7854946494115864, 0.027539362210087365) _gate_q_7, _gate_q_0;
  x _gate_q_6;
  csx _gate_q_10, _gate_q_4;
  u1(5.643876359615754) _gate_q_2;
  id _gate_q_1;
  h _gate_q_5;
  cs _gate_q_8, _gate_q_3;
  sdg _gate_q_9;
  z _gate_q_6;
  x _gate_q_0;
  u3(1.7760582657492376, 3.5904075434596865, 4.069593622017972) _gate_q_2;
  p(1.02971651873752) _gate_q_8;
  r_5072249600(5.70529017634335, 3.1711948217276467) _gate_q_10;
  h _gate_q_1;
  t _gate_q_9;
  rzx_5072242208(3.4991665550277746) _gate_q_4, _gate_q_3;
  sxdg _gate_q_5;
  x _gate_q_7;
  r_5072251616(3.4559267075801112, 3.5429945013754076) _gate_q_7;
  ry(4.188936530408506) _gate_q_4;
  id _gate_q_0;
  cx _gate_q_10, _gate_q_1;
  u3(1.1196858659722488, 6.097563083483378, 1.7345699545813498) _gate_q_3;
  U(1.1679884855689218, 5.935248973425085, 0.062034898788488925) _gate_q_9;
  tdg _gate_q_2;
  cz _gate_q_6, _gate_q_5;
  rz(4.014735969388927) _gate_q_8;
  p(1.8326599734024744) _gate_q_7;
  s _gate_q_5;
  iswap _gate_q_9, _gate_q_2;
  cry(5.909786954881017) _gate_q_8, _gate_q_4;
  p(4.542073412706033) _gate_q_1;
  rxx_5072253248(5.17530548531384) _gate_q_0, _gate_q_3;
  crz(5.753400057997224) _gate_q_10, _gate_q_6;
  y _gate_q_3;
  dcx _gate_q_5, _gate_q_0;
  ecr _gate_q_9, _gate_q_7;
  tdg _gate_q_8;
  csx _gate_q_6, _gate_q_4;
  rzz_5072251328(2.432544050252946) _gate_q_1, _gate_q_2;
  h _gate_q_10;
}