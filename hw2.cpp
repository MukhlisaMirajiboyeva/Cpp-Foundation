#include <iostream>
using namespace std;
int main () {
    int a = 5;
    int b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << "\nb= " << b << endl;
    cout << endl;

    int total_sm;
    cout << " Santimetrni kiriting ";
    cin >> total_sm;
    cout << "Bu " << total_sm / 100 << " metr va " << total_sm % 100 << " santimetr\n";

    double g1, g2, g3;
    cout << " 3ta bahoni kiriting ";
    cin >> g1 >> g2 >> g3;
    double average = (g1 + g2 + g3) / 3;
    cout << "O`rtacha baho: " << average;

    return 0;
}