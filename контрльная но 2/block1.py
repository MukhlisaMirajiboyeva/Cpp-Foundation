#задача 1
def is_even(number):
    if number % 2 == 0:
        return True
    else:
        return False
    
    
#задача 2
def describe_person(name, age=18):
    print(f"Имя: {name}, Возраст: {age}")
#вопрос №1
'''
print() просто выводит текст или что написали на экран
return() возвращает значение обратно без этого код не будеть работать 

#вопрос №2
Аргументы по умолчанию  это значения  которые уже заданы в функции заране

Пример:

def func(a, b=10):
    print(a, b)



'''
