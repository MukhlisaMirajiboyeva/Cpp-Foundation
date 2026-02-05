'''
Задача 2. «Анализ оценок» (Чтение и списки)
Задание: Есть файл grades.txt, в котором записаны оценки в столбик:

5
4
3
5

Нужно прочитать файл и посчитать средний балл.

Решение: (Сначала создай файл grades.txt вручную или кодом, запиши туда цифры)
'''
total = 0
count = 0

with open("grades.txt", "r") as file:
    for line in file:
        # line.strip() убирает лишний символ \n
        score = int(line.strip()) 
        total += score
        count += 1

if count > 0:
    print(f"Средний балл: {total / count}")
else:
    print("Файл пуст")