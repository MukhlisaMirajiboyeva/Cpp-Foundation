import random
import sys
sys.path.append('..') 
from hero_stats import Hero

def battle():
    goblin_hp = 60
    print("👺 Гоблин преграждает путь! У него 60 HP.")

    while goblin_hp > 0 and Hero.hp > 0:
        print(f"\nВаше HP: {Hero.hp} | HP Гоблина: {goblin_hp}")
        input("Нажмите Enter, чтобы ударить...")
        
        # --- ЗАДАНИЕ №1 ---
        # Сгенерируй случайный урон от 1 до 20, используя random.randint
        damage = 0 # ИСПРАВЬ ЭТО
        
        # --- ЗАДАНИЕ №2 ---
        # Если выпало 20, выведи "КРИТИЧЕСКИЙ УДАР!" и удвой damage.
        # (Твой код здесь)
        
        if damage < 7:
            print(f"🛡 Гоблин уклонился! Вы получили 15 урона.")
            Hero.hp -= 15
        else:
            goblin_hp -= damage
            print(f"⚔️ Удар на {damage}!")

    # Проверка победы
    if Hero.hp > 0:
        print("🏆 Гоблин повержен! Вы нашли 'Медный Ключ'.")
        # --- ЗАДАНИЕ №3 ---
        # Добавь 'Медный Ключ' в инвентарь Hero.inventory
        # Переведи героя на current_level = 2 и сохрани (Hero.save())