#include <iostream>
using namespace std;

int main() {
    int height;
    bool hasTicket;

    cout << "Enter your height (cm): ";
    cin >> height;

    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;

    if (height >= 140 && hasTicket) {
        cout << "Welcome to the ride!" << endl;
    } else {
        cout << "Sorry, you can't go." << endl;
    }

    return 0;
}