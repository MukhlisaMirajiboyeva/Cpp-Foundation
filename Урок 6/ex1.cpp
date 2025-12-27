/* Задача 1: Проверка на аттракцион (Оператор &&)
Задание: Представь, что ты программируешь вход на крутую горку. 
Робот должен пропустить человека, только если его рост (height) 
больше или равен 150 см И у него есть билет (hasTicket).

1. Создай переменные height и hasTicket.

2. Если оба условия верны, выведи: "Enjoy the ride!".

3. Если хотя бы одно не верно, выведи: "Access denied!". */

#include <iostream>
using namespace std;

int main() {
    int height;
    bool hasTicket;

    cout << "Enter height (cm): ";
    cin >> height;
    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;

    if (height >= 150 && hasTicket) {
        cout << "Enjoy the ride!" << endl;
    } else {
        cout << "Access denied!" << endl;
    }
    return 0;
}