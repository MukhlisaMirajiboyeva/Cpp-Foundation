total_sum = 0

with open("prices.txt", "r", encoding="utf-8") as file:
    for line in file:
        total_sum += int(line)

print("Общая стоимость товаров:", total_sum)
