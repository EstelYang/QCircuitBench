gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5105750560(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.337069327396591, 2.348753501714365, -2.348753501714365) _gate_q_0;
}
gate cu1_5105761552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.2959858114883932) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.2959858114883932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.2959858114883932) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105752768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.773027321995449, 3.089354934086715, -3.089354934086715) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5105755504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9212757422507282) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105758192(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.1839496986337235) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105751904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.799149656229787) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.858188765820688) _gate_q_1;
  ry(-2.858188765820688) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.799149656229787) _gate_q_0;
}
gate rzx_5105746048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.56091640101037) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105751328(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.3932814280610106, 1.7056439931424041, -1.7056439931424041) _gate_q_0;
}
gate rxx_5105757712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5081274197663515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105749552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.453935154799748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate cu1_5105748256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.13472278404936797) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.13472278404936797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.13472278404936797) _gate_q_1;
}
gate rzx_5105752960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.04047779586070388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105758096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0921149702372404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105751136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6784140581504905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105749168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.817335646620306) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  y _gate_q_2;
  z _gate_q_7;
  crx(3.6501027593313125) _gate_q_1, _gate_q_6;
  y _gate_q_8;
  csdg _gate_q_4, _gate_q_11;
  r_5105750560(5.337069327396591, 3.9195498285092616) _gate_q_3;
  rx(1.6127067807524396) _gate_q_0;
  csdg _gate_q_9, _gate_q_5;
  cu1_5105761552(0.5919716229767864) _gate_q_10, _gate_q_12;
  x _gate_q_7;
  cs _gate_q_0, _gate_q_8;
  crz(4.53135169420196) _gate_q_5, _gate_q_11;
  ry(5.301539779597679) _gate_q_3;
  crz(1.4555111595778574) _gate_q_9, _gate_q_10;
  r_5105752768(3.773027321995449, 4.660151260881611) _gate_q_4;
  ch _gate_q_1, _gate_q_12;
  iswap _gate_q_6, _gate_q_2;
  h _gate_q_7;
  crx(5.902782265939951) _gate_q_5, _gate_q_11;
  id _gate_q_1;
  cz _gate_q_6, _gate_q_10;
  cry(2.673957984684363) _gate_q_12, _gate_q_8;
  x _gate_q_3;
  ry(5.428738851120512) _gate_q_2;
  cp(5.863011138376218) _gate_q_0, _gate_q_4;
  t _gate_q_9;
  cz _gate_q_3, _gate_q_1;
  id _gate_q_6;
  u3(3.912935694099672, 2.726464859060512, 3.8943826698415753) _gate_q_2;
  cp(1.7989127642672904) _gate_q_9, _gate_q_5;
  ch _gate_q_11, _gate_q_8;
  cx _gate_q_0, _gate_q_10;
  crz(4.829185025989257) _gate_q_12, _gate_q_4;
  sx _gate_q_7;
  cry(0.3965235562962582) _gate_q_5, _gate_q_4;
  swap _gate_q_8, _gate_q_9;
  U(5.072359645234518, 1.493808990385834, 1.69333071235107) _gate_q_11;
  rzx_5105755504(0.9212757422507282) _gate_q_3, _gate_q_2;
  u2(3.7994773405226345, 4.002603075471129) _gate_q_10;
  csdg _gate_q_12, _gate_q_6;
  rzz_5105758192(6.1839496986337235) _gate_q_7, _gate_q_1;
  rx(1.48507789079893) _gate_q_0;
  swap _gate_q_12, _gate_q_10;
  swap _gate_q_2, _gate_q_3;
  ecr _gate_q_11, _gate_q_5;
  u3(1.0556228686788287, 4.75580792483012, 1.6559487642569202) _gate_q_9;
  iswap _gate_q_0, _gate_q_6;
  cs _gate_q_7, _gate_q_8;
  cu(0.18582670954343058, 2.9938895307010256, 3.7821267412872, 2.620825513649037) _gate_q_1, _gate_q_4;
  rx(0.07016364497648789) _gate_q_5;
  ry(6.176682642612496) _gate_q_2;
  u1(4.128288511759759) _gate_q_12;
  cry(4.291460579795923) _gate_q_3, _gate_q_8;
  xx_plus_yy_5105751904(5.716377531641376, 5.799149656229787) _gate_q_10, _gate_q_0;
  rzx_5105746048(5.56091640101037) _gate_q_4, _gate_q_1;
  cu(2.7261978288730173, 2.0488807923455905, 3.886719469903893, 3.7952968360390766) _gate_q_11, _gate_q_7;
  r_5105751328(3.3932814280610106, 3.2764403199373007) _gate_q_6;
  h _gate_q_9;
  ry(6.117490008135286) _gate_q_4;
  u2(2.0529719939397686, 3.7973467495255626) _gate_q_0;
  U(3.11170469693677, 2.434802161576576, 4.30960907336303) _gate_q_11;
  x _gate_q_10;
  cp(3.7320073442594786) _gate_q_8, _gate_q_1;
  u1(0.4474780205661669) _gate_q_12;
  ch _gate_q_5, _gate_q_9;
  rxx_5105757712(3.5081274197663515) _gate_q_2, _gate_q_3;
  sx _gate_q_6;
  rx(2.220486578190293) _gate_q_7;
  rxx_5105749552(1.453935154799748) _gate_q_10, _gate_q_8;
  csx _gate_q_3, _gate_q_0;
  ry(3.3838951389600846) _gate_q_1;
  rx(4.126889543145125) _gate_q_11;
  cu1_5105748256(0.26944556809873593) _gate_q_7, _gate_q_4;
  rzx_5105752960(0.04047779586070388) _gate_q_6, _gate_q_2;
  u1(3.322358922239343) _gate_q_5;
  rxx_5105758096(2.0921149702372404) _gate_q_9, _gate_q_12;
  y _gate_q_11;
  rzx_5105751136(0.6784140581504905) _gate_q_10, _gate_q_1;
  p(2.8069904504191623) _gate_q_2;
  crx(5.860505111357898) _gate_q_12, _gate_q_3;
  s _gate_q_0;
  sxdg _gate_q_9;
  tdg _gate_q_6;
  rx(5.446363498096929) _gate_q_5;
  tdg _gate_q_7;
  rzz_5105749168(2.817335646620306) _gate_q_4, _gate_q_8;
}
gate xx_plus_yy_5105750032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6670395205304125) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1656588942758175) _gate_q_1;
  ry(-1.1656588942758175) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6670395205304125) _gate_q_0;
}
gate ryy_5105754976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.169448710089063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105753440(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.336903958433043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105755072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.4663266092034663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105749312(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0524843396992638) _gate_q_0;
  u1(-0.7726248502657648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2738405296324511, 0, -1.0524843396992638) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2738405296324511, 1.8251091899650285, 0) _gate_q_1;
}
gate ryy_5105748304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7960127766175766) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5105755264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8810853807755713) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.083650727843969) _gate_q_1;
  ry(-2.083650727843969) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8810853807755713) _gate_q_0;
}
gate r_5105750176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.863840089747, 4.422935672095461, -4.422935672095461) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5105759104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.1227908892529705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105753008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.81980930556356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105749072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.714165262118788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105760112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.9041697558133807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105756656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.309280925085169, 0.3660371897294403, -0.3660371897294403) _gate_q_0;
}
gate rzz_5105751472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3099965134401552) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105748592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.006544426691625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105747632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2393876730614126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105749888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3922356246212892) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105761984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.49917859614946575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105754208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.614985796804603) _gate_q_0;
  u1(-1.4691174319241793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.024588124075809, 0, -3.614985796804603) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.024588124075809, 5.084103228728782, 0) _gate_q_1;
}
gate cu1_5105761072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.162251923487419) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.162251923487419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.162251923487419) _gate_q_1;
}
gate rxx_5105756224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0423183661581021) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105755936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.604248413100985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cry(3.6892615929317603) _gate_q_11, _gate_q_6;
  crz(3.190950561306888) _gate_q_0, _gate_q_2;
  s _gate_q_3;
  U(1.8434384817108032, 3.170603408045029, 4.873912827439642) _gate_q_9;
  sdg _gate_q_10;
  swap _gate_q_12, _gate_q_7;
  ch _gate_q_5, _gate_q_1;
  xx_plus_yy_5105750032(2.331317788551635, 3.6670395205304125) _gate_q_4, _gate_q_8;
  ecr _gate_q_0, _gate_q_5;
  cry(3.4521955564693476) _gate_q_10, _gate_q_7;
  ryy_5105754976(6.169448710089063) _gate_q_8, _gate_q_3;
  rx(3.6971135408715528) _gate_q_12;
  ryy_5105753440(2.336903958433043) _gate_q_11, _gate_q_6;
  t _gate_q_2;
  rzz_5105755072(0.4663266092034663) _gate_q_9, _gate_q_1;
  x _gate_q_4;
  p(3.9493062831145402) _gate_q_5;
  iswap _gate_q_8, _gate_q_4;
  rz(5.028998570172092) _gate_q_0;
  sxdg _gate_q_10;
  swap _gate_q_3, _gate_q_6;
  cu3_5105749312(0.5476810592649022, 1.8251091899650285, 0.279859489433499) _gate_q_2, _gate_q_9;
  cz _gate_q_7, _gate_q_11;
  s _gate_q_1;
  sdg _gate_q_12;
  U(5.458209065053612, 6.08678656194842, 0.8263788374493101) _gate_q_10;
  ecr _gate_q_7, _gate_q_4;
  ryy_5105748304(2.7960127766175766) _gate_q_5, _gate_q_6;
  xx_plus_yy_5105755264(4.167301455687938, 0.8810853807755713) _gate_q_8, _gate_q_11;
  u3(0.7799035401751914, 0.6823242620884266, 2.889852867380582) _gate_q_1;
  csdg _gate_q_12, _gate_q_0;
  cs _gate_q_9, _gate_q_3;
  r_5105750176(3.863840089747, 5.9937319988903575) _gate_q_2;
  dcx _gate_q_2, _gate_q_9;
  ecr _gate_q_0, _gate_q_3;
  cp(0.1935354154072885) _gate_q_5, _gate_q_10;
  crz(1.8767214910830017) _gate_q_1, _gate_q_11;
  ch _gate_q_7, _gate_q_12;
  sx _gate_q_4;
  U(0.2811784966382168, 2.073638671138177, 4.899503320138306) _gate_q_8;
  id _gate_q_6;
  rzz_5105759104(1.1227908892529705) _gate_q_10, _gate_q_3;
  crz(0.4330818942304186) _gate_q_2, _gate_q_1;
  u1(3.013984936598195) _gate_q_11;
  csx _gate_q_5, _gate_q_4;
  cu(3.551295603071241, 3.2818704745448364, 5.493406236399517, 5.059365078078691) _gate_q_12, _gate_q_8;
  iswap _gate_q_0, _gate_q_6;
  rzz_5105753008(3.81980930556356) _gate_q_9, _gate_q_7;
  s _gate_q_4;
  rxx_5105749072(4.714165262118788) _gate_q_2, _gate_q_5;
  rzz_5105760112(0.9041697558133807) _gate_q_6, _gate_q_8;
  id _gate_q_11;
  r_5105756656(2.309280925085169, 1.9368335165243369) _gate_q_3;
  rzz_5105751472(1.3099965134401552) _gate_q_9, _gate_q_1;
  ecr _gate_q_12, _gate_q_10;
  crz(2.692205402821575) _gate_q_7, _gate_q_0;
  t _gate_q_1;
  t _gate_q_8;
  h _gate_q_5;
  x _gate_q_7;
  rzz_5105748592(3.006544426691625) _gate_q_10, _gate_q_11;
  rxx_5105747632(3.2393876730614126) _gate_q_3, _gate_q_6;
  u2(3.1326437470582795, 3.2256122336905504) _gate_q_2;
  rzz_5105749888(3.3922356246212892) _gate_q_9, _gate_q_0;
  ry(5.651618784151128) _gate_q_12;
  x _gate_q_4;
  rx(5.99941859208892) _gate_q_0;
  cx _gate_q_9, _gate_q_11;
  csx _gate_q_7, _gate_q_1;
  sdg _gate_q_4;
  sx _gate_q_5;
  t _gate_q_12;
  ryy_5105761984(0.49917859614946575) _gate_q_10, _gate_q_3;
  s _gate_q_6;
  cu3_5105754208(2.049176248151618, 5.084103228728782, 2.1458683648804238) _gate_q_8, _gate_q_2;
  u2(5.597229693860341, 2.130300881394019) _gate_q_3;
  cu1_5105761072(4.324503846974838) _gate_q_5, _gate_q_11;
  rxx_5105756224(1.0423183661581021) _gate_q_2, _gate_q_9;
  h _gate_q_12;
  rzz_5105755936(4.604248413100985) _gate_q_10, _gate_q_8;
  cx _gate_q_0, _gate_q_6;
  cry(0.324253550415821) _gate_q_4, _gate_q_7;
  ry(5.356595063580589) _gate_q_1;
}