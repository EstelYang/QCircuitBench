gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5116475824(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.4602296909581023) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5116476640(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.146783040395706) _gate_q_0;
  u1(-0.34055159913744365) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.893787802383154, 0, -1.146783040395706) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.893787802383154, 1.4873346395331497, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5116678736(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-6.184442282938501) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.772762951525289) _gate_q_0;
  ry(-2.772762951525289) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(6.184442282938501) _gate_q_1;
}
gate rzx_5116678880(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.779101521459933) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5116679024(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.8266365515056022, 2.893761113590614, -2.893761113590614) _gate_q_0;
}
gate r_5116887120(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.870833882022119, 4.6187763221064815, -4.6187763221064815) _gate_q_0;
}
gate rzz_5116887216(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.6196591535203355) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate r_5116887408(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.393866387256119, 3.7927846582234253, -3.7927846582234253) _gate_q_0;
}
gate r_5116887792(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.707534917282349, 3.109558815240857, -3.109558815240857) _gate_q_0;
}
gate rxx_5116887840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.6044753247315673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate cu3_5116888032(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.6733185361527327) _gate_q_0;
  u1(1.3410703035919942) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.727901760825538, 0, -1.6733185361527327) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.727901760825538, 0.33224823256073865, 0) _gate_q_1;
}
gate xx_plus_yy_5116888128(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.238563229919323) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.114386856810838) _gate_q_1;
  ry(-2.114386856810838) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.238563229919323) _gate_q_0;
}
gate cu3_5116888320(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.012686133502587) _gate_q_0;
  u1(2.0029168548462435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.137083133270338, 0, -4.012686133502587) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.137083133270338, 2.0097692786563437, 0) _gate_q_1;
}
gate rxx_5116888416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1107609085975882) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5116888704(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.253613877840927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5116888752(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.6627338345196314) _gate_q_0;
  u1(2.2727531778640913) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.36744342986512, 0, -3.6627338345196314) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.36744342986512, 1.3899806566555402, 0) _gate_q_1;
}
gate rzz_5116888848(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.0753606081474953) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5116888896(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.620359143032969) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5146314451585468) _gate_q_0;
  ry(-0.5146314451585468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.620359143032969) _gate_q_1;
}
gate rzz_5116889232(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.532743057120551) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rzx_5116889376(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.17475704065154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5116889424(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.3991982602279993) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  csdg _gate_q_13, _gate_q_12;
  rzz_5116475824(3.4602296909581023) _gate_q_1, _gate_q_5;
  cx _gate_q_8, _gate_q_3;
  cs _gate_q_7, _gate_q_6;
  u2(4.875540887504562, 0.9908320225940791) _gate_q_0;
  iswap _gate_q_9, _gate_q_10;
  id _gate_q_4;
  cu3_5116476640(5.787575604766308, 1.4873346395331497, 0.8062314412582624) _gate_q_11, _gate_q_2;
  s _gate_q_0;
  p(4.753325455397111) _gate_q_1;
  xx_minus_yy_5116678736(5.545525903050578, 6.184442282938501) _gate_q_13, _gate_q_5;
  cu(3.316496141508682, 1.2794540255653333, 3.1184163250738033, 5.522771106257915) _gate_q_4, _gate_q_10;
  swap _gate_q_3, _gate_q_7;
  y _gate_q_11;
  swap _gate_q_6, _gate_q_12;
  rzx_5116678880(5.779101521459933) _gate_q_9, _gate_q_2;
  s _gate_q_8;
  sdg _gate_q_1;
  r_5116679024(3.8266365515056022, 4.46455744038551) _gate_q_8;
  cu(0.4679494539946075, 4.2280796035909045, 2.100851720463669, 5.152041873817236) _gate_q_3, _gate_q_6;
  x _gate_q_10;
  x _gate_q_2;
  r_5116887120(1.870833882022119, 6.189572648901378) _gate_q_5;
  p(2.859364774676191) _gate_q_11;
  rzz_5116887216(5.6196591535203355) _gate_q_9, _gate_q_4;
  cu(3.539841713445656, 5.982242783406079, 2.4297950640259893, 4.748956755971921) _gate_q_7, _gate_q_13;
  id _gate_q_12;
  p(0.37150882373660554) _gate_q_0;
  csx _gate_q_6, _gate_q_7;
  ch _gate_q_13, _gate_q_12;
  r_5116887408(2.393866387256119, 5.363580985018322) _gate_q_0;
  cz _gate_q_2, _gate_q_1;
  cy _gate_q_11, _gate_q_10;
  cp(2.427579613624315) _gate_q_4, _gate_q_8;
  cs _gate_q_5, _gate_q_3;
  u2(4.47612266690367, 5.984784370427832) _gate_q_9;
  cs _gate_q_6, _gate_q_12;
  cp(0.9280291776784011) _gate_q_7, _gate_q_5;
  crx(0.7699923849577982) _gate_q_8, _gate_q_13;
  r_5116887792(5.707534917282349, 4.680355142035753) _gate_q_0;
  rxx_5116887840(3.6044753247315673) _gate_q_3, _gate_q_10;
  crx(5.302750327592776) _gate_q_4, _gate_q_9;
  dcx _gate_q_1, _gate_q_2;
  u1(1.0896101529986844) _gate_q_11;
  dcx _gate_q_2, _gate_q_1;
  cu3_5116888032(5.455803521651076, 0.33224823256073865, 3.014388839744727) _gate_q_12, _gate_q_10;
  cs _gate_q_9, _gate_q_13;
  xx_plus_yy_5116888128(4.228773713621676, 2.238563229919323) _gate_q_4, _gate_q_0;
  z _gate_q_11;
  U(1.592050270971655, 2.3307113861544697, 3.1110543638231154) _gate_q_8;
  crz(4.548500807190335) _gate_q_7, _gate_q_3;
  cu3_5116888320(6.274166266540676, 2.0097692786563437, 6.015602988348831) _gate_q_6, _gate_q_5;
  rxx_5116888416(2.1107609085975882) _gate_q_3, _gate_q_2;
  cz _gate_q_10, _gate_q_8;
  cu(3.9970075790358273, 5.480860394133241, 5.536133306769486, 2.869198896587649) _gate_q_12, _gate_q_11;
  u3(2.1446201158935065, 1.0565676018941306, 4.9896519701069035) _gate_q_7;
  u3(4.529742641874288, 1.7229118881541292, 4.3241091546683155) _gate_q_13;
  cx _gate_q_1, _gate_q_0;
  ry(3.990101132602112) _gate_q_4;
  rzz_5116888704(6.253613877840927) _gate_q_6, _gate_q_5;
  sdg _gate_q_9;
  cu3_5116888752(2.73488685973024, 1.3899806566555402, 5.935487012383723) _gate_q_11, _gate_q_6;
  z _gate_q_7;
  swap _gate_q_1, _gate_q_4;
  rzz_5116888848(2.0753606081474953) _gate_q_2, _gate_q_9;
  xx_minus_yy_5116888896(1.0292628903170935, 2.620359143032969) _gate_q_13, _gate_q_8;
  csdg _gate_q_5, _gate_q_12;
  cu(3.154904808759307, 4.083782126677055, 4.8809410528442285, 5.121746137832033) _gate_q_3, _gate_q_0;
  id _gate_q_10;
  z _gate_q_12;
  y _gate_q_6;
  crx(2.3673758030442533) _gate_q_13, _gate_q_11;
  cu(3.569579175686074, 5.406988546962079, 4.428248881406955, 2.500803743402671) _gate_q_2, _gate_q_8;
  x _gate_q_3;
  rzz_5116889232(3.532743057120551) _gate_q_7, _gate_q_5;
  u3(4.270354385549349, 3.1980041560828703, 1.2786757355873977) _gate_q_4;
  p(0.6217669697487282) _gate_q_1;
  z _gate_q_10;
  cs _gate_q_9, _gate_q_0;
  ecr _gate_q_1, _gate_q_11;
  rzx_5116889376(2.17475704065154) _gate_q_9, _gate_q_4;
  rzz_5116889424(0.3991982602279993) _gate_q_3, _gate_q_5;
  sdg _gate_q_10;
  csx _gate_q_7, _gate_q_13;
  cp(0.43749719944684506) _gate_q_0, _gate_q_12;
  crx(5.232757295422443) _gate_q_6, _gate_q_2;
  id _gate_q_8;
}
gate cu1_5116685840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5599147904084807) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5599147904084807) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5599147904084807) _gate_q_1;
}
gate xx_plus_yy_5116685456(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6070390816748312) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.6420726302475805) _gate_q_1;
  ry(-1.6420726302475805) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6070390816748312) _gate_q_0;
}
gate rxx_5116685408(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4178477028156444) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5116685120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.8571000231384165) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5116685072(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2581968001152484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5116685024(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.251517033704921) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5116684928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.835553076779652) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.999467260863858) _gate_q_1;
  ry(-2.999467260863858) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.835553076779652) _gate_q_0;
}
gate ryy_5116684832(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.26365999148311653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5116674128(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.7080613026261944) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.7080613026261944) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.7080613026261944) _gate_q_1;
}
gate xx_minus_yy_5116684064(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.137855093039563) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9126522883499244) _gate_q_0;
  ry(-1.9126522883499244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.137855093039563) _gate_q_1;
}
gate rzx_5107605024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2338244898650432) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5107604832(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5416650957779234) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.3239017030103537) _gate_q_1;
  ry(-1.3239017030103537) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5416650957779234) _gate_q_0;
}
gate cu3_5107604160(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.007176087740351) _gate_q_0;
  u1(-1.7173385139946253) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.0999670727113116, 0, -4.007176087740351) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.0999670727113116, 5.724514601734977, 0) _gate_q_1;
}
gate cu1_5107611024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.21345143454897722) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.21345143454897722) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.21345143454897722) _gate_q_1;
}
gate rzz_5107604736(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.779699806873076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13 {
  cu1_5116685840(1.1198295808169614) _gate_q_9, _gate_q_4;
  iswap _gate_q_6, _gate_q_5;
  x _gate_q_10;
  tdg _gate_q_3;
  cry(3.1642794626820905) _gate_q_8, _gate_q_7;
  cz _gate_q_13, _gate_q_0;
  u1(1.4022902544085738) _gate_q_11;
  cu(2.9023461450315517, 4.874355301114502, 1.3712430151575112, 6.102411937515078) _gate_q_1, _gate_q_12;
  y _gate_q_2;
  t _gate_q_7;
  ecr _gate_q_3, _gate_q_4;
  id _gate_q_6;
  ch _gate_q_8, _gate_q_0;
  h _gate_q_11;
  h _gate_q_12;
  cs _gate_q_1, _gate_q_5;
  u1(3.3977175335094696) _gate_q_13;
  x _gate_q_2;
  xx_plus_yy_5116685456(3.284145260495161, 2.6070390816748312) _gate_q_9, _gate_q_10;
  p(4.913746659104624) _gate_q_6;
  csdg _gate_q_8, _gate_q_11;
  s _gate_q_2;
  rxx_5116685408(3.4178477028156444) _gate_q_13, _gate_q_10;
  cz _gate_q_5, _gate_q_1;
  p(3.1896379729336055) _gate_q_4;
  u2(1.4477699464519456, 3.7824109535389137) _gate_q_9;
  cz _gate_q_3, _gate_q_12;
  cp(0.22320101711139761) _gate_q_0, _gate_q_7;
  rzx_5116685120(5.8571000231384165) _gate_q_9, _gate_q_4;
  ryy_5116685072(1.2581968001152484) _gate_q_11, _gate_q_10;
  u1(0.7017931111263024) _gate_q_3;
  rzz_5116685024(4.251517033704921) _gate_q_5, _gate_q_7;
  rz(3.8410367613766354) _gate_q_1;
  xx_plus_yy_5116684928(5.998934521727716, 5.835553076779652) _gate_q_6, _gate_q_2;
  ryy_5116684832(0.26365999148311653) _gate_q_12, _gate_q_13;
  y _gate_q_0;
  rz(5.646909421855403) _gate_q_8;
  cu1_5116674128(3.4161226052523888) _gate_q_8, _gate_q_10;
  u2(1.0677254639577602, 3.626801230622774) _gate_q_0;
  crx(3.588153313235918) _gate_q_6, _gate_q_9;
  ecr _gate_q_3, _gate_q_4;
  x _gate_q_1;
  xx_minus_yy_5116684064(3.825304576699849, 4.137855093039563) _gate_q_13, _gate_q_2;
  crx(1.7810803788391498) _gate_q_11, _gate_q_5;
  cs _gate_q_7, _gate_q_12;
  sx _gate_q_8;
  cry(2.684322551263663) _gate_q_0, _gate_q_6;
  crz(2.9784301425904722) _gate_q_11, _gate_q_2;
  cu(4.953919907792789, 4.366975154764027, 2.283965170476302, 0.4609330757982281) _gate_q_12, _gate_q_9;
  rx(2.5246122762759318) _gate_q_7;
  iswap _gate_q_3, _gate_q_1;
  rzx_5107605024(1.2338244898650432) _gate_q_4, _gate_q_5;
  h _gate_q_13;
  sx _gate_q_10;
  h _gate_q_8;
  rx(5.5199568041243765) _gate_q_10;
  swap _gate_q_12, _gate_q_2;
  cx _gate_q_3, _gate_q_5;
  t _gate_q_4;
  ry(3.9270977285332136) _gate_q_11;
  cy _gate_q_1, _gate_q_13;
  cx _gate_q_9, _gate_q_6;
  cx _gate_q_0, _gate_q_7;
  U(2.969034122459629, 6.137042931594955, 3.26057663744942) _gate_q_12;
  cx _gate_q_13, _gate_q_0;
  cx _gate_q_1, _gate_q_3;
  cx _gate_q_2, _gate_q_5;
  xx_plus_yy_5107604832(2.6478034060207074, 0.5416650957779234) _gate_q_11, _gate_q_4;
  cu3_5107604160(6.199934145422623, 5.724514601734977, 2.289837573745726) _gate_q_6, _gate_q_8;
  cu1_5107611024(0.42690286909795444) _gate_q_9, _gate_q_10;
  x _gate_q_7;
  rzz_5107604736(5.779699806873076) _gate_q_6, _gate_q_8;
  dcx _gate_q_10, _gate_q_2;
  p(1.1422447581366955) _gate_q_5;
  p(5.177600303287943) _gate_q_0;
  csx _gate_q_13, _gate_q_3;
  swap _gate_q_7, _gate_q_11;
  sdg _gate_q_1;
  csx _gate_q_9, _gate_q_4;
  u1(5.359994603467431) _gate_q_12;
  z _gate_q_3;
  id _gate_q_10;
  y _gate_q_12;
  crx(4.3316880174009675) _gate_q_8, _gate_q_9;
  y _gate_q_4;
  ecr _gate_q_0, _gate_q_5;
  cu(1.2943769074432954, 2.6561459867961625, 4.362480672006648, 0.5408115425723218) _gate_q_11, _gate_q_2;
  U(5.350908072241977, 0.9784619151794954, 2.6218182075689334) _gate_q_13;
  rx(4.891953925907481) _gate_q_6;
  cu(2.3696960500892947, 1.852848217194741, 0.9127765657395792, 3.6590226255863336) _gate_q_1, _gate_q_7;
}