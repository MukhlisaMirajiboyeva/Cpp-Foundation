#include <iostream>
using namespace std;

int main() {
    int temperature;
    bool isEcoMode;

    cout << "Enter the temperature: ";
    cin >> temperature;

    cout << "Is eco mode on? (1 for yes, 0 for no): ";
    cin >> isEcoMode;

    if (temperature > 25 && !isEcoMode) {
        cout << "AC is ON" << endl;
    } else {
        cout << "AC is OFF" << endl;
    }

    return 0;
}