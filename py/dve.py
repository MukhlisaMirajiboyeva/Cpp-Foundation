count = 0
while True:
    word = input("Напишите слово: ").lower().strip()
        
    if word == "хватит":
        break
    count += 1
    print(f"Вы ввели слово: {word}")
print(f"Вы ввели {count} слов")