gate r_5105875952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.516127592511386, 2.088101698191014, -2.088101698191014) _gate_q_0;
}
gate rxx_5105861360(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.376018179275083) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5105869808(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.66626061549934) _gate_q_0;
  u1(-2.0623239619912797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4176470129984035, 0, -3.66626061549934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4176470129984035, 5.7285845774906194, 0) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105870192(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.3614180099965134, 4.369987563319046, -4.369987563319046) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5105863472(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.555485319667116) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3213241170560415) _gate_q_1;
  ry(-1.3213241170560415) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.555485319667116) _gate_q_0;
}
gate xx_minus_yy_5105868944(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1472404163833765) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.28833250877226496) _gate_q_0;
  ry(-0.28833250877226496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1472404163833765) _gate_q_1;
}
gate rzx_5105870912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.07646037595916946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5105864864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.5130536256241305) _gate_q_0;
  u1(-0.3379922468392802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0922910416048521, 0, -2.5130536256241305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0922910416048521, 2.8510458724634105, 0) _gate_q_1;
}
gate xx_plus_yy_5105593632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.930214100849982) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6242865051686246) _gate_q_1;
  ry(-1.6242865051686246) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.930214100849982) _gate_q_0;
}
gate rxx_5105597472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9735118310201414) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105592528(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.20960638555700645) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.20960638555700645) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.20960638555700645) _gate_q_1;
}
gate cu1_5105588016(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.05220059716576846) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.05220059716576846) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.05220059716576846) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_minus_yy_5105583504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.3568122821970805) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.607383951758706) _gate_q_0;
  ry(-2.607383951758706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.3568122821970805) _gate_q_1;
}
gate rzx_5105585760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.231484333512499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105591808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6914160516255023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105593536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9199735651725856) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9199735651725856) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9199735651725856) _gate_q_1;
}
gate ryy_5105865488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.5018304984614574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105588976(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5578566591817355, 1.1371565209366983, -1.1371565209366983) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzx_5105586576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4901131677968107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105592960(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.439714008496684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105588784(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6813389532968975) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6813389532968975) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6813389532968975) _gate_q_1;
}
gate xx_plus_yy_5105590800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6934825789660255) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.838989157539892) _gate_q_1;
  ry(-0.838989157539892) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6934825789660255) _gate_q_0;
}
gate cu3_5105752768(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.9144980543789247) _gate_q_0;
  u1(0.16166662779763286) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.3950479378389593, 0, -0.9144980543789247) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.3950479378389593, 0.7528314265812919, 0) _gate_q_1;
}
gate cu3_5105747728(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.369642146220824) _gate_q_0;
  u1(-2.2750089180647417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.7850918114635356, 0, -3.369642146220824) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.7850918114635356, 5.644651064285566, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  r_5105875952(4.516127592511386, 3.6588980249859104) _gate_q_10;
  cz _gate_q_4, _gate_q_12;
  sdg _gate_q_1;
  cry(0.8929260967484615) _gate_q_9, _gate_q_5;
  rxx_5105861360(0.376018179275083) _gate_q_13, _gate_q_0;
  cp(4.65393353503137) _gate_q_8, _gate_q_14;
  cu3_5105869808(0.835294025996807, 5.7285845774906194, 1.6039366535080606) _gate_q_3, _gate_q_7;
  cx _gate_q_2, _gate_q_6;
  p(5.496731686571488) _gate_q_11;
  dcx _gate_q_4, _gate_q_3;
  rx(3.4809969885405554) _gate_q_5;
  r_5105870192(2.3614180099965134, 5.940783890113942) _gate_q_7;
  rx(0.25711724418117343) _gate_q_12;
  x _gate_q_1;
  z _gate_q_14;
  h _gate_q_10;
  sxdg _gate_q_8;
  xx_plus_yy_5105863472(2.642648234112083, 4.555485319667116) _gate_q_9, _gate_q_6;
  y _gate_q_11;
  xx_minus_yy_5105868944(0.5766650175445299, 1.1472404163833765) _gate_q_13, _gate_q_0;
  y _gate_q_2;
  p(3.0687055604579103) _gate_q_14;
  rzx_5105870912(0.07646037595916946) _gate_q_13, _gate_q_3;
  rx(4.226722862195719) _gate_q_7;
  cu3_5105864864(2.1845820832097043, 2.8510458724634105, 2.17506137878485) _gate_q_6, _gate_q_2;
  z _gate_q_0;
  s _gate_q_1;
  U(0.7096882000297818, 3.866844428783704, 5.891592853704747) _gate_q_11;
  u2(2.285528964588527, 4.698224451183942) _gate_q_8;
  xx_plus_yy_5105593632(3.248573010337249, 4.930214100849982) _gate_q_9, _gate_q_12;
  rxx_5105597472(2.9735118310201414) _gate_q_4, _gate_q_5;
  sx _gate_q_10;
  cu1_5105592528(0.4192127711140129) _gate_q_13, _gate_q_2;
  cx _gate_q_12, _gate_q_10;
  cu1_5105588016(0.10440119433153693) _gate_q_8, _gate_q_0;
  ecr _gate_q_3, _gate_q_11;
  cry(4.611280065410532) _gate_q_14, _gate_q_9;
  cs _gate_q_7, _gate_q_1;
  xx_minus_yy_5105583504(5.214767903517412, 4.3568122821970805) _gate_q_6, _gate_q_5;
  rz(1.2719750854136977) _gate_q_4;
  rzx_5105585760(5.231484333512499) _gate_q_2, _gate_q_14;
  rx(3.138274538057449) _gate_q_0;
  rzx_5105591808(3.6914160516255023) _gate_q_6, _gate_q_1;
  cu1_5105593536(1.839947130345171) _gate_q_8, _gate_q_3;
  ry(5.275531774078588) _gate_q_12;
  sxdg _gate_q_10;
  U(4.426344344847762, 2.847436701966841, 1.8759186973296724) _gate_q_4;
  ryy_5105865488(2.5018304984614574) _gate_q_5, _gate_q_7;
  r_5105588976(3.5578566591817355, 2.707952847731595) _gate_q_13;
  ch _gate_q_9, _gate_q_11;
  csdg _gate_q_12, _gate_q_1;
  dcx _gate_q_8, _gate_q_5;
  z _gate_q_4;
  ch _gate_q_6, _gate_q_10;
  h _gate_q_9;
  tdg _gate_q_13;
  rzx_5105586576(2.4901131677968107) _gate_q_14, _gate_q_0;
  rz(3.304386039050909) _gate_q_7;
  crx(3.660210036860967) _gate_q_2, _gate_q_11;
  sx _gate_q_3;
  ryy_5105592960(4.439714008496684) _gate_q_6, _gate_q_11;
  p(3.079054331475754) _gate_q_4;
  ecr _gate_q_1, _gate_q_3;
  crz(1.3109108784290546) _gate_q_12, _gate_q_2;
  cy _gate_q_5, _gate_q_8;
  rx(1.7991633085240517) _gate_q_10;
  cz _gate_q_13, _gate_q_0;
  cp(5.897836133192547) _gate_q_7, _gate_q_14;
  sxdg _gate_q_9;
  t _gate_q_10;
  sx _gate_q_6;
  cu1_5105588784(1.362677906593795) _gate_q_12, _gate_q_3;
  h _gate_q_4;
  sdg _gate_q_7;
  xx_plus_yy_5105590800(1.677978315079784, 0.6934825789660255) _gate_q_1, _gate_q_5;
  rz(4.753901621072079) _gate_q_9;
  u2(2.2889916939625974, 1.4799611367752834) _gate_q_8;
  crx(4.897188181236925) _gate_q_14, _gate_q_2;
  u3(2.6382847227534705, 6.153707178028708, 5.436521841373799) _gate_q_13;
  tdg _gate_q_0;
  u1(0.3439171463455059) _gate_q_11;
  rz(1.551052931153086) _gate_q_12;
  x _gate_q_5;
  tdg _gate_q_2;
  u2(2.3373370417660295, 3.633748758330961) _gate_q_13;
  u3(3.056520703266333, 3.175167240700822, 3.932830437785513) _gate_q_8;
  cy _gate_q_1, _gate_q_9;
  tdg _gate_q_0;
  ry(0.1714329308152763) _gate_q_14;
  ch _gate_q_7, _gate_q_4;
  sxdg _gate_q_6;
  tdg _gate_q_11;
  u1(2.437090023202874) _gate_q_3;
  u1(2.86490679260956) _gate_q_10;
  z _gate_q_10;
  cu3_5105752768(4.790095875677919, 0.7528314265812919, 1.0761646821765576) _gate_q_9, _gate_q_8;
  ecr _gate_q_11, _gate_q_6;
  cu3_5105747728(1.5701836229270711, 5.644651064285566, 1.0946332281560827) _gate_q_4, _gate_q_14;
  sdg _gate_q_12;
  rz(3.5656259862347035) _gate_q_5;
  cx _gate_q_0, _gate_q_2;
  cs _gate_q_7, _gate_q_3;
  y _gate_q_1;
  u2(0.81168870270088, 1.606074286951933) _gate_q_13;
}
gate rzx_5105757760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.850799670973133) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105748016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.335217686080145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105751376(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.652780273024351) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105753392(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.029822873511046) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5105752288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0852942279953677) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0852942279953677) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0852942279953677) _gate_q_1;
}
gate ryy_5105760304(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.252713543301078) _gate_q_1;
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
gate r_5105762176(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.109230279386327, 0.7371215774955684, -0.7371215774955684) _gate_q_0;
}
gate cu1_5105754304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4745923471567643) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4745923471567643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4745923471567643) _gate_q_1;
}
gate ryy_5105757616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2741837554223358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105751952(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.194458399988943) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.194458399988943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.194458399988943) _gate_q_1;
}
gate xx_plus_yy_5105761600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9968979454194868) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3143966158365963) _gate_q_1;
  ry(-1.3143966158365963) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9968979454194868) _gate_q_0;
}
gate rzz_5105748592(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.838278216129538) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5105756224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.1236741428409935) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2235179574250195) _gate_q_0;
  ry(-1.2235179574250195) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.1236741428409935) _gate_q_1;
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
gate xx_minus_yy_5105747488(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7884793395667637) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9512478735749639) _gate_q_0;
  ry(-1.9512478735749639) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7884793395667637) _gate_q_1;
}
gate r_5105755936(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.6373195743342748, 4.217691335838482, -4.217691335838482) _gate_q_0;
}
gate cu1_5105761744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5675774698831035) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5675774698831035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5675774698831035) _gate_q_1;
}
gate cu3_5105758576(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.731229354326341) _gate_q_0;
  u1(0.8015250181488321) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.350599130613829, 0, -2.731229354326341) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.350599130613829, 1.9297043361775088, 0) _gate_q_1;
}
gate xx_plus_yy_5105749696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5403340164222459) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.533891994947189) _gate_q_1;
  ry(-1.533891994947189) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5403340164222459) _gate_q_0;
}
gate rzx_5105753584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.16562804079136) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5105756848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6635970585093953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5105756608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.12725279725421648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105755840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8648980171197147) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8648980171197147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8648980171197147) _gate_q_1;
}
gate rxx_5105749024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.1976856100098347) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105759152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.423247472439666) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.423247472439666) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.423247472439666) _gate_q_1;
}
gate cu1_5105752192(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8557054490107373) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8557054490107373) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8557054490107373) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cx _gate_q_6, _gate_q_1;
  crz(1.783501623858805) _gate_q_9, _gate_q_8;
  rzx_5105757760(3.850799670973133) _gate_q_4, _gate_q_5;
  u2(1.603192691469202, 5.8013736774364455) _gate_q_7;
  h _gate_q_11;
  cry(2.821522396891453) _gate_q_2, _gate_q_12;
  crz(5.670613692245872) _gate_q_13, _gate_q_14;
  ryy_5105748016(4.335217686080145) _gate_q_3, _gate_q_0;
  rx(5.198510014096183) _gate_q_10;
  U(0.6860532053869015, 1.5918814994976445, 5.9842671203831665) _gate_q_5;
  cy _gate_q_1, _gate_q_2;
  cu(5.001965268310511, 5.747913621849976, 0.2356993084093892, 3.849502421949045) _gate_q_4, _gate_q_8;
  p(5.456927615447185) _gate_q_0;
  p(4.3341775463383545) _gate_q_14;
  rzz_5105751376(5.652780273024351) _gate_q_9, _gate_q_11;
  rzz_5105753392(5.029822873511046) _gate_q_10, _gate_q_7;
  z _gate_q_6;
  p(2.2325106548033267) _gate_q_12;
  z _gate_q_3;
  sx _gate_q_13;
  cp(3.4290063297440536) _gate_q_12, _gate_q_13;
  ecr _gate_q_1, _gate_q_11;
  cu1_5105752288(2.1705884559907354) _gate_q_3, _gate_q_7;
  ryy_5105760304(0.252713543301078) _gate_q_10, _gate_q_2;
  iswap _gate_q_9, _gate_q_4;
  sx _gate_q_14;
  crx(1.8742424286569788) _gate_q_8, _gate_q_6;
  ecr _gate_q_5, _gate_q_0;
  r_5105762176(3.109230279386327, 2.307917904290465) _gate_q_4;
  rz(1.6406460344643334) _gate_q_1;
  cz _gate_q_3, _gate_q_9;
  cs _gate_q_6, _gate_q_7;
  u2(3.481347406426826, 2.652788560824715) _gate_q_5;
  sxdg _gate_q_11;
  cp(4.714653768896337) _gate_q_8, _gate_q_10;
  cu1_5105754304(2.9491846943135287) _gate_q_2, _gate_q_12;
  ryy_5105757616(0.2741837554223358) _gate_q_14, _gate_q_0;
  y _gate_q_13;
  cu1_5105751952(2.388916799977886) _gate_q_11, _gate_q_6;
  ch _gate_q_12, _gate_q_3;
  ecr _gate_q_9, _gate_q_10;
  id _gate_q_8;
  x _gate_q_7;
  cu(2.3130322736155544, 1.2173306842075011, 3.1046134064362363, 5.055286283373128) _gate_q_1, _gate_q_0;
  xx_plus_yy_5105761600(2.6287932316731926, 1.9968979454194868) _gate_q_14, _gate_q_2;
  cz _gate_q_13, _gate_q_4;
  U(4.895309869467102, 0.30112340386710434, 3.335996668431194) _gate_q_5;
  ch _gate_q_5, _gate_q_6;
  cu(1.599436499925007, 6.097768106759456, 5.417444283483151, 1.4444914683517294) _gate_q_7, _gate_q_13;
  rzz_5105748592(4.838278216129538) _gate_q_10, _gate_q_3;
  cp(4.4214144483109585) _gate_q_12, _gate_q_14;
  xx_minus_yy_5105756224(2.447035914850039, 5.1236741428409935) _gate_q_11, _gate_q_0;
  ry(0.5320451760542845) _gate_q_2;
  crx(1.6918085259925082) _gate_q_8, _gate_q_4;
  u1(5.210225099829578) _gate_q_9;
  t _gate_q_1;
  s _gate_q_7;
  rz(0.3165774776649337) _gate_q_3;
  u2(1.5808936867964178, 0.2490445384267364) _gate_q_14;
  csx _gate_q_9, _gate_q_1;
  iswap _gate_q_0, _gate_q_10;
  iswap _gate_q_4, _gate_q_5;
  U(0.003989497648866771, 0.29680212755957824, 5.395501479896706) _gate_q_12;
  iswap _gate_q_11, _gate_q_13;
  iswap _gate_q_2, _gate_q_8;
  u1(4.711466888036) _gate_q_6;
  id _gate_q_12;
  rx(2.9972833142124604) _gate_q_5;
  u3(0.11848861275675243, 1.092230692974497, 5.851921774719029) _gate_q_9;
  xx_minus_yy_5105747488(3.9024957471499278, 3.7884793395667637) _gate_q_7, _gate_q_1;
  rx(4.986703328495339) _gate_q_2;
  z _gate_q_3;
  h _gate_q_13;
  r_5105755936(1.6373195743342748, 5.788487662633378) _gate_q_14;
  u2(5.334569725519406, 2.1759242739607636) _gate_q_0;
  sx _gate_q_11;
  cu1_5105761744(3.135154939766207) _gate_q_10, _gate_q_6;
  h _gate_q_8;
  p(0.17125596752672778) _gate_q_4;
  cu3_5105758576(4.701198261227658, 1.9297043361775088, 3.532754372475173) _gate_q_2, _gate_q_4;
  xx_plus_yy_5105749696(3.067783989894378, 0.5403340164222459) _gate_q_0, _gate_q_8;
  rzx_5105753584(4.16562804079136) _gate_q_3, _gate_q_5;
  cx _gate_q_1, _gate_q_9;
  rzx_5105756848(0.6635970585093953) _gate_q_11, _gate_q_6;
  cp(5.139143848830481) _gate_q_14, _gate_q_13;
  rxx_5105756608(0.12725279725421648) _gate_q_7, _gate_q_10;
  u1(1.8683164574066635) _gate_q_12;
  cu1_5105755840(5.729796034239429) _gate_q_14, _gate_q_13;
  x _gate_q_8;
  rxx_5105749024(0.1976856100098347) _gate_q_5, _gate_q_9;
  cu1_5105759152(4.846494944879332) _gate_q_10, _gate_q_7;
  cu1_5105752192(1.7114108980214746) _gate_q_3, _gate_q_12;
  sxdg _gate_q_4;
  cs _gate_q_6, _gate_q_1;
  ch _gate_q_11, _gate_q_2;
  sdg _gate_q_0;
}