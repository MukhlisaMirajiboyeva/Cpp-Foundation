# data_analysis.py
# ЦУП: Нужно посчитать элементы в образце. 
# ВНИМАНИЕ: Код ниже стирает данные из файла или работает неверно! Исправь его.

def analyze_soil(filename):
    with open(filename, 'w', encoding='utf-8') as file:
        data = file.read()
    
    elements = data.split(',')
    report = {}

    # ЗАДАЧА: Посчитать количество каждого элемента
    for item in elements:
        # ТВОЙ КОД ЗДЕСЬ:
        # Если элемент уже есть в словаре report — прибавь 1.
        # Если нет — создай ключ со значением 1.
        pass

    return report

# Проверка
result = analyze_soil("soil_sample.txt")
print(f"Отчет по минералам: {result}")