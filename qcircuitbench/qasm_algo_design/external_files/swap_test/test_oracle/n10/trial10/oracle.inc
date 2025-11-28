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
gate ryy_5105863904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4267750296280592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105869808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2523572442663575) _gate_q_0;
  u1(-0.42513331142714544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.08013552605140613, 0, -1.2523572442663575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.08013552605140613, 1.677490555693503, 0) _gate_q_1;
}
gate rzz_5105868512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.2108893179917075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5105861600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3201528837706643) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9258792180653102) _gate_q_0;
  ry(-1.9258792180653102) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3201528837706643) _gate_q_1;
}
gate cu1_5105874560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.39498466399101084) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.39498466399101084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.39498466399101084) _gate_q_1;
}
gate rxx_5105876672(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.752361027611061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105865920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.491067209842338) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6941517505497012) _gate_q_1;
  ry(-2.6941517505497012) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.491067209842338) _gate_q_0;
}
gate ryy_5105874272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.428932795034195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5105862656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.762501782025581) _gate_q_1;
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
gate ryy_5105864000(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.142931763372405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105871920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.649787060257257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105874656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.85900269175139) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105871296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.7130926380877265, 3.6592677343012934, -3.6592677343012934) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  ecr _gate_q_5, _gate_q_1;
  sxdg _gate_q_4;
  ryy_5105863904(3.4267750296280592) _gate_q_2, _gate_q_3;
  x _gate_q_8;
  sdg _gate_q_9;
  crx(1.38793741844255) _gate_q_0, _gate_q_6;
  u3(3.9706964179553075, 4.4030192349612145, 1.0465981068104027) _gate_q_7;
  cz _gate_q_3, _gate_q_5;
  cu3_5105869808(0.16027105210281226, 1.677490555693503, 0.827223932839212) _gate_q_2, _gate_q_7;
  sx _gate_q_9;
  crx(4.351762410310814) _gate_q_4, _gate_q_8;
  crx(4.766924183439226) _gate_q_0, _gate_q_1;
  t _gate_q_6;
  y _gate_q_5;
  u3(1.5091969498438715, 3.3650251209418087, 2.752256888248371) _gate_q_8;
  rzz_5105868512(2.2108893179917075) _gate_q_4, _gate_q_0;
  z _gate_q_1;
  dcx _gate_q_3, _gate_q_7;
  cx _gate_q_2, _gate_q_9;
  s _gate_q_6;
  p(1.1709709255103158) _gate_q_4;
  xx_minus_yy_5105861600(3.8517584361306203, 0.3201528837706643) _gate_q_5, _gate_q_2;
  ry(0.4800116782640588) _gate_q_7;
  cu1_5105874560(0.7899693279820217) _gate_q_9, _gate_q_3;
  u2(3.9896929941637818, 1.4559734621060376) _gate_q_0;
  cz _gate_q_6, _gate_q_8;
  sx _gate_q_1;
  cp(1.6291586394353104) _gate_q_6, _gate_q_3;
  cry(1.1526398937789004) _gate_q_7, _gate_q_1;
  crx(2.7229358114121514) _gate_q_2, _gate_q_9;
  rxx_5105876672(4.752361027611061) _gate_q_0, _gate_q_5;
  h _gate_q_4;
  s _gate_q_8;
  rz(3.30105436846248) _gate_q_0;
  cp(3.642564837175657) _gate_q_2, _gate_q_9;
  cx _gate_q_8, _gate_q_1;
  u3(5.7367301898594, 3.1900243355284403, 2.8769760052495617) _gate_q_5;
  xx_plus_yy_5105865920(5.3883035010994025, 3.491067209842338) _gate_q_3, _gate_q_4;
  id _gate_q_6;
  tdg _gate_q_7;
  ryy_5105874272(5.428932795034195) _gate_q_3, _gate_q_1;
  rxx_5105862656(1.762501782025581) _gate_q_5, _gate_q_7;
  h _gate_q_2;
  cu(4.242566786649866, 2.4134543510950217, 0.5710549534782143, 2.0650651361823593) _gate_q_8, _gate_q_0;
  iswap _gate_q_4, _gate_q_9;
  U(0.32249774924203173, 4.936939712737023, 3.441996651943012) _gate_q_6;
  u1(1.6586788692566787) _gate_q_9;
  ch _gate_q_8, _gate_q_4;
  x _gate_q_7;
  crz(2.4982520965275987) _gate_q_0, _gate_q_1;
  sx _gate_q_3;
  ryy_5105864000(3.142931763372405) _gate_q_5, _gate_q_6;
  sx _gate_q_2;
  z _gate_q_5;
  id _gate_q_9;
  rzz_5105871920(4.649787060257257) _gate_q_7, _gate_q_0;
  ch _gate_q_8, _gate_q_1;
  rzz_5105874656(4.85900269175139) _gate_q_4, _gate_q_2;
  iswap _gate_q_3, _gate_q_6;
  tdg _gate_q_4;
  cs _gate_q_2, _gate_q_1;
  dcx _gate_q_5, _gate_q_9;
  u3(3.8234359168754977, 4.0353207815195855, 6.06847642766616) _gate_q_7;
  sx _gate_q_3;
  r_5105871296(1.7130926380877265, 5.23006406109619) _gate_q_0;
  rx(0.16045299945661567) _gate_q_6;
  ry(2.032113282293281) _gate_q_8;
}
gate r_5105868272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.694393200034286, 1.33649793425323, -1.33649793425323) _gate_q_0;
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
gate cu3_5105862032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.723272659208806) _gate_q_0;
  u1(1.9603674324601086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8697721883496263, 0, -2.723272659208806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8697721883496263, 0.7629052267486974, 0) _gate_q_1;
}
gate xx_minus_yy_5105866112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.099603445413736) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.17966879652295226) _gate_q_0;
  ry(-0.17966879652295226) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.099603445413736) _gate_q_1;
}
gate xx_minus_yy_5105871440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.461054681055031) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3097417518054706) _gate_q_0;
  ry(-2.3097417518054706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.461054681055031) _gate_q_1;
}
gate rxx_5105876480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.282933648086116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105864480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.31551805523370297) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.31551805523370297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.31551805523370297) _gate_q_1;
}
gate rzx_5105876576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8147675433148887) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105869184(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5859747786018926) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5859747786018926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5859747786018926) _gate_q_1;
}
gate xx_plus_yy_5105872976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.892729564181409) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.687894359939855) _gate_q_1;
  ry(-2.687894359939855) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.892729564181409) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5105868032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.630601648188815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105871248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.67123814679345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105863280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.823571800668867) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  cx _gate_q_6, _gate_q_2;
  r_5105868272(4.694393200034286, 2.9072942610481265) _gate_q_9;
  dcx _gate_q_3, _gate_q_5;
  cy _gate_q_7, _gate_q_1;
  cry(1.855846162583642) _gate_q_4, _gate_q_8;
  p(5.044947014672468) _gate_q_0;
  id _gate_q_8;
  rx(5.703611970806154) _gate_q_3;
  cy _gate_q_4, _gate_q_2;
  s _gate_q_7;
  y _gate_q_9;
  csx _gate_q_0, _gate_q_1;
  iswap _gate_q_5, _gate_q_6;
  y _gate_q_2;
  crx(3.68572014411256) _gate_q_3, _gate_q_1;
  cu3_5105862032(5.739544376699253, 0.7629052267486974, 4.683640091668915) _gate_q_6, _gate_q_9;
  cz _gate_q_0, _gate_q_4;
  t _gate_q_7;
  iswap _gate_q_8, _gate_q_5;
  sxdg _gate_q_0;
  dcx _gate_q_2, _gate_q_1;
  rz(2.7475129313895943) _gate_q_4;
  xx_minus_yy_5105866112(0.3593375930459045, 5.099603445413736) _gate_q_9, _gate_q_6;
  xx_minus_yy_5105871440(4.619483503610941, 3.461054681055031) _gate_q_5, _gate_q_7;
  U(4.967055832506667, 4.3547094293008195, 4.7579234582143615) _gate_q_8;
  id _gate_q_3;
  cx _gate_q_7, _gate_q_0;
  csx _gate_q_4, _gate_q_6;
  z _gate_q_1;
  sxdg _gate_q_3;
  rxx_5105876480(3.282933648086116) _gate_q_2, _gate_q_8;
  csx _gate_q_9, _gate_q_5;
  cu1_5105864480(0.6310361104674059) _gate_q_5, _gate_q_2;
  rzx_5105876576(1.8147675433148887) _gate_q_3, _gate_q_4;
  rz(0.9814104074227197) _gate_q_9;
  cp(0.46034978925063635) _gate_q_0, _gate_q_7;
  t _gate_q_8;
  u3(5.193128078678491, 5.974266422270656, 2.974902923008722) _gate_q_1;
  sdg _gate_q_6;
  swap _gate_q_8, _gate_q_3;
  cz _gate_q_6, _gate_q_7;
  cu1_5105869184(1.1719495572037852) _gate_q_9, _gate_q_5;
  xx_plus_yy_5105872976(5.37578871987971, 2.892729564181409) _gate_q_4, _gate_q_2;
  csdg _gate_q_1, _gate_q_0;
  u1(1.1968991189650118) _gate_q_8;
  csdg _gate_q_2, _gate_q_4;
  p(3.9704862905641165) _gate_q_5;
  U(1.9805321635594073, 4.808752354396207, 3.5007965603489564) _gate_q_3;
  sxdg _gate_q_1;
  crx(3.789946369310807) _gate_q_0, _gate_q_6;
  rzx_5105868032(4.630601648188815) _gate_q_9, _gate_q_7;
  dcx _gate_q_0, _gate_q_3;
  cry(0.8965602568352289) _gate_q_7, _gate_q_8;
  cu(1.0962602994550628, 0.59510813536899, 0.058934810179334524, 0.1476226623192848) _gate_q_9, _gate_q_1;
  y _gate_q_2;
  crz(0.05901968458125654) _gate_q_6, _gate_q_4;
  rx(4.323946088261281) _gate_q_5;
  p(5.212739602050854) _gate_q_5;
  u1(4.369499713634895) _gate_q_3;
  rzx_5105871248(5.67123814679345) _gate_q_2, _gate_q_4;
  cx _gate_q_7, _gate_q_8;
  swap _gate_q_0, _gate_q_6;
  rzz_5105863280(4.823571800668867) _gate_q_9, _gate_q_1;
}