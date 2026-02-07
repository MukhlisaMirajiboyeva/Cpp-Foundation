students = ["Алина", "Тимурчик", "Жасмин", "Руслан"]
grades = [5, 3, 4, 5]

grade_book = dict(zip(students, grades))
print("База данных:", grade_book)

best_student = max(grade_book, key=grade_book.get)
print("Лучшая оценка у:", best_student)

export_data = list(grade_book.items())
print("Экспорт:", export_data)
