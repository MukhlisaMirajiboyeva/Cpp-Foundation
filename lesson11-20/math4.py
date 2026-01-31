import math

r = float(input("введите радиус коинаты (в метрах): "))

area = math.pi * (r ** 2)
print(f"площадь комнаты: {round(area, 2)} кв.м")
      
cans_needed = area / 5
total_cans = math.ceil(cans_needed)
print(f"вам нужно купить банок краски: {total_cans}")