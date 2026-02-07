#задача 1

def is_even(number):
    return number % 2 == 0


#задача 2

def describe_person(name, age =18):
    print(f"Имя: {name}, Возраст: {age}")
describe_person("Анна")
describe_person("Юлия", 19)


'''
№1
print() просто выводит текст на экран

return завершает выполнение функции и возвращает значение

№2
аргуметы по умолчанию - это запасные значения для функции. если при вызыве не передали аргумент
'''

#пример для аргумента

def greet(name):
    print(f"привет, {name}!")
greet("Ali")
greet("Mira")

