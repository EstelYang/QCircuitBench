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
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5070899920(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.064620460529736) _gate_q_0;
  u1(-2.458140690073166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5676803673397022, 0, -3.064620460529736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5676803673397022, 5.522761150602902, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070912784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4199791965456527) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9535108384975525) _gate_q_1;
  ry(-0.9535108384975525) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4199791965456527) _gate_q_0;
}
gate ryy_5070905008(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9748103344837724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070904336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.558486329325906) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  ecr _gate_q_1, _gate_q_2;
  t _gate_q_4;
  dcx _gate_q_0, _gate_q_3;
  y _gate_q_5;
  cu3_5070899920(1.1353607346794043, 5.522761150602902, 0.6064797704565696) _gate_q_0, _gate_q_5;
  xx_plus_yy_5070912784(1.907021676995105, 1.4199791965456527) _gate_q_1, _gate_q_3;
  ryy_5070905008(2.9748103344837724) _gate_q_2, _gate_q_4;
  p(2.5220565510863433) _gate_q_1;
  h _gate_q_5;
  u3(1.7501059157282401, 3.83770846528983, 3.3972375505457664) _gate_q_0;
  t _gate_q_3;
  z _gate_q_4;
  id _gate_q_2;
  crx(4.106733813040214) _gate_q_5, _gate_q_4;
  t _gate_q_3;
  u3(6.1274776240909254, 2.236776368265534, 3.1929813930864523) _gate_q_2;
  ecr _gate_q_1, _gate_q_0;
  cx _gate_q_3, _gate_q_5;
  ry(2.4040614781379177) _gate_q_4;
  cu(2.4946004040464826, 4.199470303883046, 4.372703861738668, 0.8848091999920062) _gate_q_1, _gate_q_2;
  h _gate_q_0;
  u1(2.9814598223229583) _gate_q_2;
  crx(4.891654507865238) _gate_q_5, _gate_q_4;
  rxx_5070904336(5.558486329325906) _gate_q_3, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5070910240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.128414464742072) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5070911920(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2166765996404707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072012016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.136231125294601) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072012064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.145873944238171, 3.957998258698046, -3.957998258698046) _gate_q_0;
}
gate rzx_5072023392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.311993312373056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072023776(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.739838942924204, 1.5095729008938026, -1.5095729008938026) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  crx(2.94729804823919) _gate_q_1, _gate_q_2;
  p(1.7555971216549826) _gate_q_5;
  ryy_5070910240(6.128414464742072) _gate_q_4, _gate_q_3;
  h _gate_q_0;
  u1(0.1650978234454181) _gate_q_1;
  ch _gate_q_2, _gate_q_3;
  sx _gate_q_0;
  ryy_5070911920(1.2166765996404707) _gate_q_5, _gate_q_4;
  crz(5.197874487064804) _gate_q_0, _gate_q_2;
  rzz_5072012016(2.136231125294601) _gate_q_4, _gate_q_5;
  ch _gate_q_3, _gate_q_1;
  r_5072012064(2.145873944238171, 5.528794585492943) _gate_q_4;
  y _gate_q_5;
  cy _gate_q_0, _gate_q_3;
  t _gate_q_2;
  U(0.1826351617929352, 0.8727279050615294, 0.9251680216741539) _gate_q_1;
  z _gate_q_3;
  ry(4.325577690381698) _gate_q_4;
  cry(0.35913409510436983) _gate_q_5, _gate_q_0;
  cx _gate_q_1, _gate_q_2;
  rzx_5072023392(4.311993312373056) _gate_q_3, _gate_q_1;
  r_5072023776(5.739838942924204, 3.080369227688699) _gate_q_2;
  y _gate_q_5;
  cs _gate_q_4, _gate_q_0;
}