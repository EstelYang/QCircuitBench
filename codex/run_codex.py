from __future__ import annotations
import argparse
import json
import shlex
import subprocess
from pathlib import Path
from typing import Any, Optional
import os
import random
import time
import sys
from functools import wraps
from typing import Callable, TypeVar
from openai import APIConnectionError, APITimeoutError, RateLimitError

T = TypeVar("T")


def retry(
        *,
        retries: int = 5,
        base_delay: float = 2.0,
        max_delay: float = 60.0,
        jitter: float = 0.2,
        retry_exceptions: tuple[type[Exception], ...] = (Exception,),
        name: str | None = None,
):
    def decorator(fn: Callable[..., T]) -> Callable[..., T]:
        label = name or fn.__name__

        @wraps(fn)
        def wrapper(*args, **kwargs) -> T:
            attempt = 0
            while True:
                try:
                    return fn(*args, **kwargs)
                except retry_exceptions as e:
                    attempt += 1
                    if attempt > retries:
                        print(
                            f"[Retry:{label}]   failed after {retries} retries: {e}",
                            file=sys.stderr,
                        )
                        raise

                    delay = min(max_delay, base_delay * (2 ** (attempt - 1)))
                    delay *= 1 + random.uniform(-jitter, jitter)

                    print(
                        f"[Retry:{label}]   attempt {attempt}/{retries}, "
                        f"sleep {delay:.1f}s due to {type(e).__name__}: {e}",
                        file=sys.stderr,
                    )
                    time.sleep(delay)

        return wrapper

    return decorator


@retry(
    retries=6,
    base_delay=3.0,
    max_delay=90.0,
    jitter=0.2,
    retry_exceptions=(APIConnectionError, APITimeoutError, RateLimitError),
    name="openai_generate",
)
def generate_with_openai(task: str, model: str, reasoning: Optional[str] = None) -> str:
    try:
        from openai import OpenAI
    except Exception as e:
        raise RuntimeError(
            "Failed to import openai. Install it in your venv: python -m pip install openai"
        ) from e

    client = OpenAI(timeout=120)
    print('Yes, we have created client successfully.')

    sys_prompt = (
        "You write correct, runnable OpenQASM3.0 code and Python code.\n"
        "Return ONLY the full contents of a single Python file as solution.py.\n"
        "Do NOT wrap in markdown fences.\n"
        "Do NOT include explanations.\n"
    )

    kwargs: dict[str, Any] = {
        "model": model,
        "input": [
            {"role": "system", "content": sys_prompt},
            {"role": "user", "content": task},
        ],
    }

    if reasoning:
        kwargs["reasoning"] = {"effort": reasoning}

    resp = client.responses.create(**kwargs)
    text = getattr(resp, "output_text", None)
    print('Yes, we have got the model\'s output.')
    if not isinstance(text, str) or not text.strip():
        raise RuntimeError("OpenAI API returned empty output_text.")
    return text


def write_auth_json(codex_home: Path, api_key: str) -> Path:
    codex_home.mkdir(parents=True, exist_ok=True)
    auth_path = codex_home / "auth.json"
    auth_path.write_text(json.dumps({"OPENAI_API_KEY": api_key}, ensure_ascii=False), encoding="utf-8")
    return auth_path


def run_cmd(
        cmd: str,
        cwd: Path,
        env: dict[str, str],
        stdout_path: Optional[Path] = None,
        timeout_s: Optional[int] = None,
) -> int:
    bash_cmd = cmd
    if stdout_path is not None:
        escaped = shlex.quote(str(stdout_path))
        bash_cmd = f"set -o pipefail; {cmd} 2>&1 </dev/null | tee {escaped}"

    proc = subprocess.run(
        ["bash", "-lc", bash_cmd],
        cwd=str(cwd),
        env=env,
        timeout=timeout_s,
        text=True,
    )
    return int(proc.returncode)


def parse_last_usage_from_codex_log(codex_log: Path) -> dict[str, Any]:
    usage: dict[str, Any] = {}
    if not codex_log.exists():
        return usage

    try:
        lines = codex_log.read_text(encoding="utf-8", errors="ignore").splitlines()
    except Exception:
        return usage

    for line in reversed(lines):
        line = line.strip()
        if not line:
            continue
        try:
            obj = json.loads(line)
        except json.JSONDecodeError:
            continue
        if isinstance(obj, dict) and "usage" in obj and isinstance(obj["usage"], dict):
            usage = obj["usage"]
            break
    return usage


def build_codex_instruction(task_text: str, target_file: str, current_code: str) -> str:
    return f"""
You are given a programming task and the current contents of {target_file}.
You must produce an improved version of {target_file} that solves the task.

Rules:
- Edit ONLY {target_file}.
- Prefer minimal diffs.
- If dependencies are missing, explain instead of installing packages.

TASK:
{task_text}

CURRENT {target_file}:
<<<BEGIN_FILE
{current_code}
END_FILE>>>
""".strip()


