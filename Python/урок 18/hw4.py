students = ["Алина", "Тимур", "Жасмин", "Руслан"]
grades = [5, 3, 4, 5]

grade_book = dict(zip(students, grades))

top_student = max(grade_book, key=grade_book.get)
print(f"Студент с макс. баллом: {top_student}")

final_list = list(grade_book.items())
print(f"Список кортежей: {final_list}")