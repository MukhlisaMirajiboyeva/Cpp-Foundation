def calc_average(name, *grades):
    if len(grades) == 0:
        return "Нет оценок"

    total = sum(grades)
    count = len(grades)
    average = round(total / count, 1)

    return f"Ученик {name}: Средний балл {average}"
