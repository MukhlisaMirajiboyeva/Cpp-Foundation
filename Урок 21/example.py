# 1. Старый способ (def):
def square(n):
    return n * n  # Нужно писать return

print(square(5)) # Вывод: 25

# 2. Новый способ (lambda):
# Слово lambda | Аргумент n | Двоеточие | Что вернуть (n * n
square_lambda = lambda n: n * n  # Лямбда-функция, не требует return