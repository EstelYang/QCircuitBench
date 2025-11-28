gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5105438160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.468796682684001) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7763663841379165) _gate_q_0;
  ry(-1.7763663841379165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.468796682684001) _gate_q_1;
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
gate ryy_5105434752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.578235828969925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  iswap _gate_q_1, _gate_q_0;
  crx(4.55249975575651) _gate_q_2, _gate_q_3;
  u2(0.12906699858473478, 0.2263011691045371) _gate_q_4;
  xx_minus_yy_5105438160(3.552732768275833, 3.468796682684001) _gate_q_2, _gate_q_1;
  cy _gate_q_4, _gate_q_3;
  y _gate_q_0;
  tdg _gate_q_3;
  id _gate_q_4;
  sxdg _gate_q_0;
  u2(0.8968378433314605, 3.8919093268159717) _gate_q_1;
  sx _gate_q_2;
  crx(4.767909558418297) _gate_q_1, _gate_q_3;
  u3(5.457334551052447, 5.624934330173953, 3.4347434595854387) _gate_q_2;
  crz(6.232501810889815) _gate_q_4, _gate_q_0;
  ecr _gate_q_3, _gate_q_4;
  ryy_5105434752(4.578235828969925) _gate_q_2, _gate_q_1;
  t _gate_q_0;
}
gate ryy_5105443776(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5253316931300107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105440944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.865137651455147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5105450784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.28932464159248933) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.08981944932877424) _gate_q_0;
  ry(-0.08981944932877424) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.28932464159248933) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4 {
  cz _gate_q_4, _gate_q_3;
  ryy_5105443776(3.5253316931300107) _gate_q_2, _gate_q_0;
  x _gate_q_1;
  sx _gate_q_4;
  h _gate_q_0;
  z _gate_q_1;
  id _gate_q_3;
  t _gate_q_2;
  sdg _gate_q_2;
  crx(5.778695257041065) _gate_q_1, _gate_q_4;
  rzx_5105440944(4.865137651455147) _gate_q_3, _gate_q_0;
  sdg _gate_q_0;
  rx(3.409268264375365) _gate_q_3;
  crx(3.902412517450015) _gate_q_1, _gate_q_2;
  t _gate_q_4;
  t _gate_q_0;
  cx _gate_q_2, _gate_q_4;
  xx_minus_yy_5105450784(0.17963889865754848, 0.28932464159248933) _gate_q_1, _gate_q_3;
}