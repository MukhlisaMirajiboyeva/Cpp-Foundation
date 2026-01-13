#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (65001);

    int size;
    cout << " сколько учеников в классе? ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i+1;
    }
    cout << " последний ученик в классе: " << arr[size-1] << endl;
    delete[] arr;
    return 0;
}