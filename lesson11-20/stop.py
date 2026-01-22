count = 0
while True:
    word = input(" введите слово, или 'хватит' для остановки: ").lower().strip()
    if word == "хватит":
        break
    
    count += 1
    print(f"вы ввели - {word}")
    
print(f"вы ввели {count} слов: ")