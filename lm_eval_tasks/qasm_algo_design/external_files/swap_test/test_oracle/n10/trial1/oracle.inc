gate cu1_5105589024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0432747310644714) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0432747310644714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0432747310644714) _gate_q_1;
}
gate rzx_5105594592(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.162971276474879) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105593200(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.75756912409819) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105582160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.147143418983826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate xx_minus_yy_5105595648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8303803633539553) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.89193109421587) _gate_q_0;
  ry(-2.89193109421587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8303803633539553) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rxx_5105587200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3988892472885768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5105593920(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.917954692996041) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105589936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.529349162262671) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.455444969153659) _gate_q_0;
  ry(-2.455444969153659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.529349162262671) _gate_q_1;
}
gate r_5105592144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.048074577639508, 0.4801643987494084, -0.4801643987494084) _gate_q_0;
}
gate rzx_5105584608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.294242580431988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate xx_minus_yy_5105583312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.030960219907175) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6971750249140596) _gate_q_0;
  ry(-1.6971750249140596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.030960219907175) _gate_q_1;
}
gate ryy_5105594976(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.706602477063078) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105597616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2190167105037424) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7570057380157253) _gate_q_0;
  ry(-1.7570057380157253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2190167105037424) _gate_q_1;
}
gate r_5105586096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.046451847911352, 3.1646071242831333, -3.1646071242831333) _gate_q_0;
}
gate cu1_5105588784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2624012157742541) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2624012157742541) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2624012157742541) _gate_q_1;
}
gate xx_plus_yy_5105587584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.489978767101983) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.38574723559376867) _gate_q_1;
  ry(-0.38574723559376867) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.489978767101983) _gate_q_0;
}
gate xx_plus_yy_5105597040(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.22228929800258) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2797731716828507) _gate_q_1;
  ry(-1.2797731716828507) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.22228929800258) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u1(3.316829440946287) _gate_q_0;
  cu1_5105589024(2.086549462128943) _gate_q_5, _gate_q_9;
  rzx_5105594592(5.162971276474879) _gate_q_1, _gate_q_2;
  ryy_5105593200(1.75756912409819) _gate_q_8, _gate_q_7;
  rzx_5105582160(6.147143418983826) _gate_q_3, _gate_q_4;
  sxdg _gate_q_6;
  cry(2.589442053003126) _gate_q_8, _gate_q_9;
  U(3.3270162769499754, 0.18622099980299983, 1.9122841604591079) _gate_q_5;
  cz _gate_q_2, _gate_q_4;
  ecr _gate_q_3, _gate_q_0;
  id _gate_q_1;
  u1(5.5794507027176605) _gate_q_6;
  id _gate_q_7;
  xx_minus_yy_5105595648(5.78386218843174, 1.8303803633539553) _gate_q_0, _gate_q_7;
  p(3.7892995555531077) _gate_q_6;
  rz(5.0727686323663255) _gate_q_5;
  cx _gate_q_9, _gate_q_8;
  csdg _gate_q_3, _gate_q_4;
  rx(4.785678266258039) _gate_q_2;
  sxdg _gate_q_1;
  rxx_5105587200(2.3988892472885768) _gate_q_0, _gate_q_4;
  id _gate_q_8;
  rzz_5105593920(3.917954692996041) _gate_q_7, _gate_q_9;
  xx_minus_yy_5105589936(4.910889938307318, 2.529349162262671) _gate_q_1, _gate_q_2;
  cp(4.985874797550772) _gate_q_6, _gate_q_3;
  t _gate_q_5;
  crz(0.9439324358162103) _gate_q_0, _gate_q_9;
  swap _gate_q_3, _gate_q_2;
  cx _gate_q_8, _gate_q_5;
  cu(1.305147779729497, 1.0181829565371034, 2.0356314826488306, 4.200257375055107) _gate_q_6, _gate_q_1;
  tdg _gate_q_4;
  U(2.582578312927222, 2.428905911653118, 0.07925653848382527) _gate_q_7;
  t _gate_q_2;
  cp(5.289284102010656) _gate_q_4, _gate_q_9;
  r_5105592144(4.048074577639508, 2.050960725544305) _gate_q_3;
  rzx_5105584608(2.294242580431988) _gate_q_1, _gate_q_8;
  cy _gate_q_0, _gate_q_5;
  csx _gate_q_7, _gate_q_6;
  xx_minus_yy_5105583312(3.394350049828119, 5.030960219907175) _gate_q_6, _gate_q_5;
  h _gate_q_3;
  ch _gate_q_1, _gate_q_0;
  ryy_5105594976(3.706602477063078) _gate_q_7, _gate_q_9;
  cry(3.953819029505129) _gate_q_4, _gate_q_8;
  x _gate_q_2;
  cs _gate_q_1, _gate_q_2;
  x _gate_q_9;
  ry(0.3203757204512214) _gate_q_3;
  cs _gate_q_4, _gate_q_0;
  z _gate_q_6;
  y _gate_q_8;
  x _gate_q_7;
  x _gate_q_5;
  u2(0.5238097816012214, 0.4090932933060296) _gate_q_0;
  xx_minus_yy_5105597616(3.5140114760314507, 3.2190167105037424) _gate_q_7, _gate_q_3;
  crz(0.6264568277245481) _gate_q_5, _gate_q_9;
  r_5105586096(5.046451847911352, 4.73540345107803) _gate_q_1;
  cry(2.6220902493949576) _gate_q_8, _gate_q_6;
  cu1_5105588784(2.5248024315485083) _gate_q_4, _gate_q_2;
  cx _gate_q_7, _gate_q_3;
  s _gate_q_8;
  xx_plus_yy_5105587584(0.7714944711875373, 4.489978767101983) _gate_q_5, _gate_q_9;
  rz(5.868460539154147) _gate_q_2;
  xx_plus_yy_5105597040(2.5595463433657013, 6.22228929800258) _gate_q_1, _gate_q_4;
  id _gate_q_6;
  h _gate_q_0;
}
gate xx_minus_yy_5107057296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5860984107329656) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6344281835931196) _gate_q_0;
  ry(-2.6344281835931196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5860984107329656) _gate_q_1;
}
gate rzz_5107057344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.670039576990706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5107057392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.709936666027133) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.584351880524009) _gate_q_0;
  ry(-2.584351880524009) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.709936666027133) _gate_q_1;
}
gate xx_plus_yy_5107057440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0219521258540036) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.1023941848337837) _gate_q_1;
  ry(-3.1023941848337837) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0219521258540036) _gate_q_0;
}
gate ryy_5107057584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.439391908766187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5107057680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.337302317570964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5107057968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8987335405244883) _gate_q_0;
  u1(1.8166807326878047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.1754323759817833, 0, -3.8987335405244883) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.1754323759817833, 2.0820528078366833, 0) _gate_q_1;
}
gate xx_plus_yy_5107058304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.021610765614314) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4906144481566377) _gate_q_1;
  ry(-1.4906144481566377) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.021610765614314) _gate_q_0;
}
gate cu3_5107058448(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.628981160751662) _gate_q_0;
  u1(0.588457411106728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.3195529914023647, 0, -1.628981160751662) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.3195529914023647, 1.040523749644934, 0) _gate_q_1;
}
gate rzx_5107058928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5732445658427516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107059024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.39716005154075196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5107059168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.356226414361809, 1.4386159096978748, -1.4386159096978748) _gate_q_0;
}
gate r_5107059216(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6776540425709119, 1.4028970767666715, -1.4028970767666715) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u3(5.68451335871108, 1.3586416837801771, 3.628838948566487) _gate_q_6;
  s _gate_q_1;
  tdg _gate_q_2;
  sdg _gate_q_4;
  xx_minus_yy_5107057296(5.268856367186239, 0.5860984107329656) _gate_q_0, _gate_q_7;
  rzz_5107057344(3.670039576990706) _gate_q_3, _gate_q_8;
  xx_minus_yy_5107057392(5.168703761048018, 5.709936666027133) _gate_q_5, _gate_q_9;
  xx_plus_yy_5107057440(6.204788369667567, 1.0219521258540036) _gate_q_5, _gate_q_0;
  u2(1.361709561960973, 0.8585634502125088) _gate_q_7;
  s _gate_q_4;
  cz _gate_q_1, _gate_q_9;
  cz _gate_q_8, _gate_q_3;
  tdg _gate_q_2;
  tdg _gate_q_6;
  x _gate_q_1;
  ry(0.298274993468707) _gate_q_4;
  ryy_5107057584(4.439391908766187) _gate_q_5, _gate_q_3;
  ecr _gate_q_8, _gate_q_9;
  U(1.4063388778403805, 2.377567802836628, 2.9417528662602965) _gate_q_2;
  rxx_5107057680(2.337302317570964) _gate_q_6, _gate_q_7;
  s _gate_q_0;
  U(5.2147029219753165, 1.5398595879904367, 2.3090437393902925) _gate_q_9;
  t _gate_q_3;
  h _gate_q_0;
  csdg _gate_q_7, _gate_q_8;
  ry(2.2581795315569027) _gate_q_4;
  cx _gate_q_1, _gate_q_6;
  sx _gate_q_2;
  u3(5.527785384320199, 2.4582676800097403, 0.7898880541241247) _gate_q_5;
  ecr _gate_q_6, _gate_q_5;
  cp(4.604232643551719) _gate_q_8, _gate_q_4;
  cu3_5107057968(4.350864751963567, 2.0820528078366833, 5.715414273212293) _gate_q_7, _gate_q_3;
  z _gate_q_2;
  id _gate_q_1;
  csx _gate_q_9, _gate_q_0;
  crx(5.105959564602051) _gate_q_3, _gate_q_4;
  ch _gate_q_9, _gate_q_2;
  cy _gate_q_7, _gate_q_1;
  cu(2.436817654959893, 0.9577704116543049, 3.129700887389326, 4.415675474284551) _gate_q_5, _gate_q_0;
  h _gate_q_8;
  ry(3.2361786998777) _gate_q_6;
  ecr _gate_q_3, _gate_q_8;
  sxdg _gate_q_6;
  xx_plus_yy_5107058304(2.9812288963132754, 1.021610765614314) _gate_q_5, _gate_q_4;
  cx _gate_q_9, _gate_q_1;
  U(1.4343097637757254, 0.12496166961552913, 2.921867769124602) _gate_q_0;
  h _gate_q_7;
  z _gate_q_2;
  rz(5.129804141121816) _gate_q_8;
  sxdg _gate_q_6;
  cu3_5107058448(0.6391059828047294, 1.040523749644934, 2.21743857185839) _gate_q_3, _gate_q_4;
  cp(5.4866573137971955) _gate_q_9, _gate_q_7;
  cs _gate_q_0, _gate_q_5;
  rz(2.830033282554411) _gate_q_1;
  U(2.102806059443738, 6.185836700776317, 0.985768027094639) _gate_q_2;
  sdg _gate_q_9;
  u3(3.7911580212905895, 0.7612686854810867, 4.613139355654488) _gate_q_7;
  ecr _gate_q_5, _gate_q_0;
  rz(2.1048776846284056) _gate_q_4;
  crz(1.5990354694892555) _gate_q_2, _gate_q_8;
  rzx_5107058928(3.5732445658427516) _gate_q_6, _gate_q_1;
  rx(0.011167436560014933) _gate_q_3;
  ryy_5107059024(0.39716005154075196) _gate_q_5, _gate_q_3;
  crx(2.744402800682299) _gate_q_9, _gate_q_8;
  csx _gate_q_0, _gate_q_2;
  id _gate_q_7;
  z _gate_q_6;
  r_5107059168(4.356226414361809, 3.0094122364927713) _gate_q_4;
  r_5107059216(0.6776540425709119, 2.973693403561568) _gate_q_1;
}