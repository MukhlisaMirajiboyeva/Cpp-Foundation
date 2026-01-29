price = int(input("Цена телефона: "))
total = 0

while total < price:
    add = int(input("Сколько откладываем сегодня? "))
    total += add
    print(f"Сейчас в копилке: {total}")

print(f"Ура! Накопили {total} сум.")
