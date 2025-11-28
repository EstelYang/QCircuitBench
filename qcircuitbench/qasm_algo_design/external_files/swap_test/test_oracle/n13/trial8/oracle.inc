gate rzz_5107935104(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.4607693651185736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107940960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.476944542928644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107935584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2523586096049497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107938080(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.148282236600778) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5107937792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.544214334772315) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107941344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.987526903924474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5107937360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.723918418189651) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rzx_5107937648(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6945414906346785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5107938848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.208684949159931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107932752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0676952538663933) _gate_q_0;
  u1(1.2397930700948032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1456875293165452, 0, -3.0676952538663933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1456875293165452, 1.8279021837715903, 0) _gate_q_1;
}
gate xx_minus_yy_5107934624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.5504776433739025) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6884541627728711) _gate_q_0;
  ry(-0.6884541627728711) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.5504776433739025) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5107934240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.441617537441679) _gate_q_0;
  u1(-0.7537096573456088) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6610600669868376, 0, -4.441617537441679) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6610600669868376, 5.195327194787287, 0) _gate_q_1;
}
gate rxx_5107934384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.94921669793703) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107933808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1845287469422185) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107932656(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(6.027662357674221) _gate_q_0;
  u1(-0.13532230382957877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5344317645556855, 0, -6.027662357674221) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5344317645556855, 6.1629846615038, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  rzz_5107935104(2.4607693651185736) _gate_q_7, _gate_q_5;
  swap _gate_q_2, _gate_q_11;
  cu(6.108595147390629, 2.6776084414037222, 5.271055512012446, 3.5240805649662557) _gate_q_3, _gate_q_1;
  rzx_5107940960(4.476944542928644) _gate_q_4, _gate_q_6;
  ry(1.2619275228984033) _gate_q_12;
  cu(0.02076709554176901, 2.950911232186587, 4.806359684535247, 1.3776447169046044) _gate_q_8, _gate_q_0;
  crx(1.091659830502912) _gate_q_10, _gate_q_9;
  rzx_5107935584(1.2523586096049497) _gate_q_10, _gate_q_7;
  ryy_5107938080(6.148282236600778) _gate_q_5, _gate_q_4;
  cu(1.1702143902689195, 3.989799977557718, 2.1574962336640255, 0.5376280089194327) _gate_q_8, _gate_q_0;
  rzx_5107937792(2.544214334772315) _gate_q_3, _gate_q_6;
  tdg _gate_q_1;
  id _gate_q_11;
  rzx_5107941344(5.987526903924474) _gate_q_2, _gate_q_9;
  t _gate_q_12;
  tdg _gate_q_8;
  u3(2.4131270231685877, 1.3323284405214042, 4.405661642024753) _gate_q_10;
  iswap _gate_q_2, _gate_q_7;
  cx _gate_q_9, _gate_q_0;
  t _gate_q_12;
  y _gate_q_4;
  cp(2.246117889519042) _gate_q_3, _gate_q_5;
  csdg _gate_q_1, _gate_q_11;
  p(5.309818513128071) _gate_q_6;
  cp(2.797737670971871) _gate_q_10, _gate_q_6;
  cx _gate_q_9, _gate_q_7;
  cry(5.585585427019787) _gate_q_12, _gate_q_2;
  cry(3.051641945120067) _gate_q_3, _gate_q_11;
  ch _gate_q_0, _gate_q_4;
  rzx_5107937360(5.723918418189651) _gate_q_1, _gate_q_8;
  h _gate_q_5;
  t _gate_q_12;
  tdg _gate_q_11;
  z _gate_q_2;
  sxdg _gate_q_1;
  rzx_5107937648(0.6945414906346785) _gate_q_10, _gate_q_4;
  ecr _gate_q_3, _gate_q_5;
  iswap _gate_q_8, _gate_q_6;
  h _gate_q_9;
  u1(5.292151184801322) _gate_q_0;
  u2(1.3722021842519125, 1.87283301244034) _gate_q_7;
  csx _gate_q_2, _gate_q_11;
  id _gate_q_12;
  u3(3.484743892206538, 2.066455552050512, 5.036125463119351) _gate_q_3;
  x _gate_q_7;
  rz(6.087918667361196) _gate_q_4;
  rxx_5107938848(3.208684949159931) _gate_q_0, _gate_q_10;
  cy _gate_q_1, _gate_q_6;
  s _gate_q_8;
  sxdg _gate_q_9;
  sdg _gate_q_5;
  y _gate_q_7;
  cu3_5107932752(2.2913750586330903, 1.8279021837715903, 4.307488323961197) _gate_q_8, _gate_q_4;
  z _gate_q_0;
  xx_minus_yy_5107934624(1.3769083255457422, 4.5504776433739025) _gate_q_2, _gate_q_5;
  cz _gate_q_3, _gate_q_9;
  iswap _gate_q_6, _gate_q_10;
  csx _gate_q_1, _gate_q_11;
  s _gate_q_12;
  dcx _gate_q_0, _gate_q_10;
  ecr _gate_q_5, _gate_q_1;
  rz(3.7183993683884453) _gate_q_7;
  crx(6.090067906284451) _gate_q_4, _gate_q_2;
  U(2.476192248653517, 4.874197598000523, 4.044272090505321) _gate_q_6;
  u1(1.0192983481441003) _gate_q_9;
  dcx _gate_q_8, _gate_q_11;
  cu3_5107934240(1.3221201339736752, 5.195327194787287, 3.68790788009607) _gate_q_3, _gate_q_12;
  ecr _gate_q_1, _gate_q_8;
  x _gate_q_12;
  x _gate_q_10;
  p(1.4894432910234674) _gate_q_3;
  rxx_5107934384(4.94921669793703) _gate_q_4, _gate_q_6;
  s _gate_q_9;
  rx(2.5221293718412516) _gate_q_7;
  sxdg _gate_q_0;
  y _gate_q_5;
  rz(3.799990095270053) _gate_q_2;
  sdg _gate_q_11;
  rxx_5107933808(4.1845287469422185) _gate_q_7, _gate_q_12;
  ry(3.296113144360751) _gate_q_6;
  cp(5.911704879835105) _gate_q_1, _gate_q_2;
  t _gate_q_4;
  cu3_5107932656(5.068863529111371, 6.1629846615038, 5.892340053844642) _gate_q_9, _gate_q_11;
  cy _gate_q_10, _gate_q_5;
  crx(3.7599301588980594) _gate_q_3, _gate_q_0;
  s _gate_q_8;
}
gate xx_plus_yy_5107935632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.429431298453358) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4653745455272615) _gate_q_1;
  ry(-1.4653745455272615) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.429431298453358) _gate_q_0;
}
gate rzz_5107925408(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0431803305005554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5107925312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1140478722652358, 3.928157771926683, -3.928157771926683) _gate_q_0;
}
gate xx_minus_yy_5107930064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.192409399629184) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7140216228231808) _gate_q_0;
  ry(-0.7140216228231808) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.192409399629184) _gate_q_1;
}
gate xx_minus_yy_5107927136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.628286755838714) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.40435800383895704) _gate_q_0;
  ry(-0.40435800383895704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.628286755838714) _gate_q_1;
}
gate xx_plus_yy_5107930160(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.144373286091817) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.729169249605787) _gate_q_1;
  ry(-2.729169249605787) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.144373286091817) _gate_q_0;
}
gate xx_minus_yy_5107927568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.733335530197753) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5467500594600656) _gate_q_0;
  ry(-0.5467500594600656) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.733335530197753) _gate_q_1;
}
gate r_5107925072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0726927553098642, 0.35933742472321795, -0.35933742472321795) _gate_q_0;
}
gate cu3_5107926704(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7804747237130853) _gate_q_0;
  u1(1.0469992284650051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.426571004624231, 0, -3.7804747237130853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.426571004624231, 2.73347549524808, 0) _gate_q_1;
}
gate rzx_5107929488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0798250809190786) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5107930112(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.036075305374027, -0.8451962405620009, 0.8451962405620009) _gate_q_0;
}
gate cu3_5107929680(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2252116389685286) _gate_q_0;
  u1(0.5742586265723373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3400049433839816, 0, -3.2252116389685286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3400049433839816, 2.6509530123961915, 0) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5107936544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8299559433335983) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5107926032(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.450499511153796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5107927424(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.663828304713691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5107935488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7115918612158958) _gate_q_0;
  u1(-0.7649750353357749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0596862160957436, 0, -1.7115918612158958) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0596862160957436, 2.4765668965516707, 0) _gate_q_1;
}
gate xx_plus_yy_5107936256(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1834846815919366) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3503095857104663) _gate_q_1;
  ry(-1.3503095857104663) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1834846815919366) _gate_q_0;
}
gate cu1_5107928288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1206089125591663) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1206089125591663) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1206089125591663) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  xx_plus_yy_5107935632(2.930749091054523, 5.429431298453358) _gate_q_6, _gate_q_4;
  rzz_5107925408(3.0431803305005554) _gate_q_3, _gate_q_1;
  sdg _gate_q_0;
  cz _gate_q_12, _gate_q_2;
  u2(0.7267154115143387, 0.3236563838262535) _gate_q_7;
  swap _gate_q_10, _gate_q_8;
  s _gate_q_11;
  r_5107925312(1.1140478722652358, 5.49895409872158) _gate_q_9;
  y _gate_q_5;
  id _gate_q_7;
  cp(2.1145936067798017) _gate_q_0, _gate_q_9;
  u1(5.160983399681738) _gate_q_2;
  xx_minus_yy_5107930064(1.4280432456463616, 4.192409399629184) _gate_q_12, _gate_q_11;
  p(2.741371070199645) _gate_q_1;
  xx_minus_yy_5107927136(0.8087160076779141, 3.628286755838714) _gate_q_6, _gate_q_8;
  sx _gate_q_4;
  rz(3.8932123357131463) _gate_q_10;
  u1(3.972378804799594) _gate_q_3;
  tdg _gate_q_5;
  u3(3.0808011871025087, 0.9439954422615201, 6.048358926192609) _gate_q_4;
  xx_plus_yy_5107930160(5.458338499211574, 4.144373286091817) _gate_q_10, _gate_q_9;
  u1(4.59015556557194) _gate_q_1;
  ry(3.1760156094770644) _gate_q_2;
  xx_minus_yy_5107927568(1.0935001189201312, 1.733335530197753) _gate_q_5, _gate_q_8;
  r_5107925072(1.0726927553098642, 1.9301337515181145) _gate_q_0;
  csx _gate_q_6, _gate_q_3;
  U(2.2757396597103696, 6.282266569472573, 0.9057353530465105) _gate_q_12;
  cu(3.186357787245281, 1.2360897036639678, 2.061877975072462, 3.2728120292091485) _gate_q_7, _gate_q_11;
  cu3_5107926704(2.853142009248462, 2.73347549524808, 4.8274739521780905) _gate_q_3, _gate_q_8;
  rzx_5107929488(3.0798250809190786) _gate_q_11, _gate_q_5;
  r_5107930112(4.036075305374027, 0.7256000862328956) _gate_q_9;
  csdg _gate_q_10, _gate_q_12;
  cu3_5107929680(2.680009886767963, 2.6509530123961915, 3.799470265540866) _gate_q_2, _gate_q_1;
  z _gate_q_0;
  sxdg _gate_q_4;
  dcx _gate_q_6, _gate_q_7;
  swap _gate_q_4, _gate_q_3;
  cp(1.8708476903754663) _gate_q_1, _gate_q_11;
  h _gate_q_9;
  crz(3.8495098891967943) _gate_q_7, _gate_q_5;
  cy _gate_q_12, _gate_q_8;
  cx _gate_q_0, _gate_q_6;
  u3(1.2057718633986745, 4.840430551080157, 4.1463564422302) _gate_q_2;
  u2(2.1332696641040942, 3.6160127328163294) _gate_q_10;
  cs _gate_q_3, _gate_q_11;
  p(1.994743489888463) _gate_q_0;
  cp(1.8215457015892265) _gate_q_6, _gate_q_1;
  swap _gate_q_10, _gate_q_9;
  u2(2.824664156897489, 5.018782795283317) _gate_q_8;
  tdg _gate_q_2;
  sxdg _gate_q_4;
  u1(3.6209921121066797) _gate_q_12;
  swap _gate_q_5, _gate_q_7;
  rzx_5107936544(3.8299559433335983) _gate_q_12, _gate_q_9;
  id _gate_q_11;
  u1(5.246776962182317) _gate_q_1;
  tdg _gate_q_6;
  rz(1.3075511591382536) _gate_q_4;
  cs _gate_q_10, _gate_q_7;
  swap _gate_q_0, _gate_q_8;
  rzz_5107926032(1.450499511153796) _gate_q_3, _gate_q_2;
  sxdg _gate_q_5;
  u3(5.568140770023806, 3.064369150272736, 0.5795856503717236) _gate_q_3;
  x _gate_q_7;
  rx(3.133878451361714) _gate_q_11;
  ryy_5107927424(1.663828304713691) _gate_q_0, _gate_q_2;
  y _gate_q_12;
  y _gate_q_10;
  csdg _gate_q_5, _gate_q_9;
  cp(0.3730428940623405) _gate_q_1, _gate_q_4;
  rz(1.9311589000035274) _gate_q_8;
  u2(5.1727993243496675, 0.050613701981810734) _gate_q_6;
  csdg _gate_q_0, _gate_q_4;
  sxdg _gate_q_8;
  cu(3.100806499101979, 0.42603714335801596, 0.6754469631010546, 0.32041566569215185) _gate_q_3, _gate_q_11;
  cy _gate_q_6, _gate_q_9;
  sxdg _gate_q_7;
  csx _gate_q_5, _gate_q_12;
  z _gate_q_1;
  cu3_5107935488(4.119372432191487, 2.4765668965516707, 0.946616825880121) _gate_q_2, _gate_q_10;
  z _gate_q_10;
  sxdg _gate_q_2;
  xx_plus_yy_5107936256(2.7006191714209327, 2.1834846815919366) _gate_q_12, _gate_q_4;
  cu1_5107928288(2.2412178251183326) _gate_q_6, _gate_q_3;
  h _gate_q_9;
  sxdg _gate_q_0;
  y _gate_q_7;
  id _gate_q_8;
  cp(5.626937888504959) _gate_q_1, _gate_q_11;
  sdg _gate_q_5;
}