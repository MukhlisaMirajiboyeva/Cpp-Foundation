prices = [1000, 2000, 3000]
discounted = list(map(lambda x: x * 0.9, prices))
print(discounted)

ages = [10, 18, 54, 4, 23, 2, 66]
adults = list(filter(lambda age: age >= 18, ages))
print(adults)

salaries = [800, 1200, 500, 2000, 900, 1500]
score = list(map(lambda g: g * 1.15, filter(lambda x: x < 1000, salaries)))
print(score)

citles = [("Qarshi", 123), ("Toshkent", 321), ("Samarqand", 1264)]
sarti = sorted(citles, key=lambda city: city[1])
print(sarti)