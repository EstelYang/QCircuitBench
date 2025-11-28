gate ryy_5070810688(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.1681273631435634) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5070807904(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.751324565373569) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.3815219702087184) _gate_q_1;
  ry(-0.3815219702087184) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.751324565373569) _gate_q_0;
}
gate rzz_5070807856(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.7173057610604707) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5070801136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.164881185537442) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.10527530129552913) _gate_q_1;
  ry(-0.10527530129552913) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.164881185537442) _gate_q_0;
}
gate cu1_5070808768(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.128929151365797) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.128929151365797) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.128929151365797) _gate_q_1;
}
gate rxx_5070800032(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.4327293588293577) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5070802480(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.3584561229960412) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
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
gate xx_plus_yy_5070799312(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.446113386553849) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8898702904236726) _gate_q_1;
  ry(-1.8898702904236726) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.446113386553849) _gate_q_0;
}
gate ryy_5070813568(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.4790944982759155) _gate_q_1;
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
gate cu3_5070800992(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.461979021695875) _gate_q_0;
  u1(1.2661422884567637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8999069118777137, 0, -2.461979021695875) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8999069118777137, 1.195836733239111, 0) _gate_q_1;
}
gate xx_plus_yy_5070814768(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9051291438797562) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.0868106753926154) _gate_q_1;
  ry(-3.0868106753926154) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9051291438797562) _gate_q_0;
}
gate cu3_5070809248(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.2929426077217085) _gate_q_0;
  u1(1.169694815358837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7997560002638298, 0, -3.2929426077217085) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7997560002638298, 2.123247792362872, 0) _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate rzz_5070801280(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.5804922061670352) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  ry(1.1450502033758108) _gate_q_12;
  sx _gate_q_4;
  rz(2.603032142166664) _gate_q_7;
  ryy_5070810688(1.1681273631435634) _gate_q_2, _gate_q_0;
  dcx _gate_q_1, _gate_q_5;
  xx_plus_yy_5070807904(0.7630439404174368, 5.751324565373569) _gate_q_6, _gate_q_11;
  h _gate_q_8;
  sdg _gate_q_3;
  rzz_5070807856(1.7173057610604707) _gate_q_9, _gate_q_10;
  t _gate_q_9;
  U(2.122935191860772, 6.2541027367705855, 3.430943762819258) _gate_q_10;
  xx_plus_yy_5070801136(0.21055060259105826, 5.164881185537442) _gate_q_12, _gate_q_4;
  cx _gate_q_6, _gate_q_1;
  cp(2.2232897129369835) _gate_q_11, _gate_q_5;
  cy _gate_q_7, _gate_q_3;
  swap _gate_q_8, _gate_q_2;
  ry(3.3708717190561472) _gate_q_0;
  cu1_5070808768(4.257858302731594) _gate_q_2, _gate_q_10;
  rx(4.658267527227692) _gate_q_0;
  rxx_5070800032(1.4327293588293577) _gate_q_9, _gate_q_7;
  u3(1.6499357125650402, 4.058845933891068, 4.321958776537993) _gate_q_3;
  t _gate_q_4;
  rxx_5070802480(2.3584561229960412) _gate_q_8, _gate_q_11;
  csx _gate_q_12, _gate_q_5;
  ry(1.6522066509023714) _gate_q_1;
  s _gate_q_6;
  x _gate_q_4;
  rx(1.7741717214074693) _gate_q_6;
  xx_plus_yy_5070799312(3.779740580847345, 1.446113386553849) _gate_q_12, _gate_q_5;
  ryy_5070813568(5.4790944982759155) _gate_q_1, _gate_q_9;
  ecr _gate_q_0, _gate_q_3;
  crx(0.17349073248270547) _gate_q_2, _gate_q_7;
  crx(5.590229949209702) _gate_q_10, _gate_q_11;
  rz(6.126471349269069) _gate_q_8;
  u1(2.831924402486553) _gate_q_9;
  cz _gate_q_7, _gate_q_4;
  swap _gate_q_5, _gate_q_11;
  csx _gate_q_0, _gate_q_10;
  id _gate_q_8;
  sx _gate_q_6;
  cy _gate_q_2, _gate_q_3;
  tdg _gate_q_12;
  U(1.0801719653987027, 1.1380961700700083, 3.041880847309049) _gate_q_1;
  cp(4.747725018387084) _gate_q_11, _gate_q_2;
  ch _gate_q_6, _gate_q_10;
  swap _gate_q_8, _gate_q_7;
  csx _gate_q_1, _gate_q_5;
  cy _gate_q_4, _gate_q_3;
  cx _gate_q_12, _gate_q_9;
  sx _gate_q_0;
  cs _gate_q_1, _gate_q_4;
  u1(2.4997509089645478) _gate_q_10;
  sx _gate_q_5;
  crx(0.33936407313138844) _gate_q_7, _gate_q_2;
  u1(1.9579761982725703) _gate_q_6;
  cs _gate_q_9, _gate_q_8;
  ch _gate_q_0, _gate_q_11;
  cx _gate_q_12, _gate_q_3;
  cp(1.528958603112079) _gate_q_3, _gate_q_1;
  cu3_5070800992(3.7998138237554273, 1.195836733239111, 3.7281213101526385) _gate_q_2, _gate_q_7;
  csx _gate_q_12, _gate_q_10;
  t _gate_q_11;
  ry(0.8460698425072576) _gate_q_9;
  rx(3.994023883951481) _gate_q_6;
  xx_plus_yy_5070814768(6.173621350785231, 1.9051291438797562) _gate_q_8, _gate_q_4;
  cu3_5070809248(3.5995120005276595, 2.123247792362872, 4.462637423080546) _gate_q_0, _gate_q_5;
  p(0.3481486651971051) _gate_q_1;
  ch _gate_q_2, _gate_q_4;
  iswap _gate_q_11, _gate_q_7;
  tdg _gate_q_6;
  rz(2.330975850131243) _gate_q_0;
  tdg _gate_q_10;
  t _gate_q_5;
  ch _gate_q_9, _gate_q_8;
  id _gate_q_3;
  s _gate_q_12;
  u2(4.768801428243069, 4.012245489628669) _gate_q_8;
  csdg _gate_q_0, _gate_q_10;
  rz(3.094422048013449) _gate_q_2;
  p(4.318005318662251) _gate_q_4;
  t _gate_q_6;
  x _gate_q_9;
  sx _gate_q_7;
  rzz_5070801280(1.5804922061670352) _gate_q_1, _gate_q_5;
  rz(4.7495615699183995) _gate_q_12;
  ry(1.6754957554517402) _gate_q_11;
  rx(2.408774044054857) _gate_q_3;
}
gate rxx_5070813136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1838359810461028) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5070812608(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8138781237459285) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_minus_yy_5070799264(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-4.698218459021613) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.7570912486475238) _gate_q_0;
  ry(-0.7570912486475238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(4.698218459021613) _gate_q_1;
}
gate rzx_5070809200(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.480463591825138) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5070808864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.275884771638049, 3.97041519564553, -3.97041519564553) _gate_q_0;
}
gate xx_plus_yy_5070811744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.2166528914003356) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.016712569454463) _gate_q_1;
  ry(-3.016712569454463) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.2166528914003356) _gate_q_0;
}
gate cu1_5070813280(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.5838576620662304) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.5838576620662304) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.5838576620662304) _gate_q_1;
}
gate xx_minus_yy_5070811072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.917718826135802) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7384050880387267) _gate_q_0;
  ry(-2.7384050880387267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.917718826135802) _gate_q_1;
}
gate cu3_5070805408(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.2214431431951045) _gate_q_0;
  u1(2.040536175181467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.7850441906953534, 0, -2.2214431431951045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.7850441906953534, 0.18090696801363737, 0) _gate_q_1;
}
gate xx_plus_yy_5070801664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.816784363782941) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.5767539308089243) _gate_q_1;
  ry(-0.5767539308089243) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.816784363782941) _gate_q_0;
}
gate r_5070814864(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.18318136671553642, 1.2027269534527623, -1.2027269534527623) _gate_q_0;
}
gate xx_minus_yy_5070814720(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-5.715669813101098) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.4859586017573297) _gate_q_0;
  ry(-0.4859586017573297) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(5.715669813101098) _gate_q_1;
}
gate rxx_5070814384(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.1899070736946484) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzx_5070801424(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8329324946922732) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_minus_yy_5070812512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.6238398147805198) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.5057141068394629) _gate_q_0;
  ry(-0.5057141068394629) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.6238398147805198) _gate_q_1;
}
gate xx_plus_yy_5070808960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.440234692701792) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8591033897163356) _gate_q_1;
  ry(-1.8591033897163356) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.440234692701792) _gate_q_0;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12 {
  cp(4.837337755915794) _gate_q_3, _gate_q_10;
  ry(2.901321786986225) _gate_q_1;
  z _gate_q_7;
  rxx_5070813136(3.1838359810461028) _gate_q_6, _gate_q_5;
  ch _gate_q_12, _gate_q_2;
  iswap _gate_q_4, _gate_q_9;
  ryy_5070812608(1.8138781237459285) _gate_q_11, _gate_q_8;
  h _gate_q_0;
  xx_minus_yy_5070799264(1.5141824972950475, 4.698218459021613) _gate_q_3, _gate_q_9;
  u3(1.6347138882951027, 5.15468604277011, 3.3547648775654344) _gate_q_0;
  cy _gate_q_10, _gate_q_8;
  rzx_5070809200(4.480463591825138) _gate_q_11, _gate_q_4;
  h _gate_q_1;
  u3(3.743074897111455, 4.2578312254889505, 4.137543874726827) _gate_q_7;
  csx _gate_q_6, _gate_q_5;
  r_5070808864(4.275884771638049, 5.541211522440427) _gate_q_12;
  ry(5.596797561622677) _gate_q_2;
  crx(0.1060299644041258) _gate_q_8, _gate_q_7;
  xx_plus_yy_5070811744(6.033425138908926, 2.2166528914003356) _gate_q_0, _gate_q_11;
  p(3.6553494621019476) _gate_q_3;
  x _gate_q_9;
  cu1_5070813280(3.1677153241324607) _gate_q_12, _gate_q_4;
  rz(3.121169040649762) _gate_q_10;
  ry(6.282513044080278) _gate_q_5;
  h _gate_q_1;
  ch _gate_q_2, _gate_q_6;
  iswap _gate_q_7, _gate_q_6;
  dcx _gate_q_8, _gate_q_5;
  tdg _gate_q_9;
  xx_minus_yy_5070811072(5.4768101760774535, 5.917718826135802) _gate_q_10, _gate_q_12;
  sdg _gate_q_0;
  swap _gate_q_3, _gate_q_2;
  s _gate_q_4;
  sxdg _gate_q_11;
  id _gate_q_1;
  t _gate_q_2;
  cz _gate_q_5, _gate_q_6;
  swap _gate_q_10, _gate_q_8;
  csdg _gate_q_9, _gate_q_3;
  cu3_5070805408(3.5700883813907067, 0.18090696801363737, 4.2619793183765715) _gate_q_12, _gate_q_1;
  crx(3.6942120481591605) _gate_q_11, _gate_q_7;
  cu(4.0266294211059375, 2.4269517692064504, 0.8583866585620549, 3.364993790289288) _gate_q_0, _gate_q_4;
  rz(3.339884780467373) _gate_q_6;
  csdg _gate_q_0, _gate_q_7;
  sx _gate_q_3;
  crx(4.813367481313952) _gate_q_2, _gate_q_11;
  xx_plus_yy_5070801664(1.1535078616178487, 2.816784363782941) _gate_q_12, _gate_q_4;
  sdg _gate_q_10;
  id _gate_q_1;
  cy _gate_q_9, _gate_q_8;
  U(0.6831362385531429, 2.645097736947938, 2.781559002476751) _gate_q_5;
  r_5070814864(0.18318136671553642, 2.773523280247659) _gate_q_12;
  u3(5.600783115661194, 3.704005473025172, 4.550122441141234) _gate_q_4;
  sxdg _gate_q_6;
  id _gate_q_8;
  x _gate_q_2;
  y _gate_q_0;
  xx_minus_yy_5070814720(0.9719172035146594, 5.715669813101098) _gate_q_3, _gate_q_11;
  cp(5.077784483321964) _gate_q_7, _gate_q_10;
  u1(1.7602832960002595) _gate_q_9;
  rxx_5070814384(3.1899070736946484) _gate_q_5, _gate_q_1;
  h _gate_q_7;
  sx _gate_q_5;
  cs _gate_q_9, _gate_q_0;
  u2(0.21748576177830967, 4.563013649254168) _gate_q_4;
  sxdg _gate_q_3;
  cu(2.0403839991255737, 2.1858760133348203, 2.298438330724707, 4.6771659090730875) _gate_q_6, _gate_q_1;
  crx(3.1227784864866535) _gate_q_11, _gate_q_12;
  sdg _gate_q_8;
  csx _gate_q_2, _gate_q_10;
  tdg _gate_q_2;
  rzx_5070801424(0.8329324946922732) _gate_q_5, _gate_q_10;
  rx(0.08560998080251023) _gate_q_7;
  cp(2.2793944359540395) _gate_q_11, _gate_q_12;
  ry(4.6363602392723084) _gate_q_6;
  cu(5.776650578583906, 3.850569381475411, 4.797321343530202, 3.3386461235836324) _gate_q_1, _gate_q_0;
  h _gate_q_8;
  sxdg _gate_q_4;
  ry(3.982648441113143) _gate_q_3;
  p(2.02752416264623) _gate_q_9;
  swap _gate_q_9, _gate_q_1;
  xx_minus_yy_5070812512(1.0114282136789259, 1.6238398147805198) _gate_q_0, _gate_q_11;
  h _gate_q_10;
  xx_plus_yy_5070808960(3.718206779432671, 2.440234692701792) _gate_q_3, _gate_q_6;
  crx(1.302010920579889) _gate_q_7, _gate_q_5;
  cs _gate_q_4, _gate_q_12;
  cz _gate_q_8, _gate_q_2;
}