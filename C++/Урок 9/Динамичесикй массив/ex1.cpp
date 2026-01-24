#include <iostream>
#include <vector>
#include <ctime> // Для генерации случайных чисел

int main() {
    std::vector<int> v;
    srand(time(0)); // Инициализация генератора случайных чисел

    // Заполняем вектор 15 случайными числами от 0 до 20
    for (int i = 0; i < 15; i++) {
        v.push_back(rand() % 21);
    }

    // Удаляем числа меньше 10
    // Используем итератор, так как размер вектора меняется при удалении
    for (auto it = v.begin(); it != v.end(); ) {
        if (*it < 10) {
            it = v.erase(it); // Метод erase возвращает итератор на следующий элемент
        } else {
            ++it;
        }
    }

    // Вывод результата
    for (int x : v) std::cout << x << " ";
    return 0;
}