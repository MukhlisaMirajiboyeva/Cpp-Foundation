# system_core.py
import os

SCORE_FILE = "omega_status.dat"

def load_score():
    if not os.path.exists(SCORE_FILE):
        return 0
    with open(SCORE_FILE, "r") as f:
        return int(f.read().strip())

def save_score(points):
    with open(SCORE_FILE, "w") as f:
        f.write(str(points))

def add_points(amount):
    current = load_score()
    new_score = current + amount
    save_score(new_score)
    print(f"\n[SYSTEM]: Баланс обновлен. Текущий рейтинг: {new_score}")

def deduct_points(amount):
    current = load_score()
    new_score = current - amount
    save_score(new_score)
    print(f"\n[SYSTEM]: ШТРАФ -{amount}. Текущий рейтинг: {new_score}")