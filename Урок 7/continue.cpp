#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Пропускаем всё, что ниже, и идем к i = 4
        }
        cout << "Number: " << i << endl;
    }
    return 0;
}