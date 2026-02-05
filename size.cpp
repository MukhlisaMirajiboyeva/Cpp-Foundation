#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int size;
    cout << "сколько учеников в классе? ";
    cin >> size ;10000;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    cout << "последний ученик под номером: " << arr[size - 1] << endl;
    delete[] arr;

    return 0;

}