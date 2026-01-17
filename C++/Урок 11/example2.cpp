#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int n = 10;
    int* pInt = &n;

    cout << "Размер int в байтах: " << sizeof(int) << endl;
    cout << "Адрес pInt до:    " << pInt << endl;
    pInt++; 
    cout << "Адрес pInt после: " << pInt << " (прибавилось 4 байта)" << endl;

    cout << "--------------------------" << endl;

    double d = 5.5;
    double* pDouble = &d;

    cout << "Размер double в байтах: " << sizeof(double) << endl;
    cout << "Адрес pDouble до:    " << pDouble << endl;
    pDouble++; 
    cout << "Адрес pDouble после: " << pDouble << " (прибавилось 8 байт!)" << endl;

    return 0;
}