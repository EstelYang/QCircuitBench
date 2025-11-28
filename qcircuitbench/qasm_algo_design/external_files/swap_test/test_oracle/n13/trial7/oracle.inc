gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5105283104(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.415508828562426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105273312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.50823304381246) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3287298407717674) _gate_q_1;
  ry(-1.3287298407717674) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.50823304381246) _gate_q_0;
}
gate xx_plus_yy_5105282384(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2293884870041585) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.108743507154284) _gate_q_1;
  ry(-3.108743507154284) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2293884870041585) _gate_q_0;
}
gate cu3_5105275136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3168167783399323) _gate_q_0;
  u1(-2.7525826745298216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3890195770984118, 0, -3.3168167783399323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3890195770984118, 6.069399452869754, 0) _gate_q_1;
}
gate ryy_5105276528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8070511892486243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105282480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5625634383916706) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5625634383916706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5625634383916706) _gate_q_1;
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
gate xx_plus_yy_5105283536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.630254192302425) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.703599948465395) _gate_q_1;
  ry(-1.703599948465395) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.630254192302425) _gate_q_0;
}
gate cu3_5105283296(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7163200701924148) _gate_q_0;
  u1(1.2462055444423983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4882575509731975, 0, -1.7163200701924148) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4882575509731975, 0.4701145257500167, 0) _gate_q_1;
}
gate cu3_5105276432(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1374531268167436) _gate_q_0;
  u1(1.5597417574571721) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5313045358283401, 0, -2.1374531268167436) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5313045358283401, 0.5777113693595717, 0) _gate_q_1;
}
gate rzx_5105274560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.235195985629446) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5105274800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.210807081815028) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.1186894100210876) _gate_q_1;
  ry(-3.1186894100210876) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.210807081815028) _gate_q_0;
}
gate cu3_5105273216(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.738022745661423) _gate_q_0;
  u1(0.06547021209709536) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.2760303761886161, 0, -5.738022745661423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.2760303761886161, 5.672552533564327, 0) _gate_q_1;
}
gate rzz_5105275904(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.205960731023004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105287040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0219947071373263) _gate_q_0;
  u1(-2.8845887115860465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7132919724530533, 0, -3.0219947071373263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7132919724530533, 5.906583418723373, 0) _gate_q_1;
}
gate ryy_5105284832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6610366238290646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105279408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.5588038882070971) _gate_q_0;
  u1(-0.6628597999224162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0868668990589887, 0, -1.5588038882070971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0868668990589887, 2.2216636881295133, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5105276768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7826377903084714) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7826377903084714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7826377903084714) _gate_q_1;
}
gate r_5105284400(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5412175335426803, -1.4084906797365506, 1.4084906797365506) _gate_q_0;
}
gate xx_minus_yy_5105285888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3231069081990277) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7757442472455598) _gate_q_0;
  ry(-1.7757442472455598) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3231069081990277) _gate_q_1;
}
gate ryy_5105284160(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9054073490777514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105276384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.05632979881012) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5105284256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.376754212230799) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105282144(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4567598391153618) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105280464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4278327826728723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5105279072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.11030857710529973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rxx_5105273888(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4559144146421827) _gate_q_1;
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
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  dcx _gate_q_0, _gate_q_1;
  cu(0.8037844709546267, 0.14310564454649732, 0.08792416133881983, 4.195154137388759) _gate_q_9, _gate_q_6;
  ryy_5105283104(2.415508828562426) _gate_q_11, _gate_q_5;
  ry(4.339695636643843) _gate_q_12;
  rz(1.6235858571253539) _gate_q_8;
  cy _gate_q_2, _gate_q_7;
  xx_plus_yy_5105273312(2.6574596815435347, 4.50823304381246) _gate_q_10, _gate_q_4;
  id _gate_q_3;
  xx_plus_yy_5105282384(6.217487014308568, 2.2293884870041585) _gate_q_7, _gate_q_12;
  rz(3.137889506784472) _gate_q_3;
  cu3_5105275136(0.7780391541968236, 6.069399452869754, 0.5642341038101106) _gate_q_10, _gate_q_5;
  ryy_5105276528(1.8070511892486243) _gate_q_8, _gate_q_1;
  z _gate_q_2;
  t _gate_q_4;
  cu1_5105282480(1.1251268767833411) _gate_q_11, _gate_q_6;
  u3(0.18932072972756164, 1.8154453785725428, 2.737336219441655) _gate_q_0;
  sdg _gate_q_9;
  ecr _gate_q_3, _gate_q_9;
  xx_plus_yy_5105283536(3.40719989693079, 4.630254192302425) _gate_q_7, _gate_q_4;
  sx _gate_q_8;
  id _gate_q_11;
  u1(4.949738297036175) _gate_q_5;
  rz(4.874077189863034) _gate_q_2;
  cp(4.588799638009096) _gate_q_10, _gate_q_6;
  cu3_5105283296(2.976515101946395, 0.4701145257500167, 2.962525614634813) _gate_q_12, _gate_q_1;
  rz(4.979809551265634) _gate_q_0;
  t _gate_q_9;
  cu3_5105276432(3.0626090716566803, 0.5777113693595717, 3.697194884273916) _gate_q_7, _gate_q_6;
  crz(5.78635021710186) _gate_q_3, _gate_q_5;
  rzx_5105274560(4.235195985629446) _gate_q_12, _gate_q_8;
  xx_plus_yy_5105274800(6.237378820042175, 2.210807081815028) _gate_q_11, _gate_q_0;
  u1(2.875859876144894) _gate_q_1;
  u3(4.448901880738106, 3.8371749181165336, 5.437864391349335) _gate_q_4;
  ecr _gate_q_10, _gate_q_2;
  cy _gate_q_5, _gate_q_10;
  cry(2.606777634230217) _gate_q_11, _gate_q_2;
  cu3_5105273216(0.5520607523772322, 5.672552533564327, 5.803492957758518) _gate_q_12, _gate_q_0;
  rzz_5105275904(3.205960731023004) _gate_q_1, _gate_q_8;
  id _gate_q_7;
  z _gate_q_4;
  cry(1.5757952700609692) _gate_q_9, _gate_q_6;
  U(2.937179938013681, 6.159913532456257, 4.688655287993476) _gate_q_3;
  cu3_5105287040(3.4265839449061066, 5.906583418723373, 0.1374059955512801) _gate_q_0, _gate_q_8;
  ryy_5105284832(2.6610366238290646) _gate_q_12, _gate_q_3;
  tdg _gate_q_5;
  sx _gate_q_6;
  cu3_5105279408(6.173733798117977, 2.2216636881295133, 0.8959440882846809) _gate_q_7, _gate_q_1;
  u3(2.165567081017174, 5.314783435568004, 0.9050509225401184) _gate_q_9;
  cs _gate_q_2, _gate_q_11;
  sxdg _gate_q_10;
  p(5.779626685457997) _gate_q_4;
  s _gate_q_7;
  cu1_5105276768(3.5652755806169427) _gate_q_12, _gate_q_3;
  p(1.1741499132284705) _gate_q_4;
  r_5105284400(2.5412175335426803, 0.162305647058346) _gate_q_1;
  xx_minus_yy_5105285888(3.5514884944911196, 3.3231069081990277) _gate_q_8, _gate_q_2;
  cry(1.6156407493894) _gate_q_11, _gate_q_9;
  ryy_5105284160(2.9054073490777514) _gate_q_0, _gate_q_6;
  dcx _gate_q_10, _gate_q_5;
  rzz_5105276384(4.05632979881012) _gate_q_2, _gate_q_10;
  cz _gate_q_9, _gate_q_12;
  iswap _gate_q_6, _gate_q_7;
  rxx_5105284256(5.376754212230799) _gate_q_4, _gate_q_5;
  sdg _gate_q_3;
  dcx _gate_q_0, _gate_q_1;
  rzz_5105282144(1.4567598391153618) _gate_q_11, _gate_q_8;
  rxx_5105280464(1.4278327826728723) _gate_q_5, _gate_q_3;
  ryy_5105279072(0.11030857710529973) _gate_q_0, _gate_q_12;
  csx _gate_q_4, _gate_q_11;
  t _gate_q_1;
  cz _gate_q_8, _gate_q_2;
  cs _gate_q_6, _gate_q_9;
  x _gate_q_10;
  y _gate_q_7;
  rxx_5105273888(3.4559144146421827) _gate_q_1, _gate_q_7;
  cry(5.274014292271891) _gate_q_5, _gate_q_12;
  cy _gate_q_10, _gate_q_4;
  id _gate_q_11;
  csdg _gate_q_9, _gate_q_6;
  s _gate_q_0;
  cp(3.8926979206713255) _gate_q_2, _gate_q_3;
  u3(5.393542827309265, 6.207127666912302, 0.7908076445922152) _gate_q_8;
}
gate rxx_5106014432(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8816896442693585) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5106014336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0853583693922797) _gate_q_0;
  u1(-2.0423823076924714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.07043237147967907, 0, -3.0853583693922797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.07043237147967907, 5.127740677084751, 0) _gate_q_1;
}
gate rxx_5106011984(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.557487122738444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106023264(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.444863973177718) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5106013328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6296172355763565) _gate_q_0;
  u1(0.5569291285821285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2248644191913824, 0, -1.6296172355763565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2248644191913824, 1.072688106994228, 0) _gate_q_1;
}
gate rzx_5107070544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4446511522830141) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105285504(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.079270048003101) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107067424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6946220658070996) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5107067376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.174595902731086) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5107064400(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0558611651921535) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.505104538255544) _gate_q_0;
  ry(-1.505104538255544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0558611651921535) _gate_q_1;
}
gate cu1_5107067616(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0404529453087805) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0404529453087805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0404529453087805) _gate_q_1;
}
gate ryy_5107067952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.935587000049925) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107068000(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.1259657318712435) _gate_q_0;
  u1(1.8076183453903147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7713068012690498, 0, -4.1259657318712435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7713068012690498, 2.318347386480929, 0) _gate_q_1;
}
gate xx_plus_yy_5107067664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.273506709398723) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7043468163211674) _gate_q_1;
  ry(-0.7043468163211674) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.273506709398723) _gate_q_0;
}
gate xx_plus_yy_5107068576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8654984937930843) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4565886523238465) _gate_q_1;
  ry(-0.4565886523238465) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8654984937930843) _gate_q_0;
}
gate cu1_5107068528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.03469407770535816) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.03469407770535816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.03469407770535816) _gate_q_1;
}
gate xx_plus_yy_5107066272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.568305759163339) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.1344762567344984) _gate_q_1;
  ry(-0.1344762567344984) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.568305759163339) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cp(3.810280880171479) _gate_q_10, _gate_q_0;
  cz _gate_q_8, _gate_q_12;
  tdg _gate_q_7;
  csdg _gate_q_2, _gate_q_9;
  rxx_5106014432(1.8816896442693585) _gate_q_5, _gate_q_3;
  ecr _gate_q_4, _gate_q_1;
  y _gate_q_6;
  s _gate_q_11;
  h _gate_q_5;
  s _gate_q_6;
  cs _gate_q_4, _gate_q_11;
  cu3_5106014336(0.14086474295935814, 5.127740677084751, 1.0429760616998078) _gate_q_0, _gate_q_8;
  rxx_5106011984(2.557487122738444) _gate_q_12, _gate_q_3;
  iswap _gate_q_7, _gate_q_1;
  cz _gate_q_9, _gate_q_10;
  tdg _gate_q_2;
  rzz_5106023264(4.444863973177718) _gate_q_3, _gate_q_6;
  u2(3.784357090478543, 0.4610227329414569) _gate_q_8;
  u3(5.289434335634012, 5.029976443235049, 1.6062420038093101) _gate_q_1;
  id _gate_q_10;
  csx _gate_q_5, _gate_q_7;
  s _gate_q_0;
  iswap _gate_q_11, _gate_q_2;
  cu3_5106013328(2.449728838382765, 1.072688106994228, 2.186546364158485) _gate_q_4, _gate_q_9;
  id _gate_q_12;
  u2(2.5702214622171637, 0.8221091700333115) _gate_q_2;
  rzx_5107070544(0.4446511522830141) _gate_q_3, _gate_q_5;
  crx(0.8746504331384761) _gate_q_4, _gate_q_10;
  sx _gate_q_0;
  h _gate_q_7;
  dcx _gate_q_9, _gate_q_11;
  sxdg _gate_q_8;
  u1(1.5357248904919127) _gate_q_6;
  cs _gate_q_1, _gate_q_12;
  ryy_5105285504(3.079270048003101) _gate_q_3, _gate_q_7;
  rz(0.4989610463516341) _gate_q_2;
  rxx_5107067424(2.6946220658070996) _gate_q_11, _gate_q_10;
  cy _gate_q_9, _gate_q_5;
  csx _gate_q_6, _gate_q_4;
  sx _gate_q_12;
  U(3.6732853686817193, 3.663147859973142, 3.798852777568671) _gate_q_0;
  csx _gate_q_1, _gate_q_8;
  csdg _gate_q_9, _gate_q_8;
  y _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cz _gate_q_0, _gate_q_10;
  rz(5.469527638404151) _gate_q_12;
  sxdg _gate_q_11;
  s _gate_q_6;
  crz(1.8611636209033398) _gate_q_2, _gate_q_1;
  rz(0.9035918312633348) _gate_q_7;
  rzx_5107067376(3.174595902731086) _gate_q_9, _gate_q_5;
  cry(1.8199483735819584) _gate_q_1, _gate_q_3;
  xx_minus_yy_5107064400(3.010209076511088, 3.0558611651921535) _gate_q_6, _gate_q_4;
  u1(2.5005090468744364) _gate_q_11;
  x _gate_q_12;
  cu1_5107067616(2.080905890617561) _gate_q_10, _gate_q_0;
  s _gate_q_7;
  ryy_5107067952(2.935587000049925) _gate_q_8, _gate_q_2;
  cry(2.103673640920687) _gate_q_10, _gate_q_11;
  sx _gate_q_1;
  cu3_5107068000(3.5426136025380996, 2.318347386480929, 5.933584077261559) _gate_q_8, _gate_q_5;
  ecr _gate_q_9, _gate_q_6;
  y _gate_q_2;
  xx_plus_yy_5107067664(1.4086936326423347, 5.273506709398723) _gate_q_7, _gate_q_12;
  xx_plus_yy_5107068576(0.913177304647693, 3.8654984937930843) _gate_q_4, _gate_q_3;
  rz(3.106981463596287) _gate_q_0;
  ch _gate_q_10, _gate_q_7;
  tdg _gate_q_6;
  sdg _gate_q_2;
  z _gate_q_1;
  cu1_5107068528(0.06938815541071632) _gate_q_0, _gate_q_8;
  swap _gate_q_9, _gate_q_4;
  u1(2.544341977637109) _gate_q_12;
  rx(2.362657345587117) _gate_q_11;
  x _gate_q_3;
  y _gate_q_5;
  cx _gate_q_8, _gate_q_6;
  rz(3.415804591024) _gate_q_9;
  u3(5.028985621809916, 5.260995006841887, 2.2844213482248623) _gate_q_0;
  cry(2.649852122628405) _gate_q_3, _gate_q_1;
  u2(1.3830316275095413, 2.4808215828170006) _gate_q_2;
  sxdg _gate_q_12;
  crx(5.094595852150861) _gate_q_11, _gate_q_7;
  xx_plus_yy_5107066272(0.2689525134689968, 4.568305759163339) _gate_q_5, _gate_q_10;
  sxdg _gate_q_4;
}