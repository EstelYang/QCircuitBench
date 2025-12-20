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
gate rzz_5072241728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.05272903802515401) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5072245712(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.55036353718983, 3.5679659763323173, -3.5679659763323173) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate rzz_5072242016(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.6616324279789162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5072246192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6419264205995345) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.017732042789909) _gate_q_0;
  ry(-2.017732042789909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6419264205995345) _gate_q_1;
}
gate rzx_5072251472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.559015754967676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072252912(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.204449890480126) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072250128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.873667838898119) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.873667838898119) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.873667838898119) _gate_q_1;
}
gate rxx_5072243072(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9073142680477686) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072243216(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.198497935687987) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7008816112644336) _gate_q_1;
  ry(-2.7008816112644336) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.198497935687987) _gate_q_0;
}
gate rxx_5072249504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0152517088454633) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072240864(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.1906332347820054) _gate_q_0;
  u1(-1.0714376974268163) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0583933832555816, 0, -4.1906332347820054) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0583933832555816, 5.262070932208822, 0) _gate_q_1;
}
gate xx_minus_yy_5072241872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1759662161580064) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(3.020214449476187) _gate_q_0;
  ry(-3.020214449476187) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1759662161580064) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate rxx_5072245760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2801601402657325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072253296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8773552502343337, 0.6898602630305426, -0.6898602630305426) _gate_q_0;
}
gate r_5072253584(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8360646714531715, -0.7581403549887162, 0.7581403549887162) _gate_q_0;
}
gate rzx_5072251328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.1354694515195805) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  csx _gate_q_9, _gate_q_11;
  rzz_5072241728(0.05272903802515401) _gate_q_6, _gate_q_2;
  ch _gate_q_12, _gate_q_0;
  r_5072245712(0.55036353718983, 5.138762303127214) _gate_q_1;
  csdg _gate_q_7, _gate_q_13;
  csx _gate_q_8, _gate_q_4;
  ecr _gate_q_3, _gate_q_5;
  p(5.171989121528588) _gate_q_10;
  ecr _gate_q_3, _gate_q_6;
  csdg _gate_q_5, _gate_q_10;
  u3(2.019413269145582, 4.219540647930086, 2.7655238451948785) _gate_q_0;
  rzz_5072242016(0.6616324279789162) _gate_q_12, _gate_q_11;
  id _gate_q_2;
  x _gate_q_8;
  t _gate_q_7;
  sdg _gate_q_13;
  dcx _gate_q_4, _gate_q_9;
  x _gate_q_1;
  s _gate_q_12;
  cx _gate_q_6, _gate_q_4;
  swap _gate_q_13, _gate_q_9;
  xx_minus_yy_5072246192(4.035464085579818, 3.6419264205995345) _gate_q_11, _gate_q_1;
  rzx_5072251472(4.559015754967676) _gate_q_0, _gate_q_7;
  t _gate_q_3;
  rx(4.279289316396969) _gate_q_5;
  rzx_5072252912(6.204449890480126) _gate_q_2, _gate_q_10;
  u1(2.9715566412311776) _gate_q_8;
  csx _gate_q_3, _gate_q_6;
  tdg _gate_q_8;
  csx _gate_q_9, _gate_q_5;
  cu1_5072250128(5.747335677796238) _gate_q_1, _gate_q_10;
  x _gate_q_0;
  cp(3.4444093893978978) _gate_q_4, _gate_q_11;
  sxdg _gate_q_12;
  z _gate_q_7;
  sdg _gate_q_2;
  ry(1.9895562441374641) _gate_q_13;
  crz(5.014006894562043) _gate_q_5, _gate_q_3;
  rz(3.0085303208537866) _gate_q_6;
  rxx_5072243072(1.9073142680477686) _gate_q_2, _gate_q_9;
  csx _gate_q_11, _gate_q_10;
  xx_plus_yy_5072243216(5.401763222528867, 4.198497935687987) _gate_q_8, _gate_q_12;
  rxx_5072249504(2.0152517088454633) _gate_q_4, _gate_q_0;
  y _gate_q_1;
  crx(5.480516941148248) _gate_q_7, _gate_q_13;
  cu3_5072240864(6.116786766511163, 5.262070932208822, 3.119195537355189) _gate_q_5, _gate_q_8;
  cu(1.0713990720462954, 2.6412850301869812, 4.355191057683645, 4.773052800218665) _gate_q_6, _gate_q_1;
  xx_minus_yy_5072241872(6.040428898952374, 2.1759662161580064) _gate_q_4, _gate_q_9;
  y _gate_q_10;
  ry(5.612587216841846) _gate_q_2;
  iswap _gate_q_7, _gate_q_0;
  csdg _gate_q_12, _gate_q_11;
  csdg _gate_q_3, _gate_q_13;
  u3(5.393343974112658, 2.196926488593738, 1.5344303922867093) _gate_q_7;
  crx(1.3295667096635633) _gate_q_12, _gate_q_13;
  z _gate_q_4;
  ecr _gate_q_10, _gate_q_2;
  rxx_5072245760(1.2801601402657325) _gate_q_6, _gate_q_8;
  p(3.5826565930766936) _gate_q_9;
  csx _gate_q_3, _gate_q_0;
  cu(5.27306087883557, 5.060722099513439, 5.981976750211772, 0.4415809453260421) _gate_q_1, _gate_q_11;
  r_5072253296(0.8773552502343337, 2.260656589825439) _gate_q_5;
  r_5072253584(0.8360646714531715, 0.8126559718061803) _gate_q_11;
  ch _gate_q_12, _gate_q_7;
  cu(1.7390372977524418, 5.701750466121905, 5.457983516744257, 4.000198895453519) _gate_q_5, _gate_q_9;
  u2(3.056963349545774, 0.06159507465925807) _gate_q_13;
  rz(0.6972324243561058) _gate_q_3;
  csx _gate_q_6, _gate_q_10;
  u3(2.0002760439086624, 1.6237618706190382, 1.3951531087941889) _gate_q_2;
  sx _gate_q_4;
  ecr _gate_q_1, _gate_q_8;
  p(6.038452015750041) _gate_q_0;
  id _gate_q_6;
  rx(5.018251557127219) _gate_q_10;
  csdg _gate_q_13, _gate_q_8;
  csdg _gate_q_3, _gate_q_11;
  dcx _gate_q_7, _gate_q_9;
  rzx_5072251328(4.1354694515195805) _gate_q_0, _gate_q_2;
  p(5.085441096381782) _gate_q_4;
  cu(4.826836434791642, 0.285892921952734, 1.3623880937944992, 5.6095512832429355) _gate_q_12, _gate_q_5;
  U(3.236145333983524, 0.4494237330662583, 6.146099725130311) _gate_q_1;
  csdg _gate_q_0, _gate_q_4;
  sxdg _gate_q_11;
  tdg _gate_q_3;
  u3(3.48979824403547, 6.110865929871658, 4.223761392294553) _gate_q_1;
  h _gate_q_5;
  swap _gate_q_2, _gate_q_6;
  dcx _gate_q_8, _gate_q_9;
  cx _gate_q_7, _gate_q_13;
  tdg _gate_q_12;
  U(3.0140007442558376, 1.562051301208958, 0.961641977972739) _gate_q_10;
}
gate r_5074359152(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.1567600569708834, 2.1094263824608115, -2.1094263824608115) _gate_q_0;
}
gate cu1_5074357808(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.2940897763921264) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.2940897763921264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.2940897763921264) _gate_q_1;
}
gate ryy_5074357568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0566251920979433) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5074355456(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.996864047170763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074356272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.713523788728187) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7595593844928255) _gate_q_1;
  ry(-2.7595593844928255) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.713523788728187) _gate_q_0;
}
gate ryy_5074362272(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.876411326897398) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5067865312(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3748285864546042) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3748285864546042) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3748285864546042) _gate_q_1;
}
gate r_5067863200(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.655991329810257, -0.7854112786467672, 0.7854112786467672) _gate_q_0;
}
gate cu3_5067860512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.488679110034952) _gate_q_0;
  u1(1.0482030193372471) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9167782465805927, 0, -2.488679110034952) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9167782465805927, 1.4404760906977052, 0) _gate_q_1;
}
gate r_4989252912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.8408754253184405, -0.9826469848797901, 0.9826469848797901) _gate_q_0;
}
gate cu1_5074259360(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.205403342760026) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.205403342760026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.205403342760026) _gate_q_1;
}
gate cu1_5074268624(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.0668127354539314) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.0668127354539314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.0668127354539314) _gate_q_1;
}
gate xx_minus_yy_5074268144(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.7590214529524175) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6525491963930029) _gate_q_0;
  ry(-0.6525491963930029) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.7590214529524175) _gate_q_1;
}
gate rzz_5074256000(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.201542356087214) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074267280(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.9047591899805463) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074267088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.468981761365319, 1.8633508727022998, -1.8633508727022998) _gate_q_0;
}
gate xx_plus_yy_5074270640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.6905418495145) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.994458016709646) _gate_q_1;
  ry(-2.994458016709646) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.6905418495145) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu3_5074270256(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8873056961748995) _gate_q_0;
  u1(1.1420665628980604) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.025655691949059044, 0, -3.8873056961748995) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.025655691949059044, 2.745239133276839, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  r_5074359152(2.1567600569708834, 3.680222709255708) _gate_q_6;
  y _gate_q_5;
  ry(5.182162993582565) _gate_q_9;
  sdg _gate_q_8;
  cu1_5074357808(2.588179552784253) _gate_q_4, _gate_q_1;
  u1(2.51690552270755) _gate_q_12;
  tdg _gate_q_7;
  crx(0.9091104986969224) _gate_q_13, _gate_q_3;
  ryy_5074357568(3.0566251920979433) _gate_q_10, _gate_q_11;
  x _gate_q_2;
  u3(5.071038490203075, 3.6281772670561865, 0.4492453592139702) _gate_q_0;
  rx(3.202521441895696) _gate_q_5;
  dcx _gate_q_0, _gate_q_11;
  u3(0.4492461898887532, 0.32706186665207154, 1.9589790188980072) _gate_q_1;
  sx _gate_q_7;
  ch _gate_q_2, _gate_q_12;
  y _gate_q_4;
  u1(2.5310886794697263) _gate_q_10;
  iswap _gate_q_3, _gate_q_8;
  iswap _gate_q_13, _gate_q_9;
  p(6.155563976243505) _gate_q_6;
  ryy_5074355456(5.996864047170763) _gate_q_10, _gate_q_8;
  u3(0.9472244009499001, 0.785704422500352, 5.52977646301383) _gate_q_4;
  x _gate_q_2;
  csdg _gate_q_5, _gate_q_6;
  crz(2.4174903962502845) _gate_q_9, _gate_q_3;
  tdg _gate_q_7;
  xx_plus_yy_5074356272(5.519118768985651, 2.713523788728187) _gate_q_11, _gate_q_0;
  t _gate_q_12;
  cp(1.0616369795613232) _gate_q_1, _gate_q_13;
  sx _gate_q_4;
  ryy_5074362272(4.876411326897398) _gate_q_3, _gate_q_10;
  tdg _gate_q_7;
  s _gate_q_0;
  t _gate_q_12;
  ry(5.350374544322472) _gate_q_2;
  iswap _gate_q_1, _gate_q_11;
  sdg _gate_q_6;
  ecr _gate_q_5, _gate_q_9;
  u2(3.5206409026892835, 2.4071938447974888) _gate_q_13;
  x _gate_q_8;
  rx(3.1485471430363066) _gate_q_4;
  cu1_5067865312(0.7496571729092084) _gate_q_7, _gate_q_9;
  r_5067863200(5.655991329810257, 0.7853850481481294) _gate_q_8;
  y _gate_q_10;
  csx _gate_q_1, _gate_q_3;
  cu3_5067860512(5.833556493161185, 1.4404760906977052, 3.5368821293721995) _gate_q_6, _gate_q_2;
  r_4989252912(5.8408754253184405, 0.5881493419151065) _gate_q_13;
  x _gate_q_12;
  p(3.787669012018405) _gate_q_5;
  u3(2.428782464529223, 4.682977718977357, 0.9666424001983583) _gate_q_0;
  y _gate_q_11;
  cu1_5074259360(2.410806685520052) _gate_q_8, _gate_q_9;
  h _gate_q_10;
  cu(2.6051947028773252, 5.745158087345534, 4.834077348859166, 2.703970381193432) _gate_q_4, _gate_q_1;
  cu1_5074268624(2.133625470907863) _gate_q_11, _gate_q_0;
  crz(1.9388866120799815) _gate_q_6, _gate_q_13;
  swap _gate_q_3, _gate_q_7;
  xx_minus_yy_5074268144(1.3050983927860058, 3.7590214529524175) _gate_q_12, _gate_q_5;
  s _gate_q_2;
  rzz_5074256000(6.201542356087214) _gate_q_4, _gate_q_5;
  rxx_5074267280(2.9047591899805463) _gate_q_2, _gate_q_12;
  id _gate_q_13;
  z _gate_q_7;
  y _gate_q_6;
  r_5074267088(4.468981761365319, 3.4341471994971964) _gate_q_0;
  cx _gate_q_9, _gate_q_1;
  s _gate_q_11;
  crz(3.6095145807380753) _gate_q_8, _gate_q_3;
  U(4.549725156150878, 0.48749716890301403, 5.957836004087706) _gate_q_10;
  t _gate_q_10;
  sdg _gate_q_12;
  cy _gate_q_13, _gate_q_4;
  ch _gate_q_5, _gate_q_0;
  rx(2.82578073355545) _gate_q_7;
  rx(3.99992743905169) _gate_q_11;
  ch _gate_q_3, _gate_q_9;
  tdg _gate_q_6;
  xx_plus_yy_5074270640(5.988916033419292, 5.6905418495145) _gate_q_1, _gate_q_2;
  p(2.3866255255205178) _gate_q_8;
  sxdg _gate_q_12;
  cry(1.5696734785222097) _gate_q_3, _gate_q_6;
  csdg _gate_q_5, _gate_q_13;
  cry(2.6492640021087857) _gate_q_9, _gate_q_7;
  cz _gate_q_11, _gate_q_10;
  y _gate_q_2;
  id _gate_q_8;
  cs _gate_q_1, _gate_q_4;
  h _gate_q_0;
  u1(1.0648741473163488) _gate_q_13;
  h _gate_q_8;
  dcx _gate_q_6, _gate_q_4;
  y _gate_q_1;
  rx(2.1855390547649836) _gate_q_3;
  ch _gate_q_7, _gate_q_5;
  id _gate_q_11;
  u1(4.74215619674736) _gate_q_10;
  ch _gate_q_2, _gate_q_12;
  cu3_5074270256(0.05131138389811809, 2.745239133276839, 5.02937225907296) _gate_q_9, _gate_q_0;
}