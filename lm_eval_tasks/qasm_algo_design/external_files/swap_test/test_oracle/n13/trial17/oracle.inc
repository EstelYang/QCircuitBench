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
gate rzx_5070909664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.74109402672554) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5070901168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.87046736781622) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5070908752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7337569818221117, 4.695509262034736, -4.695509262034736) _gate_q_0;
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
gate r_5070911920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.8472346196623395, -1.0880319372538436, 1.0880319372538436) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5070907936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4125712880432895) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate cu1_5070901504(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.071178760380583) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.071178760380583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.071178760380583) _gate_q_1;
}
gate cu1_5070904672(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.8792488304491068) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.8792488304491068) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.8792488304491068) _gate_q_1;
}
gate rzz_5070900352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.9228732258656605) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5070897856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.095227943009009) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1474033806649768) _gate_q_1;
  ry(-1.1474033806649768) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.095227943009009) _gate_q_0;
}
gate rzx_5070903664(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7090467840904574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5070899968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.052912352173405) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070901120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.316195379176454, 3.733019255668478, -3.733019255668478) _gate_q_0;
}
gate xx_minus_yy_5066820640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.950186968491633) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.8276250652547312) _gate_q_0;
  ry(-1.8276250652547312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.950186968491633) _gate_q_1;
}
gate ryy_5074131024(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.69153899205896) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5066822416(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.2068499133734956, 1.7187918866748357, -1.7187918866748357) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  ecr _gate_q_1, _gate_q_4;
  cp(0.8806638620587359) _gate_q_11, _gate_q_0;
  rzx_5070909664(1.74109402672554) _gate_q_6, _gate_q_7;
  rzz_5070901168(4.87046736781622) _gate_q_12, _gate_q_5;
  crx(4.026047859533122) _gate_q_9, _gate_q_10;
  ch _gate_q_8, _gate_q_2;
  r_5070908752(0.7337569818221117, 6.266305588829632) _gate_q_3;
  z _gate_q_4;
  s _gate_q_2;
  csx _gate_q_6, _gate_q_0;
  z _gate_q_7;
  id _gate_q_5;
  s _gate_q_12;
  z _gate_q_8;
  r_5070911920(1.8472346196623395, 0.482764389541053) _gate_q_1;
  cu(5.253886592165398, 2.3940466528251823, 1.9045966029125183, 5.58648650309812) _gate_q_11, _gate_q_3;
  u2(0.23534501568612762, 4.780547164615427) _gate_q_10;
  sx _gate_q_9;
  swap _gate_q_4, _gate_q_6;
  h _gate_q_7;
  ch _gate_q_12, _gate_q_5;
  dcx _gate_q_11, _gate_q_0;
  ch _gate_q_1, _gate_q_3;
  p(2.830842336284806) _gate_q_2;
  cs _gate_q_10, _gate_q_9;
  id _gate_q_8;
  rzx_5070907936(3.4125712880432895) _gate_q_3, _gate_q_4;
  cz _gate_q_11, _gate_q_12;
  y _gate_q_0;
  swap _gate_q_6, _gate_q_1;
  cu(3.680710589400286, 4.82212030753501, 0.7089507806240479, 2.8237312906068115) _gate_q_2, _gate_q_7;
  u3(4.840140145100322, 5.310638420065837, 0.6839102703746117) _gate_q_10;
  sxdg _gate_q_9;
  rz(5.680085076476941) _gate_q_5;
  h _gate_q_8;
  cu1_5070901504(4.142357520761166) _gate_q_0, _gate_q_4;
  cu1_5070904672(3.7584976608982137) _gate_q_3, _gate_q_11;
  s _gate_q_2;
  rzz_5070900352(4.9228732258656605) _gate_q_9, _gate_q_6;
  u3(4.372757350619942, 2.473081915303193, 4.9018754076099444) _gate_q_8;
  cry(3.324061428511024) _gate_q_7, _gate_q_10;
  crx(0.9660999493259725) _gate_q_1, _gate_q_5;
  sxdg _gate_q_12;
  U(1.6755700811626186, 0.6941588449583721, 4.082993287111094) _gate_q_5;
  h _gate_q_2;
  U(5.280652358281, 1.9584225071169337, 2.450536918812835) _gate_q_12;
  t _gate_q_9;
  cs _gate_q_3, _gate_q_7;
  cp(3.9026400648078194) _gate_q_0, _gate_q_6;
  csdg _gate_q_11, _gate_q_4;
  tdg _gate_q_10;
  z _gate_q_8;
  z _gate_q_1;
  iswap _gate_q_1, _gate_q_6;
  u1(6.041654196877623) _gate_q_10;
  xx_plus_yy_5070897856(2.2948067613299536, 2.095227943009009) _gate_q_2, _gate_q_4;
  rzx_5070903664(0.7090467840904574) _gate_q_5, _gate_q_0;
  crx(1.509665791343963) _gate_q_8, _gate_q_3;
  rzx_5070899968(4.052912352173405) _gate_q_12, _gate_q_11;
  ecr _gate_q_9, _gate_q_7;
  iswap _gate_q_5, _gate_q_10;
  h _gate_q_7;
  cu(2.1259655224126472, 4.12447196954793, 0.24319199708097688, 1.6637329840378283) _gate_q_0, _gate_q_1;
  u3(3.8118340549482417, 2.2439364863353974, 2.5743974121305238) _gate_q_4;
  ch _gate_q_8, _gate_q_2;
  iswap _gate_q_6, _gate_q_11;
  u3(6.1266394707736715, 1.8988556155794378, 6.045404838183052) _gate_q_3;
  u3(0.7469601811612736, 3.8456221402039943, 5.8951179962040525) _gate_q_9;
  ry(1.1783131270828666) _gate_q_12;
  z _gate_q_0;
  sxdg _gate_q_9;
  U(0.13318010550505638, 1.16454840723762, 0.922723179262616) _gate_q_8;
  t _gate_q_3;
  s _gate_q_10;
  sx _gate_q_7;
  ry(5.599657991988481) _gate_q_2;
  h _gate_q_1;
  r_5070901120(2.316195379176454, 5.303815582463375) _gate_q_12;
  z _gate_q_6;
  xx_minus_yy_5066820640(3.6552501305094625, 5.950186968491633) _gate_q_11, _gate_q_5;
  u1(1.7936206528990963) _gate_q_4;
  csx _gate_q_12, _gate_q_9;
  z _gate_q_5;
  ryy_5074131024(4.69153899205896) _gate_q_8, _gate_q_0;
  sdg _gate_q_6;
  cx _gate_q_3, _gate_q_4;
  cy _gate_q_10, _gate_q_11;
  sxdg _gate_q_2;
  r_5066822416(3.2068499133734956, 3.2895882134697323) _gate_q_7;
  u2(0.08152725508506628, 2.614222630411114) _gate_q_1;
}
gate xx_plus_yy_5070852736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7590343614958113) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4059590468024386) _gate_q_1;
  ry(-2.4059590468024386) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7590343614958113) _gate_q_0;
}
gate ryy_5070852016(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.26836901985908024) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5070907552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.714126235213571) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.34141529729648096) _gate_q_1;
  ry(-0.34141529729648096) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.714126235213571) _gate_q_0;
}
gate cu3_5070855952(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.527241402585377) _gate_q_0;
  u1(1.6503891097334262) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5955533461751152, 0, -4.527241402585377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5955533461751152, 2.8768522928519507, 0) _gate_q_1;
}
gate xx_minus_yy_5070853936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.6988015280066455) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7349462532803606) _gate_q_0;
  ry(-2.7349462532803606) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.6988015280066455) _gate_q_1;
}
gate rxx_5070857584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.154314523025891) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5070855472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.752218381317953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5070853168(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.187320501223502) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070863248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.8764505476907125) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.17927418178270574) _gate_q_0;
  ry(-0.17927418178270574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.8764505476907125) _gate_q_1;
}
gate xx_minus_yy_5070853888(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.151908229467581) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6067384490674061) _gate_q_0;
  ry(-1.6067384490674061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.151908229467581) _gate_q_1;
}
gate rzz_5070856096(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.085894583608558) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5070852256(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.910662808775326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5072705472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.2318074400570485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5072711424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3330257692630292) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3330257692630292) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3330257692630292) _gate_q_1;
}
gate r_5072714208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6288594818756845, -1.289207272424676, 1.289207272424676) _gate_q_0;
}
gate ryy_5072700672(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.328648999065316) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5072706576(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.226670555565529) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5072702304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.39396200574226464) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.39396200574226464) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.39396200574226464) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cry(2.240133733330721) _gate_q_4, _gate_q_10;
  xx_plus_yy_5070852736(4.811918093604877, 1.7590343614958113) _gate_q_0, _gate_q_2;
  crz(1.525381783541099) _gate_q_11, _gate_q_7;
  rx(2.0238252812601067) _gate_q_3;
  ry(2.86883187050117) _gate_q_5;
  rx(1.5955703661041465) _gate_q_12;
  cs _gate_q_6, _gate_q_8;
  U(3.4043622898764725, 2.437209886233356, 3.038135463966155) _gate_q_9;
  h _gate_q_1;
  ryy_5070852016(0.26836901985908024) _gate_q_10, _gate_q_3;
  xx_plus_yy_5070907552(0.6828305945929619, 5.714126235213571) _gate_q_5, _gate_q_4;
  p(2.8312771836318906) _gate_q_11;
  cu3_5070855952(3.1911066923502305, 2.8768522928519507, 6.177630512318803) _gate_q_2, _gate_q_7;
  p(0.3571458065442542) _gate_q_6;
  ch _gate_q_12, _gate_q_9;
  crz(1.5472327397026668) _gate_q_1, _gate_q_0;
  t _gate_q_8;
  cz _gate_q_5, _gate_q_10;
  h _gate_q_12;
  ecr _gate_q_8, _gate_q_3;
  xx_minus_yy_5070853936(5.469892506560721, 2.6988015280066455) _gate_q_7, _gate_q_1;
  u3(0.9417903211810731, 3.76029883573273, 2.5885591703629838) _gate_q_4;
  rxx_5070857584(1.154314523025891) _gate_q_6, _gate_q_11;
  h _gate_q_2;
  cp(2.2822636477249088) _gate_q_9, _gate_q_0;
  rzz_5070855472(5.752218381317953) _gate_q_7, _gate_q_2;
  u3(3.0626753302757432, 0.4161455364570447, 1.8747571733791697) _gate_q_0;
  ry(2.992883283098812) _gate_q_8;
  ryy_5070853168(2.187320501223502) _gate_q_5, _gate_q_9;
  xx_minus_yy_5070863248(0.3585483635654115, 2.8764505476907125) _gate_q_12, _gate_q_11;
  xx_minus_yy_5070853888(3.2134768981348123, 2.151908229467581) _gate_q_4, _gate_q_10;
  z _gate_q_6;
  swap _gate_q_1, _gate_q_3;
  csx _gate_q_9, _gate_q_4;
  iswap _gate_q_5, _gate_q_11;
  rzz_5070856096(6.085894583608558) _gate_q_12, _gate_q_10;
  h _gate_q_3;
  x _gate_q_6;
  p(0.8955205157500713) _gate_q_0;
  csx _gate_q_7, _gate_q_2;
  rzx_5070852256(4.910662808775326) _gate_q_8, _gate_q_1;
  x _gate_q_5;
  u3(4.498369964735016, 6.035780476538989, 2.5907211480727947) _gate_q_6;
  t _gate_q_7;
  tdg _gate_q_12;
  dcx _gate_q_0, _gate_q_11;
  cx _gate_q_2, _gate_q_4;
  sx _gate_q_3;
  u1(3.5016917947202684) _gate_q_9;
  id _gate_q_1;
  rzx_5072705472(6.2318074400570485) _gate_q_8, _gate_q_10;
  s _gate_q_1;
  cp(3.8240100208735632) _gate_q_12, _gate_q_9;
  tdg _gate_q_0;
  cp(2.2551468047134327) _gate_q_11, _gate_q_6;
  rz(3.909797407941981) _gate_q_5;
  sdg _gate_q_8;
  iswap _gate_q_3, _gate_q_10;
  cy _gate_q_4, _gate_q_2;
  sx _gate_q_7;
  t _gate_q_7;
  s _gate_q_2;
  rz(0.2486638304480799) _gate_q_4;
  dcx _gate_q_11, _gate_q_3;
  cu1_5072711424(2.6660515385260584) _gate_q_1, _gate_q_0;
  p(5.32636383612162) _gate_q_8;
  cs _gate_q_10, _gate_q_6;
  cs _gate_q_12, _gate_q_9;
  tdg _gate_q_5;
  z _gate_q_3;
  ch _gate_q_11, _gate_q_6;
  r_5072714208(3.6288594818756845, 0.2815890543702207) _gate_q_4;
  ryy_5072700672(5.328648999065316) _gate_q_1, _gate_q_5;
  u2(3.0884644498872516, 0.018830475191625624) _gate_q_8;
  p(2.418948644153867) _gate_q_7;
  x _gate_q_2;
  sx _gate_q_0;
  dcx _gate_q_10, _gate_q_9;
  id _gate_q_12;
  tdg _gate_q_0;
  id _gate_q_6;
  t _gate_q_5;
  cp(2.3398437853198213) _gate_q_9, _gate_q_3;
  ryy_5072706576(4.226670555565529) _gate_q_7, _gate_q_11;
  ecr _gate_q_2, _gate_q_8;
  u1(1.7199464712994286) _gate_q_1;
  cu1_5072702304(0.7879240114845293) _gate_q_12, _gate_q_10;
  U(5.746392098641824, 5.0703666952958075, 3.6096312018939423) _gate_q_4;
}