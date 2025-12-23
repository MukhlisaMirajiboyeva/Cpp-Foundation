#include <iostream>
using namespace std;

int main() {
    int energy = 100;

    // Робот идет, пока энергии больше 10
    while (energy > 10) {
        cout << "Робот делает шаг. Текущий заряд: " << energy << "%" << endl;
        
        energy = energy - 15; // Тратим заряд

        if (energy < 30 && energy > 10) {
            cout << "!!! ВНИМАНИЕ: Низкий заряд !!!" << endl;
        }
    }

    cout << "Энергия упала до " << energy << "%. Робот засыпает." << endl;
    return 0;
}