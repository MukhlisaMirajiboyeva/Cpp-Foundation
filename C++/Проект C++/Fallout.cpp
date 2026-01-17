#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

// Функция сравнения через арифметику указателей
int getSimilarity(const char* w1, const char* w2) {
    int count = 0;
    while (*w1 != '\0' && *w2 != '\0') {
        if (*w1 == *w2) count++;
        w1++; // Сдвиг указателя 1
        w2++; // Сдвиг указателя 2
    }
    return count;
}

int main() {
    SetConsoleOutputCP(65001);
    srand(time(0));

    const char* wordList[] = { "POWER", "POKER", "PANEL", "PIXEL", "PAGER" };
    const char* secret = wordList[rand() % 5];
    
    int attempts = 4;
    vector<string> history;

    cout << "--- ТЕРМИНАЛ ВЗЛОМАН. ВВЕДИТЕ ПАРОЛЬ ---" << endl;

    while (attempts > 0) {
        cout << "\nПопыток осталось: " << attempts << endl;
        for (const char* w : wordList) cout << w << " ";
        
        cout << "\nВвод (или 'HELP' для подсказки): ";
        string input;
        cin >> input;

        if (input == "HELP") {
            // ДИНАМИЧЕСКАЯ ПАМЯТЬ: создаем список ложных вариантов
            int* garbage = new int[2]; 
            int found = 0;
            for (int i = 0; i < 5 && found < 2; i++) {
                if (string(wordList[i]) != string(secret)) {
                    garbage[found++] = i;
                }
            }
            cout << ">>> Подсказка: слова под номерами " << garbage[0] << " и " << garbage[1] << " ложные." << endl;
            
            delete[] garbage; // ОЧИСТКА КУЧИ
            garbage = nullptr;
            continue; 
        }

        if (input == secret) {
            cout << "ДОСТУП РАЗРЕШЕН!" << endl;
            break;
        } else {
            int sim = getSimilarity(secret, input.c_str());
            cout << "Отказ. Сходство: " << sim << endl;
            history.push_back(input + " (Сходство: " + to_string(sim) + ")");
            attempts--;
        }
    }

    if (attempts == 0) cout << "ТЕРМИНАЛ ЗАБЛОКИРОВАН." << endl;

    cout << "\n--- Лог попыток ---" << endl;
    for (const string& s : history) cout << s << endl;

    return 0;
}