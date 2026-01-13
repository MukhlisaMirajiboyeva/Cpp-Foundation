#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (65001);
    
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    cout << " первый элемент: " << *ptr << endl;
    ptr = ptr+2;
    cout << " третий элемент: " << *ptr << endl;
    return 0;
}
