import random

secret_pin = 4512

print("--- ЗАПУСК ПЕРЕБОРА ПАРОЛЯ ---")
print("Цель: Найти PIN (от 0 до 9999)")

while True:
    found_pin = random.randint(0, 9999)

    if found_pin == secret_pin:
        print(f"ПАРОЛЬ НАЙДЕН: {found_pin}")
        break
