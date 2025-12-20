#include <iostream>
using namespace std;

int main() {
    int height;
    bool hasTicket;

    cin >> height >> hasTicket;

    if (height >= 140 && hasTicket) {
        cout << "Welcome to the ride!" << endl;
    } else {
        cout << "Sorry, you can't go." << endl;
    }

    return 0;
}