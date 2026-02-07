import sys
sys.path.append('..')
from hero_stats import Hero

def final_battle():
    print("🧙‍♂️ Темный Маг швыряет в вас сгустки тьмы!")
    dark_energy = [5, 12, 3, 18, 25, 1, 9, 14] # Сила атак
    
    print(f"Атака мага: {dark_energy}")

    # --- ЗАДАНИЕ ---
    # Отрази атаку! Используй filter, map и lambda в ОДНОЙ строке.
    # 1. Оставь только те атаки, сила которых > 10 (filter).
    # 2. Каждую оставшуюся атаку преврати в текст: "Отражено {сила} урона" (map).
    # 3. Результат сохрани в список results.
    
    results = [] # ТВОЙ ГЕНИАЛЬНЫЙ КОД ЗДЕСЬ

    for res in results:
        print(f"✨ {res}")

    if len(results) >= 4:
        print("\n👑 ПОБЕДА! Лабиринт пройден!")
    else:
        print("\n💀 Твоя магия оказалась слишком слабой...")

if __name__ == "__main__":
    final_battle()