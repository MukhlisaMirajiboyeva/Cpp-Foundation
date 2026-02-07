'''
1. import math может импортировать только основной модуль который мы записали, а from math import sqrt импортирует только определенную
заданную функцию
2. нужно создать нужную папку и туда вложить два файла: в одном будет специальная функция (main), а в другой уже импорт модуля 
'''
# 1. задача
import random
numbers = [10, 20, 30, 40, 50]
result = random.sample(numbers, 3)
print(result)

# 2. задача
import math
r = float(input("ввести радиус:"))
s = math.pi * r^2
print(math.floor(s))