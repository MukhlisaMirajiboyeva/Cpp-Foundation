
laptop = {
    "brand": "MacBook",
    "model": "M3 pro",
    "ram": 8,
    "price": 1200
}

laptop["ram"] = 18

laptop["color"] = "Silver"

sold_price = laptop.pop("price")
print(f"Товар продан за {sold_price} долларов")

for key, value in laptop.items():
    print(f"Характеристика: {key} | Значение: {value}")