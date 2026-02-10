nums = [-5, 10, -2, 15, -8, 20, 0]

result = list(
    map(
        lambda x: x * 10,
        filter(lambda x: x > 0, nums)
    )
)

print(result)
