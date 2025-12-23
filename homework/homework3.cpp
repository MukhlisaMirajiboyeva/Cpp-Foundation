#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);

     /* 1. Задача */
     
    int number = 25;
    if (number > 0) {
        cout << " the number is positive " << endl;
    } else {
        cout << " the number is zero or negative " << endl;
    }
    
    /* 2. Задача */
    
    int score = 75;

    if (score >= 90) {
        cout << " your grade is A " << endl;
    } else if (score >= 70) {
        cout << " your grade is B " << endl;
    } else if (score >= 50) {
        cout << " your grade is C " << endl;
    } else {
        cout << " your grade is F " << endl;
    }
    
    /* 3.Задача */
    
    double num1;
    double num2;
    char operation;

    cout << " enter first number: ";
    cin >> num1;

    cout << " enter second number: ";
    cin >> num2;

    cout << " enter operation (+, -, *, /): ";
    cin >> operation;
    
    if (operation == '+') {
        cout << " result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << " result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << " result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        cout << " result: " << num1 / num2 << endl;
    } else {
        cout << " error: invalid operator." << endl;
    }

    return 0;
}