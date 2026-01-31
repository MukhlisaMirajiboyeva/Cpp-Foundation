import random
symbols = "aowut1984"
password = ""

for i in range(5):
    char = random.choice(symbols)
    password = password + char
print(f"ваш новый пароль: {password}")