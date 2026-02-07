total_profit = 0
for i in range(1, 6):
    money = float(input(f"Введите прибыль за месяй {i}: "))
    if money < 0:
        print("это убыток, пропускаем... ")
        continue
    total_profit += money
print(f"итоговая читая прибыль: {total_profit}")