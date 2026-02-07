# Без map (через цикл for):
dollars = [10, 20, 50]
sums = []
for d in dollars:
    sums.append(d * 12500)
print(sums)

# С map и lambda (Профессионально):
dollars = [10, 20, 50]

# Читаем как: Для каждого числа x в списке dollars, умножь x на 12800
sums = list(map(lambda x: x * 12500, dollars))

print(sums) # [128000, 256000, 640000]