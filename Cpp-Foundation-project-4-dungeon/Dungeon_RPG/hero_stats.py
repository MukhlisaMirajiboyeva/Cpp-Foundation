import os

# Находим путь к папке, где лежит этот файл (hero_stats.py)
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
SAVE_PATH = os.path.join(BASE_DIR, "save_game.dat")

class Hero:
    hp = 100
    inventory = []
    current_level = 1

    @classmethod
    def save(cls):
        # Используем SAVE_PATH вместо просто имени файла
        with open(SAVE_PATH, "w", encoding="utf-8") as f:
            f.write(f"{cls.hp}\n{cls.current_level}\n{','.join(cls.inventory)}")inventory)}")

    @classmethod
    def load(cls):
        if os.path.exists("save_game.dat"):
            with open("save_game.dat", "r", encoding="utf-8") as f:
                lines = f.readlines()
                cls.hp = int(lines[0].strip())
                cls.current_level = int(lines[1].strip())
                if len(lines) > 2:
                    cls.inventory = lines[2].strip().split(",")
