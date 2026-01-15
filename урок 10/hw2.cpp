#include <iostream>
using namespace std;

int calculate(int a, int b, char operation) {
    if (operation == '+') {
        return a + b;
    } 
    else if (operation == '-') {
        return a - b;
    } 
    else if (operation == '*') {
        return a * b;
    } 
    else {
        return 0;
    }
}

int main() {
    int x, y;
    char op;

    cout << "Введите два числа: ";
    cin >> x >> y;

    cout << "Введите операцию (+, -, *): ";
    cin >> op;

    cout << "Результат: " << calculate(x, y, op);

    return 0;
}