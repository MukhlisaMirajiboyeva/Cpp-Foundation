phone_price = int(input("Цена телефона: "))
total_saved = 0
while total_saved < phone_price:
    daily_amount = int(input("Сколько откладываем? "))
    total_saved += daily_amount
    print(f"Сейчас в копилке: {total_saved}")
print(f"Ура! Накопили {total_saved} сум.")