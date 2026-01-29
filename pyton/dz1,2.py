a = int(input("Число 1: "))
b = int(input("Число 2: "))
op = input("Знак операции (+, -, *, /): ")


if op == "+":
    print(a + b)

elif op == "-":
    print(a - b)

elif op == "*":
    print(a * b)

elif op == "/":
    if b == 0:
        print("Ошибка: на ноль делить нельзя!")
    else:
        print(a / b)

else:
    print("Неверная операция")
