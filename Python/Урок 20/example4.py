with open("data.txt", "w+") as f:
    f.write("Python")
    # Сейчас курсор в конце слова Python. Если прочитать — будет пустота.
    
    f.seek(0) # Возвращаем курсор в начало
    content = f.read()
    print(content) # Python