#задача 1

movies = []
for i in range(3):
    movie = input(f"введите любимый фильм {i + 1} :")
    movies.append(movie)
with open("movie.txt", "w", encording="utf-8") as f:
    for m in movies:
        f.write(m+ "\n")

#задача 2

with open("movies.txt", "r", encoding="utf-8") as f:
    lines = f.readlines()
for i, line in enumerate(lines, 1):
    print(f"{i}. {line.strip()}")


'''
№1

весь текст в файле удалится и начнет с чистого листа

№2

чтобы вернуть курсор в начало файла и читать или писать с начала

№3

файл сам закроется после работы, не надо писать f.close()
'''