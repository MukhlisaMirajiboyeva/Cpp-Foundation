#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";

    // 1. Доступ по индексу
    std::cout << "Первый символ: " << s[0] << std::endl; // 'H'

    // 2. Поиск подстроки
    int pos = s.find("World"); // Вернет 7
    std::cout << "Слово World начинается с индекса: " << pos << std::endl;

    // 3. Вырезание подстроки (от 7 индекса, 5 символов)
    std::string sub = s.substr(7, 5); 
    std::cout << "Вырезанное слово: " << sub << std::endl; // "World"

    // 4. Изменение символа
    s[0] = 'h'; // Теперь строка начинается с маленькой буквы

    // 5. Удаление части текста
    s.erase(0, 7); // Удалит "hello, "
    std::cout << "После удаления: " << s << std::endl; // "World!"

    return 0;
}