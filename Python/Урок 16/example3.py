# Если msg не передадут, он будет равен "Привет"
def greeting(name, msg="Привет"):
    print(f"{msg}, {name}!")

greeting("Иван")             # Вывод: Привет, Иван!
greeting("Анна", "Good morning") # Вывод: Good morning, Анна!