'''
1. нужно оборачивать в list чтобы увидеть результат, а не его местонахождение
2. lambda предназначена для важной небольшой задачи, чтобы сильно не нагружать def
'''
# 1. задача
numbers = [1, 5, 8, 10, 13, 20]
result=list(filter(lambda x: x % 5 == 0, numbers))
print(result)

# 2. задача
prices = ["100$", "200$", "500$"]
result=list(map(lambda x: int(x.replace("$", " ")), prices))
print(result)

# 3. задача
result=list(map(lambda x: x^2, filter(lambda x: x>0, numbers)))