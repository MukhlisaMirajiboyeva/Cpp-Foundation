cities = [(" москва", 15498250), ("новосибирск", 1026541), ("казань", 120)]
sorted_cities = sorted(cities, key= lambda city : city[1])
print(sorted_cities)