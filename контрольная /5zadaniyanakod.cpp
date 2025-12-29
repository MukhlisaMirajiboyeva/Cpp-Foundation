#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Введите целое число: ";
    cin >> x;

    if (x > 0) {
        cout << "Число положительное";
    } else if (x < 0) {
        cout << "Число отрицательное";
    } else {
        cout << "Число равно нулю";
    }

    return 0;
}
