/* Задача 2: Скидка в магазине (Оператор ||)
Задание: Магазин дает скидку, если сегодня суббота ИЛИ сегодня воскресенье.

Создай переменную dayNumber (1 — понедельник, 7 — воскресенье).

Если число равно 6 или 7, выведи: "You get a discount!".

В остальные дни выведи: "Full price today.". */


#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    cout << "Enter day number (1-7): ";
    cin >> dayNumber;

    if (dayNumber == 6 || dayNumber == 7) {
        cout << "You get a discount!" << endl;
    } else {
        cout << "Full price today." << endl;
    }
    return 0;
}