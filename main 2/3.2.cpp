#include <iostream>
using namespace std;

int main() {
    int age;
    bool isSunday;

    cin >> age >> isSunday;

    if (age < 7 || isSunday) {
        cout << "Free entry!" << endl;
    } else {
        cout << "You need to buy a ticket." << endl;
    }

    return 0;
}