import sys
sys.path.append('..')
from hero_stats import Hero

def sphinx_gate():
    print("🦁 Сфинкс: 'Прочти загадку на этом свитке...'")
    
    # --- ЗАДАНИЕ №1 ---
    # Открой файл '../assets/riddle.txt' (находится в папке assets).
    # Прочитай его содержимое в переменную riddle_text и выведи на экран.
    
    try:
        with open('../assets/riddle.txt', 'r', encoding='utf-8') as f:
            riddle_text = f.read().strip()
    except FileNotFoundError:
        riddle_text = "[ОШИБКА: Свиток с загадкой потерян! Проверь файл assets/riddle.txt]"

    print(f"\n📜 Текст свитка: {riddle_text}")
    
    answer = input("\nТвой ответ: ").strip().lower()

    # --- ЗАДАНИЕ №2 ---
    # Сфинкс пропустит тебя, если ответ "время". 
    # Если ответ верный: повысь уровень героя до 3 и сохрани игру.
    # Если нет: отними 30 HP и выведи предупреждение.
    
    # (Твой код здесь)
    if answer == "время":
        print("✅ Верно! Сфинкс пропускает тебя.")
        Hero.current_level = 3
        Hero.save()
    else:
        print("❌ Неверно! Сфинкс атакует тебя! -30 HP")
        Hero.hp -= 30
        Hero.save()
        
        if Hero.hp < 0:
            Hero.hp = 0
