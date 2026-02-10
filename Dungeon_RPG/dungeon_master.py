from hero_stats import Hero
import os


def main():
    Hero.load()
    print("🔮 Магический Кристалл активирован...")
    print(f"--- ГЕРОЙ: HP {Hero.hp}, Уровень {Hero.current_level} ---")

    if Hero.current_level == 1:
        print("\nВход в Пещеру Гоблина...")
        # exec(open("levels/cave.py").read()) 
        print("[СИСТЕМА]: Запустите levels/cave.py, чтобы начать бой!")
    
    elif Hero.current_level == 2:
        print("\nВы у Врат Сфинкса...")
        print("[СИСТЕМА]: Запустите levels/gate.py!")

    elif Hero.current_level == 3:
        print("\nВход в Тронный Зал...")
        print("[СИСТЕМА]: Запустите levels/throne_room.py!")

if __name__ == "__main__":
    main()