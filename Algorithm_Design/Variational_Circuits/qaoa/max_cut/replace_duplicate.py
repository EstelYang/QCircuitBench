import re


def detect_and_remove_redundant_gates(qasm_string):
    redundant_gates = {}
    gate_pattern = re.compile(r'gate\s+(\w+)\(([^)]+)\)\s+([\w\s,]+)\s*{([^}]+)}', re.DOTALL)
    matches = gate_pattern.findall(qasm_string)

    gate_counter = 0
    gate_definitions = {}

    for match in matches:
        gate_name, gate_params, qubit_args, body = match
        gate_key = (gate_params.strip(), body.strip())

        if gate_key in gate_definitions:
            redundant_gates[gate_name] = 'rzz'
        else:
            new_gate_name = f"rzz_{gate_counter}" if gate_counter == 0 else "rzz"
            gate_definitions[gate_key] = new_gate_name
            redundant_gates[gate_name] = new_gate_name
            gate_counter += 1

    optimized_qasm = qasm_string
    for gate_name, new_name in redundant_gates.items():
        if new_name == 'rzz':
            optimized_qasm = re.sub(rf'gate\s+{gate_name}\s+\([^)]+\)\s+[\w\s,]+\s*{{[^}}]*}}',
                                    f'gate {new_name}({gate_params}) {qubit_args} {{\n{body}\n}}',
                                    optimized_qasm, count=1)
        else:
            optimized_qasm = re.sub(rf'gate\s+{gate_name}\s+\([^)]+\)\s+[\w\s,]+\s*{{[^}}]*}}', '', optimized_qasm)
    for gate_name in redundant_gates.keys():
        optimized_qasm = re.sub(rf'\b{gate_name}\b', 'rzz', optimized_qasm)

    optimized_qasm = re.sub(r'\n\s*\n', '\n', optimized_qasm).strip()

    unique_gate_definitions = set()
    gate_definitions_section = []

    qasm_string = optimized_qasm
    matches = gate_pattern.findall(qasm_string)

    cnt = 0
    for match in matches:
        gate_name, gate_params, gate_qubits, gate_body = match
        gate_body = gate_body.strip()
        gate_signature = (gate_params.strip(), gate_qubits.strip(), gate_body)

        if gate_signature not in unique_gate_definitions:
            unique_gate_definitions.add(gate_signature)
            gate_definitions_section.append(
                f"gate {gate_name}_{cnt}({gate_params}) {gate_qubits} {{\n{gate_body}\n}}"
            )
            cnt += 1

            parameter_to_rzz_name = {}
            counter = 0

            pattern = re.compile(r'\brzz\((2\*gamma_\d+)\)')

            def replace_match(match):
                nonlocal counter
                param = match.group(1)

                if param not in parameter_to_rzz_name:
                    parameter_to_rzz_name[param] = f"rzz_{counter}"
                    counter += 1

                return f"{parameter_to_rzz_name[param]}({param})"


            optimized_qasm = pattern.sub(replace_match, optimized_qasm)
            qasm_string = optimized_qasm

    header_pattern = re.compile(r'OPENQASM.*?include.*?;',
                                re.DOTALL)
    header_match = header_pattern.search(qasm_string)
    header = header_match.group() if header_match else ""

    non_gate_qasm = gate_pattern.sub('', qasm_string).strip()
    non_gate_qasm = header_pattern.sub('', non_gate_qasm).strip()

    optimized_qasm = '\n\n'.join([header] + gate_definitions_section + [non_gate_qasm])
    optimized_qasm = re.sub(r'\n\s*\n', '\n', optimized_qasm).strip()

    return optimized_qasm
