import math

a = float(input("Высота стены: "))
b = float(input("Расстояние от стены: "))

c = math.sqrt(math.pow(a, 2) + math.pow(b, 2))
ladder = math.ceil(c)

print("Длина лестницы:", c)
print("Покупаем", ladder, "м")
