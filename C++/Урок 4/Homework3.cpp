#include <iostream>
using namespace std;
int main () {
    int number = 20;
    if ( number > 0) {
        cout << "The number is positive.";
    } else { cout << " The number is zero or negative.";
    } 
    
    int score = 77;
    if (score >= 90) {
        cout << "Your grade is A (Excellent)";
    } else if (score >= 70) {
        cout << " Your grade is B(Good)";
    } else if (score >= 50) {
        cout << " Your grade is C(Satisfactory)";
    } else { 
        cout << " Your grade is F(Fail)";
    }

    double Num1;
    double Num2;
    char operation;
    cout << "Please enter first number: ";
    cin >> Num1;
    cout << "Please enter second number: ";
    cin >> Num2;
    cout << "Please enter operation: ";
    cin >> operation;
    if( operation == '+' ) {
        cout << "Result: " << Num1 + Num2 << endl;
    } else if ( operation == '-' ) {
        cout << "Result: " << Num1 - Num2 << endl;
    } else if ( operation == '*' ) {
        cout << "Result: " << Num1 * Num2 << endl;
    } else if ( operation == '/' ){ 
        cout << "Result: " << Num1 / Num2 << endl;
    }else {
        cout << "Error: Invalid operation." << endl;
    }

    
    
    return 0;
}