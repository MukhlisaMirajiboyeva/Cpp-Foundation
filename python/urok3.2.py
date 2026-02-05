count = 0

while True:
    word = input ('Введите слово ').lower().strip()
    if word == 'хватит':
        break 
    count+=1
    print(f"Вы ввели {word}")
print(f"Кол-во слов {count}")