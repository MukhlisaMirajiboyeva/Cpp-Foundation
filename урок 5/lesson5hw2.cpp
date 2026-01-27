#include <iostream>
#include <windows.h.>

using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int age = 8;
    bool todaySunday = true;

    if ( age >=7 || todaySunday) {
       cout << " Free entry!" << endl;
    } else {
        cout << "You need to buy a ticket" << endl;

    }
    return 0;
}