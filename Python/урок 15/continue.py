total_provit = 0
for i in range (1,6):
    money = float(input(f"Введите прибыль за месяц {i}:"))
    if money < 0:
        print <("Это убыток, пропускаем ...")
    total_profit += money
    print(F"Итоговая чистая прибыль: {total_profit}")