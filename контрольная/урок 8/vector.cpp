#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    vector<int> v;
    int num;

    cout << "Введите 5 чисел: " << endl;
    for (int i = 0; i < 5; i++){
        cin >> num;
        if (num % 2 == 0){
            v.insert(v.begin(), num);
        } else {
            v.push_back(num);
        }
    }
    return 0;

}
