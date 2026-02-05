balance = 50000000
while True:
    num = int(input("Введите сумму которую хотите снять? \n (Чтобы отменить или завершить нажмите на цифру 0): "))
    if num == 0:
        break
    
    if num > balance:
        print ("ошибка")
    elif num < 0:
        print("ошибка")
    else: 
        print(f"вы сняли: {num}")
        print(f"Ваш баланс: {balance - num}")
    
        
    