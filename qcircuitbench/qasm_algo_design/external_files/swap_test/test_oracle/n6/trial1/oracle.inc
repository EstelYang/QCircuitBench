gate cu3_5105638608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6521920169228568) _gate_q_0;
  u1(0.45114557967333724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1237588477381544, 0, -2.6521920169228568) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1237588477381544, 2.2010464372495195, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5105638896(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.712674260821604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5105639280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8495628418301155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105639232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.560128009963569, -0.3563829407732353, 0.3563829407732353) _gate_q_0;
}
gate ryy_5105638944(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.157038109191776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105639568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4671719042086837) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4671719042086837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4671719042086837) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  p(2.939942047470085) _gate_q_5;
  sx _gate_q_4;
  cu3_5105638608(2.2475176954763088, 2.2010464372495195, 3.103337596596194) _gate_q_0, _gate_q_1;
  rz(0.6232980265633482) _gate_q_2;
  p(5.994538281673477) _gate_q_3;
  u1(3.749400246373359) _gate_q_2;
  tdg _gate_q_3;
  crx(0.23211031130212306) _gate_q_1, _gate_q_4;
  cs _gate_q_0, _gate_q_5;
  ryy_5105638896(5.712674260821604) _gate_q_0, _gate_q_2;
  cry(2.6700725307494175) _gate_q_3, _gate_q_1;
  t _gate_q_5;
  sxdg _gate_q_4;
  rzx_5105639280(4.8495628418301155) _gate_q_5, _gate_q_1;
  u1(3.06828080251147) _gate_q_4;
  r_5105639232(4.560128009963569, 1.2144133860216613) _gate_q_2;
  ryy_5105638944(5.157038109191776) _gate_q_0, _gate_q_3;
  rz(4.40119285684025) _gate_q_0;
  u2(0.1649520479679174, 5.737306413485255) _gate_q_1;
  cu(0.06180295180393378, 5.113501855609401, 3.8980881990331957, 2.837230320531918) _gate_q_3, _gate_q_4;
  u1(5.954838248113712) _gate_q_2;
  sxdg _gate_q_5;
  cu1_5105639568(2.9343438084173674) _gate_q_2, _gate_q_5;
  x _gate_q_3;
  cz _gate_q_0, _gate_q_1;
  U(5.34865755683353, 4.138025080490371, 2.4497744144129663) _gate_q_4;
}
gate cu3_5105640864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2114271395390908) _gate_q_0;
  u1(-0.952210500912929) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7762379226744476, 0, -1.2114271395390908) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7762379226744476, 2.16363764045202, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rzx_5105641584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.656504921385261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105641296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.1694005735142134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5105641536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4547367438699257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105641728(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.535646799412542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cu3_5105640864(5.552475845348895, 2.16363764045202, 0.2592166386261618) _gate_q_1, _gate_q_2;
  h _gate_q_3;
  cz _gate_q_4, _gate_q_0;
  u2(3.2442172127737363, 3.8643284404946048) _gate_q_5;
  ry(3.3248149199860997) _gate_q_4;
  cp(2.368634271756276) _gate_q_5, _gate_q_0;
  z _gate_q_3;
  cry(5.791800441701968) _gate_q_1, _gate_q_2;
  iswap _gate_q_0, _gate_q_3;
  U(0.5800274798029333, 3.967361025711364, 5.854390003834109) _gate_q_4;
  z _gate_q_5;
  y _gate_q_2;
  sx _gate_q_1;
  z _gate_q_5;
  rzx_5105641584(5.656504921385261) _gate_q_2, _gate_q_3;
  ryy_5105641296(5.1694005735142134) _gate_q_0, _gate_q_1;
  z _gate_q_4;
  h _gate_q_5;
  dcx _gate_q_1, _gate_q_3;
  swap _gate_q_2, _gate_q_4;
  t _gate_q_0;
  tdg _gate_q_2;
  rzx_5105641536(2.4547367438699257) _gate_q_1, _gate_q_4;
  ryy_5105641728(4.535646799412542) _gate_q_5, _gate_q_3;
  s _gate_q_0;
}