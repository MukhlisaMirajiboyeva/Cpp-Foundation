#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

// Функция шифрования: работает напрямую с памятью через указатель
void encryptData(char* ptr, int key) {
    // Пока не встретим конец строки (нуль-терминатор)
    while (*ptr != '\0') {
        *ptr = *ptr + key; // Сдвигаем код символа (шифр Цезаря)
        ptr++;             // Арифметика: переходим к следующей ячейке памяти
    }
}

int main() {
    SetConsoleOutputCP(65001);

    vector<string> database; // Динамический список агентов
    bool working = true;

    cout << "--- КИБЕР-АРХИВ v1.0 ---" << endl;

    while (working) {
        cout << "\n1. Добавить агента\n2. Список\n3. Зашифровать (new/delete)\n4. Выход\nВыбор: ";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Введите кодовое имя: ";
            string name;
            cin >> name;
            database.push_back(name); // Вектор сам расширяет память
            break;
        }
        case 2: {
            cout << "--- СПИСОК АГЕНТОВ ---" << endl;
            for (int i = 0; i < database.size(); i++) {
                cout << i << ". " << database[i] << endl;
            }
            break;
        }
        case 3: {
            cout << "Введите номер агента для шифрования: ";
            int index;
            cin >> index;

            // Логика валидации
            if (index < 0 || index >= database.size()) {
                cout << "Ошибка: Неверный индекс!" << endl;
                continue; // Возврат в начало цикла
            }

            string target = database[index];
            int len = target.length();

            // === ДИНАМИЧЕСКАЯ ПАМЯТЬ ===
            // Выделяем буфер ровно под размер строки + 1 (для \0)
            char* buffer = new char[len + 1];

            // Копируем данные из string в наш сырой массив
            for (int i = 0; i < len; i++) {
                buffer[i] = target[i];
            }
            buffer[len] = '\0'; // Завершающий символ

            // Шифруем данные в Куче
            encryptData(buffer, 3); // Сдвиг на 3 буквы

            // Записываем результат обратно в базу
            database[index] = string(buffer);
            cout << "Данные зашифрованы: " << database[index] << endl;

            // ОЧИСТКА: Удаляем временный буфер
            delete[] buffer; 
            break;
        }
        case 4:
            working = false;
            break;
        default:
            cout << "Неверная команда." << endl;
        }
    }

    cout << "Система отключена." << endl;
    return 0;
}