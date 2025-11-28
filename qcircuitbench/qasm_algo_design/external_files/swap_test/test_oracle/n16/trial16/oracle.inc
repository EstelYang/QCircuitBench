gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate ryy_5074766160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.222142702835339) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5074765200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.9896890217308094, 3.8657555840104507, -3.8657555840104507) _gate_q_0;
}
gate r_5074764432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.121902635009674, -1.5292055725827842, 1.5292055725827842) _gate_q_0;
}
gate rzz_5074775040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.005013685530618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074771728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.842045315130506) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.370147342632194) _gate_q_1;
  ry(-2.370147342632194) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.842045315130506) _gate_q_0;
}
gate xx_minus_yy_5074768800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.104088529098436) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3274673070084497) _gate_q_0;
  ry(-2.3274673070084497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.104088529098436) _gate_q_1;
}
gate rxx_5074764384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.519489983773694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074766064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.059642997486497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu1_5074770000(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8101937725234283) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8101937725234283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8101937725234283) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5074767360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2469521224310913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5074779024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6178127544787643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5074766784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3979634635858786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074766400(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.413642004612946) _gate_q_0;
  u1(1.168727947460627) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7454727766220672, 0, -4.413642004612946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7454727766220672, 3.244914057152319, 0) _gate_q_1;
}
gate cu1_5074766544(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4783002798311908) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4783002798311908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4783002798311908) _gate_q_1;
}
gate rxx_5074764816(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.142669755611403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074766736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.738059558054269) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074769280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3989675540766854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074774752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2684842552801148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074768368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5272188621432325) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11411882469822172) _gate_q_1;
  ry(-0.11411882469822172) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5272188621432325) _gate_q_0;
}
gate cu1_5074772448(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9360439264430178) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9360439264430178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9360439264430178) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  sdg _gate_q_11;
  t _gate_q_6;
  y _gate_q_2;
  s _gate_q_5;
  swap _gate_q_15, _gate_q_4;
  cu(2.9201537731475136, 3.5782679504429753, 3.3123546347515327, 4.4980402599014475) _gate_q_9, _gate_q_1;
  sxdg _gate_q_13;
  crx(3.1063508837533584) _gate_q_8, _gate_q_10;
  cu(1.6110441426667774, 2.5578397321622948, 5.256992948060832, 2.3866558483020737) _gate_q_7, _gate_q_14;
  rz(2.4114809879324066) _gate_q_3;
  cy _gate_q_0, _gate_q_12;
  cs _gate_q_4, _gate_q_11;
  csx _gate_q_0, _gate_q_6;
  rx(1.7115807983007674) _gate_q_12;
  ryy_5074766160(6.222142702835339) _gate_q_2, _gate_q_9;
  sxdg _gate_q_5;
  y _gate_q_7;
  csdg _gate_q_3, _gate_q_10;
  r_5074765200(1.9896890217308094, 5.436551910805347) _gate_q_1;
  r_5074764432(4.121902635009674, 0.04159075421211239) _gate_q_15;
  sdg _gate_q_8;
  sxdg _gate_q_14;
  t _gate_q_13;
  csx _gate_q_9, _gate_q_8;
  p(0.07574946724352835) _gate_q_7;
  y _gate_q_10;
  cu(3.8417923092971265, 5.374702519856365, 3.2375505948125065, 5.5028594465035034) _gate_q_5, _gate_q_3;
  sdg _gate_q_0;
  p(4.3006232866335505) _gate_q_1;
  y _gate_q_13;
  cu(1.3799758339500408, 0.11398374589332037, 0.5135548988190547, 5.597828718887504) _gate_q_4, _gate_q_12;
  t _gate_q_15;
  sdg _gate_q_14;
  rzz_5074775040(3.005013685530618) _gate_q_2, _gate_q_6;
  t _gate_q_11;
  xx_plus_yy_5074771728(4.740294685264388, 4.842045315130506) _gate_q_5, _gate_q_6;
  rx(1.030498546516002) _gate_q_9;
  xx_minus_yy_5074768800(4.6549346140168995, 5.104088529098436) _gate_q_1, _gate_q_15;
  crx(0.46879930175963924) _gate_q_14, _gate_q_2;
  h _gate_q_4;
  rxx_5074764384(2.519489983773694) _gate_q_3, _gate_q_10;
  rxx_5074766064(4.059642997486497) _gate_q_0, _gate_q_7;
  csx _gate_q_8, _gate_q_11;
  tdg _gate_q_12;
  p(1.2494649710525199) _gate_q_13;
  h _gate_q_11;
  rx(5.582434595010412) _gate_q_10;
  t _gate_q_7;
  z _gate_q_15;
  crz(4.806240862515231) _gate_q_1, _gate_q_9;
  tdg _gate_q_2;
  ecr _gate_q_0, _gate_q_4;
  ry(5.90198628064919) _gate_q_5;
  u2(1.4808823323533582, 3.5357656715785994) _gate_q_12;
  cu1_5074770000(5.620387545046857) _gate_q_6, _gate_q_13;
  x _gate_q_3;
  u1(3.808320996663496) _gate_q_14;
  id _gate_q_8;
  iswap _gate_q_12, _gate_q_15;
  sxdg _gate_q_3;
  t _gate_q_10;
  rzx_5074767360(3.2469521224310913) _gate_q_13, _gate_q_0;
  ryy_5074779024(0.6178127544787643) _gate_q_9, _gate_q_11;
  csx _gate_q_2, _gate_q_6;
  p(5.417769934358295) _gate_q_14;
  dcx _gate_q_8, _gate_q_4;
  csdg _gate_q_1, _gate_q_5;
  sx _gate_q_7;
  iswap _gate_q_6, _gate_q_14;
  swap _gate_q_0, _gate_q_4;
  cx _gate_q_11, _gate_q_10;
  cp(3.564578433345737) _gate_q_1, _gate_q_8;
  rzz_5074766784(1.3979634635858786) _gate_q_12, _gate_q_15;
  cu3_5074766400(3.4909455532441345, 3.244914057152319, 5.582369952073573) _gate_q_2, _gate_q_9;
  cu1_5074766544(2.9566005596623817) _gate_q_7, _gate_q_13;
  crz(3.775840670300044) _gate_q_3, _gate_q_5;
  crx(5.696215169920932) _gate_q_1, _gate_q_8;
  rxx_5074764816(5.142669755611403) _gate_q_13, _gate_q_14;
  dcx _gate_q_5, _gate_q_4;
  ecr _gate_q_2, _gate_q_3;
  cz _gate_q_6, _gate_q_9;
  u2(5.685231763037107, 6.223969649278831) _gate_q_10;
  sdg _gate_q_0;
  rxx_5074766736(2.738059558054269) _gate_q_15, _gate_q_12;
  rz(2.6049285451322257) _gate_q_11;
  tdg _gate_q_7;
  ecr _gate_q_13, _gate_q_11;
  cz _gate_q_3, _gate_q_5;
  s _gate_q_8;
  u2(3.7172323603710757, 1.9700349363543874) _gate_q_12;
  u2(4.682747165051581, 1.6929739277920037) _gate_q_9;
  U(0.12279356349388962, 4.579128864901268, 5.013526033618087) _gate_q_1;
  U(5.707087946454236, 5.151824570544249, 1.5660422803996696) _gate_q_2;
  cu(3.327135217032712, 0.3858331118229105, 4.080334130302071, 0.33558858127563657) _gate_q_6, _gate_q_4;
  id _gate_q_15;
  u1(5.503460082999521) _gate_q_14;
  rzx_5074769280(0.3989675540766854) _gate_q_7, _gate_q_10;
  sdg _gate_q_0;
  crz(2.8160124069292802) _gate_q_8, _gate_q_4;
  sdg _gate_q_1;
  ry(6.149239678664651) _gate_q_5;
  U(4.677435973782327, 3.5920224853061105, 1.7374517948818) _gate_q_0;
  rxx_5074774752(2.2684842552801148) _gate_q_2, _gate_q_6;
  xx_plus_yy_5074768368(0.22823764939644345, 0.5272188621432325) _gate_q_9, _gate_q_14;
  s _gate_q_3;
  cu1_5074772448(3.8720878528860356) _gate_q_10, _gate_q_13;
  crz(0.7336157834919947) _gate_q_7, _gate_q_12;
  ch _gate_q_15, _gate_q_11;
}
gate cu1_5074771392(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2417941451684966) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2417941451684966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2417941451684966) _gate_q_1;
}
gate rxx_5074778064(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8546162934317874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074768224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.937809457235483) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.062739579656099) _gate_q_1;
  ry(-2.062739579656099) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.937809457235483) _gate_q_0;
}
gate rzx_5074770576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.062901911121255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074773360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.109061659942353) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074772400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9949067304659769) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074775856(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.968350225101587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074773696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.27732449775010676) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.552326971254326) _gate_q_1;
  ry(-2.552326971254326) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.27732449775010676) _gate_q_0;
}
gate cu1_5074768560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9828111243040832) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9828111243040832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9828111243040832) _gate_q_1;
}
gate cu3_5074773408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0133888105001936) _gate_q_0;
  u1(-1.762504405543495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8718592158178924, 0, -3.0133888105001936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8718592158178924, 4.775893216043689, 0) _gate_q_1;
}
gate r_5074775328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4028133389849007, -0.934917094957294, 0.934917094957294) _gate_q_0;
}
gate xx_minus_yy_5074777296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.0289549751296274) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8629261114826925) _gate_q_0;
  ry(-1.8629261114826925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.0289549751296274) _gate_q_1;
}
gate rxx_5074773984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8552762354368058) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074773552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.06110853909013485) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0628008735538033) _gate_q_0;
  ry(-2.0628008735538033) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.06110853909013485) _gate_q_1;
}
gate xx_plus_yy_5074774704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.697072639429677) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.709238800896792) _gate_q_1;
  ry(-2.709238800896792) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.697072639429677) _gate_q_0;
}
gate xx_plus_yy_5074776000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.49935422255603523) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5123479790966504) _gate_q_1;
  ry(-0.5123479790966504) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.49935422255603523) _gate_q_0;
}
gate cu3_5074773840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.612203851039501) _gate_q_0;
  u1(-0.6668393878799046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5916488407193536, 0, -2.612203851039501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5916488407193536, 3.2790432389194057, 0) _gate_q_1;
}
gate rzx_5074778160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9694909552776982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074774800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1350877190863673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074778976(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.705088547276319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074765968(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.313168219784383, 3.0183317677523167, -3.0183317677523167) _gate_q_0;
}
gate rzz_5074765728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.211602327416759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  cu1_5074771392(2.4835882903369932) _gate_q_8, _gate_q_15;
  cx _gate_q_6, _gate_q_3;
  id _gate_q_7;
  ry(6.173051735174017) _gate_q_12;
  ry(6.276725006345266) _gate_q_0;
  csdg _gate_q_11, _gate_q_10;
  cy _gate_q_13, _gate_q_9;
  swap _gate_q_2, _gate_q_4;
  rxx_5074778064(3.8546162934317874) _gate_q_1, _gate_q_14;
  ry(4.2527684408812245) _gate_q_5;
  ch _gate_q_15, _gate_q_12;
  xx_plus_yy_5074768224(4.125479159312198, 5.937809457235483) _gate_q_7, _gate_q_0;
  rzx_5074770576(5.062901911121255) _gate_q_13, _gate_q_5;
  h _gate_q_1;
  sx _gate_q_14;
  csx _gate_q_3, _gate_q_9;
  U(0.49233048187347395, 4.281837153331746, 4.901693722269688) _gate_q_2;
  cu(2.7199937697388745, 3.834924970687396, 2.0089837181504646, 5.95745734603653) _gate_q_8, _gate_q_10;
  cry(3.5070597982740224) _gate_q_11, _gate_q_6;
  t _gate_q_4;
  y _gate_q_12;
  rxx_5074773360(5.109061659942353) _gate_q_13, _gate_q_5;
  u3(4.181044597983903, 5.944626821253103, 2.660050261139667) _gate_q_3;
  ry(2.939665612342227) _gate_q_2;
  rzx_5074772400(1.9949067304659769) _gate_q_10, _gate_q_0;
  ecr _gate_q_6, _gate_q_11;
  sdg _gate_q_15;
  rzx_5074775856(4.968350225101587) _gate_q_4, _gate_q_9;
  id _gate_q_14;
  z _gate_q_7;
  crz(5.874886379102602) _gate_q_8, _gate_q_1;
  u2(4.732958800371005, 2.7173684448364925) _gate_q_10;
  xx_plus_yy_5074773696(5.104653942508652, 0.27732449775010676) _gate_q_5, _gate_q_3;
  cu(1.2752415787081801, 1.2075142378004442, 5.596391109710882, 3.8276841114666302) _gate_q_0, _gate_q_12;
  cry(5.9467193087842904) _gate_q_4, _gate_q_15;
  cu1_5074768560(1.9656222486081665) _gate_q_2, _gate_q_8;
  tdg _gate_q_14;
  U(2.8436794524600475, 3.5815724086798615, 2.9402608781160673) _gate_q_7;
  swap _gate_q_13, _gate_q_1;
  cry(4.477022529498614) _gate_q_9, _gate_q_6;
  u3(6.0516142307362975, 2.4327550199857546, 5.086118996482664) _gate_q_11;
  cu3_5074773408(1.7437184316357848, 4.775893216043689, 1.2508844049566985) _gate_q_4, _gate_q_3;
  cp(1.9747673356334432) _gate_q_12, _gate_q_9;
  id _gate_q_1;
  r_5074775328(1.4028133389849007, 0.6358792318376025) _gate_q_10;
  tdg _gate_q_5;
  p(3.822821706878412) _gate_q_13;
  rx(5.060553914838496) _gate_q_7;
  cp(3.731598088292321) _gate_q_14, _gate_q_11;
  sdg _gate_q_2;
  csdg _gate_q_8, _gate_q_6;
  ch _gate_q_0, _gate_q_15;
  xx_minus_yy_5074777296(3.725852222965385, 0.0289549751296274) _gate_q_14, _gate_q_4;
  crz(3.3344965933515573) _gate_q_5, _gate_q_9;
  rxx_5074773984(1.8552762354368058) _gate_q_11, _gate_q_1;
  xx_minus_yy_5074773552(4.1256017471076065, 0.06110853909013485) _gate_q_6, _gate_q_10;
  xx_plus_yy_5074774704(5.418477601793584, 3.697072639429677) _gate_q_7, _gate_q_13;
  csx _gate_q_8, _gate_q_15;
  iswap _gate_q_12, _gate_q_0;
  xx_plus_yy_5074776000(1.0246959581933008, 0.49935422255603523) _gate_q_2, _gate_q_3;
  iswap _gate_q_15, _gate_q_12;
  csdg _gate_q_3, _gate_q_9;
  s _gate_q_5;
  u2(4.132075647431876, 2.2920208855867092) _gate_q_1;
  ch _gate_q_14, _gate_q_13;
  cu3_5074773840(1.1832976814387073, 3.2790432389194057, 1.9453644631595965) _gate_q_8, _gate_q_0;
  crx(5.304896156071565) _gate_q_7, _gate_q_11;
  ch _gate_q_2, _gate_q_10;
  ry(1.0786164094974346) _gate_q_6;
  x _gate_q_4;
  x _gate_q_1;
  sxdg _gate_q_15;
  u2(1.1887652011817589, 4.62613436112695) _gate_q_7;
  csx _gate_q_13, _gate_q_10;
  tdg _gate_q_8;
  rzx_5074778160(2.9694909552776982) _gate_q_14, _gate_q_3;
  rxx_5074774800(3.1350877190863673) _gate_q_12, _gate_q_5;
  sx _gate_q_0;
  crx(2.4603455432048915) _gate_q_2, _gate_q_6;
  u2(1.9059520444876061, 6.201880573386543) _gate_q_11;
  u3(3.935111282113914, 5.8840569470088315, 4.717283881159368) _gate_q_9;
  sdg _gate_q_4;
  iswap _gate_q_8, _gate_q_0;
  sx _gate_q_7;
  p(5.003280953649288) _gate_q_13;
  p(3.0589200225657427) _gate_q_4;
  crx(5.508950463368052) _gate_q_5, _gate_q_14;
  rz(0.06898291887704001) _gate_q_11;
  iswap _gate_q_6, _gate_q_1;
  sx _gate_q_9;
  cry(0.7718930548248151) _gate_q_10, _gate_q_3;
  rzx_5074778976(2.705088547276319) _gate_q_2, _gate_q_15;
  u3(2.6229983253774765, 0.1409981135790613, 1.6669488189844641) _gate_q_12;
  crz(3.8832735240613103) _gate_q_9, _gate_q_6;
  r_5074765968(3.313168219784383, 4.589128094547213) _gate_q_13;
  sxdg _gate_q_14;
  swap _gate_q_3, _gate_q_12;
  rzz_5074765728(4.211602327416759) _gate_q_15, _gate_q_7;
  cry(4.305055917163988) _gate_q_5, _gate_q_1;
  ch _gate_q_11, _gate_q_4;
  iswap _gate_q_2, _gate_q_10;
  ecr _gate_q_0, _gate_q_8;
}