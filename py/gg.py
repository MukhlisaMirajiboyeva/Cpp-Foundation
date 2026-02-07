products = ["non", "hul", "gul"]

with open("shopping.txt", "w") as f:
    for item in products:
        f.write(item + "\n")
        
print("Fayl is end")

''' 
read - Просто читает вес текст поместив в одну стороку
readlines - Читает файл в СПИСОК
readline - Читает по одной строке, читает одну строку за раз и считается самым экономным вариантом

f.seek(0) - возвращает курсор в файле в начало

'''