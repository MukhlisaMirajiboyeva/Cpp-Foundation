# 1. задача
logins = ["sasha", "ekaterina", "alexey", "maria"]

emails = list(map(lambda login: login + "@company.com", logins))

print(emails)

# 2. задача
comments = [
    "прекрасный товар",
    "купи это прямо сейчас, спам",
    "спасибо за доставку",
    "это не спам, честно",
    "спам тут"
]

clean_comments = list(
    filter(lambda comment: "спам" not in comment.lower(), comments)
)

print(clean_comments)

# 3. задача
nums = [-5, 10, -2, 15, -8, 20, 0]

result = list(
    map(
        lambda x: x * 10,
        filter(lambda x: x > 0, nums)
    )
)
print(result)