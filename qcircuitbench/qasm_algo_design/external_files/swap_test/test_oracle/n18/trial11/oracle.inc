gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5074770192(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.003100092259736) _gate_q_0;
  u1(-2.9920385678799284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.0620877279330267, 0, -3.003100092259736) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.0620877279330267, 5.995138660139665, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5074768848(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.1032294394142, 3.2938392769380282, -3.2938392769380282) _gate_q_0;
}
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
gate xx_plus_yy_5074763856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.801244794038594) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4062410173416517) _gate_q_1;
  ry(-1.4062410173416517) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.801244794038594) _gate_q_0;
}
gate r_5074775904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.5609906080689173, 1.1910167587993103, -1.1910167587993103) _gate_q_0;
}
gate r_5074770768(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6127188161211256, 1.7104023662491779, -1.7104023662491779) _gate_q_0;
}
gate rzz_5074765488(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7740443032300246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5074767888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.42548061998032366) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.42548061998032366) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.42548061998032366) _gate_q_1;
}
gate xx_plus_yy_5074779504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.43272923527124774) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.075045309299897) _gate_q_1;
  ry(-1.075045309299897) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.43272923527124774) _gate_q_0;
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
gate cu1_5074779552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.3887163224498207) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.3887163224498207) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.3887163224498207) _gate_q_1;
}
gate xx_minus_yy_5074764096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.0684989154390814) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9233980824240176) _gate_q_0;
  ry(-2.9233980824240176) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.0684989154390814) _gate_q_1;
}
gate xx_minus_yy_5074764288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.7771183165987905) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6906212541132606) _gate_q_0;
  ry(-1.6906212541132606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.7771183165987905) _gate_q_1;
}
gate cu1_5074772256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2262077631128516) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2262077631128516) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2262077631128516) _gate_q_1;
}
gate rzz_5074775856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.1103272198444785) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074771056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.4873610110499405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5074773360(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7916955930963276) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4458031682619366) _gate_q_1;
  ry(-2.4458031682619366) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7916955930963276) _gate_q_0;
}
gate cu1_5074772400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.079352386023392) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.079352386023392) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.079352386023392) _gate_q_1;
}
gate r_5074776048(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.928022471024635, -0.738619007342888, 0.738619007342888) _gate_q_0;
}
gate rxx_5074768224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.222737352355051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5074765632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.066084502335362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5074774176(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.922258600165594) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.14199658665287768) _gate_q_0;
  ry(-0.14199658665287768) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.922258600165594) _gate_q_1;
}
gate rzx_5074776192(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.094606583252846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5074778064(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.81232604662828) _gate_q_0;
  u1(1.183422096713329) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.219764415098844, 0, -4.81232604662828) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.219764415098844, 3.6289039499149505, 0) _gate_q_1;
}
gate cu3_5074768368(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.1736764558833066) _gate_q_0;
  u1(0.9425424510858018) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4216358887115335, 0, -2.1736764558833066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4216358887115335, 1.231134004797505, 0) _gate_q_1;
}
gate xx_minus_yy_5074769280(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8074360836209666) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.6398080390381926) _gate_q_0;
  ry(-2.6398080390381926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8074360836209666) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cs _gate_q_17, _gate_q_6;
  tdg _gate_q_1;
  ry(3.4384076828280463) _gate_q_8;
  y _gate_q_10;
  ch _gate_q_15, _gate_q_11;
  sx _gate_q_5;
  cu(3.3528744854054566, 0.5691467932659767, 3.300918373013089, 2.1079157637630592) _gate_q_16, _gate_q_7;
  cu3_5074770192(4.1241754558660535, 5.995138660139665, 0.011061524379808164) _gate_q_13, _gate_q_9;
  dcx _gate_q_12, _gate_q_0;
  p(2.8544026334165924) _gate_q_2;
  r_5074768848(5.1032294394142, 4.864635603732925) _gate_q_14;
  iswap _gate_q_3, _gate_q_4;
  xx_plus_yy_5074763856(2.8124820346833035, 5.801244794038594) _gate_q_4, _gate_q_6;
  r_5074775904(2.5609906080689173, 2.761813085594207) _gate_q_13;
  u2(3.068427249386122, 1.2503330045825651) _gate_q_8;
  u3(2.163541879557754, 4.433811996313195, 2.252813855005212) _gate_q_17;
  r_5074770768(0.6127188161211256, 3.2811986930440744) _gate_q_7;
  rzz_5074765488(3.7740443032300246) _gate_q_11, _gate_q_3;
  csdg _gate_q_14, _gate_q_12;
  U(0.6047829118211127, 1.7982206239093494, 3.1919611305852458) _gate_q_2;
  h _gate_q_15;
  id _gate_q_16;
  x _gate_q_5;
  cu1_5074767888(0.8509612399606473) _gate_q_0, _gate_q_9;
  xx_plus_yy_5074779504(2.150090618599794, 0.43272923527124774) _gate_q_10, _gate_q_1;
  crz(4.747462006108806) _gate_q_8, _gate_q_9;
  cx _gate_q_12, _gate_q_5;
  cs _gate_q_14, _gate_q_13;
  iswap _gate_q_0, _gate_q_15;
  csx _gate_q_3, _gate_q_1;
  h _gate_q_4;
  ecr _gate_q_16, _gate_q_10;
  cx _gate_q_17, _gate_q_6;
  s _gate_q_11;
  cy _gate_q_7, _gate_q_2;
  rz(1.100006052790732) _gate_q_4;
  cy _gate_q_17, _gate_q_13;
  s _gate_q_0;
  cu1_5074779552(4.777432644899641) _gate_q_15, _gate_q_14;
  u3(3.0612548816896323, 2.107132461177861, 0.9658532812784472) _gate_q_7;
  xx_minus_yy_5074764096(5.846796164848035, 2.0684989154390814) _gate_q_10, _gate_q_9;
  u2(5.762922365097775, 0.534996776341628) _gate_q_11;
  ch _gate_q_1, _gate_q_3;
  crx(2.652690798338326) _gate_q_6, _gate_q_8;
  xx_minus_yy_5074764288(3.381242508226521, 5.7771183165987905) _gate_q_5, _gate_q_16;
  z _gate_q_12;
  U(6.107966818656729, 2.7343244109179805, 4.991309728893234) _gate_q_2;
  cu1_5074772256(4.452415526225703) _gate_q_10, _gate_q_3;
  csx _gate_q_8, _gate_q_17;
  rzz_5074775856(6.1103272198444785) _gate_q_9, _gate_q_11;
  x _gate_q_14;
  id _gate_q_0;
  cy _gate_q_15, _gate_q_5;
  ch _gate_q_16, _gate_q_7;
  rx(4.222960047422711) _gate_q_4;
  dcx _gate_q_1, _gate_q_6;
  ch _gate_q_13, _gate_q_2;
  U(4.940954157640933, 2.1182099063007906, 0.5841542267418315) _gate_q_12;
  u2(2.5007144794364358, 0.7490107333792417) _gate_q_7;
  rzz_5074771056(5.4873610110499405) _gate_q_5, _gate_q_16;
  dcx _gate_q_17, _gate_q_3;
  cu(0.995918119119657, 0.6627628536112923, 4.429881962598507, 3.7849831347797442) _gate_q_2, _gate_q_9;
  t _gate_q_8;
  x _gate_q_13;
  crz(0.31116226821501625) _gate_q_10, _gate_q_11;
  swap _gate_q_0, _gate_q_1;
  rx(0.02562501475333415) _gate_q_15;
  xx_plus_yy_5074773360(4.891606336523873, 1.7916955930963276) _gate_q_4, _gate_q_6;
  cu1_5074772400(2.158704772046784) _gate_q_12, _gate_q_14;
  cy _gate_q_17, _gate_q_7;
  U(3.9292762456101693, 3.437255091400589, 2.978707042389484) _gate_q_13;
  id _gate_q_6;
  ry(2.754421055010733) _gate_q_5;
  r_5074776048(5.928022471024635, 0.8321773194520086) _gate_q_16;
  id _gate_q_15;
  u3(1.635324927839943, 0.052973082520580535, 0.3762860519685972) _gate_q_3;
  u2(1.9933870231718918, 0.0184885640091335) _gate_q_2;
  rx(6.103951642898678) _gate_q_12;
  csdg _gate_q_10, _gate_q_11;
  u2(2.3731362126181748, 3.310760006287119) _gate_q_4;
  h _gate_q_8;
  csdg _gate_q_1, _gate_q_9;
  h _gate_q_14;
  sdg _gate_q_0;
  u3(1.1863170616172487, 2.870680448996658, 0.5382528096844768) _gate_q_14;
  rxx_5074768224(2.222737352355051) _gate_q_0, _gate_q_13;
  rxx_5074765632(3.066084502335362) _gate_q_11, _gate_q_17;
  x _gate_q_2;
  rz(0.24753728961374827) _gate_q_15;
  xx_minus_yy_5074774176(0.28399317330575535, 4.922258600165594) _gate_q_1, _gate_q_3;
  p(3.8242087593973175) _gate_q_6;
  cy _gate_q_9, _gate_q_7;
  csdg _gate_q_16, _gate_q_8;
  U(4.46393133060292, 2.786298363701057, 4.469989236921534) _gate_q_5;
  cx _gate_q_10, _gate_q_4;
  tdg _gate_q_12;
  dcx _gate_q_0, _gate_q_8;
  s _gate_q_3;
  ch _gate_q_10, _gate_q_11;
  rzx_5074776192(5.094606583252846) _gate_q_4, _gate_q_17;
  cx _gate_q_9, _gate_q_16;
  s _gate_q_15;
  id _gate_q_2;
  U(2.257417241356782, 2.06439133564198, 0.9363335613215297) _gate_q_12;
  ry(5.045276895978759) _gate_q_7;
  cu3_5074778064(4.439528830197688, 3.6289039499149505, 5.995748143341609) _gate_q_1, _gate_q_6;
  csdg _gate_q_5, _gate_q_14;
  x _gate_q_13;
  cx _gate_q_11, _gate_q_10;
  rx(2.290517647644784) _gate_q_7;
  cp(4.149177820886071) _gate_q_1, _gate_q_14;
  cu(4.7060029035964535, 2.807695109811549, 1.344119600238282, 4.939279067307497) _gate_q_8, _gate_q_4;
  cu3_5074768368(2.843271777423067, 1.231134004797505, 3.1162189069691086) _gate_q_3, _gate_q_16;
  cz _gate_q_0, _gate_q_6;
  z _gate_q_15;
  rz(0.7695960266015801) _gate_q_12;
  crx(0.9348642867309335) _gate_q_9, _gate_q_17;
  xx_minus_yy_5074769280(5.279616078076385, 0.8074360836209666) _gate_q_5, _gate_q_13;
  s _gate_q_2;
}
gate rzz_5074817136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.349161926950658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074813056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.7299592983763468, 1.9779807445526978, -1.9779807445526978) _gate_q_0;
}
gate r_5074829280(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9935707698412366, -0.18196383955987883, 0.18196383955987883) _gate_q_0;
}
gate rzx_5074828992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.589746612133458) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074825296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.3974106526895316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074826352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7437905216404457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074826304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.862290330519192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074824672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4647893081381698) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5074813344(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.147958254489902) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.147958254489902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.147958254489902) _gate_q_1;
}
gate rzz_5074828800(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.401219719786774) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074818720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3812422811086051) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5074824336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.738154082193631) _gate_q_0;
  u1(-0.037325199405138676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.432932999275085, 0, -5.738154082193631) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.432932999275085, 5.77547928159877, 0) _gate_q_1;
}
gate cu1_5074813104(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.04974843175251917) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.04974843175251917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.04974843175251917) _gate_q_1;
}
gate rzz_5074813536(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.1707238120086596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074813296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3511078326849932) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074813200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2579875406924925, 2.6545346689207285, -2.6545346689207285) _gate_q_0;
}
gate cu1_5074813632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.542149514917889) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.542149514917889) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.542149514917889) _gate_q_1;
}
gate r_5074823568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.5504870895236167, -1.2797981102266651, 1.2797981102266651) _gate_q_0;
}
gate r_5074813824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.321653188734439, -1.469289417160647, 1.469289417160647) _gate_q_0;
}
gate rxx_5074824480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6214143974719777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074826784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.762382955213167) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074823520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.460779875556261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074825056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5582881012177583) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9547563596990449) _gate_q_0;
  ry(-0.9547563596990449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5582881012177583) _gate_q_1;
}
gate xx_minus_yy_5074813008(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7416148025821196) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.1770100684436553) _gate_q_0;
  ry(-2.1770100684436553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7416148025821196) _gate_q_1;
}
gate rxx_5074819440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7852034052008454) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rzz_5074817136(4.349161926950658) _gate_q_8, _gate_q_9;
  u2(5.97697308711992, 3.0521744031267524) _gate_q_17;
  cp(1.4850392753630794) _gate_q_3, _gate_q_15;
  tdg _gate_q_16;
  sxdg _gate_q_5;
  csx _gate_q_6, _gate_q_14;
  csx _gate_q_4, _gate_q_2;
  r_5074813056(2.7299592983763468, 3.5487770713475943) _gate_q_0;
  cs _gate_q_13, _gate_q_11;
  rx(3.361142140902766) _gate_q_12;
  csx _gate_q_7, _gate_q_1;
  u3(2.7960139595356814, 5.94518729582193, 2.310562604804918) _gate_q_10;
  y _gate_q_2;
  id _gate_q_0;
  sxdg _gate_q_9;
  r_5074829280(2.9935707698412366, 1.3888324872350177) _gate_q_7;
  id _gate_q_16;
  sx _gate_q_15;
  y _gate_q_14;
  cz _gate_q_10, _gate_q_5;
  crz(2.586328290685351) _gate_q_17, _gate_q_13;
  crx(1.7026810439958135) _gate_q_4, _gate_q_1;
  rzx_5074828992(4.589746612133458) _gate_q_6, _gate_q_12;
  rzz_5074825296(1.3974106526895316) _gate_q_8, _gate_q_11;
  rz(0.09613274169484465) _gate_q_3;
  cz _gate_q_12, _gate_q_8;
  rzz_5074826352(1.7437905216404457) _gate_q_10, _gate_q_17;
  cu(0.7558406561540261, 3.867000150374275, 5.82647491781156, 3.243097697019573) _gate_q_11, _gate_q_0;
  u3(3.3441305651335838, 5.274307757695519, 4.993502071551682) _gate_q_6;
  rz(0.08560679804408107) _gate_q_15;
  csdg _gate_q_4, _gate_q_1;
  cx _gate_q_3, _gate_q_9;
  cu(3.633699342703024, 0.9874733826495681, 1.546851662658587, 3.845028192205694) _gate_q_16, _gate_q_7;
  rzz_5074826304(5.862290330519192) _gate_q_14, _gate_q_13;
  tdg _gate_q_5;
  u2(5.557291929546501, 4.9313401612836865) _gate_q_2;
  y _gate_q_10;
  csx _gate_q_3, _gate_q_15;
  csx _gate_q_6, _gate_q_5;
  ryy_5074824672(2.4647893081381698) _gate_q_16, _gate_q_8;
  z _gate_q_0;
  cs _gate_q_11, _gate_q_1;
  csdg _gate_q_7, _gate_q_17;
  cp(3.1764342866094157) _gate_q_14, _gate_q_4;
  cx _gate_q_9, _gate_q_13;
  cu1_5074813344(4.295916508979804) _gate_q_2, _gate_q_12;
  cs _gate_q_7, _gate_q_3;
  csdg _gate_q_16, _gate_q_0;
  u1(2.16140284618028) _gate_q_14;
  swap _gate_q_13, _gate_q_10;
  rzz_5074828800(4.401219719786774) _gate_q_12, _gate_q_8;
  rzz_5074818720(0.3812422811086051) _gate_q_6, _gate_q_4;
  tdg _gate_q_2;
  cu3_5074824336(0.86586599855017, 5.77547928159877, 5.7008288827884925) _gate_q_1, _gate_q_5;
  cu1_5074813104(0.09949686350503834) _gate_q_17, _gate_q_11;
  x _gate_q_9;
  z _gate_q_15;
  crx(6.2107386440102585) _gate_q_11, _gate_q_17;
  rzz_5074813536(3.1707238120086596) _gate_q_9, _gate_q_3;
  ryy_5074813296(3.3511078326849932) _gate_q_5, _gate_q_7;
  crx(4.902160283532959) _gate_q_4, _gate_q_16;
  x _gate_q_6;
  x _gate_q_8;
  s _gate_q_10;
  ecr _gate_q_13, _gate_q_0;
  cx _gate_q_2, _gate_q_15;
  y _gate_q_1;
  r_5074813200(2.2579875406924925, 4.225330995715625) _gate_q_14;
  h _gate_q_12;
  x _gate_q_12;
  tdg _gate_q_8;
  u2(0.2740794560376881, 3.74166775529535) _gate_q_16;
  ry(0.10970485841432528) _gate_q_1;
  x _gate_q_14;
  cx _gate_q_13, _gate_q_10;
  h _gate_q_17;
  s _gate_q_15;
  swap _gate_q_7, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cu1_5074813632(5.084299029835778) _gate_q_0, _gate_q_11;
  sx _gate_q_3;
  r_5074823568(0.5504870895236167, 0.29099821656823144) _gate_q_9;
  r_5074813824(4.321653188734439, 0.10150690963424958) _gate_q_6;
  ch _gate_q_11, _gate_q_4;
  sx _gate_q_6;
  p(0.36692448070585293) _gate_q_14;
  y _gate_q_2;
  crz(6.027896102445407) _gate_q_17, _gate_q_13;
  rxx_5074824480(2.6214143974719777) _gate_q_1, _gate_q_15;
  cx _gate_q_5, _gate_q_3;
  crz(4.622436662641287) _gate_q_12, _gate_q_0;
  rzx_5074826784(5.762382955213167) _gate_q_7, _gate_q_10;
  dcx _gate_q_16, _gate_q_9;
  sdg _gate_q_8;
  y _gate_q_16;
  rx(5.306360497328306) _gate_q_8;
  y _gate_q_9;
  swap _gate_q_7, _gate_q_10;
  rzz_5074823520(5.460779875556261) _gate_q_17, _gate_q_15;
  x _gate_q_11;
  id _gate_q_3;
  cz _gate_q_1, _gate_q_13;
  cx _gate_q_5, _gate_q_6;
  tdg _gate_q_2;
  xx_minus_yy_5074825056(1.9095127193980899, 0.5582881012177583) _gate_q_4, _gate_q_0;
  cs _gate_q_14, _gate_q_12;
  csdg _gate_q_13, _gate_q_0;
  z _gate_q_16;
  u1(5.560091766653159) _gate_q_15;
  t _gate_q_6;
  xx_minus_yy_5074813008(4.354020136887311, 3.7416148025821196) _gate_q_1, _gate_q_2;
  rxx_5074819440(3.7852034052008454) _gate_q_12, _gate_q_4;
  s _gate_q_7;
  cry(3.87729588904048) _gate_q_9, _gate_q_14;
  cx _gate_q_17, _gate_q_11;
  swap _gate_q_8, _gate_q_3;
  cy _gate_q_5, _gate_q_10;
}