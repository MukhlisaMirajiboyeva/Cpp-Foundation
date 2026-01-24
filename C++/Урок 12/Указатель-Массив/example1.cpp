#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // Создаем указатель ptr и ставим его в начало массива (на число 10)
    int *ptr = arr; 

    cout << "Первый элемент: " << *ptr << endl; // Выведет 10

    // Сдвигаем указатель на 2 шага вперед
    ptr = ptr + 2; 
    cout << "Третий элемент: " << *ptr << endl; // Выведет 30 (мы на ячейке 2)

    return 0;
}