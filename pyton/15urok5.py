import random

secret = random.randint(1, 20)

while True:
    guess = int(input("Введите число: "))

    if guess < secret:
        print("Больше")
    elif guess > secret:
        print("Меньше")
    else:
        print("Угадал!")
        break
