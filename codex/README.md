# QCircuitBench Adapter Parity Results

## Overview

- **Adapter**: QCircuitBench  
- **Agent**: Codex-0.76.0  
- **Agent Model**: openai/gpt-5.2 
- **Tasks**: 28 tasks consisting of quantum algorithm, oracle construction and random circuit synthesis
- **Trials**: 3  

---

## Results Summary

### Original Parity Results

| Trial 1 | Trial 2 | Trial 3 |
|--------:|--------:|--------:|
| 56.1%   | 64.3%   | 62.3%   |

**Overall Mean: 60.9% ± 3.5% (≈ 17.05 / 28 tasks)**

---

### Harbor Parity Results

| Trial 1 | Trial 2 | Trial 3 |
|--------:|--------:|--------:|
| 58.0%   | 62.7%   | 65.1%   |

**Overall Mean: 61.9% ± 3.6% (≈ 17.33 / 28 tasks)**

---

## Comparison with Original Benchmark

| Benchmark | Agent | Model | Metric | Value | Notes                      |
|----------|-------|-------|--------|-------|----------------------------|
| QCircuitBench Original | Codex agent | gpt-5.2-codex | Result score | 60.9% ± 3.5% | 3 trials over all 28 tasks |
| QCircuitBench Harbor | Codex agent | gpt-5.2-codex | Result score | 61.9% ± 3.6% | 3 trials over all 28 tasks |

---

## Reproduction Steps

All parity experiments are conducted on the **QCircuitBench task subset (28 tasks)**.  
Each task is evaluated **three times independently**.

### Run the original benchmark (baseline)

```bash
git clone https://github.com/ZeroWang030221/QCircuitBench.git
cd QCircuitBench
git checkout harbor-adapter

# requires OPENAI_API_KEY
bash codex/run_parity.sh
```

### Run the adapted benchmark (qcircuitbench):
```bash
uv run harbor jobs start -p datasets/qcircuitbench/ -a codex -m gpt-5.2
```

### Run the oracle:
```bash
uv run harbor jobs start -p datasets/qcircuibench/
```

## Notes & Caveats

Known limitations, differences from the original benchmark, and evaluation considerations:

1. **Adaptation for benchmarking coding agents**. The original QCircuitBench is designed to benchmark LLMs. To adapt it for coding agents, we sampled a lightweight subset containing one problem instance per algorithm and reconstructed both the task descriptions and verification functions. We introduced agent-oriented instructions (e.g., creating required files in the working directory) and replaced static oracle files with a dynamic oracle-generation mechanism within the verifier. This adaptation preserves the benchmark’s original evaluation objective while making it better suited for benchmarking coding agents, more lightweight, and fully compatible with the Harbor framework.
2. **Partial and probabilistic success criteria**. Some tasks admit probabilistic or partial success (e.g., Grover search, Phase Estimation, and Simon etc.). For these tasks, correctness is determined using a combination of theoretical success guarantees and empirically validated thresholds. Outputs whose success probability exceeds a predefined task-specific threshold are counted as fully correct (`result_score = 1.0`); otherwise, scores are scaled proportionally according to the measured success rate.
3. **Caveat on network-related build failures.** Due to intermittent network issues, a small number of tasks (typically 2–3) within a Harbor job in our parity experiment failed because the runtime environment could not be built successfully. When reporting results on the original QCircuitBench benchmark, we excluded these corresponding tasks to ensure that the parity experiment compares the same set of task instances across both settings and is therefore not confounded by infrastructure-related failures.
---


## Citation

If you use **QCircuitBench** or its Harbor adapter in your research, please cite:

```bibtex
@inproceedings{yangqcircuitbench,
  title={QCircuitBench: A Large-Scale Dataset for Benchmarking Quantum Algorithm Design},
  author={Yang, Rui and Wang, Ziruo and Gu, Yuntian and Liang, Yitao and Li, Tongyang},
  booktitle={The Thirty-ninth Annual Conference on Neural Information Processing Systems Datasets and Benchmarks Track}
}
```

## Links
- [QCircuitBench Repository](https://github.com/EstelYang/QCircuitBench)
- [QCircuitBench Paper](https://arxiv.org/abs/2410.07961)

## Authors & Contributions 
QCircuitBench adapter is developed and maintained by

- Rui Yang (ypyangrui@pku.edu.cn)
- Ziruo Wang (zrwang25@stu.pku.edu.cn)

Integration support is provided by the Harbor framework.
For feedback or issues, please open a pull request or issue in the respective repositories.
