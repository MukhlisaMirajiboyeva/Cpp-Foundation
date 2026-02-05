cities = [("москва", 11920000), ("новосибирск", 1613000), ("екатеринбург", 1494000)]
sortedcit = sorted(cities, key=lambda city:city[1])
print(sortedcit)