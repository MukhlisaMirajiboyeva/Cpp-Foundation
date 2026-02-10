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
        damage = random.randint(1, 20) # ИСПРАВЬ ЭТО
        
        # --- ЗАДАНИЕ №2 ---
        # Если выпало 20, выведи "КРИТИЧЕСКИЙ УДАР!" и удвой damage.
        # (Твой код здесь)
        
        if damage < 7:
            print(f"🛡 Гоблин уклонился! Вы получили 15 урона.")
            Hero.hp -= 15
        elif damage == 20:
            print(f"Вы нанесли критический урон!")
            goblin_hp -= 40
        else:
            goblin_hp -= damage
            print(f"⚔️ Удар на {damage}!")

        if Hero.hp > 0:
            print("🏆 Гоблин повержен! Вы нашли 'Медный Ключ'.")
            Hero.inventory.append("Медный Ключ")
            Hero.current_level = 2
            Hero.save()