#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int knowledge = 50;
    int energy = 50;
    int mood = 50;
    int day = 1;

    cout << "=== SCHOOL LIFE SIMULATOR ===\n";
    cout << "Ты обычный школьник.\n";
    cout << "Проживи 5 учебных дней.\n";

    while (day <= 5 && energy > 0 && mood > 0) {
        cout << "\n📅 День " << day << "\n";
        cout << "Знания: " << knowledge << "\n";
        cout << "Энергия: " << energy << "\n";
        cout << "Настроение: " << mood << "\n";

        cout << "\nЧто делать?\n";
        cout << "1 - Учиться\n";
        cout << "2 - Играть в комп\n";
        cout << "3 - Спать\n";
        cout << "4 - Прогулять школу\n";
        cout << "Выбор: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            knowledge += 10;
            energy -= 10;
            mood -= 5;
            cout << "Ты учился. Мозг устал.\n";
        }
        else if (choice == 2) {
            mood += 10;
            energy -= 5;
            cout << "Ты поиграл в комп.\n";
        }
        else if (choice == 3) {
            energy += 15;
            if (energy > 100) energy = 100;
            cout << "Ты поспал.\n";
        }
        else if (choice == 4) {
            mood += 5;
            knowledge -= 10;
            cout << "Ты прогулял уроки.\n";
        }
        else {
            cout << "Неверный выбор.\n";
            continue;
        }

        day++;
    }

    cout << "\n=== ИТОГ ===\n";

    if (knowledge >= 80)
        cout << "📚 Ты отличник!\n";
    else if (knowledge >= 60)
        cout << "🙂 Нормальный ученик.\n";
    else
        cout << "⚠️ Проблемы с учебой.\n";

    if (energy <= 0)
        cout << "💤 Ты выгорел.\n";
    if (mood <= 0)
        cout << "😞 Ты в депрессии.\n";

    cout << "Игра окончена.\n";
    return 0;
}