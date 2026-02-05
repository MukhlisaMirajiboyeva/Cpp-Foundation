import random

print(random.randint(1, 10))

fruits = ["яблоко", "банан", "груша"]
winner = random.choice(fruits)
print(f"победитель: {winner}!")
cards = [10, "J", "Q", "K", "A"]
random.shuffle(cards)
print(cards)