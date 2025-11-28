gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5070801616(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4912327746163954, 0.21708815061356979, -0.21708815061356979) _gate_q_0;
}
gate cu1_5070806752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.516266547913694) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.516266547913694) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.516266547913694) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070807616(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.749429799208457) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5070800224(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.663476990768204) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070804784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.5382228366860926) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070809920(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0887696919974756) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5070806320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8103643429312446, 1.5298116251440699, -1.5298116251440699) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5070802336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2542525536463731) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070805024(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.361902064759363) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.633491264963924) _gate_q_1;
  ry(-0.633491264963924) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.361902064759363) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5070813232(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5493732244937428) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5493732244937428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5493732244937428) _gate_q_1;
}
gate cu1_5072121888(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9728502661536154) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9728502661536154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9728502661536154) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5072112144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.17969074331533574) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.17969074331533574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.17969074331533574) _gate_q_1;
}
gate cu3_5072115840(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.513163288191056) _gate_q_0;
  u1(0.7108165070269763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.056010366581084, 0, -4.513163288191056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.056010366581084, 3.80234678116408, 0) _gate_q_1;
}
gate rxx_5072116032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1882152937430748) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5072122224(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6333537838733325) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6333537838733325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6333537838733325) _gate_q_1;
}
gate xx_minus_yy_5072111184(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.192532680793161) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9372926946129738) _gate_q_0;
  ry(-1.9372926946129738) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.192532680793161) _gate_q_1;
}
gate rzx_5072117760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3570775315324515) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5072109840(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.709054035530691) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5072109888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.7182016144803316) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.3065902112811734) _gate_q_0;
  ry(-1.3065902112811734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.7182016144803316) _gate_q_1;
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
gate rzx_5072120880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.16112389773568245) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cu(2.697895793242053, 4.985055983753858, 2.4899514255200184, 2.0878170840620567) _gate_q_12, _gate_q_6;
  s _gate_q_2;
  dcx _gate_q_9, _gate_q_10;
  cry(2.4843959756439875) _gate_q_13, _gate_q_14;
  tdg _gate_q_8;
  U(5.824154125913532, 3.1512776982791895, 4.21381452064079) _gate_q_0;
  r_5070801616(1.4912327746163954, 1.7878844774084663) _gate_q_3;
  cu1_5070806752(3.032533095827388) _gate_q_7, _gate_q_5;
  csdg _gate_q_1, _gate_q_4;
  u2(3.5161626017900276, 2.740444150650913) _gate_q_11;
  rzz_5070807616(5.749429799208457) _gate_q_12, _gate_q_6;
  crz(6.156587756083298) _gate_q_3, _gate_q_7;
  rxx_5070800224(2.663476990768204) _gate_q_4, _gate_q_14;
  rxx_5070804784(3.5382228366860926) _gate_q_10, _gate_q_8;
  y _gate_q_13;
  u3(1.1981576313736173, 4.683879051501736, 3.000793293136263) _gate_q_11;
  u1(4.788328161966227) _gate_q_0;
  dcx _gate_q_9, _gate_q_5;
  cp(0.6361464317320944) _gate_q_2, _gate_q_1;
  sx _gate_q_5;
  cu(0.12219839757703597, 0.7683914787819329, 4.936891741536535, 0.9961488871898343) _gate_q_9, _gate_q_4;
  sdg _gate_q_0;
  u2(0.9552847222876387, 4.797673355933505) _gate_q_10;
  crx(5.620151241916032) _gate_q_13, _gate_q_11;
  y _gate_q_8;
  cp(1.983295339554416) _gate_q_6, _gate_q_1;
  s _gate_q_7;
  rxx_5070809920(1.0887696919974756) _gate_q_12, _gate_q_14;
  u1(2.0891199441209793) _gate_q_3;
  r_5070806320(3.8103643429312446, 3.1006079519389664) _gate_q_2;
  dcx _gate_q_8, _gate_q_4;
  swap _gate_q_0, _gate_q_9;
  sxdg _gate_q_3;
  crz(5.259623722248835) _gate_q_5, _gate_q_11;
  ryy_5070802336(1.2542525536463731) _gate_q_2, _gate_q_12;
  rz(0.23375882657169386) _gate_q_7;
  sxdg _gate_q_6;
  xx_plus_yy_5070805024(1.266982529927848, 2.361902064759363) _gate_q_14, _gate_q_13;
  sdg _gate_q_1;
  y _gate_q_10;
  cy _gate_q_12, _gate_q_6;
  cy _gate_q_13, _gate_q_1;
  ry(4.9093425165285085) _gate_q_5;
  u3(1.923189203549683, 6.019069265439922, 0.5196855177304014) _gate_q_2;
  csdg _gate_q_7, _gate_q_8;
  t _gate_q_0;
  s _gate_q_10;
  h _gate_q_14;
  cs _gate_q_11, _gate_q_9;
  cu1_5070813232(1.0987464489874856) _gate_q_3, _gate_q_4;
  y _gate_q_3;
  id _gate_q_0;
  cu1_5072121888(1.9457005323072307) _gate_q_2, _gate_q_5;
  id _gate_q_10;
  cx _gate_q_13, _gate_q_1;
  iswap _gate_q_4, _gate_q_6;
  cu1_5072112144(0.3593814866306715) _gate_q_8, _gate_q_12;
  cs _gate_q_14, _gate_q_11;
  swap _gate_q_7, _gate_q_9;
  cx _gate_q_0, _gate_q_5;
  cu(1.3795919542461552, 6.105946509068136, 0.9347461139795281, 6.055475670087338) _gate_q_10, _gate_q_14;
  cu3_5072115840(6.112020733162168, 3.80234678116408, 5.223979795218033) _gate_q_1, _gate_q_9;
  cz _gate_q_6, _gate_q_11;
  swap _gate_q_2, _gate_q_8;
  rxx_5072116032(2.1882152937430748) _gate_q_12, _gate_q_13;
  s _gate_q_4;
  iswap _gate_q_7, _gate_q_3;
  sx _gate_q_12;
  cu1_5072122224(1.266707567746665) _gate_q_14, _gate_q_2;
  sxdg _gate_q_4;
  ry(3.190320758439111) _gate_q_5;
  dcx _gate_q_11, _gate_q_10;
  h _gate_q_6;
  xx_minus_yy_5072111184(3.8745853892259476, 1.192532680793161) _gate_q_9, _gate_q_0;
  u2(2.872183368065653, 5.914822640064148) _gate_q_13;
  rx(2.922311326732) _gate_q_8;
  u1(3.790707574764839) _gate_q_3;
  rzx_5072117760(1.3570775315324515) _gate_q_1, _gate_q_7;
  p(1.8986612405114174) _gate_q_10;
  csdg _gate_q_14, _gate_q_3;
  cry(3.143777176773305) _gate_q_2, _gate_q_9;
  rzz_5072109840(3.709054035530691) _gate_q_13, _gate_q_11;
  p(2.244812594807761) _gate_q_1;
  x _gate_q_5;
  y _gate_q_7;
  h _gate_q_0;
  rx(5.754056124217773) _gate_q_8;
  sdg _gate_q_6;
  csdg _gate_q_12, _gate_q_4;
  xx_minus_yy_5072109888(2.6131804225623467, 2.7182016144803316) _gate_q_4, _gate_q_0;
  crz(5.219148236714232) _gate_q_8, _gate_q_5;
  csx _gate_q_10, _gate_q_1;
  h _gate_q_7;
  cx _gate_q_3, _gate_q_9;
  tdg _gate_q_2;
  x _gate_q_11;
  rzx_5072120880(0.16112389773568245) _gate_q_14, _gate_q_12;
  sdg _gate_q_6;
  z _gate_q_13;
}
gate rxx_5072110128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.556808596485261) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070801760(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.2646636205699178) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072111760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9350312408378985) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5154137155316225) _gate_q_1;
  ry(-0.5154137155316225) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9350312408378985) _gate_q_0;
}
gate rzx_5072122416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5154595665052832) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072123424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.162579063756181) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072116992(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.146721236853046, -0.9756085599983506, 0.9756085599983506) _gate_q_0;
}
gate xx_plus_yy_5072113248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.1565338093922115) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5551805499850161) _gate_q_1;
  ry(-0.5551805499850161) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.1565338093922115) _gate_q_0;
}
gate rzz_5072113680(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.421315149566809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072123520(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.516111560508293) _gate_q_1;
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
gate r_5072116752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7481667928919264, 4.577824922400263, -4.577824922400263) _gate_q_0;
}
gate ryy_5072122800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4009671707396008) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5072116128(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.2363080139202043) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5072112528(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4650768532833922) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072116416(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5389144613724169) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5072115072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.295748702528335) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0110001650792542) _gate_q_0;
  ry(-1.0110001650792542) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.295748702528335) _gate_q_1;
}
gate xx_plus_yy_5072125632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.804030818817293) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.1234766797472395) _gate_q_1;
  ry(-2.1234766797472395) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.804030818817293) _gate_q_0;
}
gate rzx_5072123616(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.5888225324874522) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5072456256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.718783916723658) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5072458752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.583222080455733) _gate_q_0;
  u1(2.5427836824390084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.23388248115773574, 0, -3.583222080455733) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.23388248115773574, 1.040438398016724, 0) _gate_q_1;
}
gate xx_minus_yy_5072468544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.1380769152297496) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.780465766020026) _gate_q_0;
  ry(-2.780465766020026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.1380769152297496) _gate_q_1;
}
gate xx_plus_yy_5072466672(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.493111506932798) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.46918918565719) _gate_q_1;
  ry(-2.46918918565719) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.493111506932798) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  swap _gate_q_14, _gate_q_9;
  rxx_5072110128(2.556808596485261) _gate_q_3, _gate_q_2;
  rxx_5070801760(2.2646636205699178) _gate_q_1, _gate_q_0;
  swap _gate_q_5, _gate_q_12;
  xx_plus_yy_5072111760(1.030827431063245, 0.9350312408378985) _gate_q_6, _gate_q_8;
  U(1.5531833707150318, 2.816757749563962, 0.2906990316892937) _gate_q_11;
  cx _gate_q_10, _gate_q_7;
  id _gate_q_13;
  id _gate_q_4;
  rzx_5072122416(1.5154595665052832) _gate_q_3, _gate_q_0;
  rzx_5072123424(4.162579063756181) _gate_q_12, _gate_q_13;
  sdg _gate_q_4;
  cz _gate_q_6, _gate_q_9;
  cx _gate_q_1, _gate_q_11;
  r_5072116992(5.146721236853046, 0.595187766796546) _gate_q_14;
  xx_plus_yy_5072113248(1.1103610999700322, 4.1565338093922115) _gate_q_7, _gate_q_10;
  rzz_5072113680(3.421315149566809) _gate_q_5, _gate_q_2;
  U(2.353440268556232, 5.0605006541014745, 3.608668128187994) _gate_q_8;
  rx(0.6217082068630571) _gate_q_3;
  ryy_5072123520(2.516111560508293) _gate_q_6, _gate_q_2;
  t _gate_q_11;
  sdg _gate_q_13;
  s _gate_q_5;
  ecr _gate_q_7, _gate_q_12;
  cp(5.221671805300162) _gate_q_10, _gate_q_0;
  h _gate_q_14;
  r_5072116752(0.7481667928919264, 6.14862124919516) _gate_q_9;
  ryy_5072122800(2.4009671707396008) _gate_q_1, _gate_q_4;
  y _gate_q_8;
  csx _gate_q_2, _gate_q_7;
  rzz_5072116128(3.2363080139202043) _gate_q_6, _gate_q_9;
  cs _gate_q_10, _gate_q_3;
  cy _gate_q_5, _gate_q_13;
  crz(2.5129465278879857) _gate_q_12, _gate_q_11;
  cx _gate_q_8, _gate_q_14;
  ry(5.699589963402691) _gate_q_1;
  cp(1.5421951633565623) _gate_q_4, _gate_q_0;
  tdg _gate_q_9;
  csx _gate_q_5, _gate_q_4;
  ryy_5072112528(1.4650768532833922) _gate_q_3, _gate_q_6;
  ryy_5072116416(0.5389144613724169) _gate_q_2, _gate_q_11;
  sdg _gate_q_14;
  id _gate_q_8;
  sx _gate_q_10;
  xx_minus_yy_5072115072(2.0220003301585083, 5.295748702528335) _gate_q_12, _gate_q_13;
  rz(1.3160838276067273) _gate_q_0;
  cz _gate_q_1, _gate_q_7;
  t _gate_q_6;
  s _gate_q_9;
  sx _gate_q_7;
  xx_plus_yy_5072125632(4.246953359494479, 1.804030818817293) _gate_q_10, _gate_q_4;
  x _gate_q_2;
  U(2.195958094819858, 0.6030205100233156, 3.8098981071788938) _gate_q_3;
  rzx_5072123616(0.5888225324874522) _gate_q_11, _gate_q_0;
  iswap _gate_q_1, _gate_q_13;
  sdg _gate_q_12;
  csdg _gate_q_5, _gate_q_14;
  rx(1.6427571576052191) _gate_q_8;
  U(0.7940933859029461, 1.2339433309547299, 5.759995701272307) _gate_q_9;
  ecr _gate_q_12, _gate_q_10;
  dcx _gate_q_7, _gate_q_14;
  sx _gate_q_11;
  swap _gate_q_2, _gate_q_3;
  cry(0.18716368222626162) _gate_q_1, _gate_q_4;
  rz(4.806208290396313) _gate_q_8;
  U(1.6065138840376811, 4.267063546831745, 4.706287568953702) _gate_q_0;
  U(2.4415479416066574, 0.8589498421018962, 2.4046928678757875) _gate_q_5;
  crx(1.2264861793608943) _gate_q_6, _gate_q_13;
  id _gate_q_0;
  cx _gate_q_4, _gate_q_1;
  cu(3.698177174504845, 1.034661728426982, 3.07142546458696, 0.7398830901219016) _gate_q_2, _gate_q_8;
  ecr _gate_q_5, _gate_q_10;
  cz _gate_q_11, _gate_q_14;
  u1(0.8638337725616259) _gate_q_3;
  z _gate_q_9;
  rxx_5072456256(3.718783916723658) _gate_q_12, _gate_q_7;
  iswap _gate_q_13, _gate_q_6;
  rx(2.7977829748525074) _gate_q_7;
  cs _gate_q_14, _gate_q_1;
  dcx _gate_q_2, _gate_q_12;
  rx(0.19298367378415357) _gate_q_10;
  rz(3.143323532497674) _gate_q_11;
  u3(1.5718524517136498, 5.667189677962961, 4.658087844107451) _gate_q_9;
  sx _gate_q_5;
  cu3_5072458752(0.4677649623154715, 1.040438398016724, 6.126005762894741) _gate_q_8, _gate_q_4;
  tdg _gate_q_3;
  iswap _gate_q_0, _gate_q_13;
  rx(4.9224703603186235) _gate_q_6;
  u1(4.089710201267469) _gate_q_10;
  xx_minus_yy_5072468544(5.560931532040052, 3.1380769152297496) _gate_q_11, _gate_q_6;
  cry(2.8570131712727127) _gate_q_4, _gate_q_13;
  crz(4.970592518228697) _gate_q_1, _gate_q_3;
  xx_plus_yy_5072466672(4.93837837131438, 2.493111506932798) _gate_q_8, _gate_q_5;
  x _gate_q_12;
  sx _gate_q_2;
  dcx _gate_q_7, _gate_q_9;
  u1(5.74932054467371) _gate_q_0;
  h _gate_q_14;
}