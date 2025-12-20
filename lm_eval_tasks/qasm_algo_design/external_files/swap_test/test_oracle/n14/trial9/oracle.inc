gate cu3_5105587968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1801570931252883) _gate_q_0;
  u1(-1.5000775684191059) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5780037000824638, 0, -2.1801570931252883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5780037000824638, 3.6802346615443944, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5105588832(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.624199273669335) _gate_q_0;
  u1(-0.04495838349628256) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.2741246209888586, 0, -4.624199273669335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.2741246209888586, 4.669157657165617, 0) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu3_5105596416(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.906229131174367) _gate_q_0;
  u1(2.216718190918076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5368545029841228, 0, -2.906229131174367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5368545029841228, 0.689510940256291, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5105582448(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6781654685269443) _gate_q_1;
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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5105592864(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4508222358346323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105587920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1078619510791157, -1.536104699451818, 1.536104699451818) _gate_q_0;
}
gate rzx_5105597520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.276333712435419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105590320(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0996795305023244) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0996795305023244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0996795305023244) _gate_q_1;
}
gate cu1_5105595648(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.231315106488149) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.231315106488149) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.231315106488149) _gate_q_1;
}
gate xx_minus_yy_5105583456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.2379949456598895) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0756680605481423) _gate_q_0;
  ry(-2.0756680605481423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.2379949456598895) _gate_q_1;
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
gate rxx_5105582736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.812645071947588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105595504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3460775646561363) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.185254630984045) _gate_q_1;
  ry(-2.185254630984045) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3460775646561363) _gate_q_0;
}
gate cu1_5105590080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.45445242912655864) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.45445242912655864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.45445242912655864) _gate_q_1;
}
gate ryy_5105588112(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9377525978537504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105587248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.192554348083895, -0.36964329736768, 0.36964329736768) _gate_q_0;
}
gate xx_plus_yy_5105591472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.24915292797640506) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8557173585776827) _gate_q_1;
  ry(-1.8557173585776827) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.24915292797640506) _gate_q_0;
}
gate xx_minus_yy_5105582640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.251456103777611) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.41184573275743813) _gate_q_0;
  ry(-0.41184573275743813) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.251456103777611) _gate_q_1;
}
gate rzz_5105595408(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.985571531311544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105592192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.807110223662952, 4.519724142012939, -4.519724142012939) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cu3_5105587968(3.1560074001649276, 3.6802346615443944, 0.6800795247061825) _gate_q_13, _gate_q_9;
  dcx _gate_q_5, _gate_q_0;
  cu3_5105588832(4.548249241977717, 4.669157657165617, 4.579240890173052) _gate_q_8, _gate_q_11;
  dcx _gate_q_10, _gate_q_12;
  csdg _gate_q_7, _gate_q_4;
  sx _gate_q_1;
  crz(1.9526276738857564) _gate_q_3, _gate_q_6;
  z _gate_q_2;
  sx _gate_q_10;
  x _gate_q_1;
  csdg _gate_q_8, _gate_q_12;
  p(6.093751618215223) _gate_q_7;
  cu3_5105596416(1.0737090059682457, 0.689510940256291, 5.122947322092443) _gate_q_0, _gate_q_11;
  cs _gate_q_2, _gate_q_4;
  y _gate_q_9;
  y _gate_q_6;
  sdg _gate_q_13;
  rxx_5105582448(2.6781654685269443) _gate_q_3, _gate_q_5;
  iswap _gate_q_13, _gate_q_11;
  cu(1.114784659087259, 3.6525473998232716, 5.490969706495568, 2.387464781081113) _gate_q_4, _gate_q_12;
  csx _gate_q_2, _gate_q_8;
  cp(0.10966771556553244) _gate_q_6, _gate_q_0;
  u2(1.6250777789933633, 0.5273840146099406) _gate_q_1;
  cz _gate_q_9, _gate_q_5;
  y _gate_q_3;
  u3(5.750659128217252, 1.3854690767036808, 4.833136278938708) _gate_q_10;
  s _gate_q_7;
  ry(5.449447430022731) _gate_q_10;
  rx(0.4241541211416951) _gate_q_6;
  sxdg _gate_q_1;
  ryy_5105592864(1.4508222358346323) _gate_q_11, _gate_q_7;
  cy _gate_q_9, _gate_q_5;
  crx(4.666918557041642) _gate_q_12, _gate_q_13;
  id _gate_q_4;
  p(4.922367517428983) _gate_q_3;
  r_5105587920(1.1078619510791157, 0.03469162734307868) _gate_q_2;
  rzx_5105597520(3.276333712435419) _gate_q_8, _gate_q_0;
  cu1_5105590320(6.199359061004649) _gate_q_0, _gate_q_7;
  cu1_5105595648(4.462630212976298) _gate_q_9, _gate_q_4;
  xx_minus_yy_5105583456(4.151336121096285, 2.2379949456598895) _gate_q_5, _gate_q_12;
  cz _gate_q_1, _gate_q_2;
  s _gate_q_8;
  u2(2.022707037318009, 1.9777454291238217) _gate_q_13;
  ecr _gate_q_10, _gate_q_3;
  csx _gate_q_11, _gate_q_6;
  csdg _gate_q_6, _gate_q_7;
  csx _gate_q_8, _gate_q_12;
  cu(6.177792112429092, 3.851208036850716, 5.106777038688716, 1.3754083281617624) _gate_q_2, _gate_q_10;
  dcx _gate_q_5, _gate_q_9;
  s _gate_q_11;
  rxx_5105582736(1.812645071947588) _gate_q_1, _gate_q_0;
  tdg _gate_q_3;
  xx_plus_yy_5105595504(4.37050926196809, 2.3460775646561363) _gate_q_4, _gate_q_13;
  cu1_5105590080(0.9089048582531173) _gate_q_4, _gate_q_2;
  cs _gate_q_0, _gate_q_7;
  ryy_5105588112(1.9377525978537504) _gate_q_5, _gate_q_13;
  cx _gate_q_8, _gate_q_3;
  y _gate_q_12;
  r_5105587248(5.192554348083895, 1.2011530294272166) _gate_q_9;
  tdg _gate_q_1;
  U(2.6070541026453085, 5.310404269087557, 3.001536068454514) _gate_q_6;
  id _gate_q_10;
  id _gate_q_11;
  xx_plus_yy_5105591472(3.7114347171553654, 0.24915292797640506) _gate_q_9, _gate_q_13;
  u2(0.20843915533042945, 3.9053064764361003) _gate_q_8;
  crx(4.66363221082229) _gate_q_3, _gate_q_6;
  ry(3.1055856967245004) _gate_q_10;
  csx _gate_q_2, _gate_q_11;
  U(0.1628034902019621, 0.984855990675391, 4.053181531417995) _gate_q_12;
  id _gate_q_0;
  dcx _gate_q_5, _gate_q_1;
  ry(2.591508009560088) _gate_q_7;
  y _gate_q_4;
  ecr _gate_q_12, _gate_q_13;
  x _gate_q_3;
  u1(6.259107766015878) _gate_q_7;
  y _gate_q_10;
  id _gate_q_1;
  ch _gate_q_9, _gate_q_8;
  s _gate_q_2;
  cp(4.814203094715112) _gate_q_4, _gate_q_11;
  tdg _gate_q_6;
  iswap _gate_q_5, _gate_q_0;
  h _gate_q_9;
  xx_minus_yy_5105582640(0.8236914655148763, 4.251456103777611) _gate_q_5, _gate_q_13;
  rz(3.72040484878542) _gate_q_12;
  sx _gate_q_6;
  id _gate_q_2;
  rzz_5105595408(3.985571531311544) _gate_q_3, _gate_q_0;
  cy _gate_q_1, _gate_q_8;
  sdg _gate_q_7;
  r_5105592192(4.807110223662952, 6.090520468807836) _gate_q_11;
  y _gate_q_4;
  u1(4.5667292723182324) _gate_q_10;
}
gate rxx_5105585808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.771186647017316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5105594304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6918459936508066, 4.442565189756559, -4.442565189756559) _gate_q_0;
}
gate xx_minus_yy_5108056192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.884626829018325) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.05677194735799092) _gate_q_0;
  ry(-0.05677194735799092) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.884626829018325) _gate_q_1;
}
gate cu3_5108060608(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7729826928956285) _gate_q_0;
  u1(0.3638258954981748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5028911934204605, 0, -1.7729826928956285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5028911934204605, 1.4091567973974537, 0) _gate_q_1;
}
gate rxx_5108068192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1917864375468068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5108057872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5027610656225445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5108072368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4787968854273505) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3065571281737017) _gate_q_0;
  ry(-0.3065571281737017) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4787968854273505) _gate_q_1;
}
gate rzz_5108071552(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2600255839184626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5108067616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.3963929095720349) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5108060128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1487416743440342) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1487416743440342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1487416743440342) _gate_q_1;
}
gate rxx_5108056432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.021607322163821) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108057104(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2191039321013237, 3.194366976461276, -3.194366976461276) _gate_q_0;
}
gate cu3_5108057248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8396483732714066) _gate_q_0;
  u1(1.5231451475650295) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4881097357865516, 0, -2.8396483732714066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4881097357865516, 1.316503225706377, 0) _gate_q_1;
}
gate r_5108065360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.337187572266618, -0.2522712949353343, 0.2522712949353343) _gate_q_0;
}
gate ryy_5108056576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.669882617149544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108057728(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7727606743770226, 0.9454938138988034, -0.9454938138988034) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  rz(1.1630760080018308) _gate_q_7;
  ecr _gate_q_10, _gate_q_8;
  cy _gate_q_3, _gate_q_2;
  t _gate_q_0;
  crz(2.0594077744597534) _gate_q_9, _gate_q_5;
  crz(4.685403507217161) _gate_q_4, _gate_q_13;
  sdg _gate_q_12;
  cs _gate_q_1, _gate_q_6;
  id _gate_q_11;
  sdg _gate_q_5;
  h _gate_q_7;
  ry(0.31544929627081664) _gate_q_12;
  ry(2.5323653426107136) _gate_q_6;
  rxx_5105585808(4.771186647017316) _gate_q_2, _gate_q_13;
  ch _gate_q_1, _gate_q_9;
  r_5105594304(1.6918459936508066, 6.013361516551456) _gate_q_3;
  u2(0.794105205394437, 2.000812968870562) _gate_q_4;
  sxdg _gate_q_10;
  crx(4.2674247287378755) _gate_q_0, _gate_q_11;
  rx(4.310624574700407) _gate_q_8;
  t _gate_q_8;
  xx_minus_yy_5108056192(0.11354389471598184, 4.884626829018325) _gate_q_3, _gate_q_11;
  cu3_5108060608(5.005782386840921, 1.4091567973974537, 2.1368085883938033) _gate_q_4, _gate_q_2;
  crx(4.670338526777134) _gate_q_5, _gate_q_7;
  cz _gate_q_6, _gate_q_12;
  rxx_5108068192(1.1917864375468068) _gate_q_13, _gate_q_1;
  cy _gate_q_10, _gate_q_9;
  rx(5.420542732309413) _gate_q_0;
  rzx_5108057872(0.5027610656225445) _gate_q_10, _gate_q_4;
  ry(1.369718082233121) _gate_q_1;
  cp(4.49708215805932) _gate_q_5, _gate_q_8;
  rz(1.3837104156285198) _gate_q_9;
  sdg _gate_q_12;
  cp(4.457588672720784) _gate_q_0, _gate_q_11;
  ch _gate_q_3, _gate_q_13;
  swap _gate_q_6, _gate_q_7;
  ry(4.1598674819355805) _gate_q_2;
  dcx _gate_q_6, _gate_q_12;
  t _gate_q_13;
  cy _gate_q_5, _gate_q_10;
  sdg _gate_q_0;
  crz(1.3067758672837022) _gate_q_8, _gate_q_9;
  xx_minus_yy_5108072368(0.6131142563474034, 1.4787968854273505) _gate_q_1, _gate_q_3;
  dcx _gate_q_2, _gate_q_4;
  sdg _gate_q_11;
  sx _gate_q_7;
  z _gate_q_0;
  crz(5.341085368149955) _gate_q_2, _gate_q_10;
  ch _gate_q_12, _gate_q_8;
  u2(2.032258590088963, 4.746487608054753) _gate_q_9;
  rzz_5108071552(1.2600255839184626) _gate_q_11, _gate_q_6;
  sxdg _gate_q_4;
  iswap _gate_q_5, _gate_q_3;
  rxx_5108067616(0.3963929095720349) _gate_q_1, _gate_q_7;
  u1(3.757415482417927) _gate_q_13;
  sx _gate_q_6;
  z _gate_q_4;
  iswap _gate_q_10, _gate_q_3;
  swap _gate_q_12, _gate_q_13;
  u2(1.871884827783366, 4.418990729811814) _gate_q_8;
  u1(2.6096617975958765) _gate_q_9;
  cu1_5108060128(2.2974833486880684) _gate_q_11, _gate_q_7;
  rxx_5108056432(3.021607322163821) _gate_q_1, _gate_q_0;
  cs _gate_q_2, _gate_q_5;
  ry(0.8781419025781978) _gate_q_12;
  y _gate_q_9;
  csx _gate_q_11, _gate_q_1;
  r_5108057104(2.2191039321013237, 4.765163303256172) _gate_q_3;
  cu3_5108057248(2.976219471573103, 1.316503225706377, 4.362793520836436) _gate_q_13, _gate_q_10;
  ecr _gate_q_4, _gate_q_8;
  rx(0.9744985022253089) _gate_q_6;
  u1(2.1756509142640184) _gate_q_5;
  rz(2.4707217794900265) _gate_q_0;
  cx _gate_q_2, _gate_q_7;
  crz(4.218368824201684) _gate_q_6, _gate_q_10;
  ecr _gate_q_11, _gate_q_0;
  csdg _gate_q_5, _gate_q_3;
  r_5108065360(5.337187572266618, 1.3185250318595623) _gate_q_2;
  ryy_5108056576(4.669882617149544) _gate_q_13, _gate_q_1;
  ry(6.077338061905497) _gate_q_9;
  cs _gate_q_8, _gate_q_4;
  r_5108057728(2.7727606743770226, 2.5162901406937) _gate_q_7;
  U(5.788716149427532, 2.3876890714601426, 1.5863800801528536) _gate_q_12;
  sdg _gate_q_4;
  cry(2.239655330590778) _gate_q_9, _gate_q_12;
  cry(3.983928582743308) _gate_q_1, _gate_q_3;
  csdg _gate_q_11, _gate_q_2;
  z _gate_q_10;
  s _gate_q_8;
  sdg _gate_q_13;
  id _gate_q_6;
  swap _gate_q_5, _gate_q_7;
  ry(5.8420039344714905) _gate_q_0;
}