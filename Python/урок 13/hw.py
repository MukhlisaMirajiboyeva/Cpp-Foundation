num1 = float(input( "первое число"))
num2 = float(input ("второе число"))
operation = (input())
if operation == '+':
    result = num1 + num2
    print(result)
elif operation == '-':
    result = num1 - num2
    print(result)
elif operation == '*':
    result = num1 * num2
    print(result)
elif operation == '/':
    if num2 ==0:
        print("Ошибка: на ноль нельзя делить!")
    else:
        result = num1 / num2
else:
    print("Неверная операция")