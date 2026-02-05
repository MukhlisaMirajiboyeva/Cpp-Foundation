'''
Задача 3. «Копировальная машина»
Задание: Прочитать файл source.txt и скопировать всё его 
содержимое в новый файл backup.txt.
'''

# Создадим исходный файл для теста
with open("source.txt", "w") as f:
    f.write("Важные данные\nНе потеряй меня!")

# Читаем из одного, пишем в другой
with open("source.txt", "r") as src:
    content = src.read()
    
    with open("backup.txt", "w") as dst:
        dst.write(content)

print("Копирование завершено!")