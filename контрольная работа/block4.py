#задача 1

numbers = [1, 5, 8, 10, 13, 20]
result = list(filter(lambda x: x % 5 == 0, numbers))
print(result)

#задача 2

prices = ["100$", "200$", "500$"]
numvers = list(map(lambda x: int(x.replace("$", "")), prices))
print(numbers)

#задача 3

numbers = [ -2, 3, -1, 5]
result = list(map(lambda x : x ** 2, filter(lambda x : x > 0, numbers)))
print(result)

'''
№1

потому что map() возвращет каждый переборанный обьект, а не список

№2

когда функция сложная или многократнаяб проще читать и отлаживать

'''