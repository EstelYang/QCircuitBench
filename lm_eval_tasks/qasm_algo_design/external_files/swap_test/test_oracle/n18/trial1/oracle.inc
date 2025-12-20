gate sxdg _gate_q_0 {
  s _gate_q_0;
  h _gate_q_0;
  s _gate_q_0;
}
gate xx_plus_yy_5108211136(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.6312787911742195) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.3772468887804226) _gate_q_1;
  ry(-2.3772468887804226) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.6312787911742195) _gate_q_0;
}
gate rzz_5108208640(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.0565463783636804) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzx_5108212528(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(2.96581138193555) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate ryy_5108212384(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.8515508266489045) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5108215600(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.495482172713985) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.16889999218149124) _gate_q_1;
  ry(-0.16889999218149124) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.495482172713985) _gate_q_0;
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
gate xx_plus_yy_5108206192(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(5.992849599561139) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.4560097646481991) _gate_q_1;
  ry(-0.4560097646481991) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-5.992849599561139) _gate_q_0;
}
gate cs _gate_q_0, _gate_q_1 {
  p(pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
}
gate dcx _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
}
gate r_5108214448(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.261839712789803, 2.235917662206367, -2.235917662206367) _gate_q_0;
}
gate cu3_5108209504(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.198673148973596) _gate_q_0;
  u1(1.9335268524348839) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.0351302900349395, 0, -4.198673148973596) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.0351302900349395, 2.265146296538712, 0) _gate_q_1;
}
gate xx_plus_yy_5108207920(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.9345193631938367) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.7224077207397718) _gate_q_1;
  ry(-0.7224077207397718) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.9345193631938367) _gate_q_0;
}
gate r_5108215984(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(5.227269264209363, 4.033050488625634, -4.033050488625634) _gate_q_0;
}
gate xx_minus_yy_5108214544(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-1.480925906007079) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.019242978254976) _gate_q_0;
  ry(-2.019242978254976) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(1.480925906007079) _gate_q_1;
}
gate rzz_5108205472(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(5.322254848040842) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5108209888(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.5062410097717325) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate rzz_5108204464(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(0.08369493045743802) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate r_5108218576(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(2.9763663081835023, -0.7560954669084957, 0.7560954669084957) _gate_q_0;
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
gate cu3_5108210464(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(4.625356450724763) _gate_q_0;
  u1(-1.3343863563934342) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3363046208963145, 0, -4.625356450724763) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3363046208963145, 5.9597428071181975, 0) _gate_q_1;
}
gate cu1_5108219008(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(2.4449845327059267) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-2.4449845327059267) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(2.4449845327059267) _gate_q_1;
}
gate rxx_5108216320(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(3.4271480264901837) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate rzz_5108216896(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(1.981948868190504) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate iswap _gate_q_0, _gate_q_1 {
  s _gate_q_0;
  s _gate_q_1;
  h _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  cx _gate_q_1, _gate_q_0;
  h _gate_q_1;
}
gate ryy_5108209600(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.0014621183591437) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate cu1_5108212048(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(1.719472979938592) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-1.719472979938592) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(1.719472979938592) _gate_q_1;
}
gate cu3_5108217184(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.32379323929816) _gate_q_0;
  u1(-0.35098882541738485) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.3689994937667225, 0, -2.32379323929816) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.3689994937667225, 2.674782064715545, 0) _gate_q_1;
}
gate xx_minus_yy_5108208880(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.4750783134469483) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9572639744980096) _gate_q_0;
  ry(-1.9572639744980096) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.4750783134469483) _gate_q_1;
}
gate xx_plus_yy_5108203648(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.1081354306339506) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4541076822742864) _gate_q_1;
  ry(-2.4541076822742864) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.1081354306339506) _gate_q_0;
}
gate xx_plus_yy_5108203840(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(0.6326302608904837) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.992843362152504) _gate_q_1;
  ry(-1.992843362152504) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-0.6326302608904837) _gate_q_0;
}
gate cu1_5108210992(_gate_p_0) _gate_q_0, _gate_q_1 {
  u1(0.48616430133122757) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  u1(-0.48616430133122757) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u1(0.48616430133122757) _gate_q_1;
}
gate ryy_5108214880(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(1.998622748850705) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate xx_plus_yy_5108204512(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(2.259730074544236) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-2.4221703739965186) _gate_q_1;
  ry(-2.4221703739965186) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-2.259730074544236) _gate_q_0;
}
gate xx_plus_yy_5108213296(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.2246435267626183) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-0.33071327236180864) _gate_q_1;
  ry(-0.33071327236180864) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.2246435267626183) _gate_q_0;
}
gate Psi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  x _gate_q_6;
  xx_plus_yy_5108211136(4.754493777560845, 2.6312787911742195) _gate_q_16, _gate_q_10;
  rzz_5108208640(1.0565463783636804) _gate_q_8, _gate_q_9;
  crz(2.0489466294188583) _gate_q_12, _gate_q_17;
  rzx_5108212528(2.96581138193555) _gate_q_13, _gate_q_3;
  ryy_5108212384(4.8515508266489045) _gate_q_11, _gate_q_5;
  xx_plus_yy_5108215600(0.3377999843629825, 4.495482172713985) _gate_q_14, _gate_q_15;
  csx _gate_q_1, _gate_q_0;
  xx_plus_yy_5108206192(0.9120195292963982, 5.992849599561139) _gate_q_2, _gate_q_7;
  tdg _gate_q_4;
  cs _gate_q_12, _gate_q_1;
  y _gate_q_16;
  dcx _gate_q_15, _gate_q_4;
  r_5108214448(6.261839712789803, 3.8067139890012633) _gate_q_3;
  sdg _gate_q_11;
  crx(1.6271412761416397) _gate_q_9, _gate_q_13;
  u1(4.247642709993134) _gate_q_2;
  u1(3.316385873461557) _gate_q_5;
  cu(1.4643070048524556, 6.22277090201504, 0.6751217800857812, 0.9362125394664428) _gate_q_0, _gate_q_6;
  cry(0.8943798536989113) _gate_q_8, _gate_q_17;
  cu3_5108209504(2.070260580069879, 2.265146296538712, 6.13220000140848) _gate_q_7, _gate_q_14;
  U(1.9083884627491374, 3.9418559425134165, 1.0574147660812392) _gate_q_10;
  z _gate_q_8;
  cy _gate_q_11, _gate_q_6;
  swap _gate_q_15, _gate_q_1;
  y _gate_q_0;
  cp(1.6528198734573534) _gate_q_4, _gate_q_5;
  swap _gate_q_3, _gate_q_14;
  y _gate_q_17;
  xx_plus_yy_5108207920(1.4448154414795435, 0.9345193631938367) _gate_q_13, _gate_q_7;
  r_5108215984(5.227269264209363, 5.603846815420531) _gate_q_16;
  csx _gate_q_9, _gate_q_10;
  swap _gate_q_12, _gate_q_2;
  sx _gate_q_5;
  ry(2.187483724049322) _gate_q_8;
  id _gate_q_2;
  xx_minus_yy_5108214544(4.038485956509952, 1.480925906007079) _gate_q_14, _gate_q_4;
  x _gate_q_15;
  rzz_5108205472(5.322254848040842) _gate_q_11, _gate_q_16;
  id _gate_q_10;
  rzz_5108209888(3.5062410097717325) _gate_q_6, _gate_q_17;
  tdg _gate_q_3;
  u1(4.9730109055746885) _gate_q_12;
  cp(2.3830895177410536) _gate_q_1, _gate_q_9;
  rzz_5108204464(0.08369493045743802) _gate_q_0, _gate_q_7;
  u3(0.4365506434281477, 5.0342366019935145, 5.000674732805955) _gate_q_13;
  sx _gate_q_10;
  r_5108218576(2.9763663081835023, 0.8147008598864008) _gate_q_14;
  cs _gate_q_8, _gate_q_1;
  id _gate_q_15;
  z _gate_q_0;
  cry(3.2498642016156647) _gate_q_11, _gate_q_17;
  ecr _gate_q_3, _gate_q_16;
  tdg _gate_q_12;
  ecr _gate_q_2, _gate_q_13;
  cry(6.2282428294305) _gate_q_7, _gate_q_5;
  ch _gate_q_9, _gate_q_4;
  u3(5.004497802537187, 2.543774724513644, 1.113517751078627) _gate_q_6;
  cu(1.8795490840317373, 3.1986004178202867, 2.229050145305132, 1.6775544065131067) _gate_q_14, _gate_q_15;
  cu3_5108210464(2.672609241792629, 5.9597428071181975, 3.290970094331329) _gate_q_12, _gate_q_13;
  dcx _gate_q_11, _gate_q_8;
  rz(5.960916217118391) _gate_q_10;
  ry(0.8585826737935711) _gate_q_16;
  cu1_5108219008(4.8899690654118535) _gate_q_5, _gate_q_17;
  dcx _gate_q_3, _gate_q_6;
  crx(0.37425041390794267) _gate_q_9, _gate_q_1;
  ecr _gate_q_2, _gate_q_4;
  cy _gate_q_7, _gate_q_0;
  crz(6.214616641671023) _gate_q_7, _gate_q_12;
  cx _gate_q_0, _gate_q_10;
  rxx_5108216320(3.4271480264901837) _gate_q_8, _gate_q_6;
  dcx _gate_q_11, _gate_q_14;
  rzz_5108216896(1.981948868190504) _gate_q_9, _gate_q_4;
  cx _gate_q_3, _gate_q_5;
  id _gate_q_15;
  sxdg _gate_q_13;
  iswap _gate_q_17, _gate_q_2;
  dcx _gate_q_1, _gate_q_16;
  rx(4.055805127587297) _gate_q_14;
  id _gate_q_2;
  cz _gate_q_1, _gate_q_5;
  cs _gate_q_16, _gate_q_15;
  csx _gate_q_13, _gate_q_7;
  sx _gate_q_4;
  rz(3.9428964506900557) _gate_q_6;
  cy _gate_q_0, _gate_q_10;
  ryy_5108209600(1.0014621183591437) _gate_q_11, _gate_q_17;
  cu1_5108212048(3.438945959877184) _gate_q_12, _gate_q_8;
  sxdg _gate_q_9;
  z _gate_q_3;
  cu3_5108217184(2.737998987533445, 2.674782064715545, 1.9728044138807752) _gate_q_4, _gate_q_1;
  u1(4.080075588905412) _gate_q_15;
  ry(4.10513108566821) _gate_q_6;
  cy _gate_q_11, _gate_q_10;
  h _gate_q_12;
  csx _gate_q_9, _gate_q_8;
  t _gate_q_16;
  tdg _gate_q_14;
  cu(6.178636181622099, 2.3162732065391056, 4.293532291920316, 2.434885138234951) _gate_q_17, _gate_q_0;
  sx _gate_q_3;
  xx_minus_yy_5108208880(3.914527948996019, 3.4750783134469483) _gate_q_5, _gate_q_2;
  csx _gate_q_13, _gate_q_7;
  xx_plus_yy_5108203648(4.908215364548573, 2.1081354306339506) _gate_q_11, _gate_q_16;
  xx_plus_yy_5108203840(3.985686724305008, 0.6326302608904837) _gate_q_14, _gate_q_17;
  rz(2.089929047534937) _gate_q_8;
  ecr _gate_q_1, _gate_q_10;
  cu(4.547350649711714, 5.44496295621502, 0.7491462431830289, 2.813454146033427) _gate_q_13, _gate_q_3;
  cu1_5108210992(0.9723286026624551) _gate_q_4, _gate_q_2;
  ryy_5108214880(1.998622748850705) _gate_q_6, _gate_q_5;
  xx_plus_yy_5108204512(4.844340747993037, 2.259730074544236) _gate_q_12, _gate_q_0;
  xx_plus_yy_5108213296(0.6614265447236173, 3.2246435267626183) _gate_q_15, _gate_q_9;
  u3(0.3181644022007994, 2.0291620292339094, 3.1917371633257896) _gate_q_7;
}
gate cu3_5108215120(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(2.7945234321575296) _gate_q_0;
  u1(-1.9834285544771137) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.2636985259279798, 0, -2.7945234321575296) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.2636985259279798, 4.777951986634643, 0) _gate_q_1;
}
gate rzz_5108209168(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(3.542124561305578) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_plus_yy_5108206096(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(3.1292688634368524) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-3.140948969616239) _gate_q_1;
  ry(-3.140948969616239) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-3.1292688634368524) _gate_q_0;
}
gate rzx_5108215696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(0.10063657100587044) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
}
gate rxx_5108209696(_gate_p_0) _gate_q_0, _gate_q_1 {
  h _gate_q_0;
  h _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(5.744792665381244) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  h _gate_q_1;
  h _gate_q_0;
}
gate r_5108208832(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(6.075499170839823, 0.25418111451867587, -0.25418111451867587) _gate_q_0;
}
gate cu3_5108218048(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(3.604870345890841) _gate_q_0;
  u1(0.85134488859843) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-1.8087378184322185, 0, -3.604870345890841) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(1.8087378184322185, 2.753525457292411, 0) _gate_q_1;
}
gate xx_minus_yy_5108212960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.5682271279440352) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9820993151962387) _gate_q_0;
  ry(-1.9820993151962387) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.5682271279440352) _gate_q_1;
}
gate csdg _gate_q_0, _gate_q_1 {
  p(-pi/4) _gate_q_0;
  cx _gate_q_0, _gate_q_1;
  p(pi/4) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  p(-pi/4) _gate_q_1;
}
gate xx_minus_yy_5108206960(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.171213904883431) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.1507903042138508) _gate_q_0;
  ry(-1.1507903042138508) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.171213904883431) _gate_q_1;
}
gate ryy_5108207584(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.018142921001972) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108208352(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(0.8380640953449002, -0.10124545868511992, 0.10124545868511992) _gate_q_0;
}
gate ryy_5108213488(_gate_p_0) _gate_q_0, _gate_q_1 {
  rx(pi/2) _gate_q_0;
  rx(pi/2) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rz(4.215341934495985) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  rx(-pi/2) _gate_q_0;
  rx(-pi/2) _gate_q_1;
}
gate r_5108210752(_gate_p_0, _gate_p_1) _gate_q_0 {
  u3(1.3714895554147135, 1.2552832882939993, -1.2552832882939993) _gate_q_0;
}
gate xx_minus_yy_5108211856(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.4672569173414685) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.9192224026784759) _gate_q_0;
  ry(-1.9192224026784759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.4672569173414685) _gate_q_1;
}
gate rzz_5108208784(_gate_p_0) _gate_q_0, _gate_q_1 {
  cx _gate_q_0, _gate_q_1;
  rz(4.513745651264759) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
}
gate xx_minus_yy_5108211616(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-2.083127806074368) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(2.5533773303737615) _gate_q_0;
  ry(-2.5533773303737615) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(2.083127806074368) _gate_q_1;
}
gate xx_minus_yy_5108213680(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-3.849688864594513) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.5407166157718093) _gate_q_0;
  ry(-1.5407166157718093) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(3.849688864594513) _gate_q_1;
}
gate xx_plus_yy_5108210608(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(4.8309580708005635) _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sx _gate_q_1;
  rz(pi/2) _gate_q_1;
  s _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  ry(-1.7705549221825738) _gate_q_1;
  ry(-1.7705549221825738) _gate_q_0;
  cx _gate_q_1, _gate_q_0;
  sdg _gate_q_0;
  rz(-pi/2) _gate_q_1;
  sxdg _gate_q_1;
  rz(pi/2) _gate_q_1;
  rz(-4.8309580708005635) _gate_q_0;
}
gate cu3_5108216512(_gate_p_0, _gate_p_1, _gate_p_2) _gate_q_0, _gate_q_1 {
  u1(1.2626453343421211) _gate_q_0;
  u1(0.2781169228843255) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(-0.4525425399271859, 0, -1.2626453343421211) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  u3(0.4525425399271859, 0.9845284114577956, 0) _gate_q_1;
}
gate xx_minus_yy_5108205952(_gate_p_0, _gate_p_1) _gate_q_0, _gate_q_1 {
  rz(-0.4845485653887961) _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sx _gate_q_0;
  rz(pi/2) _gate_q_0;
  s _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  ry(1.7966231514019124) _gate_q_0;
  ry(-1.7966231514019124) _gate_q_1;
  cx _gate_q_0, _gate_q_1;
  sdg _gate_q_1;
  rz(-pi/2) _gate_q_0;
  sxdg _gate_q_0;
  rz(pi/2) _gate_q_0;
  rz(0.4845485653887961) _gate_q_1;
}
gate Phi _gate_q_0, _gate_q_1, _gate_q_2, _gate_q_3, _gate_q_4, _gate_q_5, _gate_q_6, _gate_q_7, _gate_q_8, _gate_q_9, _gate_q_10, _gate_q_11, _gate_q_12, _gate_q_13, _gate_q_14, _gate_q_15, _gate_q_16, _gate_q_17 {
  rz(2.6754065653963592) _gate_q_12;
  rz(5.800146783701975) _gate_q_2;
  crx(6.018036981213366) _gate_q_17, _gate_q_16;
  crz(0.12448528195729211) _gate_q_14, _gate_q_15;
  s _gate_q_6;
  cs _gate_q_10, _gate_q_13;
  csx _gate_q_7, _gate_q_11;
  cu3_5108215120(2.5273970518559596, 4.777951986634643, 0.8110948776804158) _gate_q_8, _gate_q_4;
  rzz_5108209168(3.542124561305578) _gate_q_5, _gate_q_0;
  crx(5.143269812261091) _gate_q_1, _gate_q_9;
  rz(5.653683551128326) _gate_q_3;
  tdg _gate_q_9;
  dcx _gate_q_10, _gate_q_15;
  id _gate_q_12;
  xx_plus_yy_5108206096(6.281897939232478, 3.1292688634368524) _gate_q_14, _gate_q_16;
  ch _gate_q_0, _gate_q_1;
  rzx_5108215696(0.10063657100587044) _gate_q_4, _gate_q_5;
  x _gate_q_3;
  cx _gate_q_17, _gate_q_8;
  p(1.6858693167864605) _gate_q_6;
  u1(2.736359619431032) _gate_q_7;
  sdg _gate_q_2;
  y _gate_q_11;
  s _gate_q_13;
  ry(0.8915891752954771) _gate_q_7;
  tdg _gate_q_9;
  sx _gate_q_0;
  cs _gate_q_8, _gate_q_6;
  sdg _gate_q_12;
  rxx_5108209696(5.744792665381244) _gate_q_5, _gate_q_4;
  id _gate_q_10;
  sxdg _gate_q_2;
  r_5108208832(6.075499170839823, 1.8249774413135724) _gate_q_1;
  x _gate_q_14;
  z _gate_q_16;
  csx _gate_q_15, _gate_q_3;
  h _gate_q_11;
  tdg _gate_q_13;
  t _gate_q_17;
  cu3_5108218048(3.617475636864437, 2.753525457292411, 4.456215234489271) _gate_q_5, _gate_q_2;
  rz(3.583221358766497) _gate_q_16;
  u2(3.223272041077503, 1.9657912193748477) _gate_q_8;
  U(1.6481431415483656, 2.3094672331065937, 5.498596528836033) _gate_q_6;
  cu(0.5013946937738528, 3.769057105334291, 0.2171616606643748, 2.4140290673057354) _gate_q_17, _gate_q_3;
  sdg _gate_q_10;
  ecr _gate_q_9, _gate_q_0;
  ch _gate_q_15, _gate_q_12;
  cry(2.4607370178219043) _gate_q_4, _gate_q_14;
  cy _gate_q_7, _gate_q_11;
  z _gate_q_1;
  U(3.177605126324704, 1.2672793472053945, 0.6210589164793326) _gate_q_13;
  cp(5.158367214923841) _gate_q_13, _gate_q_15;
  tdg _gate_q_1;
  swap _gate_q_9, _gate_q_6;
  xx_minus_yy_5108212960(3.9641986303924774, 0.5682271279440352) _gate_q_12, _gate_q_4;
  cz _gate_q_14, _gate_q_10;
  csdg _gate_q_5, _gate_q_0;
  x _gate_q_11;
  xx_minus_yy_5108206960(2.3015806084277015, 2.171213904883431) _gate_q_17, _gate_q_2;
  sdg _gate_q_3;
  swap _gate_q_7, _gate_q_16;
  u1(2.0581578939782816) _gate_q_8;
  rz(1.3317863048602336) _gate_q_0;
  tdg _gate_q_6;
  p(5.35693683194521) _gate_q_4;
  rx(3.2859606978422744) _gate_q_5;
  ch _gate_q_15, _gate_q_9;
  ecr _gate_q_14, _gate_q_12;
  U(3.0245945050768874, 2.528173329141699, 2.6932691470019905) _gate_q_2;
  z _gate_q_16;
  swap _gate_q_11, _gate_q_7;
  p(2.0401438533433556) _gate_q_1;
  sdg _gate_q_8;
  cu(3.406943311486251, 2.4093256243609136, 4.388535339384235, 3.501373933755117) _gate_q_17, _gate_q_10;
  ecr _gate_q_3, _gate_q_13;
  cy _gate_q_17, _gate_q_16;
  crz(4.084207896697465) _gate_q_10, _gate_q_0;
  ryy_5108207584(4.018142921001972) _gate_q_5, _gate_q_1;
  u3(1.3566745408013077, 2.531964860093553, 1.3568065706642505) _gate_q_15;
  y _gate_q_4;
  p(0.04665888019105474) _gate_q_6;
  r_5108208352(0.8380640953449002, 1.4695508681097766) _gate_q_3;
  cs _gate_q_2, _gate_q_9;
  rx(1.2086498190800583) _gate_q_11;
  ryy_5108213488(4.215341934495985) _gate_q_13, _gate_q_14;
  sdg _gate_q_12;
  cu(3.117878333959336, 1.6740897393785383, 1.6254840400862574, 4.376318631722013) _gate_q_8, _gate_q_7;
  ecr _gate_q_16, _gate_q_5;
  crz(5.613686474348143) _gate_q_10, _gate_q_15;
  h _gate_q_7;
  r_5108210752(1.3714895554147135, 2.826079615088896) _gate_q_17;
  rx(0.5008904011939745) _gate_q_1;
  cu(2.672773229234674, 5.447476463040941, 0.2851371154997651, 5.462088702250254) _gate_q_6, _gate_q_8;
  xx_minus_yy_5108211856(3.8384448053569518, 2.4672569173414685) _gate_q_14, _gate_q_13;
  cp(3.3890933797128664) _gate_q_12, _gate_q_2;
  tdg _gate_q_11;
  u3(4.943113854278609, 1.0916667352108262, 2.8190311890472537) _gate_q_0;
  rzz_5108208784(4.513745651264759) _gate_q_4, _gate_q_9;
  t _gate_q_3;
  xx_minus_yy_5108211616(5.106754660747523, 2.083127806074368) _gate_q_13, _gate_q_2;
  xx_minus_yy_5108213680(3.0814332315436186, 3.849688864594513) _gate_q_4, _gate_q_14;
  ch _gate_q_5, _gate_q_6;
  xx_plus_yy_5108210608(3.5411098443651476, 4.8309580708005635) _gate_q_7, _gate_q_16;
  u1(3.084449569589756) _gate_q_12;
  cu3_5108216512(0.9050850798543718, 0.9845284114577956, 1.5407622572264466) _gate_q_10, _gate_q_17;
  p(5.262542929507486) _gate_q_0;
  u3(5.9499683085402495, 6.272539302397141, 0.7797146593037733) _gate_q_8;
  sx _gate_q_15;
  z _gate_q_1;
  crz(1.3572308537499962) _gate_q_9, _gate_q_11;
  sdg _gate_q_3;
  crx(5.788882664544407) _gate_q_14, _gate_q_5;
  u2(4.863610095810169, 5.318593749770996) _gate_q_8;
  cu(5.737605649573233, 5.2001053809968925, 5.222925965978613, 0.16674078822132063) _gate_q_13, _gate_q_0;
  h _gate_q_1;
  tdg _gate_q_4;
  csx _gate_q_6, _gate_q_11;
  sxdg _gate_q_7;
  csx _gate_q_12, _gate_q_15;
  t _gate_q_10;
  u2(5.877189845440224, 0.3067582231112814) _gate_q_9;
  csdg _gate_q_3, _gate_q_16;
  xx_minus_yy_5108205952(3.593246302803825, 0.4845485653887961) _gate_q_2, _gate_q_17;
}