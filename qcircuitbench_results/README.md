# QCircuitBench Adapter Parity Results

## Overview

- **Adapter**: QCircuitBench  
- **Agent**: Codex-0.76.0  
- **Agent Model**: openai/gpt-5.2-codex  
- **Tasks**: 28 tasks consists of quantum algorithm, oracle construction and random circuit synthesis
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
uv run harbor jobs start -p ./datasets/qcircuibench/
```

## Notes & Caveats

Known limitations, differences from the original benchmark, and evaluation considerations:

1. **Instruction and task specification parity**  
   Task descriptions and verification functions are reconstructed directly from the original QCircuitBench benchmark for parity experiments. In particular, oracle logic used during evaluation is reconstructed and injected programmatically at runtime, rather than being loaded from static local files, to ensure consistent behavior across different execution environments. This reconstruction preserves the original task semantics while enabling compatibility with Harbor’s execution and logging interfaces.

2. **Partial and probabilistic success criteria**  
   Some tasks admit probabilistic or partial success (e.g., Grover search, Phase Estimation, and Simon etc.). For these tasks, correctness is determined using a combination of theoretical success guarantees and empirically validated thresholds. Outputs whose success probability exceeds a predefined task-specific threshold are counted as fully correct (`result_score = 1.0`); otherwise, scores are scaled proportionally according to the measured success rate.

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
QCircuitBench adapter developed and maintained by the **QCircuitBench contributors**, with integration support from the Harbor framework. For feedback or issues, please open a pull request or issue in the respective repositories.