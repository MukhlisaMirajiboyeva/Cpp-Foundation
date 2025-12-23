#include <iostream>
using namespace std;

int main() {
    cout << "Красивые числа (четные, но не кратные 4):" << endl;

    for (int i = 1; i <= 20; i++) {
        // Условие: (делится на 2) И (НЕ делится на 4)
        if (i % 2 == 0 && i % 4 != 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}