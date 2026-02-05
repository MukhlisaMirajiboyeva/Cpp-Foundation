N = int(input())
for i in range(1, N + 1):
    if i == 13:
        print("Пропускаем...")
        continue
    if i % 3 == 0:
        print(f"Число {i} — делится на 3")
    else:
        print(f"Число {i} — обычное")
