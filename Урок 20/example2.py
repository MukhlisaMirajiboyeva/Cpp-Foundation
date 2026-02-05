# Создаем файл shopping.txt и пишем в него
products = ["Хлеб", "Молоко", "Яблоки"]

with open("shopping.txt", "w", encoding="utf-8") as f:
    for item in products:
        f.write(item + "\n")  # Добавляем \n, чтобы каждое слово было с новой строки

print("Файл записан!")