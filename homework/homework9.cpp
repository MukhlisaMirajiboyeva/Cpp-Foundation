#include <iostream>
#include <windows.h>
using namespace std;

// 1. задача
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    SetConsoleOutputCP (65001);
    int a = 10;
    int b = 20;
    cout << " до swap: a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << " после swap: a = " << a << " b = " << b << endl;

    cout << endl;

    // 2. задача

    int count;
    cout << " сколько товаров вы хотите купить? ";
    cin >> count;

    double* prices = new double[count];
    double sum = 0;

    for (int i = 0; i < count; i++) {
        cout << " введите цену товара " << i + 1 << ": ";
        cin >> prices[i];
        sum += prices[i];
    }
    cout << " общая сумма: " << sum << endl;
    delete[] prices;
    prices = nullptr;
    cout << endl;

    // 3. задача
    const char* message = "Hello";
    const char* ptr = message;

    while (*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}