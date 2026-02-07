# Вопрос №1
'''
'w' = 'эго функция удолять что было, и писать заново.
Так что просто что там было удалиться 

#Вопрос №2
f.seek(0)- Он возвращает курсор в начало файла.

#Вопрос №3
with open() - файл закрывается автоматически
а в обычном open() нет.
'''

#Задача №1
with open("movies.txt", "w", encoding="utf-8") as file:
    for i in range(3):
        movie = input("Введите любимый фильм: ")
        file.write(movie + "\n")

# Задача №2
with open("movies.txt", "r", encoding="utf-8") as file:
    number = 1
    for line in file:
        print(f"{number}. {line.strip()}")
        number += 1
