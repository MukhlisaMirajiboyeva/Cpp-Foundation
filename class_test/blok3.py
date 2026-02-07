'''
1. файл  с "w" будет очищен
2. f.seek(0) перемещает курсор в начало файла
3. with open предотврощает утечку данных и надежно их сохраняет
'''
# 1. задача
with open("movies.txt", "w", encoding="utf-8") as f:
    for _ in range(3):
        movie=input("введите фильм:")
        f.write(movie)

# 2. задача
with open("movies.txt", "r", encoding="utf-8") as f:
    movies = f.readlines()
for i, movie in enumerate(movies, start=1):
    print(f"{i}.{movie.strip()}")