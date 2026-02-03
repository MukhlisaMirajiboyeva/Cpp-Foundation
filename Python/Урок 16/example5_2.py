def go_camping(place, *backpack):
    print(f"Мы идем в {place}!")
    
    if backpack:
        print("В рюкзаке у нас:")
        for item in backpack:  # Перебираем содержимое, которое собрала звездочка
            print(f"- {item}")
    else:
        print("Мы идем налегке!")

# Вызов 1:
go_camping("Лес", "Нож", "Спички", "Гитара")
# place = "Лес"
# backpack = ("Нож", "Спички", "Гитара")

# Вызов 2:
go_camping("Парк")
# place = "Парк"
# backpack = ()  <- Пустой кортеж, ошибок нет!