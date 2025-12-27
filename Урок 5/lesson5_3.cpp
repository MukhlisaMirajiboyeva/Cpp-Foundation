#include <iostream>
using namespace std;

int main() {
    double num1 = 10, num2 = 5;
    char operation = '*';

    cout << "Result: ";

    switch (operation) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Error: Unknown operation!" << endl;
            break;
    }

    return 0;
}