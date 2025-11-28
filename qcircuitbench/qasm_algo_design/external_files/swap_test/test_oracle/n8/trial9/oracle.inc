gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_minus_yy_5106579936(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.0580736231644492) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.1843819056435501) _gate_q_0;
  ry(-0.1843819056435501) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.0580736231644492) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate ryy_5106580320(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.2931526531706052) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
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
gate rzz_5106580416(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.5757501806502497) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5106566064(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.971968926748915, 2.8706333126745163, -2.8706333126745163) _gate_q_0;
}
gate rxx_5106581136(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.739734496231246) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106580752(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(2.299826968305582) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5106572784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.4234237123121637) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5106570480(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.8431951195033787) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5106580848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.704628436732065) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.704628436732065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.704628436732065) _gate_q_1;
}
gate ryy_5106571824(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.2185565992324539) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  xx_minus_yy_5106579936(0.3687638112871002, 1.0580736231644492) _gate_q_7, _gate_q_2;
  u2(0.9757599744617276, 2.7235887371782668) _gate_q_5;
  y _gate_q_3;
  cp(5.001944280706539) _gate_q_1, _gate_q_4;
  csdg _gate_q_6, _gate_q_0;
  cz _gate_q_3, _gate_q_7;
  ryy_5106580320(3.2931526531706052) _gate_q_2, _gate_q_6;
  rx(5.770923886818627) _gate_q_4;
  y _gate_q_0;
  y _gate_q_5;
  s _gate_q_1;
  sxdg _gate_q_7;
  x _gate_q_0;
  cu(5.363082781177644, 1.9164463400547966, 0.9525176185921191, 0.8154456684290703) _gate_q_5, _gate_q_2;
  crz(5.693722080823759) _gate_q_4, _gate_q_3;
  ry(1.4386498939723884) _gate_q_1;
  h _gate_q_6;
  ecr _gate_q_1, _gate_q_4;
  ecr _gate_q_2, _gate_q_6;
  U(5.26398819844557, 1.8091994996193994, 4.652566061368536) _gate_q_7;
  rzz_5106580416(0.5757501806502497) _gate_q_5, _gate_q_0;
  h _gate_q_3;
  csdg _gate_q_1, _gate_q_5;
  sx _gate_q_7;
  cu(5.146949774665259, 5.137003313186082, 5.432294980245391, 5.478732678907742) _gate_q_3, _gate_q_0;
  csdg _gate_q_6, _gate_q_2;
  r_5106566064(5.971968926748915, 4.441429639469413) _gate_q_4;
  tdg _gate_q_1;
  rxx_5106581136(3.739734496231246) _gate_q_7, _gate_q_6;
  sdg _gate_q_2;
  ecr _gate_q_5, _gate_q_3;
  sx _gate_q_0;
  s _gate_q_4;
  rzz_5106580752(2.299826968305582) _gate_q_2, _gate_q_5;
  crx(5.068236047430612) _gate_q_4, _gate_q_6;
  sdg _gate_q_1;
  sxdg _gate_q_0;
  x _gate_q_7;
  ry(3.37465923155514) _gate_q_3;
  rxx_5106572784(0.4234237123121637) _gate_q_2, _gate_q_0;
  rzz_5106570480(0.8431951195033787) _gate_q_4, _gate_q_7;
  cu1_5106580848(5.40925687346413) _gate_q_3, _gate_q_5;
  ryy_5106571824(1.2185565992324539) _gate_q_6, _gate_q_1;
}
gate xx_plus_yy_5105864528(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.5170361605191551) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.0719701003845168) _gate_q_1;
  ry(-0.0719701003845168) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.5170361605191551) _gate_q_0;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate xx_minus_yy_5105870576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.55379902267687) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.831411633608739) _gate_q_0;
  ry(-2.831411633608739) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.55379902267687) _gate_q_1;
}
gate r_5105869088(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.06699515694565, -1.4409824692511475, 1.4409824692511475) _gate_q_0;
}
gate rxx_5105869472(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.637979520784764) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5105868944(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.5874346950468348) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu1_5105863904(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.1318461298553033) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.1318461298553033) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.1318461298553033) _gate_q_1;
}
gate rzz_5105871296(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.54581447377061) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate ryy_5105866496(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.8911900740523749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5105875520(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.237281343882774, 3.157885766814699, -3.157885766814699) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate cu1_5105871152(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0707558834010116) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0707558834010116) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0707558834010116) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7 {
  z _gate_q_6;
  xx_plus_yy_5105864528(0.1439402007690336, 0.5170361605191551) _gate_q_7, _gate_q_2;
  rz(1.2528841464512137) _gate_q_1;
  iswap _gate_q_4, _gate_q_0;
  z _gate_q_5;
  rx(0.3154697790784958) _gate_q_3;
  sxdg _gate_q_7;
  sx _gate_q_1;
  csdg _gate_q_3, _gate_q_2;
  x _gate_q_6;
  sxdg _gate_q_0;
  xx_minus_yy_5105870576(5.662823267217478, 0.55379902267687) _gate_q_4, _gate_q_5;
  t _gate_q_1;
  r_5105869088(5.06699515694565, 0.12981385754374905) _gate_q_7;
  ry(0.6601241266422349) _gate_q_3;
  rxx_5105869472(2.637979520784764) _gate_q_6, _gate_q_5;
  rxx_5105868944(1.5874346950468348) _gate_q_0, _gate_q_4;
  z _gate_q_2;
  u2(5.834476260042622, 1.4222482918834625) _gate_q_0;
  ecr _gate_q_4, _gate_q_5;
  ch _gate_q_1, _gate_q_6;
  crz(2.646598454809138) _gate_q_7, _gate_q_2;
  id _gate_q_3;
  cu1_5105863904(6.263692259710607) _gate_q_3, _gate_q_0;
  sx _gate_q_4;
  cu(1.2259963040423063, 4.2359475270719695, 2.2251723546040916, 0.6281817842232441) _gate_q_1, _gate_q_7;
  swap _gate_q_6, _gate_q_2;
  sdg _gate_q_5;
  cu(1.5452865487780802, 4.168752285294034, 1.7908356357329362, 0.08647255773911207) _gate_q_1, _gate_q_6;
  csdg _gate_q_5, _gate_q_2;
  rzz_5105871296(4.54581447377061) _gate_q_3, _gate_q_7;
  ryy_5105866496(0.8911900740523749) _gate_q_4, _gate_q_0;
  r_5105875520(4.237281343882774, 4.728682093609596) _gate_q_7;
  rx(0.00995816314759248) _gate_q_5;
  cz _gate_q_4, _gate_q_0;
  cs _gate_q_3, _gate_q_2;
  cu1_5105871152(6.141511766802023) _gate_q_6, _gate_q_1;
  iswap _gate_q_6, _gate_q_5;
  u2(2.2260148591060664, 5.046236008073996) _gate_q_4;
  u3(5.362865423243978, 0.8693460268996881, 4.72965349550231) _gate_q_0;
  sxdg _gate_q_1;
  cy _gate_q_7, _gate_q_3;
  id _gate_q_2;
}