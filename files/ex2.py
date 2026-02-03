products = ["хлеб", "молоко", "яблоки"]

with open("shopping.txt", "w", encoding="utf-8") as f:
    for item in products:
        f.write(item + "\n")
print("файл записан!")