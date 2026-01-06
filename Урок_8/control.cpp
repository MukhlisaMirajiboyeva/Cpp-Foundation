#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main () {
    SetConsoleOutputCP (CP_UTF8);
    // Задание 3
    std::string color;
    cout << "Напишите свой любимый цвет: ";
    cin >> color;
    cout << "Ваш любимый цвет - " << color << "! Красивый выбор! \n";

    // Задание 5
    int yourNumber;
    cout << "Введите любое число: ";
    cin >> yourNumber;

    if (yourNumber > 0) {
        cout << "Твоё число положительное. \n";
    }   else if (yourNumber == 0) {
            cout << "Твоё число равен нулю \n";
    }   else { cout << "Твоё число отрицательное. \n";
    }

    // Задание 6
    int dayNumber;
    cout << "Введите номер дня недели: ";
    cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            cout << "Понидельник! \n";
            break;
        case 2:
            cout << "Вторник! \n";
            break;
        case 3:
            cout << "Среда! \n";
            break;
        case 4:
            cout << "Четверг! \n";
            break;
        case 5:
            cout << "Пятница! \n";
            break;
        case 6:
            cout << "Суббота! \n";
            break;
        case 7:
            cout << "Воскресенье! \n";
            break;
        default:
            cout << "Такого дня не существует! \n";
            break;
    }

    // Задание 8
    for ( int i = 1; i >= 10; i++) {
        if ( i%2 == 0)
        cout << i;
    }


    // Задание 9 не смог :(
    bool secret = 1277;
    int code;
    cout << "Введите пароль: ";
    cin >> code;
    
    while (code != secret) {
        cout << "Не правильный пароль! Попробуйте ещё раз! \n";
        if ()
    }   
    
   
    cout << "Доступ разрешён!";
    return 0;
}