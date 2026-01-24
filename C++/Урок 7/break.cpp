#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Checking box number: " << i << endl;

        if (i == 3) {
            cout << "Found it! Stopping the search." << endl;
            break; // Выходим из цикла СОВСЕМ
        }
    }
    cout << "I am out of the loop!" << endl;
    return 0;
}