def codex_exec(
        workdir: Path,
        instruction: str,
        codex_home: Path,
        codex_model: str,
        codex_log: Path,
) -> tuple[int, str, str]:
    model_short = codex_model.split("/")[-1]
    escaped_instruction = shlex.quote(instruction)

    cmd = (
        "codex exec "
        "--dangerously-bypass-approvals-and-sandbox "
        "--skip-git-repo-check "
        f"--model {shlex.quote(model_short)} "
        "-- "
        f"{escaped_instruction}"
    )

    env = dict(os.environ)
    env["CODEX_HOME"] = str(codex_home)

    proc = subprocess.run(
        ["bash", "-lc", cmd],
        cwd=str(workdir),
        env=env,
        text=True,
        capture_output=True,
    )
    stdout = proc.stdout or ""
    stderr = proc.stderr or ""
    codex_log.write_text(stdout + "\n" + stderr, encoding="utf-8")
    return int(proc.returncode), stdout, stderr


def verify_locally(workdir: Path, verify_cmd: str):
    env = dict(os.environ)
    rc = run_cmd(cmd=verify_cmd, cwd=workdir, env=env, stdout_path=None, timeout_s=None)
    return rc


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--workdir", type=str, required=True, help="Workspace directory for this run")
    ap.add_argument("--task", type=str, help="Task prompt for Stage 1 generator")
    ap.add_argument("--task-file", type=str, required=True, default=None,
                    help="Path to a text file containing the task prompt")
    ap.add_argument("--verify-cmd", type=str, required=False, help="Verifier command run inside workdir")
    ap.add_argument("--target-file", type=str, default="solution.py", help="Where to write generated code")
    ap.add_argument("--gen-model", type=str, default="gpt-4.1-mini", help="Generator model (OpenAI API)")
    ap.add_argument("--gen-reasoning", type=str, default=None, help="Reasoning effort (if supported)")
    ap.add_argument("--codex-model", type=str, default="gpt-4.1-mini", help="Codex CLI model")
    ap.add_argument("--codex-home", type=str, default=None, help="CODEX_HOME dir (default: workdir/agent)")
    ap.add_argument("--skip-stage1", action="store_true", help="Skip generation; assume target file exists")
    ap.add_argument("--no-post-verify", action="store_true", help="Do not run local verify after Codex")
    args = ap.parse_args()

    api_key = os.environ.get("OPENAI_API_KEY", "").strip()
    if not api_key:
        print("ERROR: OPENAI_API_KEY is not set in the environment.", file=sys.stderr)
        return 2

    workdir = Path(args.workdir).expanduser().resolve()
    workdir.mkdir(parents=True, exist_ok=True)

    agent_dir = Path(args.codex_home).expanduser().resolve() if args.codex_home else (workdir / "agent")
    codex_log = agent_dir / "codex.txt"
    result_path = agent_dir / "result.json"
    target_path = workdir / args.target_file

    t0 = time.time()
    agent_dir.mkdir(parents=True, exist_ok=True)

    if args.task_file:
        task_file = Path(args.task_file).expanduser().resolve()
        if not task_file.exists():
            print(f"ERROR: --task-file not found: {task_file}", file=sys.stderr)
            return 2
        task_text = task_file.read_text(encoding="utf-8")
    else:
        task_text = args.task

    stage1_ok = True
    gen_text = None
    if not args.skip_stage1:
        print(f"[Stage 1] Generating {args.target_file} with {args.gen_model} ...")
        gen_text = generate_with_openai(task_text, model=args.gen_model, reasoning=args.gen_reasoning)
        target_path.write_text(gen_text, encoding="utf-8")
        print(f"[Stage 1] Wrote: {target_path}")
    else:
        if not target_path.exists():
            print(f"ERROR: --skip-stage1 set but {target_path} does not exist.", file=sys.stderr)
            return 2
        print(f"[Stage 1] Skipped (using existing): {target_path}")

    print("[Stage 2] Running Codex CLI debug (verifier hidden) ...")
    auth_path = write_auth_json(agent_dir, api_key)

    try:
        current_code = target_path.read_text(encoding="utf-8", errors="ignore")
        instruction = build_codex_instruction(
            task_text=task_text,
            target_file=args.target_file,
            current_code=current_code,
        )

        rc_codex, new_text, _stderr = codex_exec(
            workdir=workdir,
            instruction=instruction,
            codex_home=agent_dir,
            codex_model=args.codex_model,
            codex_log=codex_log,
        )

        before = current_code
        after = target_path.read_text(encoding="utf-8", errors="ignore")

        if before != after:
            print(f"Before:\n{before}\nAfter:\n{after}")
            print("[Stage 2] solution.py modified by Codex.")
        else:
            print("[Stage 2] solution.py unchanged by Codex.")


    finally:
        try:
            if auth_path.exists():
                auth_path.unlink()
        except Exception:
            pass

    usage = parse_last_usage_from_codex_log(codex_log)
    elapsed = time.time() - t0

    rc = None
    if not args.no_post_verify:
        rc = verify_locally(workdir, args.verify_cmd)
        print(f"[Post-verify] rc={rc}")

    result = {
        "workdir": str(workdir),
        "target_file": str(target_path),
        "gen_model": args.gen_model,
        "codex_model": args.codex_model,
        "verify_cmd": args.verify_cmd,
        "stage1_skipped": bool(args.skip_stage1),
        "codex_returncode": rc_codex,
        "post_verify_reward": rc,
        "usage": usage,
        "elapsed_sec": elapsed,
    }
    result_path.write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding="utf-8")

    print(f"[Done] codex_log={codex_log}")
    print(f"[Done] result_json={result_path}")


if __name__ == "__main__":
    raise SystemExit(main())
