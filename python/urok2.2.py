print("Я попугай! Скажи что нибудь (или 'стоп' чтобы я замолчал):")

text = ""
while text != "стоп":
    text = input("Ты: ").strip().lower()

    if text != "стоп":
        print(f"Попугай: {text}")
    else:
        print("Попугай: Чирик! (замолчал)")
    