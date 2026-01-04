qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";
gate oracle qa0, qa1, qa2, qa3, qa4 {
  x qa0;
  x qa1;
  x qa2;
  c4z qa0, qa1, qa2, qa3, qa4;
  x qa2;
  x qa1;
  x qa0;
}
qubit[5] q;
oracle q[0], q[1], q[2], q[3], q[4];
"""
