num = int(input("Введите число для таблицы умножения: "))

for i in range(1,11):
    if i == 5:
        continue
    result = num * i
    print(f"{num} x {i} = {result}")