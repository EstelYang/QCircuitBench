gate cu3_5116898352(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.8961720278867134) _gate_q_0;
  u1(-2.5388569503051395) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.1182874028394851, 0, -2.8961720278867134) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.1182874028394851, 5.435028978191853, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5116890288(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.8391000638864807) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7440931350684288) _gate_q_1;
  ry(-1.7440931350684288) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.8391000638864807) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5116889952(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.205594068786724) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116889712(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.988112459405069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate rzz_5116899072(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2412249988848805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5116890000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.9218001032444523) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116896816(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.745726388297688) _gate_q_0;
  u1(-1.3320826648587496) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.6695645917469759, 0, -2.745726388297688) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.6695645917469759, 4.077809053156438, 0) _gate_q_1;
}
gate r_5116900080(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.7469365169600355, 1.7254932208842169, -1.7254932208842169) _gate_q_0;
}
gate r_5116895760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.686949464815569, 1.657570952923451, -1.657570952923451) _gate_q_0;
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
gate r_5116899792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8387466278391381, 1.6342769359724425, -1.6342769359724425) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5116901616(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.7948091648476305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5116901040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7613965681727626) _gate_q_0;
  u1(0.35696130688789984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3527262091284145, 0, -3.7613965681727626) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3527262091284145, 3.404435261284863, 0) _gate_q_1;
}
gate xx_minus_yy_5116899936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8880861545264906) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8920700084295474) _gate_q_0;
  ry(-1.8920700084295474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8880861545264906) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5116895472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9411921781007777) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9411921781007777) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9411921781007777) _gate_q_1;
}
gate xx_minus_yy_5116899744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7861197024240423) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.3151688757585562) _gate_q_0;
  ry(-2.3151688757585562) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7861197024240423) _gate_q_1;
}
gate rzx_5116890096(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.135559499293673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5116899696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.458479553695107) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116899168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3949471095777634, 0.2916313741814833, -0.2916313741814833) _gate_q_0;
}
gate r_5116899456(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.535645375530935, 3.5327415778943303, -3.5327415778943303) _gate_q_0;
}
gate rxx_5116898688(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.47146738622058726) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5116899600(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8553504248529826, 1.1309146558434908, -1.1309146558434908) _gate_q_0;
}
gate xx_minus_yy_5116902672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.266696978126996) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.9180312154566335) _gate_q_0;
  ry(-2.9180312154566335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.266696978126996) _gate_q_1;
}
gate rxx_5116899408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2343120914279178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5116903008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9543793720565764) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9543793720565764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9543793720565764) _gate_q_1;
}
gate cu1_5116899552(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.427778955532115) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.427778955532115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.427778955532115) _gate_q_1;
}
gate ryy_5116902336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2510351857716209) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5116902096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.534395946627302) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.027611573144972625) _gate_q_0;
  ry(-0.027611573144972625) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.534395946627302) _gate_q_1;
}
gate ryy_5116902768(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.565497415554229) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5116892736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.912209059920851) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6570394495144222) _gate_q_0;
  ry(-0.6570394495144222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.912209059920851) _gate_q_1;
}
gate rxx_5116893216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.524012529860602) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5116893072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.0843656536120143) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.10546371955093353) _gate_q_0;
  ry(-0.10546371955093353) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.0843656536120143) _gate_q_1;
}
gate rxx_5116901136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.858670572975179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5116892928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.067368092298747) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  p(2.476770972865523) _gate_q_3;
  sx _gate_q_16;
  cu3_5116898352(2.2365748056789703, 5.435028978191853, 0.35731507758157416) _gate_q_1, _gate_q_10;
  rz(3.611910221876458) _gate_q_17;
  rz(5.707698817975063) _gate_q_13;
  crx(0.16604117551157876) _gate_q_8, _gate_q_15;
  cx _gate_q_7, _gate_q_6;
  xx_plus_yy_5116890288(3.4881862701368576, 3.8391000638864807) _gate_q_4, _gate_q_9;
  csdg _gate_q_5, _gate_q_0;
  csdg _gate_q_14, _gate_q_11;
  sx _gate_q_2;
  p(2.258026078936346) _gate_q_12;
  rzz_5116889952(4.205594068786724) _gate_q_4, _gate_q_3;
  u1(4.88708529263981) _gate_q_2;
  z _gate_q_7;
  rx(4.305817282670088) _gate_q_14;
  rxx_5116889712(2.988112459405069) _gate_q_5, _gate_q_1;
  dcx _gate_q_12, _gate_q_8;
  dcx _gate_q_15, _gate_q_13;
  cry(0.060186321156825616) _gate_q_6, _gate_q_16;
  U(4.805288575894798, 1.9841771625667064, 0.11654507346686865) _gate_q_11;
  s _gate_q_17;
  U(1.1892981705072498, 0.9613802842953437, 4.202694162748312) _gate_q_10;
  cy _gate_q_9, _gate_q_0;
  x _gate_q_1;
  rzz_5116899072(3.2412249988848805) _gate_q_2, _gate_q_7;
  rzz_5116890000(2.9218001032444523) _gate_q_8, _gate_q_15;
  u1(3.5777481769872144) _gate_q_13;
  rz(2.1127568085576103) _gate_q_14;
  y _gate_q_4;
  x _gate_q_10;
  t _gate_q_11;
  rz(2.6716646346865653) _gate_q_3;
  h _gate_q_0;
  csdg _gate_q_16, _gate_q_6;
  cu3_5116896816(1.3391291834939518, 4.077809053156438, 1.4136437234389383) _gate_q_9, _gate_q_12;
  tdg _gate_q_5;
  r_5116900080(5.7469365169600355, 3.2962895476791134) _gate_q_17;
  sxdg _gate_q_5;
  r_5116895760(5.686949464815569, 3.2283672797183476) _gate_q_15;
  ecr _gate_q_7, _gate_q_1;
  tdg _gate_q_16;
  sdg _gate_q_0;
  csx _gate_q_12, _gate_q_14;
  r_5116899792(0.8387466278391381, 3.205073262767339) _gate_q_11;
  iswap _gate_q_3, _gate_q_9;
  ryy_5116901616(5.7948091648476305) _gate_q_17, _gate_q_10;
  cu3_5116901040(2.705452418256829, 3.404435261284863, 4.118357875060663) _gate_q_8, _gate_q_13;
  xx_minus_yy_5116899936(3.784140016859095, 0.8880861545264906) _gate_q_2, _gate_q_4;
  z _gate_q_6;
  u3(4.260567652689774, 0.6885319440341121, 5.933800853648199) _gate_q_4;
  ch _gate_q_2, _gate_q_12;
  t _gate_q_10;
  crx(1.8618076939219144) _gate_q_14, _gate_q_9;
  cs _gate_q_8, _gate_q_5;
  u1(6.056352379828986) _gate_q_0;
  crz(4.593597067224892) _gate_q_15, _gate_q_13;
  U(3.0081726846961474, 3.2562557751030283, 5.239366390927159) _gate_q_17;
  csdg _gate_q_7, _gate_q_11;
  iswap _gate_q_6, _gate_q_1;
  cu1_5116895472(5.882384356201555) _gate_q_3, _gate_q_16;
  xx_minus_yy_5116899744(4.6303377515171125, 0.7861197024240423) _gate_q_13, _gate_q_9;
  rzx_5116890096(3.135559499293673) _gate_q_2, _gate_q_15;
  dcx _gate_q_0, _gate_q_14;
  h _gate_q_4;
  x _gate_q_17;
  p(1.8589725094800214) _gate_q_6;
  rzx_5116899696(5.458479553695107) _gate_q_8, _gate_q_12;
  r_5116899168(0.3949471095777634, 1.8624277009763799) _gate_q_1;
  u3(5.5012055546003715, 3.3792177778197674, 2.6588021155036032) _gate_q_11;
  r_5116899456(4.535645375530935, 5.103537904689227) _gate_q_7;
  u3(4.917446088074618, 5.831015148682664, 2.716819625221608) _gate_q_3;
  rx(0.47635071745757585) _gate_q_10;
  rxx_5116898688(0.47146738622058726) _gate_q_5, _gate_q_16;
  cry(1.6842453371160444) _gate_q_3, _gate_q_2;
  id _gate_q_8;
  cx _gate_q_7, _gate_q_10;
  ch _gate_q_12, _gate_q_15;
  s _gate_q_14;
  cp(4.409983880835059) _gate_q_11, _gate_q_6;
  cs _gate_q_0, _gate_q_5;
  iswap _gate_q_13, _gate_q_1;
  u1(2.9330376607192594) _gate_q_17;
  cx _gate_q_16, _gate_q_9;
  r_5116899600(3.8553504248529826, 2.7017109826383874) _gate_q_4;
  xx_minus_yy_5116902672(5.836062430913267, 0.266696978126996) _gate_q_10, _gate_q_9;
  x _gate_q_15;
  u1(0.5475125618790169) _gate_q_2;
  rxx_5116899408(1.2343120914279178) _gate_q_17, _gate_q_14;
  cu1_5116903008(1.9087587441131528) _gate_q_3, _gate_q_7;
  cu1_5116899552(4.85555791106423) _gate_q_13, _gate_q_4;
  sx _gate_q_6;
  ryy_5116902336(1.2510351857716209) _gate_q_12, _gate_q_5;
  sxdg _gate_q_16;
  rz(2.095602162784398) _gate_q_1;
  h _gate_q_8;
  x _gate_q_11;
  u3(3.3677450502783097, 2.2971192674528007, 1.6732833298305516) _gate_q_0;
  xx_minus_yy_5116902096(0.05522314628994525, 3.534395946627302) _gate_q_17, _gate_q_6;
  rx(2.2407799290608463) _gate_q_15;
  sxdg _gate_q_13;
  ryy_5116902768(5.565497415554229) _gate_q_14, _gate_q_5;
  u2(3.9418616280827807, 0.8447051647313155) _gate_q_11;
  xx_minus_yy_5116892736(1.3140788990288443, 5.912209059920851) _gate_q_0, _gate_q_3;
  rx(5.410934745100733) _gate_q_2;
  cz _gate_q_1, _gate_q_8;
  csx _gate_q_4, _gate_q_16;
  p(2.720755067829442) _gate_q_12;
  y _gate_q_7;
  u2(4.902210127103985, 0.8111567922458742) _gate_q_9;
  U(2.0236826405899606, 0.39584487323898304, 3.227758460276583) _gate_q_10;
  cs _gate_q_7, _gate_q_1;
  ry(0.08378428991335549) _gate_q_6;
  x _gate_q_12;
  cp(0.26882205943037285) _gate_q_9, _gate_q_17;
  rxx_5116893216(5.524012529860602) _gate_q_5, _gate_q_0;
  u1(5.871499629990243) _gate_q_2;
  p(5.002260430823439) _gate_q_3;
  xx_minus_yy_5116893072(0.21092743910186706, 3.0843656536120143) _gate_q_8, _gate_q_10;
  h _gate_q_13;
  rxx_5116901136(2.858670572975179) _gate_q_16, _gate_q_4;
  rxx_5116892928(5.067368092298747) _gate_q_15, _gate_q_14;
  p(2.5315049314078006) _gate_q_11;
}
gate xx_plus_yy_5116900272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.4838765099406466) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.9647763772840185) _gate_q_1;
  ry(-1.9647763772840185) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.4838765099406466) _gate_q_0;
}
gate cu3_5116899888(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.602187863630628) _gate_q_0;
  u1(0.6594325357797175) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9541269310258123, 0, -1.602187863630628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9541269310258123, 0.9427553278509104, 0) _gate_q_1;
}
gate ryy_5116892496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.023313475134397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116895424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9556809376060693) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9556809376060693) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9556809376060693) _gate_q_1;
}
gate cu3_5116889328(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.213380584248356) _gate_q_0;
  u1(-0.5094470474104706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8777692587239565, 0, -4.213380584248356) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8777692587239565, 4.722827631658827, 0) _gate_q_1;
}
gate rzx_5116900896(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3848858261439407) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5116892064(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8651409804002292) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8651409804002292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8651409804002292) _gate_q_1;
}
gate cu1_5116893312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.07487286338312212) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.07487286338312212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.07487286338312212) _gate_q_1;
}
gate xx_minus_yy_5116888656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.266472090766509) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.103654334121289) _gate_q_0;
  ry(-3.103654334121289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.266472090766509) _gate_q_1;
}
gate ryy_5116891584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2542297499927026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5116892208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.5023627784958276, 1.3739593675837618, -1.3739593675837618) _gate_q_0;
}
gate xx_plus_yy_5116891056(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9991335199104021) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3345860760771582) _gate_q_1;
  ry(-1.3345860760771582) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9991335199104021) _gate_q_0;
}
gate rzz_5116894656(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.033216356372714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5116900800(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.424191567497457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5116901808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9305883221985248) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3636663566262657) _gate_q_1;
  ry(-1.3636663566262657) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9305883221985248) _gate_q_0;
}
gate xx_minus_yy_5116900848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.581738289341483) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.3418429202821305) _gate_q_0;
  ry(-0.3418429202821305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.581738289341483) _gate_q_1;
}
gate xx_minus_yy_5116901424(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.290701346475878) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.455619527947735) _gate_q_0;
  ry(-2.455619527947735) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.290701346475878) _gate_q_1;
}
gate ryy_5116890816(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4488319823675029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5116891152(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.624863587507245) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.739250988140498) _gate_q_0;
  ry(-2.739250988140498) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.624863587507245) _gate_q_1;
}
gate rxx_5116898880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.527877730433678) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116891200(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.78503138914129) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116888704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0002132719643644) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.0647674204001139) _gate_q_1;
  ry(-0.0647674204001139) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0002132719643644) _gate_q_0;
}
gate xx_plus_yy_5106572592(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3626506459519323) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1405767918776548) _gate_q_1;
  ry(-1.1405767918776548) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3626506459519323) _gate_q_0;
}
gate rxx_5106572256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1942918690859567) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5106571680(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.564965898549801) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5106577056(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.4640785257446266, 1.4790686972136706, -1.4790686972136706) _gate_q_0;
}
gate ryy_5106566400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.599341036799171) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5106580608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1060312263177847) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2121807163020901) _gate_q_0;
  ry(-1.2121807163020901) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1060312263177847) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  xx_plus_yy_5116900272(3.929552754568037, 3.4838765099406466) _gate_q_8, _gate_q_17;
  cu(2.4272260136382116, 4.140774697784393, 3.2069716270229702, 0.8357535876799782) _gate_q_13, _gate_q_1;
  cu3_5116899888(3.9082538620516245, 0.9427553278509104, 2.2616203994103454) _gate_q_2, _gate_q_11;
  ryy_5116892496(4.023313475134397) _gate_q_15, _gate_q_9;
  sdg _gate_q_10;
  crx(1.6596744442921458) _gate_q_16, _gate_q_4;
  t _gate_q_0;
  cu1_5116895424(5.911361875212139) _gate_q_14, _gate_q_3;
  cu3_5116889328(3.755538517447913, 4.722827631658827, 3.703933536837886) _gate_q_5, _gate_q_7;
  U(5.349773558637838, 4.508977064100161, 3.572855510606982) _gate_q_6;
  u2(3.2927674868961043, 1.2066012373548953) _gate_q_12;
  rzx_5116900896(1.3848858261439407) _gate_q_13, _gate_q_0;
  crz(3.4298449281637153) _gate_q_16, _gate_q_2;
  u1(5.6594067561539925) _gate_q_5;
  sxdg _gate_q_8;
  dcx _gate_q_11, _gate_q_4;
  cu1_5116892064(3.7302819608004585) _gate_q_17, _gate_q_7;
  swap _gate_q_15, _gate_q_1;
  u1(4.830342395208692) _gate_q_10;
  cu1_5116893312(0.14974572676624423) _gate_q_14, _gate_q_3;
  tdg _gate_q_6;
  ry(4.872408075760595) _gate_q_9;
  id _gate_q_12;
  u2(2.085181927613197, 2.2354402510584164) _gate_q_2;
  rz(5.128662844156924) _gate_q_15;
  cy _gate_q_9, _gate_q_8;
  u2(5.804574957939989, 5.940671481407261) _gate_q_12;
  sdg _gate_q_4;
  u2(1.086829190531861, 0.7741144998389095) _gate_q_13;
  cz _gate_q_10, _gate_q_1;
  cz _gate_q_0, _gate_q_7;
  z _gate_q_5;
  u3(5.49204781177706, 2.809232914039131, 5.325553027011479) _gate_q_14;
  U(1.3486599477989614, 1.0264352495018447, 5.523950756346993) _gate_q_11;
  p(3.12509760001445) _gate_q_6;
  cu(4.668075725380814, 2.8359627017276448, 6.185052468043587, 3.3518095924176974) _gate_q_17, _gate_q_3;
  id _gate_q_16;
  dcx _gate_q_0, _gate_q_9;
  iswap _gate_q_6, _gate_q_10;
  cu(2.109201933574966, 1.910548871496168, 5.5840662787930695, 5.790278620638312) _gate_q_12, _gate_q_4;
  ecr _gate_q_13, _gate_q_11;
  xx_minus_yy_5116888656(6.207308668242578, 4.266472090766509) _gate_q_17, _gate_q_3;
  ry(1.8168682999128152) _gate_q_15;
  cry(1.2611265174937691) _gate_q_5, _gate_q_2;
  x _gate_q_8;
  x _gate_q_1;
  swap _gate_q_16, _gate_q_7;
  u2(3.169250737396445, 1.8332759699853571) _gate_q_14;
  u1(3.870871245007059) _gate_q_4;
  u1(2.3177169930918065) _gate_q_9;
  rz(0.789208868790971) _gate_q_3;
  ryy_5116891584(3.2542297499927026) _gate_q_1, _gate_q_12;
  r_5116892208(3.5023627784958276, 2.9447556943786584) _gate_q_16;
  h _gate_q_0;
  u3(1.2815802534908296, 5.516493637809057, 4.5950109230145) _gate_q_5;
  y _gate_q_10;
  U(4.493482716385041, 4.891842964879356, 3.300663420065483) _gate_q_6;
  ch _gate_q_7, _gate_q_14;
  xx_plus_yy_5116891056(2.6691721521543164, 1.9991335199104021) _gate_q_17, _gate_q_2;
  rz(1.4281794721586054) _gate_q_8;
  iswap _gate_q_13, _gate_q_11;
  y _gate_q_15;
  s _gate_q_3;
  rzz_5116894656(5.033216356372714) _gate_q_7, _gate_q_13;
  ry(0.8600393271497989) _gate_q_10;
  tdg _gate_q_5;
  csdg _gate_q_9, _gate_q_12;
  rxx_5116900800(5.424191567497457) _gate_q_1, _gate_q_2;
  tdg _gate_q_15;
  xx_plus_yy_5116901808(2.7273327132525313, 0.9305883221985248) _gate_q_8, _gate_q_14;
  xx_minus_yy_5116900848(0.683685840564261, 5.581738289341483) _gate_q_11, _gate_q_6;
  sdg _gate_q_17;
  tdg _gate_q_4;
  sxdg _gate_q_0;
  y _gate_q_16;
  ecr _gate_q_2, _gate_q_5;
  xx_minus_yy_5116901424(4.91123905589547, 5.290701346475878) _gate_q_13, _gate_q_8;
  cp(1.9700817756903262) _gate_q_6, _gate_q_3;
  u2(5.641908817580213, 3.8349433810161453) _gate_q_15;
  sdg _gate_q_12;
  csx _gate_q_10, _gate_q_11;
  ryy_5116890816(1.4488319823675029) _gate_q_7, _gate_q_16;
  ch _gate_q_0, _gate_q_4;
  xx_minus_yy_5116891152(5.478501976280996, 5.624863587507245) _gate_q_17, _gate_q_1;
  ecr _gate_q_14, _gate_q_9;
  rxx_5116898880(3.527877730433678) _gate_q_15, _gate_q_3;
  rzz_5116891200(1.78503138914129) _gate_q_9, _gate_q_7;
  y _gate_q_10;
  rx(1.3495660116714023) _gate_q_17;
  dcx _gate_q_4, _gate_q_8;
  y _gate_q_6;
  rz(2.1296982850171147) _gate_q_5;
  tdg _gate_q_2;
  rx(2.2022046306114884) _gate_q_13;
  xx_plus_yy_5116888704(0.1295348408002278, 3.0002132719643644) _gate_q_12, _gate_q_14;
  cs _gate_q_1, _gate_q_16;
  sx _gate_q_0;
  u3(5.943322158976046, 1.3207190027789448, 1.9114555064368854) _gate_q_11;
  xx_plus_yy_5106572592(2.2811535837553096, 2.3626506459519323) _gate_q_5, _gate_q_0;
  csdg _gate_q_10, _gate_q_17;
  y _gate_q_2;
  ecr _gate_q_16, _gate_q_4;
  crz(6.237682974080845) _gate_q_8, _gate_q_3;
  cry(4.881046452727692) _gate_q_6, _gate_q_7;
  ry(3.144019695373093) _gate_q_14;
  ry(0.40510113773516065) _gate_q_11;
  y _gate_q_12;
  csdg _gate_q_1, _gate_q_13;
  id _gate_q_9;
  s _gate_q_15;
  rxx_5106572256(1.1942918690859567) _gate_q_16, _gate_q_0;
  id _gate_q_10;
  rxx_5106571680(4.564965898549801) _gate_q_1, _gate_q_14;
  crx(5.371559642911977) _gate_q_8, _gate_q_3;
  r_5106577056(0.4640785257446266, 3.049865024008567) _gate_q_6;
  h _gate_q_5;
  u2(2.362254568048647, 3.411182180124556) _gate_q_17;
  ryy_5106566400(4.599341036799171) _gate_q_15, _gate_q_13;
  crz(0.27628415436937004) _gate_q_7, _gate_q_4;
  U(2.5803970728904324, 2.4166273784691645, 2.639208215119935) _gate_q_2;
  xx_minus_yy_5106580608(2.4243614326041802, 3.1060312263177847) _gate_q_9, _gate_q_11;
  tdg _gate_q_12;
}