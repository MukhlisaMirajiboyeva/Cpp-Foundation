login = input("Придумайте логин : ").strip()
has_digit = False
if len(login) > 5:
    for char in login:
        if char.isdigit():
            has_digit = True
            break

    if has_digit:
        print("Логин принят!")
    else:
        print("Ошибка: в логине должна быть хотя бы одна цифра.")
else:
    print("Ошибка: логин слишком короткий")