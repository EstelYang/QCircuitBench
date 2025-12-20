gate r_5074007344(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.464524789147363, 4.480798156375678, -4.480798156375678) _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5074007248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.323121165446121) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.4807816657649113) _gate_q_0;
  ry(-1.4807816657649113) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.323121165446121) _gate_q_1;
}
gate rxx_5074007536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.107227171848062) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5074007632(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(5.597544678553184) _gate_q_0;
  u1(-0.6405909550021422) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9612905014786401, 0, -5.597544678553184) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9612905014786401, 6.238135633555327, 0) _gate_q_1;
}
gate xx_minus_yy_5074007392(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.742503053621493) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.635671412668973) _gate_q_0;
  ry(-1.635671412668973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.742503053621493) _gate_q_1;
}
gate cu1_5074007680(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0767344847008076) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0767344847008076) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0767344847008076) _gate_q_1;
}
gate xx_minus_yy_5074007872(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.8865391731706681) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.507182686363985) _gate_q_0;
  ry(-2.507182686363985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.8865391731706681) _gate_q_1;
}
gate rzz_5074008112(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5775215594200265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074008304(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.011527952011533) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074008400(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6795133707910577) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
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
gate cu3_5074005856(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.328780122054469) _gate_q_0;
  u1(-0.08761463585263374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.617765568945773, 0, -3.328780122054469) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.617765568945773, 3.416394757907103, 0) _gate_q_1;
}
gate xx_minus_yy_5074009936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.38936995564033855) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.14046804813345473) _gate_q_0;
  ry(-0.14046804813345473) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.38936995564033855) _gate_q_1;
}
gate cu3_5074008880(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.656450338102574) _gate_q_0;
  u1(0.28246378436481323) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.516696551573029, 0, -2.656450338102574) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.516696551573029, 2.373986553737761, 0) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  u3(6.11103637933928, 0.9799958809829769, 5.1309652773953776) _gate_q_2;
  rx(3.9765155577995586) _gate_q_6;
  id _gate_q_8;
  r_5074007344(5.464524789147363, 6.051594483170574) _gate_q_3;
  xx_minus_yy_5074007248(2.9615633315298227, 5.323121165446121) _gate_q_0, _gate_q_9;
  rxx_5074007536(6.107227171848062) _gate_q_7, _gate_q_5;
  cu3_5074007632(1.9225810029572803, 6.238135633555327, 4.956953723551043) _gate_q_1, _gate_q_4;
  xx_minus_yy_5074007392(3.271342825337946, 4.742503053621493) _gate_q_5, _gate_q_6;
  id _gate_q_9;
  u2(3.2593300004816768, 5.404267255912446) _gate_q_0;
  cu1_5074007680(6.153468969401615) _gate_q_2, _gate_q_8;
  cx _gate_q_7, _gate_q_1;
  x _gate_q_4;
  U(1.3474815407070406, 3.349759662491458, 3.453700364073877) _gate_q_3;
  xx_minus_yy_5074007872(5.01436537272797, 0.8865391731706681) _gate_q_4, _gate_q_9;
  cry(6.1883241297178735) _gate_q_8, _gate_q_0;
  tdg _gate_q_5;
  rzz_5074008112(1.5775215594200265) _gate_q_1, _gate_q_2;
  tdg _gate_q_3;
  h _gate_q_7;
  u1(0.6491839030633076) _gate_q_6;
  rxx_5074008304(6.011527952011533) _gate_q_5, _gate_q_4;
  cp(2.1740501874867797) _gate_q_2, _gate_q_8;
  cry(5.405061656769583) _gate_q_6, _gate_q_7;
  z _gate_q_0;
  t _gate_q_1;
  cry(2.4300323860733086) _gate_q_9, _gate_q_3;
  ryy_5074008400(0.6795133707910577) _gate_q_2, _gate_q_8;
  ecr _gate_q_0, _gate_q_1;
  p(6.092171489468265) _gate_q_7;
  ch _gate_q_3, _gate_q_6;
  cs _gate_q_4, _gate_q_5;
  x _gate_q_9;
  t _gate_q_0;
  h _gate_q_1;
  csx _gate_q_4, _gate_q_9;
  tdg _gate_q_5;
  s _gate_q_3;
  u3(1.7359096603129422, 0.47153023654555193, 5.4133929522379765) _gate_q_6;
  h _gate_q_7;
  h _gate_q_2;
  tdg _gate_q_8;
  ecr _gate_q_7, _gate_q_1;
  cz _gate_q_5, _gate_q_3;
  crz(4.997381956461275) _gate_q_0, _gate_q_4;
  s _gate_q_8;
  rz(3.977348756746975) _gate_q_9;
  t _gate_q_6;
  sxdg _gate_q_2;
  rz(1.8776836319222645) _gate_q_9;
  y _gate_q_7;
  rx(5.40363949084224) _gate_q_6;
  crx(0.1995417524521273) _gate_q_8, _gate_q_3;
  cz _gate_q_2, _gate_q_0;
  ch _gate_q_1, _gate_q_5;
  id _gate_q_4;
  cu3_5074005856(5.235531137891546, 3.416394757907103, 3.2411654862018353) _gate_q_4, _gate_q_9;
  xx_minus_yy_5074009936(0.28093609626690946, 0.38936995564033855) _gate_q_5, _gate_q_6;
  crz(2.471133280919004) _gate_q_8, _gate_q_7;
  ch _gate_q_0, _gate_q_3;
  sxdg _gate_q_2;
  U(3.8186802995102203, 3.3873910042310054, 1.630434377156794) _gate_q_1;
  U(3.5853457520591543, 6.197903779047901, 1.096132562057393) _gate_q_5;
  y _gate_q_1;
  sx _gate_q_6;
  swap _gate_q_3, _gate_q_7;
  csx _gate_q_8, _gate_q_9;
  cu3_5074008880(5.033393103146058, 2.373986553737761, 2.9389141224673874) _gate_q_4, _gate_q_2;
  U(3.014102517459443, 1.5623634696598667, 3.7588894224376777) _gate_q_0;
}
gate r_5073837312(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.7601552808690709, 3.956619826907109, -3.956619826907109) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate cu1_5073845088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.417660928074971) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.417660928074971) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.417660928074971) _gate_q_1;
}
gate xx_plus_yy_5073846192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.067499420451978) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7622845923372406) _gate_q_1;
  ry(-1.7622845923372406) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.067499420451978) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_plus_yy_5073845136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.3306004570422463) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2288901368286193) _gate_q_1;
  ry(-0.2288901368286193) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.3306004570422463) _gate_q_0;
}
gate rzz_5073845712(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.751045771181547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5073845808(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2536308254911805) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.030477883076673307) _gate_q_1;
  ry(-0.030477883076673307) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2536308254911805) _gate_q_0;
}
gate cu1_5073845424(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.64432753914684) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.64432753914684) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.64432753914684) _gate_q_1;
}
gate r_5073845472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.1702093497372923, -1.1075299429569077, 1.1075299429569077) _gate_q_0;
}
gate rzx_5073837552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0506489057034578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5073845232(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.4261575972732152, 2.818048881533115, -2.818048881533115) _gate_q_0;
}
gate cu1_5073845520(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.3950602320988084) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.3950602320988084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.3950602320988084) _gate_q_1;
}
gate cu3_5073845040(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.0932861350330378) _gate_q_0;
  u1(0.3391973104458676) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-3.030896036423471, 0, -1.0932861350330378) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(3.030896036423471, 0.7540888245871703, 0) _gate_q_1;
}
gate rzz_5074197136(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.386253297189389) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5074198960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8754546773815364) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5074200160(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.04731891476140396) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5074200544(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.127087486507989) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5074206688(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.035689510228115) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5074009696(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.830732961034067) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9 {
  id _gate_q_3;
  ch _gate_q_5, _gate_q_1;
  csx _gate_q_2, _gate_q_8;
  cu(5.914625119592389, 0.3926375787619288, 1.4780491252226442, 5.290972615689523) _gate_q_4, _gate_q_7;
  ry(1.5533676848762294) _gate_q_9;
  p(3.252922088052336) _gate_q_6;
  h _gate_q_0;
  r_5073837312(0.7601552808690709, 5.5274161537020055) _gate_q_5;
  iswap _gate_q_4, _gate_q_9;
  cu1_5073845088(4.835321856149942) _gate_q_2, _gate_q_1;
  cu(4.385768181992317, 2.2466350468581395, 3.6398769534418705, 4.579524473974346) _gate_q_6, _gate_q_7;
  ry(4.935150255748946) _gate_q_3;
  crx(4.347337805160386) _gate_q_0, _gate_q_8;
  xx_plus_yy_5073846192(3.524569184674481, 4.067499420451978) _gate_q_4, _gate_q_1;
  s _gate_q_5;
  csdg _gate_q_3, _gate_q_9;
  cs _gate_q_2, _gate_q_0;
  xx_plus_yy_5073845136(0.4577802736572386, 2.3306004570422463) _gate_q_6, _gate_q_7;
  ry(3.4373037662329793) _gate_q_8;
  sxdg _gate_q_5;
  id _gate_q_9;
  crx(5.7036838691306775) _gate_q_6, _gate_q_8;
  u2(5.3164781867502935, 1.2692583647989444) _gate_q_7;
  cu(3.203233289599679, 2.1525354043707474, 6.081363642718658, 1.5147374723769929) _gate_q_2, _gate_q_1;
  cs _gate_q_4, _gate_q_3;
  rx(1.0345201917127518) _gate_q_0;
  rx(1.1638952769284723) _gate_q_0;
  x _gate_q_9;
  cy _gate_q_3, _gate_q_8;
  cs _gate_q_5, _gate_q_7;
  rzz_5073845712(0.751045771181547) _gate_q_1, _gate_q_6;
  xx_plus_yy_5073845808(0.060955766153346615, 2.2536308254911805) _gate_q_4, _gate_q_2;
  cu1_5073845424(5.28865507829368) _gate_q_0, _gate_q_6;
  swap _gate_q_3, _gate_q_8;
  cy _gate_q_5, _gate_q_9;
  crx(2.5886121138945395) _gate_q_7, _gate_q_2;
  r_5073845472(0.1702093497372923, 0.4632663838379889) _gate_q_1;
  tdg _gate_q_4;
  rzx_5073837552(1.0506489057034578) _gate_q_3, _gate_q_7;
  x _gate_q_5;
  r_5073845232(2.4261575972732152, 4.388845208328012) _gate_q_8;
  cu1_5073845520(2.7901204641976167) _gate_q_9, _gate_q_1;
  h _gate_q_0;
  u1(1.2690015417309641) _gate_q_6;
  cu3_5073845040(6.061792072846942, 0.7540888245871703, 1.4324834454789055) _gate_q_4, _gate_q_2;
  t _gate_q_2;
  crx(5.223139008207292) _gate_q_9, _gate_q_5;
  U(1.3524386453233985, 4.671922058576757, 0.48759913041042424) _gate_q_8;
  crx(0.2687965904535098) _gate_q_7, _gate_q_6;
  cry(2.732887725993119) _gate_q_0, _gate_q_3;
  U(4.602844072579081, 1.2791365967833463, 0.9760139976763255) _gate_q_1;
  u1(2.0571206343865285) _gate_q_4;
  rzz_5074197136(3.386253297189389) _gate_q_6, _gate_q_1;
  cp(0.2089496576465546) _gate_q_2, _gate_q_9;
  rzx_5074198960(0.8754546773815364) _gate_q_8, _gate_q_7;
  rzz_5074200160(0.04731891476140396) _gate_q_5, _gate_q_0;
  rxx_5074200544(5.127087486507989) _gate_q_4, _gate_q_3;
  u1(1.5445078141400437) _gate_q_7;
  rzz_5074206688(6.035689510228115) _gate_q_9, _gate_q_1;
  u1(5.490202316349632) _gate_q_3;
  cp(4.743249731904929) _gate_q_6, _gate_q_5;
  crz(1.5343152680892729) _gate_q_8, _gate_q_2;
  ryy_5074009696(5.830732961034067) _gate_q_0, _gate_q_4;
}