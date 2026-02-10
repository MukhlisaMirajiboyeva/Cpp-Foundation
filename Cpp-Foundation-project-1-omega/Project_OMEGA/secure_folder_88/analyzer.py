import os

print("--- АНАЛИЗАТОР ЛОГОВ ---")

base_dir = os.path.dirname(__file__)
log_path = os.path.join(base_dir, "logs.txt")
result_path = os.path.join(base_dir, "result.txt")

with open(log_path, "r", encoding="utf-8") as logs_file:
    for line in logs_file:
        if line.startswith("CRITICAL"):
            with open(result_path, "w", encoding="utf-8") as result_file:
                result_file.write(line)
            print("CRITICAL найден и записан.")
            break
