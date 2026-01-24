score = int(input("Введите балл (0-100): "))

if score >= 90:
    grade = 'A'
elif score >= 75:
    grade = 'B'
elif score >= 60:
    grade = 'C'
else:
    grade = 'F' # Двойка

print(f"Ваша оценка: {grade}")
