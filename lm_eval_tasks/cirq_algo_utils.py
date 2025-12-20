from lm_eval.tasks.qcircuitbench.cirq_algo_design.bv_util import check_model as bv_check, check_description as bv_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.dj_util import check_model as dj_check, check_description as dj_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.gr_util import check_model as gr_check, check_description as gr_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.pe_util import check_model as pe_check, check_description as pe_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.qft_util import check_model as qft_check, check_description as qft_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.sm_util import check_model as sm_check, check_description as sm_des

from lm_eval.tasks.qcircuitbench.cirq_algo_design.ghz_util import check_model as ghz_check, check_description as ghz_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.qr_util import check_model as qr_check, check_description as qr_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.sw_util import check_model as sw_check, check_description as sw_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.w_util import check_model as w_check, check_description as w_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.mulsm_util import check_model as mulsm_check, \
    check_description as mulsm_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.tersm_util import check_model as tersm_check, \
    check_description as tersm_des

from lm_eval.tasks.qcircuitbench.cirq_algo_design.shor_util import check_model as shor_check, \
    check_description as shor_des

from lm_eval.tasks.qcircuitbench.cirq_algo_design.su_util import check_model as su_check, check_description as su_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.mc_util import check_model as mc_check, check_description as mc_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.enc_util import check_model as enc_check, check_description as enc_des
from lm_eval.tasks.qcircuitbench.cirq_algo_design.qae_util import check_model as qae_check, check_description as qae_des

from lm_eval.api.metrics import exact_match

from typing import Dict, Optional
import re

ls_of_check = [bv_check, dj_check, gr_check, pe_check, qft_check, sm_check, ghz_check,
               qr_check, sw_check, w_check, mulsm_check, tersm_check, shor_check, su_check, mc_check, enc_check,
               qae_check]
ls_of_des = [bv_des, dj_des, gr_des, pe_des, qft_des, sm_des, ghz_des, qr_des, sw_des, w_des, mulsm_des, tersm_des,
             shor_des, su_des, mc_des, enc_des, qae_des]

PY_START_PATTERN = re.compile(
    r'^\s*(from\s+\w+\s+import\b|import\s+\w+|def\s+\w+\s*\(|class\s+\w+\s*\(|if\s+__name__\s*==)',
    re.MULTILINE
)


def trim_execution_block(code_string: str) -> str:
    lines = code_string.splitlines()
    cut_index = None
    for i, line in enumerate(lines):
        stripped = line.strip()
        if not stripped:
            continue
        if line.startswith((" ", "\t")):
            continue
        if stripped.startswith(("def ", "class ", "import ", "from ")):
            continue
        cut_index = i
        break
    if cut_index is not None:
        return "\n".join(lines[:cut_index]).rstrip() + "\n"
    return code_string.rstrip() + "\n"


def split_mixed_cirq_python(code: str) -> tuple[Optional[str], Optional[str]]:
    if not code.strip().startswith("def algorithm("):
        return None, None

    m = PY_START_PATTERN.search(code)
    if not m:
        return code.strip(), None

    cirq_part = code[:m.start()].rstrip()
    python_part = code[m.start():].lstrip()
    return (cirq_part if cirq_part else None,
            python_part if python_part else None)


def extract_cirq_python(s: str) -> Dict[str, Optional[str]]:
    result: Dict[str, Optional[str]] = {"cirq": None, "python": None}
    pattern = re.compile(r"```([a-zA-Z0-9_]+)\s*\n(.*?)\n?```", re.DOTALL)
    for lang, code in pattern.findall(s):
        code = code.strip()
        first_line = code.splitlines()[0] if code else ""

        if lang == "python" and first_line.startswith("def algorithm("):
            cirq_part, py_part = split_mixed_cirq_python(code)
            if cirq_part:
                result["cirq"] = (cirq_part if result["cirq"] is None
                                  else result["cirq"] + "\n\n" + cirq_part)
            if py_part:
                result["python"] = (py_part if result["python"] is None
                                    else result["python"] + "\n\n" + py_part)
            continue
        elif lang == "cirq" and first_line.startswith("from "):
            lang = "python"
        key = "cirq" if lang == "cirq" else ("python" if lang == "python" else None)
        if key:
            result[key] = (code if result[key] is None else result[key] + "\n\n" + code)

    return result


def preprocess_answer(model_output):
    blocks = extract_cirq_python(model_output)
    cirq_code = blocks["cirq"]
    python_code = blocks["python"]

    if cirq_code:
        s_cirq = f"```cirq\n{cirq_code}\n```"
    else:
        s_cirq = ""

    if python_code:
        s_python = f"```python\n{python_code}\n```"
    else:
        s_python = ""

    cleaned_output = s_cirq + "\n" + s_python
    return cleaned_output


def check(references, predictions, prompt):
    cleaned_output = preprocess_answer(predictions[0])
    for i in range(len(ls_of_check)):
        is_here, params = ls_of_des[i](prompt[0])
        if is_here:
            here_check = ls_of_check[i]
            break

    cirq_string = cleaned_output.split("```cirq\n")[-1].split("```")[0]
    ref_cirq_string = references[0].split("```cirq\n")[-1].split("```")[0]
    code_string = cleaned_output.split("```python\n")[-1].split("```")[0]
    cleaned_code_string = trim_execution_block(code_string)

    cirq_syntax, code_syntax, score, gate_count_ratio, shot_ratio, time_ratio = here_check(ref_cirq_string, cirq_string,
                                                                                           cleaned_code_string,
                                                                                           **params)
    return {
        "semantic_score": score,
        "cirq_syntax_pass": float(cirq_syntax),
        "code_syntax_pass": float(code_syntax),
        "gate_count_ratio": float(gate_count_ratio),
        "shot_ratio": float(shot_ratio),
        "time_ratio": float(time_ratio)
    }


def check_and_split(doc, results):
    pred = results[0]
    ref = doc["completion"]
    prompt = [doc["prompt"]]

    check_result = check([ref], [pred], prompt)

    try:
        {
            "semantic_score": check_result["semantic_score"],
            "cirq_syntax_pass": check_result["cirq_syntax_pass"],
            "code_syntax_pass": check_result["code_syntax_pass"],
            "gate_count_ratio": check_result["gate_count_ratio"],
            "shot_ratio": check_result["shot_ratio"],
            "time_ratio": check_result["time_ratio"],
            "exact_match": exact_match.compute(references=[ref], predictions=[pred])["exact_match"],
        }
    except Exception as e:
        import pdb
        pdb.set_trace()

    return {
        "semantic_score": check_result["semantic_score"],
        "cirq_syntax_pass": check_result["cirq_syntax_pass"],
        "code_syntax_pass": check_result["code_syntax_pass"],
        "gate_count_ratio": check_result["gate_count_ratio"],
        "shot_ratio": check_result["shot_ratio"],
        "time_ratio": check_result["time_ratio"],
        "exact_match": exact_match.compute(references=[ref], predictions=[pred])["exact_match"],
    }
