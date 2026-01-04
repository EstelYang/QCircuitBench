qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle in0, in1, in2, in3, in4, in5, in6, in7, out0, out1, out2, out3, out4, out5, out6, out7 {
  x out1;
  x out2;
  x out4;
  x out5;
  x out6;
  x out7;

  cx in0, out0;
  cx in1, out1;
  cx in2, out2;
  cx in4, out4;
  cx in5, out5;
  cx in6, out6;
  cx in7, out7;

  cx in3, out5;
  cx in3, out6;
  cx in3, out7;
}

qubit[16] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6], q[7], q[8], q[9], q[10], q[11], q[12], q[13], q[14], q[15];
"""
