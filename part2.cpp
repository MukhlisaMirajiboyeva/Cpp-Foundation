#include <iostream>
using namespace std;
int main() {
    int age;
    cout << " Ballingizni kiriting \n";
    cin >> age;
    if (age >= 90) {
        cout << "Grant \n";
    }   else if (age >= 50) {
        cout << "Kontrakt \n";
    } else if (age >= 30) {
        cout << "Super kontrakt \n";
    } else {
        cout << "Qabul qilinmadi";
    }
    
    return 0;
}