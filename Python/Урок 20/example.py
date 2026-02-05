f = open("file.txt", "w", encoding="utf-8")
f.write("Привет")
f.close()  # Если забыть эту строчку, файл может сломаться!