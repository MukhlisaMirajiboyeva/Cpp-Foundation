#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (65001);
    
    int* pNumber = new int;
    *pNumber = 100;
    cout << " число в динмаической памяти: " << *pNumber << endl;
    delete pNumber;

    return 0;
}