title = input("Введите название статьи: ")

title = title.strip().upper()

result = title + "!" * len(title)

print(result)
