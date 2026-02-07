name = input("Введите имя: ")
review = input("Ваш отзыв: ")

with open("reviews.txt", "a", encoding="utf-8") as file:
    file.write(f"{name}: {review}\n")
