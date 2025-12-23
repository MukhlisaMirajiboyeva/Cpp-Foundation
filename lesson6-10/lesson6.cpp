#include <iostream>
using namespace std;

int main() {
    double height;
    bool hasTicket;
    cout << " enter your height (cm): ";
    cin >> height;

    cout << " do you have a ticket? (1 - yes, 0 - no): ";
    cin >> hasTicket;

    if (height >= 150 && hasTicket) {
        cout << " enjoy the ride!" << endl;
    } else {
        cout << " access denied." << endl;
    }
    return 0;
}