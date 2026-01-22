balance = 50000000
while True:
    num = int(input(f"Ваш баланс: {balance} \nСколько хотите снять денег? (Для отмены или выхода нажмите цифру 0): "))
    if num == 0:
        break
    if num > balance:
        print("Ошибка введения суммы")
    elif num < 0:
        print("Ошибка введения суммы")
    else :
        print(f"Вы снимаете сумму: {num}, подтверждаете? \n ")
        enter = input("Да=1; Нет=2: ")
        if enter == "1":
            print(f"Вы сняли сумму: {num}")
            balance -= num
        else:
            print("Вы отменили нынешную операцию")
    