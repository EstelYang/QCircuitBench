qasm_string = """OPENQASM 3.0;
include "stdgates.inc";
gate prep a { h a; }
qubit[4] q;
bit[4] c;
prep q[2];
"""
