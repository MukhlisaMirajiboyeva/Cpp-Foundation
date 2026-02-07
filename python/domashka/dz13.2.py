num1 = int(input("Число 1: "))
num2 = int(input("Число 2: "))
operation = input("Знак (+, -, , /): ")

if operation == '+':
    print(num1 + num2)
elif operation == '-':
    print(num1 - num2)
elif operation == '':
    print(num1 * num2)
elif operation == '/':
    if num2 == 0:
        print("Ошибка: на ноль делить нельзя!")
    else:
        print(num1 / num2)
else:
    print("Неверная операция")