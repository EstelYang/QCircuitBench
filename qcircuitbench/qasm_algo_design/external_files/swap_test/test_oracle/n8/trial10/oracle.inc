gate r_5106012368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.502982171448617, 1.2909670722524358, -1.2909670722524358) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106019760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3127598099504763) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.842416033181129) _gate_q_0;
  ry(-0.842416033181129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3127598099504763) _gate_q_1;
}
gate cu1_5106022496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0782847718723174) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0782847718723174) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0782847718723174) _gate_q_1;
}
gate cu1_5106020288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.5565057546636796) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.5565057546636796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.5565057546636796) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5106011504(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.1282167296823382, 0.22419560652637194, -0.22419560652637194) _gate_q_0;
}
gate cu3_5106014096(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0121671166016153) _gate_q_0;
  u1(-0.4203323612734591) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8072583729720093, 0, -2.0121671166016153) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8072583729720093, 2.4324994778750746, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5106014432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9350695523079147) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7751944264619384) _gate_q_0;
  ry(-0.7751944264619384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9350695523079147) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  crz(5.679197749727445) _gate_q_0, _gate_q_3;
  r_5106012368(4.502982171448617, 2.8617633990473323) _gate_q_7;
  tdg _gate_q_1;
  xx_minus_yy_5106019760(1.684832066362258, 1.3127598099504763) _gate_q_6, _gate_q_2;
  ry(2.9714837333621476) _gate_q_5;
  tdg _gate_q_4;
  t _gate_q_4;
  ry(4.623886336548352) _gate_q_1;
  cu1_5106022496(2.156569543744635) _gate_q_6, _gate_q_3;
  cx _gate_q_2, _gate_q_0;
  cu1_5106020288(5.113011509327359) _gate_q_5, _gate_q_7;
  z _gate_q_7;
  p(5.8770263447691455) _gate_q_6;
  u1(1.6400667444382178) _gate_q_0;
  csx _gate_q_3, _gate_q_2;
  s _gate_q_4;
  h _gate_q_5;
  sx _gate_q_1;
  u3(2.420658270485416, 2.6013814773852793, 5.743674634710449) _gate_q_4;
  ecr _gate_q_5, _gate_q_6;
  u2(6.22224184963235, 5.196364314588056) _gate_q_2;
  U(2.1672895896300597, 4.99805751987332, 6.107321817625654) _gate_q_0;
  y _gate_q_3;
  id _gate_q_1;
  rx(2.8640134866376012) _gate_q_7;
  sx _gate_q_0;
  cry(4.028932258093387) _gate_q_4, _gate_q_2;
  z _gate_q_3;
  iswap _gate_q_5, _gate_q_7;
  t _gate_q_6;
  U(0.7207239572771812, 1.202250119906132, 2.56053713398764) _gate_q_1;
  u1(2.8924532758345665) _gate_q_4;
  u1(5.386922840943791) _gate_q_1;
  crx(4.515240126099291) _gate_q_0, _gate_q_5;
  cs _gate_q_6, _gate_q_2;
  U(5.153254569318517, 0.13148210669738633, 0.8477139034920611) _gate_q_3;
  r_5106011504(0.1282167296823382, 1.7949919333212685) _gate_q_7;
  t _gate_q_6;
  iswap _gate_q_1, _gate_q_3;
  cu3_5106014096(3.6145167459440186, 2.4324994778750746, 1.5918347553281564) _gate_q_7, _gate_q_5;
  dcx _gate_q_0, _gate_q_2;
  z _gate_q_4;
  crz(4.69686073916512) _gate_q_6, _gate_q_1;
  cu(0.032319839640976594, 4.695953241855649, 3.8704501703783296, 0.8217499890039651) _gate_q_5, _gate_q_0;
  xx_minus_yy_5106014432(1.5503888529238767, 1.9350695523079147) _gate_q_3, _gate_q_7;
  csx _gate_q_2, _gate_q_4;
}
gate rxx_5106016832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.041421521975585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5106016400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.299855027061422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5106020672(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.28526477484665946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5106012512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.349289768127825) _gate_q_0;
  u1(0.2243199810073393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5611283660341093, 0, -2.349289768127825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5611283660341093, 2.124969787120486, 0) _gate_q_1;
}
gate rzz_5106019376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.919213503666686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5106012656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.7051487518942676) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.140389910750267) _gate_q_0;
  ry(-2.140389910750267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.7051487518942676) _gate_q_1;
}
gate ryy_5106016064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.729780342287162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  u3(1.4844109134337606, 4.097161296573232, 4.080245803943757) _gate_q_7;
  csx _gate_q_0, _gate_q_6;
  y _gate_q_4;
  p(1.7362744287550032) _gate_q_2;
  rxx_5106016832(4.041421521975585) _gate_q_3, _gate_q_1;
  sdg _gate_q_5;
  cy _gate_q_3, _gate_q_7;
  swap _gate_q_6, _gate_q_5;
  rzx_5106016400(5.299855027061422) _gate_q_0, _gate_q_1;
  cx _gate_q_4, _gate_q_2;
  sx _gate_q_4;
  cy _gate_q_7, _gate_q_3;
  rzz_5106020672(0.28526477484665946) _gate_q_1, _gate_q_6;
  ch _gate_q_0, _gate_q_5;
  sx _gate_q_2;
  id _gate_q_1;
  csdg _gate_q_5, _gate_q_3;
  cu3_5106012512(5.122256732068219, 2.124969787120486, 2.5736097491351644) _gate_q_0, _gate_q_4;
  rzz_5106019376(0.919213503666686) _gate_q_7, _gate_q_2;
  s _gate_q_6;
  csx _gate_q_5, _gate_q_7;
  U(1.5384396028357599, 0.35388570678512216, 4.489044706596623) _gate_q_2;
  sx _gate_q_0;
  xx_minus_yy_5106012656(4.280779821500534, 1.7051487518942676) _gate_q_1, _gate_q_6;
  u3(3.348914636471664, 4.487691765676187, 6.2335490575794) _gate_q_4;
  U(3.993038362259316, 1.9468924706670925, 5.559898165110116) _gate_q_3;
  cp(6.208496283651817) _gate_q_0, _gate_q_5;
  s _gate_q_6;
  s _gate_q_7;
  h _gate_q_1;
  crx(1.8915880249550072) _gate_q_3, _gate_q_4;
  sx _gate_q_2;
  ryy_5106016064(5.729780342287162) _gate_q_5, _gate_q_6;
  u3(2.5319337401844364, 4.614482955623797, 1.8351862964303494) _gate_q_3;
  csdg _gate_q_1, _gate_q_0;
  cry(6.1588493117770655) _gate_q_2, _gate_q_7;
  z _gate_q_4;
  h _gate_q_4;
  sx _gate_q_7;
  csx _gate_q_3, _gate_q_1;
  crx(2.347669219295121) _gate_q_2, _gate_q_6;
  y _gate_q_0;
  sxdg _gate_q_5;
}