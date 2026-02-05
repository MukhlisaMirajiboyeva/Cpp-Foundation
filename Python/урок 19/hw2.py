import math

a = float(input("Высота стены: "))
b = float(input("Расстояние от стены: "))

length = math.sqrt(math.pow(a, 2) + math.pow(b, 2))

final_length = math.ceil(length)

print(f"Длина лестницы: {length}")
print(f"Покупаем: {final_length} м")