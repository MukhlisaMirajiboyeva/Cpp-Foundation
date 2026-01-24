'''
Задача 2. «Калькулятор скидки» (Return + Default)
Задание: Напишите функцию calculate_price, которая принимает:
- price (цена товара).
- discount (скидка в процентах). По умолчанию скидка должна быть 0. 
Функция должна возвращать итоговую цену.
'''




























def calculate_price(price, discount=0):
    final_price = price - (price * discount / 100)
    return final_price

# Тесты
print(calculate_price(1000, 20)) # Должно быть 800.0
print(calculate_price(500))      # Должно быть 500 (скидка 0)