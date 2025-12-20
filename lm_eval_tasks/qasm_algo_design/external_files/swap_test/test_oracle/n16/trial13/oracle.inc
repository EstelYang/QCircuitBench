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
gate cu3_5073845040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3304936440997372) _gate_q_0;
  u1(-0.7717792493229919) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.30452061520729923, 0, -2.3304936440997372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.30452061520729923, 3.1022728934227293, 0) _gate_q_1;
}
gate r_5073830784(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8110493960491738, 1.238342025848799, -1.238342025848799) _gate_q_0;
}
gate r_5073842064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.119162496762201, 2.799800189753258, -2.799800189753258) _gate_q_0;
}
gate ryy_5073841584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.915034841759769) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073845424(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.231550109922277) _gate_q_0;
  u1(-0.5339661304456138) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.898485865200096, 0, -5.231550109922277) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.898485865200096, 5.765516240367891, 0) _gate_q_1;
}
gate cu1_5073844560(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.21916902273436303) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.21916902273436303) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.21916902273436303) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5073836208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6363055480926444) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.966992292253467) _gate_q_1;
  ry(-0.966992292253467) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6363055480926444) _gate_q_0;
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
gate r_5073833952(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1847031001398074, 2.326949566777184, -2.326949566777184) _gate_q_0;
}
gate xx_plus_yy_5073842784(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.187754821519974) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2929747489269683) _gate_q_1;
  ry(-1.2929747489269683) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.187754821519974) _gate_q_0;
}
gate cu1_5073836592(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.44351139190970235) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.44351139190970235) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.44351139190970235) _gate_q_1;
}
gate cu1_5073840288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6567882144557984) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6567882144557984) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6567882144557984) _gate_q_1;
}
gate rxx_5073840048(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10093299208780648) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5073834672(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.064261886890053) _gate_q_0;
  u1(0.11399783063455404) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.998779133095929, 0, -2.064261886890053) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.998779133095929, 1.950264056255499, 0) _gate_q_1;
}
gate rxx_5073831216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.23555019225735865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5073831408(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.325137734221363) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5073832704(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6481343798332844) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5073836544(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7467738014693865) _gate_q_0;
  u1(2.018152403941182) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.16402219794708267, 0, -2.7467738014693865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.16402219794708267, 0.7286213975282047, 0) _gate_q_1;
}
gate cu3_5073839232(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7806641965165624) _gate_q_0;
  u1(0.825576660569011) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.216195882266729, 0, -2.7806641965165624) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.216195882266729, 1.9550875359475512, 0) _gate_q_1;
}
gate ryy_5073837024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.947120952915776) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5073839712(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.3394761543259904) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7067031784176565) _gate_q_0;
  ry(-1.7067031784176565) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.3394761543259904) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate xx_minus_yy_5073842736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.895143639178416) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.317283213251145) _gate_q_0;
  ry(-1.317283213251145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.895143639178416) _gate_q_1;
}
gate rzx_5073843744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6721714061915662) _gate_q_1;
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
gate ryy_5072320320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4717527744484857) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5072307264(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.845117362143478) _gate_q_0;
  u1(1.1291027767116635) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.677550776422705, 0, -3.845117362143478) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.677550776422705, 2.7160145854318145, 0) _gate_q_1;
}
gate r_5072306496(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.462793535370826, 0.35385782553191936, -0.35385782553191936) _gate_q_0;
}
gate rzz_5072318544(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.66819529228954) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072316672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2321767503901557, 2.3877511658546773, -2.3877511658546773) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  cu(4.1681161589842075, 6.241392584391044, 3.9586412398908077, 5.6129440839024385) _gate_q_15, _gate_q_1;
  csx _gate_q_4, _gate_q_12;
  cx _gate_q_8, _gate_q_14;
  swap _gate_q_2, _gate_q_3;
  rz(2.7964172046527933) _gate_q_10;
  U(3.2551638958251323, 2.2852724657752344, 0.39191093736944205) _gate_q_9;
  u2(1.6775864626061738, 5.557108972283661) _gate_q_6;
  cu3_5073845040(0.6090412304145985, 3.1022728934227293, 1.5587143947767454) _gate_q_7, _gate_q_11;
  r_5073830784(0.8110493960491738, 2.8091383526436955) _gate_q_5;
  swap _gate_q_13, _gate_q_0;
  x _gate_q_10;
  cu(5.071884155695743, 0.8604770165928717, 1.556638436010346, 4.884324619972899) _gate_q_7, _gate_q_6;
  y _gate_q_9;
  cx _gate_q_2, _gate_q_11;
  sdg _gate_q_15;
  ry(4.511233275799642) _gate_q_1;
  u3(4.757112630992393, 6.161652692791516, 6.08356502634549) _gate_q_14;
  r_5073842064(6.119162496762201, 4.370596516548154) _gate_q_13;
  ryy_5073841584(5.915034841759769) _gate_q_8, _gate_q_0;
  cu(3.3840687715993534, 3.898628912396265, 3.228014980123633, 0.7550785987987518) _gate_q_12, _gate_q_5;
  cu3_5073845424(3.796971730400192, 5.765516240367891, 4.697583979476663) _gate_q_3, _gate_q_4;
  cp(0.9643023008111307) _gate_q_10, _gate_q_5;
  cu1_5073844560(0.43833804546872607) _gate_q_6, _gate_q_14;
  ry(1.2785425847877305) _gate_q_1;
  xx_plus_yy_5073836208(1.933984584506934, 0.6363055480926444) _gate_q_12, _gate_q_7;
  p(3.602767746974874) _gate_q_8;
  ecr _gate_q_4, _gate_q_3;
  x _gate_q_11;
  r_5073833952(2.1847031001398074, 3.8977458935720803) _gate_q_9;
  x _gate_q_13;
  y _gate_q_15;
  xx_plus_yy_5073842784(2.5859494978539366, 5.187754821519974) _gate_q_2, _gate_q_0;
  u3(1.9716993508423055, 0.4193260050798941, 3.157313197971223) _gate_q_13;
  cu1_5073836592(0.8870227838194047) _gate_q_6, _gate_q_0;
  cry(4.833500923962921) _gate_q_7, _gate_q_2;
  sdg _gate_q_10;
  cu1_5073840288(3.3135764289115968) _gate_q_5, _gate_q_8;
  rxx_5073840048(0.10093299208780648) _gate_q_4, _gate_q_3;
  cu3_5073834672(1.997558266191858, 1.950264056255499, 2.178259717524607) _gate_q_15, _gate_q_11;
  rz(2.700293163466395) _gate_q_1;
  rxx_5073831216(0.23555019225735865) _gate_q_9, _gate_q_12;
  tdg _gate_q_14;
  p(0.9111390213148767) _gate_q_15;
  ryy_5073831408(4.325137734221363) _gate_q_8, _gate_q_2;
  crz(5.58949026378439) _gate_q_10, _gate_q_0;
  rz(3.351265060231974) _gate_q_1;
  cz _gate_q_13, _gate_q_4;
  ryy_5073832704(1.6481343798332844) _gate_q_12, _gate_q_14;
  cry(2.852259169096399) _gate_q_7, _gate_q_5;
  id _gate_q_11;
  U(6.256423901435682, 5.2603630025536745, 5.437454574305285) _gate_q_6;
  cu3_5073836544(0.32804439589416534, 0.7286213975282047, 4.7649262054105685) _gate_q_9, _gate_q_3;
  cu3_5073839232(4.432391764533458, 1.9550875359475512, 3.6062408570855733) _gate_q_7, _gate_q_12;
  ch _gate_q_8, _gate_q_2;
  sxdg _gate_q_14;
  ryy_5073837024(5.947120952915776) _gate_q_1, _gate_q_0;
  h _gate_q_9;
  rz(3.2333513214483647) _gate_q_11;
  id _gate_q_13;
  x _gate_q_10;
  csdg _gate_q_3, _gate_q_5;
  xx_minus_yy_5073839712(3.413406356835313, 0.3394761543259904) _gate_q_6, _gate_q_4;
  tdg _gate_q_15;
  t _gate_q_14;
  cu(4.559596748205006, 0.6926614878440145, 5.439034974415448, 0.8238638373155435) _gate_q_12, _gate_q_4;
  crx(1.3436072226852147) _gate_q_8, _gate_q_7;
  dcx _gate_q_2, _gate_q_6;
  sxdg _gate_q_15;
  rz(2.801879075483644) _gate_q_9;
  dcx _gate_q_0, _gate_q_13;
  ry(1.7061093836543368) _gate_q_1;
  ch _gate_q_5, _gate_q_10;
  u2(3.8694601118309575, 2.9543172838711667) _gate_q_3;
  u2(2.5264773723675744, 1.3684760644812561) _gate_q_11;
  xx_minus_yy_5073842736(2.63456642650229, 3.895143639178416) _gate_q_12, _gate_q_2;
  rzx_5073843744(0.6721714061915662) _gate_q_6, _gate_q_8;
  ecr _gate_q_4, _gate_q_7;
  ch _gate_q_9, _gate_q_15;
  ecr _gate_q_0, _gate_q_5;
  csdg _gate_q_10, _gate_q_11;
  cp(2.1120790471160475) _gate_q_1, _gate_q_14;
  cry(1.3049729973671143) _gate_q_13, _gate_q_3;
  iswap _gate_q_1, _gate_q_13;
  cp(2.150819799608583) _gate_q_6, _gate_q_0;
  cz _gate_q_3, _gate_q_10;
  ryy_5072320320(2.4717527744484857) _gate_q_11, _gate_q_7;
  id _gate_q_5;
  cu3_5072307264(3.35510155284541, 2.7160145854318145, 4.9742201388551415) _gate_q_2, _gate_q_14;
  ch _gate_q_8, _gate_q_15;
  ecr _gate_q_9, _gate_q_4;
  r_5072306496(4.462793535370826, 1.924654152326816) _gate_q_12;
  csx _gate_q_10, _gate_q_15;
  rzz_5072318544(2.66819529228954) _gate_q_3, _gate_q_8;
  cp(4.023090238229856) _gate_q_0, _gate_q_2;
  u1(5.475205155569069) _gate_q_12;
  dcx _gate_q_9, _gate_q_11;
  id _gate_q_4;
  cs _gate_q_6, _gate_q_14;
  csdg _gate_q_1, _gate_q_7;
  rz(5.862337369169736) _gate_q_13;
  r_5072316672(2.2321767503901557, 3.958547492649574) _gate_q_5;
}
gate rzx_5072321952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.82409125473073) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072321040(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.060306588131091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072314224(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.9808758481878965) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.0330190684857388) _gate_q_0;
  ry(-3.0330190684857388) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.9808758481878965) _gate_q_1;
}
gate xx_plus_yy_5072322480(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.593527280425816) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.2752887458751019) _gate_q_1;
  ry(-1.2752887458751019) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.593527280425816) _gate_q_0;
}
gate cu1_5072320464(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.249367934087584) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.249367934087584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.249367934087584) _gate_q_1;
}
gate rzz_5072610720(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.48225386543592524) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072613648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.2287822598447589) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.8498042796963714) _gate_q_1;
  ry(-0.8498042796963714) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.2287822598447589) _gate_q_0;
}
gate cu3_5072605632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.656540834859911) _gate_q_0;
  u1(-0.7527827417530335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0659465888684485, 0, -4.656540834859911) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0659465888684485, 5.409323576612945, 0) _gate_q_1;
}
gate xx_minus_yy_5072604768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.688224731956304) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8116182290652445) _gate_q_0;
  ry(-1.8116182290652445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.688224731956304) _gate_q_1;
}
gate xx_plus_yy_5072614800(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.864896547130818) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7459591764391094) _gate_q_1;
  ry(-1.7459591764391094) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.864896547130818) _gate_q_0;
}
gate rzz_5072602416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.999978737713059) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5072607024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.866106919967527) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3666509186762287) _gate_q_1;
  ry(-0.3666509186762287) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.866106919967527) _gate_q_0;
}
gate rzz_5072616240(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.2961866353731166) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072604576(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.032390622895383) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5072603376(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.9047153717119474) _gate_q_0;
  u1(-1.7197327155308617) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9629124118444796, 0, -1.9047153717119474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9629124118444796, 3.624448087242809, 0) _gate_q_1;
}
gate rzx_5072602656(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.333798024790949) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5072605392(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4992993357498575) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5072607168(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8715291599782593, 0.004988690744117896, -0.004988690744117896) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15 {
  csx _gate_q_8, _gate_q_6;
  sdg _gate_q_11;
  y _gate_q_4;
  ecr _gate_q_7, _gate_q_15;
  rzx_5072321952(1.82409125473073) _gate_q_14, _gate_q_13;
  cu(4.122302759173036, 1.5540767316488109, 2.635118351559116, 4.330409129434891) _gate_q_10, _gate_q_5;
  rx(3.281422500275317) _gate_q_0;
  t _gate_q_1;
  t _gate_q_3;
  dcx _gate_q_2, _gate_q_9;
  U(2.5606107607377195, 4.807389596253431, 2.324114164258679) _gate_q_12;
  ch _gate_q_13, _gate_q_10;
  sdg _gate_q_3;
  ry(1.3646367687122138) _gate_q_0;
  crz(3.303704463467539) _gate_q_12, _gate_q_6;
  y _gate_q_14;
  ecr _gate_q_4, _gate_q_11;
  iswap _gate_q_8, _gate_q_1;
  ecr _gate_q_9, _gate_q_2;
  s _gate_q_15;
  dcx _gate_q_5, _gate_q_7;
  rzz_5072321040(2.060306588131091) _gate_q_3, _gate_q_15;
  xx_minus_yy_5072314224(6.0660381369714775, 3.9808758481878965) _gate_q_14, _gate_q_8;
  crx(4.318289871217214) _gate_q_6, _gate_q_11;
  sxdg _gate_q_0;
  ecr _gate_q_2, _gate_q_5;
  xx_plus_yy_5072322480(2.5505774917502038, 2.593527280425816) _gate_q_13, _gate_q_4;
  csx _gate_q_12, _gate_q_10;
  cs _gate_q_9, _gate_q_7;
  sxdg _gate_q_1;
  x _gate_q_8;
  tdg _gate_q_13;
  cx _gate_q_3, _gate_q_1;
  s _gate_q_12;
  cry(5.013899360960039) _gate_q_0, _gate_q_5;
  crz(4.6362332323591575) _gate_q_4, _gate_q_15;
  h _gate_q_14;
  ecr _gate_q_10, _gate_q_7;
  cu1_5072320464(4.498735868175168) _gate_q_6, _gate_q_11;
  cry(2.628544431573104) _gate_q_2, _gate_q_9;
  U(4.962321793826328, 4.344141625243638, 0.6642304558587151) _gate_q_8;
  crx(5.168562731517087) _gate_q_6, _gate_q_11;
  u3(2.3893226431249524, 4.215346679041515, 0.16743612082506962) _gate_q_14;
  tdg _gate_q_10;
  sdg _gate_q_0;
  x _gate_q_5;
  u1(3.9119772109895505) _gate_q_9;
  rzz_5072610720(0.48225386543592524) _gate_q_7, _gate_q_1;
  ch _gate_q_4, _gate_q_2;
  u3(2.1768863137002032, 0.2477605571495088, 1.5885171073641973) _gate_q_13;
  rx(1.594909258540187) _gate_q_12;
  u1(5.3931112422967535) _gate_q_3;
  sxdg _gate_q_15;
  xx_plus_yy_5072613648(1.6996085593927428, 1.2287822598447589) _gate_q_15, _gate_q_12;
  u3(0.8821472938320176, 0.8637513984642715, 0.002641683991461302) _gate_q_2;
  cu3_5072605632(2.131893177736897, 5.409323576612945, 3.9037580931068776) _gate_q_8, _gate_q_14;
  csdg _gate_q_5, _gate_q_7;
  t _gate_q_3;
  xx_minus_yy_5072604768(3.623236458130489, 4.688224731956304) _gate_q_6, _gate_q_13;
  rz(0.8400171399342266) _gate_q_1;
  ch _gate_q_10, _gate_q_11;
  xx_plus_yy_5072614800(3.4919183528782187, 5.864896547130818) _gate_q_0, _gate_q_9;
  id _gate_q_4;
  z _gate_q_0;
  rz(5.590811407521138) _gate_q_8;
  cy _gate_q_15, _gate_q_4;
  crx(2.2774533835323956) _gate_q_6, _gate_q_7;
  u2(1.92826540475303, 4.827995311773038) _gate_q_9;
  ecr _gate_q_5, _gate_q_3;
  h _gate_q_13;
  cz _gate_q_11, _gate_q_12;
  rzz_5072602416(2.999978737713059) _gate_q_1, _gate_q_14;
  u2(5.439695455072593, 5.46565395384399) _gate_q_10;
  id _gate_q_2;
  xx_plus_yy_5072607024(0.7333018373524574, 2.866106919967527) _gate_q_13, _gate_q_1;
  t _gate_q_5;
  rzz_5072616240(1.2961866353731166) _gate_q_2, _gate_q_10;
  ch _gate_q_0, _gate_q_4;
  ry(3.072302563063152) _gate_q_11;
  rzz_5072604576(1.032390622895383) _gate_q_14, _gate_q_9;
  cu(5.943896734977625, 5.733702207350852, 5.641894023345761, 1.5134380696497898) _gate_q_8, _gate_q_7;
  dcx _gate_q_6, _gate_q_12;
  ry(5.042622533111408) _gate_q_3;
  U(6.282683103506392, 0.7033389945168884, 5.429849616730116) _gate_q_15;
  ch _gate_q_12, _gate_q_3;
  dcx _gate_q_6, _gate_q_4;
  sx _gate_q_8;
  cu3_5072603376(3.9258248236889592, 3.624448087242809, 0.18498265618108573) _gate_q_5, _gate_q_14;
  cry(2.6884893273757937) _gate_q_10, _gate_q_13;
  rz(4.507807584402795) _gate_q_15;
  rzx_5072602656(5.333798024790949) _gate_q_2, _gate_q_11;
  u3(2.9729515245051514, 5.11651219491607, 5.111657057295391) _gate_q_1;
  U(1.714540823286389, 5.812686684426456, 4.11005982480511) _gate_q_9;
  h _gate_q_0;
  h _gate_q_7;
  swap _gate_q_14, _gate_q_7;
  crz(3.98858546411074) _gate_q_3, _gate_q_10;
  ryy_5072605392(0.4992993357498575) _gate_q_1, _gate_q_6;
  r_5072607168(3.8715291599782593, 1.5757850175390145) _gate_q_8;
  cs _gate_q_11, _gate_q_0;
  cx _gate_q_2, _gate_q_9;
  u2(0.6971119576479914, 1.9295328746265734) _gate_q_12;
  swap _gate_q_4, _gate_q_5;
  dcx _gate_q_15, _gate_q_13;
}