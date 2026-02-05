# Файл: text_utils.py

# Переменная (константа), которую тоже можно импортировать
AUTHOR = "Ваш ИИ-помощник"

def count_words(text):
    """Считает количество слов в тексте"""
    words = text.split()
    return len(words)

def clean_text(text):
    """Убирает лишние пробелы по краям и переводит в нижний регистр"""
    return text.strip().lower()

def make_loud(text):
    """Превращает текст в КРИК"""
    return text.upper() + "!!!"