import os
import json

ROOT = "."
TOPICS = ["Array", "DynamicProgramming", "Graph", "Recursion", "BitManipulation", "Trees"]
output = []

for topic in TOPICS:
    path = os.path.join(ROOT, topic)
    if not os.path.exists(path):
        continue

    for file in os.listdir(path):
        if file.endswith(".cpp"):
            title = file.replace(".cpp", "").replace("_", " ")
            output.append({
                "title": title,
                "topic": topic,
                "filename": f"{topic}/{file}",
                "status": "Solved"
            })

with open("problems.json", "w") as f:
    json.dump(output, f, indent=2)

print("✅ problems.json updated!")

