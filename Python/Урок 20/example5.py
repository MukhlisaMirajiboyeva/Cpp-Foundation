with open("test.txt", "w+") as f:
    f.write("Hello")
    # Курсор сейчас после буквы 'o'. Читать нечего.
    
    f.seek(0) # <-- Перематываем курсор в начало (0-й байт)
    content = f.read()
    print(content) # Hello