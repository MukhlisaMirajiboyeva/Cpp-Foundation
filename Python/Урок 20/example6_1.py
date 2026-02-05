loaded_grades = {} # Сюда загрузим данные

with open("journal.txt", "r", encoding="utf-8") as file:
    for line in file:
        # Строка выглядит так: "Али:5\n"
        clean_line = line.strip()       # Убираем \n -> "Али:5"
        parts = clean_line.split(":")   # Режем по двоеточию -> ["Али", "5"]
        
        name = parts[0]
        score = int(parts[1])           # Превращаем "5" обратно в число
        
        loaded_grades[name] = score     # Кладем в словарь

print("Данные загружены:", loaded_grades)
# Результат: {'Али': 5, 'Зара': 4, 'Тимур': 3}