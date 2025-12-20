gate cu3_5070905152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.7136315194760705) _gate_q_0;
  u1(-0.1607026188369205) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5731516532101446, 0, -4.7136315194760705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5731516532101446, 4.874334138312991, 0) _gate_q_1;
}
gate cu3_5070898144(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.567459941175785) _gate_q_0;
  u1(1.5134024189055537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9363266340528895, 0, -4.567459941175785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9363266340528895, 3.0540575222702313, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070912304(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.87398477671128) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.03821917867363165) _gate_q_0;
  ry(-0.03821917867363165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.87398477671128) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5070898048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.944233929832561) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.944233929832561) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.944233929832561) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070909808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6804476993898602) _gate_q_0;
  u1(-0.3953405822048782) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.786576058911693, 0, -0.6804476993898602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.786576058911693, 1.0757882815947384, 0) _gate_q_1;
}
gate r_5070911632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.861197671746598, 0.0902548932180498, -0.0902548932180498) _gate_q_0;
}
gate rzx_5070911872(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9971955503994158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5042941264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/4) _gate_q_1;
}
gate csx _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cu1_5042941264(pi/2) _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070906112(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.06500676878440922) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.665214268372345) _gate_q_0;
  ry(-2.665214268372345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.06500676878440922) _gate_q_1;
}
gate rzx_5070905440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8109114385340812) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070898336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.212481426454668) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  u1(4.3304879746694045) _gate_q_7;
  p(4.564975172947583) _gate_q_3;
  cu3_5070905152(3.146303306420289, 4.874334138312991, 4.55292890063915) _gate_q_1, _gate_q_4;
  z _gate_q_8;
  ch _gate_q_2, _gate_q_5;
  cu3_5070898144(3.872653268105779, 3.0540575222702313, 6.080862360081339) _gate_q_6, _gate_q_0;
  t _gate_q_0;
  cz _gate_q_6, _gate_q_7;
  p(0.12419533220532239) _gate_q_4;
  cry(2.4267993549441207) _gate_q_1, _gate_q_3;
  U(5.957237321356973, 0.6442213826935752, 4.234409080772898) _gate_q_8;
  xx_minus_yy_5070912304(0.0764383573472633, 5.87398477671128) _gate_q_5, _gate_q_2;
  csdg _gate_q_4, _gate_q_2;
  cz _gate_q_6, _gate_q_1;
  sdg _gate_q_3;
  tdg _gate_q_0;
  cx _gate_q_7, _gate_q_8;
  h _gate_q_5;
  cp(1.3051212898243527) _gate_q_1, _gate_q_6;
  cy _gate_q_3, _gate_q_8;
  cu1_5070898048(5.888467859665122) _gate_q_5, _gate_q_2;
  iswap _gate_q_0, _gate_q_4;
  sx _gate_q_7;
  cu3_5070909808(3.573152117823386, 1.0757882815947384, 0.28510711718498194) _gate_q_4, _gate_q_7;
  rx(2.7659898558948934) _gate_q_0;
  cu(2.651692995779404, 4.2049084701485455, 5.848384874594325, 5.704626369872626) _gate_q_1, _gate_q_8;
  r_5070911632(3.861197671746598, 1.6610512200129464) _gate_q_3;
  rzx_5070911872(0.9971955503994158) _gate_q_2, _gate_q_5;
  sx _gate_q_6;
  id _gate_q_1;
  cx _gate_q_2, _gate_q_6;
  swap _gate_q_4, _gate_q_5;
  cp(0.961707495318648) _gate_q_0, _gate_q_7;
  tdg _gate_q_8;
  rx(2.4669582389142932) _gate_q_3;
  id _gate_q_0;
  id _gate_q_3;
  h _gate_q_5;
  cu(2.115474024052146, 3.7195635674965533, 3.2495457563230303, 3.2064588325247985) _gate_q_2, _gate_q_8;
  t _gate_q_1;
  x _gate_q_7;
  h _gate_q_4;
  sx _gate_q_6;
  rx(4.067789847300282) _gate_q_7;
  u3(1.4133469495515985, 4.008066717961908, 0.4752846935672823) _gate_q_1;
  u2(3.5361324991481857, 5.457953536426192) _gate_q_8;
  y _gate_q_5;
  csdg _gate_q_2, _gate_q_0;
  csx _gate_q_3, _gate_q_4;
  rz(0.11180547173723251) _gate_q_6;
  csdg _gate_q_3, _gate_q_2;
  xx_minus_yy_5070906112(5.33042853674469, 0.06500676878440922) _gate_q_7, _gate_q_6;
  rzx_5070905440(0.8109114385340812) _gate_q_4, _gate_q_5;
  id _gate_q_8;
  rxx_5070898336(3.212481426454668) _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5070899632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.5288441772771157) _gate_q_0;
  u1(0.33600615778147447) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2753556458863509, 0, -0.5288441772771157) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2753556458863509, 0.19283801949564133, 0) _gate_q_1;
}
gate cu1_5070908464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.823029400913704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.823029400913704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.823029400913704) _gate_q_1;
}
gate rzz_5070898384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.176235185391897) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070902320(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8262646090906745) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5509295216575508) _gate_q_0;
  ry(-0.5509295216575508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8262646090906745) _gate_q_1;
}
gate r_5070910960(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8654990373523157, 2.5744228136496146, -2.5744228136496146) _gate_q_0;
}
gate rxx_5070909760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.65791237299419) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
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
gate cu1_5070903088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.281313665730341) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.281313665730341) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.281313665730341) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8 {
  swap _gate_q_7, _gate_q_3;
  cs _gate_q_5, _gate_q_6;
  u3(5.045421155601896, 2.2150585968132304, 5.35422376539281) _gate_q_4;
  cu3_5070899632(2.5507112917727017, 0.19283801949564133, 0.8648503350585902) _gate_q_1, _gate_q_2;
  tdg _gate_q_0;
  x _gate_q_8;
  h _gate_q_5;
  cry(0.42648129884303765) _gate_q_4, _gate_q_2;
  cu1_5070908464(5.646058801827408) _gate_q_6, _gate_q_1;
  u3(2.9764510544094263, 2.05403786644544, 6.2441730588469815) _gate_q_7;
  p(4.279010865533829) _gate_q_0;
  rzz_5070898384(4.176235185391897) _gate_q_3, _gate_q_8;
  cz _gate_q_8, _gate_q_2;
  xx_minus_yy_5070902320(1.1018590433151016, 2.8262646090906745) _gate_q_3, _gate_q_4;
  u3(0.42276296361792004, 0.7973663547974834, 0.46537415488755773) _gate_q_5;
  ry(4.307675635421005) _gate_q_0;
  rx(3.4510405118162932) _gate_q_6;
  cs _gate_q_1, _gate_q_7;
  iswap _gate_q_0, _gate_q_1;
  y _gate_q_8;
  r_5070910960(1.8654990373523157, 4.145219140444511) _gate_q_7;
  crx(4.605353274520502) _gate_q_2, _gate_q_6;
  u3(2.7498033370610124, 4.23136128613213, 4.807568029885305) _gate_q_3;
  rxx_5070909760(4.65791237299419) _gate_q_5, _gate_q_4;
  y _gate_q_6;
  p(2.632972589848285) _gate_q_7;
  csdg _gate_q_2, _gate_q_1;
  ecr _gate_q_5, _gate_q_4;
  swap _gate_q_3, _gate_q_8;
  h _gate_q_0;
  csx _gate_q_6, _gate_q_5;
  iswap _gate_q_8, _gate_q_3;
  csx _gate_q_0, _gate_q_2;
  id _gate_q_4;
  t _gate_q_1;
  t _gate_q_7;
  csdg _gate_q_4, _gate_q_2;
  iswap _gate_q_3, _gate_q_7;
  cu1_5070903088(4.562627331460682) _gate_q_6, _gate_q_5;
  iswap _gate_q_0, _gate_q_8;
  h _gate_q_1;
  cs _gate_q_8, _gate_q_7;
  u1(5.025766659262131) _gate_q_3;
  crx(4.641782902399379) _gate_q_4, _gate_q_1;
  t _gate_q_0;
  u3(3.4154198636028696, 1.3647033952482905, 6.097458949389273) _gate_q_2;
  swap _gate_q_6, _gate_q_5;
  sdg _gate_q_7;
  dcx _gate_q_4, _gate_q_3;
  id _gate_q_5;
  csdg _gate_q_0, _gate_q_6;
  tdg _gate_q_1;
  u2(3.1219244108773827, 4.371064719865614) _gate_q_2;
  s _gate_q_8;
}