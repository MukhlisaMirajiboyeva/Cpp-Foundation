#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int size;
    cout << "Сколько учеников в классе? ";
    cin >> size; // Пользователь вводит, например, 500

    // 1. Выделяем память ровно под 'size' элементов
    // Обрати внимание на квадратные скобки []
    int* arr = new int[size]; 

    // Теперь arr работает как обычный массив!
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // Заполняем номерами
    }

    cout << "Последний ученик под номером: " << arr[size - 1] << endl;

    // 2. Удаление МАССИВА
    // Важно: для массива используем delete[]
    delete[] arr; 

    return 0;
}