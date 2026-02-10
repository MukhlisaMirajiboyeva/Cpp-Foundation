# core_logic.py
import os

def update_mana(points):
    # Вместо SCORE будем использовать MANA (Мана)
    mana_file = "mana_level.txt"
    current_mana = 0
    if os.path.exists(mana_file):
        with open(mana_file, "r") as f:
            current_mana = int(f.read())
    
    new_mana = current_mana + points
    with open(mana_file, "w") as f:
        f.write(str(new_mana))
    print(f"✨ Твоя магическая энергия (Мана): {new_mana}")