import sys
import os

# 1. Получаем точный адрес текущей папки
current_dir = os.path.dirname(os.path.abspath(__file__))
# 2. Получаем адрес папки проекта (родительская)
parent_dir = os.path.dirname(current_dir)
# 3. Добавляем папку проекта в поиск модулей
sys.path.append(parent_dir)

from hero_stats import Hero

def sphinx_gate():
    print("🦁 Сфинкс: 'Прочти загадку на этом свитке...'")
    
    riddle_path = os.path.join(parent_dir, 'assets', 'riddle.txt')

    try:
        with open(riddle_path, 'r', encoding='utf-8') as f:
            riddle_text = f.read().strip()
    except FileNotFoundError:
        riddle_text = "Что утром ходит на 4 ногах, днем на 2, а вечером на 3?"

    print(f"\n📜 Текст свитка: {riddle_text}")
    
    answer = input("\nТвой ответ: ").strip().lower()

    # --- ЛОГИКА ОТВЕТА  ---
    if answer == "время" or answer == "человек":
        print("✅ Верно! Сфинкс пропускает тебя.")
        Hero.current_level = 3
        Hero.save()
    else:
        print("❌ Неверно! Сфинкс атакует тебя! -30 HP")
        Hero.hp -= 30
        Hero.save()
        
        if Hero.hp <= 0:
            Hero.hp = 0
            print("💀 Ты погиб у ворот...")

if __name__ == "__main__":
    sphinx_gate()
