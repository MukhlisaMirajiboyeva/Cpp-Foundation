# Level_1/login.py
import sys
import os

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))
import system_core

def check_password(password):
    # ЗАДАНИЕ: Исправьте эту функцию!
    # Пароль администратора: "admin_omega"
    # Если пароль верный - функция должна вернуть True
    # Сейчас она всегда возвращает False :(
    
    if password == "admin_omega":
        print("Пароль верный...")
        return False # <--- ОШИБКА ЗДЕСЬ
    else:
        return False

# --- НЕ МЕНЯЙТЕ КОД НИЖЕ ---
print("--- СИСТЕМА БЕЗОПАСНОСТИ OMEGA ---")
user_pass = input("Введите пароль доступа: ")

if check_password(user_pass):
    print("\n[ACCESS GRANTED]")
    print("Доступ разрешен.")
    system_core.add_points(50)
    print("СЛЕДУЮЩИЙ ШАГ: Найдите в папке проекта скрытую директорию: 'secure_folder_88'")
else:
    print("\n[ACCESS DENIED]")
    print("Неверный пароль или ошибка в протоколе безопасности.")