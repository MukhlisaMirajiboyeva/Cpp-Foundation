s = "Hello, Python"
print(s[0])  # Выведет 'H'
print(s[1])  # Выведет 'e'
print(s[0:5])   # С 0 по 4 (5 не берем) -> "Hello"
print(s[7:13])  # С 7 по 12 -> "Python" [cite: 238-239]
print(s[:5])    # С начала до 5 -> "Hello" (ноль можно не писать)
print(s[:])     # Вся строка целиком
print(s[::-1])  # Шаг -1 переворачивает строку -> "nohtyP ,olleH"