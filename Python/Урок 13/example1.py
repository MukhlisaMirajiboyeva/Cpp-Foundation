# 1. STR (Строка) - Имя персонажа
hero_name = "Shadow_Hunter"

# 2. INT (Целое число) - Уровень героя
level = 5

# 3. FLOAT (Дробное число) - Здоровье
health = 99.5

# 4. BOOL (Логический тип) - Есть ли магия?
is_wizard = True

# 5. NoneType (Пустота) - Клан/Гильдия
# Используем None, чтобы показать, что герой пока "ничей".
guild = None 

# --- Вывод информации (f-строка) ---
print("--- КАРТОЧКА ГЕРОЯ ---")
print(f"Имя:     {hero_name} (Тип: {type(hero_name)})")
print(f"Уровень: {level} (Тип: {type(level)})")
print(f"Здоровье:{health} (Тип: {type(health)})")
print(f"Маг?:    {is_wizard} (Тип: {type(is_wizard)})")
print(f"Гильдия: {guild} (Тип: {type(guild)})")
