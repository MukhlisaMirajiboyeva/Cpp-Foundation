#include <iostream>
using namespace std;

int main() {
    int grade_num;
    char grade_letter;
    cout << "Enter your class number (e.g., 9): ";
    cin >> grade_num;
    cout << "Enter your class letter (e.g., A): ";
    cin >> grade_letter;
    cout << "Your class: " << grade_num << grade_letter << endl;
    return 0;
}