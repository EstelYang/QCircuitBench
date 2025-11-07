# QCircuitBench Dataset

<p align="center">
  <a href="https://arxiv.org/abs/2410.07961">
    <img src="https://img.shields.io/badge/Paper-QCircuitBench-9b59b6?style=flat-square" alt="QCircuitBench Paper" />
  </a>
</p>

QCircuitBench is the first benchmark dataset designed to evaluate the capabilities of AI in designing and implementing quantum algorithms from the perspective of code generation. 

Key features of QCircuitBench include:

1. **Comprehensive Framework**: A general framework which formulates the key features of quantum algorithm design task for Large Language Models, including problem description, quantum circuit codes, classical post-processing, and verification functions.
2. **Wide Range of Quantum Algorithms**: Implementation for a wide range of quantum algorithms from basic primitives to advanced applications, with easy extension to more quantum algorithms.
3. **Validation and Verification Functions**: Automatic validation and verification functions, allowing for iterative evaluation and interactive reasoning without human inspection.
4. **Training Potential**: Promising potential as a training dataset through preliminary fine-tuning results.

![image](./readme_img/Dataset.png)

# 🚀 Benchmarking Workflow

The workflow of our benchmark is illustrated as follows:

![image](./readme_img/Workflow.png)


# 🌲 Directory Tour

Below is an illustration of the directory structure of QCircuitBench.

```
📂 QCircuitBench/
│
├──📂 Oracle_Construction/
│   ├──📂 Quantum_Logic_Synthesis/
│   │   └── Contains textbook-level and advanced oracles.
│   ├──📂 Problem_Encoding/
│       └── Scenarios of encoding applications.
│
├──📂 Algorithm_Design/
│   ├──📂 Quantum_Computing/
│   │   └── Contains universal quantum computing algorithms.
│   ├──📂 Quantum_Information/
│       └── Includes tasks related to quantum information protocols.
│   ├──📂 Variational_Circuits/
│       └── Contains Variational Quantum Algorithms.
│
├──📂 Random_Circuits/
    ├──📂 Clifford/
    │   └── Random circuits with Clifford gate set.
    ├──📂 Universal/
        └── Random circuits with universal gate set.
│
├──📂 Cirq Version/
    └── Implementation of the full dataset with Cirq.
```

Each subdirectory contains algorithm-specific data. For instance, the directory structure for Simon's algorithm under "Algorithm Design" is as follows:

```
📂 Algorithm_Design/
└──📂 Quantum_Computing/
    └──📂 simon/                            # All data for the Simon's Problem
        ├──📄 simon_dataset.py              # Dataset creation script
        ├──📄 simon_generation.py           # Qiskit generation code
        ├──📄 simon_post_processing.py      # Post-processing function
        ├──📄 simon_utils.py                # Utility functions for verification
        ├──📄 simon_verification.py         # Verification function
        ├──📄 simon_description.txt         # Problem description
        ├──📄 simon_verification.txt        # Verification results of the data points
        ├──📂 full_circuit/                 # Raw data of quantum circuits
        │   ├──📂 simon_n2/
        │   │   └──📄 simon_n2_s11_k11.qasm # Full circuit for a concrete setting
        │   └──📂 simon_n3/
        │       ├──📄 simon_n3_s011_k001.qasm
        │       ├──📄 simon_n3_s011_k101.qasm
        │       └── ...                   
        └──📂 test_oracle/                  # Extracted oracle definitions
            ├──📂 n2/
            │   ├──📂 trial1/
            │   │   ├──📄 oracle.inc        # Oracle definition as a .inc file
            │   │   └──📄 oracle_info.txt   # Oracle information (such as key strings)
            └──📂 n3/
                ├──📂 trial1/
                │   ├──📄 oracle.inc
                │   └──📄 oracle_info.txt
                ├──📂 trial2/
                │   ├──📄 oracle.inc
                │   └──📄 oracle_info.txt
                └── ...                   
        ├──📄 simon_n2.qasm                 # Algorithm circuit for model output
        ├──📄 simon_n3.qasm                 
        └── ...                           
```

# 📜 Example

In this subsection, we provide concrete examples to illustrate the different components of QCircuitBench. We use the case of Simon's Problem throughout the demonstration to achieve better consistency. For further details, please check the code repository.

