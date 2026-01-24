# 1. задача

n = int(input(" введите число: "))

for x in range(1, n + 1):
    if x == 13:
        print(" пропускаем... ")
        continue

    if x % 3 == 0:
        print(f" число {x} — делится на 3 ")
    else:
        print(f" число {x} — обычное ")
price = int(input(" цена телефона: "))
total = 0

# 2. задача

while total < price:
    add = int(input(" сколько откладываем сегодня? "))
    total += add
    print(f" сейчас в копилке: {total}")

print(f" накопили {total} сум ")