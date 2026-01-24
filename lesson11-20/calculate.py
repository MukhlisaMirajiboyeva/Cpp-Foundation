def calculate_price(price, discount = 0):
    final_price=price-(price*discount/100)
    return final_price
print(calculate_price(100, 5))

