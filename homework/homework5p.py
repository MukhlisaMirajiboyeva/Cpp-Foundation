# 1. задача
name = input("введите имя: ")
review = input("ваш отзыв: ")

with open("reviews.txt", "a", encoding="utf-8") as file:
    file.write(f"{name}: {review}\n")
    
# 2. задача
total_sum = 0

with open("prices.txt", "r", encoding="utf-8") as file:
    for line in file:
        total_sum += int(line.strip())

print(f"общая стоимость товаров: {total_sum}")

# 3. задача
with open("draft.txt", "r", encoding="utf-8") as draft, \
     open("clean_copy.txt", "w", encoding="utf-8") as clean:

    for line in draft:
        if not line.startswith("удалить"):
            clean.write(line)

print("чистовик готов!")