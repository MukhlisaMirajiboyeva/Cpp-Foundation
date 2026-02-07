#задача 1

import random
numbers = [10, 20, 30, 40, 50]
lottery = random.sample(numbers, 3)
print("выбраны числа:", lottery)

#задача 2

import math
r = float(input("введите радиус круга: "))
S = math.pi * r **2
print("Площадь круга: ", math.floor(S))


'''
#1
import math подключает весь модуль, а from math import sqrt только нужную йункцию, чтобы писать ее без math

#2
создаешь файл с функциямиб например mymodule.py, а в основном файле пишешь import mymodule и вызываешь функцию через mymodule.функция()
'''
