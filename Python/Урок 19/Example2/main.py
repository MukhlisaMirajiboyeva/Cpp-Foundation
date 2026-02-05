# Файл: main.py

# Способ 1: Импортируем весь модуль (как коробку с инструментами)
import text_utils

# Способ 2: Импортируем конкретную функцию (берем только молоток)
from text_utils import make_loud

# --- Использование ---

message = "   Привет,    как Твои Дела?   "

# 1. Используем функцию из "коробки" (через точку)
clean_msg = text_utils.clean_text(message)
print(f"Чистый текст: '{clean_msg}'")

# 2. Используем переменную из модуля
print(f"Автор модуля: {text_utils.AUTHOR}")

# 3. Используем конкретную функцию (без точки, мы её достали в начале)
loud_msg = make_loud("я прошел тему модули")
print(loud_msg)

# 4. Считаем слова
count = text_utils.count_words(message)
print(f"Количество слов: {count}")