qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
include "customgates.inc";

gate oracle q0, q1, q2, q3, q4, q5, q6 {
    h q0;
    h q1;
    h q2;
    h q3;
    h q4;
    h q5;
    h q6;

    x q0;
    x q1;
    x q2;
    x q3;
    x q4;
    x q5;
    x q6;

    h q6;
    mcx q0, q1, q2, q3, q4, q5, q6;
    h q6;

    x q0;
    x q1;
    x q2;
    x q3;
    x q4;
    x q5;
    x q6;

    h q0;
    h q1;
    h q2;
    h q3;
    h q4;
    h q5;
    h q6;
}

qubit[7] q;
oracle q[0], q[1], q[2], q[3], q[4], q[5], q[6];
"""
