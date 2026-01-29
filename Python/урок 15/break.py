count = 0 
while True:
    word = input("Введите слово либо 'хватит' для остановки: ").lower().strip()
    if word == "хватит" :
        break
    count += 1
    print (f"Вы ввели: {word}")
print (f"Вы ввели слов {count}: ")