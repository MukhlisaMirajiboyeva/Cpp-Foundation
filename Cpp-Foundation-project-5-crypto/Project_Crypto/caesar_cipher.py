import math

def decode_caesar(text):
    # ЗАДАЧА 1: Рассчитай сдвиг как квадратный корень из 9
    shift = int(math.sqrt(9)) # ИСПОЛЬЗУЙ math.sqrt()
    
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    decoded_text = ""

    # ЗАДАЧА 2: Напиши цикл, который проходит по каждой букве в text.
    # Найди позицию буквы в алфавите, отними shift и добавь новую букву в decoded_text.
    
    # ТВОЙ КОД ЗДЕСЬ (цикл for)
    for char in text:
        if char in alphabet:
            index = alphabet.index(char)
            new_index = (index - shift) % len(alphabet)
            decoded_text += alphabet[new_index]
        else:
            decoded_text +=char
    return decoded_text

# ВОПРОС: Что будет, если смещение (индекс) выйдет за пределы алфавита 
# пайтон возьмет букву с конца строки
# (например, станет меньше 0)? Какой оператор поможет зациклить поиск? оператор-%
# ОТВЕТ НАПИШИ ТУТ: 

message = "ifmmp" # Должно превратиться в "hello" при сдвиге 1 (но у нас сдвиг 3!)
print(f"Результат: {decode_caesar('khoor')}") # 'khoor' при сдвиге 3 станет 'hello'