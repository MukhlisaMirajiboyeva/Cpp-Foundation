#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    const int N = 5;
    int a[N] = { 15, 42, 7, 89, 23} ;
    int mx = a[0];
    int MaxIndex = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            MaxIndex = i;
        }
        
    }

    cout << "максимальное число: " << mx << endl;
    cout << "индекс максимума: "  << MaxIndex << endl;
    return 0;
}