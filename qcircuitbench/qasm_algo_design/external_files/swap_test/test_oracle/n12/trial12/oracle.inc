gate rzz_5074272720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.0944489009161367) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074272912(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.345021231815405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074275168(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.850789986991349) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.2409415098564236) _gate_q_0;
  ry(-2.2409415098564236) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.850789986991349) _gate_q_1;
}
gate rzz_5074233744(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.633299244890952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074238784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.7025610487280405) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3807975742208245) _gate_q_0;
  ry(-2.3807975742208245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.7025610487280405) _gate_q_1;
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
gate rzx_5074238880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8201038718055113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5074239456(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.131875949849218) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074238928(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8815444796369836, 3.9329573834767304, -3.9329573834767304) _gate_q_0;
}
gate rzx_5074237248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3175859377524215) _gate_q_1;
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
gate r_5074238304(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.052656322321048, -1.2100878306999359, 1.2100878306999359) _gate_q_0;
}
gate rzx_5074237488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.375229582041331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074237728(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.423078628394017) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.09304134927545214) _gate_q_0;
  ry(-0.09304134927545214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.423078628394017) _gate_q_1;
}
gate r_5074228992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.573279348326936, -0.12194184275528785, 0.12194184275528785) _gate_q_0;
}
gate xx_minus_yy_5074236768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8027392545067016) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.8120563137155283) _gate_q_0;
  ry(-2.8120563137155283) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8027392545067016) _gate_q_1;
}
gate rzz_5074237008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.664682845564732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5074236480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7987930539440792) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.643004936633676) _gate_q_1;
  ry(-1.643004936633676) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7987930539440792) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  u2(3.803360549878125, 5.479870287884874) _gate_q_11;
  h _gate_q_1;
  rzz_5074272720(3.0944489009161367) _gate_q_10, _gate_q_9;
  rzz_5074272912(3.345021231815405) _gate_q_6, _gate_q_4;
  s _gate_q_2;
  crz(3.8912821266480275) _gate_q_0, _gate_q_3;
  xx_minus_yy_5074275168(4.481883019712847, 5.850789986991349) _gate_q_5, _gate_q_8;
  s _gate_q_7;
  cu(0.14010707763599106, 0.2112641559596214, 5.503091591343996, 3.0707197938530992) _gate_q_1, _gate_q_7;
  ch _gate_q_3, _gate_q_11;
  rzz_5074233744(4.633299244890952) _gate_q_0, _gate_q_2;
  xx_minus_yy_5074238784(4.761595148441649, 5.7025610487280405) _gate_q_8, _gate_q_5;
  ecr _gate_q_4, _gate_q_9;
  rx(3.512995193473612) _gate_q_6;
  sxdg _gate_q_10;
  rzx_5074238880(0.8201038718055113) _gate_q_0, _gate_q_4;
  u2(5.385204764836161, 4.913961576686861) _gate_q_5;
  cs _gate_q_1, _gate_q_8;
  z _gate_q_2;
  crz(1.7244481431864058) _gate_q_7, _gate_q_9;
  ch _gate_q_6, _gate_q_10;
  tdg _gate_q_3;
  u3(1.2795770262889472, 0.2810550159212037, 1.8838701374560376) _gate_q_11;
  cp(4.258259695214497) _gate_q_4, _gate_q_2;
  cp(2.585051999331885) _gate_q_7, _gate_q_5;
  u1(4.4225844376784895) _gate_q_6;
  rzx_5074239456(2.131875949849218) _gate_q_8, _gate_q_3;
  s _gate_q_11;
  id _gate_q_10;
  sx _gate_q_0;
  cs _gate_q_1, _gate_q_9;
  cu(1.8512349344930215, 3.921618850634565, 5.280385829460586, 5.208822758037575) _gate_q_11, _gate_q_4;
  cs _gate_q_10, _gate_q_8;
  t _gate_q_0;
  r_5074238928(0.8815444796369836, 5.503753710271627) _gate_q_9;
  t _gate_q_1;
  ecr _gate_q_3, _gate_q_2;
  rx(2.8972722441187737) _gate_q_5;
  ecr _gate_q_6, _gate_q_7;
  sx _gate_q_8;
  rx(0.16456715818031176) _gate_q_6;
  crz(5.521074057849146) _gate_q_11, _gate_q_3;
  rzx_5074237248(1.3175859377524215) _gate_q_0, _gate_q_4;
  cz _gate_q_9, _gate_q_5;
  csx _gate_q_2, _gate_q_10;
  rz(4.364102301809321) _gate_q_7;
  r_5074238304(3.052656322321048, 0.36070849609496075) _gate_q_1;
  cz _gate_q_0, _gate_q_2;
  rzx_5074237488(5.375229582041331) _gate_q_3, _gate_q_10;
  ry(2.5380747615542445) _gate_q_8;
  ry(4.911679421037601) _gate_q_7;
  p(1.5088797695187384) _gate_q_1;
  u2(5.626308241548059, 2.558012431499628) _gate_q_6;
  cx _gate_q_11, _gate_q_5;
  U(3.210296801113032, 4.6720411563675155, 5.089242006749998) _gate_q_9;
  id _gate_q_4;
  swap _gate_q_9, _gate_q_7;
  xx_minus_yy_5074237728(0.18608269855090429, 4.423078628394017) _gate_q_11, _gate_q_5;
  cry(0.3093524831383906) _gate_q_6, _gate_q_4;
  sx _gate_q_8;
  z _gate_q_10;
  cu(2.3505986164962893, 4.953329782902121, 0.3451267578373365, 3.8526821108221534) _gate_q_0, _gate_q_1;
  U(5.023024208942123, 5.039845396954169, 5.921516329421291) _gate_q_2;
  sx _gate_q_3;
  sx _gate_q_5;
  r_5074228992(2.573279348326936, 1.4488544840396087) _gate_q_1;
  tdg _gate_q_8;
  u1(2.6951028983301915) _gate_q_4;
  z _gate_q_9;
  xx_minus_yy_5074236768(5.624112627431057, 0.8027392545067016) _gate_q_0, _gate_q_6;
  cx _gate_q_7, _gate_q_2;
  rzz_5074237008(4.664682845564732) _gate_q_3, _gate_q_10;
  rx(6.034413362342149) _gate_q_11;
  ecr _gate_q_0, _gate_q_8;
  csdg _gate_q_10, _gate_q_4;
  csx _gate_q_9, _gate_q_1;
  xx_plus_yy_5074236480(3.286009873267352, 0.7987930539440792) _gate_q_2, _gate_q_7;
  x _gate_q_11;
  cry(6.2546469138725485) _gate_q_6, _gate_q_5;
  u1(0.2512334739901701) _gate_q_3;
}
gate xx_plus_yy_5074193632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.206327499631938) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.632809030967332) _gate_q_1;
  ry(-2.632809030967332) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.206327499631938) _gate_q_0;
}
gate rzx_5074199200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5508427364519894) _gate_q_1;
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
gate rxx_5074205920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.611018121304815) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074203232(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.164471805051361) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7898644433383941) _gate_q_1;
  ry(-1.7898644433383941) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.164471805051361) _gate_q_0;
}
gate xx_minus_yy_5074205152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.568351732905781) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9594962613206512) _gate_q_0;
  ry(-1.9594962613206512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.568351732905781) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzx_5074192240(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.780544542548962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5074197568(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.5724193089822374, 0.09832979171476786, -0.09832979171476786) _gate_q_0;
}
gate rzx_5074197088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.914070062474495) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074201792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1682116291434594) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2894596194018055) _gate_q_1;
  ry(-0.2894596194018055) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1682116291434594) _gate_q_0;
}
gate ryy_5074193872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7967023888582383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074274064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.492437839245061) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8833213327401475) _gate_q_0;
  ry(-1.8833213327401475) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.492437839245061) _gate_q_1;
}
gate xx_plus_yy_5074205200(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.965827620124595) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.0315280308433947) _gate_q_1;
  ry(-2.0315280308433947) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.965827620124595) _gate_q_0;
}
gate cu1_5074196464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9203815867300738) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9203815867300738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9203815867300738) _gate_q_1;
}
gate r_5074201120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.03654585093344353, 2.372702830872891, -2.372702830872891) _gate_q_0;
}
gate r_5074193824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.344603362488285, 0.3330033369924712, -0.3330033369924712) _gate_q_0;
}
gate rzz_5074200448(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.0071710146284625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11 {
  rx(2.61902366771247) _gate_q_7;
  y _gate_q_0;
  t _gate_q_8;
  xx_plus_yy_5074193632(5.265618061934664, 4.206327499631938) _gate_q_2, _gate_q_4;
  cz _gate_q_11, _gate_q_6;
  rzx_5074199200(2.5508427364519894) _gate_q_3, _gate_q_10;
  sx _gate_q_5;
  p(3.0046627103602943) _gate_q_9;
  sxdg _gate_q_1;
  ecr _gate_q_11, _gate_q_1;
  cp(4.797607855253892) _gate_q_0, _gate_q_6;
  iswap _gate_q_8, _gate_q_7;
  iswap _gate_q_5, _gate_q_10;
  rxx_5074205920(5.611018121304815) _gate_q_9, _gate_q_3;
  u2(0.9173684070491985, 4.438448394251675) _gate_q_4;
  U(0.8961254231411298, 4.41688170027599, 1.0824834115040016) _gate_q_2;
  x _gate_q_0;
  crx(0.6952995914902623) _gate_q_3, _gate_q_6;
  s _gate_q_5;
  tdg _gate_q_8;
  sx _gate_q_4;
  xx_plus_yy_5074203232(3.5797288866767882, 6.164471805051361) _gate_q_11, _gate_q_9;
  rz(3.0329663280764763) _gate_q_2;
  sxdg _gate_q_1;
  ch _gate_q_7, _gate_q_10;
  y _gate_q_7;
  sx _gate_q_10;
  cry(1.224850911543493) _gate_q_3, _gate_q_5;
  crx(1.5160973799023103) _gate_q_2, _gate_q_6;
  xx_minus_yy_5074205152(3.9189925226413025, 1.568351732905781) _gate_q_4, _gate_q_11;
  iswap _gate_q_0, _gate_q_9;
  crx(4.921270002100965) _gate_q_8, _gate_q_1;
  dcx _gate_q_5, _gate_q_7;
  z _gate_q_11;
  sdg _gate_q_4;
  id _gate_q_1;
  U(0.690602856724746, 4.147414548700515, 0.2624272229444245) _gate_q_0;
  rzx_5074192240(1.780544542548962) _gate_q_10, _gate_q_3;
  sxdg _gate_q_6;
  swap _gate_q_9, _gate_q_2;
  r_5074197568(1.5724193089822374, 1.6691261185096644) _gate_q_8;
  cp(2.015070339435623) _gate_q_1, _gate_q_6;
  z _gate_q_5;
  rzx_5074197088(1.914070062474495) _gate_q_7, _gate_q_0;
  rz(0.721674548538692) _gate_q_9;
  rx(3.8063150297056763) _gate_q_11;
  z _gate_q_10;
  u3(1.569055486451424, 1.9260071578588733, 2.3783278002121766) _gate_q_2;
  x _gate_q_8;
  s _gate_q_3;
  tdg _gate_q_4;
  dcx _gate_q_10, _gate_q_7;
  xx_plus_yy_5074201792(0.578919238803611, 3.1682116291434594) _gate_q_4, _gate_q_1;
  ryy_5074193872(2.7967023888582383) _gate_q_11, _gate_q_0;
  cx _gate_q_5, _gate_q_2;
  u1(0.08054908768318257) _gate_q_9;
  id _gate_q_8;
  h _gate_q_3;
  tdg _gate_q_6;
  u3(1.651129940229621, 5.107873531399759, 2.4051933037960938) _gate_q_3;
  ch _gate_q_1, _gate_q_10;
  u1(3.626479837574081) _gate_q_7;
  u2(5.414596658185818, 3.1679777440758716) _gate_q_11;
  xx_minus_yy_5074274064(3.766642665480295, 4.492437839245061) _gate_q_2, _gate_q_5;
  xx_plus_yy_5074205200(4.0630560616867895, 2.965827620124595) _gate_q_9, _gate_q_8;
  cz _gate_q_6, _gate_q_4;
  U(2.242546028363721, 2.9784538870520345, 6.066988482017033) _gate_q_0;
  cu1_5074196464(1.8407631734601475) _gate_q_0, _gate_q_7;
  r_5074201120(0.03654585093344353, 3.9434991576677874) _gate_q_5;
  r_5074193824(5.344603362488285, 1.9037996637873678) _gate_q_1;
  U(0.4121035541682606, 2.1355923952720284, 4.771569444304635) _gate_q_6;
  csdg _gate_q_9, _gate_q_2;
  z _gate_q_10;
  crx(5.219417540819721) _gate_q_3, _gate_q_8;
  sxdg _gate_q_11;
  ry(4.937757964628345) _gate_q_4;
  csdg _gate_q_11, _gate_q_2;
  id _gate_q_4;
  cz _gate_q_1, _gate_q_8;
  u1(1.1973412568438513) _gate_q_5;
  rzz_5074200448(4.0071710146284625) _gate_q_3, _gate_q_10;
  sx _gate_q_9;
  dcx _gate_q_6, _gate_q_0;
  sxdg _gate_q_7;
}