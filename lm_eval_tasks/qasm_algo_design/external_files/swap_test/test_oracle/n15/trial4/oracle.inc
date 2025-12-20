gate cu3_5106320880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9208768185513447) _gate_q_0;
  u1(0.22761061012704387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.8060050681424866, 0, -2.9208768185513447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.8060050681424866, 2.693266208424301, 0) _gate_q_1;
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
gate xx_plus_yy_5106325344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.4734844038015946) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3699476183304673) _gate_q_1;
  ry(-1.3699476183304673) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.4734844038015946) _gate_q_0;
}
gate r_5106332448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.940130321236671, 0.36066211769673306, -0.36066211769673306) _gate_q_0;
}
gate r_5106325152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8700621319380801, 3.6063048269159346, -3.6063048269159346) _gate_q_0;
}
gate cu1_5106329520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6568809024123271) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6568809024123271) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6568809024123271) _gate_q_1;
}
gate rzx_5106329232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1931276508815043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5106322272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.257515874766313) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5106326400(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6529648030050046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5106329664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7064940627453994) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2676741051106729) _gate_q_1;
  ry(-0.2676741051106729) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7064940627453994) _gate_q_0;
}
gate rxx_5106322416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7037614873926046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5106321792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6779582750333524) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5886925874516677) _gate_q_0;
  ry(-2.5886925874516677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6779582750333524) _gate_q_1;
}
gate cu1_5106326832(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.02423537261983) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.02423537261983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.02423537261983) _gate_q_1;
}
gate ryy_5107448432(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.994885204536356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107434800(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9040925437140623) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9040925437140623) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9040925437140623) _gate_q_1;
}
gate ryy_5107445072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7441924719297428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107437968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7123989593963884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5107440272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.722229888901939) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107445408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2058023700875182, 2.703740879721945, -2.703740879721945) _gate_q_0;
}
gate xx_plus_yy_5107445744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6768036103790748) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.6634310652433525) _gate_q_1;
  ry(-0.6634310652433525) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6768036103790748) _gate_q_0;
}
gate r_5107441040(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7510957552558812, 3.5934239484023918, -3.5934239484023918) _gate_q_0;
}
gate cu1_5107447760(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5384983997575283) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5384983997575283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5384983997575283) _gate_q_1;
}
gate xx_plus_yy_5107444208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.2928546232432833) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.6616880573051294) _gate_q_1;
  ry(-2.6616880573051294) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.2928546232432833) _gate_q_0;
}
gate r_5107446512(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6426202631819927, 2.0724178856277478, -2.0724178856277478) _gate_q_0;
}
gate xx_minus_yy_5107435568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.033504265076558) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2356305380980286) _gate_q_0;
  ry(-1.2356305380980286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.033504265076558) _gate_q_1;
}
gate rzz_5107440464(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3981865755149714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  t _gate_q_12;
  cp(1.0023846007608406) _gate_q_13, _gate_q_6;
  id _gate_q_1;
  cu3_5106320880(5.612010136284973, 2.693266208424301, 3.1484874286783886) _gate_q_11, _gate_q_10;
  p(3.1887296006521537) _gate_q_2;
  crx(2.9913550093942187) _gate_q_0, _gate_q_4;
  cz _gate_q_8, _gate_q_14;
  rx(4.292553944863243) _gate_q_5;
  s _gate_q_3;
  ecr _gate_q_9, _gate_q_7;
  cu(4.363496242111805, 2.1107449825193823, 5.945960701107374, 2.3022780795482563) _gate_q_6, _gate_q_3;
  ch _gate_q_7, _gate_q_14;
  sdg _gate_q_2;
  id _gate_q_12;
  xx_plus_yy_5106325344(2.7398952366609346, 1.4734844038015946) _gate_q_1, _gate_q_10;
  h _gate_q_4;
  cz _gate_q_0, _gate_q_11;
  id _gate_q_9;
  rz(0.4790039787986065) _gate_q_13;
  u1(5.711247627616345) _gate_q_5;
  r_5106332448(1.940130321236671, 1.9314584444916296) _gate_q_8;
  t _gate_q_10;
  r_5106325152(1.8700621319380801, 5.177101153710831) _gate_q_8;
  swap _gate_q_2, _gate_q_13;
  p(2.476614366580055) _gate_q_6;
  cu1_5106329520(1.3137618048246542) _gate_q_0, _gate_q_7;
  rzx_5106329232(3.1931276508815043) _gate_q_9, _gate_q_3;
  ryy_5106322272(4.257515874766313) _gate_q_1, _gate_q_14;
  tdg _gate_q_4;
  t _gate_q_12;
  u1(5.679570681957702) _gate_q_5;
  p(2.2747633106165885) _gate_q_11;
  sxdg _gate_q_1;
  id _gate_q_8;
  U(4.5519842227534415, 5.977970516516516, 5.083153244392907) _gate_q_9;
  sdg _gate_q_0;
  ch _gate_q_4, _gate_q_3;
  cry(3.92553609821808) _gate_q_14, _gate_q_13;
  rxx_5106326400(3.6529648030050046) _gate_q_5, _gate_q_11;
  xx_plus_yy_5106329664(0.5353482102213458, 0.7064940627453994) _gate_q_6, _gate_q_12;
  cz _gate_q_10, _gate_q_7;
  s _gate_q_2;
  swap _gate_q_0, _gate_q_2;
  ch _gate_q_6, _gate_q_7;
  rz(0.3775466470281187) _gate_q_13;
  tdg _gate_q_11;
  rxx_5106322416(2.7037614873926046) _gate_q_1, _gate_q_8;
  xx_minus_yy_5106321792(5.1773851749033355, 1.6779582750333524) _gate_q_5, _gate_q_12;
  p(2.83215957468353) _gate_q_3;
  p(4.805471324142451) _gate_q_4;
  cu1_5106326832(6.04847074523966) _gate_q_14, _gate_q_10;
  y _gate_q_9;
  ryy_5107448432(4.994885204536356) _gate_q_0, _gate_q_1;
  rx(6.242708073015661) _gate_q_5;
  t _gate_q_9;
  rx(5.265272996157197) _gate_q_14;
  cu1_5107434800(3.8081850874281247) _gate_q_2, _gate_q_12;
  s _gate_q_10;
  ryy_5107445072(1.7441924719297428) _gate_q_11, _gate_q_8;
  z _gate_q_3;
  u2(3.6065604062019165, 4.432493212462921) _gate_q_4;
  u3(0.7386205406850335, 5.201446841086596, 0.8789296837004633) _gate_q_6;
  crz(1.216469121270938) _gate_q_7, _gate_q_13;
  rxx_5107437968(2.7123989593963884) _gate_q_10, _gate_q_3;
  sxdg _gate_q_13;
  ry(0.6388741832332405) _gate_q_4;
  id _gate_q_9;
  sdg _gate_q_14;
  csdg _gate_q_2, _gate_q_1;
  ryy_5107440272(1.722229888901939) _gate_q_11, _gate_q_0;
  rz(5.77101677273981) _gate_q_12;
  ch _gate_q_7, _gate_q_8;
  s _gate_q_5;
  r_5107445408(2.2058023700875182, 4.274537206516841) _gate_q_6;
  xx_plus_yy_5107445744(1.326862130486705, 0.6768036103790748) _gate_q_1, _gate_q_0;
  ch _gate_q_11, _gate_q_5;
  r_5107441040(3.7510957552558812, 5.164220275197288) _gate_q_7;
  rz(5.549858251235796) _gate_q_3;
  p(1.8721305385643654) _gate_q_14;
  u3(1.9564551600889912, 5.084779809742332, 0.5434916581127747) _gate_q_8;
  csdg _gate_q_6, _gate_q_12;
  sx _gate_q_2;
  ry(0.3661670313634187) _gate_q_4;
  rx(1.404777722482085) _gate_q_13;
  tdg _gate_q_10;
  id _gate_q_9;
  cu(2.472040662335279, 6.100323475993907, 6.124330918246666, 0.7705743502531753) _gate_q_13, _gate_q_6;
  crz(5.071898502053042) _gate_q_0, _gate_q_10;
  cu1_5107447760(3.0769967995150567) _gate_q_3, _gate_q_14;
  s _gate_q_9;
  u1(0.6609246567259865) _gate_q_1;
  xx_plus_yy_5107444208(5.323376114610259, 0.2928546232432833) _gate_q_4, _gate_q_5;
  r_5107446512(0.6426202631819927, 3.6432142124226443) _gate_q_2;
  h _gate_q_11;
  cry(1.9331739850239618) _gate_q_7, _gate_q_8;
  u3(3.7531914703686167, 0.8505526069428864, 3.4987406781868966) _gate_q_12;
  xx_minus_yy_5107435568(2.471261076196057, 4.033504265076558) _gate_q_14, _gate_q_5;
  tdg _gate_q_2;
  y _gate_q_13;
  p(2.333599454064349) _gate_q_7;
  rzz_5107440464(1.3981865755149714) _gate_q_4, _gate_q_9;
  cs _gate_q_8, _gate_q_3;
  tdg _gate_q_1;
  cz _gate_q_12, _gate_q_10;
  cs _gate_q_6, _gate_q_11;
  z _gate_q_0;
}
gate cu3_5107449200(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.2997274689886344) _gate_q_0;
  u1(0.6350408906972076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.7810372703259545, 0, -5.2997274689886344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.7810372703259545, 4.664686578291427, 0) _gate_q_1;
}
gate r_5107449488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4089924104836067, -0.21114198027163233, 0.21114198027163233) _gate_q_0;
}
gate r_5107442288(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.2291990084801805, -0.496723549274243, 0.496723549274243) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_plus_yy_5107446560(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.24199424985343) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9138453684526866) _gate_q_1;
  ry(-0.9138453684526866) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.24199424985343) _gate_q_0;
}
gate rzx_5107441328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.29539887327386855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107439072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7193635108102283) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9015944678438427) _gate_q_0;
  ry(-0.9015944678438427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7193635108102283) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5107439792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.951671316337914, -0.7719348035593993, 0.7719348035593993) _gate_q_0;
}
gate xx_plus_yy_5107435808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.531422209715605) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7831026321998003) _gate_q_1;
  ry(-1.7831026321998003) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.531422209715605) _gate_q_0;
}
gate r_5107444352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.712670587708644, 4.577274258086288, -4.577274258086288) _gate_q_0;
}
gate xx_plus_yy_5107448480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6142506557364333) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1940501005751325) _gate_q_1;
  ry(-2.1940501005751325) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6142506557364333) _gate_q_0;
}
gate rzx_5107433600(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5990593519930111) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107436288(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.3338500765793393) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5107434464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5916886366559844) _gate_q_0;
  u1(0.04460968252445707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2623129611717023, 0, -2.5916886366559844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2623129611717023, 2.547078954131527, 0) _gate_q_1;
}
gate ryy_5107442960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5208871956401663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5107434176(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4546909633449665) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107444544(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7087901079300956, -1.0986259604727757, 1.0986259604727757) _gate_q_0;
}
gate rzx_5107445168(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.177703897691635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107434992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.141457668404348) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.851437870146434) _gate_q_1;
  ry(-2.851437870146434) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.141457668404348) _gate_q_0;
}
gate rzz_5107444688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.364702470280162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107434416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3577491294362931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107433936(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2584043086926737) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2584043086926737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2584043086926737) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  sx _gate_q_2;
  ch _gate_q_12, _gate_q_5;
  cs _gate_q_6, _gate_q_13;
  sdg _gate_q_10;
  tdg _gate_q_8;
  sdg _gate_q_9;
  cu3_5107449200(5.562074540651909, 4.664686578291427, 5.934768359685842) _gate_q_14, _gate_q_7;
  u2(0.7784388132883033, 5.224834896578365) _gate_q_4;
  csdg _gate_q_0, _gate_q_3;
  s _gate_q_1;
  z _gate_q_11;
  cz _gate_q_10, _gate_q_6;
  ecr _gate_q_11, _gate_q_2;
  r_5107449488(2.4089924104836067, 1.3596543465232642) _gate_q_12;
  r_5107442288(5.2291990084801805, 1.0740727775206536) _gate_q_7;
  dcx _gate_q_5, _gate_q_1;
  crz(5.4528319391186715) _gate_q_13, _gate_q_8;
  h _gate_q_3;
  y _gate_q_0;
  p(5.91983988320886) _gate_q_14;
  xx_plus_yy_5107446560(1.8276907369053732, 5.24199424985343) _gate_q_9, _gate_q_4;
  rzx_5107441328(0.29539887327386855) _gate_q_5, _gate_q_12;
  crz(3.9447590049071666) _gate_q_11, _gate_q_10;
  id _gate_q_3;
  cp(0.962269109900301) _gate_q_6, _gate_q_4;
  u3(5.839743759417055, 2.8379426121881943, 5.546870671261624) _gate_q_14;
  cx _gate_q_8, _gate_q_7;
  p(5.330474063733809) _gate_q_9;
  dcx _gate_q_1, _gate_q_13;
  h _gate_q_2;
  tdg _gate_q_0;
  csdg _gate_q_13, _gate_q_2;
  rx(1.7449557642702698) _gate_q_0;
  h _gate_q_14;
  xx_minus_yy_5107439072(1.8031889356876853, 2.7193635108102283) _gate_q_10, _gate_q_1;
  u3(0.9911857139886113, 1.566018530793522, 5.537660909069307) _gate_q_12;
  iswap _gate_q_4, _gate_q_11;
  csdg _gate_q_5, _gate_q_3;
  ch _gate_q_6, _gate_q_7;
  p(1.3082756841862209) _gate_q_9;
  u3(3.3448439975215627, 1.0715461842746352, 4.2265987324307) _gate_q_8;
  crx(0.026116895251559975) _gate_q_9, _gate_q_14;
  cz _gate_q_8, _gate_q_4;
  rz(0.589746589321088) _gate_q_12;
  r_5107439792(3.951671316337914, 0.7988615232354973) _gate_q_7;
  U(2.861358926494106, 6.249772136640276, 3.969514717406256) _gate_q_0;
  ch _gate_q_3, _gate_q_2;
  rx(0.2775635095445207) _gate_q_1;
  rz(2.9041509853391725) _gate_q_5;
  xx_plus_yy_5107435808(3.5662052643996005, 5.531422209715605) _gate_q_13, _gate_q_6;
  x _gate_q_11;
  sxdg _gate_q_10;
  s _gate_q_13;
  cry(1.3101626939641224) _gate_q_8, _gate_q_1;
  r_5107444352(3.712670587708644, 6.148070584881185) _gate_q_12;
  xx_plus_yy_5107448480(4.388100201150265, 0.6142506557364333) _gate_q_3, _gate_q_7;
  u3(5.995721075867678, 6.275761676841345, 6.187862591776959) _gate_q_4;
  rzx_5107433600(0.5990593519930111) _gate_q_0, _gate_q_9;
  crz(0.9563576904510375) _gate_q_5, _gate_q_10;
  ry(3.0476435654576632) _gate_q_2;
  sxdg _gate_q_11;
  ch _gate_q_6, _gate_q_14;
  p(2.1128085747639216) _gate_q_10;
  rzz_5107436288(3.3338500765793393) _gate_q_11, _gate_q_0;
  iswap _gate_q_4, _gate_q_6;
  h _gate_q_9;
  U(2.2549803192403632, 3.997204383702859, 4.786987348785069) _gate_q_5;
  sx _gate_q_8;
  iswap _gate_q_13, _gate_q_2;
  id _gate_q_7;
  cu3_5107434464(4.524625922343405, 2.547078954131527, 2.636298319180441) _gate_q_1, _gate_q_3;
  sx _gate_q_14;
  tdg _gate_q_12;
  ry(2.408422849142405) _gate_q_7;
  ryy_5107442960(0.5208871956401663) _gate_q_5, _gate_q_11;
  cy _gate_q_0, _gate_q_4;
  id _gate_q_12;
  iswap _gate_q_6, _gate_q_10;
  y _gate_q_8;
  cu(6.0244507066855215, 0.20001830678469884, 4.034470312627591, 2.6487848455688523) _gate_q_3, _gate_q_14;
  rzz_5107434176(1.4546909633449665) _gate_q_9, _gate_q_1;
  r_5107444544(3.7087901079300956, 0.4721703663221207) _gate_q_13;
  sxdg _gate_q_2;
  u2(0.31809919047730767, 0.009082196604562104) _gate_q_3;
  rzx_5107445168(3.177703897691635) _gate_q_2, _gate_q_13;
  ecr _gate_q_9, _gate_q_4;
  xx_plus_yy_5107434992(5.702875740292868, 5.141457668404348) _gate_q_6, _gate_q_5;
  rzz_5107444688(4.364702470280162) _gate_q_1, _gate_q_10;
  rzx_5107434416(1.3577491294362931) _gate_q_12, _gate_q_11;
  id _gate_q_14;
  cz _gate_q_8, _gate_q_0;
  tdg _gate_q_7;
  rz(0.654800090240033) _gate_q_3;
  y _gate_q_2;
  cu1_5107433936(2.5168086173853474) _gate_q_13, _gate_q_7;
  cp(4.60254164131837) _gate_q_1, _gate_q_8;
  U(6.143834119216646, 1.2282219618764447, 0.1838014305401582) _gate_q_10;
  rx(2.909556705666175) _gate_q_9;
  h _gate_q_14;
  cz _gate_q_0, _gate_q_4;
  crx(3.241721135744624) _gate_q_6, _gate_q_11;
  cu(6.212284130639726, 4.486627300559857, 3.6025010910470994, 3.6876144775653463) _gate_q_5, _gate_q_12;
}