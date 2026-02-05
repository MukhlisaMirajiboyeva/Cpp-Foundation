salaries = [ 800, 1200, 500, 2000, 900, 1500]
lowpaid = filter(lambda x : x < 1000, salaries)
increase = list( map(lambda x: x * 1.15, lowpaid))
print(increase)





result = list(map(lambda x : x * 1.15, filter(lambda x: x < 1000, salaries)))
print(result)