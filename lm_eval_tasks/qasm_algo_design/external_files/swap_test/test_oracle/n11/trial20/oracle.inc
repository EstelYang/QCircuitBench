gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5070730448(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4581820035880554) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.0448627529328118) _gate_q_0;
  ry(-1.0448627529328118) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4581820035880554) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
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
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate xx_plus_yy_5070437504(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.619100673311528) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.39941950288475314) _gate_q_1;
  ry(-0.39941950288475314) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.619100673311528) _gate_q_0;
}
gate xx_minus_yy_5070433760(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4351409989735453) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.648037124747643) _gate_q_0;
  ry(-1.648037124747643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4351409989735453) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate ryy_5070431792(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9913281563808659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070593952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.355821583162995) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.37404984241039557) _gate_q_0;
  ry(-0.37404984241039557) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.355821583162995) _gate_q_1;
}
gate rzx_5070901024(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.573755296902594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu3_5070599616(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.8675908971269304) _gate_q_0;
  u1(-0.9598483425219375) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.4920551798877533, 0, -1.8675908971269304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.4920551798877533, 2.827439239648868, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_plus_yy_5070600240(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.106915074393948) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5081606380090717) _gate_q_1;
  ry(-0.5081606380090717) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.106915074393948) _gate_q_0;
}
gate xx_plus_yy_5070589344(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.0776904247771937) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4182112824588234) _gate_q_1;
  ry(-0.4182112824588234) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.0776904247771937) _gate_q_0;
}
gate ryy_5070587376(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0023844976205825) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070600528(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5938683431015555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  xx_minus_yy_5070730448(2.0897255058656237, 0.4581820035880554) _gate_q_10, _gate_q_1;
  csdg _gate_q_2, _gate_q_7;
  rz(4.285115269969452) _gate_q_4;
  ch _gate_q_6, _gate_q_8;
  csdg _gate_q_9, _gate_q_0;
  rx(4.02664179210775) _gate_q_3;
  u2(0.1810464260323216, 0.08485583470741702) _gate_q_5;
  cu(2.35448348466957, 0.5834337857646712, 5.175728655468925, 3.505693021425992) _gate_q_9, _gate_q_7;
  u3(0.6685443978868963, 4.831262332682914, 1.8111489961411829) _gate_q_10;
  sdg _gate_q_5;
  ry(2.7460519138636426) _gate_q_3;
  cry(0.633418199232174) _gate_q_8, _gate_q_0;
  csx _gate_q_4, _gate_q_1;
  cs _gate_q_6, _gate_q_2;
  sdg _gate_q_5;
  t _gate_q_3;
  xx_plus_yy_5070437504(0.7988390057695063, 4.619100673311528) _gate_q_10, _gate_q_7;
  u3(1.8137864565809705, 3.924450259836387, 1.8999197411462445) _gate_q_0;
  p(0.8176784195764019) _gate_q_4;
  y _gate_q_9;
  xx_minus_yy_5070433760(3.296074249495286, 2.4351409989735453) _gate_q_2, _gate_q_8;
  U(1.0466707650721898, 4.304740038717626, 6.081543128447707) _gate_q_1;
  h _gate_q_6;
  csx _gate_q_5, _gate_q_1;
  dcx _gate_q_2, _gate_q_3;
  cz _gate_q_4, _gate_q_10;
  h _gate_q_0;
  u3(2.0107132360941544, 5.081580309976199, 0.6436359258911724) _gate_q_8;
  sx _gate_q_9;
  ryy_5070431792(0.9913281563808659) _gate_q_7, _gate_q_6;
  rz(0.9680286211071941) _gate_q_0;
  cp(5.507323389389475) _gate_q_9, _gate_q_3;
  xx_minus_yy_5070593952(0.7480996848207911, 5.355821583162995) _gate_q_7, _gate_q_1;
  dcx _gate_q_4, _gate_q_6;
  s _gate_q_10;
  tdg _gate_q_8;
  rzx_5070901024(4.573755296902594) _gate_q_2, _gate_q_5;
  cp(5.219854423507182) _gate_q_4, _gate_q_10;
  cu3_5070599616(2.9841103597755065, 2.827439239648868, 0.9077425546049928) _gate_q_3, _gate_q_8;
  iswap _gate_q_7, _gate_q_1;
  rx(4.259933919698583) _gate_q_2;
  crz(5.834974378068297) _gate_q_6, _gate_q_9;
  u3(5.64975240810612, 5.880385449394346, 1.7259471027265945) _gate_q_0;
  sxdg _gate_q_5;
  h _gate_q_0;
  csdg _gate_q_6, _gate_q_5;
  cu(4.11129075867399, 5.333107842717953, 1.496334238267908, 4.155579048537513) _gate_q_8, _gate_q_1;
  dcx _gate_q_2, _gate_q_4;
  xx_plus_yy_5070600240(1.0163212760181435, 5.106915074393948) _gate_q_3, _gate_q_9;
  z _gate_q_7;
  p(3.1320904729306442) _gate_q_10;
  u2(5.175906286073016, 0.18312293869443805) _gate_q_2;
  cry(1.8759210526901633) _gate_q_5, _gate_q_0;
  iswap _gate_q_6, _gate_q_9;
  ch _gate_q_1, _gate_q_8;
  sx _gate_q_10;
  xx_plus_yy_5070589344(0.8364225649176468, 1.0776904247771937) _gate_q_7, _gate_q_4;
  sdg _gate_q_3;
  ryy_5070587376(1.0023844976205825) _gate_q_4, _gate_q_2;
  s _gate_q_9;
  y _gate_q_5;
  cry(5.51227329652357) _gate_q_7, _gate_q_1;
  cz _gate_q_3, _gate_q_6;
  rz(1.3051310089395514) _gate_q_0;
  t _gate_q_8;
  h _gate_q_10;
  x _gate_q_10;
  cz _gate_q_6, _gate_q_5;
  rzz_5070600528(0.5938683431015555) _gate_q_1, _gate_q_2;
  sdg _gate_q_7;
  u1(2.008292968881038) _gate_q_0;
  x _gate_q_3;
  U(2.811901356377561, 6.069096488176134, 3.7636677311685185) _gate_q_8;
  cz _gate_q_9, _gate_q_4;
}
gate cu1_5072765968(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.6421649985868372) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.6421649985868372) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.6421649985868372) _gate_q_1;
}
gate xx_minus_yy_5072770624(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.1614199013405635) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.714074458414836) _gate_q_0;
  ry(-2.714074458414836) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.1614199013405635) _gate_q_1;
}
gate rxx_5072770576(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.137544428388131) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5074194976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2213922301831555) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.029553652377397) _gate_q_1;
  ry(-1.029553652377397) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2213922301831555) _gate_q_0;
}
gate rzx_5074203952(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.463629102931847) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5074201840(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.314877281694004) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5074201360(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.327842831395561, 3.858056230726108, -3.858056230726108) _gate_q_0;
}
gate xx_plus_yy_5074201648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.241967818845841) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.9921555329713097) _gate_q_1;
  ry(-2.9921555329713097) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.241967818845841) _gate_q_0;
}
gate rxx_5074196464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.588056388503675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5074201888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4642582502295707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5074195120(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.792568215019434) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.135435219505676) _gate_q_1;
  ry(-0.135435219505676) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.792568215019434) _gate_q_0;
}
gate cu3_5074201120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.284727623354071) _gate_q_0;
  u1(1.0707465123281583) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5335925820350932, 0, -4.284727623354071) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5335925820350932, 3.2139811110259124, 0) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  z _gate_q_10;
  h _gate_q_2;
  csdg _gate_q_0, _gate_q_7;
  cz _gate_q_5, _gate_q_6;
  h _gate_q_9;
  cu1_5072765968(3.2843299971736744) _gate_q_1, _gate_q_8;
  p(0.18757973670871436) _gate_q_4;
  rz(3.8558302177404724) _gate_q_3;
  tdg _gate_q_0;
  xx_minus_yy_5072770624(5.428148916829672, 4.1614199013405635) _gate_q_8, _gate_q_1;
  rxx_5072770576(6.137544428388131) _gate_q_5, _gate_q_9;
  cx _gate_q_3, _gate_q_2;
  tdg _gate_q_4;
  u1(0.8753964512308486) _gate_q_6;
  swap _gate_q_7, _gate_q_10;
  rz(2.8404397139747353) _gate_q_9;
  s _gate_q_8;
  t _gate_q_0;
  tdg _gate_q_7;
  sx _gate_q_5;
  cry(3.666136356911699) _gate_q_4, _gate_q_2;
  cy _gate_q_1, _gate_q_10;
  xx_plus_yy_5074194976(2.059107304754794, 3.2213922301831555) _gate_q_6, _gate_q_3;
  cy _gate_q_8, _gate_q_9;
  rzx_5074203952(3.463629102931847) _gate_q_7, _gate_q_3;
  p(4.660975468457943) _gate_q_6;
  p(5.172855943178952) _gate_q_5;
  cs _gate_q_4, _gate_q_10;
  rxx_5074201840(5.314877281694004) _gate_q_2, _gate_q_0;
  u2(6.1474346347722575, 1.5191439935324436) _gate_q_1;
  cu(0.13490310572615924, 5.3807387293416244, 5.653539332336296, 5.533691250894672) _gate_q_2, _gate_q_1;
  rz(4.900947290463868) _gate_q_8;
  csx _gate_q_4, _gate_q_7;
  cs _gate_q_3, _gate_q_10;
  cs _gate_q_9, _gate_q_5;
  t _gate_q_0;
  id _gate_q_6;
  sx _gate_q_9;
  ch _gate_q_2, _gate_q_5;
  r_5074201360(2.327842831395561, 5.4288525575210045) _gate_q_4;
  z _gate_q_7;
  cs _gate_q_6, _gate_q_10;
  xx_plus_yy_5074201648(5.984311065942619, 1.241967818845841) _gate_q_8, _gate_q_3;
  rxx_5074196464(3.588056388503675) _gate_q_0, _gate_q_1;
  x _gate_q_0;
  sdg _gate_q_7;
  t _gate_q_5;
  swap _gate_q_3, _gate_q_1;
  sxdg _gate_q_10;
  t _gate_q_2;
  csx _gate_q_8, _gate_q_9;
  sxdg _gate_q_6;
  sx _gate_q_4;
  ryy_5074201888(1.4642582502295707) _gate_q_6, _gate_q_8;
  s _gate_q_1;
  cp(1.460068080961486) _gate_q_10, _gate_q_9;
  swap _gate_q_0, _gate_q_5;
  xx_plus_yy_5074195120(0.270870439011352, 5.792568215019434) _gate_q_7, _gate_q_3;
  y _gate_q_4;
  u2(5.109222029611432, 4.8839661319092516) _gate_q_2;
  cp(4.034734389578472) _gate_q_10, _gate_q_2;
  sdg _gate_q_7;
  z _gate_q_3;
  p(3.688652263935289) _gate_q_9;
  cy _gate_q_8, _gate_q_4;
  u1(1.4077253375453609) _gate_q_6;
  cy _gate_q_1, _gate_q_0;
  s _gate_q_5;
  cu3_5074201120(1.0671851640701864, 3.2139811110259124, 5.355474135682229) _gate_q_8, _gate_q_9;
  u2(0.7884161308491691, 3.169016227966069) _gate_q_7;
  p(4.7523344493438024) _gate_q_0;
  sdg _gate_q_6;
  x _gate_q_5;
  rx(3.22294195367533) _gate_q_3;
  dcx _gate_q_1, _gate_q_10;
  u3(0.4768845505270642, 2.5767530777832315, 3.7973135727455753) _gate_q_4;
  x _gate_q_2;
}