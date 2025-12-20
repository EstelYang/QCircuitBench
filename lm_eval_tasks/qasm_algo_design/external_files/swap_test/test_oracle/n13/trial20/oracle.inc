gate cu1_5072112576(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.2175299126989145) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.2175299126989145) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.2175299126989145) _gate_q_1;
}
gate cu3_5072119968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7040540935661) _gate_q_0;
  u1(1.8044438156454923) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.382664026714149, 0, -3.7040540935661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.382664026714149, 1.8996102779206079, 0) _gate_q_1;
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
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate rzx_5072115744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.0188139108881002) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5072122752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.581376268414135, 0.31733507934970895, -0.31733507934970895) _gate_q_0;
}
gate rzz_5072125728(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8590287128772427) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5072111520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.4364208601477546) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.4364208601477546) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.4364208601477546) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5072111760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.763957728049642, 2.8852625236619938, -2.8852625236619938) _gate_q_0;
}
gate cu1_5072113536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3730505393008943) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3730505393008943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3730505393008943) _gate_q_1;
}
gate rxx_5070798928(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.791365036605437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5070806368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9226415646697568) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9327230911656599) _gate_q_0;
  ry(-0.9327230911656599) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9226415646697568) _gate_q_1;
}
gate cu1_5070811120(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.17774977815169704) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.17774977815169704) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.17774977815169704) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  u3(5.428787215451222, 1.3242504925611907, 2.2556128986786277) _gate_q_5;
  cu(5.100754312126942, 5.303769046599699, 4.154886432600154, 1.6246102595907321) _gate_q_9, _gate_q_3;
  ry(4.045400474031915) _gate_q_0;
  sdg _gate_q_8;
  cu1_5072112576(4.435059825397829) _gate_q_4, _gate_q_2;
  cu3_5072119968(4.765328053428298, 1.8996102779206079, 5.508497909211592) _gate_q_11, _gate_q_1;
  crx(0.5900207468321944) _gate_q_7, _gate_q_6;
  sdg _gate_q_10;
  U(0.830539349642064, 5.602464673567638, 5.262854577197439) _gate_q_12;
  u2(0.16918223565519827, 2.220645242037636) _gate_q_4;
  crz(6.079008789992181) _gate_q_11, _gate_q_12;
  crz(0.5389989286596417) _gate_q_1, _gate_q_2;
  p(4.108241194475725) _gate_q_5;
  ry(1.5275417415682304) _gate_q_8;
  sx _gate_q_6;
  u3(6.230261865114829, 5.571656384200349, 1.5025605472682455) _gate_q_9;
  cry(4.6225905602011785) _gate_q_7, _gate_q_0;
  U(5.727880396445753, 3.781077341575913, 0.9711588378101522) _gate_q_3;
  p(5.282209580144652) _gate_q_10;
  y _gate_q_10;
  tdg _gate_q_2;
  ecr _gate_q_6, _gate_q_3;
  rz(6.018103840335066) _gate_q_12;
  rx(5.31566149831813) _gate_q_9;
  swap _gate_q_5, _gate_q_7;
  csdg _gate_q_1, _gate_q_11;
  sxdg _gate_q_0;
  sdg _gate_q_8;
  z _gate_q_4;
  t _gate_q_7;
  id _gate_q_6;
  sdg _gate_q_1;
  u1(2.6816052826647288) _gate_q_2;
  s _gate_q_12;
  u3(1.3022590041704645, 0.5476364156308277, 3.167459063875213) _gate_q_5;
  sxdg _gate_q_9;
  tdg _gate_q_0;
  ecr _gate_q_10, _gate_q_4;
  p(3.5403392659455815) _gate_q_3;
  csx _gate_q_8, _gate_q_11;
  rzx_5072115744(3.0188139108881002) _gate_q_2, _gate_q_4;
  r_5072122752(4.581376268414135, 1.8881314061446055) _gate_q_6;
  u2(4.259131747083104, 0.3532041231477984) _gate_q_8;
  swap _gate_q_11, _gate_q_9;
  id _gate_q_12;
  x _gate_q_7;
  x _gate_q_3;
  sxdg _gate_q_10;
  rzz_5072125728(0.8590287128772427) _gate_q_0, _gate_q_5;
  x _gate_q_1;
  t _gate_q_5;
  s _gate_q_12;
  rx(2.5787092770747284) _gate_q_7;
  crz(2.1827330919220658) _gate_q_8, _gate_q_9;
  ecr _gate_q_6, _gate_q_10;
  cu1_5072111520(2.872841720295509) _gate_q_0, _gate_q_3;
  h _gate_q_2;
  cs _gate_q_11, _gate_q_1;
  rz(3.9205164467710047) _gate_q_4;
  crx(5.887140831360913) _gate_q_12, _gate_q_6;
  r_5072111760(5.763957728049642, 4.45605885045689) _gate_q_4;
  cu1_5072113536(2.7461010786017885) _gate_q_2, _gate_q_11;
  sx _gate_q_1;
  ch _gate_q_3, _gate_q_7;
  cu(5.492683129287073, 2.4437797082691364, 2.5806152849522728, 5.088447008660047) _gate_q_0, _gate_q_10;
  crz(0.8065240969995392) _gate_q_9, _gate_q_5;
  rx(2.635245578354386) _gate_q_8;
  cy _gate_q_7, _gate_q_5;
  U(0.6409186904131209, 2.653650849759817, 0.2684303897195261) _gate_q_4;
  cu(3.962470115313343, 3.254977612757663, 0.15702221802437102, 5.643648534368797) _gate_q_8, _gate_q_11;
  sxdg _gate_q_2;
  z _gate_q_0;
  rxx_5070798928(1.791365036605437) _gate_q_12, _gate_q_1;
  U(3.125393524995919, 5.4615612868871555, 3.951604694518222) _gate_q_10;
  sdg _gate_q_6;
  crz(2.085437834457667) _gate_q_9, _gate_q_3;
  cu(3.822890181420558, 3.226447889946434, 0.2763001905930567, 2.110530611324572) _gate_q_6, _gate_q_1;
  U(1.7227453140011006, 0.013821195114804148, 4.760295220788327) _gate_q_3;
  p(5.154802433326677) _gate_q_0;
  id _gate_q_5;
  crx(0.07125240400740315) _gate_q_4, _gate_q_11;
  swap _gate_q_9, _gate_q_12;
  cx _gate_q_7, _gate_q_8;
  xx_minus_yy_5070806368(1.8654461823313198, 2.9226415646697568) _gate_q_10, _gate_q_2;
  sx _gate_q_2;
  tdg _gate_q_5;
  crx(5.524181621356843) _gate_q_8, _gate_q_11;
  sx _gate_q_10;
  cu1_5070811120(0.3554995563033941) _gate_q_7, _gate_q_6;
  ch _gate_q_12, _gate_q_0;
  x _gate_q_9;
  z _gate_q_4;
  U(5.531120357539176, 1.0095568312777463, 3.811947129585332) _gate_q_3;
  sdg _gate_q_1;
}
gate xx_minus_yy_5070814960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.9249635312346) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.671190703351918) _gate_q_0;
  ry(-2.671190703351918) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.9249635312346) _gate_q_1;
}
gate rxx_5070808768(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7514351459354331) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070815008(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.284421798946943) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5070806272(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.018718817970035) _gate_q_0;
  u1(1.2289326255016584) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.0024551743460318083, 0, -5.018718817970035) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.0024551743460318083, 3.789786192468376, 0) _gate_q_1;
}
gate rzx_5070806944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.395656045593965) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070800368(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.246187166874147) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7707971043452215) _gate_q_0;
  ry(-0.7707971043452215) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.246187166874147) _gate_q_1;
}
gate xx_minus_yy_5070806896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.243412554916141) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.30116675261913) _gate_q_0;
  ry(-2.30116675261913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.243412554916141) _gate_q_1;
}
gate cu3_5070810496(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8891931307660257) _gate_q_0;
  u1(-0.469487060318595) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8740638047631566, 0, -1.8891931307660257) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8740638047631566, 2.3586801910846207, 0) _gate_q_1;
}
gate xx_plus_yy_5070811552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.014535632990078) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.9658825943336514) _gate_q_1;
  ry(-0.9658825943336514) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.014535632990078) _gate_q_0;
}
gate r_5070813472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.2991249997521805, 2.8267003438509164, -2.8267003438509164) _gate_q_0;
}
gate rxx_5070800848(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4380157186913831) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070802384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.168017792246243) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5070804688(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5695995802282158) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5695995802282158) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5695995802282158) _gate_q_1;
}
gate ryy_5070799360(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.551801043148901) _gate_q_1;
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
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cx _gate_q_2, _gate_q_7;
  xx_minus_yy_5070814960(5.342381406703836, 4.9249635312346) _gate_q_8, _gate_q_3;
  cry(5.315686874625488) _gate_q_12, _gate_q_0;
  u1(0.03415272303271343) _gate_q_1;
  rxx_5070808768(0.7514351459354331) _gate_q_10, _gate_q_6;
  rx(5.211801918927973) _gate_q_5;
  cz _gate_q_9, _gate_q_11;
  z _gate_q_4;
  cry(2.7679536575209833) _gate_q_2, _gate_q_3;
  rx(2.7638273020840542) _gate_q_4;
  rx(5.283517253778763) _gate_q_10;
  cu(0.6675002995162266, 1.5732277763563225, 4.985815931787077, 0.6896772591674217) _gate_q_1, _gate_q_8;
  y _gate_q_12;
  cx _gate_q_7, _gate_q_9;
  rzz_5070815008(1.284421798946943) _gate_q_5, _gate_q_0;
  rx(3.759300739259852) _gate_q_11;
  t _gate_q_6;
  csx _gate_q_1, _gate_q_10;
  sxdg _gate_q_9;
  y _gate_q_0;
  cs _gate_q_8, _gate_q_5;
  sxdg _gate_q_2;
  z _gate_q_6;
  x _gate_q_11;
  cp(2.6167389773660648) _gate_q_3, _gate_q_12;
  cz _gate_q_4, _gate_q_7;
  y _gate_q_5;
  t _gate_q_9;
  id _gate_q_12;
  crz(5.926619366698197) _gate_q_8, _gate_q_3;
  ry(5.0947514324792085) _gate_q_0;
  cu3_5070806272(0.004910348692063617, 3.789786192468376, 6.2476514434716925) _gate_q_1, _gate_q_6;
  rzx_5070806944(4.395656045593965) _gate_q_10, _gate_q_7;
  sxdg _gate_q_4;
  xx_minus_yy_5070800368(1.541594208690443, 4.246187166874147) _gate_q_2, _gate_q_11;
  crz(2.679866595184575) _gate_q_12, _gate_q_3;
  tdg _gate_q_6;
  ch _gate_q_8, _gate_q_1;
  tdg _gate_q_4;
  t _gate_q_7;
  cy _gate_q_10, _gate_q_0;
  csx _gate_q_2, _gate_q_5;
  id _gate_q_9;
  ry(1.8724849641198476) _gate_q_11;
  u3(2.7121902417498998, 1.196431851485656, 5.851123092870917) _gate_q_1;
  u1(0.2935859406685966) _gate_q_2;
  y _gate_q_6;
  xx_minus_yy_5070806896(4.60233350523826, 5.243412554916141) _gate_q_8, _gate_q_10;
  cy _gate_q_5, _gate_q_11;
  s _gate_q_9;
  csdg _gate_q_7, _gate_q_3;
  cu3_5070810496(3.748127609526313, 2.3586801910846207, 1.4197060704474307) _gate_q_12, _gate_q_0;
  u1(3.6077254060795747) _gate_q_4;
  y _gate_q_11;
  u3(2.0360365747437545, 3.6390827151125538, 1.3229686408694972) _gate_q_8;
  z _gate_q_9;
  rz(4.09046992242568) _gate_q_4;
  sxdg _gate_q_7;
  xx_plus_yy_5070811552(1.9317651886673028, 5.014535632990078) _gate_q_12, _gate_q_2;
  tdg _gate_q_10;
  rx(5.903038389921823) _gate_q_0;
  x _gate_q_3;
  ry(2.6155297075334576) _gate_q_6;
  h _gate_q_5;
  u2(2.935380539791985, 5.433999872990119) _gate_q_1;
  sxdg _gate_q_11;
  sdg _gate_q_0;
  cp(1.4656048246061684) _gate_q_9, _gate_q_5;
  swap _gate_q_4, _gate_q_12;
  sxdg _gate_q_7;
  cry(5.24901656956115) _gate_q_2, _gate_q_3;
  x _gate_q_6;
  ch _gate_q_1, _gate_q_8;
  sdg _gate_q_10;
  ch _gate_q_3, _gate_q_0;
  r_5070813472(1.2991249997521805, 4.397496670645813) _gate_q_12;
  u3(1.3801397871990684, 1.6716724160013188, 2.353938936814779) _gate_q_8;
  cy _gate_q_6, _gate_q_1;
  rxx_5070800848(1.4380157186913831) _gate_q_5, _gate_q_11;
  id _gate_q_4;
  cu(2.9170673376646885, 2.024269078546576, 5.393364888999957, 5.973190553141912) _gate_q_10, _gate_q_9;
  rzx_5070802384(6.168017792246243) _gate_q_2, _gate_q_7;
  csdg _gate_q_10, _gate_q_2;
  rz(2.519652598788148) _gate_q_3;
  cu1_5070804688(1.1391991604564315) _gate_q_6, _gate_q_5;
  x _gate_q_4;
  t _gate_q_12;
  cp(0.27432662018819676) _gate_q_1, _gate_q_8;
  ryy_5070799360(4.551801043148901) _gate_q_7, _gate_q_9;
  iswap _gate_q_11, _gate_q_0;
}