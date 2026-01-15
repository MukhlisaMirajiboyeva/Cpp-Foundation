#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    const int N = 5;
    int a[N] = {15, 42, 7, 89, 23};

    int mx = a[0];
    int maxIndex = 0;

    for (int i = 1; i < N; i++){
        if (a[i] > mx) {
            mx = a[i];
            maxIndex = i;
        }
    }
    cout << "Максимальное число : " << mx << endl;
    cout << "Индекс максимума: " << maxIndex << endl;
    return 0;
}

