'''
Задача 3. «Четное или нет?» (Логика + Return)
Задание: Напишите функцию is_even(number), которая принимает число 
и возвращает True, если оно четное, и False, если нечетное. 
Используйте эту функцию в цикле, чтобы проверить числа от 1 до 5.
'''
def is_even(number):
    if number % 2 == 0:
        return True
    else:
        return False
    # Продвинутый вариант одной строкой: return number % 2 == 0

for i in range(1, 6):
    if is_even(i):
        print(f"{i} — четное")
    else:
        print(f"{i} — нечетное")