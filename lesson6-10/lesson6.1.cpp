#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    cout << " what day of the week is it today? (1-7): ";
    cin >> dayNumber;

    if ( dayNumber == 6 || dayNumber == 7 ) {
        cout << " you get a discount! " << endl;
    } else {
        cout << " full price today. " << endl;
    }
    return 0;
}