import math

def main():
    print("🔮 Добро пожаловать в алхимическую лабораторию!")
    print("Ваша цель: приготовить Зелье Истины.\n")

    # --- УРОВЕНЬ 1: СОРТИРОВКА (Filter) ---
    print("--- УРОВЕНЬ 1: Очистка ингредиентов ---")
    items = ["Гнилой корень", "Золотая пыль", "Мертвая муха", "Свежая мята"]
    print(f"На столе лежат: {items}")

 
    clean_items = list(filter(lambda x: "Гнилой" not in x and "Мертвая" not in x, items))
    

    print(f"Вы очистили стол. Осталось: {clean_items}")

    # ТЕСТ: Открытый вопрос
    print("\n[ВОПРОС КРИСТАЛЛА]: Почему здесь лучше использовать filter, а не цикл for?")
    answer = input("Твой ответ: ").lower()
    
    keywords = ["короче", "быстрее", "удобнее", "читаемее", "эффективнее"]
    if any(word in answer for word in keywords):
        print("✅ Кристалл светится зеленым. Верно!")
    else:
        print("❌ Кристалл тускнеет. Ответ недостаточно убедителен, но я пропущу тебя дальше...")

    # --- УРОВЕНЬ 2: НАРЕЗКА (Map) ---
    print("\n--- УРОВЕНЬ 2: Измельчение ---")
    
    ready_items = list(map(lambda x: x.lower() + "_chopped", clean_items))
    print(f"Ингредиенты подготовлены: {ready_items}")

    # --- УРОВЕНЬ 3: ВАРКА (Math) ---
    print("\n--- УРОВЕНЬ 3: Расчет температуры ---")
    
    
    print("Начинаем расчеты...")
    for item in ready_items:
        length = len(item)
        temp = math.sqrt(length) * math.pi
        final_temp = math.ceil(temp)
        print(f"🔥 Ингредиент '{item}' требует температуры {final_temp}°C")

    # --- ФИНАЛ ---
    print("\n" + "="*40)
    print("✨ ВСПЫШКА! Зелье Истины готово! ✨")
    show_dragon()

def show_dragon():
    print("\n[МАГИЧЕСКИЙ ЭФФЕКТ]: Из котла вылетает огненный дух!")
    
    # Пытаемся прочитать дракона из внешнего файла
    try:
        # Указываем путь к файлу. 
        # Если ты запускаешь скрипт из корня Project_Magic, путь будет таким:
        with open("assets/secret_art.txt", "r", encoding="utf-8") as f:
            dragon_art = f.read()
            print(dragon_art)
    except FileNotFoundError:
        # Если файл не найден, выведем простую замену, чтобы программа не вылетала
        print(" (Дракон скрыт в тумане...) ")
        print(" [Ошибка: файл assets/secret_art.txt не найден] ")

    print("\nПОЗДРАВЛЯЕМ! ТЫ СТАЛ МАГИСТРОМ PYTHON-АЛХИМИИ!")

if __name__ == "__main__":
    main()