#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP ( CP_UTF8);
    int a[10] = { 5, 12, 3, 21, 8, 7, 10, 1, 9, 4};
    int sum = 0;

    for (int i = 0; i < 10; i++){
        sum +=a[i];
    }

    double avarage = (double) sum / 10;
     cout << "Сумма: " << sum << endl;
     cout << "Среднее арифметическое: " << avarage << endl;

     return 0;

}
