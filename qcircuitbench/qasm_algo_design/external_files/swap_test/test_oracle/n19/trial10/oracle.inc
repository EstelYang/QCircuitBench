gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate r_5105647008(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.4629478457431417, 3.2512042031990473, -3.2512042031990473) _gate_q_0;
}
gate ryy_5105644848(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.299473877136291) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5105641248(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9740588551292076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5105633904(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6306908970395284) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5105640336(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.6814027730823917) _gate_q_1;
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
gate xx_plus_yy_5105642640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.3766590538315149) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.2339356782532165) _gate_q_1;
  ry(-2.2339356782532165) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.3766590538315149) _gate_q_0;
}
gate rzx_5105645088(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.28852224224930384) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5105644272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.9003237590176605, -0.7729409248794733, 0.7729409248794733) _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5105640864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.25688378227749, 4.3935924027371085, -4.3935924027371085) _gate_q_0;
}
gate cu1_5105282096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.094907492238667) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.094907492238667) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.094907492238667) _gate_q_1;
}
gate rxx_5105285120(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2843994249802034) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5105278928(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.7590252654618858) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5719185117092902) _gate_q_0;
  ry(-1.5719185117092902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.7590252654618858) _gate_q_1;
}
gate cu3_5105276288(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.357584341937549) _gate_q_0;
  u1(-2.604986738745937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.124329270480904, 0, -3.357584341937549) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.124329270480904, 5.962571080683486, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu3_5105275184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.7497147681219087) _gate_q_0;
  u1(0.09549948564327326) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.5911127200273967, 0, -1.7497147681219087) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.5911127200273967, 1.6542152824786354, 0) _gate_q_1;
}
gate rzz_5105282816(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.525561566061154) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5105281184(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.6210761350807426) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105272592(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(0.27911486129338725) _gate_q_0;
  u1(-0.22749950073246472) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.47019105908393616, 0, -0.27911486129338725) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.47019105908393616, 0.506614362025852, 0) _gate_q_1;
}
gate xx_minus_yy_5105273600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.420740933061193) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.2475061171810222) _gate_q_0;
  ry(-1.2475061171810222) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.420740933061193) _gate_q_1;
}
gate cu1_5105283632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7701625022571066) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7701625022571066) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7701625022571066) _gate_q_1;
}
gate ryy_5105284352(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.766408584467912) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105280752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.251381121412936) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  sxdg _gate_q_8;
  sdg _gate_q_6;
  s _gate_q_14;
  crz(3.545137199929271) _gate_q_16, _gate_q_5;
  csx _gate_q_17, _gate_q_13;
  cu(0.0993928722442659, 4.27278132152234, 2.8638969897395867, 0.7714174756198272) _gate_q_12, _gate_q_10;
  swap _gate_q_7, _gate_q_15;
  cs _gate_q_4, _gate_q_9;
  r_5105647008(1.4629478457431417, 4.822000529993944) _gate_q_3;
  ryy_5105644848(1.299473877136291) _gate_q_1, _gate_q_2;
  sdg _gate_q_18;
  rzx_5105641248(0.9740588551292076) _gate_q_11, _gate_q_0;
  swap _gate_q_11, _gate_q_7;
  cx _gate_q_8, _gate_q_15;
  sdg _gate_q_9;
  z _gate_q_5;
  cu(2.7632996930080544, 0.23962714571855162, 2.949267922991929, 4.3421885117296055) _gate_q_17, _gate_q_6;
  csdg _gate_q_14, _gate_q_16;
  cp(5.707057080047682) _gate_q_4, _gate_q_1;
  cy _gate_q_0, _gate_q_3;
  ryy_5105633904(2.6306908970395284) _gate_q_10, _gate_q_18;
  cry(2.508449542127873) _gate_q_13, _gate_q_2;
  x _gate_q_12;
  rzz_5105640336(3.6814027730823917) _gate_q_13, _gate_q_8;
  u2(3.3408775158695705, 2.2998337640612165) _gate_q_15;
  h _gate_q_0;
  ecr _gate_q_6, _gate_q_2;
  ry(3.4221670960154724) _gate_q_18;
  u3(2.848674464702966, 4.108612182477622, 4.023838883639846) _gate_q_16;
  xx_plus_yy_5105642640(4.467871356506433, 0.3766590538315149) _gate_q_11, _gate_q_4;
  s _gate_q_10;
  rzx_5105645088(0.28852224224930384) _gate_q_1, _gate_q_12;
  r_5105644272(4.9003237590176605, 0.7978554019154233) _gate_q_7;
  cs _gate_q_14, _gate_q_9;
  cu(3.141816146671534, 2.8390015567147793, 4.60746621724332, 5.483056285096062) _gate_q_5, _gate_q_17;
  u1(3.5932044105282848) _gate_q_3;
  dcx _gate_q_3, _gate_q_11;
  rx(5.221199610528019) _gate_q_18;
  r_5105640864(4.25688378227749, 5.964388729532005) _gate_q_0;
  cp(4.813356219119054) _gate_q_5, _gate_q_9;
  cu1_5105282096(4.189814984477334) _gate_q_14, _gate_q_15;
  dcx _gate_q_8, _gate_q_1;
  crz(4.274322314386384) _gate_q_7, _gate_q_2;
  cz _gate_q_10, _gate_q_17;
  cs _gate_q_4, _gate_q_13;
  ch _gate_q_16, _gate_q_12;
  p(5.520719805466806) _gate_q_6;
  U(2.661437268578117, 4.739245016630082, 3.483166863079001) _gate_q_11;
  x _gate_q_10;
  rxx_5105285120(0.2843994249802034) _gate_q_16, _gate_q_3;
  u3(1.2415776353866346, 1.6238845757705156, 4.2302797580825136) _gate_q_12;
  crx(5.916102715225554) _gate_q_17, _gate_q_0;
  ry(3.334483308096272) _gate_q_6;
  xx_minus_yy_5105278928(3.1438370234185804, 0.7590252654618858) _gate_q_1, _gate_q_8;
  z _gate_q_13;
  h _gate_q_9;
  cu3_5105276288(4.248658540961808, 5.962571080683486, 0.752597603191612) _gate_q_4, _gate_q_5;
  ecr _gate_q_7, _gate_q_15;
  cz _gate_q_18, _gate_q_2;
  x _gate_q_14;
  x _gate_q_6;
  iswap _gate_q_9, _gate_q_18;
  u2(5.844864247904257, 5.199266247661041) _gate_q_11;
  rz(5.064210585896491) _gate_q_12;
  y _gate_q_17;
  cry(1.7905543525182461) _gate_q_10, _gate_q_4;
  u2(5.688603749470045, 4.820297557228406) _gate_q_8;
  cu3_5105275184(3.1822254400547934, 1.6542152824786354, 1.8452142537651819) _gate_q_2, _gate_q_15;
  u2(2.5729186652798273, 1.3969819138363697) _gate_q_1;
  ecr _gate_q_7, _gate_q_0;
  rzz_5105282816(5.525561566061154) _gate_q_3, _gate_q_13;
  dcx _gate_q_5, _gate_q_16;
  t _gate_q_14;
  sdg _gate_q_7;
  z _gate_q_0;
  csdg _gate_q_14, _gate_q_9;
  U(2.019642535549101, 5.474897915795853, 3.419147213697891) _gate_q_8;
  crz(0.4154632393921125) _gate_q_2, _gate_q_10;
  iswap _gate_q_15, _gate_q_5;
  cx _gate_q_6, _gate_q_11;
  rx(6.047945001958807) _gate_q_12;
  rzz_5105281184(5.6210761350807426) _gate_q_4, _gate_q_1;
  u3(3.6065377753507852, 4.037177196346146, 3.5056000958578313) _gate_q_3;
  cu3_5105272592(0.9403821181678723, 0.506614362025852, 0.05161536056092256) _gate_q_13, _gate_q_16;
  xx_minus_yy_5105273600(2.4950122343620444, 2.420740933061193) _gate_q_17, _gate_q_18;
  s _gate_q_14;
  z _gate_q_18;
  id _gate_q_16;
  swap _gate_q_5, _gate_q_13;
  cu1_5105283632(1.5403250045142132) _gate_q_17, _gate_q_15;
  cu(2.3158074881916786, 1.2340173516819224, 3.8981204443709765, 4.7359846735526725) _gate_q_0, _gate_q_6;
  ryy_5105284352(0.766408584467912) _gate_q_3, _gate_q_9;
  rx(4.906151360483199) _gate_q_2;
  ecr _gate_q_7, _gate_q_4;
  sdg _gate_q_8;
  cy _gate_q_1, _gate_q_10;
  U(0.3919953227371678, 3.5128066983803654, 2.8369762072914515) _gate_q_12;
  sxdg _gate_q_11;
  U(1.337932131612741, 0.8404522482868785, 6.034826724343541) _gate_q_3;
  cx _gate_q_16, _gate_q_11;
  swap _gate_q_5, _gate_q_8;
  crz(2.365235219614979) _gate_q_7, _gate_q_17;
  crz(0.025372069377779423) _gate_q_1, _gate_q_12;
  crx(5.399262849901068) _gate_q_18, _gate_q_15;
  u2(1.650288480899057, 0.47589352766455734) _gate_q_10;
  ry(1.7462769725903113) _gate_q_14;
  cx _gate_q_13, _gate_q_6;
  h _gate_q_4;
  ryy_5105280752(4.251381121412936) _gate_q_0, _gate_q_2;
  u3(5.517718522494523, 5.98634531996565, 6.215934829626612) _gate_q_9;
  cy _gate_q_15, _gate_q_3;
  sdg _gate_q_9;
  dcx _gate_q_12, _gate_q_13;
  u2(5.358797915362741, 3.624013078834851) _gate_q_7;
  p(0.3242114800746906) _gate_q_17;
  swap _gate_q_6, _gate_q_16;
  z _gate_q_2;
  x _gate_q_4;
  cy _gate_q_5, _gate_q_0;
  u1(3.8342987523814256) _gate_q_8;
  cy _gate_q_11, _gate_q_1;
  id _gate_q_10;
  u1(5.312337658047663) _gate_q_18;
  y _gate_q_14;
}
gate rzx_5105286080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.882903322941375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5105275232(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.0718065158106853) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu3_5105278976(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.3127030380523714) _gate_q_0;
  u1(-1.6823493912918612) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8370754100799762, 0, -2.3127030380523714) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8370754100799762, 3.9950524293442324, 0) _gate_q_1;
}
gate cu1_5105271584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.812157606198114) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.812157606198114) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.812157606198114) _gate_q_1;
}
gate xx_minus_yy_5105280704(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.184221232169327) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.612912492450809) _gate_q_0;
  ry(-2.612912492450809) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.184221232169327) _gate_q_1;
}
gate xx_plus_yy_5105271296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.403662104979431) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.037854279246417) _gate_q_1;
  ry(-1.037854279246417) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.403662104979431) _gate_q_0;
}
gate rzz_5105278304(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.245100681873156) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105283584(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.026963628502521) _gate_q_0;
  u1(-0.644296761716902) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2698610135541648, 0, -4.026963628502521) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2698610135541648, 4.671260390219423, 0) _gate_q_1;
}
gate rzx_5105277392(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.738196506025252) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5105273264(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.9615138908087864) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.9615138908087864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.9615138908087864) _gate_q_1;
}
gate rzz_5105272352(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.2186343081125734) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5105275040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.919350994594653) _gate_q_0;
  u1(1.8016199770815455) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.704434370741698, 0, -3.919350994594653) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.704434370741698, 2.1177310175131074, 0) _gate_q_1;
}
gate cu3_5105278208(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.106090871054553) _gate_q_0;
  u1(0.3064419853880729) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.4511141418576066, 0, -5.106090871054553) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.4511141418576066, 4.79964888566648, 0) _gate_q_1;
}
gate xx_minus_yy_5105279552(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.6859474939304615) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.479325751020116) _gate_q_0;
  ry(-1.479325751020116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.6859474939304615) _gate_q_1;
}
gate cu3_5105276912(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.9471057073291673) _gate_q_0;
  u1(0.32455621477932417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.105949994298015, 0, -2.9471057073291673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.105949994298015, 2.622549492549843, 0) _gate_q_1;
}
gate xx_minus_yy_5105284688(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.302675280071234) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.6717645224601697) _gate_q_0;
  ry(-0.6717645224601697) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.302675280071234) _gate_q_1;
}
gate ryy_5105275856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.268691967918964) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5105283488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2039827152248381) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5105273840(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.424923093094146) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.424923093094146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.424923093094146) _gate_q_1;
}
gate rxx_5105283968(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4684009576097499) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5105286032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.896333230732237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5105273456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.9690950129062403) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5105277296(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.850313785081041, 1.1683937779770424, -1.1683937779770424) _gate_q_0;
}
gate xx_plus_yy_5105276720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.2582716520487045) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0693244540759812) _gate_q_1;
  ry(-1.0693244540759812) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.2582716520487045) _gate_q_0;
}
gate r_5105282864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6348508470131866, 2.9473939754472562, -2.9473939754472562) _gate_q_0;
}
gate r_5105276000(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.93527805778427, 3.065050594532412, -3.065050594532412) _gate_q_0;
}
gate rzz_5105286512(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0347026295011188) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5105285504(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2620647664477596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5105286416(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6727986846240206) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.711471664921144) _gate_q_1;
  ry(-2.711471664921144) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6727986846240206) _gate_q_0;
}
gate r_5105280128(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.411704013044148, 0.3313612996221038, -0.3313612996221038) _gate_q_0;
}
gate r_5105277632(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4938876807358814, -0.909117067395752, 0.909117067395752) _gate_q_0;
}
gate r_5105274896(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.209478590146011, -0.931817551381044, 0.931817551381044) _gate_q_0;
}
gate xx_plus_yy_5105279696(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.778967906002153) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.8913205994102835) _gate_q_1;
  ry(-2.8913205994102835) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.778967906002153) _gate_q_0;
}
gate cu3_5105277872(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7295810808773737) _gate_q_0;
  u1(-0.46210815585057063) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0152086143312162, 0, -2.7295810808773737) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0152086143312162, 3.1916892367279446, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18 {
  h _gate_q_6;
  u1(4.494186741358305) _gate_q_15;
  rzx_5105286080(3.882903322941375) _gate_q_11, _gate_q_1;
  swap _gate_q_8, _gate_q_7;
  tdg _gate_q_12;
  id _gate_q_5;
  ry(0.9039338520134279) _gate_q_14;
  ryy_5105275232(2.0718065158106853) _gate_q_2, _gate_q_3;
  cu3_5105278976(3.6741508201599524, 3.9950524293442324, 0.6303536467605101) _gate_q_10, _gate_q_16;
  cp(0.9686737892878835) _gate_q_18, _gate_q_13;
  sx _gate_q_9;
  u2(1.6158406820056108, 2.9385485956985216) _gate_q_17;
  cu1_5105271584(3.624315212396228) _gate_q_0, _gate_q_4;
  cy _gate_q_11, _gate_q_18;
  iswap _gate_q_10, _gate_q_0;
  ry(4.902859652228611) _gate_q_17;
  h _gate_q_6;
  x _gate_q_1;
  cy _gate_q_4, _gate_q_13;
  csdg _gate_q_7, _gate_q_2;
  y _gate_q_12;
  csx _gate_q_5, _gate_q_14;
  sxdg _gate_q_9;
  u2(3.1087075613290476, 5.085030947428406) _gate_q_16;
  xx_minus_yy_5105280704(5.225824984901618, 5.184221232169327) _gate_q_8, _gate_q_15;
  sx _gate_q_3;
  xx_plus_yy_5105271296(2.075708558492834, 5.403662104979431) _gate_q_13, _gate_q_12;
  cx _gate_q_2, _gate_q_15;
  rzz_5105278304(5.245100681873156) _gate_q_8, _gate_q_5;
  crz(1.1500405934483602) _gate_q_11, _gate_q_3;
  cu3_5105283584(2.5397220271083296, 4.671260390219423, 3.3826668667856192) _gate_q_6, _gate_q_10;
  rzx_5105277392(4.738196506025252) _gate_q_18, _gate_q_14;
  crz(6.031237220397098) _gate_q_7, _gate_q_16;
  sxdg _gate_q_9;
  cu1_5105273264(3.9230277816175727) _gate_q_17, _gate_q_0;
  t _gate_q_1;
  id _gate_q_4;
  rz(3.0846802640853044) _gate_q_13;
  rzz_5105272352(5.2186343081125734) _gate_q_16, _gate_q_4;
  tdg _gate_q_7;
  id _gate_q_17;
  iswap _gate_q_10, _gate_q_15;
  cp(2.427110585720908) _gate_q_11, _gate_q_8;
  cp(4.124196086259543) _gate_q_6, _gate_q_18;
  cu3_5105275040(5.408868741483396, 2.1177310175131074, 5.7209709716761985) _gate_q_0, _gate_q_3;
  cu3_5105278208(4.902228283715213, 4.79964888566648, 5.412532856442626) _gate_q_14, _gate_q_2;
  cry(3.8165432661266574) _gate_q_5, _gate_q_9;
  xx_minus_yy_5105279552(2.958651502040232, 5.6859474939304615) _gate_q_12, _gate_q_1;
  t _gate_q_9;
  cp(3.1103212505272575) _gate_q_14, _gate_q_5;
  cu3_5105276912(4.21189998859603, 2.622549492549843, 3.2716619221084913) _gate_q_8, _gate_q_7;
  ry(1.8187650512191076) _gate_q_2;
  cu(6.105656666181941, 4.820763002003649, 0.4870103494698165, 0.12388955408171115) _gate_q_17, _gate_q_3;
  u2(1.4219707764915543, 2.3647777431160533) _gate_q_4;
  cu(3.6802786607993223, 2.7847432789740805, 1.9192790046142376, 4.708733222978526) _gate_q_16, _gate_q_12;
  p(0.11446877077728186) _gate_q_0;
  xx_minus_yy_5105284688(1.3435290449203394, 4.302675280071234) _gate_q_11, _gate_q_10;
  ryy_5105275856(5.268691967918964) _gate_q_18, _gate_q_13;
  id _gate_q_6;
  ch _gate_q_1, _gate_q_15;
  t _gate_q_13;
  rx(5.601193326229658) _gate_q_15;
  ryy_5105283488(1.2039827152248381) _gate_q_6, _gate_q_1;
  csdg _gate_q_7, _gate_q_3;
  cu1_5105273840(4.849846186188292) _gate_q_16, _gate_q_4;
  sdg _gate_q_0;
  rxx_5105283968(0.4684009576097499) _gate_q_14, _gate_q_12;
  h _gate_q_17;
  rzx_5105286032(4.896333230732237) _gate_q_8, _gate_q_10;
  u3(2.8338286153586347, 2.5264977233245425, 1.7381607913718071) _gate_q_18;
  swap _gate_q_5, _gate_q_9;
  sdg _gate_q_11;
  u3(3.050785107911004, 1.9652563559836915, 3.9238390633051523) _gate_q_2;
  cx _gate_q_4, _gate_q_14;
  y _gate_q_15;
  rzz_5105273456(3.9690950129062403) _gate_q_0, _gate_q_12;
  h _gate_q_10;
  s _gate_q_1;
  z _gate_q_16;
  cz _gate_q_3, _gate_q_11;
  id _gate_q_5;
  r_5105277296(4.850313785081041, 2.739190104771939) _gate_q_8;
  xx_plus_yy_5105276720(2.1386489081519624, 5.2582716520487045) _gate_q_18, _gate_q_13;
  U(0.20614015075076478, 4.3810404801117775, 2.0934139825545914) _gate_q_2;
  U(5.571400790859289, 0.912162188096567, 0.7812725101311554) _gate_q_6;
  tdg _gate_q_17;
  r_5105282864(0.6348508470131866, 4.518190302242153) _gate_q_7;
  u1(5.560324378309677) _gate_q_9;
  r_5105276000(4.93527805778427, 4.635846921327309) _gate_q_4;
  x _gate_q_15;
  sx _gate_q_0;
  sdg _gate_q_10;
  rzz_5105286512(1.0347026295011188) _gate_q_3, _gate_q_13;
  cu(0.8323054151087204, 3.2353254459533662, 0.9451125589848748, 1.5325872304881818) _gate_q_17, _gate_q_6;
  csdg _gate_q_7, _gate_q_16;
  cx _gate_q_11, _gate_q_12;
  rxx_5105285504(1.2620647664477596) _gate_q_14, _gate_q_18;
  xx_plus_yy_5105286416(5.422943329842288, 0.6727986846240206) _gate_q_9, _gate_q_5;
  cz _gate_q_8, _gate_q_1;
  u2(6.189801633740774, 3.4836098980565993) _gate_q_2;
  r_5105280128(2.411704013044148, 1.9021576264170004) _gate_q_10;
  u1(0.3671116622030156) _gate_q_0;
  s _gate_q_14;
  r_5105277632(2.4938876807358814, 0.6616792593991445) _gate_q_7;
  r_5105274896(2.209478590146011, 0.6389787754138525) _gate_q_4;
  y _gate_q_5;
  u2(5.766054000797705, 4.280691982091837) _gate_q_12;
  xx_plus_yy_5105279696(5.782641198820567, 5.778967906002153) _gate_q_11, _gate_q_16;
  cp(0.18090194219923203) _gate_q_6, _gate_q_3;
  cu(3.994311184418605, 3.6259799669893495, 2.997393211056495, 2.408083161382963) _gate_q_18, _gate_q_13;
  p(2.247350020599701) _gate_q_9;
  x _gate_q_17;
  csx _gate_q_15, _gate_q_2;
  y _gate_q_1;
  tdg _gate_q_8;
  csdg _gate_q_7, _gate_q_16;
  x _gate_q_11;
  y _gate_q_14;
  U(4.316733889954939, 4.845386647518759, 2.456530240699897) _gate_q_17;
  t _gate_q_9;
  cu3_5105277872(2.0304172286624325, 3.1916892367279446, 2.2674729250268033) _gate_q_13, _gate_q_12;
  sdg _gate_q_6;
  U(3.507052004392794, 0.5762136558552637, 4.204071077119337) _gate_q_0;
  cry(5.7235331867202595) _gate_q_5, _gate_q_1;
  u1(2.745069431585574) _gate_q_18;
  ch _gate_q_15, _gate_q_4;
  p(2.454712743733751) _gate_q_3;
  sdg _gate_q_2;
  s _gate_q_8;
  u1(3.524988235420633) _gate_q_10;
}