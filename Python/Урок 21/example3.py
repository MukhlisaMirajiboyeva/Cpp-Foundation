# Без filter:
nums = [1, 2, 3, 4, 5]
evens = []
for n in nums:
    if n % 2 == 0:
        evens.append(n)
print(evens)  # [2, 4]

# С filter и lambda:
nums = [1, 2, 3, 4, 5]

# Оставь x, если (x % 2 == 0) - это правда
evens = list(filter(lambda x: x % 2 == 0, nums))

print(evens) # [2, 4]