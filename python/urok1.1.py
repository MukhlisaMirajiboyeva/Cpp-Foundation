score = int(input("введите балл (0-100): "))

if score >= 90:
    grade = "A"
elif score >= 75:
    grade = "B"
elif score >= 60:
    grade = "C"
else:
    grade = "F"
print(f"ваша оценка: {grade}")