#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int arr[2] = {2, 4}; // arr[0] это наша 'a', arr[1] это 'b'
    int *p = &arr[0];    // p указывает на начало (на 2)

    std::cout << "Начало: a=" << arr[0] << ", b=" << arr[1] << std::endl;

    *p = 3;              // Изменяем a через указатель
    p++;                 // Прыгаем на 4 байта вперед (на b)
    
    (*p)++;              // Увеличиваем b
    std::cout << "Шаг 2:  a=" << arr[0] << ", b=" << arr[1] << std::endl;

    *p = *(p - 1);       // Копируем значение a в b через адреса
    std::cout << "Финал:  a=" << arr[0] << ", b=" << arr[1] << std::endl;

    return 0;
}