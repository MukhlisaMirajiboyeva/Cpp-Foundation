# 1. задача

name = input("введите имя: ").strip().title()
city = input("любимый город: ").strip().title()

print(f"привет, {name} я тоже хочу побывать в городе {city}")
a = int(input(" число 1: "))
b = int(input(" число 2: "))
op = input(" знак операции (+, -, *, /): ")

# 2. задача

if op == "+":
    print(a + b)
elif op == "-":
    print(a - b)
elif op == "*":
    print(a * b)
elif op == "/":
    if b == 0:
        print(" ошибка: на ноль делить нельзя ")
    else:
        print(a / b)
else:
    print(" неверная операция")