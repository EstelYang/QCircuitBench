import os
import json


def generate_dataset_json(output_path):
    directory = "./"
    with open(f"{directory}/shor_description.txt", "r") as f:
        template = f.read()
    with open(f"{directory}/shor_post_processing.py", "r") as f:
        post = f.read()
    data = []
    for filename in os.listdir(directory):
        if filename[-5:] != ".qasm":
            continue
        with open(os.path.join(directory, filename), "r") as f:
            completion = f.read()
        qubit_number = filename.split("_")[2].split(".")[0][1:]
        prompt = template.replace("$\{The number needed to factor\}", f"21$").replace("$\{coprime base\}", "8$")
        prompt = prompt.replace("$\{qubit number\}", f"22$").replace("\{QASM / Qiskit\}", "OpenQASM 3.0")
        dic = {"prompt": prompt, "completion": f"```qasm\n{completion}```\n```python\n{post}```"}
        data.append(dic)
    os.makedirs(os.path.dirname(output_path) or ".", exist_ok=True)
    with open(output_path, "w", encoding="utf-8") as fout:
        for item in data:
            fout.write(json.dumps(item, ensure_ascii=False) + "\n")
    print(f"ok")
    return data
