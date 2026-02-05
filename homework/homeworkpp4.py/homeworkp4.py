# 1. задача

import random

answers = [
    "бесспорно",
    "мне кажется да",
    "пока неясно, попробуй снова",
    "даже не думай",
    "весьма сомнительно"
]

input("задай вопрос: ")
print("магический шар говорит:", random.choice(answers))
import math

# 2. задача

a = float(input("высота стены: "))
b = float(input("расстояние от стены: "))
c = math.sqrt(math.pow(a, 2) + math.pow(b, 2))
ladder_length = math.ceil(c)

print("длина лестницы:", ladder_length)