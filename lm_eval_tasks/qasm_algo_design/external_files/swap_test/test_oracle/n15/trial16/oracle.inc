gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
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
gate cu1_5073920864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.5401991953878728) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.5401991953878728) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.5401991953878728) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate r_5073914912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.3902562605919, 1.2665244870628785, -1.2665244870628785) _gate_q_0;
}
gate rzz_5073921056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.7802304179139075) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5073919664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.16495581782956) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.1373729195290718) _gate_q_1;
  ry(-1.1373729195290718) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.16495581782956) _gate_q_0;
}
gate ryy_5073926336(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.089624569460191) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5073913376(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.6665955428433503, 2.1087597166070937, -2.1087597166070937) _gate_q_0;
}
gate xx_minus_yy_5073924656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9694135569639464) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.28105296488091264) _gate_q_0;
  ry(-0.28105296488091264) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9694135569639464) _gate_q_1;
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
gate rxx_5073923792(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6632041126723132) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5073924752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.010968245414018146) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5073928064(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.59068839073836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5073926912(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.9987569136179877) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.9987569136179877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.9987569136179877) _gate_q_1;
}
gate ryy_5073913184(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.35730594560820533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5073924608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6000050949136595) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.7423233323747183) _gate_q_1;
  ry(-2.7423233323747183) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6000050949136595) _gate_q_0;
}
gate cu1_5073927536(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.964411149849644) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.964411149849644) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.964411149849644) _gate_q_1;
}
gate ryy_5073927872(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5062771252541172) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5073926384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8479501445562938) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5073926960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.7032067957347055) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5073927392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.460421458656038) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3474628566644036) _gate_q_1;
  ry(-2.3474628566644036) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.460421458656038) _gate_q_0;
}
gate rzx_5073913952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.146054851712192) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5073916208(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.746889598336847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5073915824(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6204169188830893) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5073915920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0833435551625854, 2.252368240147067, -2.252368240147067) _gate_q_0;
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
gate cu1_5073916544(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.733308507423198) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.733308507423198) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.733308507423198) _gate_q_1;
}
gate xx_plus_yy_5073919568(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.142596096902746) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.41008019067042195) _gate_q_1;
  ry(-0.41008019067042195) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.142596096902746) _gate_q_0;
}
gate cu3_5073917456(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.865228439871276) _gate_q_0;
  u1(0.140783361876335) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4744231629471842, 0, -4.865228439871276) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4744231629471842, 4.724445077994941, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  dcx _gate_q_2, _gate_q_12;
  x _gate_q_9;
  ch _gate_q_4, _gate_q_7;
  csdg _gate_q_3, _gate_q_1;
  iswap _gate_q_13, _gate_q_10;
  cu1_5073920864(1.0803983907757455) _gate_q_5, _gate_q_11;
  U(6.279670158087481, 1.7178624813279852, 4.7422366231815625) _gate_q_8;
  sxdg _gate_q_14;
  rz(1.1196209995949085) _gate_q_6;
  r_5073914912(5.3902562605919, 2.837320813857775) _gate_q_0;
  swap _gate_q_8, _gate_q_14;
  cry(1.4311678073586696) _gate_q_13, _gate_q_3;
  u2(5.817187297926489, 2.6855658044786765) _gate_q_5;
  y _gate_q_6;
  rzz_5073921056(3.7802304179139075) _gate_q_1, _gate_q_9;
  p(0.02688725937782777) _gate_q_2;
  ry(4.937287619330178) _gate_q_0;
  xx_plus_yy_5073919664(2.2747458390581436, 5.16495581782956) _gate_q_7, _gate_q_4;
  p(0.9488766641032248) _gate_q_10;
  x _gate_q_12;
  u1(4.807898086139779) _gate_q_11;
  x _gate_q_12;
  dcx _gate_q_2, _gate_q_3;
  ryy_5073926336(6.089624569460191) _gate_q_14, _gate_q_1;
  sxdg _gate_q_6;
  tdg _gate_q_10;
  r_5073913376(3.6665955428433503, 3.6795560434019903) _gate_q_5;
  xx_minus_yy_5073924656(0.5621059297618253, 1.9694135569639464) _gate_q_0, _gate_q_4;
  cz _gate_q_9, _gate_q_13;
  tdg _gate_q_8;
  dcx _gate_q_11, _gate_q_7;
  iswap _gate_q_0, _gate_q_1;
  ecr _gate_q_3, _gate_q_8;
  p(1.942503884061035) _gate_q_10;
  U(5.6545028092706335, 1.5643548675288435, 3.501122457140531) _gate_q_12;
  rxx_5073923792(0.6632041126723132) _gate_q_13, _gate_q_11;
  s _gate_q_5;
  ry(5.336522444014611) _gate_q_6;
  rzz_5073924752(0.010968245414018146) _gate_q_2, _gate_q_9;
  ryy_5073928064(4.59068839073836) _gate_q_4, _gate_q_7;
  sx _gate_q_14;
  cu1_5073926912(5.997513827235975) _gate_q_2, _gate_q_9;
  ryy_5073913184(0.35730594560820533) _gate_q_8, _gate_q_10;
  u2(3.764654883787583, 1.5888235217713778) _gate_q_7;
  crx(3.5333568288482615) _gate_q_13, _gate_q_14;
  p(3.935612948625595) _gate_q_0;
  cs _gate_q_6, _gate_q_12;
  cy _gate_q_11, _gate_q_5;
  x _gate_q_4;
  rx(1.658050765418556) _gate_q_3;
  sx _gate_q_1;
  xx_plus_yy_5073924608(5.4846466647494365, 1.6000050949136595) _gate_q_1, _gate_q_13;
  cz _gate_q_10, _gate_q_14;
  cu1_5073927536(5.928822299699288) _gate_q_8, _gate_q_11;
  ryy_5073927872(1.5062771252541172) _gate_q_9, _gate_q_12;
  dcx _gate_q_0, _gate_q_6;
  swap _gate_q_7, _gate_q_3;
  rz(0.9230916649936581) _gate_q_2;
  u3(2.8881755878840853, 1.8871853455818717, 6.257510677827316) _gate_q_4;
  u3(5.7274102275948175, 1.7818598632323133, 4.895538518761055) _gate_q_5;
  y _gate_q_6;
  h _gate_q_3;
  rzz_5073926384(0.8479501445562938) _gate_q_2, _gate_q_12;
  tdg _gate_q_9;
  id _gate_q_13;
  rxx_5073926960(4.7032067957347055) _gate_q_5, _gate_q_10;
  csdg _gate_q_14, _gate_q_7;
  xx_plus_yy_5073927392(4.694925713328807, 5.460421458656038) _gate_q_4, _gate_q_11;
  rx(2.0384182711747516) _gate_q_1;
  cu(1.1900141409907818, 5.082671301912842, 5.470694652037968, 2.537253111657683) _gate_q_0, _gate_q_8;
  u1(1.9050824076493726) _gate_q_12;
  rzx_5073913952(3.146054851712192) _gate_q_14, _gate_q_9;
  rzx_5073916208(4.746889598336847) _gate_q_6, _gate_q_1;
  rxx_5073915824(2.6204169188830893) _gate_q_4, _gate_q_2;
  sdg _gate_q_7;
  cz _gate_q_5, _gate_q_3;
  tdg _gate_q_11;
  crx(1.8551622813860327) _gate_q_10, _gate_q_8;
  sx _gate_q_0;
  r_5073915920(1.0833435551625854, 3.8231645669419634) _gate_q_13;
  u2(2.697936453158973, 3.644873015101707) _gate_q_0;
  csx _gate_q_6, _gate_q_5;
  sxdg _gate_q_12;
  swap _gate_q_7, _gate_q_10;
  crz(0.15586495564125222) _gate_q_14, _gate_q_13;
  z _gate_q_4;
  crx(1.440767491895096) _gate_q_2, _gate_q_9;
  cp(4.023414486502981) _gate_q_1, _gate_q_11;
  cy _gate_q_3, _gate_q_8;
  h _gate_q_0;
  u2(6.146054484862645, 4.803814405005179) _gate_q_7;
  cu1_5073916544(3.466617014846396) _gate_q_8, _gate_q_11;
  h _gate_q_1;
  id _gate_q_14;
  s _gate_q_3;
  xx_plus_yy_5073919568(0.8201603813408439, 6.142596096902746) _gate_q_13, _gate_q_4;
  cu3_5073917456(2.9488463258943685, 4.724445077994941, 5.006011801747611) _gate_q_9, _gate_q_2;
  rx(3.4280380446210463) _gate_q_10;
  y _gate_q_5;
  y _gate_q_6;
  rz(0.7300623668288512) _gate_q_12;
}
gate ryy_5072973856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6557487298366962) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5074969632(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.630630284648713) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5891472290164445) _gate_q_0;
  ry(-0.5891472290164445) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.630630284648713) _gate_q_1;
}
gate rxx_5069814336(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.004512205586299) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5072615520(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.681714643024888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5072603088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.454819565333909) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5072603328(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.773724668087122) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5072605872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.393468997413312) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.571391947590474) _gate_q_1;
  ry(-0.571391947590474) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.393468997413312) _gate_q_0;
}
gate xx_minus_yy_5072610816(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.9548623296996386) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.4522286428254456) _gate_q_0;
  ry(-2.4522286428254456) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.9548623296996386) _gate_q_1;
}
gate r_5072601648(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.351148713883522, 3.4608398578228012, -3.4608398578228012) _gate_q_0;
}
gate cu1_5072601744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7736755250733142) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7736755250733142) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7736755250733142) _gate_q_1;
}
gate xx_minus_yy_5072606880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.089198209422114) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.609407090327026) _gate_q_0;
  ry(-2.609407090327026) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.089198209422114) _gate_q_1;
}
gate rxx_5072605584(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.279745529335888) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5072602032(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.877424262835243, -0.6916040810196904, 0.6916040810196904) _gate_q_0;
}
gate ryy_5072610048(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.156606367314802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5072605344(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.9392399420328343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5074427136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.4159463708930793) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074425120(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.8676623750798873) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5074432992(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.790128211793474) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5074358528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.216499938848465) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.9834598401014255) _gate_q_0;
  ry(-0.9834598401014255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.216499938848465) _gate_q_1;
}
gate xx_plus_yy_5074356272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.6360106961676157) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.065094470532682) _gate_q_1;
  ry(-2.065094470532682) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.6360106961676157) _gate_q_0;
}
gate cu3_5074367600(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.270586099079056) _gate_q_0;
  u1(0.2571412866168865) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3271657709991678, 0, -3.270586099079056) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3271657709991678, 3.0134448124621693, 0) _gate_q_1;
}
gate xx_minus_yy_5074360640(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.012097768089365) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.8383381009027647) _gate_q_0;
  ry(-0.8383381009027647) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.012097768089365) _gate_q_1;
}
gate rzx_5074362944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7523453442791344) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5074363328(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.8281625082494886) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5836677064976812) _gate_q_1;
  ry(-0.5836677064976812) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.8281625082494886) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14 {
  cy _gate_q_12, _gate_q_10;
  u2(1.3878934296454435, 6.1284537258029195) _gate_q_7;
  id _gate_q_5;
  ch _gate_q_6, _gate_q_4;
  sx _gate_q_13;
  cz _gate_q_9, _gate_q_8;
  h _gate_q_3;
  ry(4.53630890652651) _gate_q_2;
  ryy_5072973856(1.6557487298366962) _gate_q_1, _gate_q_0;
  ch _gate_q_11, _gate_q_14;
  cs _gate_q_14, _gate_q_12;
  swap _gate_q_6, _gate_q_5;
  u2(5.215268096794528, 2.2629922448883026) _gate_q_1;
  rx(4.73386305959897) _gate_q_8;
  sxdg _gate_q_3;
  xx_minus_yy_5074969632(1.178294458032889, 5.630630284648713) _gate_q_10, _gate_q_11;
  u2(4.48115472386581, 0.9554817976681115) _gate_q_13;
  swap _gate_q_2, _gate_q_7;
  U(1.6928877256569075, 0.5234419357878445, 4.723408850541178) _gate_q_0;
  rz(5.9250055020215875) _gate_q_9;
  z _gate_q_4;
  s _gate_q_2;
  rxx_5069814336(4.004512205586299) _gate_q_3, _gate_q_14;
  crz(0.7329413751756543) _gate_q_10, _gate_q_6;
  z _gate_q_9;
  rzz_5072615520(0.681714643024888) _gate_q_7, _gate_q_5;
  cry(3.8544505618306513) _gate_q_8, _gate_q_0;
  rzz_5072603088(4.454819565333909) _gate_q_11, _gate_q_4;
  rz(3.8665607899859187) _gate_q_1;
  ecr _gate_q_12, _gate_q_13;
  y _gate_q_0;
  rxx_5072603328(1.773724668087122) _gate_q_12, _gate_q_13;
  h _gate_q_10;
  ch _gate_q_14, _gate_q_9;
  u3(3.212394436073113, 1.0310683973392774, 1.357034420332903) _gate_q_7;
  s _gate_q_4;
  sdg _gate_q_8;
  xx_plus_yy_5072605872(1.142783895180948, 5.393468997413312) _gate_q_3, _gate_q_5;
  u3(4.924563115577782, 0.5668311936765783, 2.9655081692525815) _gate_q_2;
  sdg _gate_q_6;
  csdg _gate_q_1, _gate_q_11;
  xx_minus_yy_5072610816(4.904457285650891, 2.9548623296996386) _gate_q_13, _gate_q_7;
  id _gate_q_5;
  csx _gate_q_14, _gate_q_1;
  p(0.2912040988647056) _gate_q_4;
  crx(2.8189778578306295) _gate_q_9, _gate_q_12;
  cz _gate_q_0, _gate_q_11;
  y _gate_q_3;
  id _gate_q_10;
  r_5072601648(5.351148713883522, 5.031636184617698) _gate_q_8;
  swap _gate_q_2, _gate_q_6;
  h _gate_q_2;
  ecr _gate_q_8, _gate_q_1;
  csdg _gate_q_4, _gate_q_9;
  cu1_5072601744(1.5473510501466283) _gate_q_3, _gate_q_6;
  ch _gate_q_11, _gate_q_0;
  cry(0.10292513589203528) _gate_q_5, _gate_q_7;
  u3(5.459033994871065, 1.0074509280134776, 2.8818590491352105) _gate_q_10;
  ecr _gate_q_13, _gate_q_14;
  sx _gate_q_12;
  xx_minus_yy_5072606880(5.218814180654052, 5.089198209422114) _gate_q_3, _gate_q_5;
  t _gate_q_0;
  x _gate_q_8;
  x _gate_q_6;
  rxx_5072605584(1.279745529335888) _gate_q_11, _gate_q_9;
  p(1.3296774057499705) _gate_q_14;
  r_5072602032(4.877424262835243, 0.8791922457752062) _gate_q_7;
  rx(4.492355280851026) _gate_q_1;
  s _gate_q_2;
  ryy_5072610048(4.156606367314802) _gate_q_12, _gate_q_4;
  rzx_5072605344(1.9392399420328343) _gate_q_10, _gate_q_13;
  cp(0.3291155565028623) _gate_q_5, _gate_q_6;
  rzx_5074427136(2.4159463708930793) _gate_q_7, _gate_q_0;
  swap _gate_q_4, _gate_q_8;
  rzz_5074425120(3.8676623750798873) _gate_q_1, _gate_q_14;
  y _gate_q_11;
  s _gate_q_13;
  rzz_5074432992(4.790128211793474) _gate_q_10, _gate_q_3;
  p(3.381869444916009) _gate_q_9;
  sx _gate_q_12;
  s _gate_q_2;
  cs _gate_q_4, _gate_q_2;
  xx_minus_yy_5074358528(1.966919680202851, 2.216499938848465) _gate_q_13, _gate_q_8;
  xx_plus_yy_5074356272(4.130188941065364, 3.6360106961676157) _gate_q_1, _gate_q_6;
  swap _gate_q_12, _gate_q_5;
  cu3_5074367600(2.6543315419983355, 3.0134448124621693, 3.5277273856959424) _gate_q_11, _gate_q_3;
  x _gate_q_10;
  U(1.4320788179878527, 2.6141141772121657, 2.454943466992339) _gate_q_9;
  sx _gate_q_7;
  y _gate_q_0;
  ry(4.24172901625541) _gate_q_14;
  id _gate_q_9;
  xx_minus_yy_5074360640(1.6766762018055295, 4.012097768089365) _gate_q_4, _gate_q_2;
  rzx_5074362944(1.7523453442791344) _gate_q_0, _gate_q_12;
  ry(1.6003051143333002) _gate_q_3;
  xx_plus_yy_5074363328(1.1673354129953624, 2.8281625082494886) _gate_q_5, _gate_q_8;
  id _gate_q_7;
  y _gate_q_6;
  s _gate_q_13;
  ecr _gate_q_1, _gate_q_10;
  U(4.486785033537717, 0.007223864186060772, 5.4151433374096145) _gate_q_11;
  z _gate_q_14;
}