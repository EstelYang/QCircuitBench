qasm_string = """OPENQASM 3.0;
include "stdgates.inc";

gate oracle_s02_b20 in0, in1, in2, in3, out0, out1 {
    x in0;
    x in1;
    ccx in0, in1, out0;
    x in1;
    x in0;

    x in1;
    ccx in0, in1, out1;
    x in1;
}

qubit[6] q;
oracle_s02_b20 q[0], q[1], q[2], q[3], q[4], q[5];
"""
