def make_card(name, job):

    print("```````````````````````````")
    
    print(f"Имя: {name}")
    print(f"Профессия: {job}")
    
    print("...........................")

make_card("Davik","Cybersportsman")

def calculate_price(price, discount = 0):
    final_price = price - (price * discount / 100)
    return final_price
print(calculate_price(125000, 90))

#Продвинутый вариант одной строкой: return number % 2 == 0

def is_even(number):
    if number % 2 == 0:
        return True
    else:
        return False
for i in range(1, 6):
    if is_even(i):
        print(f"{i} - Чётное")
    else:
        print(f"{i} - Нечётное")