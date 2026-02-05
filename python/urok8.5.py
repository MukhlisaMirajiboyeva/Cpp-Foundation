grades = {
    "Али": 5,
    "Зара": 4,
    "Тимур": 3
}
with open("journal.txt," "w", encoding="utf-8") as file:
    for name, score in grades.items():
        line = f"{name}:{score}\n"
        file.write(line)
print("Данные сохранены!")
loaded_grades = {}
with open("journail.txt", "r", encoding="utf-8") as file:
    for line in file:
        clean_line = line.strip()
        parts = clean_line.split(":")
        name = parts[0]
        score = int(parts[1])
        loaded_grades[name] = score
print("Данные загружены:", loaded_grades)
        