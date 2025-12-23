#include <iostream>
using namespace std;

int main () {
    double num1 ;
    double num2 ;
    char operation ;

    cout << "enter first nember.";
    cin >> num1;

    if (operation == '+') {
        cout << "Result:" << num1 + num2 << endl;
    } else if (operation == '-') {
         cout << "Result:" << num1 - num2 << endl;
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
