gate rzx_5070851728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.467407790099829) _gate_q_1;
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
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate r_5070862432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.328210266396814, 3.8751516141852687, -3.8751516141852687) _gate_q_0;
}
gate rzz_5070850960(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2762606118771704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5074233072(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.824453543305199, 4.681659504298264, -4.681659504298264) _gate_q_0;
}
gate ryy_5074227264(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1148993003557175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074225968(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.577083582928826) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5074230576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.17169945026199265, -1.1889389574587086, 1.1889389574587086) _gate_q_0;
}
gate cu3_5074230048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.6059393821383512) _gate_q_0;
  u1(0.28922972074098574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.51282776178537, 0, -0.6059393821383512) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.51282776178537, 0.3167096613973655, 0) _gate_q_1;
}
gate r_5074225824(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.443098152749664, 4.557219139703911, -4.557219139703911) _gate_q_0;
}
gate cu3_5074226304(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6494212131644503) _gate_q_0;
  u1(-1.752534727086657) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5528813233252003, 0, -3.6494212131644503) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5528813233252003, 5.401955940251107, 0) _gate_q_1;
}
gate rzz_5074227024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0651070721692755) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rzx_5074238160(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.913260064490098) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074236624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.4948251554416374) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.0158037182234576) _gate_q_0;
  ry(-2.0158037182234576) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.4948251554416374) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5074228224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.784044216450331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074224864(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.101027546458982) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5074230480(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2443455102517242) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2443455102517242) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2443455102517242) _gate_q_1;
}
gate xx_plus_yy_5074233888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.5860657774829645) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.079693737562063) _gate_q_1;
  ry(-3.079693737562063) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.5860657774829645) _gate_q_0;
}
gate cu1_5074232688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4127150072640284) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4127150072640284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4127150072640284) _gate_q_1;
}
gate rxx_5074224336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.5839584870134855) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5074234272(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4252740472924352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074235952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2832270872281872) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074239264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.7785017099716285) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.08764024309801423) _gate_q_1;
  ry(-0.08764024309801423) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.7785017099716285) _gate_q_0;
}
gate ryy_5074239456(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8749736827701258) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  rzx_5070851728(5.467407790099829) _gate_q_2, _gate_q_13;
  csx _gate_q_15, _gate_q_14;
  iswap _gate_q_0, _gate_q_9;
  crz(5.664047289222395) _gate_q_10, _gate_q_11;
  u2(5.729478865268942, 5.906109572382421) _gate_q_8;
  r_5070862432(4.328210266396814, 5.445947940980165) _gate_q_1;
  u2(3.48716816847392, 0.2732720635020727) _gate_q_7;
  rzz_5070850960(3.2762606118771704) _gate_q_3, _gate_q_12;
  z _gate_q_5;
  cz _gate_q_4, _gate_q_6;
  cs _gate_q_6, _gate_q_10;
  crz(4.4473959528674305) _gate_q_12, _gate_q_5;
  U(1.9987394247106294, 0.5322574644651736, 4.5892969873555085) _gate_q_4;
  dcx _gate_q_9, _gate_q_3;
  crz(1.8571095879165815) _gate_q_2, _gate_q_7;
  r_5074233072(2.824453543305199, 6.252455831093161) _gate_q_0;
  crx(5.610137115313739) _gate_q_11, _gate_q_13;
  swap _gate_q_8, _gate_q_15;
  ryy_5074227264(3.1148993003557175) _gate_q_14, _gate_q_1;
  cz _gate_q_1, _gate_q_2;
  y _gate_q_6;
  crz(1.4340840287420595) _gate_q_12, _gate_q_10;
  cp(0.5967839557678096) _gate_q_3, _gate_q_5;
  rzz_5074225968(2.577083582928826) _gate_q_13, _gate_q_14;
  crx(5.648003469687368) _gate_q_0, _gate_q_8;
  crz(5.106760168954158) _gate_q_4, _gate_q_7;
  y _gate_q_11;
  r_5074230576(0.17169945026199265, 0.3818573693361881) _gate_q_15;
  rx(5.470310153217817) _gate_q_9;
  sx _gate_q_0;
  cu3_5074230048(5.02565552357074, 0.3167096613973655, 0.8951691028793369) _gate_q_12, _gate_q_10;
  cs _gate_q_15, _gate_q_9;
  p(2.125165321132983) _gate_q_13;
  cy _gate_q_5, _gate_q_2;
  r_5074225824(1.443098152749664, 6.128015466498807) _gate_q_7;
  cu3_5074226304(1.1057626466504007, 5.401955940251107, 1.8968864860777936) _gate_q_1, _gate_q_6;
  dcx _gate_q_11, _gate_q_8;
  u3(5.839868949772756, 5.155017176697968, 0.9942534324664776) _gate_q_4;
  sx _gate_q_3;
  h _gate_q_14;
  rzz_5074227024(1.0651070721692755) _gate_q_15, _gate_q_7;
  ecr _gate_q_13, _gate_q_14;
  x _gate_q_9;
  U(5.013813542556376, 0.2870926645440698, 2.931661804168192) _gate_q_4;
  h _gate_q_12;
  cu(1.095926376346436, 5.089775890176971, 5.2630836300422, 6.234435979349284) _gate_q_5, _gate_q_8;
  ecr _gate_q_1, _gate_q_10;
  u3(6.035298319555533, 6.128985517187958, 4.835963299677715) _gate_q_6;
  id _gate_q_0;
  cz _gate_q_11, _gate_q_2;
  p(1.4217435799286204) _gate_q_3;
  rzx_5074238160(3.913260064490098) _gate_q_6, _gate_q_10;
  cu(0.10005975617139085, 5.333586702811583, 2.8655182027088677, 4.241631595908618) _gate_q_12, _gate_q_4;
  cry(5.03671192854313) _gate_q_0, _gate_q_3;
  iswap _gate_q_7, _gate_q_8;
  sx _gate_q_15;
  xx_minus_yy_5074236624(4.031607436446915, 1.4948251554416374) _gate_q_14, _gate_q_13;
  ch _gate_q_9, _gate_q_2;
  U(0.8445486397785366, 3.4157918477710822, 3.823799624195536) _gate_q_1;
  cx _gate_q_5, _gate_q_11;
  u3(3.563072541061526, 0.2850384853468356, 0.04065665710154007) _gate_q_8;
  crx(4.9833032449609) _gate_q_12, _gate_q_6;
  ecr _gate_q_5, _gate_q_10;
  csdg _gate_q_11, _gate_q_4;
  y _gate_q_13;
  rzx_5074228224(5.784044216450331) _gate_q_2, _gate_q_7;
  rzx_5074224864(5.101027546458982) _gate_q_1, _gate_q_9;
  iswap _gate_q_3, _gate_q_0;
  cu1_5074230480(2.4886910205034485) _gate_q_15, _gate_q_14;
  cz _gate_q_13, _gate_q_15;
  cx _gate_q_0, _gate_q_8;
  xx_plus_yy_5074233888(6.159387475124126, 1.5860657774829645) _gate_q_4, _gate_q_7;
  cu1_5074232688(2.825430014528057) _gate_q_6, _gate_q_11;
  rxx_5074224336(5.5839584870134855) _gate_q_10, _gate_q_3;
  u2(1.0006322618241428, 0.7346455350177624) _gate_q_1;
  rzx_5074234272(1.4252740472924352) _gate_q_14, _gate_q_5;
  csdg _gate_q_9, _gate_q_2;
  p(5.2047461492070335) _gate_q_12;
  u2(4.549661098569578, 3.780016803230718) _gate_q_4;
  sxdg _gate_q_15;
  t _gate_q_8;
  u1(2.611257399364367) _gate_q_11;
  x _gate_q_0;
  cz _gate_q_14, _gate_q_1;
  cx _gate_q_12, _gate_q_6;
  swap _gate_q_13, _gate_q_10;
  crx(1.313989227446922) _gate_q_2, _gate_q_3;
  rxx_5074235952(1.2832270872281872) _gate_q_5, _gate_q_7;
  U(1.6114663446956956, 1.72571001866381, 3.637761937976857) _gate_q_9;
  p(3.269159050494634) _gate_q_8;
  cy _gate_q_1, _gate_q_14;
  cp(2.9632945492488805) _gate_q_10, _gate_q_15;
  sxdg _gate_q_6;
  ch _gate_q_2, _gate_q_5;
  id _gate_q_0;
  xx_plus_yy_5074239264(0.17528048619602846, 2.7785017099716285) _gate_q_4, _gate_q_11;
  ryy_5074239456(1.8749736827701258) _gate_q_13, _gate_q_12;
  y _gate_q_7;
  iswap _gate_q_9, _gate_q_3;
}
gate ryy_5074234176(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9664099322492803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5074225488(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6605949901395274, 4.324234503726135, -4.324234503726135) _gate_q_0;
}
gate cu1_5074226976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7268981697416412) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7268981697416412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7268981697416412) _gate_q_1;
}
gate cu3_5074224624(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.0861411611820238) _gate_q_0;
  u1(0.7231175274515635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1989599750689995, 0, -2.0861411611820238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1989599750689995, 1.3630236337304602, 0) _gate_q_1;
}
gate ryy_5074230528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.192578791623423) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074228032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.8919297581475547) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.41301926766749336) _gate_q_0;
  ry(-0.41301926766749336) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.8919297581475547) _gate_q_1;
}
gate ryy_5074227984(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4281768028221096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074236096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.12142316680367) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.38997885377560676) _gate_q_0;
  ry(-0.38997885377560676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.12142316680367) _gate_q_1;
}
gate cu1_5074226160(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5437899789356189) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5437899789356189) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5437899789356189) _gate_q_1;
}
gate r_5074231392(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.258260284280754, 1.5135183706081374, -1.5135183706081374) _gate_q_0;
}
gate rzx_5074226112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.704902013914179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074232064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.244865227967003) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.19484832785613654) _gate_q_0;
  ry(-0.19484832785613654) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.244865227967003) _gate_q_1;
}
gate rzx_5074229376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.951471678608481) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5074234800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7305937660209967) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5168700443612684) _gate_q_0;
  ry(-2.5168700443612684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7305937660209967) _gate_q_1;
}
gate xx_minus_yy_5074233840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.3673336771925895) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5102124886602467) _gate_q_0;
  ry(-0.5102124886602467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.3673336771925895) _gate_q_1;
}
gate ryy_5074229952(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.940608055658401) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5074235328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.530615568195263) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  ryy_5074234176(1.9664099322492803) _gate_q_10, _gate_q_11;
  u2(4.054820435245992, 4.744591116285702) _gate_q_6;
  r_5074225488(1.6605949901395274, 5.895030830521032) _gate_q_4;
  sxdg _gate_q_7;
  cu1_5074226976(3.4537963394832825) _gate_q_9, _gate_q_1;
  u2(5.10391306061915, 0.8033260618567637) _gate_q_12;
  u3(6.130681991932333, 3.0566480034158596, 1.018617718283623) _gate_q_0;
  cu3_5074224624(0.397919950137999, 1.3630236337304602, 2.8092586886335873) _gate_q_8, _gate_q_13;
  cx _gate_q_5, _gate_q_14;
  y _gate_q_3;
  ecr _gate_q_2, _gate_q_15;
  tdg _gate_q_8;
  u1(0.9155907479367611) _gate_q_4;
  tdg _gate_q_6;
  y _gate_q_13;
  ryy_5074230528(6.192578791623423) _gate_q_3, _gate_q_12;
  crz(5.604882395931881) _gate_q_7, _gate_q_11;
  y _gate_q_1;
  cs _gate_q_14, _gate_q_0;
  rx(4.915186640618355) _gate_q_10;
  xx_minus_yy_5074228032(0.8260385353349867, 1.8919297581475547) _gate_q_15, _gate_q_2;
  sdg _gate_q_9;
  x _gate_q_5;
  crx(1.059597463548501) _gate_q_13, _gate_q_11;
  u2(0.5383765435190665, 5.899172227395922) _gate_q_2;
  rz(5.851133634310868) _gate_q_7;
  u3(5.65804305579812, 2.4953713140124534, 0.8344832662603309) _gate_q_5;
  ryy_5074227984(0.4281768028221096) _gate_q_6, _gate_q_1;
  u3(5.629712243220315, 3.8691208203695284, 6.028814394866467) _gate_q_8;
  y _gate_q_12;
  dcx _gate_q_3, _gate_q_14;
  p(4.602566194457387) _gate_q_10;
  swap _gate_q_15, _gate_q_9;
  xx_minus_yy_5074236096(0.7799577075512135, 6.12142316680367) _gate_q_0, _gate_q_4;
  dcx _gate_q_15, _gate_q_11;
  swap _gate_q_12, _gate_q_14;
  swap _gate_q_5, _gate_q_8;
  id _gate_q_1;
  csx _gate_q_7, _gate_q_13;
  cz _gate_q_4, _gate_q_9;
  cry(3.182965891856861) _gate_q_2, _gate_q_0;
  U(5.197120978384752, 3.5780645509916824, 4.083099821858676) _gate_q_3;
  crx(2.0148483492327984) _gate_q_10, _gate_q_6;
  rx(2.9590398916970178) _gate_q_15;
  ch _gate_q_14, _gate_q_8;
  rz(0.29790937502289744) _gate_q_7;
  h _gate_q_3;
  sdg _gate_q_2;
  rz(3.013877607990928) _gate_q_4;
  sx _gate_q_12;
  s _gate_q_0;
  cu1_5074226160(1.0875799578712377) _gate_q_6, _gate_q_11;
  tdg _gate_q_9;
  r_5074231392(4.258260284280754, 3.084314697403034) _gate_q_13;
  s _gate_q_10;
  x _gate_q_5;
  sx _gate_q_1;
  iswap _gate_q_4, _gate_q_15;
  x _gate_q_5;
  cu(2.191646860353725, 2.901084187833056, 4.609096354135539, 4.973933555875174) _gate_q_14, _gate_q_12;
  rx(4.492507724037451) _gate_q_0;
  sdg _gate_q_9;
  ecr _gate_q_6, _gate_q_8;
  rzx_5074226112(4.704902013914179) _gate_q_10, _gate_q_7;
  sx _gate_q_3;
  y _gate_q_1;
  x _gate_q_11;
  z _gate_q_2;
  tdg _gate_q_13;
  u3(4.790648747950817, 4.185040741175712, 6.263699593618399) _gate_q_4;
  dcx _gate_q_9, _gate_q_1;
  u3(1.546200443771933, 2.402272105343017, 2.781947500862166) _gate_q_14;
  z _gate_q_2;
  crx(5.214897747634648) _gate_q_13, _gate_q_6;
  dcx _gate_q_7, _gate_q_12;
  xx_minus_yy_5074232064(0.3896966557122731, 5.244865227967003) _gate_q_5, _gate_q_8;
  rzx_5074229376(5.951471678608481) _gate_q_0, _gate_q_15;
  rx(1.7076306373965187) _gate_q_3;
  cu(0.9475516773845395, 6.232709206786304, 5.73952721761996, 3.4804660977472275) _gate_q_10, _gate_q_11;
  u3(2.879597738277229, 1.5196918909374897, 4.300183760793081) _gate_q_11;
  iswap _gate_q_1, _gate_q_4;
  xx_minus_yy_5074234800(5.033740088722537, 2.7305937660209967) _gate_q_13, _gate_q_8;
  h _gate_q_12;
  swap _gate_q_2, _gate_q_7;
  rx(3.6018025126708157) _gate_q_14;
  cz _gate_q_10, _gate_q_0;
  cs _gate_q_3, _gate_q_5;
  cry(2.2290741739150155) _gate_q_6, _gate_q_15;
  p(2.0765536014514456) _gate_q_9;
  crz(0.14248454311742886) _gate_q_8, _gate_q_3;
  cy _gate_q_15, _gate_q_9;
  swap _gate_q_1, _gate_q_6;
  xx_minus_yy_5074233840(1.0204249773204934, 3.3673336771925895) _gate_q_12, _gate_q_0;
  ch _gate_q_11, _gate_q_2;
  dcx _gate_q_14, _gate_q_5;
  ryy_5074229952(2.940608055658401) _gate_q_4, _gate_q_7;
  ry(4.2043239422449545) _gate_q_10;
  y _gate_q_13;
  u2(4.819673911609598, 3.8228452942069735) _gate_q_11;
  rzz_5074235328(3.530615568195263) _gate_q_5, _gate_q_4;
  ch _gate_q_9, _gate_q_8;
  iswap _gate_q_1, _gate_q_2;
  swap _gate_q_13, _gate_q_12;
  csx _gate_q_6, _gate_q_10;
  cy _gate_q_7, _gate_q_3;
  p(5.133417231130445) _gate_q_0;
  ch _gate_q_15, _gate_q_14;
}