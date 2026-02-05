import random
symbols ='ABSFDGO23459'
password =''
for i in range(6):
    char = random.choice(symbols)
    password = password + char
print(f"Ваш новый пароль: {password}")