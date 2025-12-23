#include <iostream>
using namespace std;

int main() {
    int batteryLevel = 3; // У нас 3% заряда

    // ПОКА заряд больше 0...
    while (batteryLevel > 0) {
        cout << "Phone is working. Battery: " << batteryLevel << "%" << endl;
        
        batteryLevel--; // Тратим 1% заряда за каждый круг
    }

    cout << "Phone is dead. Please charge!" << endl;
    return 0;
}