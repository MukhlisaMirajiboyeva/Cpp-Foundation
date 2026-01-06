#include <iostream>
using namespace std;

int main() {
    const int secretPassword = 1234;
    int input;

    do {
        cin >> input;
    } while (input != secretPassword);

    cout << "Пароль верный! Доступ открыт." << endl;

    return 0;
}