total_profit = 0
for i in range(1,6):
    money = float(input(f" введите прибыль за месяц {i}: "))
    
    if money < 0:
        print(" этот убыток пропускаем")
        continue
    total_profit += money
print (f" итоговая чистая прибыль: {total_profit}")