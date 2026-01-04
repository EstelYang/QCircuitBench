import subprocess
from pathlib import Path
from tqdm import tqdm

RUN_CODEX = "python3 run_codex.py"
GEN_MODEL = "gpt-5.2"
CODEX_MODEL = "gpt-5.2"
NO_POST_VERIFY = True
ROOT = Path(__file__).resolve().parent
TASKS_ROOT = ROOT / "tasks"
DESCRIPTIONS_ROOT = ROOT / "descriptions"

TASKS = [
    ("bernstein_vazirani", "bv_description.txt"),
    ("bernstein_vazirani_oracle", "bv_oracle_description.txt"),
    ("clifford_1", "clifford_1_description.txt"),
    ("clifford_2", "clifford_2_description.txt"),
    ("data_encoding", "enc_description.txt"),
    ("deutsch_jozsa", "dj_description.txt"),
    ("deutsch_jozsa_oracle", "dj_oracle_description.txt"),
    ("diffusion_operator", "diffusion_description.txt"),
    ("ghz_state", "ghz_description.txt"),
    ("grover", "grover_description.txt"),
    ("grover_oracle", "grover_oracle_description.txt"),
    ("generalized_simon_multi", "multi_simon_description.txt"),
    ("generalized_simon_multi_oracle", "multi_simon_oracle_description.txt"),
    ("phase_estimation", "pe_description.txt"),
    ("qaoa", "qaoa_description.txt"),
    ("qaer", "qae_description.txt"),
    ("quantum_fourier_transform", "qft_description.txt"),
    ("quantum_random_generator", "qrng_description.txt"),
    ("shor", "shor_description.txt"),
    ("simon", "simon_description.txt"),
    ("simon_oracle", "simon_oracle_description.txt"),
    ("efficient_su2", "su_description.txt"),
    ("swap_test", "swap_description.txt"),
    ("generalized_simon_ternary", "ternary_simon_description.txt"),
    ("generalized_simon_ternary_oracle", "simon_ternary_oracle_description.txt"),
    ("universal_1", "universal_1_description.txt"),
    ("universal_2", "universal_2_description.txt"),
    ("w_state", "w_description.txt"),
]


def run_one(workdir: Path, task_file: Path):
    cmd = [
        "python3", str(ROOT / "run_codex.py"),
        "--workdir", str(workdir),
        "--task-file", str(task_file),
        "--gen-model", GEN_MODEL,
        "--codex-model", CODEX_MODEL,
    ]
    if NO_POST_VERIFY:
        cmd.append("--no-post-verify")

    return subprocess.run(cmd)


def main():
    print(f"    Running {len(TASKS)} tasks\n")

    for task_name, desc_file in tqdm(TASKS, desc="Running tasks"):
        workdir = TASKS_ROOT / task_name
        task_file = DESCRIPTIONS_ROOT / desc_file

        workdir.mkdir(parents=True, exist_ok=True)

        result = run_one(workdir, task_file)

        if result.returncode != 0:
            print(f"\n  Failed: {task_name} ({desc_file})")

    print("\n   All tasks finished")


if __name__ == "__main__":
    main()
