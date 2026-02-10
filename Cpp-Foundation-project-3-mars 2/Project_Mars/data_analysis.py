# data_analysis.py
# ЦУП: Нужно посчитать элементы в образце.
# ВНИМАНИЕ: Код ниже стирает данные из файла или работает неверно! Исправь его.

import os

def analyze_soil(filename):
    # получаем папку, где лежит сам data_analysis.py
    base_dir = os.path.dirname(__file__)
    file_path = os.path.join(base_dir, filename)

    # открываем файл ТОЛЬКО для чтения
    with open(file_path, 'r', encoding='utf-8') as file:
        data = file.read()

    # разделяем элементы по запятой
    elements = data.split(',')

    report = {}

    # считаем количество каждого элемента
    for item in elements:
        item = item.strip()  # убираем пробелы и переносы строк
        if item:             # защита от пустых значений
            report[item] = report.get(item, 0) + 1

    return report


# запуск анализа
result = analyze_soil("soil_sample.txt")
print(result)
