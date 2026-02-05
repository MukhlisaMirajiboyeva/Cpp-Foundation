'''
Задача 4. «Свой калькулятор» (Создание модуля)

Задание: Создайте файл formulas.py.
Внутри напишите две функции:
- kg_to_lb(kg): переводит килограммы в фунты (1 кг = 2.204 фунта).
- c_to_f(celsius): переводит градусы Цельсия в Фаренгейты ($C \times 1.8 + 32$).

Создайте файл main.py.
- Импортируйте formulas и переведите 10 кг в фунты и 25 градусов в Фаренгейты.
'''

# Импортируем наш файл formulas (без .py)
import formulas

# --- Тестируем ---

# 1. Переводим 10 кг
weight_kg = 10
weight_lb = formulas.kg_to_lb(weight_kg)
print(f"{weight_kg} кг = {weight_lb} фунтов")

# 2. Переводим 25 градусов
temp_c = 25
temp_f = formulas.c_to_f(temp_c)
print(f"{temp_c}°C = {temp_f}°F")