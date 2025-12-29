#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int a[10] = { 5, 12, 35, 56, 1, 23, 8, 3, 9, 15};
    int sum = 0;
    
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    double average = (double)sum/10;
    cout << " сумма: " << sum << endl;
    cout << " среднее арифмитическое: " << average << endl;
    return 0;
}