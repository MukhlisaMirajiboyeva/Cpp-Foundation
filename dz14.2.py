price = int(input())
total = 0
while total < price:
    save = int(input())
    total += save
    print(f"Сейчас в копилке: {total}")
print(f"Ура! Накопили {total} сум.")