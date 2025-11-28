gate mcphase_5363240160(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5 {
  cp(pi/32) _gate_q_4, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(-pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_4, _gate_q_3;
  cp(pi/32) _gate_q_3, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_3, _gate_q_2;
  cp(-pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_4, _gate_q_2;
  cp(pi/32) _gate_q_2, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_2, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_3, _gate_q_1;
  cp(-pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_4, _gate_q_1;
  cp(pi/32) _gate_q_1, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_1, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_2, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_3, _gate_q_0;
  cp(-pi/32) _gate_q_0, _gate_q_5;
  cx _gate_q_4, _gate_q_0;
  cp(pi/32) _gate_q_0, _gate_q_5;
}
gate c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  U(pi/2, 0, pi) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/4, -pi/2, pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  U(pi/2, pi/4, -3*pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_2, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_6, _gate_q_3;
  U(pi/2, pi/4, -pi) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  p(-pi/4) _gate_q_3;
  cx _gate_q_0, _gate_q_3;
  p(pi/4) _gate_q_3;
  cx _gate_q_1, _gate_q_3;
  U(pi/2, 0, 3*pi/4) _gate_q_3;
  U(pi/4, pi/2, -pi/2) _gate_q_6;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  U(pi/2, pi/4, -3*pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, -pi/4, 3*pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_5, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_6, _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  p(-pi/4) _gate_q_2;
  cx _gate_q_3, _gate_q_2;
  p(pi/4) _gate_q_2;
  cx _gate_q_4, _gate_q_2;
  U(pi/2, 0, 3*pi/4) _gate_q_2;
  U(pi/2, pi/4, -pi) _gate_q_6;
  mcphase_5363240160(pi/2) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5;
}
gate Oracle _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
  x _gate_q_6;
  c6z _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  x _gate_q_1;
  x _gate_q_3;
  x _gate_q_5;
  x _gate_q_6;
}
gate cu1_5364575712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
}
gate cu1_5364572112(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364569472(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364564720(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364564096(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364566352(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364564288(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364574800(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364569856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364578400(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364572256(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364566304(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364572640(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364576432(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364569088(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364565008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364574752(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364578976(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364565872(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364570144(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364569280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363237712(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363242080(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363241744(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5363248608(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364570048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364570960(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364569568(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364579072(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364565152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364577776(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate cu1_5364577632(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(-pi/64) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(pi/64) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(-pi/64) _gate_q_1;
}
gate mcu1_5363240880(_gate_p_0) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  cu1_5364575712(pi/32) _gate_q_5, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5364572112(-pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_5, _gate_q_4;
  cu1_5364575712(pi/32) _gate_q_4, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5364569472(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5364575712(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_4, _gate_q_3;
  cu1_5364564720(-pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_5, _gate_q_3;
  cu1_5364575712(pi/32) _gate_q_3, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5364564096(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364575712(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5364566352(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364575712(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_3, _gate_q_2;
  cu1_5364564288(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364575712(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_4, _gate_q_2;
  cu1_5364574800(-pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_5, _gate_q_2;
  cu1_5364575712(pi/32) _gate_q_2, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5364569856(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5364578400(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5364572256(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5364566304(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_2, _gate_q_1;
  cu1_5364572640(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5364576432(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_3, _gate_q_1;
  cu1_5364569088(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_4, _gate_q_1;
  cu1_5364565008(-pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_5, _gate_q_1;
  cu1_5364575712(pi/32) _gate_q_1, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5364574752(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364578976(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5364565872(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364570144(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5364569280(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363237712(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5363242080(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5363241744(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_1, _gate_q_0;
  cu1_5363248608(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364570048(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5364570960(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364569568(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_2, _gate_q_0;
  cu1_5364579072(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364565152(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_3, _gate_q_0;
  cu1_5364577776(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_4, _gate_q_0;
  cu1_5364577632(-pi/32) _gate_q_0, _gate_q_6;
  cx _gate_q_5, _gate_q_0;
  cu1_5364575712(pi/32) _gate_q_0, _gate_q_6;
}
gate mcx _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6 {
  h _gate_q_6;
  mcu1_5363240880(pi) _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6;
  h _gate_q_6;
}