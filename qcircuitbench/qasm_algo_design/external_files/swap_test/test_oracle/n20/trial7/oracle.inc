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
gate cu3_5118913776(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.1393666704320322) _gate_q_0;
  u1(-1.0705172889122803) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.9923912990307006, 0, -1.1393666704320322) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.9923912990307006, 2.2098839593443125, 0) _gate_q_1;
}
gate cu3_5118903072(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.7172348767594343) _gate_q_0;
  u1(-1.7434865043432788) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.727852676945632, 0, -3.7172348767594343) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.727852676945632, 5.460721381102713, 0) _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate ryy_5118914640(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.3497903859041798) _gate_q_1;
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
gate rxx_5118904416(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7123303141915547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5118903120(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.066489470312387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5118903840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1448386190864217) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.821713318584069) _gate_q_0;
  ry(-1.821713318584069) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1448386190864217) _gate_q_1;
}
gate rzx_5118903744(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.11982412909672) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzz_5118903696(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.4685417303308428) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
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
gate rxx_5118903936(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.763235451678357) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5118904272(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.262541076542173, 3.99691298268115, -3.99691298268115) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5118903984(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.9435258464068372) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.634782299727164) _gate_q_0;
  ry(-0.634782299727164) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.9435258464068372) _gate_q_1;
}
gate ryy_5118903888(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9615009139572771) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5118904128(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.936393010374091) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5118904032(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6266263474160714) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7385262873550155) _gate_q_1;
  ry(-0.7385262873550155) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6266263474160714) _gate_q_0;
}
gate r_5118904320(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.1612603554510716, -0.45750803060237955, 0.45750803060237955) _gate_q_0;
}
gate cu1_5118904512(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.46589776438885594) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.46589776438885594) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.46589776438885594) _gate_q_1;
}
gate rzx_5118904368(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.064193755705804) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5118904704(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.7466710647659147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5118912912(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.492480803183898) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5118913152(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.142468010779988) _gate_q_0;
  u1(-0.7180848044008566) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-2.9703881422987926, 0, -2.142468010779988) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(2.9703881422987926, 2.860552815180845, 0) _gate_q_1;
}
gate rzz_5118912432(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.734204215057371) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5118912192(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1825984335720903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5118912048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.13692504583438084) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.13692504583438084) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.13692504583438084) _gate_q_1;
}
gate rzx_5118911904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7561248617125362) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5118912672(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.2512067047622604, 0.8671533710663892, -0.8671533710663892) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  u1(3.09402050871405) _gate_q_5;
  csx _gate_q_8, _gate_q_7;
  cu3_5118913776(1.9847825980614011, 2.2098839593443125, 0.0688493815197519) _gate_q_13, _gate_q_9;
  cry(4.121074814188484) _gate_q_18, _gate_q_14;
  cp(1.4936850702121054) _gate_q_12, _gate_q_6;
  cry(4.932328507947392) _gate_q_19, _gate_q_3;
  rz(1.8684640882981642) _gate_q_17;
  cx _gate_q_1, _gate_q_10;
  h _gate_q_15;
  t _gate_q_11;
  t _gate_q_2;
  cu3_5118903072(5.455705353891264, 5.460721381102713, 1.9737483724161557) _gate_q_4, _gate_q_16;
  tdg _gate_q_0;
  rx(0.22978483416637663) _gate_q_6;
  sxdg _gate_q_16;
  ryy_5118914640(1.3497903859041798) _gate_q_8, _gate_q_17;
  csdg _gate_q_15, _gate_q_18;
  cp(1.8802646443689022) _gate_q_11, _gate_q_9;
  rxx_5118904416(0.7123303141915547) _gate_q_5, _gate_q_13;
  h _gate_q_7;
  ry(4.359259776717573) _gate_q_0;
  tdg _gate_q_2;
  U(4.926877590168569, 1.6813858558572998, 3.840518141162668) _gate_q_4;
  cz _gate_q_1, _gate_q_14;
  cu(0.30324657696613844, 0.015190275088360706, 4.4152410320366124, 3.3195777593782627) _gate_q_10, _gate_q_3;
  ryy_5118903120(6.066489470312387) _gate_q_12, _gate_q_19;
  sdg _gate_q_2;
  u2(5.713536642868024, 2.2900456170510566) _gate_q_19;
  cp(1.4517594676296341) _gate_q_16, _gate_q_13;
  sdg _gate_q_8;
  swap _gate_q_15, _gate_q_7;
  sdg _gate_q_17;
  cz _gate_q_18, _gate_q_1;
  sx _gate_q_9;
  u1(5.774316302841516) _gate_q_5;
  z _gate_q_12;
  p(2.212428111460419) _gate_q_10;
  cx _gate_q_11, _gate_q_4;
  cz _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_14;
  sdg _gate_q_0;
  cx _gate_q_18, _gate_q_12;
  id _gate_q_19;
  p(4.274183752265853) _gate_q_9;
  xx_minus_yy_5118903840(3.643426637168138, 1.1448386190864217) _gate_q_10, _gate_q_3;
  rzx_5118903744(3.11982412909672) _gate_q_16, _gate_q_1;
  rzz_5118903696(1.4685417303308428) _gate_q_14, _gate_q_8;
  dcx _gate_q_17, _gate_q_7;
  cs _gate_q_11, _gate_q_13;
  tdg _gate_q_6;
  id _gate_q_2;
  sdg _gate_q_5;
  ecr _gate_q_4, _gate_q_15;
  x _gate_q_12;
  rxx_5118903936(4.763235451678357) _gate_q_18, _gate_q_16;
  csx _gate_q_14, _gate_q_11;
  r_5118904272(3.262541076542173, 5.567709309476046) _gate_q_8;
  cx _gate_q_1, _gate_q_15;
  iswap _gate_q_4, _gate_q_9;
  xx_minus_yy_5118903984(1.269564599454328, 1.9435258464068372) _gate_q_0, _gate_q_13;
  cp(2.5599816506080844) _gate_q_10, _gate_q_6;
  x _gate_q_3;
  ryy_5118903888(0.9615009139572771) _gate_q_5, _gate_q_19;
  ecr _gate_q_17, _gate_q_2;
  rx(2.076624793708493) _gate_q_7;
  rxx_5118904128(2.936393010374091) _gate_q_5, _gate_q_8;
  xx_plus_yy_5118904032(1.477052574710031, 2.6266263474160714) _gate_q_12, _gate_q_10;
  r_5118904320(3.1612603554510716, 1.113288296192517) _gate_q_3;
  tdg _gate_q_2;
  csdg _gate_q_6, _gate_q_17;
  cp(3.9454560980785254) _gate_q_7, _gate_q_15;
  cu1_5118904512(0.9317955287777119) _gate_q_19, _gate_q_9;
  cs _gate_q_18, _gate_q_0;
  h _gate_q_14;
  rzx_5118904368(5.064193755705804) _gate_q_11, _gate_q_1;
  u3(5.891023540653391, 3.6656024805614797, 5.643851163633775) _gate_q_16;
  cz _gate_q_13, _gate_q_4;
  cry(5.649591342880621) _gate_q_2, _gate_q_7;
  cp(3.654768911173493) _gate_q_6, _gate_q_4;
  p(4.734181607203819) _gate_q_5;
  t _gate_q_19;
  y _gate_q_18;
  iswap _gate_q_0, _gate_q_1;
  swap _gate_q_12, _gate_q_13;
  csx _gate_q_15, _gate_q_16;
  csdg _gate_q_11, _gate_q_3;
  s _gate_q_9;
  p(5.014304825446501) _gate_q_14;
  u2(1.7119682758848014, 5.296030116797981) _gate_q_17;
  crx(2.903735761623452) _gate_q_10, _gate_q_8;
  u2(4.976942370690936, 3.33083742095651) _gate_q_15;
  rxx_5118904704(1.7466710647659147) _gate_q_17, _gate_q_8;
  cu(3.631554582110911, 2.760295942526882, 0.427649230593656, 0.02393688736653451) _gate_q_13, _gate_q_16;
  cs _gate_q_9, _gate_q_0;
  u1(6.250330322046455) _gate_q_3;
  cy _gate_q_10, _gate_q_6;
  cp(3.5789196664481837) _gate_q_1, _gate_q_18;
  rx(5.713855629548966) _gate_q_5;
  y _gate_q_12;
  rzz_5118912912(5.492480803183898) _gate_q_14, _gate_q_7;
  csdg _gate_q_19, _gate_q_11;
  rz(2.8875104466487937) _gate_q_2;
  x _gate_q_4;
  t _gate_q_5;
  sdg _gate_q_12;
  u2(4.940652376976525, 1.6087562890739593) _gate_q_7;
  dcx _gate_q_16, _gate_q_2;
  ry(1.2233093043896546) _gate_q_1;
  csx _gate_q_10, _gate_q_9;
  U(2.7925032625623976, 2.2618108400733377, 0.0004716083213264217) _gate_q_17;
  cu3_5118913152(5.940776284597585, 2.860552815180845, 1.4243832063791315) _gate_q_0, _gate_q_14;
  crz(4.476059370848652) _gate_q_8, _gate_q_4;
  s _gate_q_13;
  csdg _gate_q_3, _gate_q_11;
  cp(0.877268904284778) _gate_q_18, _gate_q_6;
  y _gate_q_19;
  sdg _gate_q_15;
  cz _gate_q_17, _gate_q_6;
  csdg _gate_q_19, _gate_q_11;
  crx(2.291128293518893) _gate_q_4, _gate_q_8;
  u3(1.2154130259777594, 1.1975349673363775, 0.8717959480864179) _gate_q_15;
  sdg _gate_q_7;
  rzz_5118912432(2.734204215057371) _gate_q_1, _gate_q_0;
  ryy_5118912192(2.1825984335720903) _gate_q_13, _gate_q_5;
  cu1_5118912048(0.2738500916687617) _gate_q_12, _gate_q_16;
  cy _gate_q_2, _gate_q_18;
  rzx_5118911904(0.7561248617125362) _gate_q_3, _gate_q_10;
  r_5118912672(2.2512067047622604, 2.437949697861286) _gate_q_9;
  y _gate_q_14;
}
gate rzx_5107724176(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7822015334766905) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5107714528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.15771031578529074) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107720864(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.4588526532299661) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.4588526532299661) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.4588526532299661) _gate_q_1;
}
gate cu1_5107718944(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.141310597231937) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.141310597231937) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.141310597231937) _gate_q_1;
}
gate rzx_5107715536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.24258985240032147) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5107725568(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1784257003902168) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5107725952(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.10762464378384544) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5107716976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.178464208534168) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.39757101948381524) _gate_q_1;
  ry(-0.39757101948381524) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.178464208534168) _gate_q_0;
}
gate rxx_5107718320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.797413994311637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5107727008(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.2269377203021302) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5107715920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.0011930822863927106) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9335736317709973) _gate_q_0;
  ry(-1.9335736317709973) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.0011930822863927106) _gate_q_1;
}
gate rzz_5107725760(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.080487950995213) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5107719904(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.980770793548827) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5107726480(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.3006538544378854) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5107726432(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.1928199417087124) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.64659744145987) _gate_q_0;
  ry(-1.64659744145987) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.1928199417087124) _gate_q_1;
}
gate r_5107719760(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(3.826394695358025, -0.4770060872262589, 0.4770060872262589) _gate_q_0;
}
gate r_5107720816(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.011547717793598, 3.9590359343497665, -3.9590359343497665) _gate_q_0;
}
gate rxx_5107727536(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.915310048544876) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5107715248(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.7136935939628513) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.035053974184212) _gate_q_1;
  ry(-3.035053974184212) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.7136935939628513) _gate_q_0;
}
gate xx_minus_yy_5107713376(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.651088230764304) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6138061425349643) _gate_q_0;
  ry(-1.6138061425349643) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.651088230764304) _gate_q_1;
}
gate xx_plus_yy_5107723744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.792285179429315) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.11801345454925055) _gate_q_1;
  ry(-0.11801345454925055) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.792285179429315) _gate_q_0;
}
gate ryy_5107722688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.9552936188052673) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5107715056(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4477196480538588) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4477196480538588) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4477196480538588) _gate_q_1;
}
gate rzx_5107712320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.7837313849729877) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5107717024(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4959367201290212) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4959367201290212) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4959367201290212) _gate_q_1;
}
gate cu1_5107728112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.7398291798350675) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.7398291798350675) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.7398291798350675) _gate_q_1;
}
gate rzz_5107721296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.1747593962283459) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17, _gate_q_18, _gate_q_19 {
  x _gate_q_7;
  z _gate_q_14;
  t _gate_q_5;
  sx _gate_q_1;
  ry(5.8677109705863595) _gate_q_16;
  rzx_5107724176(2.7822015334766905) _gate_q_10, _gate_q_9;
  cx _gate_q_13, _gate_q_0;
  x _gate_q_15;
  sx _gate_q_11;
  ry(5.37817328351944) _gate_q_19;
  rzx_5107714528(0.15771031578529074) _gate_q_18, _gate_q_6;
  cu1_5107720864(0.9177053064599322) _gate_q_3, _gate_q_2;
  cz _gate_q_4, _gate_q_17;
  csx _gate_q_8, _gate_q_12;
  cu1_5107718944(2.282621194463874) _gate_q_16, _gate_q_0;
  rzx_5107715536(0.24258985240032147) _gate_q_3, _gate_q_15;
  rxx_5107725568(2.1784257003902168) _gate_q_12, _gate_q_8;
  sdg _gate_q_1;
  t _gate_q_18;
  h _gate_q_5;
  cz _gate_q_13, _gate_q_9;
  rzz_5107725952(0.10762464378384544) _gate_q_10, _gate_q_6;
  z _gate_q_2;
  p(5.657503625911647) _gate_q_4;
  swap _gate_q_14, _gate_q_17;
  csx _gate_q_19, _gate_q_11;
  id _gate_q_7;
  sx _gate_q_19;
  xx_plus_yy_5107716976(0.7951420389676305, 6.178464208534168) _gate_q_18, _gate_q_14;
  ecr _gate_q_17, _gate_q_16;
  x _gate_q_6;
  u3(0.14425589048059087, 5.903180087449776, 1.3818829719580992) _gate_q_7;
  ry(5.768576468773039) _gate_q_8;
  rxx_5107718320(5.797413994311637) _gate_q_15, _gate_q_2;
  cu(0.995334517885351, 2.458123165879315, 2.365451868301336, 1.2931960872323778) _gate_q_9, _gate_q_12;
  rxx_5107727008(0.2269377203021302) _gate_q_3, _gate_q_11;
  t _gate_q_5;
  h _gate_q_10;
  s _gate_q_13;
  cu(3.882267749409069, 2.5614506855542585, 0.11531501090025159, 5.684124873800069) _gate_q_1, _gate_q_0;
  U(1.6073113762931897, 1.7056527442953286, 1.4720543720520447) _gate_q_4;
  dcx _gate_q_6, _gate_q_0;
  xx_minus_yy_5107715920(3.8671472635419946, 0.0011930822863927106) _gate_q_12, _gate_q_17;
  dcx _gate_q_2, _gate_q_13;
  u2(4.846926069581544, 2.444373830366653) _gate_q_3;
  u1(2.3756416146443566) _gate_q_19;
  y _gate_q_16;
  iswap _gate_q_18, _gate_q_8;
  h _gate_q_11;
  u2(0.03517108320394427, 0.2679385958014629) _gate_q_1;
  cs _gate_q_4, _gate_q_5;
  rzz_5107725760(6.080487950995213) _gate_q_14, _gate_q_9;
  sx _gate_q_15;
  dcx _gate_q_7, _gate_q_10;
  z _gate_q_7;
  U(0.5488050917292249, 1.5499030514557364, 2.503208231245186) _gate_q_16;
  z _gate_q_0;
  u3(2.272451980079894, 0.11774759129806074, 0.897910720816846) _gate_q_11;
  sxdg _gate_q_18;
  rx(1.3321735613377328) _gate_q_4;
  sx _gate_q_1;
  cz _gate_q_3, _gate_q_17;
  u3(2.1975787610915414, 2.410736908088517, 0.21487686625061125) _gate_q_6;
  cp(4.113434119307634) _gate_q_8, _gate_q_10;
  y _gate_q_19;
  cz _gate_q_15, _gate_q_12;
  rzx_5107719904(4.980770793548827) _gate_q_14, _gate_q_5;
  sxdg _gate_q_9;
  ryy_5107726480(3.3006538544378854) _gate_q_2, _gate_q_13;
  x _gate_q_4;
  sdg _gate_q_17;
  sxdg _gate_q_14;
  z _gate_q_2;
  crz(3.244788950000845) _gate_q_8, _gate_q_6;
  xx_minus_yy_5107726432(3.29319488291974, 1.1928199417087124) _gate_q_16, _gate_q_1;
  r_5107719760(3.826394695358025, 1.0937902395686376) _gate_q_15;
  U(3.0937315957005262, 3.2181284402080585, 2.2960952026707635) _gate_q_5;
  rz(3.0132037441032966) _gate_q_9;
  rx(2.398018425000899) _gate_q_7;
  sxdg _gate_q_13;
  cy _gate_q_19, _gate_q_10;
  y _gate_q_11;
  rz(6.13722431357456) _gate_q_12;
  r_5107720816(5.011547717793598, 5.529832261144663) _gate_q_3;
  cry(4.490579992678027) _gate_q_18, _gate_q_0;
  U(5.724874546907669, 5.405510322348317, 4.559775061597604) _gate_q_2;
  cs _gate_q_8, _gate_q_19;
  rxx_5107727536(4.915310048544876) _gate_q_0, _gate_q_9;
  cp(4.99709562762057) _gate_q_15, _gate_q_4;
  crx(3.91197306759511) _gate_q_11, _gate_q_1;
  cy _gate_q_7, _gate_q_13;
  xx_plus_yy_5107715248(6.070107948368424, 1.7136935939628513) _gate_q_6, _gate_q_3;
  u2(0.567940788006263, 0.5801615415905761) _gate_q_10;
  csx _gate_q_14, _gate_q_12;
  sxdg _gate_q_18;
  csx _gate_q_16, _gate_q_17;
  p(6.202789425058443) _gate_q_5;
  cry(4.878302678731086) _gate_q_0, _gate_q_17;
  y _gate_q_10;
  cz _gate_q_11, _gate_q_6;
  sdg _gate_q_19;
  xx_minus_yy_5107713376(3.2276122850699287, 3.651088230764304) _gate_q_3, _gate_q_2;
  xx_plus_yy_5107723744(0.2360269090985011, 5.792285179429315) _gate_q_8, _gate_q_5;
  crx(2.243327080431165) _gate_q_18, _gate_q_4;
  iswap _gate_q_1, _gate_q_9;
  ryy_5107722688(0.9552936188052673) _gate_q_14, _gate_q_16;
  cz _gate_q_15, _gate_q_7;
  sxdg _gate_q_12;
  id _gate_q_13;
  cp(3.335837050998672) _gate_q_15, _gate_q_17;
  cu1_5107715056(4.8954392961077176) _gate_q_12, _gate_q_13;
  x _gate_q_5;
  rzx_5107712320(2.7837313849729877) _gate_q_11, _gate_q_9;
  h _gate_q_14;
  csdg _gate_q_7, _gate_q_8;
  t _gate_q_19;
  dcx _gate_q_6, _gate_q_0;
  cz _gate_q_4, _gate_q_16;
  cu1_5107717024(4.9918734402580425) _gate_q_2, _gate_q_10;
  cu(2.0242775363996803, 2.0391071055627235, 5.370406541729726, 0.8326098778087059) _gate_q_3, _gate_q_18;
  x _gate_q_1;
  crz(1.4314168661305635) _gate_q_8, _gate_q_17;
  cry(2.7251554054726346) _gate_q_11, _gate_q_15;
  csdg _gate_q_4, _gate_q_6;
  cu1_5107728112(1.479658359670135) _gate_q_1, _gate_q_5;
  crx(3.955122642479373) _gate_q_13, _gate_q_14;
  u3(2.9362598266054913, 0.22109225036452673, 4.787887451146053) _gate_q_10;
  csdg _gate_q_2, _gate_q_19;
  swap _gate_q_9, _gate_q_3;
  rzz_5107721296(0.1747593962283459) _gate_q_16, _gate_q_18;
  rz(0.9331493600528644) _gate_q_7;
  cx _gate_q_12, _gate_q_0;
}