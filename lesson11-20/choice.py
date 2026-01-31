import random

coins = ["орел", "решка"]

computer = random.choice(coins)
user = input("орел или решка?")
print(f"выпало: {computer}")

if user == computer:
    print("вы победили")
else:
    print("не угадали, попробуйте снова")