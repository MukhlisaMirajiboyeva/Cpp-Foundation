#вопрос №1
'''
import math — подключает все модули 
from math import sqrt — подключает только одну функцию
или можно писать просто - sqrt()


#вопрос №2
Сперва создать файл например temurchik.py
Пишешь в нём функции
Потом в другом файле подключаешь его через import_temurchik

'''
#задача №1 
import random

numbers = [10, 20, 30, 40, 50]

result = random.sample(numbers, 3)

print("Выпали числа:", result)


#Задача №2
import math

radius = float(input("Введите радиус круга: "))

area = math.pi * math.pow(radius, 2)
area = math.floor(area)

print("Площадь круга:", area)
