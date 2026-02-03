def sum_all(*numbers):
    total = 0
    for n in numbers: # Перебираем всё, что передали
        total += n
    return total

print(sum_all(1, 2, 3))       # 6
print(sum_all(10, 670, 30, 78, 6, 89)) # 100