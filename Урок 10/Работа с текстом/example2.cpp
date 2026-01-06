#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Установка кодовой страницы UTF-8 для консоли Windows
    // Исходная строка
    string s = "Hello C++!";
    cout << "1. Исходная строка: " << s << endl;

    // 1. s.length() или s.size()
    cout << "Размер строки: " << s.length() << " символов." << endl;

    // 2. s.find("текст")
    // Ищем, где начинается "C++"
    int pos = s.find("C++");
    if (pos != string::npos) {
        cout << "'C++' найдено на индексе: " << pos << endl;
    }

    // 3. s.erase(pos, len)
    // Удалим "C++" (3 символа), начиная с найденной позиции
    s.erase(pos, 3);
    cout << "2. После удаления: " << s << endl; // Должно быть "Hello !"

    // 4. s.insert(pos, "текст")
    // Вставим на то же место слово "World"
    s.insert(pos, "World");
    cout << "3. После вставки: " << s << endl; // "Hello World!"

    // 5. s.substr(pos, len)
    // Вырежем новое слово "World" (5 символов начиная с pos)
    string sub = s.substr(pos, 5);
    cout << "Вырезанная подстрока: " << sub << endl;

    // 6. s.push_back('c')
    // Добавим восклицательный знак в самый конец
    s.push_back('!');
    cout << "4. Финальный результат: " << s << endl; // "Hello World!!"

    return 0;
}