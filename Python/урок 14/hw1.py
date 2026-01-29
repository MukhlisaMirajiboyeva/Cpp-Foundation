N = int(input("Введите число: "))
for x in range(1, N + 1):
    if x == 13:
        print("Пропускаем...")
    elif x % 3 == 0:
        print(f"Число {x} — делится на 3")
    else:
        print(f"Число {x} — обычное")