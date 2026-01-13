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
        cout << " КИБЕР-АРХИВ";
        cout << "1. Добавить агента";
        cout << "2. Показать всех";
        cout << "3. Зашифровать агента";
        cout << "4. Выход";
        cout << "Выберите пункт:";
        cin >> choice;

        switch (choice) {

        
        case 1: {
            string name;
            cout << "Введите имя агента: ";
            cin >> name;
            database.push_back(name);
            cout << "Добавлено!";
            break;
        }

        
        case 2: {
            cout << "Список агентов ";
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
                cout << "Ошибка: неправильный индекс!";
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

            cout << "Агент зашифрован!";
            break;
        }

        case 4:
            cout << "Выход";
            return 0;

        default:
            cout << "Неверный пункт меню!";
        }
    }

    return 0;
}

