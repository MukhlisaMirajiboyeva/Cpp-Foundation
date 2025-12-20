#include <iostream>
using namespace std;

int main() {
    int temperature;
    bool isEcoMode;

    cin >> temperature >> isEcoMode;

    if (temperature > 25 && !isEcoMode) {
        cout << "AC is ON" << endl;
    } else {
        cout << "AC is OFF" << endl;
    }

    return 0;
}