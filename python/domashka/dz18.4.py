students = ["Алина", "Тимур", "Жасмин", "Руслан"]
grades = [5, 3, 4, 5]

grade_book = dict(zip(students, grades))
print(grade_book)

best_student = max(grade_book, key=grade_book.get)
print(best_student)

export_data = list(grade_book.items())
print(export_data)