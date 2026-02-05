total_profit = 0

for i in range(1, 6):
    money = float(input(f"Введите прибыль за месяц {i}: "))
    
    if money < 0:
        print("Это убыток, пропускаем...")
        continue
    total_profit +=money
print(f"Итоговая прибыль: {total_profit}")    