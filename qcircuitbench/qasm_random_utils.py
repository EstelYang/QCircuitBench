from lm_eval.tasks.qcircuitbench.qasm_random.ocli_util import check_model as cl_check, check_description as cl_des
from lm_eval.tasks.qcircuitbench.qasm_random.ouni_util import check_model as un_check, check_description as un_des
from lm_eval.api.metrics import exact_match

ls_of_check = [cl_check, un_check]
ls_of_des = [cl_des, un_des]


def extract_qasm(s: str) -> str | None:
    for tag in ["qasm", "python"]:
        start_token = f"```{tag}"
        end_token = "```"
        start_idx = s.find(start_token)
        if start_idx != -1:
            start_idx += len(start_token)
            end_idx = s.find(end_token, start_idx)
            if end_idx == -1:
                end_idx = len(s)
            return s[start_idx:end_idx].strip()
    return None


def preprocess_answer(model_output):
    blocks = extract_qasm(model_output)
    qasm_code = blocks["qasm"]

    if qasm_code:
        s_qasm = f"```qasm\n{qasm_code}\n```"
    else:
        s_qasm = ""

    cleaned_output = s_qasm + "\n"
    return cleaned_output


def check(references, predictions, prompt):
    cleaned_output = preprocess_answer(predictions[0])
    for i in range(len(ls_of_check)):
        is_here, params = ls_of_des[i](prompt[0])
        if is_here:
            params['ground_truth_string'] = references[0]
            here_check = ls_of_check[i]
            break

    qasm_string = cleaned_output.split("```qasm")[-1].split("```")[0]

    try:
        qasm_syntax, code_syntax, score, gate_count_ratio, shot_ratio, time_ratio = here_check(qasm_string, **params)
        return {
            "semantic_score": score,
            "qasm_syntax_pass": float(qasm_syntax),
            "code_syntax_pass": float(code_syntax),
            "gate_count_ratio": float(gate_count_ratio),
            "shot_ratio": float(shot_ratio),
            "time_ratio": float(time_ratio)
        }
    except Exception as e:
        import pdb
        pdb.set_trace()


def check_and_split(doc, results):
    pred = results[0]
    ref = doc["completion"]
    prompt = [doc["prompt"]]

    check_result = check([ref], [pred], prompt)

    try:
        {
            "semantic_score": check_result["semantic_score"],
            "qasm_syntax_pass": check_result["qasm_syntax_pass"],
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
        "qasm_syntax_pass": check_result["qasm_syntax_pass"],
        "code_syntax_pass": check_result["code_syntax_pass"],
        "gate_count_ratio": check_result["gate_count_ratio"],
        "shot_ratio": check_result["shot_ratio"],
        "time_ratio": check_result["time_ratio"],
        "exact_match": exact_match.compute(references=[ref], predictions=[pred])["exact_match"],
    }
