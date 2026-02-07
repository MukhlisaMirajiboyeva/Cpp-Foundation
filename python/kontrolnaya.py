# блок 1
'''
1. print() - для показа
return - для работы с результатом
2. это функция, у которой уже есть значение, если не задать свое значение, то используется это значение''' 
def func(a, b=10):
    ...
# задача 1
def is_even(number):
    return number % 2 == 0
# задача 2
def describe_person(name, age=18):
    print(f"Имя: {name}, Возраст: {age}")
# блок 2 
'''
1. подключает весь модуль
2. импортирует указанную функцию'''
# задача 1 
import random

numbers = [10, 20, 30, 40, 50]
result = random.sample(numbers, 3)

print("Выпавшие числа:", result)
# задача 2 
import math

radius = float(input("Введите радиус круга: "))
area = math.pi * radius ** 2

print("Площадь круга:", math.floor(area))
# блок 3
'''
1. он полностью очистит лист, и начнет текст
2. возвращает курсор в начало строки
3. код закроется, даже если он будет неправильный
'''
# задача 1 
with open("movies.txt", "w", encoding="utf-8") as f:
    for _ in range(3):
        movie = input("Введите название фильма: ")
        f.write(movie + "\n")
# задача 2
with open("movies.txt", "r", encoding="utf-8") as f:
    movies = f.readlines()         

for i, movie in enumerate(movies, start=1):
    print(f"{i}. {movie.strip()}")
# блок 4
'''
1. потому что возвращают не список, а итератор
2. если функция используется в нескольких местах
'''
# задача 1
numbers = [1, 5, 8, 10, 13, 20]

result = list(filter(lambda x: x % 5 == 0, numbers))
print(result)

# задача 2
prices = ["100$", "200$", "500$"]

result = list(map(lambda x: int(x.replace("$", "")), prices))
print(result)

# задача 3
numbers = [-3, -1, 0, 2, 4, 5]

result = list(map(lambda x: x ** 2, filter(lambda x: x > 0, numbers)))
print(result)