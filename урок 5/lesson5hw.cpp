#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int height = 170; 
    bool hasTicket = true;

    if (height && hasTicket) {
        cout << "Welcome to the ride!" << endl;
    } else {
        cout << "Sorry, you can't go." << endl;
    }
    return 0;
}