#include <iostream>
#include <vector>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector<int> v;
    int num;

    std::cout << "Введите 5 чисел:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> num;
        if (num % 2 == 0) {
            // Вставляем четное число в самое начало
            v.insert(v.begin(), num);
        } else {
            // Добавляем нечетное число в конец
            v.push_back(num);
        }
    }

    for (int x : v) std::cout << x << " ";
    v.push_back(44); // Добавляем 44 в конец вектора
    std::cout << "\nРазмер вектора после добавления 44: " << v.size() << std::endl;
    std::cout << "\nЁмкость вектора : " << v.capacity() << std::endl;
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    v.insert(v.begin() + 2, 100); // Вставляем 100 на позицию с индексом 2
    std::cout << "\nВставили 100 на позицию 2: "  << std::endl;
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    v.erase(v.begin() + 3); // Удаляем элемент на позиции с индексом 3
    std::cout << "\nУдалили элемент на позиции 3: "  << std::endl;
    for (int x : v) std::cout << x << " ";  // range-based for loop

    return 0;
}