laptop = {
    "brand": "MacBook",
    "model": "Air M2",
    "ram": 8,
    "price": 1200
}

laptop["ram"] = 16 
laptop["color"] = "Silver"  

sold_price = laptop.pop("price") 
print(f"Товар продан за {sold_price} долларов")

for key, value in laptop.items():
    print(f"Характеристика: {key} | Значение: {value}")
