gate rzx_5072709072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9838970232231299) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate rxx_5072700336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.158940172424689) _gate_q_1;
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
gate r_5072703792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.998883040021182, 3.4281489185127496, -3.4281489185127496) _gate_q_0;
}
gate cu1_5072707824(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4528487782660884) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4528487782660884) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4528487782660884) _gate_q_1;
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
gate xx_plus_yy_5070800992(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.241562594125898) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6062257687948331) _gate_q_1;
  ry(-1.6062257687948331) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.241562594125898) _gate_q_0;
}
gate rzz_5072703504(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.90228454559915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070809584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.735290570392413) _gate_q_0;
  u1(-0.404440983106781) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9423805608052696, 0, -5.735290570392413) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9423805608052696, 6.139731553499194, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070807616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8861486262734493) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5070814240(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2858576178441723) _gate_q_0;
  u1(2.2788579870991894) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.220527810394411, 0, -3.2858576178441723) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.220527810394411, 1.0069996307449829, 0) _gate_q_1;
}
gate xx_minus_yy_5070808768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.293448732980218) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6285660117452192) _gate_q_0;
  ry(-1.6285660117452192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.293448732980218) _gate_q_1;
}
gate r_5070814096(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.903085665357481, 3.0816778419215245, -3.0816778419215245) _gate_q_0;
}
gate rzx_5070800560(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.715559569157024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070801088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6088607242403056) _gate_q_1;
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
gate rzz_5070813424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.931834212775716) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5070802768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.83518731404079) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0479626967152917) _gate_q_0;
  ry(-3.0479626967152917) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.83518731404079) _gate_q_1;
}
gate rzz_5070814576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7832774507968931) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070810496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.07250537054918366, -1.2812473045823185, 1.2812473045823185) _gate_q_0;
}
gate rzx_5070813664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2627773513688805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070801136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.5306222207504967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5270153505497848) _gate_q_0;
  ry(-1.5270153505497848) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.5306222207504967) _gate_q_1;
}
gate xx_plus_yy_5070809056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.4964582230709125) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.4281551814762719) _gate_q_1;
  ry(-1.4281551814762719) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.4964582230709125) _gate_q_0;
}
gate cu1_5070808672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.116196338683853) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.116196338683853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.116196338683853) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cx _gate_q_15, _gate_q_17;
  h _gate_q_2;
  id _gate_q_9;
  s _gate_q_10;
  cry(2.2849165401691485) _gate_q_11, _gate_q_6;
  rzx_5072709072(1.9838970232231299) _gate_q_5, _gate_q_8;
  cx _gate_q_3, _gate_q_0;
  sdg _gate_q_13;
  sxdg _gate_q_16;
  rxx_5072700336(6.158940172424689) _gate_q_14, _gate_q_1;
  h _gate_q_7;
  ecr _gate_q_12, _gate_q_4;
  u3(3.486853055868383, 6.157028854067846, 3.084668040775184) _gate_q_17;
  sxdg _gate_q_14;
  p(5.12463066811799) _gate_q_8;
  r_5072703792(4.998883040021182, 4.998945245307646) _gate_q_13;
  x _gate_q_15;
  cz _gate_q_12, _gate_q_9;
  swap _gate_q_7, _gate_q_2;
  cu1_5072707824(4.905697556532177) _gate_q_0, _gate_q_10;
  sx _gate_q_11;
  csx _gate_q_16, _gate_q_1;
  ry(0.23959856642080585) _gate_q_6;
  u1(5.085151487167686) _gate_q_4;
  h _gate_q_3;
  ry(4.785807144697275) _gate_q_5;
  csx _gate_q_1, _gate_q_12;
  u2(3.6819677766004206, 0.19050369832965983) _gate_q_3;
  s _gate_q_16;
  xx_plus_yy_5070800992(3.2124515375896663, 1.241562594125898) _gate_q_10, _gate_q_8;
  rzz_5072703504(5.90228454559915) _gate_q_6, _gate_q_9;
  U(4.0512392425300785, 2.3876103145935357, 1.0783839395194192) _gate_q_17;
  tdg _gate_q_5;
  sdg _gate_q_15;
  sdg _gate_q_14;
  s _gate_q_4;
  cu3_5070809584(3.884761121610539, 6.139731553499194, 5.330849587285632) _gate_q_13, _gate_q_11;
  cp(1.2105603763019743) _gate_q_7, _gate_q_0;
  y _gate_q_2;
  u1(5.0499742698830525) _gate_q_2;
  y _gate_q_11;
  y _gate_q_14;
  dcx _gate_q_15, _gate_q_8;
  cp(5.3113710809208925) _gate_q_3, _gate_q_7;
  p(1.929669347213533) _gate_q_5;
  ecr _gate_q_4, _gate_q_17;
  ryy_5070807616(0.8861486262734493) _gate_q_1, _gate_q_0;
  s _gate_q_9;
  z _gate_q_16;
  sdg _gate_q_10;
  iswap _gate_q_12, _gate_q_13;
  u1(2.915475977477492) _gate_q_6;
  crx(4.606391089489027) _gate_q_16, _gate_q_6;
  cu3_5070814240(4.441055620788822, 1.0069996307449829, 5.564715604943362) _gate_q_2, _gate_q_15;
  ry(2.3513719377763844) _gate_q_13;
  crx(0.38329233369467064) _gate_q_14, _gate_q_4;
  cry(5.992948523976877) _gate_q_5, _gate_q_7;
  id _gate_q_9;
  ch _gate_q_12, _gate_q_8;
  h _gate_q_10;
  x _gate_q_11;
  t _gate_q_0;
  y _gate_q_17;
  y _gate_q_3;
  ry(5.29959865457981) _gate_q_1;
  cry(4.647177403978748) _gate_q_13, _gate_q_14;
  xx_minus_yy_5070808768(3.2571320234904384, 5.293448732980218) _gate_q_15, _gate_q_17;
  z _gate_q_9;
  dcx _gate_q_3, _gate_q_6;
  tdg _gate_q_10;
  ry(3.142206280551517) _gate_q_0;
  rz(1.3501123635864718) _gate_q_8;
  y _gate_q_1;
  u3(0.1474277259964504, 2.133369083309196, 3.4199141902650494) _gate_q_7;
  dcx _gate_q_12, _gate_q_2;
  tdg _gate_q_4;
  s _gate_q_5;
  y _gate_q_16;
  rz(1.6163536751681753) _gate_q_11;
  r_5070814096(4.903085665357481, 4.652474168716421) _gate_q_7;
  rzx_5070800560(0.715559569157024) _gate_q_9, _gate_q_4;
  rxx_5070801088(0.6088607242403056) _gate_q_16, _gate_q_17;
  id _gate_q_6;
  y _gate_q_2;
  sx _gate_q_10;
  csdg _gate_q_1, _gate_q_13;
  p(3.3617499448359394) _gate_q_0;
  ch _gate_q_8, _gate_q_12;
  rzz_5070813424(5.931834212775716) _gate_q_5, _gate_q_15;
  xx_minus_yy_5070802768(6.0959253934305835, 1.83518731404079) _gate_q_11, _gate_q_14;
  tdg _gate_q_3;
  U(5.614445143278743, 6.065627228851626, 5.259806537567967) _gate_q_0;
  rzz_5070814576(1.7832774507968931) _gate_q_15, _gate_q_4;
  r_5070810496(0.07250537054918366, 0.2895490222125781) _gate_q_5;
  cu(2.5778823473857475, 2.318239250979308, 1.3153101134691756, 2.795440310465198) _gate_q_17, _gate_q_10;
  crz(4.790068642762314) _gate_q_7, _gate_q_1;
  rzx_5070813664(6.2627773513688805) _gate_q_13, _gate_q_16;
  ecr _gate_q_8, _gate_q_9;
  s _gate_q_14;
  crx(4.934584192106306) _gate_q_11, _gate_q_12;
  swap _gate_q_2, _gate_q_3;
  s _gate_q_6;
  xx_minus_yy_5070801136(3.0540307010995695, 1.5306222207504967) _gate_q_13, _gate_q_14;
  tdg _gate_q_15;
  h _gate_q_8;
  iswap _gate_q_1, _gate_q_5;
  ry(5.797651836660813) _gate_q_3;
  cz _gate_q_4, _gate_q_11;
  ry(1.9113824535823694) _gate_q_9;
  sxdg _gate_q_16;
  xx_plus_yy_5070809056(2.8563103629525437, 5.4964582230709125) _gate_q_7, _gate_q_0;
  rx(1.3767335059857015) _gate_q_12;
  iswap _gate_q_6, _gate_q_17;
  ecr _gate_q_2, _gate_q_10;
  crz(5.680282893002083) _gate_q_0, _gate_q_10;
  cx _gate_q_6, _gate_q_2;
  cu1_5070808672(4.232392677367706) _gate_q_4, _gate_q_1;
  cy _gate_q_9, _gate_q_15;
  cy _gate_q_11, _gate_q_8;
  u1(2.6088721745566144) _gate_q_14;
  sxdg _gate_q_13;
  t _gate_q_17;
  ry(0.3664596623740316) _gate_q_12;
  ch _gate_q_7, _gate_q_5;
  cry(5.982503105895929) _gate_q_16, _gate_q_3;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rxx_5070127520(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2213109903511449) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5070130736(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.45841604901306204) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.45841604901306204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.45841604901306204) _gate_q_1;
}
gate xx_plus_yy_5070135680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9152841588019824) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.448043510266464) _gate_q_1;
  ry(-2.448043510266464) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9152841588019824) _gate_q_0;
}
gate cu3_5070137888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.6282496793957657) _gate_q_0;
  u1(-0.002865656926858584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5635116816330394, 0, -2.6282496793957657) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5635116816330394, 2.6311153363226243, 0) _gate_q_1;
}
gate ryy_5070133184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8989605117502038) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5070138848(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.706469102560677) _gate_q_0;
  u1(-0.09698324897400523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.35784560912594343, 0, -4.706469102560677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.35784560912594343, 4.803452351534682, 0) _gate_q_1;
}
gate rzx_5070138272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.2231430244818196) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070140912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4430380505653218) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070143216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.769146580628402) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5852801004780765) _gate_q_1;
  ry(-2.5852801004780765) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.769146580628402) _gate_q_0;
}
gate cu1_5070133424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7579228313764151) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7579228313764151) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7579228313764151) _gate_q_1;
}
gate xx_plus_yy_5070128864(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.8738962263275754) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.37942532227834197) _gate_q_1;
  ry(-0.37942532227834197) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.8738962263275754) _gate_q_0;
}
gate cu3_5070129728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3086825601662575) _gate_q_0;
  u1(2.921439361557005) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.522948974410609, 0, -3.3086825601662575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.522948974410609, 0.3872431986092522, 0) _gate_q_1;
}
gate rzz_5070133040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.093749206420242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070136160(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.803093039736748, 1.7134484465478175, -1.7134484465478175) _gate_q_0;
}
gate cu3_5070127568(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.0517614836374376) _gate_q_0;
  u1(0.06315504678189465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.6518040355757533, 0, -3.0517614836374376) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.6518040355757533, 2.988606436855543, 0) _gate_q_1;
}
gate rzx_5070127184(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.809550738268135) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070140336(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2831051711654955) _gate_q_0;
  u1(-0.6534537064616099) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.109672607031524, 0, -1.2831051711654955) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.109672607031524, 1.9365588776271054, 0) _gate_q_1;
}
gate rzz_5070135344(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2396379003890003) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070140624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.1080940972326876) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.1080940972326876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.1080940972326876) _gate_q_1;
}
gate rzx_5070143360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4996303119452532) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5070140048(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.842252443898515) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.613645821639282) _gate_q_1;
  ry(-0.613645821639282) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.842252443898515) _gate_q_0;
}
gate cu3_5070140672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.631698960124469) _gate_q_0;
  u1(1.477009842738915) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.5402033838964924, 0, -4.631698960124469) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.5402033838964924, 3.154689117385554, 0) _gate_q_1;
}
gate xx_minus_yy_5070137792(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.2830289860637123) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8144711263251971) _gate_q_0;
  ry(-1.8144711263251971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.2830289860637123) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cry(1.4807896903800997) _gate_q_15, _gate_q_5;
  cry(5.211909915529736) _gate_q_16, _gate_q_3;
  iswap _gate_q_11, _gate_q_4;
  iswap _gate_q_6, _gate_q_17;
  h _gate_q_14;
  cs _gate_q_9, _gate_q_8;
  rxx_5070127520(0.2213109903511449) _gate_q_0, _gate_q_10;
  cu1_5070130736(0.9168320980261241) _gate_q_7, _gate_q_1;
  id _gate_q_13;
  ecr _gate_q_12, _gate_q_2;
  cu(2.179323546758469, 5.646183299389472, 5.122386300156072, 5.506455411879611) _gate_q_14, _gate_q_3;
  rz(1.4991538525216908) _gate_q_10;
  cu(1.4369185573556833, 1.2896070778586346, 3.506189525864648, 5.475196953986199) _gate_q_6, _gate_q_11;
  y _gate_q_13;
  csdg _gate_q_17, _gate_q_16;
  xx_plus_yy_5070135680(4.896087020532928, 1.9152841588019824) _gate_q_4, _gate_q_12;
  cz _gate_q_8, _gate_q_9;
  cry(5.906540914565236) _gate_q_5, _gate_q_1;
  u2(0.4016370805442201, 1.5996568547633105) _gate_q_2;
  ecr _gate_q_15, _gate_q_7;
  sdg _gate_q_0;
  U(4.474941426029255, 2.9267474985177735, 0.8064369171968601) _gate_q_2;
  u2(4.722534881975758, 5.776077431481946) _gate_q_15;
  cu3_5070137888(5.127023363266079, 2.6311153363226243, 2.625384022468907) _gate_q_12, _gate_q_5;
  cs _gate_q_9, _gate_q_7;
  x _gate_q_0;
  cp(1.072395361617494) _gate_q_14, _gate_q_13;
  cp(0.08243005723453323) _gate_q_17, _gate_q_16;
  iswap _gate_q_8, _gate_q_1;
  ryy_5070133184(1.8989605117502038) _gate_q_10, _gate_q_11;
  iswap _gate_q_6, _gate_q_3;
  z _gate_q_4;
  x _gate_q_15;
  cry(5.916520068886535) _gate_q_13, _gate_q_14;
  cu3_5070138848(0.7156912182518869, 4.803452351534682, 4.609485853586672) _gate_q_9, _gate_q_10;
  sdg _gate_q_17;
  rzx_5070138272(5.2231430244818196) _gate_q_4, _gate_q_5;
  rxx_5070140912(3.4430380505653218) _gate_q_0, _gate_q_1;
  cu(5.810005184747612, 5.213095228373865, 2.9904029282831908, 2.6207966024467115) _gate_q_16, _gate_q_11;
  z _gate_q_12;
  xx_plus_yy_5070143216(5.170560200956153, 2.769146580628402) _gate_q_8, _gate_q_6;
  cu(3.9758838428636114, 3.172428973456136, 2.236192923417267, 2.1072159241911756) _gate_q_3, _gate_q_2;
  u3(3.5461971271509856, 1.0102608558582253, 2.651507189000683) _gate_q_7;
  rx(3.9813250360586707) _gate_q_0;
  sx _gate_q_3;
  rz(5.936817561737221) _gate_q_8;
  iswap _gate_q_12, _gate_q_1;
  cu1_5070133424(1.5158456627528303) _gate_q_7, _gate_q_5;
  iswap _gate_q_11, _gate_q_2;
  rz(5.810510177615597) _gate_q_10;
  cy _gate_q_4, _gate_q_13;
  ch _gate_q_15, _gate_q_17;
  u1(5.930385708949522) _gate_q_16;
  sxdg _gate_q_6;
  U(6.258965321063276, 3.512321697455684, 3.1875569078995047) _gate_q_14;
  y _gate_q_9;
  csx _gate_q_1, _gate_q_15;
  ecr _gate_q_12, _gate_q_0;
  sx _gate_q_13;
  csx _gate_q_11, _gate_q_17;
  xx_plus_yy_5070128864(0.7588506445566839, 0.8738962263275754) _gate_q_7, _gate_q_5;
  cu3_5070129728(3.045897948821218, 0.3872431986092522, 6.230121921723263) _gate_q_9, _gate_q_2;
  sx _gate_q_6;
  sx _gate_q_8;
  rzz_5070133040(6.093749206420242) _gate_q_16, _gate_q_14;
  csx _gate_q_4, _gate_q_10;
  sx _gate_q_3;
  sdg _gate_q_15;
  cp(5.856141651035755) _gate_q_5, _gate_q_8;
  r_5070136160(3.803093039736748, 3.284244773342714) _gate_q_12;
  cu3_5070127568(5.303608071151507, 2.988606436855543, 3.1149165304193325) _gate_q_6, _gate_q_0;
  tdg _gate_q_17;
  cx _gate_q_14, _gate_q_4;
  swap _gate_q_11, _gate_q_16;
  rzx_5070127184(5.809550738268135) _gate_q_3, _gate_q_10;
  cu3_5070140336(6.219345214063048, 1.9365588776271054, 0.6296514647038856) _gate_q_1, _gate_q_13;
  cu(5.831102208749771, 0.7860785774558304, 1.1465473782555469, 2.2685109478753542) _gate_q_9, _gate_q_2;
  sdg _gate_q_7;
  ch _gate_q_4, _gate_q_3;
  u1(5.448159931828536) _gate_q_9;
  cry(6.003034587074196) _gate_q_0, _gate_q_1;
  u2(5.864589450854011, 0.4833370431975551) _gate_q_12;
  ecr _gate_q_11, _gate_q_8;
  rzz_5070135344(3.2396379003890003) _gate_q_7, _gate_q_10;
  cu1_5070140624(2.216188194465375) _gate_q_5, _gate_q_15;
  ecr _gate_q_13, _gate_q_17;
  t _gate_q_2;
  rzx_5070143360(1.4996303119452532) _gate_q_16, _gate_q_6;
  tdg _gate_q_14;
  cx _gate_q_1, _gate_q_7;
  u2(2.5221653866661256, 4.1039887425354715) _gate_q_13;
  xx_plus_yy_5070140048(1.227291643278564, 2.842252443898515) _gate_q_10, _gate_q_9;
  p(2.93672793311357) _gate_q_6;
  u2(5.4740687573054085, 1.4370767089796488) _gate_q_15;
  id _gate_q_17;
  crx(4.691878517439308) _gate_q_16, _gate_q_8;
  cu3_5070140672(5.080406767792985, 3.154689117385554, 6.108708802863384) _gate_q_14, _gate_q_3;
  z _gate_q_2;
  ecr _gate_q_11, _gate_q_0;
  ch _gate_q_5, _gate_q_12;
  sdg _gate_q_4;
  xx_minus_yy_5070137792(3.6289422526503943, 3.2830289860637123) _gate_q_4, _gate_q_8;
  rz(1.48547985614428) _gate_q_15;
  s _gate_q_13;
  cry(4.04037334881271) _gate_q_17, _gate_q_10;
  cx _gate_q_6, _gate_q_7;
  u2(3.5508902419253774, 1.7349222372360646) _gate_q_14;
  cu(0.29636943780572306, 0.3840372728579483, 2.0594464573839324, 4.546261152623008) _gate_q_3, _gate_q_11;
  ch _gate_q_12, _gate_q_9;
  rx(4.399436272731801) _gate_q_1;
  csx _gate_q_16, _gate_q_2;
  swap _gate_q_5, _gate_q_0;
}