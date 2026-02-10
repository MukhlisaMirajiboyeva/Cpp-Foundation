# key_collector.py

def assemble_key():
    final_phrase = ""
    
    # ЗАДАЧА: Напиши цикл, который пройдет по числам от 1 до 3.
    # Внутри цикла формируй имя файла: f"parts/part{i}.txt"
    # Открывай каждый файл, читай его содержимое и добавляй в final_phrase.
    
    # ТВОЙ КОД ЗДЕСЬ:
    for i in range(1,4):
        filename = f"parts/part{i}.txt"
        with open(filename, "r", encoding="utf-8") as file:
            final_phrase +=file.read()

    print(f"Собранная фраза: {final_phrase}")

if __name__ == "__main__":
    assemble_key()
    