### Problem Description

The problem description is provided in a text file named `{algorithm_name}_description.txt`. Below is an example template for Simon's Problem:

```text
Given a black box function f: {0,1}^n → {0,1}^n. The function is guaranteed to be a 
two-to-one mapping according to a secret string s ∈ {0, 1}^n, s ≠ 0^n, where given 
x_1 ≠ x_2, f(x_1) = f(x_2) iff x_1 ⊕ x_2 = s.

Design a quantum algorithm to find the secret string s. The function is provided as a 
black-box oracle gate named "Oracle" in the oracle.inc file, operating as:

    O_f |x⟩|y⟩ = |x⟩ |y ⊕ f(x)⟩

The input qubits |x⟩ are indexed from 0 to n-1, and the output qubits |f(x)⟩ are 
indexed from n to 2n-1. For the algorithm, provide:

1. The quantum circuit implementation using QASM or Qiskit.
2. The post-processing code run_and_analyze(circuit, aer_sim) in Python, which simulates 
   the circuit with AerSimulator and returns the secret string s based on the simulation results.
```

### Generation Code

The following is the Qiskit code to generate a quantum circuit for Simon's Problem. The file is named `{algorithm_name}_generation.py`.

```python
from Qiskit import QuantumCircuit

def simon_algorithm(n, oracle):
    """Generates a Simon algorithm circuit.

    Parameters:
    - n (int): number of qubits
    - oracle: the oracle function

    Returns:
    - QuantumCircuit: the Simon algorithm circuit
    """
    # Create a quantum circuit on 2n qubits
    simon_circuit = QuantumCircuit(2 * n, n)

    # Initialize the first register to the |+> state
    simon_circuit.h(range(n))

    # Append the Simon's oracle
    simon_circuit.append(oracle, range(2 * n))

    # Apply a H-gate to the first register
    simon_circuit.h(range(n))

    # Measure the first register
    simon_circuit.measure(range(n), range(n))

    return simon_circuit
```

### Algorithm Circuit

The OpenQASM 3.0 file stores the quantum circuit for specific settings. Below is an example for Simon's algorithm with `n = 3`. This file is named `{algorithm_name}_n{qubit_number}.qasm`.

```qasm
OPENQASM 3.0;
include "stdgates.inc";
include "oracle.inc";
bit[3] c;
qubit[6] q;
h q[0];
h q[1];
h q[2];
Oracle q[0], q[1], q[2], q[3], q[4], q[5];
h q[0];
h q[1];
h q[2];
c[0] = measure q[0];
c[1] = measure q[1];
c[2] = measure q[2];
```

### Post-Processing Function

This Python function simulates the circuit and derives the final answer to Simon's Problem. The file is named `{algorithm_name}_post_processing.py`.

```python
from sympy import Matrix
import numpy as np
from Qiskit import transpile

def mod2(x):
    return x.as_numer_denom()[0] % 2

def solve_equation(string_list):
    """Solve A^T * X = 0 mod 2 for the null space."""
    M = Matrix(string_list).T
    M_I = Matrix(np.hstack([M, np.eye(M.shape[0], dtype=int)]))
    M_I_rref = M_I.rref(iszerofunc=lambda x: x % 2 == 0)
    M_I_final = M_I_rref[0].applyfunc(mod2)
    
    if all(value == 0 for value in M_I_final[-1, :M.shape[1]]):
        result_s = "".join(str(c) for c in M_I_final[-1, M.shape[1]:])
    else:
        result_s = "0" * M.shape[0]

    return result_s

def run_and_analyze(circuit, aer_sim):
    n = circuit.num_qubits // 2
    circ = transpile(circuit, aer_sim)
    results = aer_sim.run(circ, shots=n).result()
    counts = results.get_counts()
    equations = [list(map(int, result)) for result in counts if result != "0" * n]
    prediction = solve_equation(equations) if len(equations) > 0 else "0" * n
    return prediction
```

### Oracle / Gate Definition

The oracle is defined in the file `oracle.inc`, which is used for algorithm design tasks.

```qasm
gate Oracle q[0], q[1], q[2], q[3], q[4], q[5] {
  cx q[0], q[3];
  cx q[1], q[4];
  cx q[2], q[5];
  cx q[2], q[5];
  x q[3];
}
```

