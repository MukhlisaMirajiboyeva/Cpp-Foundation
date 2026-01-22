login = input("придумайте логин: ").strip()
has_digit = False
if len(login) > 5:
    for char in login:
        if char.isdigit():
            has_digit = True
            break
        if has_digit:
            print("логин принят")
        else:
            print("ошибка, в логине должна была быть хотя бы одна цифра")
else:
    print("ошибка, логин слишком короткий")