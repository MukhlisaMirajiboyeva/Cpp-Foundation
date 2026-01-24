def is_even(number):
    if number % 2 == 0:
        return True
    else:
        return False
    #продвинутый вариант одной строкой: return number % 2 == 0
    
for i in range(1, 6):
    if is_even(i):
        print(f"{i}-четное")
    else:
        print(f"{i}-нечетное")