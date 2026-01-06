#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) continue;
        if (i == 19) break;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}