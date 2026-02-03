grades = {
    "али": 5,
    "зара": 4,
    "тимур" : 3,
}
with open ("journal.txt", "w", encoding="utf-8") as file:
    for name, score in grades.items():
        line = f"{name}:{score}"
        file.write(line)
        
loaded_grades = {}

with open("journal.txt", "r", encoding="utf-8") as file:
    for line in file:
        clean_line = line.strip()
        parts = clean_line.split(":")
        
        name = parts[0]
        score = int(parts[1])
        loaded_grades[name] = score
print("данные загружены:", loaded_grades)