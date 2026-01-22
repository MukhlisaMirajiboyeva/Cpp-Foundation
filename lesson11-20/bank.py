balance = 50000000
while True:
    num = int(input(" какую сумму вы хотите снять? 'программа будет работать до тех пор, пока вы не введете 0 ': "))
    
    if num == 0:
        break
    
    if num > balance:
        print(" ошибка, введенная сумма больше баланса")
    elif num < 0:
        print("ошибка, введенная сумма отрицательная")
    else:
        balance -= num
        print (f"вы сняли {num} сумм")
        print(f"ваш баланс:{balance}")