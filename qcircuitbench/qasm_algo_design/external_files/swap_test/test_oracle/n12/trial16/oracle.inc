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
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5074125408(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2904154120026354) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2904154120026354) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2904154120026354) _gate_q_1;
}
gate xx_minus_yy_5074125504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.866021587573827) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.361084082674098) _gate_q_0;
  ry(-2.361084082674098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.866021587573827) _gate_q_1;
}
gate xx_plus_yy_5074422192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.03174428165612) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.945163943098653) _gate_q_1;
  ry(-2.945163943098653) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.03174428165612) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5074428192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8276808779607834) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074435008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.706009515878385) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074434240(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9694942108164155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate ryy_5074435296(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6901448965892767) _gate_q_1;
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
gate r_5074434384(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2697350946576873, 2.017915115289734, -2.017915115289734) _gate_q_0;
}
gate cu1_5074435776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.48885097106805) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.48885097106805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.48885097106805) _gate_q_1;
}
gate xx_minus_yy_5074435488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.272903032576818) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6208924351030284) _gate_q_0;
  ry(-0.6208924351030284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.272903032576818) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  csx _gate_q_7, _gate_q_4;
  sxdg _gate_q_10;
  p(5.49012509911284) _gate_q_1;
  crx(0.9329314199279063) _gate_q_3, _gate_q_8;
  cu1_5074125408(4.580830824005271) _gate_q_11, _gate_q_0;
  xx_minus_yy_5074125504(4.722168165348196, 3.866021587573827) _gate_q_9, _gate_q_5;
  xx_plus_yy_5074422192(5.890327886197306, 4.03174428165612) _gate_q_2, _gate_q_6;
  crz(3.5758133940050967) _gate_q_7, _gate_q_6;
  s _gate_q_10;
  ry(4.888965760975117) _gate_q_9;
  id _gate_q_0;
  ch _gate_q_4, _gate_q_5;
  cp(2.484130865945188) _gate_q_11, _gate_q_2;
  U(1.266504682650738, 4.018855953339162, 2.9445028612294477) _gate_q_3;
  iswap _gate_q_8, _gate_q_1;
  tdg _gate_q_6;
  csx _gate_q_1, _gate_q_10;
  s _gate_q_5;
  u3(4.534544827103193, 2.2489125339035354, 3.389878385684979) _gate_q_0;
  h _gate_q_11;
  csx _gate_q_8, _gate_q_2;
  rx(0.4510801839800594) _gate_q_3;
  iswap _gate_q_7, _gate_q_9;
  rz(2.452627061225249) _gate_q_4;
  crx(5.598742198781251) _gate_q_5, _gate_q_4;
  ryy_5074428192(0.8276808779607834) _gate_q_9, _gate_q_3;
  crx(3.4363215698722582) _gate_q_0, _gate_q_1;
  rzz_5074435008(5.706009515878385) _gate_q_6, _gate_q_2;
  sxdg _gate_q_11;
  crz(1.0225508564231145) _gate_q_7, _gate_q_8;
  p(4.872916506367865) _gate_q_10;
  csx _gate_q_0, _gate_q_3;
  cx _gate_q_1, _gate_q_9;
  z _gate_q_5;
  ry(5.804228228124796) _gate_q_2;
  y _gate_q_7;
  sxdg _gate_q_11;
  ryy_5074434240(2.9694942108164155) _gate_q_10, _gate_q_8;
  cu(4.706341172976549, 1.8767972714614698, 1.8860175875993397, 4.272026931609387) _gate_q_6, _gate_q_4;
  t _gate_q_0;
  ecr _gate_q_9, _gate_q_11;
  ryy_5074435296(2.6901448965892767) _gate_q_7, _gate_q_1;
  s _gate_q_2;
  rz(1.6863129122857508) _gate_q_6;
  rx(5.609278036003671) _gate_q_4;
  cs _gate_q_5, _gate_q_10;
  cx _gate_q_3, _gate_q_8;
  x _gate_q_3;
  y _gate_q_7;
  cx _gate_q_6, _gate_q_2;
  cy _gate_q_0, _gate_q_11;
  ry(0.628930698611633) _gate_q_10;
  r_5074434384(3.2697350946576873, 3.5887114420846307) _gate_q_8;
  crz(5.396208348958929) _gate_q_1, _gate_q_5;
  cu1_5074435776(2.9777019421361) _gate_q_4, _gate_q_9;
  cu(2.6703051111884766, 2.473331128767051, 2.1629500391481042, 6.1773450645436645) _gate_q_2, _gate_q_11;
  swap _gate_q_3, _gate_q_6;
  xx_minus_yy_5074435488(1.2417848702060568, 6.272903032576818) _gate_q_4, _gate_q_10;
  sdg _gate_q_7;
  y _gate_q_1;
  s _gate_q_9;
  cs _gate_q_8, _gate_q_5;
  s _gate_q_0;
  cs _gate_q_9, _gate_q_4;
  cry(0.3772036501047684) _gate_q_1, _gate_q_5;
  s _gate_q_2;
  cry(4.422930031390684) _gate_q_11, _gate_q_3;
  rx(5.154714690782883) _gate_q_8;
  cs _gate_q_6, _gate_q_10;
  t _gate_q_7;
  ry(1.5395223085314986) _gate_q_0;
  u2(1.227721436163757, 4.777292214562656) _gate_q_6;
  U(5.525691834406304, 0.46398247425277567, 4.541270820285112) _gate_q_3;
  iswap _gate_q_0, _gate_q_8;
  crx(1.6216187524885133) _gate_q_11, _gate_q_2;
  ecr _gate_q_5, _gate_q_9;
  swap _gate_q_7, _gate_q_10;
  ecr _gate_q_1, _gate_q_4;
}
gate rxx_5074432704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3812282402178755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074433472(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0194035284508032) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074433568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.234614190081043) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3350938689872007) _gate_q_0;
  ry(-1.3350938689872007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.234614190081043) _gate_q_1;
}
gate rzz_5074433088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.23510875121025004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074433664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.21232825778220168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074433520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7421795909763705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5074427136(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1790857350396748) _gate_q_0;
  u1(1.07923294146379) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3844143500424402, 0, -1.1790857350396748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3844143500424402, 0.0998527935758847, 0) _gate_q_1;
}
gate cu1_5074433328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9232497700302486) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9232497700302486) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9232497700302486) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5074432656(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.0207343784927883, -0.7817658924304536, 0.7817658924304536) _gate_q_0;
}
gate xx_minus_yy_5074427904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.313805682854606) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9906668940311187) _gate_q_0;
  ry(-1.9906668940311187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.313805682854606) _gate_q_1;
}
gate rxx_5074436016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.243035577437201) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074432320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.7834353582300255, 4.221111404616127, -4.221111404616127) _gate_q_0;
}
gate cu3_5074432224(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6187339913665135) _gate_q_0;
  u1(1.9588285498980613) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.077574957708679, 0, -3.6187339913665135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.077574957708679, 1.6599054414684524, 0) _gate_q_1;
}
gate xx_minus_yy_5074432128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.342145478323398) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4675786169002607) _gate_q_0;
  ry(-2.4675786169002607) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.342145478323398) _gate_q_1;
}
gate rzz_5074428624(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.02366069200546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074432368(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.559400152645674, 4.107743872405538, -4.107743872405538) _gate_q_0;
}
gate rzz_5074428240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.27900857010154007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074431888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.07918270319702107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  u2(6.167686421319063, 3.852975241036019) _gate_q_7;
  cz _gate_q_3, _gate_q_8;
  ry(1.616375068183875) _gate_q_0;
  cs _gate_q_9, _gate_q_11;
  cp(4.040011633527278) _gate_q_2, _gate_q_6;
  swap _gate_q_1, _gate_q_4;
  rxx_5074432704(3.3812282402178755) _gate_q_10, _gate_q_5;
  cry(5.949362304148806) _gate_q_0, _gate_q_5;
  t _gate_q_10;
  ryy_5074433472(1.0194035284508032) _gate_q_8, _gate_q_1;
  xx_minus_yy_5074433568(2.6701877379744015, 4.234614190081043) _gate_q_4, _gate_q_3;
  rzz_5074433088(0.23510875121025004) _gate_q_2, _gate_q_11;
  u1(4.026190292176093) _gate_q_6;
  rzz_5074433664(0.21232825778220168) _gate_q_7, _gate_q_9;
  swap _gate_q_10, _gate_q_1;
  t _gate_q_2;
  sxdg _gate_q_4;
  ryy_5074433520(0.7421795909763705) _gate_q_0, _gate_q_3;
  cy _gate_q_5, _gate_q_8;
  cs _gate_q_6, _gate_q_7;
  cry(3.877047844602327) _gate_q_11, _gate_q_9;
  u2(2.845151187857917, 4.23899069440696) _gate_q_10;
  cx _gate_q_4, _gate_q_9;
  sx _gate_q_8;
  cs _gate_q_3, _gate_q_1;
  crx(5.022446097192727) _gate_q_2, _gate_q_0;
  cu(6.074799025644761, 5.499774934868511, 2.2318209865404715, 2.9516227861722872) _gate_q_5, _gate_q_7;
  cz _gate_q_11, _gate_q_6;
  cx _gate_q_10, _gate_q_4;
  id _gate_q_11;
  t _gate_q_3;
  swap _gate_q_6, _gate_q_1;
  cu3_5074427136(2.7688287000848804, 0.0998527935758847, 2.258318676503465) _gate_q_7, _gate_q_9;
  cu1_5074433328(1.846499540060497) _gate_q_0, _gate_q_2;
  u2(5.773900264984871, 5.983555675147698) _gate_q_8;
  id _gate_q_5;
  U(5.4121631794047715, 1.670261207651406, 3.1522373514643944) _gate_q_10;
  p(2.123154254283186) _gate_q_8;
  dcx _gate_q_6, _gate_q_2;
  t _gate_q_1;
  sxdg _gate_q_7;
  rx(1.6833066713223925) _gate_q_3;
  dcx _gate_q_0, _gate_q_11;
  r_5074432656(3.0207343784927883, 0.789030434364443) _gate_q_4;
  cry(3.9278137183610027) _gate_q_9, _gate_q_5;
  p(0.4495468909871471) _gate_q_11;
  sxdg _gate_q_4;
  cp(4.230888239792597) _gate_q_1, _gate_q_0;
  xx_minus_yy_5074427904(3.9813337880622375, 4.313805682854606) _gate_q_9, _gate_q_7;
  rxx_5074436016(6.243035577437201) _gate_q_3, _gate_q_10;
  U(1.4812565190456755, 1.150809319811913, 3.618997213359616) _gate_q_6;
  swap _gate_q_5, _gate_q_8;
  r_5074432320(3.7834353582300255, 5.791907731411023) _gate_q_2;
  cu3_5074432224(4.155149915417358, 1.6599054414684524, 5.577562541264575) _gate_q_5, _gate_q_7;
  crz(1.288589774233994) _gate_q_1, _gate_q_4;
  cz _gate_q_6, _gate_q_11;
  rx(0.29631608695962297) _gate_q_8;
  swap _gate_q_9, _gate_q_2;
  id _gate_q_10;
  xx_minus_yy_5074432128(4.935157233800521, 3.342145478323398) _gate_q_0, _gate_q_3;
  cx _gate_q_4, _gate_q_3;
  rzz_5074428624(5.02366069200546) _gate_q_1, _gate_q_9;
  U(1.9287737884094314, 3.258047996042271, 1.2353171600220496) _gate_q_10;
  r_5074432368(5.559400152645674, 5.678540199200435) _gate_q_2;
  y _gate_q_11;
  p(2.273773418185603) _gate_q_0;
  crz(5.622502890035747) _gate_q_5, _gate_q_6;
  u1(2.371150157547012) _gate_q_7;
  sdg _gate_q_8;
  rzz_5074428240(0.27900857010154007) _gate_q_1, _gate_q_8;
  rzz_5074431888(0.07918270319702107) _gate_q_2, _gate_q_11;
  ecr _gate_q_10, _gate_q_9;
  y _gate_q_3;
  u3(4.7270645036904755, 2.250212104563648, 0.3683916386681317) _gate_q_7;
  rz(0.6365850750765186) _gate_q_0;
  sxdg _gate_q_5;
  u3(4.762103538916408, 1.712488716977611, 6.080402483225027) _gate_q_4;
  p(3.217687779659836) _gate_q_6;
}