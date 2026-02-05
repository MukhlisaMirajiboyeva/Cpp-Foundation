import random

coins = ["Орёл", "Решка"]

computer_choice = random.choice(coins)

user_choice = input("орёл или Решка? (Введите точно так же): ")
print(f"Выпало: {computer_choice}")

if computer_choice == user_choice:
    print("вы победили")
else:
    print("Не угадали.")