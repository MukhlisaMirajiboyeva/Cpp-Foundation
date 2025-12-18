#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);

    /* 1. Задача */
    
    int a = 5;
    int b = 10;
    cout << " начало: a= " << a << " b= " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << " конец: a= " << a << " b= " << b << endl;
    
    /* 2. Задача */
    
    int total_cm;
    cout << " введите сантиметры: ";
    cin >> total_cm;

    int meters = total_cm / 100;
    int centimeters = total_cm % 100;

    cout << " это " << meters << " полных метров и "
    << centimeters << " сантиметра " << endl;

    /* 3. Задача */
    
    int g1, g2, g3;
    cout << " введите 3 оценки ";
    cin >> g1 >> g2 >> g3;
    double average = (g1 + g2 + g3) / 3.0;
    cout << " средний балл: " << average << endl;

    return 0;
}