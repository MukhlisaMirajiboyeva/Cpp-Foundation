#include <iostream>
#include <vector>
#include <string>
#include <clocale>
using namespace std;


void encrypt(char* str, int key) {
    while (*str != '\0') {
        *str = *str + key;
        str++;              
    }
}

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");

    vector<string> database;
    int choice;

    while (true) {
        cout << "\n===== КИБЕР-АРХИВ =====\n";
        cout << "1. Добавить агента\n";
        cout << "2. Показать всех\n";
        cout << "3. Зашифровать агента\n";
        cout << "4. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {

        
        case 1: {
            string name;
            cout << "Введите имя агента: ";
            cin >> name;
            database.push_back(name);
            cout << "Добавлено!\n";
            break;
        }

        
        case 2: {
            cout << "\n=== Список агентов ===\n";
            for (int i = 0; i < database.size(); i++) {
                cout << i << ": " << database[i] << endl;
            }
            break;
        }

        
        case 3: {
            int index;
            cout << "Введите индекс агента для шифровки: ";
            cin >> index;

            if (index < 0 || index >= database.size()) {
                cout << "Ошибка: неправильный индекс!\n";
                continue;
            }

            string s = database[index];

            int len = s.length();
            char* buffer = new char[len + 1]; 

            
            for (int i = 0; i < len; i++) {
                buffer[i] = s[i];
            }
            buffer[len] = '\0';

            
            encrypt(buffer, 3);

            
            database[index] = buffer;

            
            delete[] buffer;

            cout << "Агент зашифрован!\n";
            break;
        }

        case 4:
            cout << "Выход...\n";
            return 0;

        default:
            cout << "Неверный пункт меню!\n";
        }
    }

    return 0;
}

