#Вопрос №1
'''
Потому что map и filter не возвращают готовый список
list(map()) чтобы получить обычный список
#Вопрос №2
lambda — это очень короткая функция на одну строку.
Если сложнее — лучше def.
'''

#Задача №1
numbers = [1, 5, 8, 10, 13, 20]

result = list(filter(lambda x: x % 5 == 0, numbers))
print(result)

#Задача №2
prices = ["100$", "200$", "500$"]

result = list(map(lambda x: int(x.replace("$", "")), prices))
print(result)

#Задача №3 (Комбо)
numbers = [-3, 4, -1, 5, 0, 2]

result = list(map(lambda x: x**2, filter(lambda x: x > 0, numbers)))
print(result)
