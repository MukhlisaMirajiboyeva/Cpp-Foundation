while True:  # Бесконечный цикл
    text = input("Ты: ").strip().lower()
    if text == "стоп":
        print("Попугай улетел.")
        break # Экстренный выход
    print(f"Попугай: {text}")