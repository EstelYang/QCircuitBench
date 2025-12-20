gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
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
gate xx_minus_yy_5070725312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.6563547910752944) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6558043546340474) _gate_q_0;
  ry(-0.6558043546340474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.6563547910752944) _gate_q_1;
}
gate rzx_5070732752(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0854065519746707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070732608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2587271020798871) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2587271020798871) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2587271020798871) _gate_q_1;
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
gate rzz_5070726896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.273171511728555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5070721856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8059658275002572) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070733280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3284814681999331) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3284814681999331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3284814681999331) _gate_q_1;
}
gate cu1_5070729440(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.058734760581595) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.058734760581595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.058734760581595) _gate_q_1;
}
gate cu3_5070727856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5420375545152054) _gate_q_0;
  u1(-0.8753235050496991) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.039987418749751404, 0, -1.5420375545152054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.039987418749751404, 2.4173610595649047, 0) _gate_q_1;
}
gate r_5070724784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5048967308853207, 0.8328799870085772, -0.8328799870085772) _gate_q_0;
}
gate rzx_5070726608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.623354397349216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5070723392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.264930458112583) _gate_q_1;
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
gate ryy_5070723920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.348149254392618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5070723584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0451404732717966) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0451404732717966) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0451404732717966) _gate_q_1;
}
gate xx_minus_yy_5070718304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.169736301196521) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4679457606480617) _gate_q_0;
  ry(-2.4679457606480617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.169736301196521) _gate_q_1;
}
gate xx_plus_yy_5070730880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9584921687759054) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7698904598522085) _gate_q_1;
  ry(-2.7698904598522085) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9584921687759054) _gate_q_0;
}
gate rxx_5070727376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.867071417478584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  id _gate_q_10;
  iswap _gate_q_6, _gate_q_2;
  ry(4.4229876243334205) _gate_q_14;
  dcx _gate_q_15, _gate_q_9;
  xx_minus_yy_5070725312(1.3116087092680948, 0.6563547910752944) _gate_q_3, _gate_q_13;
  z _gate_q_8;
  id _gate_q_0;
  crz(0.874485878363932) _gate_q_5, _gate_q_1;
  ch _gate_q_11, _gate_q_7;
  tdg _gate_q_12;
  rzx_5070732752(2.0854065519746707) _gate_q_4, _gate_q_16;
  cu1_5070732608(2.5174542041597743) _gate_q_4, _gate_q_3;
  cry(0.6095240142586618) _gate_q_16, _gate_q_12;
  sdg _gate_q_14;
  tdg _gate_q_1;
  cry(6.117369311888622) _gate_q_2, _gate_q_0;
  dcx _gate_q_5, _gate_q_7;
  cz _gate_q_8, _gate_q_9;
  z _gate_q_6;
  ch _gate_q_10, _gate_q_15;
  cp(0.9594196983624315) _gate_q_11, _gate_q_13;
  U(4.178946098459781, 6.178024849559588, 5.664708296837395) _gate_q_5;
  s _gate_q_10;
  csx _gate_q_13, _gate_q_7;
  crx(1.7867084713508594) _gate_q_14, _gate_q_16;
  cs _gate_q_15, _gate_q_9;
  cs _gate_q_1, _gate_q_12;
  t _gate_q_2;
  x _gate_q_11;
  csdg _gate_q_8, _gate_q_6;
  rzz_5070726896(5.273171511728555) _gate_q_0, _gate_q_3;
  sxdg _gate_q_4;
  id _gate_q_9;
  ch _gate_q_11, _gate_q_3;
  s _gate_q_10;
  U(3.039117613515986, 3.71393101909614, 2.403061604965102) _gate_q_14;
  t _gate_q_2;
  sdg _gate_q_13;
  sx _gate_q_16;
  cz _gate_q_15, _gate_q_4;
  sxdg _gate_q_8;
  iswap _gate_q_7, _gate_q_12;
  rz(3.328307225716259) _gate_q_1;
  iswap _gate_q_6, _gate_q_0;
  t _gate_q_5;
  u1(2.550107770827773) _gate_q_15;
  y _gate_q_9;
  csdg _gate_q_13, _gate_q_5;
  dcx _gate_q_16, _gate_q_11;
  ch _gate_q_6, _gate_q_7;
  rzz_5070721856(3.8059658275002572) _gate_q_0, _gate_q_14;
  u1(1.445325116037585) _gate_q_2;
  y _gate_q_12;
  cu1_5070733280(0.6569629363998662) _gate_q_4, _gate_q_8;
  u1(5.780468569433076) _gate_q_1;
  csx _gate_q_3, _gate_q_10;
  cu1_5070729440(2.11746952116319) _gate_q_7, _gate_q_9;
  crz(0.589755535007376) _gate_q_4, _gate_q_12;
  cry(6.188969355156261) _gate_q_6, _gate_q_15;
  x _gate_q_5;
  cy _gate_q_3, _gate_q_10;
  U(4.39964835380164, 1.8844722919446637, 5.919241844579031) _gate_q_13;
  h _gate_q_8;
  tdg _gate_q_16;
  cu(1.2645552649954102, 2.4986359211554716, 4.7091899812729565, 2.7003260502935316) _gate_q_11, _gate_q_1;
  cu3_5070727856(0.07997483749950281, 2.4173610595649047, 0.6667140494655064) _gate_q_2, _gate_q_14;
  y _gate_q_0;
  r_5070724784(3.5048967308853207, 2.403676313803474) _gate_q_9;
  cx _gate_q_3, _gate_q_6;
  rzx_5070726608(5.623354397349216) _gate_q_0, _gate_q_11;
  tdg _gate_q_4;
  ryy_5070723392(5.264930458112583) _gate_q_14, _gate_q_7;
  U(2.0103354620540093, 1.7026212627213468, 1.7049560055479747) _gate_q_10;
  dcx _gate_q_5, _gate_q_1;
  ecr _gate_q_15, _gate_q_13;
  ryy_5070723920(5.348149254392618) _gate_q_2, _gate_q_12;
  U(3.128712913290663, 5.145572662649745, 4.588804138777506) _gate_q_16;
  tdg _gate_q_8;
  tdg _gate_q_5;
  cy _gate_q_11, _gate_q_1;
  cz _gate_q_3, _gate_q_9;
  z _gate_q_13;
  cu1_5070723584(2.090280946543593) _gate_q_14, _gate_q_7;
  h _gate_q_8;
  cy _gate_q_0, _gate_q_15;
  csx _gate_q_12, _gate_q_6;
  tdg _gate_q_2;
  y _gate_q_10;
  z _gate_q_16;
  sxdg _gate_q_4;
  s _gate_q_4;
  s _gate_q_12;
  ecr _gate_q_13, _gate_q_10;
  u3(2.1151327486836595, 3.254397067069196, 2.2327402052260967) _gate_q_3;
  cs _gate_q_16, _gate_q_1;
  s _gate_q_15;
  xx_minus_yy_5070718304(4.935891521296123, 4.169736301196521) _gate_q_11, _gate_q_2;
  iswap _gate_q_6, _gate_q_9;
  crx(5.773254239826185) _gate_q_7, _gate_q_14;
  h _gate_q_0;
  s _gate_q_5;
  x _gate_q_8;
  sxdg _gate_q_8;
  dcx _gate_q_7, _gate_q_6;
  xx_plus_yy_5070730880(5.539780919704417, 2.9584921687759054) _gate_q_12, _gate_q_3;
  u1(1.9397327978291614) _gate_q_11;
  rxx_5070727376(2.867071417478584) _gate_q_5, _gate_q_9;
  cx _gate_q_1, _gate_q_4;
  s _gate_q_16;
  cs _gate_q_13, _gate_q_10;
  z _gate_q_0;
  ch _gate_q_2, _gate_q_15;
  u2(1.0671186359982217, 3.196081688094036) _gate_q_14;
}
gate ryy_5070723008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.140627933419989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070725168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.350998511536762) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070724352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.379100224780956) _gate_q_0;
  u1(0.257629783450148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5615965430363347, 0, -5.379100224780956) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5615965430363347, 5.121470441330808, 0) _gate_q_1;
}
gate xx_plus_yy_5070717776(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.598817103413885) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3877130272914663) _gate_q_1;
  ry(-0.3877130272914663) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.598817103413885) _gate_q_0;
}
gate rzz_5070731360(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.909529287035884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070730544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.25067353391968) _gate_q_0;
  u1(1.7115995081942341) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2417023662003277, 0, -4.25067353391968) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2417023662003277, 2.5390740257254456, 0) _gate_q_1;
}
gate xx_plus_yy_5070717488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.029379712390536) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.713545047393991) _gate_q_1;
  ry(-2.713545047393991) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.029379712390536) _gate_q_0;
}
gate rzz_5070733136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.7623234925563961) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070733232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.659116881211772) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9829722649446946) _gate_q_0;
  ry(-1.9829722649446946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.659116881211772) _gate_q_1;
}
gate rzx_5070721760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.799877564193142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070724016(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.163611274118726) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.24019675027938625) _gate_q_0;
  ry(-0.24019675027938625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.163611274118726) _gate_q_1;
}
gate cu1_5070725744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8245106180720551) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8245106180720551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8245106180720551) _gate_q_1;
}
gate cu1_5070718400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.696877784328424) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.696877784328424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.696877784328424) _gate_q_1;
}
gate cu3_5070732320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.716596911417556) _gate_q_0;
  u1(-0.1716974271311189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.02915681930183, 0, -4.716596911417556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.02915681930183, 4.888294338548675, 0) _gate_q_1;
}
gate rzx_5070719360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4140733442243345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070731168(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.1413905517473606) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.1413905517473606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.1413905517473606) _gate_q_1;
}
gate rxx_5070730208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.279150818753102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070724736(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.415811257245549) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16 {
  swap _gate_q_16, _gate_q_15;
  t _gate_q_11;
  ryy_5070723008(5.140627933419989) _gate_q_14, _gate_q_9;
  crx(2.49565242837427) _gate_q_8, _gate_q_2;
  id _gate_q_10;
  cs _gate_q_12, _gate_q_13;
  crz(4.779160253796443) _gate_q_6, _gate_q_3;
  z _gate_q_4;
  iswap _gate_q_5, _gate_q_1;
  dcx _gate_q_0, _gate_q_7;
  dcx _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_12;
  sxdg _gate_q_7;
  sx _gate_q_9;
  cs _gate_q_8, _gate_q_15;
  ryy_5070725168(4.350998511536762) _gate_q_13, _gate_q_11;
  sxdg _gate_q_1;
  cu3_5070724352(1.1231930860726693, 5.121470441330808, 5.636730008231104) _gate_q_4, _gate_q_3;
  cy _gate_q_16, _gate_q_10;
  xx_plus_yy_5070717776(0.7754260545829326, 3.598817103413885) _gate_q_6, _gate_q_14;
  cry(1.5773963399494126) _gate_q_11, _gate_q_9;
  y _gate_q_12;
  ch _gate_q_15, _gate_q_3;
  ch _gate_q_8, _gate_q_6;
  iswap _gate_q_13, _gate_q_14;
  s _gate_q_16;
  rz(0.7108807968923749) _gate_q_2;
  dcx _gate_q_5, _gate_q_10;
  rzz_5070731360(1.909529287035884) _gate_q_0, _gate_q_1;
  y _gate_q_4;
  u1(0.8003083932778347) _gate_q_7;
  U(1.8958392040203589, 4.708286027134929, 0.6531243534084339) _gate_q_9;
  csdg _gate_q_14, _gate_q_3;
  cu3_5070730544(2.4834047324006554, 2.5390740257254456, 5.962273042113914) _gate_q_4, _gate_q_13;
  sdg _gate_q_2;
  xx_plus_yy_5070717488(5.427090094787982, 5.029379712390536) _gate_q_1, _gate_q_7;
  p(2.4286361584415395) _gate_q_12;
  csdg _gate_q_11, _gate_q_6;
  crx(0.18708434092703582) _gate_q_5, _gate_q_0;
  rzz_5070733136(0.7623234925563961) _gate_q_10, _gate_q_8;
  id _gate_q_16;
  t _gate_q_15;
  xx_minus_yy_5070733232(3.965944529889389, 5.659116881211772) _gate_q_0, _gate_q_4;
  crx(2.6321875848940812) _gate_q_13, _gate_q_15;
  ch _gate_q_5, _gate_q_6;
  ch _gate_q_7, _gate_q_12;
  cz _gate_q_16, _gate_q_9;
  rzx_5070721760(5.799877564193142) _gate_q_1, _gate_q_14;
  cx _gate_q_8, _gate_q_2;
  crx(6.205100631510831) _gate_q_11, _gate_q_10;
  U(0.7404641055113002, 1.2747061947843414, 0.23153998342499835) _gate_q_3;
  z _gate_q_2;
  cry(2.5169665220665363) _gate_q_1, _gate_q_5;
  u2(3.2023954136489685, 3.378830175803305) _gate_q_7;
  cz _gate_q_15, _gate_q_11;
  sxdg _gate_q_12;
  cx _gate_q_10, _gate_q_0;
  cu(2.555665611615497, 3.4194223786087035, 1.5104249317361618, 0.3043977442349325) _gate_q_6, _gate_q_4;
  u3(4.977589800859234, 1.5488407531452502, 3.1274741971442452) _gate_q_13;
  iswap _gate_q_8, _gate_q_9;
  xx_minus_yy_5070724016(0.4803935005587725, 5.163611274118726) _gate_q_14, _gate_q_3;
  sdg _gate_q_16;
  cu1_5070725744(1.6490212361441101) _gate_q_12, _gate_q_6;
  cu1_5070718400(5.393755568656848) _gate_q_11, _gate_q_1;
  crx(5.738636789968424) _gate_q_0, _gate_q_7;
  cu(5.11191268878214, 1.7862083429517395, 0.39096840021669915, 4.7678033630489995) _gate_q_14, _gate_q_10;
  s _gate_q_5;
  cu3_5070732320(6.05831363860366, 4.888294338548675, 4.544899484286437) _gate_q_15, _gate_q_9;
  csx _gate_q_3, _gate_q_2;
  x _gate_q_8;
  z _gate_q_4;
  ch _gate_q_13, _gate_q_16;
  rx(3.6719465625890995) _gate_q_15;
  csdg _gate_q_9, _gate_q_16;
  z _gate_q_1;
  cry(2.311548564708991) _gate_q_4, _gate_q_7;
  iswap _gate_q_5, _gate_q_14;
  y _gate_q_3;
  dcx _gate_q_0, _gate_q_6;
  x _gate_q_13;
  csx _gate_q_8, _gate_q_2;
  u3(2.07936660266895, 0.08935415573501143, 3.3069761140705602) _gate_q_11;
  ecr _gate_q_10, _gate_q_12;
  rzx_5070719360(2.4140733442243345) _gate_q_3, _gate_q_15;
  h _gate_q_14;
  cy _gate_q_5, _gate_q_9;
  cu1_5070731168(4.282781103494721) _gate_q_2, _gate_q_8;
  u3(2.3963327666091163, 0.001862537154391135, 0.6650199567192357) _gate_q_1;
  dcx _gate_q_11, _gate_q_13;
  rxx_5070730208(6.279150818753102) _gate_q_7, _gate_q_12;
  ryy_5070724736(4.415811257245549) _gate_q_10, _gate_q_6;
  swap _gate_q_16, _gate_q_4;
  p(5.055162045642116) _gate_q_0;
  cs _gate_q_14, _gate_q_9;
  ch _gate_q_2, _gate_q_16;
  p(1.570343216505235) _gate_q_1;
  h _gate_q_4;
  rz(2.6310330119779066) _gate_q_3;
  y _gate_q_10;
  cs _gate_q_7, _gate_q_11;
  dcx _gate_q_5, _gate_q_15;
  p(2.421742872464406) _gate_q_12;
  sdg _gate_q_6;
  p(3.050259574116042) _gate_q_0;
  cz _gate_q_8, _gate_q_13;
}