balance = 50000000
while True:
    num = int(input("Какую сумму хотите снять?"))
    if num == 0:
        break
    if num > balance:
        print("Ошибка")
    elif num < 0:
        print("Ошибка")
    else:
        balance -= num
        print(f"Вы сняли {num} сум")
        print(f"Ваш баланс после снятия - {balance}")
print(f"Ваш баланс после снятия - {balance}")