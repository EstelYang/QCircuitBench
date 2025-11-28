gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate rzx_5108209264(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.18813180114170397) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5108211616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.9085595975447982) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.8311995057819261) _gate_q_1;
  ry(-1.8311995057819261) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.9085595975447982) _gate_q_0;
}
gate rxx_5108208784(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8240073494961417) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5108216512(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.132763945952203) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5108211664(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.844887981646468) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108211856(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.714910642102749) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.714910642102749) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.714910642102749) _gate_q_1;
}
gate cu3_5108213488(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2579333572065425) _gate_q_0;
  u1(0.6175306422179345) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.1440940537017047, 0, -1.2579333572065425) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.1440940537017047, 0.640402714988608, 0) _gate_q_1;
}
gate rzz_5108206384(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(6.037832507507659) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu3_5108209024(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.215528674956216) _gate_q_0;
  u1(0.22780621906528342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.542926218431116, 0, -3.215528674956216) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.542926218431116, 2.9877224558909328, 0) _gate_q_1;
}
gate rxx_5108205808(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7273662823492065) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5108207584(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.610840882852072) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(0.07379896954944537) _gate_q_0;
  ry(-0.07379896954944537) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.610840882852072) _gate_q_1;
}
gate rzz_5108211328(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.268941726259927) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5108212960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.459436060808465) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5108207056(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.8121684357058514) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rxx_5108207632(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.473049140175237) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate cu3_5108213968(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.8351107156341504) _gate_q_0;
  u1(2.3257574907360556) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.19813651919023673, 0, -3.8351107156341504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.19813651919023673, 1.5093532248980945, 0) _gate_q_1;
}
gate xx_minus_yy_5108206576(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.3182778450828425) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.7910932132087227) _gate_q_0;
  ry(-2.7910932132087227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.3182778450828425) _gate_q_1;
}
gate cu1_5108206816(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.36444168683448047) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.36444168683448047) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.36444168683448047) _gate_q_1;
}
gate xx_plus_yy_5108217664(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.732264566250726) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4488011105631196) _gate_q_1;
  ry(-2.4488011105631196) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.732264566250726) _gate_q_0;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate cu1_5108213584(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(3.0567142425033467) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-3.0567142425033467) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(3.0567142425033467) _gate_q_1;
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
gate xx_plus_yy_5108204272(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.5218662933638107) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3359820246955194) _gate_q_1;
  ry(-2.3359820246955194) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.5218662933638107) _gate_q_0;
}
gate rzx_5108209696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.6156082566484358) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rzx_5108209216(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.070827903350864) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5108205328(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.8911292412070044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108204224(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.780627490391262, 3.739772589602233, -3.739772589602233) _gate_q_0;
}
gate cu1_5108216848(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.277001865015381) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.277001865015381) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.277001865015381) _gate_q_1;
}
gate ryy_5108208880(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.7332316164185319) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5108213296(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.784441226061798) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate cu1_5108214880(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.136328808436547) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.136328808436547) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.136328808436547) _gate_q_1;
}
gate rzz_5108219056(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.28702098830249007) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  cz _gate_q_10, _gate_q_4;
  cs _gate_q_8, _gate_q_13;
  u3(1.749221140364982, 1.4805559232838443, 3.3520856229522895) _gate_q_2;
  z _gate_q_17;
  cx _gate_q_15, _gate_q_0;
  rzx_5108209264(0.18813180114170397) _gate_q_12, _gate_q_16;
  cp(1.7763010736650033) _gate_q_7, _gate_q_5;
  xx_plus_yy_5108211616(3.6623990115638523, 1.9085595975447982) _gate_q_3, _gate_q_14;
  rxx_5108208784(3.8240073494961417) _gate_q_11, _gate_q_9;
  tdg _gate_q_1;
  tdg _gate_q_6;
  h _gate_q_4;
  rxx_5108216512(5.132763945952203) _gate_q_6, _gate_q_3;
  crz(5.188272059502688) _gate_q_16, _gate_q_15;
  id _gate_q_5;
  ry(1.2094338799840645) _gate_q_17;
  x _gate_q_8;
  crz(1.3202469285470841) _gate_q_9, _gate_q_7;
  rzz_5108211664(3.844887981646468) _gate_q_10, _gate_q_12;
  cx _gate_q_14, _gate_q_11;
  tdg _gate_q_1;
  cu(4.785769551948669, 5.463719392965344, 3.034191961749404, 5.68970111147958) _gate_q_13, _gate_q_0;
  p(1.8187063007737803) _gate_q_2;
  cu1_5108211856(3.429821284205498) _gate_q_5, _gate_q_1;
  cu(0.1978774798915369, 0.028011143145677663, 1.561737717814248, 2.3181402084348055) _gate_q_2, _gate_q_11;
  rz(0.13574582871982646) _gate_q_10;
  ch _gate_q_9, _gate_q_12;
  cu3_5108213488(0.2881881074034094, 0.640402714988608, 1.875463999424477) _gate_q_6, _gate_q_17;
  rzz_5108206384(6.037832507507659) _gate_q_7, _gate_q_8;
  crz(1.0460147626569745) _gate_q_14, _gate_q_16;
  z _gate_q_3;
  cu3_5108209024(3.085852436862232, 2.9877224558909328, 3.4433348940214996) _gate_q_0, _gate_q_4;
  cx _gate_q_13, _gate_q_15;
  rxx_5108205808(0.7273662823492065) _gate_q_13, _gate_q_4;
  z _gate_q_10;
  cu(3.523177119275955, 4.3269230925418345, 0.10189692478752431, 2.3572664105085934) _gate_q_9, _gate_q_5;
  cp(4.651584505379521) _gate_q_12, _gate_q_15;
  U(2.222205624396045, 5.0814734724909245, 5.350190147837473) _gate_q_17;
  z _gate_q_6;
  u2(4.721762363690235, 2.1421408898656398) _gate_q_3;
  rx(3.9541708293833486) _gate_q_7;
  swap _gate_q_11, _gate_q_2;
  xx_minus_yy_5108207584(0.14759793909889074, 3.610840882852072) _gate_q_0, _gate_q_1;
  y _gate_q_14;
  rzz_5108211328(3.268941726259927) _gate_q_8, _gate_q_16;
  rzx_5108212960(5.459436060808465) _gate_q_3, _gate_q_13;
  crz(0.6888805695420062) _gate_q_5, _gate_q_7;
  ryy_5108207056(1.8121684357058514) _gate_q_12, _gate_q_6;
  U(5.7346415794477945, 6.277732310651191, 5.667148412048763) _gate_q_1;
  rxx_5108207632(5.473049140175237) _gate_q_0, _gate_q_17;
  crz(3.7371274562569776) _gate_q_16, _gate_q_14;
  cs _gate_q_4, _gate_q_2;
  h _gate_q_8;
  cu3_5108213968(0.39627303838047345, 1.5093532248980945, 6.160868206370206) _gate_q_10, _gate_q_15;
  u3(1.5669315952384848, 0.8243789483410345, 2.1426816033869405) _gate_q_9;
  u3(4.700834145777023, 5.152993851788433, 5.657448675045529) _gate_q_11;
  cy _gate_q_3, _gate_q_6;
  t _gate_q_15;
  ry(0.7338432218386103) _gate_q_0;
  xx_minus_yy_5108206576(5.5821864264174454, 1.3182778450828425) _gate_q_11, _gate_q_12;
  h _gate_q_10;
  cs _gate_q_2, _gate_q_13;
  cu1_5108206816(0.7288833736689609) _gate_q_14, _gate_q_9;
  cp(1.0323391193788893) _gate_q_8, _gate_q_16;
  tdg _gate_q_7;
  cz _gate_q_17, _gate_q_4;
  xx_plus_yy_5108217664(4.897602221126239, 5.732264566250726) _gate_q_1, _gate_q_5;
  cp(1.159102054527748) _gate_q_15, _gate_q_11;
  csdg _gate_q_8, _gate_q_9;
  crz(2.2643351209466203) _gate_q_0, _gate_q_4;
  cu1_5108213584(6.113428485006693) _gate_q_12, _gate_q_13;
  u2(3.1846082227960175, 6.145544295066351) _gate_q_2;
  dcx _gate_q_1, _gate_q_7;
  cu(3.6488914894915245, 5.106561750730788, 0.10002338656512264, 2.4284866723674896) _gate_q_16, _gate_q_17;
  dcx _gate_q_10, _gate_q_14;
  y _gate_q_6;
  iswap _gate_q_5, _gate_q_3;
  ecr _gate_q_15, _gate_q_11;
  ch _gate_q_0, _gate_q_1;
  csx _gate_q_10, _gate_q_3;
  ch _gate_q_4, _gate_q_7;
  s _gate_q_9;
  y _gate_q_6;
  xx_plus_yy_5108204272(4.671964049391039, 2.5218662933638107) _gate_q_16, _gate_q_12;
  cy _gate_q_14, _gate_q_2;
  crx(0.13089108279533404) _gate_q_13, _gate_q_8;
  id _gate_q_17;
  p(0.10288358273579937) _gate_q_5;
  rzx_5108209696(1.6156082566484358) _gate_q_17, _gate_q_1;
  rzx_5108209216(5.070827903350864) _gate_q_14, _gate_q_8;
  u1(1.378985989289631) _gate_q_12;
  cy _gate_q_10, _gate_q_13;
  ryy_5108205328(3.8911292412070044) _gate_q_2, _gate_q_0;
  tdg _gate_q_4;
  cy _gate_q_15, _gate_q_5;
  r_5108204224(2.780627490391262, 5.31056891639713) _gate_q_9;
  cu1_5108216848(4.554003730030762) _gate_q_16, _gate_q_3;
  s _gate_q_11;
  csdg _gate_q_7, _gate_q_6;
  crx(2.622865958197205) _gate_q_2, _gate_q_15;
  ryy_5108208880(0.7332316164185319) _gate_q_9, _gate_q_1;
  rzx_5108213296(3.784441226061798) _gate_q_11, _gate_q_14;
  crz(0.692360995141225) _gate_q_16, _gate_q_8;
  cz _gate_q_12, _gate_q_7;
  h _gate_q_3;
  cu1_5108214880(4.272657616873094) _gate_q_4, _gate_q_13;
  cx _gate_q_17, _gate_q_0;
  rzz_5108219056(0.28702098830249007) _gate_q_5, _gate_q_6;
  id _gate_q_10;
}
gate rxx_5108207488(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.194524164970488) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108212528(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.6286661125338706, 2.2866715461479523, -2.2866715461479523) _gate_q_0;
}
gate xx_plus_yy_5108214976(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.793822749128752) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.479011697837837) _gate_q_1;
  ry(-1.479011697837837) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.793822749128752) _gate_q_0;
}
gate r_5108206624(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(4.70441662048124, 4.028088424070675, -4.028088424070675) _gate_q_0;
}
gate xx_plus_yy_5108219440(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.0084627673108275) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.2235180055417532) _gate_q_1;
  ry(-0.2235180055417532) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.0084627673108275) _gate_q_0;
}
gate xx_plus_yy_5108215744(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.9210384846943507) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.47633905611276034) _gate_q_1;
  ry(-0.47633905611276034) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.9210384846943507) _gate_q_0;
}
gate rxx_5108208736(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.134901596011741) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5108216752(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.7211093709524095) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5108217088(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.94591832580435) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rxx_5108219728(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.393566655720899) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate xx_minus_yy_5108218336(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.6958541679213814) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.6176559851915238) _gate_q_0;
  ry(-1.6176559851915238) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.6958541679213814) _gate_q_1;
}
gate xx_plus_yy_5108219536(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(1.6151468831958726) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.0233561962383109) _gate_q_1;
  ry(-1.0233561962383109) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-1.6151468831958726) _gate_q_0;
}
gate rxx_5108204992(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.209324777906779) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5108209456(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.751756011971541) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate cu1_5108207200(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.131472303353265) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.131472303353265) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.131472303353265) _gate_q_1;
}
gate rzx_5108218960(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.798800719191227) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate r_5108211472(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.079103994932131, 2.236441173234266, -2.236441173234266) _gate_q_0;
}
gate xx_plus_yy_5108215072(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(6.033194610666085) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.919744419967522) _gate_q_1;
  ry(-1.919744419967522) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-6.033194610666085) _gate_q_0;
}
gate cu1_5108217376(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.6884512563645049) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.6884512563645049) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.6884512563645049) _gate_q_1;
}
gate r_5108212912(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.3274937984384698, 3.884163606403993, -3.884163606403993) _gate_q_0;
}
gate rxx_5108213440(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.762938683093715) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rxx_5108215552(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.6984389642155312) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate ryy_5108206912(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.179290564530374) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate ryy_5108205856(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.1862314444545636) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzx_5108208112(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.768804770436946) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate xx_plus_yy_5108208208(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.082977951984431) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.40824942712788764) _gate_q_1;
  ry(-0.40824942712788764) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.082977951984431) _gate_q_0;
}
gate ryy_5108206720(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(6.094365785417127) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate rzz_5108210896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.852643109317206) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  ch _gate_q_17, _gate_q_6;
  x _gate_q_13;
  rxx_5108207488(5.194524164970488) _gate_q_7, _gate_q_4;
  sxdg _gate_q_10;
  iswap _gate_q_12, _gate_q_1;
  swap _gate_q_0, _gate_q_14;
  ch _gate_q_8, _gate_q_2;
  r_5108212528(0.6286661125338706, 3.857467872942849) _gate_q_16;
  u3(0.9218882203493203, 2.919298558124655, 3.3071593008900937) _gate_q_15;
  tdg _gate_q_5;
  xx_plus_yy_5108214976(2.958023395675674, 2.793822749128752) _gate_q_9, _gate_q_3;
  U(1.9159398899860347, 5.140838348563673, 5.36369809668561) _gate_q_11;
  p(3.485136372906206) _gate_q_7;
  cry(5.469418365856645) _gate_q_4, _gate_q_0;
  u2(4.813483609170444, 4.629800037860395) _gate_q_2;
  s _gate_q_14;
  ch _gate_q_10, _gate_q_5;
  r_5108206624(4.70441662048124, 5.5988847508655715) _gate_q_6;
  xx_plus_yy_5108219440(0.4470360110835064, 3.0084627673108275) _gate_q_17, _gate_q_15;
  sxdg _gate_q_3;
  rx(4.4040387622026635) _gate_q_8;
  swap _gate_q_1, _gate_q_11;
  rz(0.3665076613757118) _gate_q_9;
  ch _gate_q_12, _gate_q_16;
  s _gate_q_13;
  u2(3.892116930732303, 3.2626860896423673) _gate_q_14;
  ch _gate_q_15, _gate_q_3;
  rz(5.52067071502748) _gate_q_0;
  cx _gate_q_6, _gate_q_13;
  xx_plus_yy_5108215744(0.9526781122255207, 2.9210384846943507) _gate_q_4, _gate_q_7;
  sxdg _gate_q_1;
  dcx _gate_q_5, _gate_q_16;
  ry(2.4141841113958367) _gate_q_12;
  ch _gate_q_9, _gate_q_8;
  cry(5.55977462639353) _gate_q_17, _gate_q_11;
  rxx_5108208736(6.134901596011741) _gate_q_10, _gate_q_2;
  U(5.864151322839346, 3.7902905595452903, 0.015959996974628857) _gate_q_10;
  rz(1.8714779023487103) _gate_q_6;
  id _gate_q_4;
  U(2.256195255012314, 2.2074507100759826, 2.456855738900844) _gate_q_8;
  ryy_5108216752(3.7211093709524095) _gate_q_16, _gate_q_12;
  s _gate_q_15;
  u2(0.7219254639947029, 6.152700071696401) _gate_q_7;
  tdg _gate_q_11;
  rzz_5108217088(1.94591832580435) _gate_q_13, _gate_q_14;
  csx _gate_q_5, _gate_q_17;
  iswap _gate_q_9, _gate_q_0;
  dcx _gate_q_1, _gate_q_2;
  sxdg _gate_q_3;
  crx(1.1824338272283645) _gate_q_14, _gate_q_17;
  y _gate_q_4;
  tdg _gate_q_1;
  swap _gate_q_15, _gate_q_6;
  rxx_5108219728(4.393566655720899) _gate_q_13, _gate_q_8;
  x _gate_q_0;
  sx _gate_q_12;
  cu(6.114340095241009, 5.94154117942549, 1.4389807087540045, 3.144096486865572) _gate_q_3, _gate_q_16;
  y _gate_q_9;
  u3(3.421387412691314, 5.5570865788423625, 5.15216627088716) _gate_q_10;
  xx_minus_yy_5108218336(3.2353119703830475, 3.6958541679213814) _gate_q_7, _gate_q_5;
  xx_plus_yy_5108219536(2.0467123924766217, 1.6151468831958726) _gate_q_2, _gate_q_11;
  ry(2.8251687700757526) _gate_q_4;
  rxx_5108204992(2.209324777906779) _gate_q_10, _gate_q_11;
  dcx _gate_q_2, _gate_q_3;
  cs _gate_q_5, _gate_q_17;
  rzz_5108209456(5.751756011971541) _gate_q_6, _gate_q_8;
  crx(3.3076132707934356) _gate_q_15, _gate_q_0;
  cu1_5108207200(2.26294460670653) _gate_q_7, _gate_q_1;
  rzx_5108218960(5.798800719191227) _gate_q_14, _gate_q_9;
  r_5108211472(6.079103994932131, 3.8072375000291627) _gate_q_12;
  sx _gate_q_16;
  sx _gate_q_13;
  rz(1.5319512545238232) _gate_q_7;
  ry(6.060617702232308) _gate_q_5;
  iswap _gate_q_8, _gate_q_11;
  cry(0.19070964479256586) _gate_q_9, _gate_q_1;
  xx_plus_yy_5108215072(3.839488839935044, 6.033194610666085) _gate_q_16, _gate_q_2;
  cz _gate_q_3, _gate_q_10;
  dcx _gate_q_4, _gate_q_15;
  cu1_5108217376(1.3769025127290098) _gate_q_12, _gate_q_6;
  h _gate_q_17;
  cs _gate_q_14, _gate_q_0;
  r_5108212912(0.3274937984384698, 5.454959933198889) _gate_q_13;
  cz _gate_q_4, _gate_q_6;
  sdg _gate_q_3;
  dcx _gate_q_12, _gate_q_11;
  y _gate_q_10;
  iswap _gate_q_13, _gate_q_8;
  cz _gate_q_1, _gate_q_0;
  y _gate_q_17;
  y _gate_q_9;
  rxx_5108213440(5.762938683093715) _gate_q_16, _gate_q_15;
  rxx_5108215552(0.6984389642155312) _gate_q_2, _gate_q_7;
  id _gate_q_5;
  U(0.33873641344144606, 4.496800221478214, 5.441371407854448) _gate_q_14;
  dcx _gate_q_17, _gate_q_16;
  ryy_5108206912(3.179290564530374) _gate_q_5, _gate_q_13;
  cp(1.3438102474531852) _gate_q_7, _gate_q_2;
  cx _gate_q_0, _gate_q_15;
  ecr _gate_q_1, _gate_q_14;
  ryy_5108205856(2.1862314444545636) _gate_q_8, _gate_q_4;
  rzx_5108208112(1.768804770436946) _gate_q_9, _gate_q_12;
  u3(0.4664743800282874, 3.6084510519181436, 2.8891383904455803) _gate_q_6;
  xx_plus_yy_5108208208(0.8164988542557753, 0.082977951984431) _gate_q_11, _gate_q_10;
  t _gate_q_3;
  cry(3.4714626936455613) _gate_q_8, _gate_q_13;
  rx(1.4030743205624143) _gate_q_17;
  cx _gate_q_2, _gate_q_3;
  cz _gate_q_11, _gate_q_0;
  cz _gate_q_15, _gate_q_12;
  ryy_5108206720(6.094365785417127) _gate_q_4, _gate_q_16;
  y _gate_q_7;
  ecr _gate_q_1, _gate_q_14;
  rzz_5108210896(3.852643109317206) _gate_q_5, _gate_q_6;
  sdg _gate_q_9;
  z _gate_q_10;
}