#!/usr/bin/env bash
set -euo pipefail

echo "=== QCircuitBench Parity Run (Original Benchmark) ==="

if [[ -z "${OPENAI_API_KEY:-}" ]]; then
  echo "ERROR: OPENAI_API_KEY is not set."
  echo "Please run: export OPENAI_API_KEY=sk-..."
  exit 1
fi

echo "[1/2] Generating model outputs..."
python3 batch_run.py

echo "[2/2] Verifying model outputs..."
python3 batch_verification.py --runlist runlist.jsonl

echo "=== Parity run finished ==="