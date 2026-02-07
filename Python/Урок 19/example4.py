import random

# 1. Случайное целое число от 1 до 10
print(random.randint(1, 10)) 

# 2. Случайный выбор из списка
fruits = ["Яблоко", "Банан", "Груша"]
winner = random.choice(fruits) 
print(f"Победитель: {winner}")

# 3. Перемешать список (как карты)
cards = [10, "J", "Q", "K", "A"]
random.shuffle(cards) 
print(cards)