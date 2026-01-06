#include <iostream>
using namespace std;

int main() {
    int age;
    bool isSunday;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Is it Sunday? (1 for yes, 0 for no): ";
    cin >> isSunday;

    if (age < 7 || isSunday) {
        cout << "Free entry!" << endl;
    } else {
        cout << "You need to buy a ticket." << endl;
    }

    return 0;
}