import random
print(random.randint(1, 10))
fruits = ["apple", "banana", "pear"]
winner = random.choice(fruits)
print(f"winner: {winner}")
cards = [10, "J", "Q", "K", "A"]
random.shuffle(cards)
print(cards)