score = int(input("Ведите балл (0-100):"))

if score >= 90:
    grade = 'A'
elif score >= 75:
    grade = 'B'
elif score >= 60:
    grade = 'C'
else:
    grade = 'F'
print(f"Ваша оценка: {grade}")