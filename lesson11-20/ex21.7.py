salaries = [800, 1200, 500, 2000, 900, 1500]
low_paid = filter(lambda n: n<1000, salaries)
maps = list(map(lambda x: x * 1.15, low_paid))
print(maps)

# result = list(map(lambda x: x* 1.15, filter(lambda x: x < 1000, salaries)))
# print(result)