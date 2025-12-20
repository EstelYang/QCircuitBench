gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate r_5070589920(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.0495014674523144, -0.5277748531925222, 0.5277748531925222) _gate_q_0;
}
gate cu1_5070601488(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6281576800937297) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6281576800937297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6281576800937297) _gate_q_1;
}
gate r_5070594432(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.09143853554547073, -1.1596560252162833, 1.1596560252162833) _gate_q_0;
}
gate rzx_5070601104(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6457454832805642) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5070586608(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.778635166296864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070592656(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.7153117338573135) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.058660126069372) _gate_q_1;
  ry(-1.058660126069372) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.7153117338573135) _gate_q_0;
}
gate cu1_5070599856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.8292413244105377) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.8292413244105377) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.8292413244105377) _gate_q_1;
}
gate cu3_5070593904(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.8468297818110155) _gate_q_0;
  u1(-0.6344935993923806) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.8144084253468491, 0, -4.8468297818110155) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.8144084253468491, 5.481323381203397, 0) _gate_q_1;
}
gate xx_minus_yy_5070598848(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.409229361309726) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.29539226214513614) _gate_q_0;
  ry(-0.29539226214513614) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.409229361309726) _gate_q_1;
}
gate cu1_5070598896(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.3228718672955646) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.3228718672955646) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.3228718672955646) _gate_q_1;
}
gate rxx_5070593232(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7761973051640934) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate ryy_5070586800(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.096750163462341) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5070596016(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.636102823740637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_plus_yy_5070594000(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.3629582346892302) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.5202797706394784) _gate_q_1;
  ry(-2.5202797706394784) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.3629582346892302) _gate_q_0;
}
gate ryy_5070588912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.90407032754228) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5070591936(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.910669401979332) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5070593328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.9244503763600179) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.9244503763600179) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.9244503763600179) _gate_q_1;
}
gate rzx_5070596832(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.8379536056624772) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  csdg _gate_q_10, _gate_q_4;
  r_5070589920(1.0495014674523144, 1.0430214736023744) _gate_q_1;
  cu1_5070601488(1.2563153601874595) _gate_q_7, _gate_q_5;
  r_5070594432(0.09143853554547073, 0.41114030157861314) _gate_q_3;
  rzx_5070601104(2.6457454832805642) _gate_q_8, _gate_q_2;
  cp(2.984446426221041) _gate_q_0, _gate_q_9;
  s _gate_q_6;
  crz(4.5855771998333354) _gate_q_1, _gate_q_6;
  z _gate_q_2;
  h _gate_q_0;
  cu(0.6296596215211246, 0.6984672931222096, 0.9354370239783177, 3.3421922930857613) _gate_q_4, _gate_q_8;
  rxx_5070586608(4.778635166296864) _gate_q_9, _gate_q_5;
  y _gate_q_10;
  swap _gate_q_3, _gate_q_7;
  sdg _gate_q_2;
  dcx _gate_q_3, _gate_q_0;
  U(0.8049300035366291, 1.5909071886628254, 0.45533095954831143) _gate_q_7;
  iswap _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_9;
  id _gate_q_5;
  cp(5.434169539613212) _gate_q_8, _gate_q_10;
  csdg _gate_q_10, _gate_q_4;
  xx_plus_yy_5070592656(2.117320252138744, 0.7153117338573135) _gate_q_6, _gate_q_1;
  rz(4.790454517548732) _gate_q_5;
  u1(1.4085104209493438) _gate_q_8;
  cry(3.1493566142566745) _gate_q_2, _gate_q_7;
  cu1_5070599856(5.658482648821075) _gate_q_3, _gate_q_9;
  p(5.642976956794604) _gate_q_0;
  cu3_5070593904(1.6288168506936982, 5.481323381203397, 4.212336182418635) _gate_q_7, _gate_q_6;
  cp(5.988286084046707) _gate_q_3, _gate_q_10;
  sxdg _gate_q_5;
  ry(3.517153903625851) _gate_q_4;
  sxdg _gate_q_8;
  x _gate_q_2;
  id _gate_q_9;
  xx_minus_yy_5070598848(0.5907845242902723, 2.409229361309726) _gate_q_1, _gate_q_0;
  cu1_5070598896(0.6457437345911292) _gate_q_10, _gate_q_4;
  rxx_5070593232(3.7761973051640934) _gate_q_2, _gate_q_6;
  cs _gate_q_3, _gate_q_5;
  U(3.094254660007599, 6.277291568928678, 2.6860841871063164) _gate_q_1;
  ryy_5070586800(3.096750163462341) _gate_q_9, _gate_q_7;
  rxx_5070596016(3.636102823740637) _gate_q_8, _gate_q_0;
  xx_plus_yy_5070594000(5.040559541278957, 1.3629582346892302) _gate_q_5, _gate_q_2;
  rz(0.8424763580442624) _gate_q_1;
  sx _gate_q_7;
  sxdg _gate_q_8;
  ryy_5070588912(4.90407032754228) _gate_q_10, _gate_q_4;
  p(4.648158377010829) _gate_q_9;
  u2(0.1673850304131166, 3.6439916594854096) _gate_q_0;
  csdg _gate_q_3, _gate_q_6;
  cz _gate_q_8, _gate_q_2;
  h _gate_q_3;
  cs _gate_q_9, _gate_q_1;
  cx _gate_q_4, _gate_q_10;
  s _gate_q_0;
  tdg _gate_q_7;
  h _gate_q_5;
  z _gate_q_6;
  cry(3.9440480851801363) _gate_q_8, _gate_q_6;
  csdg _gate_q_0, _gate_q_9;
  u2(2.0517423378177515, 5.376708955273299) _gate_q_7;
  sxdg _gate_q_2;
  cx _gate_q_3, _gate_q_1;
  cry(2.4484731460238076) _gate_q_10, _gate_q_4;
  rx(2.6609250022111812) _gate_q_5;
  iswap _gate_q_7, _gate_q_5;
  U(3.3075980270415744, 4.809652369294794, 6.142083443812687) _gate_q_3;
  rzz_5070591936(3.910669401979332) _gate_q_10, _gate_q_2;
  cu1_5070593328(1.8489007527200358) _gate_q_9, _gate_q_4;
  rzx_5070596832(2.8379536056624772) _gate_q_1, _gate_q_0;
  iswap _gate_q_8, _gate_q_6;
}
gate xx_plus_yy_5070597936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.718055232777151) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.22171326884121134) _gate_q_1;
  ry(-0.22171326884121134) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.718055232777151) _gate_q_0;
}
gate cu1_5070596496(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.562087670784305) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.562087670784305) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.562087670784305) _gate_q_1;
}
gate r_5070594144(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.1397965663686693, -1.1895214321378176, 1.1895214321378176) _gate_q_0;
}
gate r_5070590208(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.962692530945965, 0.3464739223326019, -0.3464739223326019) _gate_q_0;
}
gate xx_minus_yy_5070594960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.1713210361901414) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1020822010546811) _gate_q_0;
  ry(-1.1020822010546811) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.1713210361901414) _gate_q_1;
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
gate cu1_5070587328(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.8520493453332707) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.8520493453332707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.8520493453332707) _gate_q_1;
}
gate rzx_5070598080(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.860990524588852) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
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
gate cu3_5070597072(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.3166193918259874) _gate_q_0;
  u1(-0.5689790875812628) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.9459912022028054, 0, -3.3166193918259874) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.9459912022028054, 3.8855984794072502, 0) _gate_q_1;
}
gate cu3_5070591648(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.4722253158374796) _gate_q_0;
  u1(2.284132009461162) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.5818840408764578, 0, -2.4722253158374796) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.5818840408764578, 0.18809330637631727, 0) _gate_q_1;
}
gate r_5070599904(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.376107979142664, 1.653949212599668, -1.653949212599668) _gate_q_0;
}
gate ryy_5070598512(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.6720735142754903) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5070592464(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.50955763255059) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070601248(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.139745791877628, 4.70924904674086, -4.70924904674086) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10 {
  csdg _gate_q_3, _gate_q_4;
  xx_plus_yy_5070597936(0.4434265376824227, 5.718055232777151) _gate_q_5, _gate_q_0;
  id _gate_q_2;
  cu1_5070596496(3.12417534156861) _gate_q_7, _gate_q_9;
  cy _gate_q_8, _gate_q_10;
  p(5.457171932302403) _gate_q_1;
  rz(5.478561259837283) _gate_q_6;
  sx _gate_q_1;
  ch _gate_q_8, _gate_q_4;
  iswap _gate_q_2, _gate_q_10;
  dcx _gate_q_0, _gate_q_5;
  cry(1.533112505134936) _gate_q_3, _gate_q_6;
  y _gate_q_9;
  u3(0.287274860069974, 2.6424565013524797, 4.876522489492466) _gate_q_7;
  crz(3.0426540195934564) _gate_q_4, _gate_q_9;
  r_5070594144(1.1397965663686693, 0.3812748946570791) _gate_q_2;
  cp(4.483452532508086) _gate_q_7, _gate_q_1;
  tdg _gate_q_5;
  r_5070590208(5.962692530945965, 1.9172702491274984) _gate_q_3;
  id _gate_q_6;
  u3(2.425251200878747, 5.6078139195231005, 6.016576245622979) _gate_q_10;
  id _gate_q_8;
  h _gate_q_0;
  csdg _gate_q_2, _gate_q_9;
  crz(2.837586845960085) _gate_q_1, _gate_q_5;
  id _gate_q_7;
  xx_minus_yy_5070594960(2.2041644021093623, 2.1713210361901414) _gate_q_10, _gate_q_4;
  x _gate_q_6;
  rz(0.044659037753157264) _gate_q_3;
  ch _gate_q_0, _gate_q_8;
  cz _gate_q_6, _gate_q_1;
  h _gate_q_5;
  sxdg _gate_q_0;
  cz _gate_q_2, _gate_q_9;
  ecr _gate_q_8, _gate_q_7;
  rz(4.626501092413941) _gate_q_3;
  cz _gate_q_10, _gate_q_4;
  rx(5.169774672911753) _gate_q_0;
  sxdg _gate_q_2;
  t _gate_q_8;
  sxdg _gate_q_6;
  sx _gate_q_10;
  cu1_5070587328(1.7040986906665414) _gate_q_3, _gate_q_5;
  rzx_5070598080(4.860990524588852) _gate_q_9, _gate_q_1;
  ry(5.938831311364911) _gate_q_4;
  U(1.7756014417709838, 3.302992373847306, 4.105232411641293) _gate_q_7;
  id _gate_q_9;
  ry(0.9043817990761412) _gate_q_0;
  csx _gate_q_1, _gate_q_3;
  dcx _gate_q_4, _gate_q_7;
  cu3_5070597072(3.891982404405611, 3.8855984794072502, 2.7476403042447246) _gate_q_2, _gate_q_6;
  cu3_5070591648(1.1637680817529157, 0.18809330637631727, 4.756357325298642) _gate_q_8, _gate_q_10;
  rz(6.202800811847246) _gate_q_5;
  r_5070599904(5.376107979142664, 3.2247455393945645) _gate_q_0;
  p(1.2019829761426548) _gate_q_8;
  iswap _gate_q_2, _gate_q_6;
  ryy_5070598512(2.6720735142754903) _gate_q_1, _gate_q_5;
  iswap _gate_q_10, _gate_q_4;
  crx(3.207189487666019) _gate_q_3, _gate_q_9;
  z _gate_q_7;
  crz(2.4279012546270184) _gate_q_4, _gate_q_6;
  sx _gate_q_9;
  ecr _gate_q_0, _gate_q_2;
  rzx_5070592464(0.50955763255059) _gate_q_7, _gate_q_10;
  cu(0.5765458318636635, 3.3871820291213135, 3.150962435814988, 2.230302644856346) _gate_q_1, _gate_q_8;
  ch _gate_q_3, _gate_q_5;
  cu(1.8743328505434278, 3.342678699375218, 2.9985467467124645, 1.5124703724233821) _gate_q_10, _gate_q_0;
  dcx _gate_q_1, _gate_q_4;
  U(4.054021316568519, 2.3206432137317066, 0.057591339356504394) _gate_q_3;
  csx _gate_q_5, _gate_q_9;
  r_5070601248(5.139745791877628, 6.280045373535756) _gate_q_7;
  id _gate_q_8;
  U(2.862851054771629, 0.02321874451462745, 3.043045696069137) _gate_q_2;
  z _gate_q_6;
}