### Oracle Information

This information is stored in the `oracle_info.txt` file and provides additional metadata for the oracle, such as the secret and key strings. Below is an example for Simon's Problem with `n = 3` and test case 2:

```text
Secret string: 100
Key string: 001
```

### Verification Function

The following function checks the correctness of the generated model. The file is named `{algorithm_name}_verification.py`.

```python
from simon_utils import *

def check_model(qasm_string, code_string, n, t=1):
    """Check the implementation for Simon's Problem."""
    qasm_syntax = -1
    code_syntax = -1
    result_score = 0.0
    gate_count_ratio = float("nan")
    shot_ratio = float("nan")
    time_ratio = float("nan")

    # QASM syntax verification
    dire = "./test_oracle"
    dire_gt = "."
    with open(f"{dire}/n{n}/trial{t}/oracle.inc", "r") as file:
        oracle_def = file.read()
    full_qasm = plug_in_oracle(qasm_string, oracle_def)
    circuit = verify_qasm_syntax(full_qasm)
    if circuit is None:
        print("QASM syntax error detected, using ground truth.")
        qasm_syntax = 0
        with open(f"{dire_gt}/simon_n{n}.qasm", "r") as file:
            qasm_string = file.read()
    else:
        qasm_syntax = 1

    # Post-processing code verification
    try:
        local_vars = {}
        code = "\n".join(
            [
                line
                for line in code_string.splitlines()
                if not line.strip().startswith("from qiskit")
                and "import qiskit" not in line
            ]
        )
        code_string = code.replace(
            "def run_and_analyze(circuit, aer_sim):\n",
            "def run_and_analyze(circuit, aer_sim):\n    circuit = transpile(circuit, aer_sim)\n",
            1,
        )
        exec(code_string, globals(), local_vars)
        run_and_analyze_func = local_vars["run_and_analyze"]
        code_syntax = 1
        print("Post-processing code loaded successfully.")
    except Exception as e:
        print(f"Post-processing syntax error: {e}\nusing ground truth.")
        run_and_analyze_func = ground_truth_run_and_analyze
        code_syntax = 0

    # Efficiency check & semantic evaluation
    if qasm_syntax == 1 and code_syntax == 1:
        gate_count_ratio, shot_ratio, time_ratio = efficiency_check(
            qasm_string,
            dire_gt,
            code_string,
            run_and_analyze_func,
            ground_truth_run_and_analyze,
            dire,
            n,
        )
        try:
            result_score = execute_test_cases(qasm_string, run_and_analyze_func, n)
        except Exception as e:
            print(f"Post-processing running-time error: {e}")
            code_syntax = 0

    return (
        qasm_syntax,
        code_syntax,
        result_score,
        gate_count_ratio,
        shot_ratio,
        time_ratio,
    )
```

### Dataset Creation Script

This script creates the dataset from scratch, generating the circuits, extracting gate definitions, and ensuring dataset validity. The file is named `{algorithm_name}_dataset.py`.

```python
import argparse

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-f", "--func", 
        choices=["qasm", "json", "gate", "check"],
        help="Function to call: generate qasm, json, extract gate, or check dataset."
    )
    args = parser.parse_args()

    if args.func == "qasm":
        generate_circuit_qasm()
    elif args.func == "json":
        generate_dataset_json()
    elif args.func == "gate":
        extract_gate_definition()
    elif args.func == "check":
        check_dataset()
```


# 🔊 Download

We host a demo version of the dataset on this GitHub repository to illustrate its structure and provide sample data. For the complete dataset, please download it from [Google Drive](https://drive.google.com/file/d/1Z__0PfOoHT9gz2I_Gc3S1zrbSrUMswqL/view?usp=share_link).


# 📚 Citation

If you use QCircuitBench in your work, please cite:

```bibtex
@inproceedings{yang2025qcircuitbench,
  title={QCircuitBench: A Large-Scale Dataset for Benchmarking Quantum Algorithm Design},
  author={Yang, Rui and Wang, Ziruo and Gu, Yuntian and Liang, Yitao and Li, Tongyang},
  booktitle={The Thirty-ninth Annual Conference on Neural Information Processing Systems (NeurIPS 2025), Datasets and Benchmarks Track},
  year={2025},
  url={https://arxiv.org/abs/2410.07961}
}

