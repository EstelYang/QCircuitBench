qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate add1 t0, t1 {
  x t0;
  cx t0, t1;
  cx t1, t0;
}

gate add2 t0, t1 {
  x t1;
  cx t1, t0;
  cx t0, t1;
}

gate c3x c0, c1, c2, t0 {
  p(pi/8) c0;
  p(pi/8) c1;
  cx c0, c1;
  p(-pi/8) c1;
  cx c0, c1;
  p(pi/8) c2;
  cx c1, c2;
  p(-pi/8) c2;
  cx c0, c2;
  p(pi/8) c2;
  cx c1, c2;
  p(-pi/8) c2;
  cx c0, c2;
  h t0;
  p(pi/8) t0;
  cx c2, t0;
  p(-pi/8) t0;
  cx c1, t0;
  p(pi/8) t0;
  cx c2, t0;
  p(-pi/8) t0;
  cx c0, t0;
  p(pi/8) t0;
  cx c2, t0;
  p(-pi/8) t0;
  cx c1, t0;
  p(pi/8) t0;
  cx c2, t0;
  p(-pi/8) t0;
  cx c0, t0;
  h t0;
}

gate cadd1 c0, c1, t0, t1 {
  ccx c0, c1, t0;
  c3x c0, c1, t0, t1;
  c3x c0, c1, t1, t0;
}

gate cadd2 c0, c1, t0, t1 {
  ccx c0, c1, t1;
  c3x c0, c1, t1, t0;
  c3x c0, c1, t0, t1;
}

gate Oracle a0, a1, a2, a3, o0, o1 {
  // n=2, s=02 => j=1, so f(x) (1 trit) = x0 + 2 (mod 3) with b=20.
  // Branch x0==0 (a0=0,a1=0): add 2 mod 3
  x a0;
  x a1;
  cadd2 a0, a1, o0, o1;
  x a1;
  x a0;

  // Branch x0==2 (a0=1,a1=0): add 1 mod 3
  x a1;
  cadd1 a0, a1, o0, o1;
  x a1;
}

qubit[6] q;
Oracle q[0], q[1], q[2], q[3], q[4], q[5];
"""
