total = 0
count = 0

with open("grades.txt", "r") as file:
    for line in file:
        score = int(line.strip())
        total += score
        count += 1
if count > 0:
    print(f"Средний балл: {total / count}")
else:
    print("Файл пуст")      