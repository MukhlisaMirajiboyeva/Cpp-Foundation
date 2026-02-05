import math
r = float(input("Введите радиус комнаты (в метрах): "))
area = math.pi * ( r ** 2)
print(f"Площадь комнаты :{round(area, 2)} кв.м")
cans_needed = area / 5
total_cans = math.ceil(cans_needed)
print(f"Вам нужно купить банок краски: {total_cans}")