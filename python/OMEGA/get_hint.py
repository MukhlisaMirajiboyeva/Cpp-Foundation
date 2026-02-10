# get_hint.py
import system_core

print("--- OMEGA HELP TERMINAL ---")
print("1. Подсказка для Уровня 1 (Цена: 10 очков)")
print("2. Подсказка для Уровня 2 (Цена: 15 очков)")
print("3. Подсказка для Уровня 3 (Цена: 20 очков)")

choice = input("Выберите уровень (1-3): ")

costs = {"1": 10, "2": 15, "3": 20}

if choice in costs:
    confirm = input(f"Это будет стоить {costs[choice]} очков. Подтвердить? (y/n): ")
    if confirm.lower() == 'y':
        system_core.deduct_points(costs[choice])
        try:
            with open(f"Hints/hint_{choice}.txt", "r", encoding='utf-8') as f:
                print("\n" + "="*30)
                print(f.read())
                print("="*30 + "\n")
        except FileNotFoundError:
            print("[ERROR] Файл подсказки не найден.")
else:
    print("[ERROR] Неверный ввод.")