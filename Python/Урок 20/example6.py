# Данные в памяти (Словарь)
grades = {
    "Али": 5,
    "Зара": 4,
    "Тимур": 3
}

# Сохраняем в файл "journal.txt" в формате "Имя:Оценка"
with open("journal.txt", "w", encoding="utf-8") as file:
    for name, score in grades.items():
        # Формируем строку: "Али:5\n"
        line = f"{name}:{score}\n"
        file.write(line)

print("Данные сохранены!")

