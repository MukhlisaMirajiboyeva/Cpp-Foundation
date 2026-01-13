#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

int main () {
    SetConsoleOutputCP (65001);
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << "First element: " << *ptr << endl;

    ptr = ptr + 2;
    cout << "Thirds element: " << *ptr << endl;

    return 0;

}